#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

/**
 * @brief Simula un algorisme "Round Robin" amb un vector de cues
 *
 * La funció itera circularment (és a dir, considerant l'element n-1 com
 * l'inmediatament anterior al 0) el vector de cues, i va afegint els elements
 * que treu del capdavant de cada cua en una cua resultat.
 *
 * @param  queues  Les cues d'entrada
 *
 * @returns La cua resultant d'aplicar l'algorisme "Round Robin"
 */
queue<std::string> round_robin(vector<queue<std::string>> &queues)
{
    queue<string> res;

    int  n = queues.size();
    bool is_empty = false;

    while (!is_empty)
    {
        is_empty = true;

        for (int i = 0; i < n; ++i)
        {
            if (!queues[i].empty())
            {
                res.push(queues[i].front());
                queues[i].pop();

                if (!queues[i].empty())
                    is_empty = false;
            }
        }
    }

    return res;
}
