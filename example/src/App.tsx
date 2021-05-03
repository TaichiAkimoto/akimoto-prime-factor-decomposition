import React, { useEffect } from 'react'
import AKDecomposeModule, { Counter } from 'akimoto-prime-factor-decomposition'

const App = () => {
  useEffect(() => {
    console.log(AKDecomposeModule)
  })

  return <Counter />
}

export default App
