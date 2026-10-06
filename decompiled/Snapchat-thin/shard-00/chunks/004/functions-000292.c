/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100651c94; end: 100651cdb;  */

void FUN_100651c94(void)

{
  return;
}



/* Entry: 100651cdc; end: 100651d8b;  */

bool FUN_100651cdc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  bVar4 = false;
  uVar2 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if ((uVar2 != 0) && ((uVar2 & 3) == 0)) {
    lVar1 = (uVar2 >> 1) + (uVar2 >> 2);
    func_0x000100651cb4(param_2,lVar1);
    uStack_38 = 0;
    uVar5 = *param_2;
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    func_0x000100651e88(uVar5,&uStack_38,lVar1,puVar3,uVar2);
    bVar4 = (int)uVar5 == 1;
    uVar5 = uStack_38;
    if (!bVar4) {
      uVar5 = 0;
    }
    func_0x000100651cb4(param_2,uVar5);
  }
  return bVar4;
}



/* Entry: 100651d8c; end: 100651f57;  */

ulong FUN_100651d8c(ulong *param_1,long *param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_a8;
  
  uVar2 = param_1[1];
  if ((long *)(param_1[2] - uVar2) < param_2) {
    uVar3 = *param_1;
    lVar4 = uVar2 - uVar3;
    uVar5 = lVar4 + (long)param_2;
    if ((long)uVar5 < 0) {
      func_0x000104c591bc();
      *param_2 = 0;
      if ((param_5 & 3) != 0) {
        return 0;
      }
      if (param_3 < (param_5 >> 1) + (param_5 >> 2)) {
LAB_100651ecc:
        uVar2 = 0;
      }
      else {
        if (param_5 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          uVar5 = 0;
          do {
            uVar3 = uVar2;
            FUN_1004cc780(uVar2,&lStack_a8,param_4 + uVar5);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            if ((param_5 - 4 != uVar5) && (lStack_a8 != 3)) goto LAB_100651ecc;
            uVar2 = uVar2 + lStack_a8;
            lVar4 = lStack_a8 + lVar4;
            uVar5 = uVar5 + 4;
          } while (uVar5 < param_5);
        }
        *param_2 = lVar4;
        uVar2 = 1;
      }
      return uVar2;
    }
    uVar1 = param_1[2] - uVar3;
    uVar2 = uVar1 * 2;
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      uVar2 = uVar5;
    }
    if (0x3ffffffffffffffe < uVar1) {
      uVar2 = 0x7fffffffffffffff;
    }
    if (uVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar2;
      func_0x000107c60e20();
    }
    func_0x000107c60ee4(uVar1 + lVar4,param_2);
    uVar5 = uVar1;
    func_0x000107c610b4(uVar1,uVar3,lVar4);
    *param_1 = uVar1;
    param_1[1] = uVar1 + lVar4 + (long)param_2;
    param_1[2] = uVar1 + uVar2;
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(uVar3);
      return uVar3;
    }
  }
  else {
    uVar5 = uVar2;
    if (param_2 != (long *)0x0) {
      uVar5 = uVar2 + (long)param_2;
      func_0x000107c60ee4(uVar2,param_2);
    }
    param_1[1] = uVar5;
  }
  return uVar5;
}



/* Entry: 100651f58; end: 100651f67;  */

void FUN_100651f58(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000100651f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x19 + 0x1b8) + 0x70))();
  return;
}



/* Entry: 100651f68; end: 100651f93;  */

void FUN_100651f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 100651f94; end: 100651fb7;  */

void FUN_100651f94(long param_1)

{
  func_0x000100651f88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100651fb8; end: 100651ff3;  */

long FUN_100651fb8(long param_1)

{
  func_0x000100650c64();
  FUN_100067de0(param_1 + 0x10);
  FUN_100067de0(param_1 + 0x18);
  FUN_100067de0(param_1 + 0x20);
  return param_1;
}



/* Entry: 100651ff4; end: 100652007;  */

void FUN_100651ff4(void)

{
  FUN_100651fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100652008; end: 10065201f;  */

void FUN_100652008(void)

{
  return;
}



/* Entry: 100652020; end: 10065209b;  */

void FUN_100652020(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *puVar1;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  FUN_100652008();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  puVar1 = param_1 + 2;
  *puVar1 = 0;
  param_1[3] = 0;
  FUN_10065209c();
  puStack_30 = param_1;
  func_0x000100652660();
  puStack_28 = param_1;
  FUN_100654234(auStack_40,&puStack_30);
  func_0x000100654988(puVar1,auStack_40);
  FUN_1006549d0(auStack_40);
  return;
}



/* Entry: 10065209c; end: 100652107;  */

undefined8 *** FUN_10065209c(void)

{
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10002b838(&ppuStack_38,&UNK_10f74272b);
  if (-1 < (char)bStack_21) {
    uStack_30 = (ulong)bStack_21;
    ppuStack_38 = &ppuStack_38;
  }
  FUN_1003ba264(ppuStack_38,uStack_30,1000);
  FUN_100652654();
  func_0x000107c60ca0();
  return &ppuStack_38;
}



/* Entry: 100652108; end: 100652653;  */

uint * FUN_100652108(uint *param_1,uint param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
                    uint param_6,uint param_7,undefined8 *param_8,uint *param_9,undefined1 param_10)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = param_1 + 2;
  *param_1 = param_2;
  param_1[1] = 0;
  func_0x0001001a7c84(puVar4,param_4);
  param_1[0x20] = param_5;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = param_6;
  param_1[0x23] = param_7;
  param_1[0x24] = param_7;
  param_1[0x25] = 0;
  func_0x000100652264();
  *(uint **)(param_1 + 0x26) = puVar4;
  piVar5 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar5;
  if (piVar5 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined8 *)(param_1 + 0x2a) = param_3[1];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  puVar4 = param_1 + 0x30;
  func_0x000100641dd4();
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  (*(code *)PTR_FUN_11336f910)();
  *(uint **)(param_1 + 0x56) = puVar4;
  func_0x000100641dd4(param_1 + 0x58);
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  uVar7 = param_8[1];
  uVar6 = *param_8;
  *(undefined8 *)(param_1 + 0x7e) = param_8[2];
  *(undefined8 *)(param_1 + 0x7c) = uVar7;
  *(undefined8 *)(param_1 + 0x7a) = uVar6;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined8 *)((long)param_1 + 0x235) = 0;
  *(undefined8 *)((long)param_1 + 0x22d) = 0;
  param_1[0x90] = *param_9;
  *(undefined1 *)(param_1 + 0x91) = param_10;
  func_0x0001001460d8(param_1 + 0x92,param_1);
  if (2 < *param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x100652244);
    (*pcVar3)();
  }
  if ((int)param_1[0x20] < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0,0x100652250);
    (*pcVar3)();
  }
  if (param_1[0x20] < 6) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(0,0x10065225c);
  (*pcVar3)();
}



/* Entry: 100652654; end: 100652673;  */

undefined1 * FUN_100652654(void)

{
  return &stack0x00000008;
}



/* Entry: 100652674; end: 1006541a7;  */

long FUN_100652674(ulong param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  ulong *unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint6 uVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  undefined1 auStack_90 [16];
  
  func_0x0001001b4cac();
  Hint_Prefetch(*(undefined8 *)(param_1 + 0x10),0,2,0);
  func_0x000100652bac(*(undefined8 *)(param_1 + 0x10));
  func_0x000100620a50();
  lVar4 = 0;
  uVar5 = unaff_x20[2];
  uVar6 = *unaff_x20;
  uVar3 = uVar5 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
  uVar9 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
          0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar6;
    uVar10 = *(undefined8 *)(uVar5 + uVar3);
    cVar11 = (char)((ulong)uVar10 >> 8);
    cVar12 = (char)((ulong)uVar10 >> 0x10);
    cVar13 = (char)((ulong)uVar10 >> 0x18);
    cVar14 = (char)((ulong)uVar10 >> 0x20);
    cVar15 = (char)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar16 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar15 == (char)(uVar9 >> 0x28)),
                                            CONCAT14(-(cVar14 == (char)(uVar9 >> 0x20)),
                                                     CONCAT13(-(cVar13 == (char)(uVar9 >> 0x18)),
                                                              CONCAT12(-(cVar12 ==
                                                                        (char)(uVar9 >> 0x10)),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 (char)(uVar9 >> 8))
                                                                                ,-((char)uVar10 ==
                                                                                  (char)uVar9)))))))
                         ); uVar7 != 0;
        uVar7 = (uVar7 & 0x8080808080808080) - 1 & uVar7 & 0x8080808080808080) {
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar3 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar6;
      iVar2 = (int)auStack_90;
      func_0x00010082826c(auStack_90,*(long *)(unaff_x19 + 0x18) + uVar8 * 0x18);
      if (iVar2 != 0) {
        return *(long *)(unaff_x19 + 0x10) + uVar8;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(cVar15 == -0x80),
                                   CONCAT14(-(cVar14 == -0x80),
                                            CONCAT13(-(cVar13 == -0x80),
                                                     CONCAT12(-(cVar12 == -0x80),
                                                              CONCAT11(-(cVar11 == -0x80),
                                                                       -((char)uVar10 == -0x80))))))
                         )) != 0) break;
    lVar4 = lVar4 + 8;
    uVar3 = lVar4 + uVar3;
  }
  return 0;
}



/* Entry: 1006541a8; end: 1006541b7;  */

void FUN_1006541a8(void)

{
  return;
}



/* Entry: 1006541b8; end: 100654233;  */

void FUN_1006541b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  FUN_1006541a8();
  uStack_28 = extraout_x8;
  FUN_100654288(auStack_40,1);
  FUN_1006542bc(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100654934(auStack_40);
  func_0x000100654944(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35b88();
  func_0x000100654934();
  func_0x000107c35af0();
  pcStack_48 = FUN_100654234;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1006541b8(&uStack_51,puVar2);
  return;
}



/* Entry: 100654234; end: 100654287;  */

void FUN_100654234(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1006541b8(&uStack_11,param_1);
  return;
}



/* Entry: 100654288; end: 1006542af;  */

long FUN_100654288(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100654258();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1006542b0; end: 1006542bb;  */

undefined8 * FUN_1006542b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_13d0 [2508];
  undefined1 auStack_a04 [4];
  undefined **ppuStack_a00;
  undefined8 uStack_9f8;
  long lStack_38;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  puVar1 = param_1;
  FUN_10064b6a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110cd2e08;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = &UNK_10b2dcdc8;
  puVar4 = param_1 + 4;
  *puVar4 = &PTR_DAT_110873830;
  param_1[9] = puVar1;
  FUN_100078a28(auStack_a04);
  puVar2 = auStack_a04;
  func_0x000107c60d08(puVar2);
  FUN_100078a88(&ppuStack_a00,puVar2);
  func_0x000107c60d04(auStack_a04);
  func_0x000107c610b4(auStack_13d0,&ppuStack_a00,0x9c8);
  param_1[3] = 0x1006669f4;
  ppuStack_a00 = &PTR_DAT_110cd3190;
  uVar3 = 0x9c8;
  func_0x000107c60e20();
  func_0x000107c610b4();
  uStack_9f8 = uVar3;
  FUN_100078ac0(puVar4,&ppuStack_a00);
  (*(code *)*ppuStack_a00)(&ppuStack_a00);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  (**(code **)*puVar4)(puVar4);
  func_0x000107c35890();
  return puVar4;
}



/* Entry: 1006542bc; end: 1006542ff;  */

undefined8 * FUN_1006542bc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd3c78;
  param_1[1] = 0;
  FUN_1006542b0(param_1 + 3);
  return param_1;
}



/* Entry: 100654300; end: 10065433f;  */

undefined8 * FUN_100654300(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_13d0 [2508];
  undefined1 auStack_a04 [4];
  undefined **ppuStack_a00;
  undefined8 uStack_9f8;
  long lStack_38;
  
  puVar1 = param_1;
  FUN_10064b6a4();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110cd2e08;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = &UNK_10b2dcdc8;
  puVar4 = param_1 + 4;
  *puVar4 = &PTR_DAT_110873830;
  param_1[9] = puVar1;
  FUN_100078a28(auStack_a04);
  puVar2 = auStack_a04;
  func_0x000107c60d08(puVar2);
  FUN_100078a88(&ppuStack_a00,puVar2);
  func_0x000107c60d04(auStack_a04);
  func_0x000107c610b4(auStack_13d0,&ppuStack_a00,0x9c8);
  param_1[3] = 0x1006669f4;
  ppuStack_a00 = &PTR_DAT_110cd3190;
  uVar3 = 0x9c8;
  func_0x000107c60e20();
  func_0x000107c610b4();
  uStack_9f8 = uVar3;
  FUN_100078ac0(puVar4,&ppuStack_a00);
  (*(code *)*ppuStack_a00)(&ppuStack_a00);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  (**(code **)*puVar4)(puVar4);
  func_0x000107c35890();
  return puVar4;
}



/* Entry: 100654340; end: 10065448b;  */

undefined8 *
FUN_100654340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_13d0 [2508];
  undefined1 auStack_a04 [4];
  undefined **ppuStack_a00;
  undefined8 uStack_9f8;
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110cd2e08;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = &UNK_10b2dcdc8;
  puVar3 = param_1 + 4;
  *puVar3 = &PTR_DAT_110873830;
  param_1[9] = param_4;
  FUN_100078a28(auStack_a04);
  puVar1 = auStack_a04;
  func_0x000107c60d08(puVar1);
  FUN_100078a88(&ppuStack_a00,puVar1);
  func_0x000107c60d04(auStack_a04);
  func_0x000107c610b4(auStack_13d0,&ppuStack_a00,0x9c8);
  param_1[3] = 0x1006669f4;
  ppuStack_a00 = &PTR_DAT_110cd3190;
  uVar2 = 0x9c8;
  func_0x000107c60e20();
  func_0x000107c610b4();
  uStack_9f8 = uVar2;
  FUN_100078ac0(puVar3,&ppuStack_a00);
  (*(code *)*ppuStack_a00)(&ppuStack_a00);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  func_0x000107c60e78();
  (**(code **)*puVar3)(puVar3);
  func_0x000107c35890();
  return puVar3;
}



/* Entry: 10065448c; end: 10065490b;  */

void FUN_10065448c(void)

{
  return;
}



/* Entry: 10065490c; end: 100654963;  */

void FUN_10065490c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 100654964; end: 1006549c3;  */

void FUN_100654964(long param_1)

{
  func_0x000100651f88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006549c4; end: 1006549cf;  */

void FUN_1006549c4(void)

{
  return;
}



/* Entry: 1006549d0; end: 100654a4b;  */

void FUN_1006549d0(long param_1)

{
  func_0x000100651f88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100654a4c; end: 100654a6f;  */

void FUN_100654a4c(undefined8 *param_1)

{
  func_0x0001006549f4();
  *param_1 = &PTR_DAT_110cd4198;
  param_1[1] = &PTR_DAT_110cd41e0;
  return;
}



/* Entry: 100654a70; end: 100654e9b;  */

void FUN_100654a70(void)

{
  return;
}



/* Entry: 100654e9c; end: 100654eb7;  */

void FUN_100654e9c(void)

{
  return;
}



/* Entry: 100654eb8; end: 100654edb;  */

void FUN_100654eb8(undefined8 *param_1)

{
  func_0x0001006549f4();
  *param_1 = &PTR_DAT_110cd4088;
  param_1[1] = &PTR_DAT_110cd40d0;
  return;
}



/* Entry: 100654edc; end: 100655fcf;  */

void FUN_100654edc(void)

{
  return;
}



/* Entry: 100655fd0; end: 100655feb;  */

void FUN_100655fd0(void)

{
  return;
}



/* Entry: 100655fec; end: 10065601b;  */

void FUN_100655fec(void)

{
  FUN_1006383b8();
  FUN_1006383f4();
  FUN_1006563ec();
  func_0x000100655fd8();
  return;
}



/* Entry: 10065601c; end: 1006563eb;  */

long * FUN_10065601c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 < 0x555555555555556) {
    plVar1 = (long *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000107c35c58();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10065601c(param_4,param_2);
  }
  lVar2 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 1006563ec; end: 100656463;  */

void FUN_1006563ec(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = param_2[1] - *param_2;
  lVar2 = *param_2;
  while (bVar1 = 0xf < uVar3, uVar3 = uVar3 - 0x10, bVar1) {
    FUN_10029a878(auStack_48,lVar2,lVar2 + 0x10);
    FUN_100656464();
    FUN_100656470();
    func_0x000100655fd8();
    lVar2 = lVar2 + 0x10;
  }
  return;
}



/* Entry: 100656464; end: 10065646f;  */

void FUN_100656464(void)

{
  return;
}



/* Entry: 100656470; end: 1006564ab;  */

long FUN_100656470(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c28934();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1006564b8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x18;
}



/* Entry: 1006564ac; end: 1006564b7;  */

void FUN_1006564ac(void)

{
  return;
}



/* Entry: 1006564b8; end: 100656547;  */

long FUN_1006564b8(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_1006564ac();
  FUN_100656674();
  func_0x000100656718(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  FUN_100656780(lStack_48);
  lStack_48 = lStack_48 + 0x18;
  FUN_100656464();
  FUN_1006567dc();
  lVar1 = unaff_x19[1];
  FUN_100656978(auStack_58);
  return lVar1;
}



/* Entry: 100656548; end: 100656673;  */

void FUN_100656548(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar2) / -0x30) * 0x30);
  puVar3 = puVar6;
  for (puVar5 = puVar2; puVar5 != puVar1; puVar5 = puVar5 + 6) {
    uVar7 = puVar5[1];
    uVar4 = *puVar5;
    puVar3[2] = puVar5[2];
    puVar3[1] = uVar7;
    *puVar3 = uVar4;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar7 = puVar5[4];
    uVar4 = puVar5[3];
    puVar3[5] = puVar5[5];
    puVar3[4] = uVar7;
    puVar3[3] = uVar4;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[3] = 0;
    puVar3 = puVar3 + 6;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    func_0x000100656a04();
  }
  param_2[1] = puVar6;
  uVar4 = *param_1;
  param_1[1] = uVar4;
  *param_1 = param_2[1];
  param_2[1] = uVar4;
  uVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100656674; end: 1006566c3;  */

long * FUN_100656674(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104be0b88();
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



/* Entry: 1006566c4; end: 1006566d7;  */

void FUN_1006566c4(void)

{
  return;
}



/* Entry: 1006566d8; end: 1006566f7;  */

void FUN_1006566d8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  FUN_1006566c4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1006566d8();
  return;
}



/* Entry: 1006566f8; end: 100656763;  */

void FUN_1006566f8(void)

{
  FUN_1006566d8();
  return;
}



/* Entry: 100656764; end: 10065677f;  */

void FUN_100656764(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 100656780; end: 1006567c3;  */

undefined8 * FUN_100656780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  func_0x000100655fd8();
  return param_1;
}



/* Entry: 1006567c4; end: 1006567db;  */

void FUN_1006567c4(void)

{
  return;
}



/* Entry: 1006567dc; end: 10065681f;  */

void FUN_1006567dc(long *param_1,long param_2)

{
  func_0x0001006567d0();
  FUN_100656820(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x000100656920();
  return;
}



/* Entry: 100656820; end: 1006568ab;  */

void FUN_100656820(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1006568ac();
  FUN_1006568e4(&uStack_50);
  return;
}



/* Entry: 1006568ac; end: 1006568db;  */

void FUN_1006568ac(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1006568dc; end: 1006568e3;  */

void FUN_1006568dc(void)

{
  return;
}



/* Entry: 1006568e4; end: 100656913;  */

long FUN_1006568e4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000104be0b94(param_1);
  }
  return param_1;
}



/* Entry: 100656914; end: 100656977;  */

void FUN_100656914(void)

{
  return;
}



/* Entry: 100656978; end: 1006569d7;  */

long * FUN_100656978(long *param_1)

{
  func_0x000100656970();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1006569d8; end: 1006569e7;  */

void FUN_1006569d8(void)

{
  return;
}



/* Entry: 1006569e8; end: 100656a2b;  */

void FUN_1006569e8(undefined8 *param_1)

{
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  param_1[2] = in_stack_00000060;
  param_1[1] = in_stack_00000058;
  *param_1 = in_stack_00000050;
  return;
}



/* Entry: 100656a2c; end: 100656a5b;  */

void FUN_100656a2c(void)

{
  FUN_1006383b8();
  FUN_1006383f4();
  FUN_100656a5c();
  func_0x000100655fd8();
  return;
}



/* Entry: 100656a5c; end: 100656aab;  */

void FUN_100656a5c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = param_2[1] - *param_2;
  while (bVar1 = 7 < uVar2, uVar2 = uVar2 - 8, bVar1) {
    FUN_10065b8b8();
    FUN_10065b8c4();
  }
  return;
}



/* Entry: 100656aac; end: 100656ab7;  */

void FUN_100656aac(void)

{
  return;
}



/* Entry: 100656ab8; end: 100656ae7;  */

void FUN_100656ab8(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 100656ae8; end: 100656aff;  */

ulong FUN_100656ae8(ulong param_1)

{
  FUN_100656ab8();
  return param_1 & 0xffffffffff;
}



/* Entry: 100656b00; end: 100656b2f;  */

void FUN_100656b00(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 100656b30; end: 100656b47;  */

ulong FUN_100656b30(ulong param_1)

{
  FUN_100656b00();
  return param_1 & 0xffffffffff;
}



/* Entry: 100656b48; end: 100656c87;  */

void FUN_100656b48(void)

{
  return;
}



/* Entry: 100656c88; end: 100656f1f;  */

long FUN_100656c88(long param_1)

{
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    FUN_10065ab40();
  }
  else {
    FUN_100656f20();
  }
  return param_1;
}



/* Entry: 100656f20; end: 100656f3b;  */

void FUN_100656f20(long param_1)

{
  func_0x000100656cbc();
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  return;
}



/* Entry: 100656f3c; end: 100656f87;  */

void FUN_100656f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 100656f88; end: 100656fb3;  */

undefined1 * FUN_100656f88(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x000100656f74();
  return param_1;
}



/* Entry: 100656fb4; end: 100656fcb;  */

long FUN_100656fb4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100656fc0(&UNK_110a8b088,param_1,0,param_2);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_100657000();
  return param_1;
}



/* Entry: 100656fcc; end: 100656fff;  */

long FUN_100656fcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100656fc0(&UNK_110a8b088);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_100657000();
  return param_1;
}



/* Entry: 100657000; end: 100657083;  */

long FUN_100657000(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar4 = *(ulong *)(param_2 + 8);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) {
      uVar5 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    if (uVar3 == uVar5) {
      *(ulong *)(param_1 + 8) = uVar4;
      *(ulong *)(param_2 + 8) = uVar2;
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x10) = uVar1;
    }
    else {
      func_0x000107c2a374(param_1);
    }
  }
  return param_1;
}



/* Entry: 100657084; end: 1006572fb;  */

void FUN_100657084(void)

{
  return;
}



/* Entry: 1006572fc; end: 100657323;  */

void FUN_1006572fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(unaff_x19 + 0x1c8,unaff_x20 + 0x1c8,0x70);
  return;
}



/* Entry: 100657324; end: 1006573d3;  */

long FUN_100657324(long param_1)

{
  long lStack_28;
  
  FUN_1005fce88(param_1 + 0x390);
  FUN_1006573e4(param_1 + 0x378);
  FUN_1005fce88(param_1 + 800);
  FUN_1005fce88(param_1 + 0x290);
  FUN_1005fce88(param_1 + 0x270);
  FUN_1005fce88(param_1 + 0x238);
  func_0x0001005fb56c(param_1 + 0x1b0);
  FUN_1006573e4(param_1 + 0x198);
  FUN_1006573e4(param_1 + 0x180);
  FUN_1006573e4(param_1 + 0x168);
  FUN_1006573e4(param_1 + 0x150);
  FUN_1005fce88(param_1 + 0x130);
  FUN_1005fce88(param_1 + 0xe8);
  func_0x0001005fb56c(param_1 + 0xd0);
  func_0x0001005fb56c(param_1 + 0xb8);
  FUN_1006575f0(param_1 + 0x98);
  FUN_10065761c(param_1 + 0x70);
  FUN_1001148fc(param_1 + 0x48);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1006573d4; end: 1006573e3;  */

undefined1 * FUN_1006573d4(void)

{
  return &stack0x00000008;
}



/* Entry: 1006573e4; end: 100657407;  */

void FUN_1006573e4(void)

{
  FUN_1006573d4();
  FUN_100657408();
  return;
}



/* Entry: 100657408; end: 10065742b;  */

void FUN_100657408(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10065742c; end: 1006575e7;  */

void FUN_10065742c(void)

{
  return;
}



/* Entry: 1006575e8; end: 1006575ef;  */

void FUN_1006575e8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 1006575f0; end: 100657613;  */

undefined8 FUN_1006575f0(undefined8 param_1)

{
  FUN_1006575e8();
  return param_1;
}



/* Entry: 100657614; end: 10065761b;  */

void FUN_100657614(void)

{
  return;
}



/* Entry: 10065761c; end: 10065763b;  */

void FUN_10065761c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_10065a738();
  }
  return;
}



/* Entry: 10065763c; end: 100657797;  */

long FUN_10065763c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong extraout_x8;
  long unaff_x19;
  byte unaff_w20;
  
  func_0x0001006570c0();
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((extraout_x8 & 0x7fffffffffffffff) == 0) {
      param_3 = unaff_x19;
      func_0x0001006576c4();
      func_0x00010065744c();
    }
    else {
      func_0x00010071cdfc();
      param_3 = param_1;
    }
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  *(long *)(unaff_x19 + 8) = *(long *)(unaff_x19 + 8) + 2;
  *(ulong *)(lVar1 + -8) = *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + param_3) == -0x80);
  *(byte *)(*(long *)(unaff_x19 + 0x10) + param_3) = unaff_w20 & 0x7f;
  func_0x0001006574a0();
  return param_3;
}



/* Entry: 100657798; end: 1006577d3;  */

void FUN_100657798(void)

{
  return;
}



/* Entry: 1006577d4; end: 1006577fb;  */

void FUN_1006577d4(long param_1,long param_2)

{
  func_0x0001006577c8();
  FUN_1006577fc(param_1 + 8,param_2 + 8);
  FUN_100657898();
  return;
}



/* Entry: 1006577fc; end: 100657867;  */

void FUN_1006577fc(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_400 [976];
  
  func_0x0001006577c8();
  cVar1 = *(char *)(param_1 + 0x3d0);
  if (cVar1 != *(char *)(param_2 + 0x3d0)) {
    if (cVar1 == '\0') {
      FUN_100657868();
      FUN_100656f20();
    }
    else {
      FUN_10065b8b8();
      FUN_100656f20();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x3d0) == '\x01') {
      FUN_100657324();
      *(undefined1 *)(unaff_x19 + 0x3d0) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    FUN_100657868();
    func_0x000107c31e1c();
    func_0x000107c28918(auStack_400,unaff_x20);
    func_0x000107c31e34();
    func_0x000107c288f4();
    func_0x000107c288f4(unaff_x19,auStack_400);
    func_0x000107c31e58();
    return;
  }
  return;
}



/* Entry: 100657868; end: 100657873;  */

void FUN_100657868(void)

{
  return;
}



/* Entry: 100657874; end: 100657897;  */

void FUN_100657874(long param_1)

{
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    FUN_100657324();
    *(undefined1 *)(param_1 + 0x3d0) = 0;
  }
  return;
}



/* Entry: 100657898; end: 1006578ab;  */

void FUN_100657898(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1006578ac; end: 10065798b;  */

void FUN_1006578ac(void)

{
  return;
}



/* Entry: 10065798c; end: 1006579df;  */

long FUN_10065798c(long param_1)

{
  if ((*(byte *)(param_1 + 0x3d8) & 1) == 0) {
    func_0x000107c31e2c();
    func_0x000107c31e28();
    func_0x000107c31e38();
    func_0x000107c31e44();
    func_0x000107c31e30();
  }
  return param_1 + 8;
}



/* Entry: 1006579e0; end: 1006579fb;  */

void FUN_1006579e0(void)

{
  return;
}



/* Entry: 1006579fc; end: 100657a2f;  */

long FUN_1006579fc(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006579ec();
  if ((bool)in_CY) {
    FUN_100657a44();
  }
  else {
    FUN_10065baf8();
    param_1 = unaff_x20 + 0x3d0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x3d0;
}



/* Entry: 100657a30; end: 100657a43;  */

void FUN_100657a30(void)

{
  return;
}



/* Entry: 100657a44; end: 100657abb;  */

undefined8 FUN_100657a44(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_100657a30();
  FUN_100657abc();
  func_0x000100657b20();
  FUN_100657b4c();
  FUN_100657ca8(lStack_48);
  lStack_48 = lStack_48 + 0x3d0;
  FUN_100658244();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_100658548(auStack_58);
  return uVar1;
}



/* Entry: 100657abc; end: 100657b13;  */

ulong FUN_100657abc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x11;
  
  uVar1 = 0x4325c53ef368eb;
  if (param_2 < 0x4325c53ef368ec) {
    uVar2 = (param_1[2] - *param_1) / 0x3d0;
    uVar3 = uVar2 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    uVar4 = 0x2192e29f79b475;
  }
  else {
    func_0x000107c291c4();
    uVar1 = extraout_x8;
    uVar2 = extraout_x9;
    uVar3 = extraout_x10;
    uVar4 = extraout_x11;
  }
  if (uVar4 <= uVar2) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 100657b14; end: 100657b4b;  */

undefined8 FUN_100657b14(undefined8 param_1)

{
  ulong in_x9;
  undefined8 in_x10;
  ulong in_x11;
  
  if (in_x11 <= in_x9) {
    in_x10 = param_1;
  }
  return in_x10;
}



/* Entry: 100657b4c; end: 100657b7f;  */

void FUN_100657b4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100657b3c();
  if (param_2 != 0) {
    FUN_100657bac(param_4);
  }
  func_0x000100657c84(0x3d0);
  return;
}



/* Entry: 100657b80; end: 100657bab;  */

void FUN_100657b80(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x4325c53ef368ec) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x3d0);
    return;
  }
  func_0x000104bd35f4();
  FUN_100657b80();
  return;
}


