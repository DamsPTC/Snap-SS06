/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10baedaa4; end: 10baedac3;  */

undefined * FUN_10baedaa4(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8acf8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baedac4; end: 10baedb43;  */

undefined8 FUN_10baedac4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffaad8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffaad8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffaaf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffaaf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fa0c98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa0c98,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baedb44; end: 10baedb67;  */

undefined ** FUN_10baedb44(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f58f78;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f58f58;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baedb68; end: 10baedbcb;  */

undefined8 FUN_10baedb68(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f58f58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f58f58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f58f78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f58f78,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baedbcc; end: 10baedbeb;  */

undefined * FUN_10baedbcc(ulong param_1)

{
  if (param_1 < 0x12) {
    return (&PTR_PTR_110d8ad10)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baedbec; end: 10baede0f;  */

undefined8 FUN_10baedbec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffab18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffab18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffab38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffab38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffab58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffab58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffab78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffab78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffab98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffab98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffabb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffabb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffabd8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffabd8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffabf8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffabf8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ee6bd8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee6bd8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffac18;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffac18,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffac38;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffac38,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffac58;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffac58,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffac78;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffac78,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffac98;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffac98,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffacb8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffacb8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ffacd8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffacd8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffacf8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffacf8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffad18;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffad18,
                                                  param_2,param_1);
                                    uVar2 = 0x11;
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
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baede10; end: 10baede2f;  */

undefined * FUN_10baede10(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d8ada0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baede30; end: 10baee227;  */

undefined8 FUN_10baede30(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffad38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffad38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffad58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffad58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffad78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffad78,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 3;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffad98;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffad98,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 2;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffadb8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffadb8,param_2,param_1);
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



/* Entry: 10baee228; end: 10baee26b;  */

undefined * FUN_10baee228(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d8ae20)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baee26c; end: 10baee3af;  */

undefined8 FUN_10baee26c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3938;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3938,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb138;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb138,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 4;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fb7798;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb7798,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 5;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb158;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb158,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 6;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fe3c98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fe3c98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 7;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffb178;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb178,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 8;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffb198;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb198,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 9;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dbc338;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbc338,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb1b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb1b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 1;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f3ec98;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f3ec98,param_2,
                                        param_1);
                    uVar2 = 2;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baee3b0; end: 10baee3cf;  */

undefined * FUN_10baee3b0(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8ae98)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baee3d0; end: 10baee46b;  */

undefined8 FUN_10baee3d0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fb76b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb76b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eedbf8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eedbf8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb1d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb1d8,param_2,param_1);
        uVar2 = 2;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baee46c; end: 10baee48b;  */

undefined * FUN_10baee46c(ulong param_1)

{
  if (param_1 < 0x1c) {
    return (&PTR_PTR_110d8aeb8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baee48c; end: 10baeecdf;  */

undefined8 FUN_10baee48c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea818,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e44298;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e44298,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffb1f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb1f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 8;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb218;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb218,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 2;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e427d8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e427d8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 3;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f77a38;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f77a38,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 4;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110e29ef8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e29ef8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 5;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e33d18;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e33d18,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 6;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb238;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb238,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 7;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110e41ff8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e41ff8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffb258;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb258,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6c478;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6c478,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffb278;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb278,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffb298;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb298,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffb2b8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb2b8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ffb2d8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb2d8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb2f8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb2f8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb318;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb318,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110dcb7b8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dcb7b8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb338;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb338,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffb358
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb358,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffb378;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb378,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f029f8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f029f8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffb398;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb398,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fb8738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fb8738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffb3b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb3b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffb3d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb3d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f56158;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f56158,
                                                  param_2,param_1);
                                                  uVar2 = 0x1b;
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



/* Entry: 10baeece0; end: 10baeecff;  */

undefined * FUN_10baeece0(ulong param_1)

{
  if (param_1 < 0x13) {
    return (&PTR_PTR_110d8b100)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baeed00; end: 10baeef07;  */

undefined8 FUN_10baeed00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb6d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb6d8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc5458;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc5458,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffb6f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb6f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 7;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb718;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb718,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 8;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffb738;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb738,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 9;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffb758;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb758,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 10;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffb778;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb778,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0xb;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffb798;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb798,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xe;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb7b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb7b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0xf;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb7d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb7d8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x10;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffb7f8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb7f8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 2;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb818;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb818,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 3;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffb838;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb838,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 4;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffb858;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb858,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 5;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f1e458;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f1e458,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 6;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ffb878;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb878
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x11;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb898;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffb898,
                                                  param_2,param_1);
                                  uVar2 = 0x12;
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
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baeef08; end: 10baeef27;  */

undefined * FUN_10baeef08(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8b198)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baeef28; end: 10baeefa7;  */

undefined8 FUN_10baeef28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb8b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb8b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb8d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb8d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ec4918;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ec4918,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baeefa8; end: 10baeefcb;  */

undefined ** FUN_10baeefa8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb918;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ffb8f8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baeefcc; end: 10baef02f;  */

undefined8 FUN_10baeefcc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb8f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb8f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb918;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb918,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef030; end: 10baef093;  */

undefined * FUN_10baef030(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d8b1b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef094; end: 10baef3d3;  */

undefined8 FUN_10baef094(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffb998;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb998,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffb9b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb9b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffb9d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb9d8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffb9f8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffb9f8,param_2,param_1);
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



/* Entry: 10baef3d4; end: 10baef3f3;  */

undefined * FUN_10baef3d4(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d8b2a8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef3f4; end: 10baef4ab;  */

undefined8 FUN_10baef3f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3f78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea3f78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbaf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbaf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbb18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbb18,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fb8738;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb8738,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffbb38;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbb38,param_2,param_1);
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



/* Entry: 10baef4ac; end: 10baef4cb;  */

undefined * FUN_10baef4ac(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8b2d0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef4cc; end: 10baef54b;  */

undefined8 FUN_10baef4cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce178;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dce178,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7df98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7df98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbb58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbb58,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef54c; end: 10baef56b;  */

undefined * FUN_10baef54c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8b2e8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef56c; end: 10baef5eb;  */

undefined8 FUN_10baef56c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbb78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbb78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de83b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de83b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbb98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbb98,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef5ec; end: 10baef60b;  */

undefined * FUN_10baef5ec(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d8b300)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef60c; end: 10baef6df;  */

undefined8 FUN_10baef60c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fb0598;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb0598,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbbb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbbb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbbd8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbbd8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 3;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffbbf8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbbf8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 5;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbc18,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc38;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbc38,param_2,param_1);
            uVar2 = 2;
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



/* Entry: 10baef6e0; end: 10baef703;  */

undefined ** FUN_10baef6e0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc78;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ffbc58;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baef704; end: 10baef767;  */

undefined8 FUN_10baef704(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbc58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbc78,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef768; end: 10baef787;  */

undefined * FUN_10baef768(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8b330)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef788; end: 10baef807;  */

undefined8 FUN_10baef788(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbc98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbc98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffaaf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffaaf8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffaad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffaad8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef808; end: 10baef827;  */

undefined * FUN_10baef808(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d8b348)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef828; end: 10baef8c3;  */

undefined8 FUN_10baef828(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbcb8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbcb8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbcd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbcd8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db9e38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 3;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffbcf8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbcf8,param_2,param_1);
        uVar2 = 4;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baef8c4; end: 10baef8d7;  */

undefined ** FUN_10baef8c4(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
  if (param_1 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10baef8d8; end: 10baef8ff;  */

long FUN_10baef8d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2a058,param_2,param_1);
  return -(ulong)(ppuVar1 != (undefined **)0x0);
}



/* Entry: 10baef900; end: 10baef91f;  */

undefined * FUN_10baef900(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8b370)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baef920; end: 10baef9bb;  */

undefined8 FUN_10baef920(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fcb6d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fcb6d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbd18,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
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



/* Entry: 10baef9bc; end: 10baef9df;  */

undefined ** FUN_10baef9bc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd58;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ffbd38;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baef9e0; end: 10baefa43;  */

undefined8 FUN_10baef9e0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbd38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbd58,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baefa44; end: 10baefa63;  */

undefined * FUN_10baefa44(ulong param_1)

{
  if (param_1 < 0x29) {
    return (&PTR_PTR_110d8b390)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baefa64; end: 10baefed3;  */

undefined8 FUN_10baefa64(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5ac98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e5ac98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 8;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbd78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xc;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbd98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbd98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x1e;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffbdb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbdb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x1a;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffbdd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbdd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x1b;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffbdf8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbdf8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x10;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffbe18;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbe18,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fbf238;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fbf238,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x27;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ebd538;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ebd538,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 1;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbe38;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbe38,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x25;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fbf258;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fbf258,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x28;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffbe58;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbe58,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 2;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffbe78;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbe78,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x13;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffbe98;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffbe98,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 3;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e35d58,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xd;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110eb57b8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb57b8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xb;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110daca58;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110daca58,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x14;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffbeb8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbeb8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 4;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffbed8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbed8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xf;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffbef8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbef8,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 5;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffbf18
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbf18,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x1c;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbf38;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbf38,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 6;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbf58;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbf58,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x1d;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f282b8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f282b8,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 7;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbf78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbf78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbf98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbf98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbfb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbfb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e3ddf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e3ddf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x15;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e30ab8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e30ab8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x12;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fdc938;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdc938,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 9;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fbf118;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fbf118,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbfd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbfd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6a738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6a738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x11;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 10;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffbff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffbff8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xe;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc018;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc018,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc038;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc038,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x16;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fdfed8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fdfed8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc058;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc058,
                                                  param_2,param_1);
                                                  uVar2 = 0x18;
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



/* Entry: 10baefed4; end: 10baefef7;  */

undefined ** FUN_10baefed4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc078;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dce178;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baefef8; end: 10baeff5b;  */

undefined8 FUN_10baefef8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dce178;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dce178,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc078;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc078,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baeff5c; end: 10baeff7b;  */

undefined * FUN_10baeff5c(ulong param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_PTR_110d8b4d8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baeff7c; end: 10baf00a3;  */

undefined8 FUN_10baeff7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc098;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc098,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e78,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fdfed8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdfed8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 5;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbb6b8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 6;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 7;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 8;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110dd6ed8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6ed8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 9;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0f8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0f8,param_2,
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf00a4; end: 10baf00c3;  */

undefined * FUN_10baf00a4(ulong param_1)

{
  if (param_1 < 0x10) {
    return (&PTR_PTR_110d8b530)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf00c4; end: 10baf0293;  */

undefined8 FUN_10baf00c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbb6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc118;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc118,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f27998;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f27998,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffc138;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc138,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc158;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc158,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffc178;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc178,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffc198;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc198,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc1b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc1b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fdfa38;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdfa38,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc1d8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc1d8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fdc138;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdc138,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xd;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffc1f8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc1f8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0d8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0d8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ea3f58;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea3f58,
                                                  param_2,param_1);
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf0294; end: 10baf02b3;  */

undefined * FUN_10baf0294(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8b5b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf02b4; end: 10baf0333;  */

undefined8 FUN_10baf02b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc218;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc218,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc238;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc238,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc258;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc258,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf0334; end: 10baf0353;  */

undefined * FUN_10baf0334(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d8b5c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf0354; end: 10baf047b;  */

undefined8 FUN_10baf0354(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1098;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df1098,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc278;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc278,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc298;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc298,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffc2b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc2b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea818,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc2d8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc2d8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffc2f8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc2f8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffc318;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc318,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc338;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc338,param_2,
                                      param_1);
                  uVar2 = 8;
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



/* Entry: 10baf047c; end: 10baf049b;  */

undefined * FUN_10baf047c(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8b610)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf049c; end: 10baf0537;  */

undefined8 FUN_10baf049c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc358;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc358,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdfa38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdfa38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc0b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc0b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffc378;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc378,param_2,param_1);
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



/* Entry: 10baf0538; end: 10baf055b;  */

undefined ** FUN_10baf0538(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9c098;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fcff58;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baf055c; end: 10baf05bf;  */

undefined8 FUN_10baf055c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fcff58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fcff58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9c098;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e9c098,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf05c0; end: 10baf05df;  */

undefined * FUN_10baf05c0(ulong param_1)

{
  if (param_1 < 0x36) {
    return (&PTR_PTR_110d8b630)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf05e0; end: 10baf0bf3;  */

undefined8 FUN_10baf05e0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc398;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc398,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc3b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc3b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc3d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc3d8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffc3f8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc3f8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffc418;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc418,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc438;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc438,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc0f78;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc0f78,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffc458;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc458,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffc478;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc478,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc498;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc498,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffc4b8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc4b8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffc4d8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc4d8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffc4f8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc4f8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffc518;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc518,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffc538;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc538,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ffc558;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc558
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fa0c98;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fa0c98,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fa1e18;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fa1e18,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fa1d98;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fa1d98,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffc578;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc578,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffc598
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc598,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b678;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b678,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc5b8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc5b8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc5d8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc5d8,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc5f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc5f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110efcd78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110efcd78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc618;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc618,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc638;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc638,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc658;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc658,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc678;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc678,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc698;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc698,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc6b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc6b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc6d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc6d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc6f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc6f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc718;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc718,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6ad78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6ad78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e85498;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e85498,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e854b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e854b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc758;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc758,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc778;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc778,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc798;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc798,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f78018;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f78018,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6aed8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6aed8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc7b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc7b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db3e98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db3e98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc7d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc7d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc7f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc7f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc818;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc818,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc838;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc838,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc858;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc858,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc878;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc878,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x33;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x34;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc8b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc8b8,
                                                  param_2,param_1);
                                                  uVar2 = 0x35;
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
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf0bf4; end: 10baf0c17;  */

undefined ** FUN_10baf0bf4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78b8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db78d8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baf0c18; end: 10baf0c7b;  */

undefined8 FUN_10baf0c18(undefined8 param_1,undefined8 param_2)

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
    ppuVar1 = &PTR____CFConstantStringClassReference_110db78b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78b8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf0c7c; end: 10baf0c9b;  */

undefined * FUN_10baf0c7c(ulong param_1)

{
  if (param_1 < 0x33) {
    return (&PTR_PTR_110d8b7e0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf0c9c; end: 10baf125b;  */

undefined8 FUN_10baf0c9c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6ad78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ad78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f6ad98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ad98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6adb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6adb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f6add8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6add8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f6adf8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6adf8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f6ae18;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ae18,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f6ae38;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ae38,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6ae58;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ae58,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6ae78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ae78,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6ae98;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ae98,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x25;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6aeb8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aeb8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110eb57b8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb57b8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xb;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f6aed8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aed8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xc;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f6aef8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6aef8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xd;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f6af18;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6af18
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xe;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110db25f8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db25f8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110e30ab8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e30ab8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6af38;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6af38,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110eaca18;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eaca18,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x12;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110db9e38
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e38,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5d778;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5d778,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e78;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x15;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6af58;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6af58,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x16;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6af78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6af78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f59c98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f59c98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6af98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6af98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6afb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6afb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6afd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6afd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e363d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e363d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6aff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6aff8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b018;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b018,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b038;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b038,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e57fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e57fd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b058;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b058,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b078;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b078,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbaad8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbaad8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b098;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b098,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e5ac58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e5ac58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110daf6b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110daf6b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba178;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba178,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e3ddf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e3ddf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f307f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f307f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110df78d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110df78d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee15d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee15d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b0b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b0b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b0d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b0d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc8d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc8d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc8f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc8f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc918;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc918,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc938;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc938,
                                                  param_2,param_1);
                                                  uVar2 = 0x32;
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
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf125c; end: 10baf127b;  */

undefined * FUN_10baf125c(ulong param_1)

{
  if (param_1 < 0x3d) {
    return (&PTR_PTR_110d8b978)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf127c; end: 10baf1937;  */

undefined8 FUN_10baf127c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b0f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b0f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f6b118;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b118,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eac8b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eac8b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6b138;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b138,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110eacb58;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eacb58,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f6b158;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b158,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f6b178;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b178,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f6b198;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b198,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b1b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b1b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6b1d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b1d8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6b1f8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b1f8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6b218;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b218,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f6b238;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b238,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110e3de38;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3de38,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f6b258;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b258,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f6b278;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b278
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b298;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b298,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6b2b8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b2b8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x26;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6acf8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6acf8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x27;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110e85a18;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e85a18,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x28;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f6b2d8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b2d8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x29;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b2f8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b2f8,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x2c;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b318;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b318,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x37;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba418;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba418,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x2a;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5abd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5abd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110df62b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110df62b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x11;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5d778;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5d778,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x12;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b338;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b338,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x13;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dea458;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dea458,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x14;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbee78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbee78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x15;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6aeb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6aeb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x16;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b358;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b358,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b378;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b378,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f16ef8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f16ef8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b398;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b398,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e363d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e363d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110db9e38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110db9e38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbf098;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbf098,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b3b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b3b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b3d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b3d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b3f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b3f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b418;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b418,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b438;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b438,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b458;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b458,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b478;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b478,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5ab98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5ab98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5abb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5abb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b498;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b498,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b4b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b4b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b4d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b4d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b4f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b4f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b518;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b518,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x33;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b538;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b538,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x34;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b558;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b558,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x35;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b578;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b578,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x36;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc958;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc958,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x38;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b598;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b598,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x39;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc978;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc978,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc998;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc998,
                                                  param_2,param_1);
                                                  uVar2 = 0x3c;
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



/* Entry: 10baf1938; end: 10baf1957;  */

undefined * FUN_10baf1938(ulong param_1)

{
  if (param_1 < 10) {
    return (&PTR_PTR_110d8bb60)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf1958; end: 10baf1a9b;  */

undefined8 FUN_10baf1958(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5ac98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e5ac98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec59f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ec59f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6b5b8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b5b8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6b5d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b5d8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e36118;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e36118,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddd8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3ddd8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f6b5f8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b5f8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f6b618;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b618,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6ed8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6ed8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc8d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc8d8,param_2,
                                        param_1);
                    uVar2 = 9;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf1a9c; end: 10baf1abb;  */

undefined * FUN_10baf1a9c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8bbb0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf1abc; end: 10baf1b3b;  */

undefined8 FUN_10baf1abc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db00f8,param_2,param_1);
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
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf1b3c; end: 10baf1b5b;  */

undefined * FUN_10baf1b3c(ulong param_1)

{
  if (param_1 < 0x21) {
    return (&PTR_PTR_110d8bbc8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf1b5c; end: 10baf1f23;  */

undefined8 FUN_10baf1b5c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b638;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b638,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e5ac58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e5ac58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f6b658;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b658,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f6b678;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b678,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f6b698;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b698,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f6b6b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b6b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f6b6d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b6d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f6b6f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b6f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e3de18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3de18,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f6ad78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6ad78,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6b718;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b718,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110dbf098;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbf098,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110eac958;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eac958,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f6b738;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b738,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xf;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f6b758;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b758
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x1c;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b8b8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b8b8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x1d;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110daf6b8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xd;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f6b778;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b778,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x10;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f6b798;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b798,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x11;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f6b7b8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b7b8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x12;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b7d8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b7d8,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x13;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e3ddd8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e3ddd8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x14;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b7f8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b7f8,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x15;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b818;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b818,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x16;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b838;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b838,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b858;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b858,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b878;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b878,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb2f58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb2f58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc9b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc9b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffc9d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffc9d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f5d758;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f5d758,
                                                  param_2,param_1);
                                                  uVar2 = 0x20;
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
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf1f24; end: 10baf1f43;  */

undefined * FUN_10baf1f24(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8bcd0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf1f44; end: 10baf1fc3;  */

undefined8 FUN_10baf1f44(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f6b5f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f6b5f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffc9f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffc9f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dba178;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba178,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf1fc4; end: 10baf2043;  */

undefined * FUN_10baf1fc4(ulong param_1)

{
  if (param_1 < 0xb) {
    return (&PTR_PTR_110d8bce8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2044; end: 10baf22d7;  */

undefined8 FUN_10baf2044(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffcc58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcc58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffcc78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcc78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffcc98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcc98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffccb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffccb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffccd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffccd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffccf8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffccf8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffcd18;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcd18,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffcd38;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcd38,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffcd58;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcd58,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffcd78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcd78,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffcd98;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcd98,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffcdb8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcdb8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffcdd8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcdd8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffcdf8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcdf8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x11;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffce18;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffce18,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x12;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ffce38;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffce38
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x13;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffce58;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffce58,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xd;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffce78;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffce78,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xe;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffce98;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffce98,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xf;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffceb8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffceb8,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x10;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffced8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffced8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffcef8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffcef8,
                                                  param_2,param_1);
                                            uVar2 = 0x15;
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
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf22d8; end: 10baf22f7;  */

undefined * FUN_10baf22d8(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d8be40)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf22f8; end: 10baf2403;  */

undefined8 FUN_10baf22f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fdfed8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdfed8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffcf18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcf18,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffcf38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcf38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffcf58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcf58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffcf78;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcf78,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffcf98;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcf98,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffcfb8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcfb8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffcfd8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcfd8,param_2,param_1
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



/* Entry: 10baf2404; end: 10baf2423;  */

undefined * FUN_10baf2404(ulong param_1)

{
  if (param_1 < 0x10) {
    return (&PTR_PTR_110d8be80)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2424; end: 10baf25f3;  */

undefined8 FUN_10baf2424(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffcff8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffcff8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd018;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd018,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd038;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd038,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd058;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd058,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffd078;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd078,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dd08b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd08b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd098;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd098,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 9;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffd0b8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd0b8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd0d8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd0d8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd0f8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd0f8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 10;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd118;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd118,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xb;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd138;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd138,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xc;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ffd158;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd158,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xd;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110ffd178;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd178,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd198;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd198,
                                                  param_2,param_1);
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf25f4; end: 10baf2613;  */

undefined * FUN_10baf25f4(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8bf00)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2614; end: 10baf2693;  */

undefined8 FUN_10baf2614(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd1b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd1b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd1d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd1d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd1f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd1f8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf2694; end: 10baf26d3;  */

undefined * FUN_10baf2694(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8bf18)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf26d4; end: 10baf2817;  */

undefined8 FUN_10baf26d4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd238;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd238,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd258;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd258,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd278;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd278,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd298;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd298,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffd2b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd2b8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffd2d8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd2d8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd2f8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd2f8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffd318;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd318,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd338;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd338,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd358;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd358,param_2,
                                        param_1);
                    uVar2 = 9;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf2818; end: 10baf283b;  */

undefined ** FUN_10baf2818(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd398;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ffd378;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10baf283c; end: 10baf289f;  */

undefined8 FUN_10baf283c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd378;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd378,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd398;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd398,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf28a0; end: 10baf28bf;  */

undefined * FUN_10baf28a0(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d8bf88)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf28c0; end: 10baf293f;  */

undefined8 FUN_10baf28c0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd3b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd3b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd3d8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd3d8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd3f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd3f8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf2940; end: 10baf295f;  */

undefined * FUN_10baf2940(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d8bfa0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2960; end: 10baf2a6b;  */

undefined8 FUN_10baf2960(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fe3778;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fe3778,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fe3758;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fe3758,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd418;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd418,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd438;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd438,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fe3798;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fe3798,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e69958;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e69958,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd458;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd458,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1
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



/* Entry: 10baf2a6c; end: 10baf2a8b;  */

undefined * FUN_10baf2a6c(ulong param_1)

{
  if (param_1 < 10) {
    return (&PTR_PTR_110d8bfe0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2a8c; end: 10baf2bcf;  */

undefined8 FUN_10baf2a8c(undefined8 param_1,undefined8 param_2)

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
    ppuVar1 = &PTR____CFConstantStringClassReference_110fdcad8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fdcad8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd478;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd478,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd498;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd498,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffd4b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd4b8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffd4d8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd4d8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd4f8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd4f8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffd518;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd518,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ffd538;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd538,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd558;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd558,param_2,
                                        param_1);
                    uVar2 = 9;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf2bd0; end: 10baf2bef;  */

undefined * FUN_10baf2bd0(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d8c030)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2bf0; end: 10baf2ca7;  */

undefined8 FUN_10baf2bf0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e699f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e699f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ffd578;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd578,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffd598;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd598,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffd5b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd5b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffd5d8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd5d8,param_2,param_1);
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



/* Entry: 10baf2ca8; end: 10baf2ce7;  */

undefined * FUN_10baf2ca8(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d8c058)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2ce8; end: 10baf2e2b;  */

undefined8 FUN_10baf2ce8(undefined8 param_1,undefined8 param_2)

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
      ppuVar1 = &PTR____CFConstantStringClassReference_110e63c38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e63c38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3ddf8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e33d18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e33d18,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110eb4b38;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb4b38,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffd658;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd658,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110ffd678;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffd678,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f72c18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f72c18,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110e63c58;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e63c58,param_2,
                                        param_1);
                    uVar2 = 9;
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
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf2e2c; end: 10baf2e4b;  */

undefined * FUN_10baf2e2c(ulong param_1)

{
  if (param_1 < 0x93) {
    return (&PTR_PTR_110d8c0c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf2e4c; end: 10baf3e53;  */

undefined8 FUN_10baf2e4c(undefined8 param_1,undefined8 param_2)

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
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb5778;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb5778,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ee1538;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1538,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e1cbb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e1cbb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ee1598;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1598,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ee15d8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee15d8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ee1578;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1578,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e45ed8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e45ed8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e515d8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e515d8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110eb5738;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb5738,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x50;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110eb5618;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb5618,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 9;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110ee1558;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1558,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ee15f8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee15f8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xb;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xc;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ee16d8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee16d8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xd;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ee1718;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee1718
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xe;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ee16f8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee16f8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xf;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ea4138;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ea4138,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x10;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ee1618;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1618,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x11;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110e12ff8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e12ff8,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x12;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ee1778
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1778,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd698;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd698,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd6b8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd6b8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x15;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dd6ed8;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dd6ed8,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x16;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd6d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd6d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd6f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd6f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd718;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd718,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee15b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee15b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd758;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd758,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd778;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd778,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb56d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb56d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1698;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1698,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5698;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5698,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd798;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd798,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5678;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5678,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd7b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd7b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x54;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd7d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd7d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dad198;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dad198,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e1cdd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e1cdd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd7f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd7f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5638;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5638,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd818;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd818,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee16b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee16b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb57b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb57b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb3638;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb3638,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f4b1f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f4b1f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x69;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5658;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5658,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb56f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb56f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e1c938;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e1c938,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x47;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1838;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1838,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb3678;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb3678,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1818;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1818,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd838;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd838,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5758;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5758,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x49;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1978;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1978,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd858;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd858,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd878;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd878,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x33;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x34;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd8b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd8b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x35;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd8d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd8d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x36;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd8f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd8f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x37;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1ab8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1ab8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1b58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1b58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1b78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1b78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1b98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1b98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd918;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd918,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x51;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd938;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd938,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x55;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1bf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1bf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x57;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f6b378;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f6b378,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x38;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd958;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd958,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x39;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dbaad8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dbaad8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd978;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd978,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd998;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd998,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1858;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1858,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb56b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb56b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd9b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd9b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x56;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1878;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1878,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd9d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd9d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x40;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x41;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffd9f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffd9f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x42;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffda18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffda18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x43;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e2eab8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e2eab8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e2ead8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e2ead8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffda38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffda38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffda58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffda58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x70;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x71;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffda78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffda78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x72;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x73;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6fd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x74;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff6f38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff6f38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x75;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffda98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffda98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x76;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdab8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdab8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x77;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdad8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdad8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x78;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdaf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdaf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x79;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdb18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdb18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdb38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdb38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdb58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdb58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdb78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdb78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdb98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdb98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdbb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdbb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdbd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdbd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x80;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdbf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdbf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x81;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdc18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdc18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x82;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdc38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdc38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x83;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdc58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdc58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x84;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdc78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdc78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x85;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f13918;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f13918,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x44;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdc98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdc98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x45;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5718;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5718,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x46;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1bd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1bd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x52;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5798;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5798,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x53;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdcb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdcb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x58;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdcd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdcd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x59;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdcf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdcf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1938;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1938,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdd18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdd18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdd38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdd38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eb5378;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eb5378,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdd58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdd58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdd78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdd78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x60;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdd98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdd98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x61;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1cb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1cb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 99;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f3d6f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f3d6f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 100;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffddb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffddb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x65;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1ad8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1ad8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x66;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffddd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffddd8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x67;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110eaa398;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eaa398,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x68;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffddf8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffddf8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fa74d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fa74d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffde18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffde18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ff7c38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ff7c38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x86;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffde38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffde38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x87;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffde58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffde58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x88;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffde78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffde78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x89;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffde98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffde98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdeb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdeb8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffded8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffded8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdef8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdef8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdf18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdf18,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ee1c98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ee1c98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x8f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdf38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdf38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x90;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdf58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdf58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x91;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ffdf78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110ffdf78,
                                                  param_2,param_1);
                                                  uVar2 = 0x92;
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
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10baf3e54; end: 10baf3e73;  */

undefined * FUN_10baf3e54(ulong param_1)

{
  if (param_1 < 0x21) {
    return (&PTR_PTR_110d8c560)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10baf3e74; end: 10baf423b;  */

undefined8 FUN_10baf3e74(undefined8 param_1,undefined8 param_2)

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
    ppuVar1 = &PTR____CFConstantStringClassReference_110e9c098;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e9c098,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ffdf98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffdf98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ffdfb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffdfb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ffdfd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffdfd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ffdff8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffdff8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ffe018;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffe018,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fd3cb8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3cb8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fd3cd8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3cd8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fd3cf8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3cf8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fd3d18;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3d18,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fd3d38;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3d38,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fd3d58;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3d58,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fd3d78;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fd3d78,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ffe038;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ffe038,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110e479b8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e479b8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110e479d8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e479d8,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110e479f8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e479f8,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110e47a18;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47a18,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110e47998;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47998,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x18;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110e47938
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47938,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x13;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47a78;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47a78,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x14;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47a58;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47a58,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x15;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47958;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47958,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x16;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47918;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47918,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47ad8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47ad8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47a98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47a98,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47978;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47978,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47ab8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47ab8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47af8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47af8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47b58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47b58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47b38;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47b38,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e47b18;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110e47b18,
                                                  param_2,param_1);
                                                  uVar2 = 0x20;
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
  }
  _objc_release(param_1);
  return uVar2;
}


