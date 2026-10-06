/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc98cd4; end: 10bc98d07; -[SCAUserNotTrackedEvent fromDictionary:] */

void FUN_10bc98cd4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e2e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bc98d08; end: 10bc98d87; -[SCAUserRegistrationData initWithDictionary:] */

undefined1 * FUN_10bc98d08(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_11270e2e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  puVar3 = (undefined1 *)puVar2;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  puVar1 = (undefined1 *)0x0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 10bc98d88; end: 10bc98deb; -[SCAUserRegistrationData setIsRegFirst14Days:] */

void FUN_10bc98d88(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc98dec; end: 10bc98e4f; -[SCAUserRegistrationData setIsRegFirst24Hours:] */

void FUN_10bc98dec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc98e50; end: 10bc98eb3; -[SCAUserRegistrationData setIsRegFirst30Days:] */

void FUN_10bc98e50(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc98eb4; end: 10bc98f17; -[SCAUserRegistrationData setIsRegFirst7Days:] */

void FUN_10bc98eb4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc98f18; end: 10bc98f4b; -[SCAUserTrackedEvent fromDictionary:] */

void FUN_10bc98f18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e2f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__1125cc478);
  return;
}



/* Entry: 10bc98f4c; end: 10bc98fa3; -[SCAUserTrackedEvent setSaturnUserId:] */

void FUN_10bc98f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc98fa4; end: 10bc98ffb; -[SCAUserTrackedEvent setUserId:] */

void FUN_10bc98fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc98ffc; end: 10bc991b3; -[SCAUserTrackedEvent setUserNotTracked:] */

void FUN_10bc98ffc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1200c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc991b4; end: 10bc991d7;  */

undefined ** FUN_10bc991b4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2ac38;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc991d8; end: 10bc9923b;  */

undefined8 FUN_10bc991d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2ac38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2ac38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9923c; end: 10bc9925b;  */

undefined * FUN_10bc9923c(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d98268)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9925c; end: 10bc9934b;  */

undefined8 FUN_10bc9925c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7ef18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7ef18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fe90d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fe90d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fa7ad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa7ad8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102bc58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bc58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dce178;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dce178,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102bc78;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bc78,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de39b8,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9934c; end: 10bc9936b;  */

undefined * FUN_10bc9934c(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d982a0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9936c; end: 10bc99423;  */

undefined8 FUN_10bc9936c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102bc98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bc98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 4;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102bcb8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bcb8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d0b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d0b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102bcd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bcd8,param_2,param_1);
          uVar2 = 5;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99424; end: 10bc99447;  */

undefined ** FUN_10bc99424(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ecb098;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fcf9f8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc99448; end: 10bc994ab;  */

undefined8 FUN_10bc99448(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fcf9f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fcf9f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ecb098;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ecb098,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc994ac; end: 10bc994cf;  */

undefined ** FUN_10bc994ac(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11100e3b8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_11102bcf8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc994d0; end: 10bc99533;  */

undefined8 FUN_10bc994d0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102bcf8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bcf8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11100e3b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11100e3b8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99534; end: 10bc99553;  */

undefined * FUN_10bc99534(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d982d0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99554; end: 10bc995d3;  */

undefined8 FUN_10bc99554(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f606b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f606b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f606d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f606d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f606f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f606f8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc995d4; end: 10bc995f7;  */

undefined ** FUN_10bc995d4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e7a7d8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_11102bd18;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc995f8; end: 10bc9965b;  */

undefined8 FUN_10bc995f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102bd18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bd18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7a7d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e7a7d8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9965c; end: 10bc9967b;  */

undefined * FUN_10bc9965c(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d982e8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9967c; end: 10bc997a3;  */

undefined8 FUN_10bc9967c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102bd38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bd38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102bd58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bd58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102bd78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bd78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102bd98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bd98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102bdb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bdb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_11102bdd8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bdd8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 7;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_11102bdf8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bdf8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 8;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_11102be18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102be18,param_2,
                                      param_1);
                  uVar2 = 6;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc997a4; end: 10bc997c3;  */

undefined * FUN_10bc997a4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d98330)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc997c4; end: 10bc9985f;  */

undefined8 FUN_10bc997c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102be38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102be38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102bdd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bdd8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102bdf8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bdf8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102be58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102be58,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99860; end: 10bc9987f;  */

undefined * FUN_10bc99860(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d98350)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99880; end: 10bc9998b;  */

undefined8 FUN_10bc99880(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102be78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102be78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102be98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102be98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102beb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102beb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102bed8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bed8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102bef8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bef8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_11102bf18;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bf18,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_11102bf38;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bf38,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9998c; end: 10bc9999f;  */

undefined ** FUN_10bc9998c(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11102bf58;
  if (param_1 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10bc999a0; end: 10bc999c7;  */

long FUN_10bc999a0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11102bf58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bf58,param_2,param_1);
  return -(ulong)(ppuVar1 != (undefined **)0x0);
}



/* Entry: 10bc999c8; end: 10bc999e7;  */

undefined * FUN_10bc999c8(ulong param_1)

{
  if (param_1 < 0x10) {
    return (&PTR_PTR_110d98390)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc999e8; end: 10bc99bd3;  */

undefined8 FUN_10bc999e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102bf78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bf78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102bf98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bf98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102bfb8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bfb8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f61598;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f61598,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102bfd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bfd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102bff8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102bff8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110e7c8d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e7c8d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_11102c018;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c018,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_11102c038;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c038,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_11102c058;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c058,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_11102c078;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c078,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_11102c098;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c098,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_11102c0b8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c0b8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_11102c0d8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c0d8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fd9938;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd9938,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_111007298;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007298
                                                    ,param_2,param_1);
                                uVar2 = 0xf;
                                if (ppuVar1 != (undefined **)0x0) {
                                  uVar2 = 0xffffffffffffffff;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99bd4; end: 10bc99bf3;  */

undefined * FUN_10bc99bd4(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d98410)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99bf4; end: 10bc99c73;  */

undefined8 FUN_10bc99bf4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c0f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c0f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c118;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c118,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c138;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c138,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99c74; end: 10bc99c93;  */

undefined * FUN_10bc99c74(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d98428)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99c94; end: 10bc99d13;  */

undefined8 FUN_10bc99c94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c158;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c158,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f9dcb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f9dcb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c178;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c178,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99d14; end: 10bc99d37;  */

undefined ** FUN_10bc99d14(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c1b8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_11102c198;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc99d38; end: 10bc99d9b;  */

undefined8 FUN_10bc99d38(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c198;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c198,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c1b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c1b8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99d9c; end: 10bc99dbb;  */

undefined * FUN_10bc99d9c(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d98440)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99dbc; end: 10bc99e73;  */

undefined8 FUN_10bc99dbc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e69958;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e69958,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c1d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c1d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd458;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd458,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c1f8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c1f8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 4;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
          uVar2 = 3;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99e74; end: 10bc99e93;  */

undefined * FUN_10bc99e74(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d98468)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99e94; end: 10bc99f83;  */

undefined8 FUN_10bc99e94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45778;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45778,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fa8198;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa8198,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c218;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c218,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c238;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c238,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102c258;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c258,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102c278;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c278,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_11102c298;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c298,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc99f84; end: 10bc99fa3;  */

undefined * FUN_10bc99f84(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d984a0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc99fa4; end: 10bc9a093;  */

undefined8 FUN_10bc99fa4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c2b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c2b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb2cb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb2cb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fdcab8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdcab8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dcbef8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dcbef8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f20fd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f20fd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dd3638;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd3638,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_11102c2d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c2d8,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a094; end: 10bc9a0b3;  */

undefined * FUN_10bc9a094(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d984d8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a0b4; end: 10bc9a16b;  */

undefined8 FUN_10bc9a0b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f606f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f606f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c2f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c2f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c318;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c318,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c338;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c338,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fa0438;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa0438,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a16c; end: 10bc9a18b;  */

undefined * FUN_10bc9a16c(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d98500)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a18c; end: 10bc9a243;  */

undefined8 FUN_10bc9a18c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de9d98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de9d98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c358;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c358,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e53098;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e53098,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c378;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c378,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f65b98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f65b98,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a244; end: 10bc9a263;  */

undefined * FUN_10bc9a244(ulong param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_PTR_110d98528)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a264; end: 10bc9a3c3;  */

undefined8 FUN_10bc9a264(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f67c58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f67c58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c398;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c398,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c3b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c3b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c3d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c3d8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102c3f8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c3f8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f3ec98;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f3ec98,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110df3138;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df3138,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_11102c418;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c418,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_11102c438;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c438,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_11102c458;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c458,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_11102c478;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c478,param_2,
                                          param_1);
                      uVar2 = 10;
                      if (ppuVar1 != (undefined **)0x0) {
                        uVar2 = 0xffffffffffffffff;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a3c4; end: 10bc9a3e3;  */

undefined * FUN_10bc9a3c4(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d98580)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a3e4; end: 10bc9a4b7;  */

undefined8 FUN_10bc9a3e4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea818,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ebd518;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ebd518,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102c498;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c498,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102c4b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c4b8,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a4b8; end: 10bc9a4db;  */

undefined ** FUN_10bc9a4b8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e54b18;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ee8838;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10bc9a4dc; end: 10bc9a53f;  */

undefined8 FUN_10bc9a4dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee8838;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee8838,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e54b18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e54b18,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a540; end: 10bc9a55f;  */

undefined * FUN_10bc9a540(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d985b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a560; end: 10bc9a617;  */

undefined8 FUN_10bc9a560(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c4d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c4d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ead898;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ead898,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ead7b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ead7b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c4f8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c4f8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102c518;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c518,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a618; end: 10bc9a637;  */

undefined * FUN_10bc9a618(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d985d8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a638; end: 10bc9a6d3;  */

undefined8 FUN_10bc9a638(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_11102c538;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c538,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c558;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c558,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6c578;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6c578,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fd9898;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd9898,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a6d4; end: 10bc9a6f3;  */

undefined * FUN_10bc9a6d4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d985f8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a6f4; end: 10bc9a78f;  */

undefined8 FUN_10bc9a6f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c578;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c578,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c598;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c598,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c5b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c5b8,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a790; end: 10bc9a7af;  */

undefined * FUN_10bc9a790(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d98618)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a7b0; end: 10bc9a867;  */

undefined8 FUN_10bc9a7b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db93d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db93d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db93f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db93f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e2dc38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2dc38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_1110286f8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_1110286f8,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a868; end: 10bc9a887;  */

undefined * FUN_10bc9a868(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d98640)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a888; end: 10bc9a907;  */

undefined8 FUN_10bc9a888(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22cb8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22cb8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb6cd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb6cd8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c5d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c5d8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a908; end: 10bc9a927;  */

undefined * FUN_10bc9a908(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d98658)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a928; end: 10bc9a9c3;  */

undefined8 FUN_10bc9a928(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df6558;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df6558,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c5f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c5f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e515d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e515d8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fa9298;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa9298,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9a9c4; end: 10bc9a9e3;  */

undefined * FUN_10bc9a9c4(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d98678)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9a9e4; end: 10bc9aab7;  */

undefined8 FUN_10bc9a9e4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e79d38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e79d38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e55178;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55178,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e04238;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e04238,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55078,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9aab8; end: 10bc9aadb;  */

undefined * FUN_10bc9aab8(long param_1)

{
  if (param_1 - 2U < 4) {
    return (&PTR_PTR_110d986a8)[param_1 - 2U];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9aadc; end: 10bc9ab77;  */

undefined8 FUN_10bc9aadc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55078,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 3;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e55178;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e55178,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 4;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e17798;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e17798,param_2,param_1);
        uVar2 = 5;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9ab78; end: 10bc9ab97;  */

undefined * FUN_10bc9ab78(ulong param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_PTR_110d986c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bc9ab98; end: 10bc9ad2f;  */

undefined8 FUN_10bc9ab98(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fa5358;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa5358,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_11102c618;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c618,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_11102c638;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c638,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_11102c658;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c658,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_11102c678;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c678,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_11102c698;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c698,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_11102c6b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c6b8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_11102c6d8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c6d8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xc;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_11102c6f8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c6f8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 7;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_11102c718;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c718,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 8;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3b38;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3b38,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 9;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_11102c738;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_11102c738,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110def558;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110def558,
                                              param_2,param_1);
                          uVar2 = 0xb;
                          if (ppuVar1 != (undefined **)0x0) {
                            uVar2 = 0xffffffffffffffff;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9ad30; end: 10bc9ad93; -[SCAAppApplicationLogout getForced] */

undefined8 FUN_10bc9ad30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9ad94; end: 10bc9adf7; -[SCAAppApplicationLogout getHasOneTapLogin] */

undefined8 FUN_10bc9ad94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9adf8; end: 10bc9ae5b; -[SCAAppApplicationLogout getHttpStatusCode] */

undefined8 FUN_10bc9adf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9ae5c; end: 10bc9aea7; -[SCAAppApplicationLogout getInstallSessionMetadata] */

void FUN_10bc9ae5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9aea8; end: 10bc9af0b; -[SCAAppApplicationLogout getLogoutSource] */

undefined8 FUN_10bc9aea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc999e8();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9af0c; end: 10bc9af57; -[SCAAppApplicationLogout getReason] */

void FUN_10bc9af0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9af58; end: 10bc9afa3; -[SCAAppApplicationLogout getServerAuthenticationSessionId] */

void FUN_10bc9af58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9afa4; end: 10bc9b007; -[SCAChatExtensionAction getDrawerActionType] */

undefined8 FUN_10bc9afa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc99448();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b008; end: 10bc9b06b; -[SCAChatExtensionAction getDrawerTimeViewSec] */

undefined8 FUN_10bc9b008(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b06c; end: 10bc9b0cf; -[SCAChatExtensionAction getExtensionType] */

undefined8 FUN_10bc9b06c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc994d0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b0d0; end: 10bc9b11b; -[SCAChatExtensionAction getKeyboardSessionId] */

void FUN_10bc9b0d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b11c; end: 10bc9b17f; -[SCAChatExtensionSend getChatExtensionMessageType] */

undefined8 FUN_10bc9b11c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc991d8();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b180; end: 10bc9b1e3; -[SCAChatExtensionSend getExtensionType] */

undefined8 FUN_10bc9b180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc994d0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b1e4; end: 10bc9b247; -[SCAChatExtensionSend getIsBitmoji] */

undefined8 FUN_10bc9b1e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b248; end: 10bc9b293; -[SCAChatExtensionSend getKeyboardSessionId] */

void FUN_10bc9b248(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b294; end: 10bc9b2df; -[SCAChatExtensionSend getPillName] */

void FUN_10bc9b294(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b2e0; end: 10bc9b343; -[SCAChatExtensionSend getPositionIndex] */

undefined8 FUN_10bc9b2e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b344; end: 10bc9b3a7; -[SCAChatExtensionSend getShareCategory] */

undefined8 FUN_10bc9b344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc9a6f4();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b3a8; end: 10bc9b3f3; -[SCAChatExtensionSend getStickerId] */

void FUN_10bc9b3a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b3f4; end: 10bc9b457; -[SCAChatExtensionSend getStickerSection] */

undefined8 FUN_10bc9b3f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc9a9e4();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b458; end: 10bc9b4a3; -[SCAChatExtensionSend getStickerShareAgent] */

void FUN_10bc9b458(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b4a4; end: 10bc9b507; -[SCAChatExtensionSend getStickerType] */

undefined8 FUN_10bc9b4a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc9aadc();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b508; end: 10bc9b56b; -[SCAChatExtensionStickerSearch getExtensionType] */

undefined8 FUN_10bc9b508(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc994d0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10bc9b56c; end: 10bc9b5b7; -[SCAChatExtensionStickerSearch getKeyboardSessionId] */

void FUN_10bc9b56c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b5b8; end: 10bc9b603; -[SCAChatExtensionStickerSearch getPillName] */

void FUN_10bc9b5b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10bc9b604; end: 10bc9b667; -[SCAChatExtensionStickerSearch getStickerSearchCategory] */

undefined8 FUN_10bc9b604(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1200c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10bc9a6f4();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}


