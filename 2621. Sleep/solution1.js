async function sleep(millis)
{
    await new Promise((resolve,reject) => {
        setTimeout(resolve,millis);
    });
    return millis;
}

sleep(100).then(()=>console.log("hello"));