/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10782b7a0; end: 10782bccf;  */

void FUN_10782b7a0(long param_1,ulong param_2,undefined8 param_3,undefined8 **param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  undefined4 extraout_w8;
  undefined8 extraout_x9;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x25;
  long *plVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  ulong *in_stack_00000060;
  undefined8 auStack_350 [2];
  long *plStack_340;
  long *plStack_338;
  long *plStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [56];
  undefined4 auStack_2e0 [6];
  undefined4 uStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_298;
  undefined1 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 **ppuStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined ***pppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  undefined4 *puStack_220;
  undefined8 **ppuStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [256];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined4 uStack_40;
  undefined8 uStack_10;
  
  func_0x000107833360();
  uVar15 = param_2;
  func_0x000107832d38();
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (ppuVar14 = *(undefined8 ***)(*(long *)(param_1 + 0x30) + 0x128),
     ppuVar14 != (undefined8 **)0x0)) {
    plStack_340 = (long *)0x0;
    plStack_338 = (long *)0x0;
    plStack_330 = (long *)0x0;
    ppuVar4 = ppuVar14;
    (*(code *)(*ppuVar14)[4])(auStack_350);
    func_0x00010783321c(param_1);
    plVar2 = (long *)0x0;
    plVar13 = (long *)0x0;
    ppuStack_270 = ppuVar4;
    while (uStack_268 = uVar15, ppuStack_270 != (undefined8 **)0x0) {
      func_0x000104c2fe00(auStack_168,*(long *)(*(long *)(uVar15 + 0x48) + 8) + 0x78);
      uVar5 = auStack_350[0];
      func_0x0001072623b8(auStack_350[0],auStack_168);
      plVar11 = plVar2;
      plVar12 = plVar13;
      if (((int)uVar5 != 0) &&
         ((uVar9 = param_2, func_0x00010786a95c(param_2,auStack_168), (uVar9 & 1) != 0 ||
          (ppuVar4 = param_4, func_0x00010786a95c(param_4,0x1138369c0), ((ulong)ppuVar4 & 1) != 0)))
         ) {
        plVar1 = (long *)(uVar15 + 0x38);
        plVar6 = (long *)*plVar1;
        if ((plVar6 != (long *)0x0) && ((**(code **)(*plVar6 + 0x48))(), (int)plVar6 != 0)) {
          if (plVar2 < plStack_330) {
            plVar11 = plVar2 + 1;
            *plVar2 = (long)plVar1;
            plStack_338 = plVar11;
          }
          else {
            lVar10 = (long)plVar2 - (long)plVar13;
            uVar15 = (lVar10 >> 3) + 1;
            if (uVar15 >> 0x3d != 0) goto LAB_10782bc08;
            uVar9 = (long)plStack_330 - (long)plVar13 >> 2;
            if (uVar9 <= uVar15) {
              uVar9 = uVar15;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_330 - (long)plVar13)) {
              uVar9 = 0x1fffffffffffffff;
            }
            if (uVar9 == 0) {
              lVar7 = 0;
            }
            else {
              if (uVar9 >> 0x3d != 0) {
                plStack_340 = plVar13;
                func_0x000104bd35f4();
                goto LAB_10782bc1c;
              }
              lVar7 = uVar9 << 3;
              __Znwm();
            }
            plVar2 = (long *)(lVar7 + lVar10);
            plVar6 = (long *)(lVar7 + uVar9 * 8);
            plVar12 = plVar2 + -(lVar10 >> 3);
            plVar11 = plVar2 + 1;
            *plVar2 = (long)plVar1;
            _memcpy(plVar12,plVar13,lVar10);
            plStack_338 = plVar11;
            plStack_330 = plVar6;
            if (plVar13 != (long *)0x0) {
              __ZdlPv(plVar13);
              plStack_338 = plVar11;
            }
          }
        }
      }
      func_0x000104c2f714(auStack_168);
      func_0x00010782bcf8(&ppuStack_270);
      plVar2 = plVar11;
      plVar13 = plVar12;
      uVar15 = uStack_268;
    }
    in_ZR = plVar13 == plVar2;
    unaff_x25 = plVar13;
    plStack_340 = plVar13;
    if (!(bool)in_ZR) {
      auStack_2e0[0] = 0x37;
      uStack_2c8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      func_0x000107832d10();
      uStack_2b8 = 0;
      uStack_298 = 0;
      uStack_294 = 1;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_290 = 0;
      func_0x00010743cc34(&ppuStack_270,auStack_2e0,7);
      func_0x00010743d7bc(auStack_168,&ppuStack_270);
      func_0x000107288cd8(&ppuStack_270);
      func_0x000107262330(auStack_2e0);
      func_0x000104c2fe00(auStack_318,param_7);
      func_0x000107832ecc();
      func_0x000107371bc4(auStack_160);
      func_0x000104c2f714(auStack_318);
      func_0x0001078331a4();
      uVar15 = 0;
      uVar9 = 1;
      unaff_x25 = &lStack_48;
      for (plVar11 = plVar13; in_ZR = plVar11 == plVar2, !(bool)in_ZR; plVar11 = plVar11 + 1) {
        func_0x000104c2fe00(auStack_2e0,*(long *)(*(long *)(*plVar11 + 0x10) + 8) + 8);
        func_0x000104c2fe00(&lStack_48,*(long *)(*(long *)(*plVar11 + 0x10) + 8) + 0x78);
        plVar12 = *(long **)*plVar11;
        ppuStack_258 = &PTR_DAT_1109e1040;
        puStack_220 = auStack_2e0;
        ppuStack_270 = param_4;
        uStack_268 = param_5;
        uStack_260 = param_2;
        uStack_250 = param_3;
        plStack_248 = unaff_x25;
        pppuStack_240 = &ppuStack_258;
        ppuStack_238 = ppuVar14;
        uStack_230 = param_7;
        plStack_228 = unaff_x25;
        if (*(char *)(param_1 + 0x128) == '\x01') {
          func_0x00010782bf00(param_1 + 0x60);
          func_0x000107830fe4(&puStack_60,param_1 + 0x100);
        }
        else {
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_60 = &uStack_58;
        }
        uStack_210 = *param_6;
        uStack_208 = *(undefined1 *)(param_6 + 1);
        ppuStack_218 = &puStack_60;
        (**(code **)(*plVar12 + 0x38))(&uStack_320,plVar12,&ppuStack_270);
        func_0x00010744356c(&ppuStack_258);
        func_0x000107408ca0(&puStack_60);
        puStack_60 = (undefined8 *)(uVar15 & 0xffffffff | uVar9 << 0x20);
        uStack_58 = uStack_320;
        uStack_268 = 2;
        ppuStack_270 = &puStack_60;
        func_0x00010744be14(&uStack_328,&ppuStack_270);
        uVar15 = uStack_328;
        uVar9 = uStack_328 >> 0x20;
        func_0x000107833184();
        func_0x0001078333b8();
      }
      if (uVar9 == 0) {
        ppuStack_270 = (undefined8 **)CONCAT44(ppuStack_270._4_4_,0x38);
        ppuStack_258 = (undefined **)((ulong)ppuStack_258 & 0xffffffff00000000);
        pppuStack_240 = (undefined ***)0x0;
        ppuStack_238 = (undefined8 **)0x0;
        func_0x000107832d10();
        plStack_248 = (long *)0x0;
        uStack_230 = CONCAT44(uStack_230._4_4_,extraout_w8);
        plStack_228 = (long *)CONCAT35((int3)((ulong)plStack_228 >> 0x28),0x100000000);
        ppuStack_218 = (undefined8 **)0x0;
        uStack_210 = 0;
        puStack_220 = (undefined4 *)0x0;
        uStack_250 = extraout_x9;
        func_0x000104c2fe00(auStack_2e0,param_7);
        func_0x000107832ecc();
        pppuVar8 = &ppuStack_270;
        func_0x000107371bc4(pppuVar8);
        func_0x0001072df7b4();
        lStack_48 = (long)plVar2 - (long)plVar13 >> 3;
        uStack_40 = 3;
        puStack_60 = (undefined8 *)*in_stack_00000060;
        uStack_58 = CONCAT44(uStack_58._4_4_,3);
        func_0x000107832e74(in_stack_00000060,pppuVar8,&lStack_48,&puStack_60);
        func_0x0001078333b8();
        func_0x000107262330(&ppuStack_270);
      }
      func_0x00010743d7e4(auStack_168);
    }
    func_0x000107283194(auStack_350);
    FUN_107831198(&plStack_340);
  }
  func_0x000107832c6c(uStack_10);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar13 = unaff_x25;
LAB_10782bc08:
  plStack_340 = plVar13;
  func_0x000107830f34();
LAB_10782bc1c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10782bc20);
  (*pcVar3)();
}



/* Entry: 10782bf18; end: 10782bf87;  */

byte FUN_10782bf18(long param_1)

{
  int iVar1;
  byte bVar2;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (*(char *)(lVar3 + 0x128) == '\x01') {
    func_0x0001078334c4();
    func_0x000107832f10();
    iVar1 = (int)*(undefined8 *)(lVar3 + 0x60) + unaff_w20 * 0x18;
    func_0x0001074344b4();
    if (iVar1 != 0) {
      bVar2 = *(byte *)(*(long *)(*(long *)(unaff_x19 + 8) + 0x20) + (ulong)unaff_w20 * 0x20 + 0x18)
              ^ 1;
      goto LAB_10782bf74;
    }
  }
  bVar2 = 0;
LAB_10782bf74:
  return bVar2 & 1;
}



/* Entry: 10782cbb0; end: 10782cbd3;  */

undefined1  [16] FUN_10782cbb0(long param_1)

{
  if (*(long *)(param_1 + 0xe8) != 0) {
    return *(undefined1 (*) [16])(*(long *)(param_1 + 0xe8) + 0x20);
  }
  return ZEXT816(0);
}



/* Entry: 10782d564; end: 10782d5ef;  */

void FUN_10782d564(long *param_1)

{
  long lVar1;
  undefined8 uStack_60;
  
  func_0x000107832eb8();
  if (uStack_60 != 0) {
    lVar1 = *param_1;
    func_0x000107833124();
    func_0x0001078318a0();
    func_0x000107833224();
    func_0x000107833098();
    if (lVar1 != 0) {
      func_0x000107832c60();
    }
  }
  func_0x000107832ef8();
  return;
}



/* Entry: 10782eb2c; end: 10782eb5f;  */

void FUN_10782eb2c(long param_1,undefined8 param_2,long param_3)

{
  *(undefined1 *)(param_1 + 0x8a) = 1;
  if (param_3 == *(long *)(param_1 + 0x1e0)) {
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010782eb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),param_1,param_2);
  return;
}



/* Entry: 10782ee20; end: 10782efb3;  */

void FUN_10782ee20(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x19;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = (long *)param_2[1];
  if ((long *)*param_2 != plVar2) {
    func_0x000107832fc8();
    for (plVar6 = (long *)(extraout_x8 + 0xb8); plVar6 + -0x17 != plVar2; plVar6 = plVar6 + 0x19) {
      if (*plVar6 != 0) {
        func_0x000107430650(*(undefined8 *)(unaff_x19 + 0x280),plVar6);
      }
    }
    func_0x0001078334e4();
    lVar4 = unaff_x20[1];
    for (lVar5 = *unaff_x20; lVar5 != lVar4; lVar5 = lVar5 + 200) {
      func_0x0001072e89a4(auStack_80,lVar5);
    }
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x3f800000;
    lVar4 = unaff_x20[1];
    for (lVar5 = *unaff_x20; lVar5 != lVar4; lVar5 = lVar5 + 200) {
      if (*(char *)(lVar5 + 0x70) == '\x01') {
        lVar3 = *(long *)(lVar5 + 0x60);
        for (lVar7 = *(long *)(lVar5 + 0x58); lVar7 != lVar3; lVar7 = lVar7 + 0x38) {
          func_0x0001072e89a4(&uStack_b0,lVar7);
        }
      }
    }
    if (*(long *)(unaff_x19 + 800) != 0) {
      puVar1 = (undefined8 *)(unaff_x19 + 800);
      func_0x000107831338(puVar1);
      __ZdlPv(*puVar1);
      *puVar1 = 0;
      *(undefined8 *)(unaff_x19 + 0x328) = 0;
      *(undefined8 *)(unaff_x19 + 0x330) = 0;
    }
    lVar5 = *unaff_x20;
    *(long *)(unaff_x19 + 0x328) = unaff_x20[1];
    *(long *)(unaff_x19 + 800) = lVar5;
    *(long *)(unaff_x19 + 0x330) = unaff_x20[2];
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    func_0x00010742d294(*(undefined8 *)(unaff_x19 + 0x280),unaff_x19 + 0x188,auStack_80);
    func_0x00010742e15c(*(undefined8 *)(unaff_x19 + 0x280),unaff_x19 + 0x1a8,&uStack_b0);
    lVar4 = *(long *)(unaff_x19 + 0x328);
    for (lVar5 = *(long *)(unaff_x19 + 800); lVar5 != lVar4; lVar5 = lVar5 + 200) {
      uStack_48 = *(undefined8 *)(lVar5 + 0xc0);
      uStack_50 = *(undefined8 *)(lVar5 + 0xb8);
      *(undefined8 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0xc0) = 0;
      func_0x0001073b4a44(&uStack_50);
    }
    func_0x00010726ea70(&uStack_b0);
    func_0x000107833234();
  }
  return;
}



/* Entry: 10782f6f0; end: 10782f9ab;  */

void FUN_10782f6f0(void)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long lVar8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long *plVar9;
  ulong *puVar10;
  long extraout_x9;
  int extraout_w10;
  ulong *puVar11;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  ulong *puVar13;
  ulong *unaff_x24;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  func_0x000107833544();
  func_0x000107832fc8();
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,100);
  in_stack_00000048 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  func_0x000107832d10();
  func_0x000107833104();
  func_0x000107833400(&stack0x00000030,8);
  func_0x0001078333d4();
  func_0x000107262330(&stack0x00000030);
  iVar2 = *(int *)(unaff_x20 + 0x48);
  uVar4 = iVar2 + -1 < 0;
  uVar5 = iVar2 == 1;
  if ((bool)uVar5) {
    func_0x000107832fb0(&stack0x000000a0);
    func_0x00010782f3bc(*(undefined1 *)(unaff_x20 + 0x40),&stack0x000000a0);
    puVar7 = *(undefined8 **)(unaff_x19 + 0x80);
    func_0x000107832f38();
    func_0x000107832f20(*puVar7);
    func_0x000107833044();
    func_0x000107832e74();
  }
  else if (iVar2 == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x80);
    func_0x000107832fd4(&stack0x000000a0,9);
    func_0x000107832f38();
    func_0x000107832f20(**(undefined8 **)(unaff_x19 + 0x80));
    func_0x000107833044();
    func_0x000107832e74(uVar12);
    lVar8 = *(long *)(unaff_x20 + 8);
    in_stack_00000018 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000010 = lVar8;
    if (in_stack_00000018 != 0) {
      do {
        func_0x000107832d84();
        lVar8 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar10 = (ulong *)(lVar8 + 0x28);
    func_0x00010782f9b4();
    lVar8 = in_stack_00000018;
    plVar1 = (long *)(unaff_x19 + 0x2f8);
    puVar13 = *(ulong **)(unaff_x19 + 0x300);
    puVar6 = puVar10;
    if (puVar13 != (ulong *)0x0) {
      func_0x0001078334ac();
      if ((bool)uVar5) {
        unaff_x24 = (ulong *)(extraout_x8_00 & (ulong)puVar10);
      }
      else {
        uVar4 = (long)puVar10 - (long)puVar13 < 0;
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
      plVar9 = *(long **)(*plVar1 + (long)unaff_x24 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_10782f860;
            puVar11 = (ulong *)plVar9[1];
            if (puVar11 != puVar10) break;
            uVar4 = plVar9[2] - (long)puVar10 < 0;
            if ((ulong *)plVar9[2] == puVar10) goto LAB_10782f948;
          }
          if (((ulong)puVar13 & extraout_x8_00) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & extraout_x8_00);
          }
          else if (puVar13 <= puVar11) {
            uVar3 = 0;
            if (puVar13 != (ulong *)0x0) {
              uVar3 = (ulong)puVar11 / (ulong)puVar13;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar3 * (long)puVar13);
          }
          uVar4 = (long)puVar11 - (long)unaff_x24 < 0;
        } while (puVar11 == unaff_x24);
      }
    }
LAB_10782f860:
    func_0x0001078330fc();
    func_0x00010783315c();
    if (lVar8 != 0) {
      do {
        func_0x000107832cb4();
      } while (extraout_w10 != 0);
    }
    func_0x000107833248(*(undefined8 *)(unaff_x19 + 0x310));
    if ((puVar13 == (ulong *)0x0) || (func_0x0001078331cc(), (bool)uVar4)) {
      func_0x000107833390();
      uVar4 = puVar13 == (ulong *)0x3;
      func_0x000107832c80();
      func_0x000107831f2c(plVar1);
      puVar13 = *(ulong **)(unaff_x19 + 0x300);
      func_0x0001078334ac();
      if ((bool)uVar4) {
        unaff_x24 = (ulong *)(extraout_x8_01 & (ulong)puVar10);
      }
      else {
        unaff_x24 = puVar10;
        if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          unaff_x24 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
      }
    }
    puVar10 = *(ulong **)(*plVar1 + (long)unaff_x24 * 8);
    if (puVar10 == (ulong *)0x0) {
      func_0x000107833378();
      if (extraout_x9 != 0) {
        puVar10 = *(ulong **)(extraout_x9 + 8);
        if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & (long)puVar13 - 1U);
        }
        else if (puVar13 <= puVar10) {
          uVar3 = 0;
          if (puVar13 != (ulong *)0x0) {
            uVar3 = (ulong)puVar10 / (ulong)puVar13;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar3 * (long)puVar13);
        }
        *(ulong **)(extraout_x8_02 + (long)puVar10 * 8) = puVar6;
      }
    }
    else {
      *puVar6 = *puVar10;
      *puVar10 = (ulong)puVar6;
    }
    in_stack_00000030 = 0;
    *(long *)(unaff_x19 + 0x310) = *(long *)(unaff_x19 + 0x310) + 1;
    func_0x000107832070(&stack0x00000030);
LAB_10782f948:
    func_0x00010742ac74(&stack0x00000010);
    func_0x000107833144(*(undefined8 *)(unaff_x19 + 0x90));
    func_0x000107833410();
  }
  func_0x000107262330(&stack0x000000a0);
  return;
}



/* Entry: 10782fbd8; end: 10782fd33;  */

void FUN_10782fbd8(float param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  double dVar7;
  
  if (((param_2[0x3d] != 0) && (lVar3 = *(long *)(param_2[0x3d] + 0x30), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x128) != 0)) {
    uVar4 = param_6;
    (**(code **)(*param_2 + 0x68))();
    lVar3 = (long)param_2 + 0xc;
    func_0x0001073b724c();
    lStack_110 = lVar3;
    uStack_108 = uVar4;
    func_0x000107415eec(param_5,auStack_100,&lStack_110,0x2000);
    func_0x000107877034(auStack_100,param_8,auStack_100);
    uVar4 = *(undefined8 *)(param_2[0x3d] + 0x30);
    bVar1 = *(byte *)((long)param_2 + 0xc);
    bVar2 = *(byte *)(param_2 + 2);
    dVar6 = *(double *)(param_5 + 0x78);
    _log2(dVar6);
    dVar6 = dVar6 - (double)(uint)bVar1;
    _exp2(dVar6);
    lVar3 = (long)param_2 + 0xc;
    dVar7 = dVar6;
    func_0x0001073b724c();
    fVar5 = SUB84(dVar7,0);
    lStack_110 = lVar3;
    uStack_108 = param_8;
    func_0x0001074182d8(param_5);
    func_0x0001073c0458((double)(uint)(1 << (ulong)((uint)bVar1 - (uint)bVar2 & 0x1f)) * 512.0,dVar6
                        ,param_1 * fVar5,uVar4,param_3,param_4,param_5,auStack_100,param_7,
                        &lStack_110,param_6,param_9,param_2[0x18]);
  }
  return;
}



/* Entry: 107830e34; end: 107830e6b;  */

void FUN_107830e34(long param_1)

{
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_10782b7a0();
  }
  return;
}



/* Entry: 107830fa0; end: 107830fd7;  */

long FUN_107830fa0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e10b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107831198; end: 1078311c3;  */

long * FUN_107831198(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078313e8; end: 1078313ff;  */

void FUN_1078313e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078316dc; end: 107831723;  */

void FUN_1078316dc(long param_1)

{
  func_0x000107833510();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1078317e0; end: 10783189f;  */

void FUN_1078317e0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107833504();
    func_0x0001075183dc();
    func_0x0001078332bc();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (lVar2 != lVar1) {
      func_0x0001078332dc();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  return;
}



/* Entry: 107831a24; end: 107831a97;  */

void FUN_107831a24(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  uint extraout_w11;
  
  func_0x000107832e7c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x0001078334f8();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  (*pcVar2)();
  func_0x00010783303c();
  func_0x0001078334b8();
  if (param_1 != 0) {
    func_0x000107832c60();
  }
  return;
}



/* Entry: 107831be4; end: 107831c13;  */

void FUN_107831be4(void)

{
  return;
}



/* Entry: 107831ef4; end: 107831f2b;  */

void FUN_107831ef4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078332cc();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x000107435084(unaff_x20 + 0x18);
    }
    func_0x000107833408();
  }
  return;
}



/* Entry: 1078320f0; end: 10783215f;  */

void FUN_1078320f0(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  uint extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107832e7c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x0001078334f8();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  uStack_38 = *(undefined8 *)(lVar1 + 0x28);
  uStack_40 = *(undefined8 *)(lVar1 + 0x20);
  uStack_30 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  (*pcVar2)();
  func_0x00010783303c();
  func_0x0001074f4f04(&uStack_40);
  return;
}



/* Entry: 107832440; end: 107832503;  */

undefined1 * FUN_107832440(undefined1 *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puStack_40 = (undefined8 *)(param_1 + 0x20);
  *puStack_40 = 0;
  uStack_38 = 0;
  if (param_2 != 0) {
    puVar4 = (undefined1 *)(ulong)param_2;
    puVar3 = (undefined1 *)((long)puVar4 << 5);
    puVar2 = puVar3;
    __Znwm();
    *(undefined1 **)(param_1 + 0x20) = puVar2;
    *(undefined1 **)(param_1 + 0x28) = puVar2;
    puVar1 = puVar2 + (long)puVar4 * 0x20;
    *(undefined1 **)(param_1 + 0x30) = puVar1;
    while (puVar4 != (undefined1 *)0x0) {
      *puVar2 = 0;
      puVar2[0x18] = 0;
      puVar2 = puVar2 + 0x20;
      puVar3 = puVar3 + -0x20;
      puVar4 = puVar3;
    }
    *(undefined1 **)(param_1 + 0x28) = puVar1;
  }
  uStack_38 = 1;
  func_0x000107832504(&puStack_40);
  param_1[0x38] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return param_1;
}



/* Entry: 1078326d8; end: 1078326eb;  */

void FUN_1078326d8(void)

{
  func_0x000107832760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078329a4; end: 1078329a7;  */

undefined8 * FUN_1078329a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e13b8;
  func_0x000107832a18(param_1 + 4);
  return param_1;
}



/* Entry: 107832b24; end: 107832b3f;  */

void FUN_107832b24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e13f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107833ca8; end: 107833d37;  */

undefined1  [16] FUN_107833ca8(double param_1,double param_2,double param_3,short *param_4)

{
  short sVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  sVar1 = *param_4;
  dVar2 = ((180.0 - ((param_2 + (double)(int)param_4[1]) * 360.0) / param_3) * 3.141592653589793) /
          180.0;
  _exp(dVar2);
  _atan();
  auVar3._8_8_ = dVar2 * 114.59155902616465 + -90.0;
  auVar3._0_8_ = ((param_1 + (double)(int)sVar1) * 360.0) / param_3 + -180.0;
  return auVar3;
}



/* Entry: 10783464c; end: 10783466b;  */

void FUN_10783464c(void)

{
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 107834800; end: 107834823;  */

void FUN_107834800(void)

{
  func_0x000107842734();
  func_0x000107834824();
  return;
}



/* Entry: 1078349a8; end: 1078349e3;  */

long FUN_1078349a8(long param_1)

{
  func_0x000107386104();
  func_0x000104c2f64c(param_1 + 0x70);
  func_0x000104c2f64c(param_1 + 0xa8);
  func_0x000107269c1c(param_1 + 0xe0);
  return param_1;
}



/* Entry: 107834ba0; end: 107834bc3;  */

void FUN_107834ba0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107835834; end: 107835857;  */

void FUN_107835834(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    param_4 = param_4 + 3;
  }
  return;
}



/* Entry: 107835a84; end: 107835aa3;  */

long * FUN_107835a84(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x0001078357a8();
    plVar2 = param_3;
    for (; param_1 != param_2; param_1 = param_1 + 3) {
      *plVar2 = *param_1;
      plVar2[1] = param_1[1];
      plVar2[2] = param_1[2];
      plVar2 = plVar2 + 3;
      param_3 = param_3 + 3;
    }
    return param_3;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 107836104; end: 1078361ab;  */

void FUN_107836104(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  undefined8 in_stack_00000018;
  
  func_0x000107843250();
  func_0x000107842888();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    if ((ulong)param_3[1] < (ulong)param_3[2]) {
      func_0x000107842c6c();
      lVar1 = extraout_x8 + 0x18;
    }
    else {
      func_0x000107842ab4((param_3[1] - *param_3) / 0x18);
      FUN_107835a84();
      func_0x000100660228();
      func_0x0001078357dc(&stack0x00000008,param_2,extraout_x8_00 / 0x18,param_3 + 2);
      func_0x000107842c6c(in_stack_00000018);
      func_0x0001078424ec();
      func_0x000100660238();
      func_0x0001078357b4();
      lVar1 = param_3[1];
      func_0x000107835888(&stack0x00000008);
    }
    param_3[1] = lVar1;
  }
  return;
}



/* Entry: 1078377b0; end: 107837863;  */

void FUN_1078377b0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010783c8f8(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  func_0x00010783c918(param_1);
  FUN_10783c9cc(param_1);
  func_0x00010783cdd0(param_1,0);
  func_0x00010783ce4c(param_1);
  do {
    func_0x00010783d02c(param_1);
    uVar1 = param_1;
    func_0x00010783cdd0(param_1,1);
  } while ((uVar1 & 1) != 0);
  return;
}



/* Entry: 107837c04; end: 107838143;  */

void FUN_107837c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  long *extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar4;
  long unaff_x23;
  long lVar5;
  long lVar6;
  long unaff_x24;
  long lVar7;
  long *unaff_x25;
  long unaff_x26;
  long *plVar8;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    return;
  }
  func_0x000107843308();
  func_0x0001078422cc();
  iVar3 = (int)param_1;
  if ((bool)in_ZR) {
    lVar7 = unaff_x21[-1];
    lVar4 = *unaff_x20;
    func_0x0001078428c8();
    func_0x000107837bd4();
    if (iVar3 == 0) {
      *unaff_x19 = lVar4;
      lVar7 = unaff_x21[-1];
    }
    else {
      *unaff_x19 = lVar7;
      lVar7 = *unaff_x20;
    }
    unaff_x19[1] = lVar7;
  }
  else if (unaff_x23 == 1) {
    func_0x0001078426c8();
  }
  else if (unaff_x23 < 9) {
    uVar1 = unaff_x20 == unaff_x21;
    if (!(bool)uVar1) {
      lVar7 = 0;
      func_0x0001078426c8();
      while (func_0x000107842b14(), !(bool)uVar1) {
        lVar4 = *unaff_x20;
        lVar5 = *extraout_x8;
        func_0x0001078428c8();
        func_0x000107837bd4();
        if ((int)param_1 == 0) {
          extraout_x8[1] = lVar4;
        }
        else {
          extraout_x8[1] = lVar5;
          for (lVar4 = lVar7; lVar5 = *unaff_x20, plVar8 = unaff_x19, lVar4 != 0; lVar4 = lVar4 + -8
              ) {
            lVar6 = ((long *)((long)unaff_x19 + lVar4))[-1];
            func_0x0001078428c8();
            func_0x000107837bd4();
            plVar8 = (long *)((long)unaff_x19 + lVar4);
            if ((int)param_1 == 0) break;
            *(long *)((long)unaff_x19 + lVar4) = lVar6;
          }
          *plVar8 = lVar5;
        }
        lVar7 = lVar7 + 8;
      }
    }
  }
  else {
    func_0x0001078421ec();
    func_0x000107837a38();
    func_0x0001078422b4();
    func_0x000107837a38();
    func_0x000107843194();
    while (unaff_x20 != unaff_x22) {
      if (unaff_x25 == unaff_x21) goto LAB_107837d4c;
      func_0x00010784312c();
      func_0x000107837bd4();
      bVar2 = (int)param_1 == 0;
      lVar7 = unaff_x26;
      if (bVar2) {
        lVar7 = 0;
      }
      unaff_x25 = (long *)((long)unaff_x25 + lVar7);
      lVar7 = 0;
      if (bVar2) {
        lVar7 = unaff_x26;
      }
      unaff_x20 = (long *)((long)unaff_x20 + lVar7);
      lVar7 = unaff_x23;
      if (bVar2) {
        lVar7 = unaff_x24;
      }
      *unaff_x19 = lVar7;
      unaff_x19 = unaff_x19 + 1;
    }
    while (unaff_x25 != unaff_x21) {
      func_0x000107843174();
    }
  }
LAB_107837d54:
  func_0x000107842d04(unaff_x30);
  return;
LAB_107837d4c:
  while (unaff_x20 != unaff_x22) {
    func_0x000107842b08();
  }
  goto LAB_107837d54;
}



/* Entry: 107838634; end: 10783868b;  */

uint FUN_107838634(double param_1,double param_2,uint param_3)

{
  uint uVar1;
  
  func_0x000107835a3c();
  uVar1 = 0;
  if (param_1 < param_2) {
    uVar1 = param_3 ^ 1;
  }
  return uVar1;
}



/* Entry: 107838a3c; end: 107838a47;  */

void FUN_107838a3c(void)

{
  func_0x0001078423e8();
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 1078392e0; end: 107839367;  */

void FUN_1078392e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w8;
  uint uVar1;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 uVar2;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  
  func_0x0001078425f8();
  func_0x000107839208();
  func_0x0001078432b8();
  uVar1 = extraout_w9;
  if (extraout_w8 != extraout_w10) {
    uVar1 = (uint)(extraout_w10 < extraout_w8);
  }
  if (uVar1 == 1) {
    func_0x000107842a3c();
    uVar1 = extraout_w9_00;
    if (extraout_w8_00 != extraout_w10_00) {
      uVar1 = (uint)(extraout_w10_00 < extraout_w8_00);
    }
    if (uVar1 == 1) {
      uVar2 = *unaff_x19;
      *unaff_x19 = *param_3;
      *param_3 = uVar2;
      func_0x000107842894(*(undefined4 *)((long)unaff_x19 + 4));
      uVar1 = extraout_w9_01;
      if (extraout_w8_01 != extraout_w10_01) {
        uVar1 = (uint)(extraout_w10_01 < extraout_w8_01);
      }
      if (uVar1 == 1) {
        func_0x000107843228();
      }
    }
  }
  return;
}



/* Entry: 1078398d0; end: 1078398ef;  */

void FUN_1078398d0(void)

{
  func_0x000107842f30();
  func_0x0001078398b8();
  return;
}



/* Entry: 10783a76c; end: 10783a797;  */

long * FUN_10783a76c(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  
  for (; (plVar1 = param_2, param_1 != param_2 &&
         (plVar1 = param_1, *param_1 != param_3 && *param_1 != param_4)); param_1 = param_1 + 1) {
  }
  return plVar1;
}



/* Entry: 10783b574; end: 10783b5b3;  */

ulong FUN_10783b574(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 >> 0x3b == 0) {
    uVar2 = param_1[2] - *param_1 >> 4;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x7ffffffffffffff;
    }
    return uVar2;
  }
  FUN_107838a3c();
  lVar1 = 0;
  if (param_1[2] != param_1[1]) {
    lVar1 = (param_1[2] - param_1[1]) * 0x10 + -1;
  }
  return lVar1 - (param_1[5] + param_1[4]);
}



/* Entry: 10783ba74; end: 10783bab3;  */

bool FUN_10783ba74(long param_1,long param_2)

{
  do {
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != param_2 && param_1 != 0);
  return param_1 == param_2;
}



/* Entry: 10783bf04; end: 10783bf27;  */

void FUN_10783bf04(long param_1,long *param_2,long *param_3)

{
  while( true ) {
    if (param_2 == param_3) {
      return;
    }
    if (*param_2 == param_1) break;
    param_2 = param_2 + 1;
  }
  *param_2 = 0;
  return;
}



/* Entry: 10783c48c; end: 10783c4c3;  */

long FUN_10783c48c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x2a) * 8) + (uVar1 % 0x2a) * 0x60;
}



/* Entry: 10783c9cc; end: 10783cdcf;  */

void FUN_10783c9cc(double param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *puVar10;
  long lVar11;
  long extraout_x9;
  ulong uVar12;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  int iVar13;
  long extraout_x10;
  long lVar14;
  ulong *puVar15;
  int extraout_w11;
  long lVar16;
  ulong *puVar17;
  int extraout_w12;
  ulong *puVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 unaff_x30;
  double dVar23;
  double dVar24;
  undefined1 auStack_90 [32];
  
  lVar11 = *(long *)(param_2 + 0x20);
  if (8 < (ulong)(lVar11 - *(long *)(param_2 + 0x18))) {
    lVar4 = *(long *)(param_2 + 0x18) + 8;
LAB_10783ca28:
    lVar20 = lVar4;
    bVar5 = lVar20 == lVar11;
    if (!bVar5) {
      func_0x000107842e5c();
      lVar11 = extraout_x8;
      if (bVar5 && extraout_w11 == extraout_w12) goto LAB_10783ca58;
      puVar21 = (undefined8 *)(extraout_x9 + 8);
      lVar16 = 8;
      lVar14 = extraout_x10;
      goto LAB_10783ca74;
    }
  }
  func_0x000107842b58(unaff_x30);
  return;
LAB_10783ca58:
  lVar14 = extraout_x10 + 1;
  lVar4 = lVar20 + 8;
  if (lVar20 + 8 == extraout_x8) {
    puVar21 = (undefined8 *)(extraout_x9 + 0x10);
    lVar16 = 0x10;
LAB_10783ca74:
    lVar4 = lVar20 + 8;
    if (lVar14 != 0) {
      puVar1 = (undefined8 *)(extraout_x9 + lVar16 + ((long)((ulong)~(uint)lVar14 << 0x20) >> 0x1d))
      ;
      for (puVar22 = puVar1; puVar22 != puVar21; puVar22 = puVar22 + 1) {
        puVar3 = puVar1;
        if (*(long *)*puVar22 != 0) {
LAB_10783caac:
          while (puVar10 = puVar3, puVar10 != puVar21) {
            puVar18 = (ulong *)*puVar22;
            uVar8 = *puVar18;
            if (uVar8 == 0) break;
            puVar19 = (ulong *)*puVar10;
            if (puVar19 == puVar18 || *puVar19 == 0) goto LAB_10783cad8;
            if (uVar8 != *puVar19) {
LAB_10783cae8:
              uVar12 = (ulong)(uint)puVar18[1];
              while( true ) {
                puVar17 = (ulong *)puVar18[2];
                iVar13 = *(int *)((long)puVar18 + 0xc);
                bVar6 = (int)puVar17[1] == (int)uVar12;
                bVar7 = *(int *)((long)puVar17 + 0xc) == iVar13;
                bVar5 = (puVar17 != puVar18 && bVar6) && bVar7;
                if ((puVar17 == puVar18 || !bVar6) || !bVar7) break;
                uVar12 = puVar17[2];
                puVar18[2] = uVar12;
                *(ulong **)(uVar12 + 0x18) = puVar18;
                func_0x000107842ef4();
                puVar10 = extraout_x8_00;
                uVar12 = extraout_x9_00;
                if (bVar5) {
                  *(ulong **)(uVar8 + 0x48) = puVar18;
                }
              }
              while( true ) {
                puVar17 = (ulong *)puVar18[3];
                bVar6 = (int)puVar17[1] == (int)uVar12;
                bVar7 = *(int *)((long)puVar17 + 0xc) == iVar13;
                bVar5 = (puVar17 != puVar18 && bVar6) && bVar7;
                if ((puVar17 == puVar18 || !bVar6) || !bVar7) break;
                uVar12 = puVar17[3];
                puVar18[3] = uVar12;
                *(ulong **)(uVar12 + 0x10) = puVar18;
                func_0x000107842ef4();
                if (bVar5) {
                  *(ulong **)(uVar8 + 0x48) = puVar18;
                }
                iVar13 = *(int *)((long)puVar18 + 0xc);
                puVar10 = extraout_x8_01;
                uVar12 = extraout_x9_01;
              }
              if ((ulong *)puVar18[2] != puVar18) goto code_r0x00010783cb64;
              goto LAB_10783ccac;
            }
            puVar17 = (ulong *)puVar19[2];
            if ((ulong *)puVar18[2] == puVar19) {
              puVar18[2] = (ulong)puVar17;
              puVar17[3] = (ulong)puVar18;
            }
            else {
              if (puVar17 != puVar18) goto LAB_10783cae8;
              uVar8 = puVar19[3];
              puVar18[3] = uVar8;
              *(ulong **)(uVar8 + 0x10) = puVar18;
            }
            *puVar19 = 0;
            puVar19[2] = 0;
            puVar19[3] = 0;
            puVar3 = puVar1;
            if (*(ulong **)(*puVar18 + 0x48) == puVar19) {
              *(ulong **)(*puVar18 + 0x48) = puVar18;
            }
          }
        }
      }
      lVar11 = *(long *)(param_2 + 0x20);
    }
  }
  goto LAB_10783ca28;
code_r0x00010783cb64:
  uVar8 = *puVar19;
  puVar3 = puVar1;
  if (uVar8 != 0) {
    uVar12 = puVar19[1];
    while( true ) {
      puVar17 = (ulong *)puVar19[2];
      iVar13 = *(int *)((long)puVar19 + 0xc);
      if ((puVar17 == puVar19 || (int)puVar17[1] != (int)uVar12) ||
          *(int *)((long)puVar17 + 0xc) != iVar13) break;
      uVar8 = puVar17[2];
      puVar19[2] = uVar8;
      *(ulong **)(uVar8 + 0x18) = puVar19;
      *puVar17 = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      uVar8 = *puVar19;
      if (*(ulong **)(uVar8 + 0x48) == puVar17) {
        *(ulong **)(uVar8 + 0x48) = puVar19;
      }
    }
    while( true ) {
      puVar17 = (ulong *)puVar19[3];
      if ((puVar17 == puVar19 || (int)puVar17[1] != (int)uVar12) ||
          *(int *)((long)puVar17 + 0xc) != iVar13) break;
      uVar8 = puVar17[3];
      puVar19[3] = uVar8;
      *(ulong **)(uVar8 + 0x10) = puVar19;
      *puVar17 = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      uVar8 = *puVar19;
      if (*(ulong **)(uVar8 + 0x48) == puVar17) {
        *(ulong **)(uVar8 + 0x48) = puVar19;
      }
      iVar13 = *(int *)((long)puVar19 + 0xc);
    }
    puVar15 = (ulong *)puVar19[2];
    if (puVar15 == puVar19) {
LAB_10783ccac:
      func_0x00010783e1dc();
      puVar3 = puVar1;
      goto LAB_10783caac;
    }
    uVar12 = *puVar18;
    if (uVar12 != 0) {
      if ((*(int *)(puVar18[2] + 8) == (int)puVar17[1] &&
           *(int *)(puVar18[2] + 0xc) == *(int *)((long)puVar17 + 0xc)) ||
         ((int)puVar15[1] == *(int *)(puVar18[3] + 8) &&
          *(int *)((long)puVar15 + 0xc) == *(int *)(puVar18[3] + 0xc))) {
        if (uVar12 == uVar8) {
          puVar17 = puVar18;
          func_0x00010783e3a4(auStack_90,puVar18,puVar19);
          puVar9 = auStack_90;
          func_0x00010783e608();
          uVar8 = uVar12;
          dVar24 = param_1;
          if (puVar9 != (undefined1 *)0x0) {
            func_0x000107842c90();
            if (puVar17 != (ulong *)0x0) {
              lVar11 = param_2;
              func_0x00010783c0dc();
              *(ulong **)(lVar11 + 0x48) = puVar19;
              func_0x00010783e16c();
              func_0x00010783bb50(lVar11);
            }
            *(ulong **)(uVar12 + 0x48) = puVar18;
            func_0x00010783e16c(uVar12);
            goto LAB_10783caac;
          }
        }
        else {
          func_0x00010783e790(uVar12);
          dVar23 = param_1;
          func_0x00010783e790(uVar8);
          dVar24 = dVar23;
          func_0x00010783e3a4(auStack_90,puVar18,puVar19);
          puVar9 = auStack_90;
          func_0x00010783e608();
          if (puVar9 == (undefined1 *)0x0) {
            func_0x00010783e750(uVar12,param_2);
          }
          else {
            dVar24 = ABS(param_1);
            uVar2 = uVar8;
            if (dVar24 <= ABS(dVar23)) {
              uVar2 = uVar12;
              uVar12 = uVar8;
            }
            *(undefined1 **)(uVar12 + 0x48) = puVar9;
            func_0x00010783bb50(uVar12);
            func_0x00010783e16c(uVar12);
            func_0x00010783e1a8();
            uVar8 = uVar2;
            if (uVar12 < 3) {
              func_0x000107842758();
              func_0x00010783e1dc();
            }
          }
        }
        func_0x00010783e750(uVar8,param_2);
        param_1 = dVar24;
        goto LAB_10783caac;
      }
      if (uVar12 == uVar8) {
        FUN_10783e278(puVar18,puVar19,param_2);
      }
      else {
LAB_10783cad8:
        puVar3 = puVar10 + 1;
      }
    }
  }
  goto LAB_10783caac;
}



/* Entry: 10783db44; end: 10783dbcb;  */

void FUN_10783db44(void)

{
  func_0x000107842f30();
  func_0x00010783db2c();
  return;
}



/* Entry: 10783e278; end: 10783e3a3;  */

long FUN_10783e278(double param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *param_2;
  if (lVar7 == *param_3) {
    func_0x000107842888();
    lVar5 = param_2[3];
    lVar6 = param_3[3];
    param_2[3] = lVar6;
    *(long **)(lVar6 + 0x10) = param_2;
    param_3[3] = lVar5;
    *(long **)(lVar5 + 0x10) = param_3;
    func_0x00010783c0dc();
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010783be1c();
    dVar8 = param_1;
    func_0x00010783be1c();
    dVar10 = ABS(param_1);
    dVar12 = ABS(dVar8);
    dVar9 = dVar8;
    uVar2 = unaff_x20;
    puVar3 = &uStack_80;
    puVar4 = &uStack_70;
    if (dVar10 <= dVar12) {
      dVar9 = param_1;
      uVar2 = unaff_x21;
      puVar3 = &uStack_70;
      param_1 = dVar8;
      puVar4 = &uStack_80;
      unaff_x21 = unaff_x20;
    }
    *(undefined8 *)(lVar7 + 0x48) = unaff_x21;
    uVar1 = uStack_58;
    if (dVar10 <= dVar12) {
      uVar1 = uStack_60;
    }
    uVar11 = *puVar4;
    *(undefined8 *)(lVar7 + 0x20) = puVar4[1];
    *(undefined8 *)(lVar7 + 0x18) = uVar11;
    *(double *)(lVar7 + 0x10) = param_1;
    *(undefined8 *)(lVar7 + 8) = uVar1;
    uVar1 = uStack_60;
    if (dVar10 <= dVar12) {
      uVar1 = uStack_58;
    }
    *(bool *)(lVar7 + 0x58) = param_1 <= 0.0;
    uVar11 = *puVar3;
    *(undefined8 *)(param_4 + 0x20) = puVar3[1];
    *(undefined8 *)(param_4 + 0x18) = uVar11;
    *(undefined8 *)(param_4 + 0x48) = uVar2;
    *(double *)(param_4 + 0x10) = dVar9;
    *(undefined8 *)(param_4 + 8) = uVar1;
    *(bool *)(param_4 + 0x58) = dVar9 <= 0.0;
    func_0x00010783bb50(param_4);
  }
  else {
    param_4 = 0;
  }
  return param_4;
}



/* Entry: 10783ee20; end: 10783ee4f;  */

void FUN_10783ee20(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078425f8();
  *unaff_x19 = 0;
  func_0x00010783efa4();
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19[1];
  return;
}



/* Entry: 10783f400; end: 10783f5d7;  */

/* WARNING: Possible PIC construction at 0x00010783f9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010783f9cc) */
/* WARNING: Removing unreachable block (ram,0x00010783f9ec) */

void FUN_10783f400(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar14;
  long lVar15;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long extraout_x10;
  long extraout_x10_00;
  long lVar16;
  long extraout_x10_01;
  long extraout_x10_02;
  uint extraout_w11;
  uint uVar17;
  uint extraout_w11_00;
  long lVar18;
  ulong uVar19;
  long *unaff_x21;
  long *plVar20;
  long *unaff_x22;
  long unaff_x23;
  long *plVar21;
  long *plVar22;
  undefined8 *unaff_x29;
  long *unaff_x30;
  undefined8 *in_stack_00000070;
  long *in_stack_00000078;
  
  func_0x0001078430f4();
  cVar5 = SBORROW8((long)param_3,2);
  cVar6 = (long)((long)param_3 + -2) < 0;
  bVar7 = param_3 == (long *)0x2;
  if (param_3 < (long *)0x2) {
    return;
  }
  if (bVar7) {
    lVar13 = param_2[-1];
    lVar15 = *param_1;
    if (*(int *)(lVar13 + 0xc) == *(int *)(lVar15 + 0xc)) {
      if (*(int *)(lVar15 + 8) <= *(int *)(lVar13 + 8)) {
        return;
      }
    }
    else if (*(int *)(lVar13 + 0xc) <= *(int *)(lVar15 + 0xc)) {
      return;
    }
    *param_1 = lVar13;
    param_2[-1] = lVar15;
    return;
  }
  plVar8 = param_1;
  plVar9 = param_2;
  plVar12 = unaff_x30;
  func_0x000107842b4c();
  if (!bVar7 && cVar6 == cVar5) {
    func_0x000107842190();
    if (bVar7 || cVar6 != cVar5) {
      func_0x00010783f5d8();
      func_0x0001078422fc();
      func_0x00010783f5d8();
      plVar8 = unaff_x21 + unaff_x23;
      plVar9 = unaff_x22;
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
            *param_1 = *plVar9;
            param_1 = param_1 + 1;
          }
          return;
        }
        cVar5 = SBORROW8((long)plVar9,(long)plVar8);
        cVar6 = (long)plVar9 - (long)plVar8 < 0;
        bVar7 = plVar9 == plVar8;
        if (bVar7) break;
        func_0x000107842d1c();
        if (bVar7) {
          func_0x0001078432cc();
          plVar8 = extraout_x8_00;
          plVar9 = extraout_x9_00;
          lVar13 = extraout_x10_00;
          uVar17 = extraout_w11;
        }
        else {
          uVar17 = (uint)(!bVar7 && cVar6 == cVar5);
          plVar8 = extraout_x8;
          plVar9 = extraout_x9;
          lVar13 = extraout_x10;
        }
        bVar7 = uVar17 == 0;
        plVar12 = plVar9;
        if (bVar7) {
          plVar12 = unaff_x21;
        }
        lVar15 = 0;
        if (bVar7) {
          lVar15 = lVar13;
        }
        unaff_x21 = (long *)((long)unaff_x21 + lVar15);
        if (bVar7) {
          lVar13 = 0;
        }
        plVar9 = (long *)((long)plVar9 + lVar13);
        *param_1 = *plVar12;
        param_1 = param_1 + 1;
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_10783f400();
    func_0x000107842314();
    FUN_10783f400();
    func_0x00010784220c();
    func_0x000107842f84();
code_r0x00010783f7c4:
    func_0x0001078427d4();
    plVar11 = param_3;
    plVar20 = plVar8;
    plVar10 = plVar9;
    plVar22 = unaff_x22;
    lVar13 = param_4;
    in_stack_00000070 = unaff_x29;
    in_stack_00000078 = unaff_x30;
code_r0x00010783f7f0:
    if (plVar22 != (long *)0x0) {
      if (param_7 < (long)plVar22 && param_7 < lVar13) {
        lVar15 = 0;
        plVar14 = plVar20;
        plVar8 = plVar20;
        do {
          param_4 = lVar13 - lVar15;
          if (param_4 == 0) {
            return;
          }
          lVar16 = *plVar10;
          lVar18 = plVar20[lVar15];
          if (*(int *)(lVar16 + 0xc) == *(int *)(lVar18 + 0xc)) {
            if (*(int *)(lVar16 + 8) < *(int *)(lVar18 + 8)) goto code_r0x00010783f860;
          }
          else if (*(int *)(lVar18 + 0xc) < *(int *)(lVar16 + 0xc)) goto code_r0x00010783f860;
          plVar8 = plVar8 + 1;
          lVar15 = lVar15 + 1;
          plVar14 = plVar14 + 1;
        } while( true );
      }
      plVar8 = plVar12;
      plVar9 = plVar20;
      if ((long)plVar22 < lVar13) {
        for (lVar13 = 0; (long *)((long)plVar10 + lVar13) != plVar11; lVar13 = lVar13 + 8) {
          *(long *)((long)plVar12 + lVar13) = *(long *)((long)plVar10 + lVar13);
        }
        plVar8 = (long *)((long)plVar12 + lVar13);
        while (plVar11 = plVar11 + -1, plVar8 != plVar12) {
          if (plVar10 == plVar20) {
            while (plVar8 != plVar12) {
              plVar8 = plVar8 + -1;
              *plVar11 = *plVar8;
              plVar11 = plVar11 + -1;
            }
            return;
          }
          lVar13 = plVar10[-1];
          lVar15 = plVar8[-1];
          iVar2 = *(int *)(lVar15 + 0xc);
          iVar3 = *(int *)(lVar13 + 0xc);
          if (iVar2 == iVar3) {
            bVar7 = *(int *)(lVar15 + 8) < *(int *)(lVar13 + 8);
          }
          else {
            bVar7 = iVar3 < iVar2;
          }
          plVar9 = plVar8;
          plVar14 = plVar10 + -1;
          plVar22 = plVar10;
          if (!bVar7) {
            plVar9 = plVar8 + -1;
            plVar14 = plVar10;
            plVar22 = plVar8;
          }
          plVar10 = plVar14;
          *plVar11 = plVar22[-1];
          plVar8 = plVar9;
        }
      }
      else {
        for (; plVar9 != plVar10; plVar9 = plVar9 + 1) {
          *plVar8 = *plVar9;
          plVar8 = plVar8 + 1;
        }
        for (; plVar8 != plVar12; plVar12 = (long *)((long)plVar12 + lVar15)) {
          cVar5 = SBORROW8((long)plVar10,(long)plVar11);
          cVar6 = (long)plVar10 - (long)plVar11 < 0;
          bVar7 = plVar10 == plVar11;
          if (bVar7) {
            func_0x0001078431f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)();
            return;
          }
          func_0x000107842d1c();
          if (bVar7) {
            func_0x0001078432cc();
            plVar8 = extraout_x9_02;
            lVar13 = extraout_x10_02;
            uVar17 = extraout_w11_00;
          }
          else {
            uVar17 = (uint)(!bVar7 && cVar6 == cVar5);
            plVar8 = extraout_x9_01;
            lVar13 = extraout_x10_01;
          }
          lVar15 = lVar13;
          plVar9 = plVar10;
          if (uVar17 == 0) {
            lVar15 = 0;
            plVar9 = plVar12;
          }
          plVar10 = (long *)((long)plVar10 + lVar15);
          lVar15 = 0;
          if (uVar17 == 0) {
            lVar15 = lVar13;
          }
          *plVar20 = *plVar9;
          plVar20 = plVar20 + 1;
        }
      }
    }
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar13 = 0;
  plVar8 = param_1;
  do {
    plVar9 = plVar8 + 1;
    if (plVar9 == param_2) {
      return;
    }
    lVar15 = *plVar8;
    lVar16 = plVar8[1];
    iVar2 = *(int *)(lVar16 + 0xc);
    lVar18 = lVar13;
    if (iVar2 == *(int *)(lVar15 + 0xc)) {
      if (*(int *)(lVar16 + 8) < *(int *)(lVar15 + 8)) {
LAB_10783f4b0:
        for (; *(long *)((long)param_1 + lVar18 + 8) = lVar15, plVar12 = param_1, lVar18 != 0;
            lVar18 = lVar18 + -8) {
          lVar15 = *(long *)((long)param_1 + lVar18 + -8);
          if (iVar2 == *(int *)(lVar15 + 0xc)) {
            plVar12 = plVar8;
            if (*(int *)(lVar15 + 8) <= *(int *)(lVar16 + 8)) break;
          }
          else if (iVar2 <= *(int *)(lVar15 + 0xc)) {
            plVar12 = (long *)((long)param_1 + lVar18);
            break;
          }
          plVar8 = plVar8 + -1;
        }
        *plVar12 = lVar16;
      }
    }
    else if (*(int *)(lVar15 + 0xc) < iVar2) goto LAB_10783f4b0;
    lVar13 = lVar13 + 8;
    plVar8 = plVar9;
  } while( true );
code_r0x00010783f860:
  if (param_4 < (long)plVar22) {
    unaff_x22 = (long *)((long)plVar22 / 2);
    plVar21 = plVar10 + (long)unaff_x22;
    uVar4 = (long)plVar10 - (long)plVar14 >> 3;
    plVar9 = plVar8;
    while (uVar4 != 0) {
      uVar19 = uVar4 >> 1;
      lVar16 = plVar9[uVar19];
      iVar2 = *(int *)(*plVar21 + 0xc);
      iVar3 = *(int *)(lVar16 + 0xc);
      if (iVar2 == iVar3) {
        bVar7 = *(int *)(*plVar21 + 8) < *(int *)(lVar16 + 8);
      }
      else {
        bVar7 = iVar3 < iVar2;
      }
      uVar1 = uVar4 + ~uVar19;
      uVar4 = uVar19;
      if (!bVar7) {
        uVar4 = uVar1;
        plVar9 = plVar9 + uVar19 + 1;
      }
    }
    param_4 = (long)plVar9 - (long)plVar14 >> 3;
  }
  else {
    if (lVar13 + -1 == lVar15) {
      plVar20[lVar15] = lVar16;
      *plVar10 = lVar18;
      return;
    }
    param_4 = param_4 / 2;
    plVar9 = plVar8 + param_4;
    uVar4 = (long)plVar11 - (long)plVar10 >> 3;
    plVar14 = plVar10;
    while (plVar21 = plVar14, uVar4 != 0) {
      uVar19 = uVar4 >> 1;
      lVar16 = plVar21[uVar19];
      iVar2 = *(int *)(lVar16 + 0xc);
      iVar3 = *(int *)(plVar20[param_4 + lVar15] + 0xc);
      if (iVar2 == iVar3) {
        bVar7 = *(int *)(lVar16 + 8) < *(int *)(plVar20[param_4 + lVar15] + 8);
      }
      else {
        bVar7 = iVar3 < iVar2;
      }
      uVar4 = uVar4 + ~uVar19;
      plVar14 = plVar21 + uVar19 + 1;
      if (!bVar7) {
        uVar4 = uVar19;
        plVar14 = plVar21;
      }
    }
    unaff_x22 = (long *)((long)plVar21 - (long)plVar10 >> 3);
  }
  param_3 = plVar9;
  func_0x00010783e04c(plVar9,plVar10,plVar21);
  if (param_4 + (long)unaff_x22 < (long)plVar22 + ((lVar13 - (param_4 + (long)unaff_x22)) - lVar15))
  goto code_r0x00010783f9a4;
  func_0x00010783f7c4(param_3,plVar21,plVar11,(lVar13 - param_4) - lVar15,
                      (long)plVar22 - (long)unaff_x22,plVar12,param_7);
  plVar11 = param_3;
  plVar20 = plVar8;
  plVar10 = plVar9;
  plVar22 = unaff_x22;
  lVar13 = param_4;
  goto code_r0x00010783f7f0;
code_r0x00010783f9a4:
  unaff_x30 = (long *)&UNK_10783f9cc;
  unaff_x29 = &stack0x00000070;
  goto code_r0x00010783f7c4;
}



/* Entry: 10783fd1c; end: 10783fd3b;  */

bool FUN_10783fd1c(long param_1)

{
  ulong uVar1;
  double dVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    return true;
  }
  dVar2 = (double)func_0x00010783e790();
  if (NAN(dVar2)) {
    return false;
  }
  uVar3 = (ulong)-ABS(dVar2) ^ ((ulong)-ABS(dVar2) ^ -(long)dVar2) & -(ulong)((long)dVar2 < 0);
  uVar1 = uVar3 + 0x8000000000000000;
  if (uVar3 < 0x8000000000000000 || uVar3 + 0x8000000000000000 == 0) {
    uVar1 = 0x8000000000000000 - uVar3;
  }
  return uVar1 < 5;
}



/* Entry: 10784063c; end: 10784065f;  */

void FUN_10784063c(void)

{
  func_0x000107842734();
  func_0x000107840660();
  return;
}



/* Entry: 107840cd4; end: 107840d07;  */

void FUN_107840cd4(long *param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x000107842c30();
  lVar1 = *unaff_x19;
  *param_1 = lVar1;
  param_1[1] = (long)unaff_x19;
  *(long **)(lVar1 + 8) = param_1;
  *unaff_x19 = (long)param_1;
  unaff_x19[2] = unaff_x19[2] + 1;
  return;
}



/* Entry: 10784132c; end: 10784152f;  */

void FUN_10784132c(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010066015c();
  uVar4 = *(ulong *)(param_2 + 0x10);
  func_0x0001078410c0();
  unaff_x20[1] = uVar4;
  uVar5 = unaff_x19[1];
  if ((uVar5 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar5 < (float)(unaff_x19[3] + 1))) {
    func_0x000107840afc();
    uVar5 = unaff_x19[1];
  }
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar9 = uVar7 & uVar4;
  }
  else {
    uVar9 = uVar4;
    if (uVar5 <= uVar4) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar4 / uVar5;
      }
      uVar9 = uVar4 - uVar9 * uVar5;
    }
  }
  lVar6 = *unaff_x19;
  plVar10 = *(long **)(lVar6 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    bVar11 = false;
    bVar1 = 0;
    do {
      plVar8 = plVar10;
      plVar10 = (long *)*plVar8;
      if (plVar10 == (long *)0x0) break;
      uVar12 = plVar10[1];
      if ((uVar5 & uVar7) == 0) {
        uVar13 = uVar12 & uVar7;
      }
      else {
        uVar13 = uVar12;
        if (uVar5 <= uVar12) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar12 / uVar5;
          }
          uVar13 = uVar12 - uVar13 * uVar5;
        }
      }
      if (uVar13 != uVar9) break;
      if (uVar12 == uVar4) {
        bVar2 = plVar10[2] == unaff_x20[2];
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar11;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar11 = (bool)(bVar11 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  uVar4 = unaff_x20[1];
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
    if (plVar8 == (long *)0x0) goto LAB_1078414c8;
LAB_10784148c:
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_10784151c;
    uVar9 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 == uVar4) goto LAB_10784151c;
  }
  else {
    if (uVar5 <= uVar4) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar9 * uVar5;
    }
    if (plVar8 != (long *)0x0) goto LAB_10784148c;
LAB_1078414c8:
    plVar10 = unaff_x19 + 2;
    *unaff_x20 = *plVar10;
    *plVar10 = (long)unaff_x20;
    *(long **)(lVar6 + uVar4 * 8) = plVar10;
    if (*unaff_x20 == 0) goto LAB_10784151c;
    uVar9 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar4 * uVar5;
    }
  }
  *(long **)(lVar6 + uVar9 * 8) = unaff_x20;
LAB_10784151c:
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 107841a90; end: 107841abb;  */

long * FUN_107841a90(long *param_1)

{
  func_0x000107841abc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107841c4c; end: 107841c6b;  */

long * FUN_107841c4c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000107841c94();
    func_0x0001078425f8();
    func_0x000107842a90();
    func_0x000107841d1c();
    func_0x00010784214c();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 107841e8c; end: 107841ebf;  */

void FUN_107841e8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107297530(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x18;
  return;
}



/* Entry: 107842134; end: 10784214b;  */

void FUN_107842134(void)

{
  func_0x000107297530();
  return;
}



/* Entry: 107845084; end: 10784516f;  */

void FUN_107845084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107847ea8();
  if ((bool)in_ZR) {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      func_0x0001074f195c(unaff_x19 + 0xe8);
      __ZdlPv(*(undefined8 *)(unaff_x19 + 0xe8));
      *(undefined8 *)(unaff_x19 + 0xe8) = 0;
      *(undefined8 *)(unaff_x19 + 0xf0) = 0;
      *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    }
    func_0x000107847f14();
  }
  else {
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    func_0x000107847f14();
    *(undefined1 *)(unaff_x19 + 0x100) = 1;
  }
  *(undefined8 *)(unaff_x19 + 200) = param_4;
  func_0x000107476efc(unaff_x19 + 0x228,param_3);
  iVar1 = *(int *)(unaff_x19 + 0xc0);
  if (iVar1 == 0) {
    func_0x000107847ed8();
    func_0x000107847e4c();
  }
  else if (iVar1 == 1 || iVar1 == 3) {
    func_0x0001078481c0();
  }
  return;
}



/* Entry: 1078466f8; end: 1078467d3;  */

void FUN_1078466f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 0xd0) == param_5) {
    func_0x0001078476a0(param_1 + 0x1b0);
    func_0x0001078476a0(param_1 + 0x1d8,param_3);
    plVar1 = (long *)(param_1 + 0x200);
    func_0x0001072f1630(plVar1);
    uVar3 = *param_4;
    *param_4 = 0;
    func_0x0001072bb2b4(plVar1,uVar3);
    lVar5 = param_4[2];
    *(undefined8 *)(param_1 + 0x208) = param_4[1];
    param_4[1] = 0;
    lVar4 = param_4[3];
    *(long *)(param_1 + 0x218) = lVar4;
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_4 + 4);
    *(long *)(param_1 + 0x210) = lVar5;
    if (lVar4 != 0) {
      uVar6 = *(ulong *)(lVar5 + 8);
      uVar7 = *(ulong *)(param_1 + 0x208);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar7 - 1 & uVar6;
      }
      else if (uVar7 <= uVar6) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar2 * uVar7;
      }
      *(long *)(*plVar1 + uVar6 * 8) = param_1 + 0x210;
      param_4[2] = 0;
      param_4[3] = 0;
    }
    func_0x00010747d634(param_1 + 0x148);
    if (*(int *)(param_1 + 0xc0) == 1) {
      if (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120)) {
        *(undefined4 *)(param_1 + 0xc0) = 3;
      }
    }
    else if ((*(int *)(param_1 + 0xc0) == 0) &&
            (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120))) {
      func_0x000107848088();
      func_0x000107847e4c();
    }
    return;
  }
  return;
}



/* Entry: 107846e5c; end: 107846e97;  */

long * FUN_107846e5c(long *param_1)

{
  if (param_1[2] != 0) {
    func_0x000107846e98(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 107847040; end: 107847047;  */

void FUN_107847040(void)

{
  return;
}



/* Entry: 1078471e4; end: 107847293;  */

undefined8 * FUN_1078471e4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  
  func_0x000107847e84();
  func_0x000107847c74();
  func_0x000107847dc4();
  func_0x000107847dec();
  func_0x000107848024();
  func_0x000107847ec4();
  func_0x0001072df7b4();
  func_0x000107847f70();
  func_0x000107847f48();
  func_0x000107847c98();
  func_0x00010743fa44();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847c84(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847d28();
  func_0x000107847e84();
  func_0x000107847c74();
  func_0x000107847dc4();
  func_0x000107847dec();
  func_0x000107848024();
  func_0x000107847ec4();
  func_0x0001072df7b4();
  func_0x0001072a0318();
  func_0x000107847f70();
  puVar2 = param_1;
  func_0x000107847f48();
  func_0x000107847c98();
  func_0x00010743fa44();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847c84(extraout_x8_00);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107847f80();
  func_0x000107847f30();
  func_0x000107847d28();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  puVar3 = puVar2;
  func_0x0001078481ac();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = puVar3[3];
  puVar1[4] = puVar3[4];
  puVar1[3] = uVar4;
  puVar1[5] = puVar3[5];
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uVar4 = puVar3[6];
  puVar1[7] = puVar3[7];
  puVar1[6] = uVar4;
  puVar1[8] = puVar3[8];
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  uVar4 = puVar3[9];
  puVar1[10] = puVar3[10];
  puVar1[9] = uVar4;
  puVar1[0xb] = puVar3[0xb];
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  func_0x0001072638b4(puVar1 + 0xc,puVar3 + 0xc);
  func_0x000107466dac(param_1 + 0x11,puVar2 + 0x11);
  func_0x000107466dac(param_1 + 0x14,puVar2 + 0x14);
  uVar4 = puVar2[0x17];
  param_1[0x18] = puVar2[0x18];
  param_1[0x17] = uVar4;
  return param_1;
}



/* Entry: 1078475c8; end: 10784760f;  */

void FUN_1078475c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000107568744();
  *(undefined8 *)(param_1 + 0x28) = *param_3;
  return;
}



/* Entry: 107847794; end: 1078477a7;  */

void FUN_107847794(void)

{
  func_0x00010784782c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847958; end: 107847963;  */

void FUN_107847958(void)

{
  func_0x0001078480c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107847a00; end: 107847a2b;  */

undefined8 * FUN_107847a00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e16e8;
  func_0x0001078312d4(param_1 + 4);
  return param_1;
}



/* Entry: 107847b2c; end: 107847b3f;  */

void FUN_107847b2c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078481cc; end: 10784866b;  */

/* WARNING: Possible PIC construction at 0x000107848660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107848664) */

void FUN_1078481cc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar10;
  undefined8 *unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  
  func_0x0001078496c0();
  uStack_70 = extraout_x8;
  func_0x00010784a864();
  *param_1 = &PTR_DAT_1109e1838;
  param_1[0x25] = param_1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_1078489c8(param_4,0);
  func_0x000107527270(unaff_x19 + 0x27,*param_3);
  puVar7 = unaff_x19 + 0x25;
  lVar9 = *(long *)(param_3 + 6);
  uVar11 = *(undefined8 *)(param_3 + 4);
  unaff_x19[0x67] = *(undefined8 *)(param_3 + 6);
  unaff_x19[0x66] = uVar11;
  if (lVar9 != 0) {
    do {
      func_0x00010784969c();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(unaff_x19 + 0x6a) = 0;
  unaff_x19[0x69] = 0;
  unaff_x19[0x68] = 0;
  func_0x000104c2fe00(unaff_x19 + 0x6b,param_6);
  unaff_x19[0x72] = param_5;
  unaff_x19[0x73] = param_7;
  plVar6 = (long *)unaff_x19[0x66];
  if (plVar6 == (long *)0x0) {
    func_0x000107849738();
    func_0x0001078489f8(&ppuStack_90);
    func_0x0001073787c0(auStack_b0,&ppuStack_90);
    func_0x000107849768();
    func_0x000107849788();
    func_0x000107849730();
    iVar4 = (int)&ppuStack_90;
  }
  else {
    (**(code **)(*plVar6 + 0x20))();
    if ((int)plVar6 == 0) {
      iVar4 = 0;
      if (*(char *)(unaff_x19 + 0x26) == '\x01') {
        func_0x000107848a40();
        iVar4 = (int)puVar7;
      }
      goto LAB_1078483ac;
    }
    plVar6 = (long *)unaff_x19[0x66];
    if (plVar6 != (long *)0x0) {
      *(undefined1 *)((long)unaff_x19 + 0x139) = 1;
      ppuStack_90 = &PTR_DAT_1109e1938;
      uStack_88 = 0;
      pppuStack_78 = &ppuStack_90;
      puStack_80 = puVar7;
      (**(code **)(*plVar6 + 0x10))(&plStack_c8,plVar6,unaff_x19 + 0x27,&ppuStack_90);
      plVar6 = plStack_c8;
      plStack_c8 = (long *)0x0;
      lVar9 = unaff_x19[0x68];
      unaff_x19[0x68] = plVar6;
      if (lVar9 != 0) {
        func_0x000107849690();
        plVar6 = plStack_c8;
        plStack_c8 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          func_0x000107849690();
        }
      }
      iVar4 = (int)&ppuStack_90;
      func_0x0001072ad0c8();
      goto LAB_1078483ac;
    }
    func_0x000107849738();
    func_0x0001078489f8(&stack0xffffffffffffff00);
    func_0x0001073787c0(auStack_b0,&stack0xffffffffffffff00);
    func_0x000107849768();
    func_0x000107849788();
    func_0x000107849730();
    iVar4 = (int)&stack0xffffffffffffff00;
  }
  __ZNSt13exception_ptrD1Ev();
LAB_1078483ac:
  func_0x0001073af260();
  puVar7 = unaff_x19 + 0x74;
  func_0x00010725b034(puVar7);
  unaff_x19[0x77] = 0;
  unaff_x19[0x76] = 0;
  unaff_x19[0x79] = 0;
  unaff_x19[0x78] = 0;
  unaff_x19[0x7a] = puVar7;
  unaff_x19[0x7b] = 0;
  func_0x00010785f1f4();
  uVar5 = iVar4 + 0x480;
  func_0x00010724e330();
  uVar3 = ((uVar5 ^ 0xffffffff) & 0x101) == 0;
  if ((bool)uVar3) {
    func_0x00010784a024(&plStack_c8,*(undefined8 *)(param_5 + 0x20),param_6,unaff_x19 + 2);
  }
  else {
    func_0x00010784b550(&plStack_c8,*(undefined8 *)(param_5 + 0x18),param_6,unaff_x19 + 2);
  }
  lVar9 = lStack_c0;
  plVar6 = plStack_c8;
  plStack_d8 = plStack_c8;
  lStack_d0 = lStack_c0;
  plStack_c8 = (long *)0x0;
  lStack_c0 = 0;
  func_0x00010724b8b8(&plStack_c8);
  puVar10 = (undefined8 *)unaff_x19[0x74];
  uVar12 = puVar10[1];
  uVar11 = *puVar10;
  if (puVar10[1] != 0) {
    plVar8 = (long *)(puVar10[1] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar10 = (undefined8 *)((ulong)&stack0xffffffffffffff00 | 8);
  plVar8 = (long *)0x88;
  __Znwm();
  plStack_d8 = (long *)0x0;
  lStack_d0 = 0;
  *plVar8 = (long)plVar6;
  plVar8[1] = lVar9;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x00010724b408(plVar8 + 2);
  lVar9 = *plVar8;
  plVar8[0x10] = (long)(plVar8 + 2);
  plStack_c8 = plVar8 + 4;
  plVar6 = (long *)plVar8[2];
  lStack_b8 = plVar6[1];
  lStack_c0 = *plVar6;
  if (plVar6[1] != 0) {
    do {
      func_0x00010784969c();
    } while (extraout_w10_00 != 0);
  }
  *puVar10 = 0;
  puVar10[1] = 0;
  uStack_88 = uVar11;
  puStack_80 = (undefined8 *)uVar12;
  func_0x0001078497d4();
  func_0x00010724ae28((ulong)&ppuStack_90 | 8);
  func_0x00010724ae28(&lStack_c0);
  func_0x0001073ada24(*(undefined8 *)plVar8[0x10],lVar9);
  func_0x00010724b8b8(&uStack_a0);
  uStack_e0 = 0;
  func_0x0001078493e4(unaff_x19 + 0x76,plVar8);
  func_0x0001078493c0(&uStack_e0);
  func_0x00010724ae28(puVar10);
  func_0x00010724b8b8(&plStack_d8);
  func_0x0001078496ac(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000107849730();
    __ZNSt13exception_ptrD1Ev(&stack0xffffffffffffff00);
    func_0x000104c2f714(unaff_x19 + 0x6b);
    func_0x0001072aca78(puVar7);
    func_0x00010724bd50(plVar8);
    func_0x00010724b374(unaff_x19 + 0x27);
    *unaff_x19 = &PTR_DAT_1109e1d40;
    func_0x00010750bcd8(unaff_x19 + 0x13);
    func_0x000104c2f714(unaff_x19 + 4);
    return;
  }
  return;
}



/* Entry: 1078489c8; end: 1078489f7;  */

undefined1 * FUN_1078489c8(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  
  if ((ulong)((param_1[1] - *param_1) / 0x38) <= param_2) {
    func_0x000107848b8c();
    puVar1 = auStack_40;
    __ZNSt13runtime_errorC1EPKc(auStack_40,&UNK_10f42b2b5);
    func_0x0001052b2bd0(extraout_x8,auStack_40);
    __ZNSt13runtime_errorD1Ev(auStack_40);
    return puVar1;
  }
  return (undefined1 *)(*param_1 + param_2 * 0x38);
}



/* Entry: 107848cb8; end: 107848cc3;  */

undefined ** FUN_107848cb8(void)

{
  return &PTR_DAT_1109e1998;
}



/* Entry: 1078492e0; end: 1078492eb;  */

undefined ** FUN_1078492e0(void)

{
  return &PTR_DAT_1109e1a18;
}



/* Entry: 1078494ac; end: 1078494af;  */

void FUN_1078494ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1a38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078495c8; end: 1078495ef;  */

void FUN_1078495c8(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001078495ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107849690; end: 1078497d3;  */

void FUN_107849690(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107849698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 107849e20; end: 107849e23;  */

undefined8 * FUN_107849e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1bf8;
  func_0x000107849df0(param_1 + 4);
  return param_1;
}



/* Entry: 107849f1c; end: 10784a023;  */

void FUN_107849f1c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107849f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10784a580; end: 10784a587;  */

void FUN_10784a580(void)

{
  return;
}



/* Entry: 10784a754; end: 10784a767;  */

void FUN_10784a754(void)

{
  func_0x00010784a7e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784a9f0; end: 10784ab1f;  */

void FUN_10784a9f0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 in_x4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 auStack_e0 [6];
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [56];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_e0[0] = 0x45;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  ppuStack_c0 = &PTR_DAT_110996720;
  uStack_b8 = 0;
  uStack_a0 = 0x45;
  uStack_98 = 0;
  uStack_94 = 1;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x000104c2fe00(auStack_70);
  puVar1 = auStack_e0;
  func_0x000107371bc4(puVar1,&UNK_10f42b2fb,auStack_70);
  func_0x0001072a0318();
  func_0x0001072bbe40();
  uStack_f0 = *param_1;
  uStack_e8 = 3;
  func_0x00010743f9dc(param_1,puVar1,in_x4,&uStack_f0,7);
  func_0x000104c2f714(auStack_70);
  puVar1 = auStack_e0;
  func_0x000107262330(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_70);
  func_0x000107262330(auStack_e0);
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 10784ae48; end: 10784aebb;  */

void FUN_10784ae48(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = param_2;
  func_0x000107517028();
  if (param_2 + 8 != lVar1) {
    func_0x00010784aebc(param_1,lVar1 + 0x30);
    func_0x000107517d44(param_2,lVar1);
    func_0x00010784ac9c(param_2 + 0x18,param_3);
  }
  return;
}



/* Entry: 10784b1a4; end: 10784b1cb;  */

long FUN_10784b1a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010784b1cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10784b468; end: 10784b50f;  */

void FUN_10784b468(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010784b344(auStack_50,param_2 + 4);
  func_0x00010048a6c8(auStack_38,auStack_50,&UNK_10f42b313);
  func_0x00010784b464(auStack_68,*param_2);
  func_0x00010533a9c0(param_1,auStack_38,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x00010784b510();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  return;
}



/* Entry: 10784b91c; end: 10784b95f;  */

undefined8 * FUN_10784b91c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1e38;
  func_0x000107313fcc(param_1 + 0x10);
  func_0x0001074f9458(param_1 + 0xe);
  func_0x000104c2f714(param_1 + 3);
  return param_1;
}



/* Entry: 10784be90; end: 10784becb;  */

long FUN_10784be90(long param_1)

{
  func_0x000107269e3c(param_1 + 0x178);
  func_0x0001006393ec(param_1 + 0x148);
  func_0x000107269e60(param_1 + 0x58);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10784c000; end: 10784c05b;  */

void FUN_10784c000(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x280);
  if (*(long *)(param_1 + 0x260) != 0) {
    func_0x00010784c11c((undefined8 *)(param_1 + 0x260));
    __ZdlPv(*(undefined8 *)(param_1 + 0x260));
  }
  func_0x00010724b8b8(param_1 + 0x250);
  func_0x000107276ba4(param_1 + 0x1a8);
  func_0x000107276ba4(param_1 + 0xf8);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x000107266968();
  }
  return;
}



/* Entry: 10784c194; end: 10784c22f;  */

/* WARNING: Possible PIC construction at 0x00010784c1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010784c218) */
/* WARNING: Removing unreachable block (ram,0x00010784c22c) */
/* WARNING: Removing unreachable block (ram,0x00010784c200) */

undefined1 * FUN_10784c194(void)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  func_0x00010784d84c();
  uStack_58 = 1;
  func_0x00010784c258();
  return auStack_60;
}



/* Entry: 10784c358; end: 10784c377;  */

void FUN_10784c358(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784cbc4; end: 10784cc0f;  */

long FUN_10784cbc4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 400) {
    func_0x00010784cc10(param_3,param_1);
    param_3 = param_3 + 400;
    lVar1 = lVar1 + 400;
  }
  return lVar1;
}



/* Entry: 10784d30c; end: 10784d757;  */

/* WARNING: Possible PIC construction at 0x00010784d4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010784d6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010784d4bc) */
/* WARNING: Removing unreachable block (ram,0x00010784d4d8) */
/* WARNING: Removing unreachable block (ram,0x00010784d4e0) */
/* WARNING: Removing unreachable block (ram,0x00010784d4e8) */
/* WARNING: Removing unreachable block (ram,0x00010784d514) */
/* WARNING: Removing unreachable block (ram,0x00010784d518) */
/* WARNING: Removing unreachable block (ram,0x00010784d504) */
/* WARNING: Removing unreachable block (ram,0x00010784d520) */
/* WARNING: Removing unreachable block (ram,0x00010784d510) */
/* WARNING: Removing unreachable block (ram,0x00010784d4cc) */
/* WARNING: Removing unreachable block (ram,0x00010784d4d0) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10784d30c(long *******param_1,long *******param_2,long *******param_3,long *******param_4,
             long param_5,long param_6,long *******param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  long *******ppppppplVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long lVar12;
  undefined8 extraout_x8;
  long *******unaff_x19;
  long *******unaff_x20;
  long *****ppppplVar13;
  long *******unaff_x21;
  long ******pppppplVar14;
  long *******unaff_x22;
  long *******ppppppplVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x27;
  long *******unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined *puVar19;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long *******ppppppplStack_98;
  long lStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_b0;
  puVar18 = &stack0xfffffffffffffff0;
  ppppppplStack_88 = param_7;
  ppppppplVar7 = param_1;
  ppppppplVar10 = ppppppplStack_88;
  while( true ) {
    if (param_6 == 0) {
      return param_1;
    }
    ppppppplVar15 = ppppppplVar7;
    ppppppplStack_88 = ppppppplVar10;
    lVar2 = param_5;
    if (param_6 <= param_8 || param_5 <= param_8) break;
    while( true ) {
      if (lVar2 == 0) {
        return param_1;
      }
      param_1 = param_4;
      func_0x00010784cf74(param_4,param_2,ppppppplVar7);
      if (((ulong)param_1 & 1) != 0) break;
      ppppppplVar7 = ppppppplVar7 + 0x32;
      ppppppplVar15 = ppppppplVar15 + 0x32;
      lVar2 = lVar2 + -1;
    }
    ppppppplVar10 = ppppppplVar7;
    lStack_a0 = param_8;
    ppppppplStack_98 = param_3;
    lStack_90 = param_6;
    if (param_6 <= lVar2) {
      ppppppplStack_80 = param_4;
      if (lVar2 != 1) {
        param_5 = lVar2 / 2;
        ppppppplVar10 = ppppppplVar7 + param_5 * 0x32;
        ppppppplStack_78 = (long *******)*param_4;
        uVar1 = ((long)param_3 - (long)param_2) / 400;
        ppppppplVar15 = param_2;
        while (ppppppplVar9 = ppppppplVar15, uVar1 != 0) {
          uVar17 = uVar1 >> 1;
          ppppppplVar8 = (long *******)&ppppppplStack_78;
          func_0x00010784d9b8(ppppppplVar8,ppppppplVar9 + uVar17 * 0x32);
          uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
          ppppppplVar15 = ppppppplVar9 + uVar17 * 0x32 + 0x32;
          if ((int)ppppppplVar8 == 0) {
            uVar1 = uVar17;
            ppppppplVar15 = ppppppplVar9;
          }
        }
        lVar12 = ((long)ppppppplVar9 - (long)param_2) / 400;
        goto LAB_10784d488;
      }
      uVar5 = true;
code_r0x00010784d758:
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x1d0);
      *(long ********)((long)register0x00000008 + -0x30) = unaff_x28;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x27;
      *(long ********)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long ********)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
      func_0x00010784d970(ppppppplVar10,param_2);
      func_0x00010784d84c();
      *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
      func_0x00010784d8c4((undefined1 *)((long)register0x00000008 + -0x1c8));
      func_0x00010784cc10(unaff_x20,unaff_x19);
      ppppppplVar7 = unaff_x19;
      func_0x00010784cc10(unaff_x19,(undefined1 *)((long)register0x00000008 + -0x1c8));
      func_0x00010784d9b0();
      func_0x00010784d810(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)uVar5) {
        return ppppppplVar7;
      }
      puVar19 = &SUB_10784d7c0;
      ___stack_chk_fail();
      param_4 = unaff_x20;
      goto code_r0x00010784d7c0;
    }
    ppppppplVar9 = param_2 + (param_6 / 2) * 0x32;
    lVar12 = param_6 / 2;
    uVar1 = ((long)param_2 - (long)ppppppplVar15) / 400;
    while (lStack_a8 = lVar12, ppppppplStack_80 = param_4, uVar1 != 0) {
      uVar16 = uVar1 >> 1;
      func_0x00010784cf74(param_4,ppppppplVar9,ppppppplVar10 + uVar16 * 0x32);
      uVar17 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
      iVar6 = (int)param_4;
      lVar12 = lStack_a8;
      uVar1 = uVar16;
      param_4 = ppppppplStack_80;
      if (iVar6 == 0) {
        uVar1 = uVar17;
        ppppppplVar10 = ppppppplVar10 + uVar16 * 0x32 + 0x32;
      }
    }
    param_5 = ((long)ppppppplVar10 - (long)ppppppplVar15) / 400;
LAB_10784d488:
    param_4 = ppppppplStack_80;
    param_8 = lStack_a0;
    param_3 = ppppppplVar9;
    if ((ppppppplVar10 != param_2) &&
       (uVar5 = param_2 == ppppppplVar9, param_3 = ppppppplVar10, !(bool)uVar5)) {
      unaff_x30 = 0x10784d4bc;
      register0x00000008 = (BADSPACEBASE *)auStack_b0;
      unaff_x19 = param_2;
      unaff_x20 = ppppppplStack_80;
      unaff_x21 = ppppppplVar7;
      unaff_x22 = ppppppplVar10;
      unaff_x27 = lVar2;
      unaff_x28 = ppppppplVar9;
      unaff_x29 = puVar18;
      lStack_a8 = lVar12;
      goto code_r0x00010784d758;
    }
    param_6 = lStack_90 - lVar12;
    if (param_5 + lVar12 < (lStack_90 - (param_5 + lVar12)) + lVar2) {
      FUN_10784d30c(ppppppplVar7,ppppppplVar10,param_3,ppppppplStack_80,param_5,lVar12,
                    ppppppplStack_88,lStack_a0);
      param_1 = ppppppplVar7;
      ppppppplVar7 = param_3;
      param_2 = ppppppplVar9;
      param_3 = ppppppplStack_98;
      param_5 = lVar2 - param_5;
      ppppppplVar10 = ppppppplStack_88;
    }
    else {
      param_1 = param_3;
      FUN_10784d30c(param_3,ppppppplVar9,ppppppplStack_98,ppppppplStack_80,lVar2 - param_5,param_6,
                    ppppppplStack_88,lStack_a0);
      param_6 = lVar12;
      param_2 = ppppppplVar10;
      ppppppplVar10 = ppppppplStack_88;
    }
  }
  ppppppplStack_78 = ppppppplVar10;
  puStack_70 = &uStack_68;
  uStack_68 = 0;
  ppppppplVar15 = ppppppplVar10;
  unaff_x21 = ppppppplVar7;
  if (param_5 <= param_6) goto LAB_10784d678;
  unaff_x19 = (long *******)0x0;
  while (unaff_x22 = ppppppplVar10, param_2 != param_3) {
    func_0x00010784bd84(ppppppplVar10);
    func_0x00010784d9e8();
  }
  while (param_3 = param_3 + -0x32, ppppppplVar15 != ppppppplVar10) {
    if (param_2 == ppppppplVar7) {
      while (ppppppplVar15 != ppppppplVar10) {
        ppppppplVar15 = ppppppplVar15 + -0x32;
        func_0x00010784cc10(param_3,ppppppplVar15);
        param_3 = param_3 + -0x32;
      }
      break;
    }
    unaff_x22 = param_2 + -0x32;
    unaff_x19 = ppppppplVar15 + -0x32;
    ppppppplVar8 = param_4;
    func_0x00010784d9b8(param_4,unaff_x19);
    ppppppplVar3 = unaff_x22;
    ppppppplVar9 = unaff_x22;
    if ((int)ppppppplVar8 == 0) {
      ppppppplVar15 = unaff_x19;
      ppppppplVar3 = param_2;
      ppppppplVar9 = unaff_x19;
    }
    param_2 = ppppppplVar3;
    func_0x00010784cc10(param_3,ppppppplVar9);
  }
  goto LAB_10784d6f4;
LAB_10784d678:
  while (ppppppplVar7 != param_2) {
    func_0x00010784bd84(ppppppplVar15,ppppppplVar7);
    func_0x00010784d9e8();
    ppppppplVar15 = ppppppplVar15 + 0x32;
  }
  while (unaff_x19 = ppppppplVar7, unaff_x22 = ppppppplVar10, ppppppplVar15 != ppppppplVar10) {
    if (param_2 == param_3) {
      FUN_10784cbc4(ppppppplVar10,ppppppplVar15,unaff_x21);
      break;
    }
    ppppppplVar9 = param_4;
    func_0x00010784d9b8(param_4,param_2);
    if ((int)ppppppplVar9 == 0) {
      func_0x00010784cc10(unaff_x21,ppppppplVar10);
      ppppppplVar10 = ppppppplVar10 + 0x32;
    }
    else {
      func_0x00010784cc10(unaff_x21,param_2);
      param_2 = param_2 + 0x32;
    }
    unaff_x21 = unaff_x21 + 0x32;
  }
LAB_10784d6f4:
  ppppppplVar7 = (long *******)&ppppppplStack_78;
  puVar19 = (undefined *)0x10784d6fc;
code_r0x00010784d7c0:
  *(long ********)(puVar4 + -0x30) = unaff_x22;
  *(long ********)(puVar4 + -0x28) = unaff_x21;
  *(long ********)(puVar4 + -0x20) = param_4;
  *(long ********)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar18;
  *(undefined **)(puVar4 + -8) = puVar19;
  pppppplVar11 = *ppppppplVar7;
  *ppppppplVar7 = (long ******)0x0;
  if (pppppplVar11 != (long ******)0x0) {
    pppppplVar14 = ppppppplVar7[1];
    for (ppppplVar13 = (long *****)0x0; ppppplVar13 < *pppppplVar14;
        ppppplVar13 = (long *****)((long)ppppplVar13 + 1)) {
      FUN_10784be90(pppppplVar11);
      pppppplVar11 = pppppplVar11 + 0x32;
    }
  }
  return ppppppplVar7;
}



/* Entry: 10784dc4c; end: 10784df37;  */

long * FUN_10784dc4c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *aplStack_350 [2];
  long alStack_340 [2];
  undefined1 auStack_330 [56];
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [56];
  undefined1 auStack_278 [120];
  undefined1 auStack_200 [240];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (((param_1[0x3d] != 0) && (lVar7 = *(long *)(param_1[0x3d] + 0x30), lVar7 != 0)) &&
     (plVar8 = *(long **)(lVar7 + 0x128), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x20))(alStack_340,plVar8);
    plVar10 = (long *)(alStack_340[0] + 0x10);
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(aplStack_350,plVar8,plVar10 + 2);
      if (aplStack_350[0] != (long *)0x0) {
        plVar5 = aplStack_350[0];
        (**(code **)(*aplStack_350[0] + 0x10))();
        for (plVar9 = (long *)0x0; in_ZR = plVar9 == plVar5, !(bool)in_ZR;
            plVar9 = (long *)((long)plVar9 + 1)) {
          (**(code **)(*aplStack_350[0] + 0x18))(&uStack_360,aplStack_350[0],plVar9);
          if (*(char *)(param_3 + 0x80) == '\x01') {
            uVar11 = NEON_ucvtf((uint)*(byte *)((long)param_1 + 0xc));
            func_0x0001077512dc(uVar11,auStack_200);
            lStack_368 = lStack_358;
            uStack_370 = uStack_360;
            if (lStack_358 != 0) {
              plVar1 = (long *)(lStack_358 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            func_0x000104c2fe00(auStack_2e8,param_1 + 4);
            func_0x000104c2fe00(auStack_2b0,plVar10 + 2);
            func_0x0001073c4f74(auStack_278,auStack_2e8);
            func_0x000107751444(auStack_200,&uStack_370,auStack_278);
            auStack_330[0] = 0;
            uStack_2f8 = 0;
            uStack_2f0 = 0;
            uVar6 = param_3 + 0x20;
            func_0x00010777faa8(uVar6,auStack_200,auStack_330);
            func_0x00010724b3d8(auStack_330);
            func_0x000107267e8c(auStack_278);
            func_0x000107267eac(auStack_2e8);
            func_0x000107267e44(&uStack_370);
            func_0x000107267da8(auStack_200);
            if ((uVar6 & 1) != 0) goto LAB_10784dde8;
          }
          else {
LAB_10784dde8:
            uVar4 = uStack_360;
            func_0x00010729807c(auStack_278,param_1 + 4);
            func_0x00010729807c(auStack_2e8,plVar10 + 2);
            func_0x0001078344c8(auStack_200,uVar4,param_1 + 2,auStack_278,auStack_2e8);
            uStack_108 = *(undefined8 *)((long)param_1 + 0x14);
            uStack_110 = *(undefined8 *)((long)param_1 + 0xc);
            uStack_100 = 1;
            func_0x000107829acc(param_2,auStack_200);
            func_0x000107269e60(auStack_200);
            func_0x00010724b3d8(auStack_2e8);
            func_0x00010724b3d8(auStack_278);
          }
          func_0x000107330fdc(&uStack_360);
        }
      }
      func_0x000107331000(aplStack_350);
    }
    param_1 = alStack_340;
    func_0x000107283194();
  }
  func_0x00010784e370(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010784e35c();
  plVar8 = param_1;
  func_0x00010784e30c();
  func_0x00010784dfdc(plVar8 + 0x6f);
  func_0x000107510994(param_1 + 0x6d);
  *param_1 = (long)&PTR_DAT_1109e0d50;
  param_1[0x25] = (long)&PTR_DAT_1109e0e60;
  param_1[0x26] = (long)&PTR_DAT_1109e0e88;
  param_1[0x31] = (long)&PTR_DAT_1109e0eb0;
  param_1[0x33] = (long)&PTR_DAT_1109e0ed8;
  param_1[0x35] = (long)&PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  FUN_10780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = (long)&PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784e0ac; end: 10784e0d3;  */

void FUN_10784e0ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  *puVar4 = &PTR_DAT_1109e21a8;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  lVar5 = *(long *)(param_1 + 0x18);
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  puVar4[4] = uVar6;
  return;
}



/* Entry: 10784e3dc; end: 10784e3df;  */

undefined8 * FUN_10784e3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2238;
  func_0x0001072c9240(param_1 + 5);
  func_0x0001077c1d38(param_1 + 1);
  return param_1;
}



/* Entry: 10784e7f0; end: 10784e7f3;  */

void FUN_10784e7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2298;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784e8f0; end: 10784e8ff;  */

void FUN_10784e8f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2298;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784eb04; end: 10784eb47;  */

undefined8 * FUN_10784eb04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010784f518();
  func_0x000104c2f714(puVar1 + 0xb3);
  func_0x0001072aca78(param_1 + 0xb0);
  func_0x00010724bd50(param_1 + 0xae);
  func_0x00010724b374(param_1 + 0x6f);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  FUN_10780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784ef98; end: 10784f2b3;  */

void FUN_10784ef98(undefined8 param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_198;
  undefined4 uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined4 uStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_118;
  ulong uStack_110;
  undefined1 auStack_100 [88];
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  pbVar6 = param_2;
  func_0x00010784f54c();
  uStack_58 = extraout_x8;
  if ((*(char **)(pbVar6 + 0x10) != (char *)0x0) && (**(char **)(pbVar6 + 0x10) != '\x02')) {
    lVar7 = *unaff_x19;
    func_0x0001073070f0(&lStack_118);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_a8,*(long *)(param_2 + 0x10) + 8);
    func_0x0001052b2bd0(&lStack_188);
    func_0x0001073787c0(auStack_100,&lStack_188);
    func_0x00010782d3f0(lVar7,&lStack_118);
    func_0x0001073787dc(&lStack_118);
    __ZNSt13exception_ptrD1Ev(&lStack_188);
    __ZNSt13runtime_errorD1Ev(auStack_a8);
    goto LAB_10784f10c;
  }
  if (param_2[0x19] == 1) {
    lVar7 = *(long *)(param_2 + 0x40);
    *(byte *)(unaff_x19 + 0x27) = param_2[0x48];
    unaff_x19[0x26] = lVar7;
    func_0x00010784f57c();
    goto LAB_10784f10c;
  }
  func_0x00010784f4ec();
  func_0x00010784f57c();
  lVar7 = *unaff_x19;
  if (param_2[0x18] == 1) {
    lStack_188 = 0;
    uStack_180 = 0;
LAB_10784f0e8:
    lStack_98 = 0;
    func_0x00010784f5bc();
    lVar7 = lStack_98;
    lStack_98 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    lStack_188 = lVar1;
    uStack_180 = uVar2;
    if (uVar2 != 0) {
      do {
        func_0x00010784f5ec();
      } while (extraout_w10 != 0);
    }
    if (lVar1 == 0) goto LAB_10784f0e8;
    lVar4 = 0x48;
    __Znwm();
    lStack_118 = lVar1;
    uStack_110 = uVar2;
    if (uVar2 != 0) {
      do {
        func_0x00010784f5ec();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010732be90(lVar4,&lStack_118,lVar7 + 0x1b8,0x2000);
    func_0x000104c33970(&lStack_118);
    lStack_198 = lVar4;
    func_0x00010784f5bc();
    lVar7 = lStack_198;
    lStack_198 = 0;
  }
  if (lVar7 != 0) {
    func_0x00010784f4d0();
  }
  func_0x000104c33970(&lStack_188);
LAB_10784f10c:
  lStack_188._0_4_ = 0x2a;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  ppuStack_168 = &PTR_DAT_110996720;
  uStack_160 = 0;
  uStack_148 = 0x2a;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  func_0x000104c2fe00(auStack_90,unaff_x19 + 0x46);
  plVar5 = &lStack_188;
  func_0x000107371bc4(plVar5,"source",auStack_90);
  func_0x000107849070();
  uVar3 = (*param_2 & 0xfe) == 2;
  func_0x0001072bbe40();
  func_0x00010726e6c0(&lStack_118,plVar5);
  func_0x000104c2f714(auStack_90);
  func_0x000107262330(&lStack_188);
  lStack_188 = CONCAT44(lStack_188._4_4_,1);
  uStack_180 = uStack_180 & 0xffffffff00000000;
  lStack_198 = *(long *)unaff_x19[0x4e];
  uStack_190 = 3;
  func_0x00010743fa9c((long *)unaff_x19[0x4e],&lStack_118,&lStack_188,&lStack_198,7);
  func_0x000107262330(&lStack_118);
  func_0x00010784f568(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = lStack_198;
  lStack_198 = 0;
  if (lVar7 != 0) {
    func_0x00010784f4d0();
  }
  func_0x000104c33970(&lStack_188);
  func_0x00010784f62c();
  return;
}



/* Entry: 10784fc38; end: 10784fc77;  */

void FUN_10784fc38(long param_1)

{
  byte bVar1;
  
  func_0x000107851cb4(param_1 + 0x1f8);
  bVar1 = *(byte *)(param_1 + 0x2b0);
  func_0x000107851cf8();
  if ((bVar1 & 1) == 0) {
    func_0x00010784fc78(param_1);
  }
  return;
}



/* Entry: 107850678; end: 1078506fb;  */

undefined8 *
FUN_107850678(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_1109a3bf8;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107332298(param_1 + 3,param_3);
  *(undefined4 *)(param_1 + 6) = param_4;
  func_0x000107851a64(param_1 + 7);
  return param_1;
}



/* Entry: 107850f08; end: 107850f1b;  */

void FUN_107850f08(void)

{
  func_0x000107851200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851170; end: 1078511cb;  */

undefined8 * FUN_107851170(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e2688;
  func_0x000107374434(param_1 + 0x28);
  func_0x000107276ba4(param_1 + 0x13);
  func_0x00010737dbe4(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 6);
  func_0x000107851278(param_1 + 4);
  func_0x000104c33970(param_1 + 2);
  return param_1;
}



/* Entry: 107851374; end: 1078513ab;  */

undefined1 * FUN_107851374(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010784fc78(uVar1);
  func_0x000107268400(auStack_20,uVar1);
  func_0x000104c335c0(auStack_20);
  return auStack_20;
}



/* Entry: 10785156c; end: 10785170b;  */

/* WARNING: Possible PIC construction at 0x0001078515cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078516f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078515d0) */
/* WARNING: Removing unreachable block (ram,0x0001078515dc) */
/* WARNING: Removing unreachable block (ram,0x0001078515f0) */
/* WARNING: Removing unreachable block (ram,0x0001078515f8) */
/* WARNING: Removing unreachable block (ram,0x000107851604) */
/* WARNING: Removing unreachable block (ram,0x00010785160c) */
/* WARNING: Removing unreachable block (ram,0x000107851618) */
/* WARNING: Removing unreachable block (ram,0x000107851620) */
/* WARNING: Removing unreachable block (ram,0x000107851628) */
/* WARNING: Removing unreachable block (ram,0x000107851648) */
/* WARNING: Removing unreachable block (ram,0x000107851634) */
/* WARNING: Removing unreachable block (ram,0x00010785163c) */
/* WARNING: Removing unreachable block (ram,0x00010785164c) */
/* WARNING: Removing unreachable block (ram,0x000107851654) */
/* WARNING: Removing unreachable block (ram,0x00010785167c) */
/* WARNING: Removing unreachable block (ram,0x000107851684) */
/* WARNING: Removing unreachable block (ram,0x00010785165c) */
/* WARNING: Removing unreachable block (ram,0x0001078515e4) */
/* WARNING: Removing unreachable block (ram,0x0001078516fc) */

void FUN_10785156c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = param_1;
  plVar1 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 > param_2 || param_2 == plVar4) {
    if (plVar4 <= param_2) {
      return;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar4 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto code_r0x00010785170c;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)((long)param_2 << 3);
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x00010785170c:
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078519fc; end: 107851a0f;  */

void FUN_1078519fc(void)

{
  func_0x000107851a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


