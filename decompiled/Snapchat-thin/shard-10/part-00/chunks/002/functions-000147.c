/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10755d0c4; end: 10755d29f;  */

void FUN_10755d0c4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 ***param_6,undefined8 ***param_7,undefined1 *param_8
                  ,undefined8 ***param_9,ulong param_10)

{
  uint uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  undefined8 ***pppuVar10;
  undefined1 *puVar11;
  int extraout_w8;
  int extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 uVar12;
  undefined8 extraout_x8;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  ulong unaff_x21;
  uint uVar14;
  uint unaff_w30;
  undefined8 uVar15;
  undefined8 *in_stack_00000040;
  code *in_stack_00000048;
  byte in_stack_00000068;
  byte in_stack_00000088;
  undefined1 in_stack_00000090;
  undefined8 in_stack_00000150;
  undefined1 auStack_6b4 [16];
  undefined1 uStack_6a4;
  undefined1 auStack_6a0 [56];
  char cStack_668;
  long lStack_660;
  undefined1 auStack_658 [16];
  undefined1 auStack_648 [16];
  char cStack_638;
  long alStack_630 [2];
  byte bStack_620;
  undefined8 **ppuStack_610;
  undefined1 auStack_5c0 [20];
  undefined1 uStack_5ac;
  undefined1 auStack_5a8 [64];
  undefined1 auStack_568 [16];
  byte bStack_558;
  undefined1 auStack_550 [16];
  undefined8 **ppuStack_540;
  undefined8 uStack_538;
  byte bStack_530;
  undefined8 **ppuStack_4f0;
  undefined8 **ppuStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4a8;
  undefined8 uStack_498;
  undefined1 auStack_448 [4];
  undefined1 auStack_444 [4];
  undefined4 uStack_440;
  undefined1 auStack_438 [16];
  undefined8 uStack_428;
  undefined8 **ppuStack_420;
  undefined8 uStack_418;
  byte bStack_410;
  undefined7 uStack_40f;
  undefined8 uStack_408;
  byte bStack_400;
  undefined1 auStack_3f8 [16];
  byte bStack_3e8;
  undefined8 **ppuStack_3d0;
  byte abStack_3c8 [8];
  byte abStack_3c0 [8];
  undefined1 auStack_3b8 [16];
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  byte bStack_398;
  undefined8 *apuStack_368 [2];
  byte bStack_358;
  undefined8 **ppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 **ppuStack_300;
  undefined8 **ppuStack_2f8;
  undefined8 uStack_2d8;
  undefined1 uStack_2a0;
  undefined8 *apuStack_298 [2];
  byte bStack_288;
  undefined8 *puStack_280;
  code *pcStack_278;
  byte bStack_208;
  undefined8 **appuStack_200 [18];
  byte bStack_170;
  undefined8 **appuStack_160 [12];
  undefined8 **appuStack_100 [2];
  byte bStack_f0;
  undefined1 uStack_a0;
  undefined8 **appuStack_98 [12];
  byte bStack_38;
  
  func_0x000107561d20();
  func_0x000107561514();
  if (unaff_w30 == 0) {
    func_0x000107561b78();
    func_0x000107561ad8();
    if (unaff_w30 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if (unaff_w30 != 0) {
        func_0x0001075616cc();
        FUN_107541760();
        func_0x0001075618c4();
        if ((bool)in_ZR) {
          if (extraout_w8 != 0) {
            func_0x000107561b6c();
            FUN_107561110();
          }
        }
        else if (extraout_w8 == 0) {
          param_6 = (undefined8 ***)&stack0x00000090;
          func_0x00010756112c(&stack0x00000058);
        }
        else {
          func_0x000107266a84();
          in_stack_00000088 = 0;
        }
        func_0x000107561144(&stack0x00000090);
        goto LAB_10755d1d0;
      }
      func_0x000107561864();
      FUN_10754185c();
      if ((unaff_w30 >> 8 & 1) == 0) goto LAB_10755d1e8;
      in_stack_00000090 = (undefined1)unaff_w30;
LAB_10755d16c:
      func_0x00010756171c();
      func_0x00010756103c();
      FUN_1075610b8(&stack0x00000090);
    }
    else {
      func_0x000107561b9c();
      func_0x0001075616bc();
      func_0x000107561a88();
      func_0x000107561604();
      uVar2 = (ulong)in_stack_00000040;
      if (((ulong)in_stack_00000040 & 1) == 0) {
        func_0x000107561848();
        func_0x00010756180c();
        func_0x000107561ae0();
        func_0x000107561acc();
      }
      else {
        func_0x0001075618d4();
        FUN_1075486fc();
        func_0x0001075616e0();
        if ((bool)in_ZR) {
          FUN_107561110();
        }
        else {
          func_0x00010756112c();
        }
        func_0x000107561ae8();
      }
      func_0x000107561a80();
      func_0x000107561a90();
      if ((uVar2 & 1) != 0) {
LAB_10755d1d0:
        if ((in_stack_00000088 & 1) != 0) {
          if (((unaff_x21 & 1) == 0) && ((in_stack_00000068 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x000107561b84();
              func_0x0001075435b8();
              func_0x000107561a98();
              func_0x0001075435b8();
              func_0x000107561730();
              func_0x000107561b28();
              goto LAB_10755d1ec;
            }
            func_0x0001075618a4();
            if ((bool)in_ZR) {
              func_0x00010756183c();
              func_0x000107561b90();
              func_0x000107775de4();
              func_0x000107561880();
              if ((unaff_w20 >> 8 & 1) != 0) {
                in_stack_00000090 = (undefined1)unaff_w20;
                goto LAB_10755d16c;
              }
            }
            else {
              func_0x000107561674();
            }
          }
        }
LAB_10755d1e8:
        func_0x000107561acc();
      }
    }
LAB_10755d1ec:
    func_0x000107561144(&stack0x00000058);
  }
  else {
    func_0x0001075615d0();
    func_0x00010756103c();
    FUN_1075610b8(&stack0x00000090);
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561818();
  func_0x000107561144(&stack0x00000058);
  func_0x000107561aac();
  pcVar5 = FUN_10755d2a0;
  func_0x0001075620c0();
  in_stack_00000040 = &stack0x00000150;
  in_stack_00000048 = pcVar5;
  func_0x000107561550();
  iVar3 = (int)pcVar5;
  if (iVar3 == 0) {
    apuStack_298[0]._0_1_ = 0;
    bStack_208 = 0;
    func_0x000107561c20();
    if (iVar3 == 0) {
      func_0x000107561ca0();
      func_0x000107561a70();
      if (iVar3 != 0) {
        func_0x0001075619a0(appuStack_200);
        FUN_1075405c0();
        in_ZR = bStack_208 == bStack_170;
        if ((bool)in_ZR) {
          if (bStack_208 != 0) {
            param_6 = appuStack_200;
            FUN_1074832b4(apuStack_298);
          }
        }
        else if (bStack_208 == 0) {
          param_6 = appuStack_200;
          func_0x00010756118c(apuStack_298);
        }
        else {
          func_0x0001072ca3d4();
          bStack_208 = 0;
        }
        func_0x0001075611a8(appuStack_200);
        goto LAB_10755d4b4;
      }
      func_0x0001075619c0(apuStack_368);
      FUN_107540790();
      if ((uStack_308 & 1) == 0) {
        func_0x000107562054();
      }
      else {
        if ((int)param_10 == 0) {
          func_0x00010726ccd4(abStack_3c8,apuStack_368);
          param_6 = (undefined8 ***)abStack_3c8;
          FUN_107561404(appuStack_200);
        }
        else {
          ppuVar6 = apuStack_368;
          func_0x000107264c5c();
          ppuVar7 = ppuVar6;
          FUN_107541dc8();
          param_9 = param_6;
          if ((int)ppuVar7 == 0) {
            func_0x00010726ccd4(appuStack_160,apuStack_368);
            param_6 = appuStack_160;
            FUN_107561404(appuStack_200);
            func_0x00010726b164(appuStack_160);
          }
          else {
            FUN_107542278(auStack_438,ppuVar6,param_6);
            appuStack_100[0]._0_1_ = 0;
            uStack_a0 = 0;
            param_7 = appuStack_100;
            func_0x0001072ca264(appuStack_98,auStack_438);
            param_6 = appuStack_98;
            func_0x0001072ca30c(appuStack_200);
            func_0x0001072ca3d4(appuStack_98);
            func_0x00010726b144(appuStack_100);
            func_0x0001072c9b9c(auStack_438);
          }
        }
        func_0x000107561d58();
        func_0x000107561fb4();
        if ((param_10 & 1) == 0) {
          func_0x00010726b164(abStack_3c8);
        }
      }
      pppuVar8 = (undefined8 ***)apuStack_368;
LAB_10755d5ac:
      func_0x00010726b144(pppuVar8);
    }
    else {
      uStack_440 = 0xb;
      func_0x000107561abc(appuStack_98,auStack_448);
      func_0x000107561dcc();
      func_0x000107561940(appuStack_100,appuStack_98);
      if ((bStack_f0 & 1) == 0) {
        func_0x000107771558(appuStack_200,appuStack_98);
        param_6 = appuStack_200;
        func_0x000107561ab4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_200);
        func_0x000107562054();
      }
      else {
        ppuStack_300 = (undefined8 **)((ulong)ppuStack_300 & 0xffffffffffffff00);
        uStack_2a0 = 0;
        param_7 = &ppuStack_300;
        func_0x0001072ca264(appuStack_200,appuStack_100);
        param_6 = appuStack_200;
        in_ZR = bStack_208 == 1;
        if ((bool)in_ZR) {
          FUN_1074832b4();
        }
        else {
          func_0x00010756118c(apuStack_298);
        }
        func_0x0001072ca3d4(appuStack_200);
        func_0x00010726b144(&ppuStack_300);
      }
      func_0x0001072c95d0(appuStack_100);
      func_0x0001072ca718(appuStack_98);
      if ((bStack_f0 & 1) != 0) {
LAB_10755d4b4:
        if ((bStack_208 & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_288 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x0001072ca350(appuStack_200,apuStack_298);
              param_6 = appuStack_200;
              func_0x0001072ca30c();
              func_0x0001072ca3d4(appuStack_200);
              *(undefined1 *)(unaff_x19 + 0xa0) = 1;
              goto LAB_10755d5b0;
            }
            func_0x000107561af0(CONCAT71(apuStack_298[0]._1_7_,apuStack_298[0]._0_1_));
            if ((bool)in_ZR) {
              func_0x000107561928();
              param_6 = appuStack_100;
              func_0x000107777548(appuStack_98,appuStack_200);
              func_0x000107561b18();
              if ((bStack_38 & 1) == 0) {
                func_0x000107562054();
              }
              else {
                func_0x00010726ccd4(&uStack_428,appuStack_98);
                param_6 = (undefined8 ***)&uStack_428;
                FUN_107561404(appuStack_200);
                func_0x000107561d58();
                func_0x000107561fb4();
                func_0x00010726b164(&uStack_428);
              }
              pppuVar8 = appuStack_98;
              goto LAB_10755d5ac;
            }
            func_0x000107561674();
          }
        }
        func_0x000107562054();
      }
    }
LAB_10755d5b0:
    pppuVar8 = (undefined8 ***)apuStack_298;
    func_0x0001075611a8();
  }
  else {
    pppuVar8 = appuStack_200;
    param_6 = (undefined8 ***)0xa0;
    _bzero();
    func_0x000107561d58();
    func_0x000107561fb4();
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b144(appuStack_100);
  func_0x0001072c9b9c(auStack_438);
  func_0x00010726b144(apuStack_368);
  iVar3 = (int)apuStack_298;
  func_0x0001075611a8();
  func_0x000107561aac();
  pcVar5 = FUN_10755d660;
  func_0x000107561cc4();
  puStack_280 = &stack0x00000040;
  pcStack_278 = pcVar5;
  func_0x00010756159c();
  func_0x000107561578();
  if (iVar3 == 0) {
    uStack_3a8 = 0;
    bStack_358 = 0;
    func_0x000107561ad8();
    if (iVar3 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if (iVar3 != 0) {
        func_0x000107561854(&ppuStack_350);
        FUN_107541ac0();
        in_ZR = bStack_358 == (byte)ppuStack_300;
        if ((bool)in_ZR) {
          if (bStack_358 != 0) {
            param_6 = &ppuStack_350;
            FUN_10748b8dc(&uStack_3a8);
          }
        }
        else if (bStack_358 == 0) {
          param_6 = &ppuStack_350;
          func_0x0001075611e4(&uStack_3a8);
        }
        else {
          func_0x000107266a84();
          bStack_358 = 0;
        }
        func_0x0001075611fc(&ppuStack_350);
        goto LAB_10755d7f0;
      }
      func_0x000107561864(&ppuStack_420);
      FUN_107541c50();
LAB_10755d760:
      if ((bStack_400 & 1) == 0) {
LAB_10755d808:
        func_0x000107561e6c();
      }
      else {
        uVar15 = CONCAT71(uStack_40f,bStack_410);
        uStack_348 = uStack_418;
        ppuStack_350 = ppuStack_420;
        uStack_338 = uStack_408;
        ppuStack_300 = (undefined8 **)CONCAT44(ppuStack_300._4_4_,1);
        uStack_340 = uVar15;
        func_0x000107561b54();
        param_2 = (uint)uVar15;
        param_1 = (uint)ppuStack_420;
        func_0x0001075611c8();
        FUN_10748a890(&ppuStack_350);
      }
    }
    else {
      func_0x000107775e38(auStack_3b8);
      func_0x000107561abc(&ppuStack_350,auStack_3b8);
      func_0x000107561e80();
      func_0x0001075617f4(&ppuStack_3d0,&ppuStack_350);
      if ((abStack_3c0[0] & 1) == 0) {
        func_0x000107561c68(&ppuStack_420);
        param_6 = &ppuStack_420;
        func_0x000107561ab4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_420);
        func_0x000107561e6c();
      }
      else {
        auStack_444[0] = 0;
        uStack_428._4_1_ = 0;
        param_6 = &ppuStack_3d0;
        param_7 = (undefined8 ***)auStack_444;
        FUN_10754878c(&ppuStack_420);
        func_0x000107561ff8();
        if ((bool)in_ZR) {
          FUN_10748b8dc();
        }
        else {
          func_0x0001075611e4();
        }
        func_0x000107266a84(&ppuStack_420);
      }
      func_0x000107561e78();
      func_0x000107561bb4();
      if ((abStack_3c0[0] & 1) != 0) {
LAB_10755d7f0:
        if ((bStack_358 & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_398 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              param_6 = (undefined8 ***)&uStack_3a8;
              FUN_10748b734();
              func_0x000107561b54();
              FUN_10748b734();
              func_0x000107561eb0();
              func_0x000107562060();
              goto LAB_10755d80c;
            }
            func_0x000107561af0(CONCAT71(uStack_3a7,uStack_3a8));
            if ((bool)in_ZR) {
              func_0x000107561928();
              param_6 = (undefined8 ***)auStack_444;
              func_0x000107775e70(&ppuStack_420,&ppuStack_350);
              func_0x000107561b18();
              goto LAB_10755d760;
            }
            func_0x000107561674();
          }
        }
        goto LAB_10755d808;
      }
    }
LAB_10755d80c:
    func_0x0001075611fc(&uStack_3a8);
  }
  else {
    ppuStack_300 = (undefined8 **)0x0;
    param_1 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    ppuStack_350 = (undefined8 **)0x0;
    func_0x000107561b54();
    func_0x0001075611c8();
    FUN_10748a890(&ppuStack_350);
  }
  func_0x000107561694(uStack_2d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561934();
  func_0x0001075611fc(&uStack_3a8);
  func_0x000107561aac();
  pcVar5 = FUN_10755d8d4;
  func_0x000107561d20();
  ppuStack_300 = &puStack_280;
  ppuStack_2f8 = (undefined8 **)pcVar5;
  func_0x000107561514();
  if ((int)pcVar5 == 0) {
    func_0x000107561b78();
    func_0x000107561ad8();
    if ((int)pcVar5 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if ((int)pcVar5 != 0) {
        func_0x0001075616cc();
        FUN_107541c6c();
        func_0x0001075618c4();
        if ((bool)in_ZR) {
          if (extraout_w8_00 != 0) {
            func_0x000107561b6c();
            FUN_10748b568();
          }
        }
        else if (extraout_w8_00 == 0) {
          param_6 = (undefined8 ***)abStack_3c0;
          func_0x000107561234(auStack_3f8);
        }
        else {
          func_0x000107266a84();
          abStack_3c8[0] = 0;
        }
        pcVar5 = (code *)abStack_3c0;
        func_0x00010756124c();
        goto LAB_10755d9e4;
      }
      func_0x000107561864();
      FUN_107541da4();
      if (((ulong)pcVar5 >> 0x20 & 1) == 0) goto LAB_10755d9fc;
      func_0x000107561f08();
LAB_10755d980:
      func_0x0001075618b4();
      func_0x00010756121c();
      FUN_10748a94c(abStack_3c0);
    }
    else {
      func_0x000107775ea8(&uStack_408);
      func_0x0001075616bc();
      func_0x000107561a88();
      func_0x000107561604();
      if ((bStack_410 & 1) == 0) {
        func_0x000107561848();
        func_0x00010756180c();
        func_0x000107561ae0();
        func_0x000107561acc();
      }
      else {
        func_0x0001075618d4();
        FUN_1075487cc();
        func_0x0001075616e0();
        if ((bool)in_ZR) {
          FUN_10748b568();
        }
        else {
          func_0x000107561234();
        }
        func_0x000107561ae8();
      }
      func_0x000107561a80();
      func_0x000107561a90();
      if ((bStack_410 & 1) != 0) {
LAB_10755d9e4:
        if ((abStack_3c8[0] & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_3e8 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x000107561b84();
              FUN_10748b3c0();
              func_0x000107561a98();
              FUN_10748b3c0();
              func_0x000107561730();
              func_0x000107561b28();
              goto LAB_10755da00;
            }
            func_0x0001075618a4();
            if ((bool)in_ZR) {
              func_0x00010756183c();
              func_0x000107561b90();
              func_0x000107775ee4();
              func_0x000107561a78();
              if (((ulong)pcVar5 >> 0x20 & 1) != 0) {
                func_0x000107561f20();
                goto LAB_10755d980;
              }
            }
            else {
              func_0x000107561674();
            }
          }
        }
LAB_10755d9fc:
        func_0x000107561acc();
      }
    }
LAB_10755da00:
    func_0x00010756124c(auStack_3f8);
  }
  else {
    func_0x0001075615d0();
    func_0x00010756121c();
    FUN_10748a94c(abStack_3c0);
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561818();
  func_0x00010756124c(auStack_3f8);
  func_0x000107561aac();
  puVar9 = auStack_5c0;
  pppuVar10 = param_6;
  puVar11 = param_8;
  func_0x0001075616a8();
  iVar3 = (int)pppuVar10;
  uStack_498 = extraout_x8;
  func_0x000107766098();
  if (iVar3 == 0) {
    iVar3 = (int)param_6 + 8;
    (*(code *)(*param_6)[3])();
    if (iVar3 == 0) {
      FUN_107324e4c(param_6,param_7,param_8);
      if (((ulong)param_6 >> 0x20 & 1) == 0) goto LAB_10755dbcc;
      ppuStack_4e8 = (undefined8 **)CONCAT44(ppuStack_4e8._4_4_,(int)param_6);
      uStack_4d8 = 0;
      uStack_4a8 = 1;
    }
    else {
      func_0x00010739b01c(&ppuStack_540,param_6,param_7,param_8);
      if ((bStack_530 & 1) == 0) {
LAB_10755dbcc:
        func_0x000107561c94();
        goto LAB_10755dc30;
      }
      uStack_4e0 = uStack_538;
      ppuStack_4e8 = ppuStack_540;
      func_0x00010756206c();
      param_1 = (uint)ppuStack_540;
      uStack_4a8 = extraout_w8_01;
    }
    param_7 = &ppuStack_4f0;
    FUN_10756126c(pppuVar8);
    param_6 = &ppuStack_4e8;
    FUN_107561304();
  }
  else {
    func_0x0001077758d8(auStack_550);
    func_0x000107561abc(&ppuStack_4f0,auStack_550);
    func_0x0001072c9884(auStack_550);
    func_0x0001077713b4(auStack_568,&ppuStack_4f0,param_6,param_8);
    if ((bStack_558 & 1) == 0) {
      func_0x000107771558(&ppuStack_540,&ppuStack_4f0);
      param_7 = &ppuStack_540;
      func_0x000107561ab4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_540);
      func_0x000107561c94();
    }
    else {
      auStack_5c0[0] = 0;
      uStack_5ac = 0;
      FUN_107561448(auStack_5a8,auStack_568,auStack_5c0);
      FUN_1075614d0(&ppuStack_540,auStack_5a8);
      param_7 = &ppuStack_540;
      FUN_10756126c(pppuVar8);
      FUN_107561304(&uStack_538);
      func_0x000107266a84(auStack_5a8);
      param_8 = puVar9;
    }
    func_0x0001072c95d0(auStack_568);
    param_6 = &ppuStack_4f0;
    func_0x0001072ca718();
  }
LAB_10755dc30:
  func_0x000107561694(uStack_498);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_568);
  func_0x0001072ca718(&ppuStack_4f0);
  func_0x000107561aac();
  pppuVar10 = param_7;
  ppuStack_610 = (undefined8 **)&uStack_3a8;
  func_0x0001075616a8();
  pppuVar8 = pppuVar10 + 1;
  (*(code *)(*pppuVar10)[6])();
  if ((int)pppuVar8 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (*(code *)(*param_7)[7])(&lStack_660,pppuVar10 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_660 + 0x68))(auStack_6a0,auStack_658);
    in_ZR = cStack_668 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar4 = (uint)auStack_6a0;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar4 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar4 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_620 == 1) {
        iVar3 = (int)alStack_630 + 8;
        (**(code **)(alStack_630[0] + 0x30))();
        if (iVar3 == 0) goto LAB_10755deb4;
        if ((bStack_620 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_638 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar9 = auStack_648;
        FUN_107324e4c(puVar9,param_8,puVar11);
        func_0x000107561e3c();
        uVar14 = (uint)puVar9 & 0xffffff00;
        uVar13 = (uint)puVar9 & 0xff;
        uVar4 = (uint)((ulong)puVar9 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar4 = 0;
        uVar13 = 0;
        uVar14 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar4 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar14 | uVar13;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar12 = 1;
LAB_10755dee0:
      *(char *)param_6 = (char)uVar1;
      *(uint *)((long)param_6 + 4) = param_1;
      *(uint *)(param_6 + 1) = param_2;
      *(undefined4 *)((long)param_6 + 0xc) = param_3;
      *(undefined4 *)(param_6 + 2) = param_4;
      *(undefined4 *)((long)param_6 + 0x14) = uVar12;
      *(undefined4 *)(param_6 + 9) = 1;
      *(undefined1 *)(param_6 + 10) = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar4 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar12 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_620 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_6b4[0] = 0;
      uStack_6a4 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_630[1] = 0x3f8000003f800000;
      alStack_630[0] = 0;
      FUN_10755df6c(auStack_6b4,alStack_630);
      uVar12 = 2;
      goto LAB_10755dee0;
    }
    iVar3 = (int)alStack_630 + 8;
    (**(code **)(alStack_630[0] + 0x30))();
    if (iVar3 == 0) goto LAB_10755de84;
    if ((bStack_620 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_638 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_6b4,auStack_648,param_8,puVar11);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar5)();
}



/* Entry: 10755d2a0; end: 10755d65f;  */

void FUN_10755d2a0(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 ***param_6,undefined8 ***param_7,undefined1 *param_8
                  ,undefined8 ***param_9,ulong param_10)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  uint uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  undefined8 ***pppuVar8;
  undefined1 *puVar9;
  code *pcVar10;
  int extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar11;
  undefined8 extraout_x8;
  long unaff_x19;
  uint uVar12;
  uint uVar13;
  int unaff_w30;
  undefined8 uVar14;
  undefined8 in_stack_00000040;
  undefined1 auStack_6b4 [16];
  undefined1 uStack_6a4;
  undefined1 auStack_6a0 [56];
  char cStack_668;
  long lStack_660;
  undefined1 auStack_658 [16];
  undefined1 auStack_648 [16];
  char cStack_638;
  long alStack_630 [2];
  byte bStack_620;
  undefined8 **ppuStack_610;
  undefined1 auStack_5c0 [20];
  undefined1 uStack_5ac;
  undefined1 auStack_5a8 [64];
  undefined1 auStack_568 [16];
  byte bStack_558;
  undefined1 auStack_550 [16];
  undefined8 **ppuStack_540;
  undefined8 uStack_538;
  byte bStack_530;
  undefined8 **ppuStack_4f0;
  undefined8 **ppuStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4a8;
  undefined8 uStack_498;
  undefined1 auStack_448 [4];
  undefined1 auStack_444 [4];
  undefined4 uStack_440;
  undefined1 auStack_438 [16];
  undefined8 uStack_428;
  undefined8 **ppuStack_420;
  undefined8 uStack_418;
  byte bStack_410;
  undefined7 uStack_40f;
  undefined8 uStack_408;
  byte bStack_400;
  undefined1 auStack_3f8 [16];
  byte bStack_3e8;
  undefined8 **ppuStack_3d0;
  byte abStack_3c8 [8];
  byte abStack_3c0 [8];
  undefined1 auStack_3b8 [16];
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  byte bStack_398;
  undefined8 *apuStack_368 [2];
  byte bStack_358;
  undefined8 **ppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 **ppuStack_300;
  undefined8 **ppuStack_2f8;
  undefined8 uStack_2d8;
  undefined1 uStack_2a0;
  undefined8 *apuStack_298 [2];
  byte bStack_288;
  undefined8 *puStack_280;
  code *pcStack_278;
  byte bStack_208;
  undefined8 **appuStack_200 [18];
  byte bStack_170;
  undefined8 **appuStack_160 [12];
  undefined8 **appuStack_100 [2];
  byte bStack_f0;
  undefined1 uStack_a0;
  undefined8 **appuStack_98 [12];
  byte bStack_38;
  
  func_0x0001075620c0();
  func_0x000107561550();
  if (unaff_w30 == 0) {
    apuStack_298[0]._0_1_ = 0;
    bStack_208 = 0;
    func_0x000107561c20();
    if (unaff_w30 == 0) {
      func_0x000107561ca0();
      func_0x000107561a70();
      if (unaff_w30 != 0) {
        func_0x0001075619a0(appuStack_200);
        FUN_1075405c0();
        in_ZR = bStack_208 == bStack_170;
        if ((bool)in_ZR) {
          if (bStack_208 != 0) {
            param_6 = appuStack_200;
            FUN_1074832b4(apuStack_298);
          }
        }
        else if (bStack_208 == 0) {
          param_6 = appuStack_200;
          func_0x00010756118c(apuStack_298);
        }
        else {
          func_0x0001072ca3d4();
          bStack_208 = 0;
        }
        func_0x0001075611a8(appuStack_200);
        goto LAB_10755d4b4;
      }
      func_0x0001075619c0(apuStack_368);
      FUN_107540790();
      if ((uStack_308 & 1) == 0) {
        func_0x000107562054();
      }
      else {
        if ((int)param_10 == 0) {
          func_0x00010726ccd4(abStack_3c8,apuStack_368);
          param_6 = (undefined8 ***)abStack_3c8;
          FUN_107561404(appuStack_200);
        }
        else {
          ppuVar4 = apuStack_368;
          func_0x000107264c5c();
          ppuVar5 = ppuVar4;
          FUN_107541dc8();
          param_9 = param_6;
          if ((int)ppuVar5 == 0) {
            func_0x00010726ccd4(appuStack_160,apuStack_368);
            param_6 = appuStack_160;
            FUN_107561404(appuStack_200);
            func_0x00010726b164(appuStack_160);
          }
          else {
            FUN_107542278(auStack_438,ppuVar4,param_6);
            appuStack_100[0]._0_1_ = 0;
            uStack_a0 = 0;
            param_7 = appuStack_100;
            func_0x0001072ca264(appuStack_98,auStack_438);
            param_6 = appuStack_98;
            func_0x0001072ca30c(appuStack_200);
            func_0x0001072ca3d4(appuStack_98);
            func_0x00010726b144(appuStack_100);
            func_0x0001072c9b9c(auStack_438);
          }
        }
        func_0x000107561d58();
        func_0x000107561fb4();
        if ((param_10 & 1) == 0) {
          func_0x00010726b164(abStack_3c8);
        }
      }
      pppuVar6 = (undefined8 ***)apuStack_368;
LAB_10755d5ac:
      func_0x00010726b144(pppuVar6);
    }
    else {
      uStack_440 = 0xb;
      func_0x000107561abc(appuStack_98,auStack_448);
      func_0x000107561dcc();
      func_0x000107561940(appuStack_100,appuStack_98);
      if ((bStack_f0 & 1) == 0) {
        func_0x000107771558(appuStack_200,appuStack_98);
        param_6 = appuStack_200;
        func_0x000107561ab4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_200);
        func_0x000107562054();
      }
      else {
        ppuStack_300 = (undefined8 **)((ulong)ppuStack_300 & 0xffffffffffffff00);
        uStack_2a0 = 0;
        param_7 = &ppuStack_300;
        func_0x0001072ca264(appuStack_200,appuStack_100);
        param_6 = appuStack_200;
        in_ZR = bStack_208 == 1;
        if ((bool)in_ZR) {
          FUN_1074832b4();
        }
        else {
          func_0x00010756118c(apuStack_298);
        }
        func_0x0001072ca3d4(appuStack_200);
        func_0x00010726b144(&ppuStack_300);
      }
      func_0x0001072c95d0(appuStack_100);
      func_0x0001072ca718(appuStack_98);
      if ((bStack_f0 & 1) != 0) {
LAB_10755d4b4:
        if ((bStack_208 & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_288 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x0001072ca350(appuStack_200,apuStack_298);
              param_6 = appuStack_200;
              func_0x0001072ca30c();
              func_0x0001072ca3d4(appuStack_200);
              *(undefined1 *)(unaff_x19 + 0xa0) = 1;
              goto LAB_10755d5b0;
            }
            func_0x000107561af0(CONCAT71(apuStack_298[0]._1_7_,apuStack_298[0]._0_1_));
            if ((bool)in_ZR) {
              func_0x000107561928();
              param_6 = appuStack_100;
              func_0x000107777548(appuStack_98,appuStack_200);
              func_0x000107561b18();
              if ((bStack_38 & 1) == 0) {
                func_0x000107562054();
              }
              else {
                func_0x00010726ccd4(&uStack_428,appuStack_98);
                param_6 = (undefined8 ***)&uStack_428;
                FUN_107561404(appuStack_200);
                func_0x000107561d58();
                func_0x000107561fb4();
                func_0x00010726b164(&uStack_428);
              }
              pppuVar6 = appuStack_98;
              goto LAB_10755d5ac;
            }
            func_0x000107561674();
          }
        }
        func_0x000107562054();
      }
    }
LAB_10755d5b0:
    pppuVar6 = (undefined8 ***)apuStack_298;
    func_0x0001075611a8();
  }
  else {
    pppuVar6 = appuStack_200;
    param_6 = (undefined8 ***)0xa0;
    _bzero();
    func_0x000107561d58();
    func_0x000107561fb4();
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b144(appuStack_100);
  func_0x0001072c9b9c(auStack_438);
  func_0x00010726b144(apuStack_368);
  iVar2 = (int)apuStack_298;
  func_0x0001075611a8();
  func_0x000107561aac();
  pcVar10 = FUN_10755d660;
  func_0x000107561cc4();
  puStack_280 = &stack0x00000040;
  pcStack_278 = pcVar10;
  func_0x00010756159c();
  func_0x000107561578();
  if (iVar2 == 0) {
    uStack_3a8 = 0;
    bStack_358 = 0;
    func_0x000107561ad8();
    if (iVar2 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if (iVar2 != 0) {
        func_0x000107561854(&ppuStack_350);
        FUN_107541ac0();
        in_ZR = bStack_358 == (byte)ppuStack_300;
        if ((bool)in_ZR) {
          if (bStack_358 != 0) {
            param_6 = &ppuStack_350;
            FUN_10748b8dc(&uStack_3a8);
          }
        }
        else if (bStack_358 == 0) {
          param_6 = &ppuStack_350;
          func_0x0001075611e4(&uStack_3a8);
        }
        else {
          func_0x000107266a84();
          bStack_358 = 0;
        }
        func_0x0001075611fc(&ppuStack_350);
        goto LAB_10755d7f0;
      }
      func_0x000107561864(&ppuStack_420);
      FUN_107541c50();
LAB_10755d760:
      if ((bStack_400 & 1) == 0) {
LAB_10755d808:
        func_0x000107561e6c();
      }
      else {
        uVar14 = CONCAT71(uStack_40f,bStack_410);
        uStack_348 = uStack_418;
        ppuStack_350 = ppuStack_420;
        uStack_338 = uStack_408;
        ppuStack_300 = (undefined8 **)CONCAT44(ppuStack_300._4_4_,1);
        uStack_340 = uVar14;
        func_0x000107561b54();
        param_2 = (uint)uVar14;
        param_1 = (uint)ppuStack_420;
        func_0x0001075611c8();
        FUN_10748a890(&ppuStack_350);
      }
    }
    else {
      func_0x000107775e38(auStack_3b8);
      func_0x000107561abc(&ppuStack_350,auStack_3b8);
      func_0x000107561e80();
      func_0x0001075617f4(&ppuStack_3d0,&ppuStack_350);
      if ((abStack_3c0[0] & 1) == 0) {
        func_0x000107561c68(&ppuStack_420);
        param_6 = &ppuStack_420;
        func_0x000107561ab4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_420);
        func_0x000107561e6c();
      }
      else {
        auStack_444[0] = 0;
        uStack_428._4_1_ = 0;
        param_6 = &ppuStack_3d0;
        param_7 = (undefined8 ***)auStack_444;
        FUN_10754878c(&ppuStack_420);
        func_0x000107561ff8();
        if ((bool)in_ZR) {
          FUN_10748b8dc();
        }
        else {
          func_0x0001075611e4();
        }
        func_0x000107266a84(&ppuStack_420);
      }
      func_0x000107561e78();
      func_0x000107561bb4();
      if ((abStack_3c0[0] & 1) != 0) {
LAB_10755d7f0:
        if ((bStack_358 & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_398 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              param_6 = (undefined8 ***)&uStack_3a8;
              FUN_10748b734();
              func_0x000107561b54();
              FUN_10748b734();
              func_0x000107561eb0();
              func_0x000107562060();
              goto LAB_10755d80c;
            }
            func_0x000107561af0(CONCAT71(uStack_3a7,uStack_3a8));
            if ((bool)in_ZR) {
              func_0x000107561928();
              param_6 = (undefined8 ***)auStack_444;
              func_0x000107775e70(&ppuStack_420,&ppuStack_350);
              func_0x000107561b18();
              goto LAB_10755d760;
            }
            func_0x000107561674();
          }
        }
        goto LAB_10755d808;
      }
    }
LAB_10755d80c:
    func_0x0001075611fc(&uStack_3a8);
  }
  else {
    ppuStack_300 = (undefined8 **)0x0;
    param_1 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    ppuStack_350 = (undefined8 **)0x0;
    func_0x000107561b54();
    func_0x0001075611c8();
    FUN_10748a890(&ppuStack_350);
  }
  func_0x000107561694(uStack_2d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561934();
  func_0x0001075611fc(&uStack_3a8);
  func_0x000107561aac();
  pcVar10 = FUN_10755d8d4;
  func_0x000107561d20();
  ppuStack_300 = &puStack_280;
  ppuStack_2f8 = (undefined8 **)pcVar10;
  func_0x000107561514();
  if ((int)pcVar10 == 0) {
    func_0x000107561b78();
    func_0x000107561ad8();
    if ((int)pcVar10 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if ((int)pcVar10 != 0) {
        func_0x0001075616cc();
        FUN_107541c6c();
        func_0x0001075618c4();
        if ((bool)in_ZR) {
          if (extraout_w8 != 0) {
            func_0x000107561b6c();
            FUN_10748b568();
          }
        }
        else if (extraout_w8 == 0) {
          param_6 = (undefined8 ***)abStack_3c0;
          func_0x000107561234(auStack_3f8);
        }
        else {
          func_0x000107266a84();
          abStack_3c8[0] = 0;
        }
        pcVar10 = (code *)abStack_3c0;
        func_0x00010756124c();
        goto LAB_10755d9e4;
      }
      func_0x000107561864();
      FUN_107541da4();
      if (((ulong)pcVar10 >> 0x20 & 1) == 0) goto LAB_10755d9fc;
      func_0x000107561f08();
LAB_10755d980:
      func_0x0001075618b4();
      func_0x00010756121c();
      FUN_10748a94c(abStack_3c0);
    }
    else {
      func_0x000107775ea8(&uStack_408);
      func_0x0001075616bc();
      func_0x000107561a88();
      func_0x000107561604();
      if ((bStack_410 & 1) == 0) {
        func_0x000107561848();
        func_0x00010756180c();
        func_0x000107561ae0();
        func_0x000107561acc();
      }
      else {
        func_0x0001075618d4();
        FUN_1075487cc();
        func_0x0001075616e0();
        if ((bool)in_ZR) {
          FUN_10748b568();
        }
        else {
          func_0x000107561234();
        }
        func_0x000107561ae8();
      }
      func_0x000107561a80();
      func_0x000107561a90();
      if ((bStack_410 & 1) != 0) {
LAB_10755d9e4:
        if ((abStack_3c8[0] & 1) != 0) {
          if ((((ulong)param_9 & 1) == 0) && ((bStack_3e8 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x000107561b84();
              FUN_10748b3c0();
              func_0x000107561a98();
              FUN_10748b3c0();
              func_0x000107561730();
              func_0x000107561b28();
              goto LAB_10755da00;
            }
            func_0x0001075618a4();
            if ((bool)in_ZR) {
              func_0x00010756183c();
              func_0x000107561b90();
              func_0x000107775ee4();
              func_0x000107561a78();
              if (((ulong)pcVar10 >> 0x20 & 1) != 0) {
                func_0x000107561f20();
                goto LAB_10755d980;
              }
            }
            else {
              func_0x000107561674();
            }
          }
        }
LAB_10755d9fc:
        func_0x000107561acc();
      }
    }
LAB_10755da00:
    func_0x00010756124c(auStack_3f8);
  }
  else {
    func_0x0001075615d0();
    func_0x00010756121c();
    FUN_10748a94c(abStack_3c0);
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561818();
  func_0x00010756124c(auStack_3f8);
  func_0x000107561aac();
  puVar7 = auStack_5c0;
  pppuVar8 = param_6;
  puVar9 = param_8;
  func_0x0001075616a8();
  iVar2 = (int)pppuVar8;
  uStack_498 = extraout_x8;
  func_0x000107766098();
  if (iVar2 == 0) {
    iVar2 = (int)param_6 + 8;
    (*(code *)(*param_6)[3])();
    if (iVar2 == 0) {
      FUN_107324e4c(param_6,param_7,param_8);
      if (((ulong)param_6 >> 0x20 & 1) == 0) goto LAB_10755dbcc;
      ppuStack_4e8 = (undefined8 **)CONCAT44(ppuStack_4e8._4_4_,(int)param_6);
      uStack_4d8 = 0;
      uStack_4a8 = 1;
    }
    else {
      func_0x00010739b01c(&ppuStack_540,param_6,param_7,param_8);
      if ((bStack_530 & 1) == 0) {
LAB_10755dbcc:
        func_0x000107561c94();
        goto LAB_10755dc30;
      }
      uStack_4e0 = uStack_538;
      ppuStack_4e8 = ppuStack_540;
      func_0x00010756206c();
      param_1 = (uint)ppuStack_540;
      uStack_4a8 = extraout_w8_00;
    }
    param_7 = &ppuStack_4f0;
    FUN_10756126c(pppuVar6);
    param_6 = &ppuStack_4e8;
    FUN_107561304();
  }
  else {
    func_0x0001077758d8(auStack_550);
    func_0x000107561abc(&ppuStack_4f0,auStack_550);
    func_0x0001072c9884(auStack_550);
    func_0x0001077713b4(auStack_568,&ppuStack_4f0,param_6,param_8);
    if ((bStack_558 & 1) == 0) {
      func_0x000107771558(&ppuStack_540,&ppuStack_4f0);
      param_7 = &ppuStack_540;
      func_0x000107561ab4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_540);
      func_0x000107561c94();
    }
    else {
      auStack_5c0[0] = 0;
      uStack_5ac = 0;
      FUN_107561448(auStack_5a8,auStack_568,auStack_5c0);
      FUN_1075614d0(&ppuStack_540,auStack_5a8);
      param_7 = &ppuStack_540;
      FUN_10756126c(pppuVar6);
      FUN_107561304(&uStack_538);
      func_0x000107266a84(auStack_5a8);
      param_8 = puVar7;
    }
    func_0x0001072c95d0(auStack_568);
    param_6 = &ppuStack_4f0;
    func_0x0001072ca718();
  }
LAB_10755dc30:
  func_0x000107561694(uStack_498);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_568);
  func_0x0001072ca718(&ppuStack_4f0);
  func_0x000107561aac();
  pppuVar8 = param_7;
  ppuStack_610 = (undefined8 **)&uStack_3a8;
  func_0x0001075616a8();
  pppuVar6 = pppuVar8 + 1;
  (*(code *)(*pppuVar8)[6])();
  if ((int)pppuVar6 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (*(code *)(*param_7)[7])(&lStack_660,pppuVar8 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_660 + 0x68))(auStack_6a0,auStack_658);
    in_ZR = cStack_668 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar3 = (uint)auStack_6a0;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar3 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar3 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_620 == 1) {
        iVar2 = (int)alStack_630 + 8;
        (**(code **)(alStack_630[0] + 0x30))();
        if (iVar2 == 0) goto LAB_10755deb4;
        if ((bStack_620 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_638 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar7 = auStack_648;
        FUN_107324e4c(puVar7,param_8,puVar9);
        func_0x000107561e3c();
        uVar13 = (uint)puVar7 & 0xffffff00;
        uVar12 = (uint)puVar7 & 0xff;
        uVar3 = (uint)((ulong)puVar7 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar3 = 0;
        uVar12 = 0;
        uVar13 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar3 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar13 | uVar12;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar11 = 1;
LAB_10755dee0:
      *(char *)param_6 = (char)uVar1;
      *(uint *)((long)param_6 + 4) = param_1;
      *(uint *)(param_6 + 1) = param_2;
      *(undefined4 *)((long)param_6 + 0xc) = param_3;
      *(undefined4 *)(param_6 + 2) = param_4;
      *(undefined4 *)((long)param_6 + 0x14) = uVar11;
      *(undefined4 *)(param_6 + 9) = 1;
      *(undefined1 *)(param_6 + 10) = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar3 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar11 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_620 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_6b4[0] = 0;
      uStack_6a4 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_630[1] = 0x3f8000003f800000;
      alStack_630[0] = 0;
      FUN_10755df6c(auStack_6b4,alStack_630);
      uVar11 = 2;
      goto LAB_10755dee0;
    }
    iVar2 = (int)alStack_630 + 8;
    (**(code **)(alStack_630[0] + 0x30))();
    if (iVar2 == 0) goto LAB_10755de84;
    if ((bStack_620 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_638 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_6b4,auStack_648,param_8,puVar9);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar10)();
}



/* Entry: 10755d660; end: 10755d8d3;  */

void FUN_10755d660(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  long *param_6,long *param_7,undefined1 *param_8)

{
  uint uVar1;
  byte bVar2;
  code cVar3;
  undefined1 in_ZR;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  int extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar11;
  undefined8 extraout_x8;
  uint uVar12;
  ulong unaff_x21;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 in_stack_0000000c;
  undefined1 in_stack_0000002c;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  byte bStack0000000000000040;
  undefined7 uStack0000000000000041;
  undefined8 in_stack_00000048;
  byte in_stack_00000050;
  byte in_stack_00000068;
  byte in_stack_00000088;
  code in_stack_00000090;
  undefined1 uStack00000000000000a8;
  undefined7 uStack00000000000000a9;
  byte in_stack_000000b8;
  byte in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  byte bStack0000000000000150;
  undefined4 uStack0000000000000154;
  code *in_stack_00000158;
  undefined8 in_stack_00000178;
  undefined8 in_stack_000001d0;
  undefined1 auStack_264 [16];
  undefined1 uStack_254;
  undefined1 auStack_250 [56];
  char cStack_218;
  long lStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  char cStack_1e8;
  long alStack_1e0 [2];
  byte bStack_1d0;
  undefined8 *puStack_1c0;
  undefined1 auStack_170 [20];
  undefined1 uStack_15c;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [16];
  byte bStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  func_0x000107561cc4();
  func_0x00010756159c();
  func_0x000107561578();
  if (param_5 == 0) {
    uStack00000000000000a8 = 0;
    in_stack_000000f8 = 0;
    func_0x000107561ad8();
    if (param_5 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if (param_5 != 0) {
        func_0x000107561854(&stack0x00000100);
        FUN_107541ac0();
        in_ZR = in_stack_000000f8 == bStack0000000000000150;
        if ((bool)in_ZR) {
          if (in_stack_000000f8 != 0) {
            param_6 = &stack0x00000100;
            FUN_10748b8dc(&stack0x000000a8);
          }
        }
        else if (in_stack_000000f8 == 0) {
          param_6 = &stack0x00000100;
          func_0x0001075611e4(&stack0x000000a8);
        }
        else {
          func_0x000107266a84();
          in_stack_000000f8 = 0;
        }
        func_0x0001075611fc(&stack0x00000100);
        goto LAB_10755d7f0;
      }
      func_0x000107561864(&stack0x00000030);
      FUN_107541c50();
LAB_10755d760:
      if ((in_stack_00000050 & 1) == 0) {
LAB_10755d808:
        func_0x000107561e6c();
      }
      else {
        uVar15 = CONCAT71(uStack0000000000000041,bStack0000000000000040);
        in_stack_00000108 = in_stack_00000038;
        in_stack_00000100 = in_stack_00000030;
        in_stack_00000118 = in_stack_00000048;
        _bStack0000000000000150 = (undefined8 *)CONCAT44(uStack0000000000000154,1);
        lVar14 = in_stack_00000030;
        in_stack_00000110 = uVar15;
        func_0x000107561b54();
        param_2 = (uint)uVar15;
        param_1 = (uint)lVar14;
        func_0x0001075611c8();
        FUN_10748a890(&stack0x00000100);
      }
    }
    else {
      func_0x000107775e38(&stack0x00000098);
      func_0x000107561abc(&stack0x00000100,&stack0x00000098);
      func_0x000107561e80();
      func_0x0001075617f4(&stack0x00000080,&stack0x00000100);
      cVar3 = in_stack_00000090;
      if (((byte)in_stack_00000090 & 1) == 0) {
        func_0x000107561c68(&stack0x00000030);
        param_6 = &stack0x00000030;
        func_0x000107561ab4();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000030);
        func_0x000107561e6c();
      }
      else {
        in_stack_0000000c = 0;
        in_stack_0000002c = 0;
        param_6 = (long *)&stack0x00000080;
        param_7 = (long *)&stack0x0000000c;
        FUN_10754878c(&stack0x00000030);
        func_0x000107561ff8();
        if ((bool)in_ZR) {
          FUN_10748b8dc();
        }
        else {
          func_0x0001075611e4();
        }
        func_0x000107266a84(&stack0x00000030);
      }
      func_0x000107561e78();
      func_0x000107561bb4();
      if (((byte)cVar3 & 1) != 0) {
LAB_10755d7f0:
        if ((in_stack_000000f8 & 1) != 0) {
          if (((unaff_x21 & 1) == 0) && ((in_stack_000000b8 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              param_6 = (long *)&stack0x000000a8;
              FUN_10748b734();
              func_0x000107561b54();
              FUN_10748b734();
              func_0x000107561eb0();
              func_0x000107562060();
              goto LAB_10755d80c;
            }
            func_0x000107561af0(CONCAT71(uStack00000000000000a9,uStack00000000000000a8));
            if ((bool)in_ZR) {
              func_0x000107561928();
              param_6 = (long *)&stack0x0000000c;
              func_0x000107775e70(&stack0x00000030,&stack0x00000100);
              func_0x000107561b18();
              goto LAB_10755d760;
            }
            func_0x000107561674();
          }
        }
        goto LAB_10755d808;
      }
    }
LAB_10755d80c:
    func_0x0001075611fc(&stack0x000000a8);
  }
  else {
    _bStack0000000000000150 = (undefined8 *)0x0;
    param_1 = 0;
    in_stack_00000148 = 0;
    in_stack_00000140 = 0;
    in_stack_00000138 = 0;
    in_stack_00000130 = 0;
    in_stack_00000128 = 0;
    in_stack_00000120 = 0;
    in_stack_00000118 = 0;
    in_stack_00000110 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    func_0x000107561b54();
    func_0x0001075611c8();
    FUN_10748a890(&stack0x00000100);
  }
  func_0x000107561694(in_stack_00000178);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561934();
  func_0x0001075611fc(&stack0x000000a8);
  func_0x000107561aac();
  pcVar6 = FUN_10755d8d4;
  func_0x000107561d20();
  _bStack0000000000000150 = &stack0x000001d0;
  in_stack_00000158 = pcVar6;
  func_0x000107561514();
  if ((int)pcVar6 == 0) {
    func_0x000107561b78();
    func_0x000107561ad8();
    if ((int)pcVar6 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if ((int)pcVar6 != 0) {
        func_0x0001075616cc();
        FUN_107541c6c();
        func_0x0001075618c4();
        if ((bool)in_ZR) {
          if (extraout_w8 != 0) {
            func_0x000107561b6c();
            FUN_10748b568();
          }
        }
        else if (extraout_w8 == 0) {
          param_6 = (long *)&stack0x00000090;
          func_0x000107561234(&stack0x00000058);
        }
        else {
          func_0x000107266a84();
          in_stack_00000088 = 0;
        }
        pcVar6 = &stack0x00000090;
        func_0x00010756124c();
        goto LAB_10755d9e4;
      }
      func_0x000107561864();
      FUN_107541da4();
      if (((ulong)pcVar6 >> 0x20 & 1) == 0) goto LAB_10755d9fc;
      func_0x000107561f08();
LAB_10755d980:
      func_0x0001075618b4();
      func_0x00010756121c();
      FUN_10748a94c(&stack0x00000090);
    }
    else {
      func_0x000107775ea8(&stack0x00000048);
      func_0x0001075616bc();
      func_0x000107561a88();
      func_0x000107561604();
      bVar2 = bStack0000000000000040;
      if ((bStack0000000000000040 & 1) == 0) {
        func_0x000107561848();
        func_0x00010756180c();
        func_0x000107561ae0();
        func_0x000107561acc();
      }
      else {
        func_0x0001075618d4();
        FUN_1075487cc();
        func_0x0001075616e0();
        if ((bool)in_ZR) {
          FUN_10748b568();
        }
        else {
          func_0x000107561234();
        }
        func_0x000107561ae8();
      }
      func_0x000107561a80();
      func_0x000107561a90();
      if ((bVar2 & 1) != 0) {
LAB_10755d9e4:
        if ((in_stack_00000088 & 1) != 0) {
          if (((unaff_x21 & 1) == 0) && ((in_stack_00000068 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x000107561b84();
              FUN_10748b3c0();
              func_0x000107561a98();
              FUN_10748b3c0();
              func_0x000107561730();
              func_0x000107561b28();
              goto LAB_10755da00;
            }
            func_0x0001075618a4();
            if ((bool)in_ZR) {
              func_0x00010756183c();
              func_0x000107561b90();
              func_0x000107775ee4();
              func_0x000107561a78();
              if (((ulong)pcVar6 >> 0x20 & 1) != 0) {
                func_0x000107561f20();
                goto LAB_10755d980;
              }
            }
            else {
              func_0x000107561674();
            }
          }
        }
LAB_10755d9fc:
        func_0x000107561acc();
      }
    }
LAB_10755da00:
    func_0x00010756124c(&stack0x00000058);
  }
  else {
    func_0x0001075615d0();
    func_0x00010756121c();
    FUN_10748a94c(&stack0x00000090);
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561818();
  func_0x00010756124c(&stack0x00000058);
  func_0x000107561aac();
  puVar8 = auStack_170;
  plVar7 = param_6;
  puVar10 = param_8;
  func_0x0001075616a8();
  iVar4 = (int)plVar7;
  uStack_48 = extraout_x8;
  func_0x000107766098();
  if (iVar4 == 0) {
    iVar4 = (int)param_6 + 8;
    (**(code **)(*param_6 + 0x18))();
    if (iVar4 == 0) {
      FUN_107324e4c(param_6,param_7,param_8);
      if (((ulong)param_6 >> 0x20 & 1) == 0) goto LAB_10755dbcc;
      lStack_98 = CONCAT44(lStack_98._4_4_,(int)param_6);
      uStack_88 = 0;
      uStack_58 = 1;
    }
    else {
      func_0x00010739b01c(&lStack_f0,param_6,param_7,param_8);
      if ((bStack_e0 & 1) == 0) {
LAB_10755dbcc:
        func_0x000107561c94();
        goto LAB_10755dc30;
      }
      uStack_90 = uStack_e8;
      lStack_98 = lStack_f0;
      func_0x00010756206c();
      param_1 = (uint)lStack_f0;
      uStack_58 = extraout_w8_00;
    }
    param_7 = &lStack_a0;
    FUN_10756126c();
    param_6 = &lStack_98;
    FUN_107561304();
  }
  else {
    func_0x0001077758d8(auStack_100);
    func_0x000107561abc(&lStack_a0,auStack_100);
    func_0x0001072c9884(auStack_100);
    func_0x0001077713b4(auStack_118,&lStack_a0,param_6,param_8);
    if ((bStack_108 & 1) == 0) {
      func_0x000107771558(&lStack_f0,&lStack_a0);
      param_7 = &lStack_f0;
      func_0x000107561ab4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_f0);
      func_0x000107561c94();
    }
    else {
      auStack_170[0] = 0;
      uStack_15c = 0;
      FUN_107561448(auStack_158,auStack_118,auStack_170);
      FUN_1075614d0(&lStack_f0,auStack_158);
      param_7 = &lStack_f0;
      FUN_10756126c();
      FUN_107561304(&uStack_e8);
      func_0x000107266a84(auStack_158);
      param_8 = puVar8;
    }
    func_0x0001072c95d0(auStack_118);
    param_6 = &lStack_a0;
    func_0x0001072ca718();
  }
LAB_10755dc30:
  func_0x000107561694(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_118);
  func_0x0001072ca718(&lStack_a0);
  func_0x000107561aac();
  plVar9 = param_7;
  puStack_1c0 = (undefined8 *)&stack0x000000a8;
  func_0x0001075616a8();
  plVar7 = plVar9 + 1;
  (**(code **)(*plVar9 + 0x30))();
  if ((int)plVar7 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*param_7 + 0x38))(&lStack_210,plVar9 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_210 + 0x68))(auStack_250,auStack_208);
    in_ZR = cStack_218 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar5 = (uint)auStack_250;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar5 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar5 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_1d0 == 1) {
        iVar4 = (int)alStack_1e0 + 8;
        (**(code **)(alStack_1e0[0] + 0x30))();
        if (iVar4 == 0) goto LAB_10755deb4;
        if ((bStack_1d0 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_1e8 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar8 = auStack_1f8;
        FUN_107324e4c(puVar8,param_8,puVar10);
        func_0x000107561e3c();
        uVar13 = (uint)puVar8 & 0xffffff00;
        uVar12 = (uint)puVar8 & 0xff;
        uVar5 = (uint)((ulong)puVar8 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar5 = 0;
        uVar12 = 0;
        uVar13 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar5 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar13 | uVar12;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar11 = 1;
LAB_10755dee0:
      *(char *)param_6 = (char)uVar1;
      *(uint *)((long)param_6 + 4) = param_1;
      *(uint *)(param_6 + 1) = param_2;
      *(undefined4 *)((long)param_6 + 0xc) = param_3;
      *(undefined4 *)(param_6 + 2) = param_4;
      *(undefined4 *)((long)param_6 + 0x14) = uVar11;
      *(undefined4 *)(param_6 + 9) = 1;
      *(undefined1 *)(param_6 + 10) = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar5 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar11 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_1d0 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_264[0] = 0;
      uStack_254 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_1e0[1] = 0x3f8000003f800000;
      alStack_1e0[0] = 0;
      FUN_10755df6c(auStack_264,alStack_1e0);
      uVar11 = 2;
      goto LAB_10755dee0;
    }
    iVar4 = (int)alStack_1e0 + 8;
    (**(code **)(alStack_1e0[0] + 0x30))();
    if (iVar4 == 0) goto LAB_10755de84;
    if ((bStack_1d0 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_1e8 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_264,auStack_1f8,param_8,puVar10);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar6)();
}



/* Entry: 10755d8d4; end: 10755dabb;  */

void FUN_10755d8d4(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,long *param_6,long *param_7,undefined1 *param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  int extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar9;
  undefined8 extraout_x8;
  uint uVar10;
  ulong unaff_x21;
  uint uVar11;
  undefined1 *unaff_x30;
  byte in_stack_00000040;
  byte in_stack_00000068;
  byte in_stack_00000088;
  undefined1 auStack_264 [16];
  undefined1 uStack_254;
  undefined1 auStack_250 [56];
  char cStack_218;
  long lStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  char cStack_1e8;
  long alStack_1e0 [2];
  byte bStack_1d0;
  undefined1 auStack_170 [20];
  undefined1 uStack_15c;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [16];
  byte bStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  func_0x000107561d20();
  func_0x000107561514();
  if ((int)unaff_x30 == 0) {
    func_0x000107561b78();
    func_0x000107561ad8();
    if ((int)unaff_x30 == 0) {
      func_0x000107561b34();
      func_0x000107561a70();
      if ((int)unaff_x30 != 0) {
        func_0x0001075616cc();
        FUN_107541c6c();
        func_0x0001075618c4();
        if ((bool)in_ZR) {
          if (extraout_w8 != 0) {
            func_0x000107561b6c();
            FUN_10748b568();
          }
        }
        else if (extraout_w8 == 0) {
          param_6 = (long *)&stack0x00000090;
          func_0x000107561234(&stack0x00000058);
        }
        else {
          func_0x000107266a84();
          in_stack_00000088 = 0;
        }
        unaff_x30 = &stack0x00000090;
        func_0x00010756124c();
        goto LAB_10755d9e4;
      }
      func_0x000107561864();
      FUN_107541da4();
      if (((ulong)unaff_x30 >> 0x20 & 1) == 0) goto LAB_10755d9fc;
      func_0x000107561f08();
LAB_10755d980:
      func_0x0001075618b4();
      func_0x00010756121c();
      FUN_10748a94c(&stack0x00000090);
    }
    else {
      func_0x000107775ea8(&stack0x00000048);
      func_0x0001075616bc();
      func_0x000107561a88();
      func_0x000107561604();
      if ((in_stack_00000040 & 1) == 0) {
        func_0x000107561848();
        func_0x00010756180c();
        func_0x000107561ae0();
        func_0x000107561acc();
      }
      else {
        func_0x0001075618d4();
        FUN_1075487cc();
        func_0x0001075616e0();
        if ((bool)in_ZR) {
          FUN_10748b568();
        }
        else {
          func_0x000107561234();
        }
        func_0x000107561ae8();
      }
      func_0x000107561a80();
      func_0x000107561a90();
      if ((in_stack_00000040 & 1) != 0) {
LAB_10755d9e4:
        if ((in_stack_00000088 & 1) != 0) {
          if (((unaff_x21 & 1) == 0) && ((in_stack_00000068 >> 1 & 1) == 0)) {
            func_0x000107561684();
          }
          else {
            func_0x000107561afc();
            if (!(bool)in_ZR) {
              func_0x000107561b84();
              FUN_10748b3c0();
              func_0x000107561a98();
              FUN_10748b3c0();
              func_0x000107561730();
              func_0x000107561b28();
              goto LAB_10755da00;
            }
            func_0x0001075618a4();
            if ((bool)in_ZR) {
              func_0x00010756183c();
              func_0x000107561b90();
              func_0x000107775ee4();
              func_0x000107561a78();
              if (((ulong)unaff_x30 >> 0x20 & 1) != 0) {
                func_0x000107561f20();
                goto LAB_10755d980;
              }
            }
            else {
              func_0x000107561674();
            }
          }
        }
LAB_10755d9fc:
        func_0x000107561acc();
      }
    }
LAB_10755da00:
    func_0x00010756124c(&stack0x00000058);
  }
  else {
    func_0x0001075615d0();
    func_0x00010756121c();
    FUN_10748a94c(&stack0x00000090);
  }
  func_0x0001075615ec();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107561818();
  func_0x00010756124c(&stack0x00000058);
  func_0x000107561aac();
  puVar6 = auStack_170;
  plVar5 = param_6;
  puVar8 = param_8;
  func_0x0001075616a8();
  iVar3 = (int)plVar5;
  uStack_48 = extraout_x8;
  func_0x000107766098();
  if (iVar3 == 0) {
    iVar3 = (int)param_6 + 8;
    (**(code **)(*param_6 + 0x18))();
    if (iVar3 == 0) {
      FUN_107324e4c(param_6,param_7,param_8);
      if (((ulong)param_6 >> 0x20 & 1) == 0) goto LAB_10755dbcc;
      lStack_98 = CONCAT44(lStack_98._4_4_,(int)param_6);
      uStack_88 = 0;
      uStack_58 = 1;
    }
    else {
      func_0x00010739b01c(&lStack_f0,param_6,param_7,param_8);
      if ((bStack_e0 & 1) == 0) {
LAB_10755dbcc:
        func_0x000107561c94();
        goto LAB_10755dc30;
      }
      uStack_90 = uStack_e8;
      lStack_98 = lStack_f0;
      func_0x00010756206c();
      param_1 = (uint)lStack_f0;
      uStack_58 = extraout_w8_00;
    }
    param_7 = &lStack_a0;
    FUN_10756126c();
    param_6 = &lStack_98;
    FUN_107561304();
  }
  else {
    func_0x0001077758d8(auStack_100);
    func_0x000107561abc(&lStack_a0,auStack_100);
    func_0x0001072c9884(auStack_100);
    func_0x0001077713b4(auStack_118,&lStack_a0,param_6,param_8);
    if ((bStack_108 & 1) == 0) {
      func_0x000107771558(&lStack_f0,&lStack_a0);
      param_7 = &lStack_f0;
      func_0x000107561ab4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_f0);
      func_0x000107561c94();
    }
    else {
      auStack_170[0] = 0;
      uStack_15c = 0;
      FUN_107561448(auStack_158,auStack_118,auStack_170);
      FUN_1075614d0(&lStack_f0,auStack_158);
      param_7 = &lStack_f0;
      FUN_10756126c();
      FUN_107561304(&uStack_e8);
      func_0x000107266a84(auStack_158);
      param_8 = puVar6;
    }
    func_0x0001072c95d0(auStack_118);
    param_6 = &lStack_a0;
    func_0x0001072ca718();
  }
LAB_10755dc30:
  func_0x000107561694(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_118);
  func_0x0001072ca718(&lStack_a0);
  func_0x000107561aac();
  plVar7 = param_7;
  func_0x0001075616a8();
  plVar5 = plVar7 + 1;
  (**(code **)(*plVar7 + 0x30))();
  if ((int)plVar5 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*param_7 + 0x38))(&lStack_210,plVar7 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_210 + 0x68))(auStack_250,auStack_208);
    in_ZR = cStack_218 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar4 = (uint)auStack_250;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar4 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar4 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_1d0 == 1) {
        iVar3 = (int)alStack_1e0 + 8;
        (**(code **)(alStack_1e0[0] + 0x30))();
        if (iVar3 == 0) goto LAB_10755deb4;
        if ((bStack_1d0 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_1e8 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar6 = auStack_1f8;
        FUN_107324e4c(puVar6,param_8,puVar8);
        func_0x000107561e3c();
        uVar11 = (uint)puVar6 & 0xffffff00;
        uVar10 = (uint)puVar6 & 0xff;
        uVar4 = (uint)((ulong)puVar6 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar4 = 0;
        uVar10 = 0;
        uVar11 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar4 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar11 | uVar10;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar9 = 1;
LAB_10755dee0:
      *(char *)param_6 = (char)uVar1;
      *(uint *)((long)param_6 + 4) = param_1;
      *(uint *)(param_6 + 1) = param_2;
      *(undefined4 *)((long)param_6 + 0xc) = param_3;
      *(undefined4 *)(param_6 + 2) = param_4;
      *(undefined4 *)((long)param_6 + 0x14) = uVar9;
      *(undefined4 *)(param_6 + 9) = 1;
      *(undefined1 *)(param_6 + 10) = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar4 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar9 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_1d0 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_264[0] = 0;
      uStack_254 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_1e0[1] = 0x3f8000003f800000;
      alStack_1e0[0] = 0;
      FUN_10755df6c(auStack_264,alStack_1e0);
      uVar9 = 2;
      goto LAB_10755dee0;
    }
    iVar3 = (int)alStack_1e0 + 8;
    (**(code **)(alStack_1e0[0] + 0x30))();
    if (iVar3 == 0) goto LAB_10755de84;
    if ((bStack_1d0 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_1e8 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_264,auStack_1f8,param_8,puVar8);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar2)();
}



/* Entry: 10755dabc; end: 10755dc93;  */

void FUN_10755dabc(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,long *param_6,long *param_7,undefined1 *param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined4 extraout_w8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_264 [16];
  undefined1 uStack_254;
  undefined1 auStack_250 [56];
  char cStack_218;
  long lStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  char cStack_1e8;
  long alStack_1e0 [2];
  byte bStack_1d0;
  undefined1 auStack_170 [20];
  undefined1 uStack_15c;
  undefined1 auStack_158 [64];
  undefined1 auStack_118 [16];
  byte bStack_108;
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  puVar6 = auStack_170;
  plVar5 = param_6;
  puVar8 = param_8;
  func_0x0001075616a8();
  iVar3 = (int)plVar5;
  uStack_48 = extraout_x8;
  func_0x000107766098();
  if (iVar3 == 0) {
    iVar3 = (int)param_6 + 8;
    (**(code **)(*param_6 + 0x18))();
    if (iVar3 == 0) {
      FUN_107324e4c(param_6,param_7,param_8);
      if (((ulong)param_6 >> 0x20 & 1) == 0) goto LAB_10755dbcc;
      lStack_98 = CONCAT44(lStack_98._4_4_,(int)param_6);
      uStack_88 = 0;
      uStack_58 = 1;
    }
    else {
      func_0x00010739b01c(&lStack_f0,param_6,param_7,param_8);
      if ((bStack_e0 & 1) == 0) {
LAB_10755dbcc:
        func_0x000107561c94();
        goto LAB_10755dc30;
      }
      uStack_90 = uStack_e8;
      lStack_98 = lStack_f0;
      func_0x00010756206c();
      param_1 = (uint)lStack_f0;
      uStack_58 = extraout_w8;
    }
    param_7 = &lStack_a0;
    FUN_10756126c();
    param_6 = &lStack_98;
    FUN_107561304();
  }
  else {
    func_0x0001077758d8(auStack_100);
    func_0x000107561abc(&lStack_a0,auStack_100);
    func_0x0001072c9884(auStack_100);
    func_0x0001077713b4(auStack_118,&lStack_a0,param_6,param_8);
    if ((bStack_108 & 1) == 0) {
      func_0x000107771558(&lStack_f0,&lStack_a0);
      param_7 = &lStack_f0;
      func_0x000107561ab4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_f0);
      func_0x000107561c94();
    }
    else {
      auStack_170[0] = 0;
      uStack_15c = 0;
      FUN_107561448(auStack_158,auStack_118,auStack_170);
      FUN_1075614d0(&lStack_f0,auStack_158);
      param_7 = &lStack_f0;
      FUN_10756126c();
      FUN_107561304(&uStack_e8);
      func_0x000107266a84(auStack_158);
      param_8 = puVar6;
    }
    func_0x0001072c95d0(auStack_118);
    param_6 = &lStack_a0;
    func_0x0001072ca718();
  }
LAB_10755dc30:
  func_0x000107561694(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(auStack_118);
  func_0x0001072ca718(&lStack_a0);
  func_0x000107561aac();
  plVar7 = param_7;
  func_0x0001075616a8();
  plVar5 = plVar7 + 1;
  (**(code **)(*plVar7 + 0x30))();
  if ((int)plVar5 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*param_7 + 0x38))(&lStack_210,plVar7 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_210 + 0x68))(auStack_250,auStack_208);
    in_ZR = cStack_218 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar4 = (uint)auStack_250;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar4 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar4 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_1d0 == 1) {
        iVar3 = (int)alStack_1e0 + 8;
        (**(code **)(alStack_1e0[0] + 0x30))();
        if (iVar3 == 0) goto LAB_10755deb4;
        if ((bStack_1d0 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_1e8 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar6 = auStack_1f8;
        FUN_107324e4c(puVar6,param_8,puVar8);
        func_0x000107561e3c();
        uVar11 = (uint)puVar6 & 0xffffff00;
        uVar10 = (uint)puVar6 & 0xff;
        uVar4 = (uint)((ulong)puVar6 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar4 = 0;
        uVar10 = 0;
        uVar11 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar4 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar11 | uVar10;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar9 = 1;
LAB_10755dee0:
      *(char *)param_6 = (char)uVar1;
      *(uint *)((long)param_6 + 4) = param_1;
      *(uint *)(param_6 + 1) = param_2;
      *(undefined4 *)((long)param_6 + 0xc) = param_3;
      *(undefined4 *)(param_6 + 2) = param_4;
      *(undefined4 *)((long)param_6 + 0x14) = uVar9;
      *(undefined4 *)(param_6 + 9) = 1;
      *(undefined1 *)(param_6 + 10) = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar4 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar9 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_1d0 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_264[0] = 0;
      uStack_254 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_1e0[1] = 0x3f8000003f800000;
      alStack_1e0[0] = 0;
      FUN_10755df6c(auStack_264,alStack_1e0);
      uVar9 = 2;
      goto LAB_10755dee0;
    }
    iVar3 = (int)alStack_1e0 + 8;
    (**(code **)(alStack_1e0[0] + 0x30))();
    if (iVar3 == 0) goto LAB_10755de84;
    if ((bStack_1d0 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_1e8 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_264,auStack_1f8,param_8,puVar8);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar2)();
}



/* Entry: 10755dc94; end: 10755df6b;  */

void FUN_10755dc94(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined1 *unaff_x19;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_f4 [16];
  undefined1 uStack_e4;
  undefined1 auStack_e0 [56];
  char cStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  char cStack_78;
  long alStack_70 [2];
  byte bStack_60;
  
  plVar7 = param_6;
  func_0x0001075616a8();
  plVar5 = plVar7 + 1;
  (**(code **)(*plVar7 + 0x30))();
  if ((int)plVar5 == 0) {
LAB_10755dd44:
    func_0x000107561c94();
LAB_10755dd48:
    func_0x0001075615ec();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    (**(code **)(*param_6 + 0x38))(&lStack_a0,plVar7 + 1,&UNK_10f4175eb);
    func_0x00010756200c();
    if (!(bool)in_ZR) {
LAB_10755dd40:
      func_0x000107561fe0();
      goto LAB_10755dd44;
    }
    (**(code **)(lStack_a0 + 0x68))(auStack_e0,auStack_98);
    in_ZR = cStack_a8 == '\x01';
    if (!(bool)in_ZR) {
LAB_10755dd3c:
      func_0x000107561fbc();
      goto LAB_10755dd40;
    }
    uVar3 = (uint)auStack_e0;
    func_0x000107264c5c();
    func_0x0001077f2e74();
    uVar1 = uVar3 & 0xffff;
    in_ZR = uVar1 == 0x100;
    if (uVar1 < 0x100) goto LAB_10755dd3c;
    if ((uVar3 & 0xff) == 3) {
      func_0x000107561e58();
      if (bStack_60 == 1) {
        iVar4 = (int)alStack_70 + 8;
        (**(code **)(alStack_70[0] + 0x30))();
        if (iVar4 == 0) goto LAB_10755deb4;
        if ((bStack_60 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_10755df18;
        }
        func_0x000107561fc4();
        if (cStack_78 != '\x01') {
          func_0x000107561e3c();
          goto LAB_10755deb4;
        }
        puVar6 = auStack_88;
        FUN_107324e4c(puVar6,param_7,param_8);
        func_0x000107561e3c();
        uVar10 = (uint)puVar6 & 0xffffff00;
        uVar9 = (uint)puVar6 & 0xff;
        uVar3 = (uint)((ulong)puVar6 >> 0x20) & 1;
      }
      else {
LAB_10755deb4:
        uVar3 = 0;
        uVar9 = 0;
        uVar10 = 0;
      }
      func_0x000107561fe8();
      in_ZR = uVar3 == 0;
      param_2 = 0x3fa66666;
      param_1 = uVar10 | uVar9;
      if ((bool)in_ZR) {
        param_1 = param_2;
      }
      uVar8 = 1;
LAB_10755dee0:
      *unaff_x19 = (char)uVar1;
      *(uint *)(unaff_x19 + 4) = param_1;
      *(uint *)(unaff_x19 + 8) = param_2;
      *(undefined4 *)(unaff_x19 + 0xc) = param_3;
      *(undefined4 *)(unaff_x19 + 0x10) = param_4;
      *(undefined4 *)(unaff_x19 + 0x14) = uVar8;
      *(undefined4 *)(unaff_x19 + 0x48) = 1;
      unaff_x19[0x50] = 1;
      func_0x000107561fbc();
      func_0x000107561fe0();
      goto LAB_10755dd48;
    }
    in_ZR = (uVar3 & 0xff) == 4;
    if (!(bool)in_ZR) {
      uVar8 = 0;
      goto LAB_10755dee0;
    }
    func_0x000107561e58();
    in_ZR = bStack_60 == 1;
    if (!(bool)in_ZR) {
LAB_10755de84:
      auStack_f4[0] = 0;
      uStack_e4 = 0;
LAB_10755de8c:
      func_0x000107561fe8();
      param_1 = 0;
      alStack_70[1] = 0x3f8000003f800000;
      alStack_70[0] = 0;
      FUN_10755df6c(auStack_f4,alStack_70);
      uVar8 = 2;
      goto LAB_10755dee0;
    }
    iVar4 = (int)alStack_70 + 8;
    (**(code **)(alStack_70[0] + 0x30))();
    if (iVar4 == 0) goto LAB_10755de84;
    if ((bStack_60 & 1) != 0) {
      func_0x000107561fc4();
      in_ZR = cStack_78 == '\x01';
      if (!(bool)in_ZR) {
        func_0x000107561e3c();
        goto LAB_10755de84;
      }
      func_0x00010739b01c(auStack_f4,auStack_88,param_7,param_8);
      func_0x000107561e3c();
      goto LAB_10755de8c;
    }
  }
  func_0x000104bdc2c8();
LAB_10755df18:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10755df1c);
  (*pcVar2)();
}



/* Entry: 10755df6c; end: 10755df83;  */

undefined4 FUN_10755df6c(undefined4 *param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 4) == '\0') {
    param_1 = param_2;
  }
  return *param_1;
}



/* Entry: 10755df84; end: 10755e053;  */

void FUN_10755df84(void)

{
  func_0x000107310b20();
  func_0x000107561bd4();
  return;
}



/* Entry: 10755e054; end: 10755e06b;  */

void FUN_10755e054(void)

{
  FUN_10755e06c();
  return;
}



/* Entry: 10755e06c; end: 10755e143;  */

void FUN_10755e06c(long param_1)

{
  FUN_107339130();
  *(undefined4 *)(param_1 + 0x38) = 2;
  return;
}



/* Entry: 10755e144; end: 10755e177;  */

void FUN_10755e144(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107561800();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x45);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x45) = uVar1;
  return;
}



/* Entry: 10755e178; end: 10755e24f;  */

void FUN_10755e178(void)

{
  FUN_1074e1554();
  func_0x000107561f14();
  return;
}



/* Entry: 10755e250; end: 10755e267;  */

void FUN_10755e250(void)

{
  FUN_10755e268();
  return;
}



/* Entry: 10755e268; end: 10755e2d3;  */

void FUN_10755e268(long param_1)

{
  FUN_107432e00();
  *(undefined4 *)(param_1 + 0x40) = 2;
  return;
}



/* Entry: 10755e2d4; end: 10755e2eb;  */

void FUN_10755e2d4(void)

{
  FUN_10755e2ec();
  return;
}



/* Entry: 10755e2ec; end: 10755e307;  */

void FUN_10755e2ec(long param_1)

{
  FUN_107339d9c();
  *(undefined4 *)(param_1 + 0x48) = 2;
  return;
}



/* Entry: 10755e308; end: 10755e32f;  */

void FUN_10755e308(void)

{
  long unaff_x19;
  
  func_0x000107561b08();
  FUN_1073244ec();
  *(undefined1 *)(unaff_x19 + 0x78) = 1;
  return;
}



/* Entry: 10755e330; end: 10755e3d3;  */

void FUN_10755e330(long param_1)

{
  FUN_107324574();
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



/* Entry: 10755e3d4; end: 10755e3f7;  */

void FUN_10755e3d4(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542b8c();
  return;
}



/* Entry: 10755e3f8; end: 10755e447;  */

void FUN_10755e3f8(void)

{
  FUN_10733d0b4();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755e448; end: 10755e46b;  */

void FUN_10755e448(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542d78();
  return;
}



/* Entry: 10755e46c; end: 10755e4bb;  */

void FUN_10755e46c(void)

{
  FUN_10733dad8();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755e4bc; end: 10755e4df;  */

void FUN_10755e4bc(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542e48();
  return;
}



/* Entry: 10755e4e0; end: 10755e52f;  */

void FUN_10755e4e0(void)

{
  FUN_10733c378();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755e530; end: 10755e553;  */

void FUN_10755e530(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542f18();
  return;
}



/* Entry: 10755e554; end: 10755e5a7;  */

void FUN_10755e554(void)

{
  FUN_107339250();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755e5a8; end: 10755e5cb;  */

void FUN_10755e5a8(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542f90();
  return;
}



/* Entry: 10755e5cc; end: 10755e607;  */

void FUN_10755e5cc(long param_1)

{
  FUN_107386d20();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10755e608; end: 10755e653;  */

void FUN_10755e608(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755e654();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bcc68)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755e654; end: 10755e68b;  */

void FUN_10755e654(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcc50)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755e68c; end: 10755e6a7;  */

void FUN_10755e68c(void)

{
  return;
}



/* Entry: 10755e6a8; end: 10755e6c3;  */

void FUN_10755e6a8(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755e6c4; end: 10755e6fb;  */

void FUN_10755e6c4(void)

{
  FUN_107542b38();
  func_0x000107561b60();
  return;
}



/* Entry: 10755e6fc; end: 10755e747;  */

void FUN_10755e6fc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755e748();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bcc98)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755e748; end: 10755e77f;  */

void FUN_10755e748(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcc80)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755e780; end: 10755e79b;  */

void FUN_10755e780(void)

{
  return;
}



/* Entry: 10755e79c; end: 10755e7b7;  */

void FUN_10755e79c(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755e7b8; end: 10755e83f;  */

void FUN_10755e7b8(void)

{
  func_0x000107542b54();
  func_0x000107561b60();
  return;
}



/* Entry: 10755e840; end: 10755e88b;  */

void FUN_10755e840(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755e88c();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bccc8)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755e88c; end: 10755e8c3;  */

void FUN_10755e88c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bccb0)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755e8c4; end: 10755e8df;  */

void FUN_10755e8c4(void)

{
  return;
}



/* Entry: 10755e8e0; end: 10755e8fb;  */

void FUN_10755e8e0(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755e8fc; end: 10755e933;  */

void FUN_10755e8fc(void)

{
  func_0x000107542b70();
  func_0x000107561b60();
  return;
}



/* Entry: 10755e934; end: 10755e97f;  */

void FUN_10755e934(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755e980();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bccf8)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755e980; end: 10755e9b7;  */

void FUN_10755e980(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcce0)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755e9b8; end: 10755e9d3;  */

void FUN_10755e9b8(void)

{
  return;
}



/* Entry: 10755e9d4; end: 10755eaab;  */

void FUN_10755e9d4(void)

{
  FUN_1073e477c();
  func_0x000107561b60();
  return;
}



/* Entry: 10755eaac; end: 10755eaf7;  */

void FUN_10755eaac(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  func_0x0001072ca7a0();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_FUN_1109bcd10)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755eaf8; end: 10755eb07;  */

void FUN_10755eaf8(void)

{
  return;
}



/* Entry: 10755eb08; end: 10755eb23;  */

void FUN_10755eb08(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755eb24; end: 10755eb5b;  */

void FUN_10755eb24(void)

{
  FUN_107402ff8();
  func_0x000107561b60();
  return;
}



/* Entry: 10755eb5c; end: 10755eba7;  */

void FUN_10755eb5c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755eba8();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bcd40)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755eba8; end: 10755ebdf;  */

void FUN_10755eba8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcd28)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755ebe0; end: 10755ebfb;  */

void FUN_10755ebe0(void)

{
  return;
}



/* Entry: 10755ebfc; end: 10755ec17;  */

void FUN_10755ebfc(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755ec18; end: 10755ec4f;  */

void FUN_10755ec18(void)

{
  func_0x0001075435d4();
  func_0x000107561b60();
  return;
}



/* Entry: 10755ec50; end: 10755ec9b;  */

void FUN_10755ec50(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755ec9c();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bcd70)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755ec9c; end: 10755ecd3;  */

void FUN_10755ec9c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcd58)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755ecd4; end: 10755ecef;  */

void FUN_10755ecd4(void)

{
  return;
}



/* Entry: 10755ecf0; end: 10755ed0b;  */

void FUN_10755ecf0(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755ed0c; end: 10755ed43;  */

void FUN_10755ed0c(void)

{
  func_0x0001075435f0();
  func_0x000107561b60();
  return;
}



/* Entry: 10755ed44; end: 10755ed9b;  */

void FUN_10755ed44(long param_1)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001075617b4();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_10755ed9c();
  uVar1 = *(uint *)(unaff_x20 + 0x40);
  if (uVar1 != 0xffffffff) {
    func_0x000107561874((&PTR_DAT_1109bcda0)[uVar1]);
    *(uint *)(unaff_x19 + 0x40) = uVar1;
  }
  func_0x000107561c70();
  return;
}



/* Entry: 10755ed9c; end: 10755edd7;  */

void FUN_10755ed9c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x000107561ee0();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcd88)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10755edd8; end: 10755edfb;  */

void FUN_10755edd8(void)

{
  return;
}



/* Entry: 10755edfc; end: 10755ee1f;  */

void FUN_10755edfc(void)

{
  func_0x000107561800();
  func_0x000107561db4();
  FUN_107542fdc();
  return;
}



/* Entry: 10755ee20; end: 10755ee57;  */

void FUN_10755ee20(void)

{
  FUN_107543108();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755ee58; end: 10755eea7;  */

void FUN_10755ee58(void)

{
  func_0x000107561b08();
  FUN_10733ab70();
  func_0x000107561c70();
  return;
}



/* Entry: 10755eea8; end: 10755eedf;  */

void FUN_10755eea8(void)

{
  FUN_10733ac30();
  func_0x000107561bd4();
  return;
}



/* Entry: 10755eee0; end: 10755ef07;  */

long FUN_10755eee0(long param_1)

{
  FUN_10755ef08(param_1 + 8);
  return param_1;
}



/* Entry: 10755ef08; end: 10755ef23;  */

void FUN_10755ef08(long param_1)

{
  FUN_10733ac30();
  *(undefined4 *)(param_1 + 0x38) = 2;
  return;
}



/* Entry: 10755ef24; end: 10755ef73;  */

void FUN_10755ef24(void)

{
  func_0x000107561b08();
  FUN_10733a728();
  func_0x000107561c70();
  return;
}



/* Entry: 10755ef74; end: 10755efab;  */

void FUN_10755ef74(void)

{
  FUN_10733a7f8();
  func_0x000107561bd4();
  return;
}



/* Entry: 10755efac; end: 10755effb;  */

void FUN_10755efac(void)

{
  func_0x000107561b08();
  FUN_10733aa98();
  func_0x000107561ea4();
  return;
}



/* Entry: 10755effc; end: 10755f033;  */

void FUN_10755effc(void)

{
  FUN_10733ab54();
  func_0x000107561cb8();
  return;
}



/* Entry: 10755f034; end: 10755f07b;  */

void FUN_10755f034(void)

{
  func_0x000107561b08();
  FUN_10733a818();
  func_0x000107562060();
  return;
}



/* Entry: 10755f07c; end: 10755f0b3;  */

void FUN_10755f07c(void)

{
  FUN_10733aa1c();
  func_0x000107561d14();
  return;
}



/* Entry: 10755f0b4; end: 10755f0ff;  */

void FUN_10755f0b4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755f100();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bcdd0)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755f100; end: 10755f137;  */

void FUN_10755f100(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bcdb8)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755f138; end: 10755f153;  */

void FUN_10755f138(void)

{
  return;
}



/* Entry: 10755f154; end: 10755f16f;  */

void FUN_10755f154(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755f170; end: 10755f1a7;  */

void FUN_10755f170(void)

{
  func_0x000107543174();
  func_0x000107561b60();
  return;
}



/* Entry: 10755f1a8; end: 10755f1f3;  */

void FUN_10755f1a8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  func_0x0001072ca7f0();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_FUN_1109bcde8)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755f1f4; end: 10755f203;  */

void FUN_10755f1f4(void)

{
  return;
}



/* Entry: 10755f204; end: 10755f21f;  */

void FUN_10755f204(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755f220; end: 10755f257;  */

void FUN_10755f220(void)

{
  func_0x000107543190();
  func_0x000107561b60();
  return;
}



/* Entry: 10755f258; end: 10755f2a3;  */

void FUN_10755f258(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755f2a4();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bce18)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755f2a4; end: 10755f2db;  */

void FUN_10755f2a4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bce00)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755f2dc; end: 10755f2f7;  */

void FUN_10755f2dc(void)

{
  return;
}



/* Entry: 10755f2f8; end: 10755f313;  */

void FUN_10755f2f8(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755f314; end: 10755f34b;  */

void FUN_10755f314(void)

{
  func_0x0001075431ac();
  func_0x000107561b60();
  return;
}



/* Entry: 10755f34c; end: 10755f397;  */

void FUN_10755f34c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755f398();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bce48)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755f398; end: 10755f3cf;  */

void FUN_10755f398(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bce30)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755f3d0; end: 10755f3eb;  */

void FUN_10755f3d0(void)

{
  return;
}



/* Entry: 10755f3ec; end: 10755f407;  */

void FUN_10755f3ec(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755f408; end: 10755f43f;  */

void FUN_10755f408(void)

{
  func_0x0001075431c8();
  func_0x000107561b60();
  return;
}



/* Entry: 10755f440; end: 10755f48b;  */

void FUN_10755f440(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107561704();
  FUN_10755f48c();
  func_0x000107561bbc();
  if (!(bool)in_ZR) {
    func_0x000107561874((&PTR_DAT_1109bce78)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  func_0x0001075619b0();
  return;
}



/* Entry: 10755f48c; end: 10755f4c3;  */

void FUN_10755f48c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107561918();
  if (!(bool)in_ZR) {
    func_0x000107561898((&PTR_FUN_1109bce60)[extraout_x8]);
  }
  func_0x000107561be0();
  return;
}



/* Entry: 10755f4c4; end: 10755f4df;  */

void FUN_10755f4c4(void)

{
  return;
}



/* Entry: 10755f4e0; end: 10755f4fb;  */

void FUN_10755f4e0(void)

{
  func_0x000107561800();
  func_0x000107561908();
  return;
}



/* Entry: 10755f4fc; end: 10755f54b;  */

void FUN_10755f4fc(void)

{
  func_0x0001075431e4();
  func_0x000107561b60();
  return;
}


