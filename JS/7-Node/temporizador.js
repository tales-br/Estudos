const schedule = require ("node-schedule")

/* COMO FUNCIONA -> https://www.npmjs.com/package/node-schedule

*    *    *    *    *    *
┬    ┬    ┬    ┬    ┬    ┬
│    │    │    │    │    │
│    │    │    │    │    └ day of week (0 - 7) (0 or 7 is Sun)
│    │    │    │    └───── month (1 - 12)
│    │    │    └────────── day of month (1 - 31)
│    │    └─────────────── hour (0 - 23)
│    └──────────────────── minute (0 - 59)
└───────────────────────── second (0 - 59, OPTIONAL)

O uso da barra no exemplo abaixo, quer dizer que ele executará de tantos em tantos tempos
*/

const tarefa1 = schedule.scheduleJob("*/5 * * * * *", function(){
    console.log(`Executando tarefa 1`, new Date().getSeconds())
})

setTimeout(function(){
    tarefa1.cancel()
    console.log("Cancelado tarefa 1")
}, 20000)

/* Outras opções da biblioteca do node:
    setImediate
    setInterval
*/

const regra = new schedule.RecurrenceRule()

regra.dayOfWeek = [new schedule.Range(1, 5)] //seg a sex
regra.hour = 17
regra.second = 30

const tarefa2 = schedule.scheduleJob(regra, function(){
    console.log(`Executando tarefa 2`, new Date().getSeconds())
})