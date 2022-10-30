window.onload = () => {
  const cube = document.querySelector('#cube');
  let x = 0,y = 0,degX = 0,degY = 0;

  document.body.addEventListener('mouseenter', event => {
    x = event.offsetX;
    y = event.offsetY;
  });

  document.body.addEventListener('mousemove', event => {
    const diffX = x - event.offsetX;
    const diffY = y - event.offsetY;
    const pxInDegX = window.innerWidth / 360;
    const pxInDegY = window.innerHeight / 360;
    const diffDegX = parseFloat((diffX / pxInDegX).toFixed(2));
    const diffDegY = parseFloat((diffY / pxInDegY).toFixed(2));
    const newDegX = degX + diffDegX;
    const newDegY = degY + diffDegY;
    cube.style.transform = `rotateX(${newDegY}deg) rotateY(${newDegX}deg)`;
    degX = newDegX;
    degY = newDegY;
    x = event.offsetX;
    y = event.offsetY;
  });
};