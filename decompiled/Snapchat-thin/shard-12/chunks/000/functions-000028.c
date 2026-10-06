/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c6c614; end: 108c6c68b;  */

/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c614(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  undefined8 uVar9;
  undefined1 auStack_4f0 [96];
  undefined8 *puStack_490;
  undefined1 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined1 auStack_440 [72];
  undefined8 uStack_3f8;
  undefined8 **ppuStack_3c0;
  code *pcStack_3b8;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined1 auStack_340 [96];
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined1 auStack_220 [96];
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_190 [96];
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [96];
  undefined1 *puStack_80;
  code *pcStack_78;
  
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abbf10;
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000108c6cc64();
    func_0x000108c6cc94();
    func_0x000108c6ccf4();
    puVar2 = (undefined8 *)&UNK_110abbf10;
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    func_0x000108c6cd0c();
  }
  func_0x000108c6cb88();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c6cbf8();
  func_0x000108c6cd0c();
  func_0x000108c6ccc0();
  puVar1 = auStack_100;
  pcStack_78 = FUN_108c6c68c;
  puVar5 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000108c6cb64();
  puVar3 = (undefined8 *)&UNK_110abbf60;
  (*extraout_x8_00)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_190;
    pcStack_108 = FUN_108c6c720;
    puVar6 = puVar5;
    puStack_130 = puVar2;
    puStack_128 = param_3;
    ppuStack_110 = &puStack_80;
    func_0x000108c6cb64();
    puVar4 = (undefined8 *)&UNK_110abbfb0;
    (*extraout_x8_01)();
    param_3 = puVar5;
    puVar2 = puVar3;
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_220;
      pcStack_198 = FUN_108c6c7b4;
      puVar7 = puVar6;
      puStack_1c0 = puVar3;
      puStack_1b8 = puVar5;
      ppuStack_1a0 = &ppuStack_110;
      func_0x000108c6cb64();
      puVar3 = (undefined8 *)&UNK_110abc000;
      (*extraout_x8_02)();
      param_3 = puVar6;
      puVar2 = puVar4;
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_2b0;
        pcStack_228 = FUN_108c6c848;
        puVar8 = puVar7;
        puStack_250 = puVar4;
        puStack_248 = puVar6;
        ppuStack_230 = &ppuStack_1a0;
        func_0x000108c6cb64();
        puVar5 = (undefined8 *)&UNK_110abc050;
        (*extraout_x8_03)();
        param_3 = puVar7;
        puVar2 = puVar3;
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_340;
          pcStack_2b8 = FUN_108c6c8dc;
          puVar4 = puVar8;
          puStack_2e0 = puVar3;
          puStack_2d8 = puVar7;
          ppuStack_2c0 = &ppuStack_230;
          func_0x000108c6cb64();
          (*extraout_x8_04)();
          param_3 = puVar8;
          puVar2 = puVar5;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            pcStack_348 = FUN_108c6c970;
            puStack_370 = puVar5;
            puStack_368 = puVar8;
            ppuStack_350 = &ppuStack_2c0;
            func_0x000108c6cb64();
            (*extraout_x8_05)();
            if (param_1 != 0) {
              func_0x000108c6cc64();
              func_0x000108c6cc94();
              func_0x000108c6ccf4();
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              func_0x000108c6cd0c();
            }
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd0c();
            func_0x000108c6ccc0();
            pcStack_3b8 = FUN_108c6c9e8;
            param_3 = puVar4;
            ppuStack_3c0 = &ppuStack_350;
            func_0x000108c6cba0();
            uStack_3f8 = extraout_x8_06;
            func_0x000108c6cc54();
            puVar2 = (undefined8 *)&UNK_110abc140;
            (*extraout_x8_07)();
            if (param_1 != 0) {
              func_0x000108c6cc04();
              func_0x000108c6ccd8();
              func_0x000108c6ccf4();
              puVar2 = (undefined8 *)&UNK_110abc140;
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              param_5 = 0x30;
              do {
                func_0x000108c6ccc8();
                func_0x000108c6cd00();
              } while (!(bool)in_ZR);
            }
            func_0x000108c6cbb4(uStack_3f8);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_4f0;
            uStack_480 = 0x30;
            pcStack_468 = FUN_108c6ca98;
            puStack_490 = puVar4;
            puStack_488 = auStack_440;
            uStack_478 = param_5;
            ppuStack_470 = &ppuStack_3c0;
            func_0x000108c6cb64();
            (*extraout_x8_08)();
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_4f0;
            }
          }
        }
      }
    }
  }
  uVar9 = *puVar2;
  *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  uVar9 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar9;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c68c; end: 108c6c71f;  */

/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c68c(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 uVar8;
  undefined1 auStack_480 [96];
  undefined8 *puStack_420;
  undefined1 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 **ppuStack_400;
  code *pcStack_3f8;
  undefined1 auStack_3d0 [72];
  undefined8 uStack_388;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2d0 [96];
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [96];
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar4 = param_3;
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abbf60;
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_120;
    pcStack_98 = FUN_108c6c720;
    puVar5 = puVar4;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    puVar3 = (undefined8 *)&UNK_110abbfb0;
    (*extraout_x8_00)();
    param_3 = puVar4;
    param_2 = puVar2;
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_1b0;
      pcStack_128 = FUN_108c6c7b4;
      puVar6 = puVar5;
      puStack_150 = puVar2;
      puStack_148 = puVar4;
      ppuStack_130 = &puStack_a0;
      func_0x000108c6cb64();
      puVar2 = (undefined8 *)&UNK_110abc000;
      (*extraout_x8_01)();
      param_3 = puVar5;
      param_2 = puVar3;
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_240;
        pcStack_1b8 = FUN_108c6c848;
        puVar7 = puVar6;
        puStack_1e0 = puVar3;
        puStack_1d8 = puVar5;
        ppuStack_1c0 = &ppuStack_130;
        func_0x000108c6cb64();
        puVar4 = (undefined8 *)&UNK_110abc050;
        (*extraout_x8_02)();
        param_3 = puVar6;
        param_2 = puVar2;
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_2d0;
          pcStack_248 = FUN_108c6c8dc;
          puVar3 = puVar7;
          puStack_270 = puVar2;
          puStack_268 = puVar6;
          ppuStack_250 = &ppuStack_1c0;
          func_0x000108c6cb64();
          (*extraout_x8_03)();
          param_3 = puVar7;
          param_2 = puVar4;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            pcStack_2d8 = FUN_108c6c970;
            puStack_300 = puVar4;
            puStack_2f8 = puVar7;
            ppuStack_2e0 = &ppuStack_250;
            func_0x000108c6cb64();
            (*extraout_x8_04)();
            if (param_1 != 0) {
              func_0x000108c6cc64();
              func_0x000108c6cc94();
              func_0x000108c6ccf4();
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              func_0x000108c6cd0c();
            }
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd0c();
            func_0x000108c6ccc0();
            pcStack_348 = FUN_108c6c9e8;
            param_3 = puVar3;
            ppuStack_350 = &ppuStack_2e0;
            func_0x000108c6cba0();
            uStack_388 = extraout_x8_05;
            func_0x000108c6cc54();
            param_2 = (undefined8 *)&UNK_110abc140;
            (*extraout_x8_06)();
            if (param_1 != 0) {
              func_0x000108c6cc04();
              func_0x000108c6ccd8();
              func_0x000108c6ccf4();
              param_2 = (undefined8 *)&UNK_110abc140;
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              param_5 = 0x30;
              do {
                func_0x000108c6ccc8();
                func_0x000108c6cd00();
              } while (!(bool)in_ZR);
            }
            func_0x000108c6cbb4(uStack_388);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_480;
            uStack_410 = 0x30;
            pcStack_3f8 = FUN_108c6ca98;
            puStack_420 = puVar3;
            puStack_418 = auStack_3d0;
            uStack_408 = param_5;
            ppuStack_400 = &ppuStack_350;
            func_0x000108c6cb64();
            (*extraout_x8_07)();
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_480;
            }
          }
        }
      }
    }
  }
  uVar8 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar8 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar8;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c720; end: 108c6c7b3;  */

/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c720(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 uVar7;
  undefined1 auStack_3f0 [96];
  undefined8 *puStack_390;
  undefined1 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 **ppuStack_370;
  code *pcStack_368;
  undefined1 auStack_340 [72];
  undefined8 uStack_2f8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [96];
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar4 = param_3;
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abbfb0;
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_120;
    pcStack_98 = FUN_108c6c7b4;
    puVar5 = puVar4;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    puVar3 = (undefined8 *)&UNK_110abc000;
    (*extraout_x8_00)();
    param_3 = puVar4;
    param_2 = puVar2;
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_1b0;
      pcStack_128 = FUN_108c6c848;
      puVar6 = puVar5;
      puStack_150 = puVar2;
      puStack_148 = puVar4;
      ppuStack_130 = &puStack_a0;
      func_0x000108c6cb64();
      puVar2 = (undefined8 *)&UNK_110abc050;
      (*extraout_x8_01)();
      param_3 = puVar5;
      param_2 = puVar3;
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_240;
        pcStack_1b8 = FUN_108c6c8dc;
        puVar4 = puVar6;
        puStack_1e0 = puVar3;
        puStack_1d8 = puVar5;
        ppuStack_1c0 = &ppuStack_130;
        func_0x000108c6cb64();
        (*extraout_x8_02)();
        param_3 = puVar6;
        param_2 = puVar2;
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          pcStack_248 = FUN_108c6c970;
          puStack_270 = puVar2;
          puStack_268 = puVar6;
          ppuStack_250 = &ppuStack_1c0;
          func_0x000108c6cb64();
          (*extraout_x8_03)();
          if (param_1 != 0) {
            func_0x000108c6cc64();
            func_0x000108c6cc94();
            func_0x000108c6ccf4();
            func_0x000108c6cbc8();
            func_0x000108c6cca4();
            func_0x000108c6cd0c();
          }
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd0c();
          func_0x000108c6ccc0();
          pcStack_2b8 = FUN_108c6c9e8;
          param_3 = puVar4;
          ppuStack_2c0 = &ppuStack_250;
          func_0x000108c6cba0();
          uStack_2f8 = extraout_x8_04;
          func_0x000108c6cc54();
          param_2 = (undefined8 *)&UNK_110abc140;
          (*extraout_x8_05)();
          if (param_1 != 0) {
            func_0x000108c6cc04();
            func_0x000108c6ccd8();
            func_0x000108c6ccf4();
            param_2 = (undefined8 *)&UNK_110abc140;
            func_0x000108c6cbc8();
            func_0x000108c6cca4();
            param_5 = 0x30;
            do {
              func_0x000108c6ccc8();
              func_0x000108c6cd00();
            } while (!(bool)in_ZR);
          }
          func_0x000108c6cbb4(uStack_2f8);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_3f0;
          uStack_380 = 0x30;
          pcStack_368 = FUN_108c6ca98;
          puStack_390 = puVar4;
          puStack_388 = auStack_340;
          uStack_378 = param_5;
          ppuStack_370 = &ppuStack_2c0;
          func_0x000108c6cb64();
          (*extraout_x8_06)();
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_3f0;
          }
        }
      }
    }
  }
  uVar7 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  *(undefined8 *)(puVar1 + 0x30) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar7 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar7;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c7b4; end: 108c6c847;  */

/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c7b4(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 uVar7;
  undefined1 auStack_360 [96];
  undefined8 *puStack_300;
  undefined1 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2b0 [72];
  undefined8 uStack_268;
  undefined8 **ppuStack_230;
  code *pcStack_228;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar4 = param_3;
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abc000;
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_120;
    pcStack_98 = FUN_108c6c848;
    puVar5 = puVar4;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    puVar3 = (undefined8 *)&UNK_110abc050;
    (*extraout_x8_00)();
    param_3 = puVar4;
    param_2 = puVar2;
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_1b0;
      pcStack_128 = FUN_108c6c8dc;
      puVar6 = puVar5;
      puStack_150 = puVar2;
      puStack_148 = puVar4;
      ppuStack_130 = &puStack_a0;
      func_0x000108c6cb64();
      (*extraout_x8_01)();
      param_3 = puVar5;
      param_2 = puVar3;
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        pcStack_1b8 = FUN_108c6c970;
        puStack_1e0 = puVar3;
        puStack_1d8 = puVar5;
        ppuStack_1c0 = &ppuStack_130;
        func_0x000108c6cb64();
        (*extraout_x8_02)();
        if (param_1 != 0) {
          func_0x000108c6cc64();
          func_0x000108c6cc94();
          func_0x000108c6ccf4();
          func_0x000108c6cbc8();
          func_0x000108c6cca4();
          func_0x000108c6cd0c();
        }
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd0c();
        func_0x000108c6ccc0();
        pcStack_228 = FUN_108c6c9e8;
        param_3 = puVar6;
        ppuStack_230 = &ppuStack_1c0;
        func_0x000108c6cba0();
        uStack_268 = extraout_x8_03;
        func_0x000108c6cc54();
        param_2 = (undefined8 *)&UNK_110abc140;
        (*extraout_x8_04)();
        if (param_1 != 0) {
          func_0x000108c6cc04();
          func_0x000108c6ccd8();
          func_0x000108c6ccf4();
          param_2 = (undefined8 *)&UNK_110abc140;
          func_0x000108c6cbc8();
          func_0x000108c6cca4();
          param_5 = 0x30;
          do {
            func_0x000108c6ccc8();
            func_0x000108c6cd00();
          } while (!(bool)in_ZR);
        }
        func_0x000108c6cbb4(uStack_268);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_360;
        uStack_2f0 = 0x30;
        pcStack_2d8 = FUN_108c6ca98;
        puStack_300 = puVar6;
        puStack_2f8 = auStack_2b0;
        uStack_2e8 = param_5;
        ppuStack_2e0 = &ppuStack_230;
        func_0x000108c6cb64();
        (*extraout_x8_05)();
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_360;
        }
      }
    }
  }
  uVar7 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  *(undefined8 *)(puVar1 + 0x30) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar7 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar7;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c848; end: 108c6c8db;  */

/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c848(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  undefined8 uVar5;
  undefined1 auStack_2d0 [96];
  undefined8 *puStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_220 [72];
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar3 = param_3;
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abc050;
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_120;
    pcStack_98 = FUN_108c6c8dc;
    puVar4 = puVar3;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    (*extraout_x8_00)();
    param_3 = puVar3;
    param_2 = puVar2;
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      pcStack_128 = FUN_108c6c970;
      puStack_150 = puVar2;
      puStack_148 = puVar3;
      ppuStack_130 = &puStack_a0;
      func_0x000108c6cb64();
      (*extraout_x8_01)();
      if (param_1 != 0) {
        func_0x000108c6cc64();
        func_0x000108c6cc94();
        func_0x000108c6ccf4();
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        func_0x000108c6cd0c();
      }
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd0c();
      func_0x000108c6ccc0();
      pcStack_198 = FUN_108c6c9e8;
      param_3 = puVar4;
      ppuStack_1a0 = &ppuStack_130;
      func_0x000108c6cba0();
      uStack_1d8 = extraout_x8_02;
      func_0x000108c6cc54();
      param_2 = (undefined8 *)&UNK_110abc140;
      (*extraout_x8_03)();
      if (param_1 != 0) {
        func_0x000108c6cc04();
        func_0x000108c6ccd8();
        func_0x000108c6ccf4();
        param_2 = (undefined8 *)&UNK_110abc140;
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        param_5 = 0x30;
        do {
          func_0x000108c6ccc8();
          func_0x000108c6cd00();
        } while (!(bool)in_ZR);
      }
      func_0x000108c6cbb4(uStack_1d8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_2d0;
      uStack_260 = 0x30;
      pcStack_248 = FUN_108c6ca98;
      puStack_270 = puVar4;
      puStack_268 = auStack_220;
      uStack_258 = param_5;
      ppuStack_250 = &ppuStack_1a0;
      func_0x000108c6cb64();
      (*extraout_x8_04)();
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_2d0;
      }
    }
  }
  uVar5 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  *(undefined8 *)(puVar1 + 0x30) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar5 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar5;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c8dc; end: 108c6c96f;  */

/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c8dc(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 uVar3;
  undefined1 auStack_240 [96];
  undefined8 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_190 [72];
  undefined8 uStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar2 = param_3;
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    pcStack_98 = FUN_108c6c970;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x000108c6cc64();
      func_0x000108c6cc94();
      func_0x000108c6ccf4();
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      func_0x000108c6cd0c();
    }
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd0c();
    func_0x000108c6ccc0();
    pcStack_108 = FUN_108c6c9e8;
    param_3 = puVar2;
    ppuStack_110 = &puStack_a0;
    func_0x000108c6cba0();
    uStack_148 = extraout_x8_01;
    func_0x000108c6cc54();
    param_2 = (undefined8 *)&UNK_110abc140;
    (*extraout_x8_02)();
    if (param_1 != 0) {
      func_0x000108c6cc04();
      func_0x000108c6ccd8();
      func_0x000108c6ccf4();
      param_2 = (undefined8 *)&UNK_110abc140;
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      param_5 = 0x30;
      do {
        func_0x000108c6ccc8();
        func_0x000108c6cd00();
      } while (!(bool)in_ZR);
    }
    func_0x000108c6cbb4(uStack_148);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_240;
    uStack_1d0 = 0x30;
    pcStack_1b8 = FUN_108c6ca98;
    puStack_1e0 = puVar2;
    puStack_1d8 = auStack_190;
    uStack_1c8 = param_5;
    ppuStack_1c0 = &ppuStack_110;
    func_0x000108c6cb64();
    (*extraout_x8_03)();
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_240;
    }
  }
  uVar3 = *param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_2[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x30) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar3 = *param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_3[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  *(undefined8 *)(puVar1 + 0x48) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6c970; end: 108c6c9e7;  */

/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c970(int param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000108c6cc64();
    func_0x000108c6cc94();
    func_0x000108c6ccf4();
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    func_0x000108c6cd0c();
  }
  func_0x000108c6cb88();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c6cbf8();
  func_0x000108c6cd0c();
  func_0x000108c6ccc0();
  func_0x000108c6cba0();
  func_0x000108c6cc54();
  puVar1 = (undefined8 *)&UNK_110abc140;
  (*extraout_x8_01)();
  if (param_1 != 0) {
    func_0x000108c6cc04();
    func_0x000108c6ccd8();
    func_0x000108c6ccf4();
    puVar1 = (undefined8 *)&UNK_110abc140;
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    do {
      func_0x000108c6ccc8();
      func_0x000108c6cd00();
    } while (!(bool)in_ZR);
  }
  func_0x000108c6cbb4(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    func_0x000108c6cb64();
    (*extraout_x8_02)();
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  return;
}



/* Entry: 108c6c9e8; end: 108c6ca97;  */

/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c9e8(int param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  
  func_0x000108c6cba0();
  func_0x000108c6cc54();
  puVar1 = (undefined8 *)&UNK_110abc140;
  (*extraout_x8_00)();
  if (param_1 != 0) {
    func_0x000108c6cc04();
    func_0x000108c6ccd8();
    func_0x000108c6ccf4();
    puVar1 = (undefined8 *)&UNK_110abc140;
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    do {
      func_0x000108c6ccc8();
      func_0x000108c6cd00();
    } while (!(bool)in_ZR);
  }
  func_0x000108c6cbb4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    func_0x000108c6cb64();
    (*extraout_x8_01)();
    if (param_1 == 0) {
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  return;
}



/* Entry: 108c6ca98; end: 108c6cb2b;  */

/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6ca98(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  code *extraout_x8;
  
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108c6cb2c; end: 108c6cd4f;  */

void FUN_108c6cb2c(void)

{
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = 0;
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  return;
}



/* Entry: 108c6cd50; end: 108c6cd6b;  */

long FUN_108c6cd50(long param_1)

{
  long extraout_x8;
  
  func_0x00010b535fbc();
  func_0x000108c6f568();
  return param_1 + extraout_x8;
}



/* Entry: 108c6cd6c; end: 108c6cd7b;  */

void FUN_108c6cd6c(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 108c6cd7c; end: 108c6cd9f;  */

undefined8 FUN_108c6cd7c(undefined8 param_1)

{
  func_0x000108c6f880();
  return param_1;
}



/* Entry: 108c6cda0; end: 108c6cda3;  */

undefined8 FUN_108c6cda0(undefined8 param_1)

{
  func_0x000108c6f880();
  return param_1;
}



/* Entry: 108c6cda4; end: 108c6cdb7;  */

void FUN_108c6cda4(void)

{
  FUN_108c6cd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6cdb8; end: 108c6cdd7;  */

undefined ** FUN_108c6cdb8(void)

{
  return &PTR_DAT_110abc880;
}



/* Entry: 108c6cdd8; end: 108c6ce2f;  */

long * FUN_108c6cdd8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108c6f670();
  if (param_1[2] != 0) {
    func_0x000108c6fbb4();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 108c6ce30; end: 108c6ce8f;  */

ulong FUN_108c6ce30(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 108c6ce90; end: 108c6cefb;  */

long FUN_108c6ce90(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong extraout_x8;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x000108c6fc24(&PTR_FUN_110abc7f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108c6f738();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_108c6f4a0(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 108c6cefc; end: 108c6cf27;  */

undefined8 FUN_108c6cefc(undefined8 param_1)

{
  func_0x000108c6f880();
  FUN_108c6cf28(param_1);
  return param_1;
}



/* Entry: 108c6cf28; end: 108c6cf43;  */

void FUN_108c6cf28(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_108c6d1d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6cf44; end: 108c6cf47;  */

undefined8 FUN_108c6cf44(undefined8 param_1)

{
  func_0x000108c6f880();
  FUN_108c6cf28(param_1);
  return param_1;
}



/* Entry: 108c6cf48; end: 108c6cf5b;  */

void FUN_108c6cf48(void)

{
  FUN_108c6cefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6cf5c; end: 108c6cf67;  */

undefined ** FUN_108c6cf5c(void)

{
  return &PTR_DAT_110abc8d8;
}



/* Entry: 108c6cf68; end: 108c6d0b7;  */

void FUN_108c6cf68(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000108c6cfac(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6d0b8; end: 108c6d0bb;  */

void FUN_108c6d0b8(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108c6f7f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_108c6f4a0();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_108c6d14c();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f7d8();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d0bc; end: 108c6d14b;  */

void FUN_108c6d0bc(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108c6f7f8();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_108c6f4a0();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_108c6d14c();
      puVar2 = puVar3;
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f7d8();
    if ((*puVar2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d14c; end: 108c6d1ab;  */

void FUN_108c6d14c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6d300();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d1ac; end: 108c6d1d7;  */

undefined1  [16] FUN_108c6d1ac(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 108c6d1d8; end: 108c6d203;  */

long FUN_108c6d1d8(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6ef70(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d204; end: 108c6d207;  */

long FUN_108c6d204(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6ef70(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d208; end: 108c6d21b;  */

void FUN_108c6d208(void)

{
  FUN_108c6d1d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6d21c; end: 108c6d227;  */

undefined ** FUN_108c6d21c(void)

{
  return &PTR_DAT_110abc930;
}



/* Entry: 108c6d228; end: 108c6d293;  */

long * FUN_108c6d228(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108c6f5b8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108c6f52c();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    func_0x000108c6f8b0(2);
    func_0x000108c6f9b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f8c8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108c6d294; end: 108c6d2e3;  */

void FUN_108c6d294(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  FUN_108c6f508();
  while (unaff_x22 != 0) {
    FUN_108c6d2e4(*unaff_x21);
    func_0x000108c6fa74();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
  }
  func_0x000108c6fa5c();
  return;
}



/* Entry: 108c6d2e4; end: 108c6d2ff;  */

long FUN_108c6d2e4(long param_1)

{
  long extraout_x8;
  
  FUN_108c6dac4();
  func_0x000108c6f568();
  return param_1 + extraout_x8;
}



/* Entry: 108c6d300; end: 108c6d313;  */

void FUN_108c6d300(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6d300();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d314; end: 108c6d33f;  */

long FUN_108c6d314(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6ef98(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d340; end: 108c6d343;  */

long FUN_108c6d340(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6ef98(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d344; end: 108c6d357;  */

void FUN_108c6d344(void)

{
  FUN_108c6d314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6d358; end: 108c6d363;  */

undefined ** FUN_108c6d358(void)

{
  return &PTR_DAT_110abc980;
}



/* Entry: 108c6d364; end: 108c6d3a3;  */

void FUN_108c6d364(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f854();
  if (0 < *(int *)(unaff_x19 + 0x30)) {
    func_0x0001053936e4(unaff_x19 + 0x28);
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6d3a4; end: 108c6d4bb;  */

long * FUN_108c6d3a4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong *extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x000108c6f670();
  func_0x000108c6fc30();
  while (unaff_x22 != 0) {
    func_0x000108c6f5d4();
    param_3 = *extraout_x8;
    func_0x000108c6f96c();
    func_0x000108922b58();
    param_4 = param_1;
    func_0x000108c6fa68();
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x000108c6f52c();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x000108c6f8b0(2);
    func_0x000108c6f9b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108c6f8c8();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 108c6d4bc; end: 108c6d4ff;  */

void FUN_108c6d4bc(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c6f600();
  func_0x00010598fce8();
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c303c4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d500; end: 108c6d547;  */

void FUN_108c6d500(long param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108c6f8f8();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x000108c6fc24(&PTR_FUN_110abc840);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108c6f738();
  }
  func_0x000108c6fb98();
  FUN_108c6efe8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 108c6d548; end: 108c6d573;  */

long FUN_108c6d548(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6f008(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d574; end: 108c6d577;  */

long FUN_108c6d574(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6f008(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d578; end: 108c6d58b;  */

void FUN_108c6d578(void)

{
  FUN_108c6d548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6d58c; end: 108c6d597;  */

undefined ** FUN_108c6d58c(void)

{
  return &PTR_DAT_110abc9d8;
}



/* Entry: 108c6d598; end: 108c6d5cb;  */

void FUN_108c6d598(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f860();
  if (in_NG == in_OV) {
    func_0x000108c6fa0c();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6d5cc; end: 108c6d68b;  */

long * FUN_108c6d5cc(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108c6f5b8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108c6f52c();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    func_0x000108c6f76c();
    func_0x000108c6f9b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f8c8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108c6d68c; end: 108c6d68f;  */

void FUN_108c6d68c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6d6c0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d690; end: 108c6d6bf;  */

void FUN_108c6d690(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6d6c0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d6c0; end: 108c6d6cf;  */

void FUN_108c6d6c0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 108c6d6d0; end: 108c6d6ff;  */

void FUN_108c6d6d0(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108c6f9bc();
  FUN_108c6d598();
  func_0x000108c6fc50();
  func_0x000108c6f600();
  FUN_108c6d6c0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d700; end: 108c6d703;  */

undefined1  [16] FUN_108c6d700(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 108c6d704; end: 108c6d733;  */

long FUN_108c6d704(long param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f9f0();
  FUN_108c6ef70(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d734; end: 108c6d737;  */

long FUN_108c6d734(long param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f9f0();
  FUN_108c6ef70(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6d738; end: 108c6d74b;  */

void FUN_108c6d738(void)

{
  FUN_108c6d704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6d74c; end: 108c6d757;  */

undefined ** FUN_108c6d74c(void)

{
  return &PTR_DAT_110abca30;
}



/* Entry: 108c6d758; end: 108c6d78f;  */

void FUN_108c6d758(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f904();
  FUN_108c6f448();
  func_0x000108c6f9d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6d790; end: 108c6d837;  */

long * FUN_108c6d790(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108c6f670();
  func_0x000108c6fa1c(param_1[5]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000108c6f830();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x000108c6f52c();
    param_3 = (ulong)*(uint *)(param_2 + 0x38);
    param_1 = (long *)0x2;
    func_0x000108c6f8b0();
    func_0x000108c6f9b0();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000108c6fbb4();
    func_0x00010599ccb0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f8c8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108c6d838; end: 108c6d8b3;  */

long FUN_108c6d838(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_108c6f508();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    FUN_108c6d2e4();
    func_0x000108c6fa74();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000108c6f808();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x000108c6f91c();
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000108c6f69c();
    unaff_x20 = extraout_x8_00 + unaff_x20;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 108c6d8b4; end: 108c6d90f;  */

void FUN_108c6d8b4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6d300();
  func_0x000108c6f7e8();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108c6f8d4();
    }
    func_0x000108c6fac8();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6d910; end: 108c6d93f;  */

undefined8 FUN_108c6d910(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  func_0x000108c6fa28();
  return param_1;
}



/* Entry: 108c6d940; end: 108c6d943;  */

undefined8 FUN_108c6d940(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  func_0x000108c6fa28();
  return param_1;
}



/* Entry: 108c6d944; end: 108c6d957;  */

void FUN_108c6d944(void)

{
  FUN_108c6d910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6d958; end: 108c6d963;  */

undefined ** FUN_108c6d958(void)

{
  return &PTR_DAT_110abca80;
}



/* Entry: 108c6d964; end: 108c6d99b;  */

void FUN_108c6d964(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
  func_0x000108c6fb08();
  func_0x000108c6fa30();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6d99c; end: 108c6dac3;  */

long * FUN_108c6d99c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  long *plVar6;
  int iVar7;
  
  plVar3 = param_2;
  plVar6 = param_3;
  func_0x000108c6f704();
  if ((long)plVar3 < 0) {
    plVar3 = (long *)unaff_x22[1];
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_108c6d9d4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)plVar3 != 0) {
LAB_108c6d9d4:
      param_4 = (long *)&UNK_10f50e614;
      func_0x000108c6f8b8();
      func_0x000108c6f5ec();
      param_1 = plVar2;
      param_2 = plVar2;
    }
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar3 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_108c6da0c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)plVar3 != 0) {
LAB_108c6da0c:
      param_4 = (long *)&UNK_10f50e644;
      func_0x000108c6f8b8();
      func_0x000108c6f634();
      param_1 = plVar2;
      param_2 = plVar2;
    }
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    param_1 = param_3;
    func_0x00010599ccb0();
    plVar6 = param_2;
    param_2 = param_1;
  }
  lVar4 = *(long *)(unaff_x21 + 0x30);
  if (lVar4 != 0) {
    param_1 = param_3;
    func_0x000107c282e8();
    plVar6 = param_2;
    param_2 = param_1;
  }
  func_0x000108c6f910(*(undefined8 *)(unaff_x21 + 0x20));
  if (lVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_108c6da90;
  }
  else if ((int)lVar4 == 0) goto LAB_108c6da90;
  param_4 = (long *)&UNK_10f50e67c;
  func_0x000108c6f8b8();
  func_0x000108c6f664(param_3,5);
  param_1 = param_3;
  param_2 = param_3;
LAB_108c6da90:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000108c6f8c8();
  if ((long)plVar6 < 0) {
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000108c6f9c8();
  if (*param_1 - (long)param_4 < (long)(int)plVar6) {
    while( true ) {
      iVar7 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar5 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar7);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar6);
}



/* Entry: 108c6dac4; end: 108c6dc2f;  */

long FUN_108c6dac4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000108c6f614();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x000108c6f8ec(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  func_0x000108c6f888();
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x000108c6f91c();
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar2;
  return lVar2;
}



/* Entry: 108c6dc30; end: 108c6dc57;  */

undefined8 FUN_108c6dc30(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6dc58; end: 108c6dc5b;  */

undefined8 FUN_108c6dc58(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  return param_1;
}



/* Entry: 108c6dc5c; end: 108c6dc6f;  */

void FUN_108c6dc5c(void)

{
  FUN_108c6dc30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6dc70; end: 108c6dc7b;  */

undefined ** FUN_108c6dc70(void)

{
  return &PTR_DAT_110abcad0;
}



/* Entry: 108c6dc7c; end: 108c6ddd7;  */

void FUN_108c6dc7c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f72c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6ddd8; end: 108c6ddff;  */

undefined8 FUN_108c6ddd8(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6fb20();
  return param_1;
}



/* Entry: 108c6de00; end: 108c6de03;  */

undefined8 FUN_108c6de00(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6fb20();
  return param_1;
}



/* Entry: 108c6de04; end: 108c6de17;  */

void FUN_108c6de04(void)

{
  FUN_108c6ddd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6de18; end: 108c6de23;  */

undefined ** FUN_108c6de18(void)

{
  return &PTR_DAT_110abcb20;
}



/* Entry: 108c6de24; end: 108c6de53;  */

void FUN_108c6de24(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f854();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6de54; end: 108c6df57;  */

long * FUN_108c6de54(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined1 *puVar1;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x23;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x000108c6f75c();
  uVar5 = (ulong)(*(uint *)(param_1 + 3) & ((int)*(uint *)(param_1 + 3) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar5 == 0) {
      if (*(int *)(unaff_x21 + 0x28) != 0) {
        func_0x000108c6f83c();
        func_0x000108c6fa14();
        func_0x000108c6fab0();
        unaff_x20 = param_1;
      }
      if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
        return unaff_x20;
      }
      func_0x000108c6f8c8();
      if ((long)param_3 < 0) {
        param_3 = *(ulong *)(extraout_x8 + 0x10);
      }
      func_0x000108c6f9c8();
      if ((long)(int)param_3 <= *param_1 - (long)param_4) {
        _memcpy(param_4);
        return (long *)((long)param_4 + (long)(int)param_3);
      }
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    func_0x000108c6fb28();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000108c6fc0c();
    lVar4 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar4 < 0) {
      lVar4 = unaff_x23[1];
      in_OV = SBORROW8(lVar4,0x7f);
      in_NG = lVar4 + -0x7f < 0;
      if (lVar4 < 0x80) goto LAB_108c6dec0;
LAB_108c6def4:
      func_0x000108c6f96c();
      func_0x000108c6fbe0();
      unaff_x20 = param_1;
    }
    else {
LAB_108c6dec0:
      func_0x000108c6fc5c();
      if (in_NG != in_OV) goto LAB_108c6def4;
      *(undefined1 *)unaff_x20 = 10;
      *(char *)((long)unaff_x20 + 1) = (char)lVar4;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x000108c6faf4();
      unaff_x20 = (long *)((long)unaff_x20 + lVar4);
    }
    uVar5 = uVar5 - 1;
  } while( true );
}



/* Entry: 108c6df58; end: 108c6dfc7;  */

long FUN_108c6df58(void)

{
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000108c6f6ec();
  while (unaff_x22 != 0) {
    func_0x000108c6f5d4();
    func_0x000107c282a0(*extraout_x8);
    func_0x000108c6f928();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x000108c6f818();
    unaff_x20 = unaff_x20 + extraout_x8_00 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108c6f9dc();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 108c6dfc8; end: 108c6e003;  */

void FUN_108c6dfc8(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108c6f600();
  func_0x00010598fce8();
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6e004; end: 108c6e04b;  */

void FUN_108c6e004(long param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108c6f8f8();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x000108c6fc24(&PTR_FUN_110abc6b0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108c6f738();
  }
  func_0x000108c6fb98();
  FUN_108c6f030();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 108c6e04c; end: 108c6e077;  */

long FUN_108c6e04c(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6f050(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6e078; end: 108c6e07b;  */

long FUN_108c6e078(long param_1)

{
  func_0x000108c6f880();
  FUN_108c6f050(param_1 + 0x10);
  return param_1;
}



/* Entry: 108c6e07c; end: 108c6e08f;  */

void FUN_108c6e07c(void)

{
  FUN_108c6e04c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6e090; end: 108c6e09b;  */

undefined ** FUN_108c6e090(void)

{
  return &PTR_DAT_110abcb78;
}



/* Entry: 108c6e09c; end: 108c6e0cf;  */

void FUN_108c6e09c(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108c6f860();
  if (in_NG == in_OV) {
    func_0x000108c6fa0c();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 108c6e0d0; end: 108c6e18f;  */

long * FUN_108c6e0d0(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x000108c6f5b8();
  while (unaff_w22 != unaff_w21) {
    func_0x000108c6f52c();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x000108c6f76c();
    func_0x000108c6f9b0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f8c8();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 108c6e190; end: 108c6e193;  */

void FUN_108c6e190(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6e1c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6e194; end: 108c6e1c3;  */

void FUN_108c6e194(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108c6f600();
  FUN_108c6e1c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6e1c4; end: 108c6e1d3;  */

void FUN_108c6e1c4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 108c6e1d4; end: 108c6e203;  */

void FUN_108c6e1d4(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108c6f9bc();
  FUN_108c6e09c();
  func_0x000108c6fc50();
  func_0x000108c6f600();
  FUN_108c6e1c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108c6f648();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 108c6e204; end: 108c6e207;  */

undefined1  [16] FUN_108c6e204(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 108c6e208; end: 108c6e233;  */

undefined8 FUN_108c6e208(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  return param_1;
}



/* Entry: 108c6e234; end: 108c6e237;  */

undefined8 FUN_108c6e234(undefined8 param_1)

{
  func_0x000108c6f880();
  func_0x000108c6f95c();
  func_0x000108c6f998();
  return param_1;
}



/* Entry: 108c6e238; end: 108c6e24b;  */

void FUN_108c6e238(void)

{
  FUN_108c6e208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6e24c; end: 108c6e257;  */

undefined ** FUN_108c6e24c(void)

{
  return &PTR_DAT_110abcbd0;
}


