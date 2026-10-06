/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c4b6c8; end: 101c4b8c7;  */

undefined * FUN_101c4b6c8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126a8c90;
  func_0x000107c610f8(PTR_PTR_1126a8c90);
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000107c5cab0();
  func_0x000107c61180();
  lVar4 = param_2;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  lVar2 = lVar4;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    lVar2 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c52900(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c3dab0(param_1);
  func_0x000107c61180();
  func_0x000107c52914(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  FUN_101c4b1ec(param_1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
    lVar2 = lVar4;
  }
  func_0x000107c59a80(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c5c384();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c44fc0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) goto LAB_101c4b814;
  }
  lVar4 = 0;
LAB_101c4b814:
  func_0x000107c59a84(puVar1);
  func_0x000107c61170(lVar4);
  lVar3 = param_1;
  func_0x000107c4a624(param_1);
  func_0x000107c61180();
  func_0x000107c55898(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c49d1c(param_1);
  func_0x000107c61180();
  func_0x000107c5563c(puVar1);
  func_0x000107c61170(lVar3);
  FUN_101c4b570(param_1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c57c70(puVar1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101c4b8c8; end: 101c4b8e3;  */

void FUN_101c4b8c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c49fd4(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101c4b8e4; end: 101c4b91b;  */

void FUN_101c4b8e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101c4b91c; end: 101c4b92f;  */

void FUN_101c4b91c(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  byte **ppbVar17;
  ulong uVar18;
  byte *pbVar19;
  long unaff_x20;
  uint uVar20;
  byte *pbStack_60;
  ulong uStack_58;
  
  pbVar16 = *(byte **)(unaff_x20 + 0x18);
  uVar18 = *(ulong *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_101c4be68(*(undefined8 *)(unaff_x20 + 0x10),pbVar16,uVar18,*(undefined8 *)(unaff_x20 + 0x28));
  uVar11 = (ulong)pbVar16 & 0xffffffffffff;
  uVar14 = uVar18 >> 0x38 & 0xf;
  uVar12 = uVar11;
  if ((uVar18 & 0x2000000000000000) != 0) {
    uVar12 = uVar14;
  }
  if (uVar12 == 0) {
    return;
  }
  if ((uVar18 >> 0x3c & 1) == 0) {
    if ((uVar18 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar16 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar16 = (byte *)((uVar18 & 0xfffffffffffffff) + 0x20);
        uVar18 = uVar11;
      }
      if (*pbVar16 == 0x2b) {
        lVar15 = uVar18 - 1;
        if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c49854);
          (*pcVar8)();
        }
        if (lVar15 == 0) {
          return;
        }
        pbVar19 = (byte *)0x0;
        do {
          pbVar16 = pbVar16 + 1;
          if (9 < *pbVar16 - 0x30) {
            return;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = pbVar19;
          if (SUB168(auVar4 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar18 = (long)pbVar19 * 10;
          uVar12 = (ulong)(byte)(*pbVar16 - 0x30);
          pbVar19 = (byte *)(uVar18 + uVar12);
          if (CARRY8(uVar18,uVar12)) {
            return;
          }
          uVar20 = 0;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else if (*pbVar16 == 0x2d) {
        lVar15 = uVar18 - 1;
        if ((long)uVar18 < 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4984c);
          (*pcVar8)();
        }
        if (lVar15 == 0) {
          return;
        }
        pbVar19 = (byte *)0x0;
        do {
          pbVar16 = pbVar16 + 1;
          if (9 < *pbVar16 - 0x30) {
            return;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = pbVar19;
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar18 = (long)pbVar19 * 10;
          uVar12 = (ulong)(byte)(*pbVar16 - 0x30);
          pbVar19 = (byte *)(uVar18 - uVar12);
          if (uVar18 < uVar12) {
            return;
          }
          uVar20 = 0;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return;
        }
        if (uVar18 == 0) {
          return;
        }
        pbVar19 = (byte *)0x0;
        do {
          if (9 < *pbVar16 - 0x30) {
            return;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = pbVar19;
          if (SUB168(auVar6 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar14 = (long)pbVar19 * 10;
          uVar12 = (ulong)(byte)(*pbVar16 - 0x30);
          pbVar19 = (byte *)(uVar14 + uVar12);
          if (CARRY8(uVar14,uVar12)) {
            return;
          }
          uVar20 = 0;
          uVar18 = uVar18 - 1;
          pbVar16 = pbVar16 + 1;
        } while (uVar18 != 0);
      }
    }
    else {
      pbStack_60 = pbVar16;
      uStack_58 = uVar18 & 0xffffffffffffff;
      uVar20 = (uint)pbVar16 & 0xff;
      if (uVar20 == 0x2b) {
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c49858);
          (*pcVar8)();
        }
        lVar15 = uVar14 - 1;
        if (lVar15 != 0) {
          pbVar19 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar16 - 0x30) ||
                (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar19, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
               (uVar18 = (long)pbVar19 * 10, uVar12 = (ulong)(byte)(*pbVar16 - 0x30),
               pbVar19 = (byte *)(uVar18 + uVar12), CARRY8(uVar18,uVar12))) goto LAB_101c49750;
            uVar20 = 0;
            lVar15 = lVar15 + -1;
            pbVar16 = pbVar16 + 1;
          } while (lVar15 != 0);
          goto LAB_101c49758;
        }
      }
      else if (uVar20 == 0x2d) {
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c49850);
          (*pcVar8)();
        }
        lVar15 = uVar14 - 1;
        if (lVar15 != 0) {
          pbVar19 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar16 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar19, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar18 = (long)pbVar19 * 10, uVar12 = (ulong)(byte)(*pbVar16 - 0x30),
               pbVar19 = (byte *)(uVar18 - uVar12), uVar18 < uVar12)) goto LAB_101c49750;
            uVar20 = 0;
            lVar15 = lVar15 + -1;
            pbVar16 = pbVar16 + 1;
          } while (lVar15 != 0);
          goto LAB_101c49758;
        }
      }
      else if (uVar14 != 0) {
        pbVar19 = (byte *)0x0;
        ppbVar17 = &pbStack_60;
        do {
          if (((9 < *(byte *)ppbVar17 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar19, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar18 = (long)pbVar19 * 10, uVar12 = (ulong)(byte)(*(byte *)ppbVar17 - 0x30),
             pbVar19 = (byte *)(uVar18 + uVar12), CARRY8(uVar18,uVar12))) goto LAB_101c49750;
          uVar20 = 0;
          uVar14 = uVar14 - 1;
          ppbVar17 = (byte **)((long)ppbVar17 + 1);
        } while (uVar14 != 0);
        goto LAB_101c49758;
      }
LAB_101c49750:
      uVar20 = 1;
      pbVar19 = (byte *)0x0;
    }
  }
  else {
    func_0x000107c61434(uVar18);
    uVar12 = uVar18;
    func_0x000100f5015c(pbVar16,uVar18,10);
    uVar20 = (uint)uVar12;
    func_0x000107c6142c(uVar18);
    pbVar19 = pbVar16;
  }
LAB_101c49758:
  if (((uVar20 & 0xff) != 1) && (pbVar19 != (byte *)0x0)) {
    puVar9 = &UNK_11045c508;
    func_0x000107c613fc(&UNK_11045c508,0x30,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar10;
    *(byte **)(puVar9 + 0x18) = pbVar19;
    *(undefined8 *)(puVar9 + 0x20) = uVar1;
    *(undefined8 *)(puVar9 + 0x28) = uVar13;
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(uVar13);
    uVar10 = 0xb;
    func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e4e18,puVar9,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar9);
    FUN_101c49ba4(uVar10);
    func_0x000107c61574(uVar10);
  }
  return;
}



/* Entry: 101c4b930; end: 101c4b9b7;  */

void FUN_101c4b930(void)

{
  long unaff_x20;
  
  FUN_101c4bf64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 101c4b9b8; end: 101c4ba2f;  */

void FUN_101c4b9b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101c4ba30;
  plVar6[10] = lVar1;
  plVar6[0xb] = lVar3;
  plVar6[8] = lVar4;
  plVar6[9] = lVar2;
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar6[0xc] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar6[0xd] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c498bc,0,0);
  return;
}



/* Entry: 101c4ba30; end: 101c4ba6b;  */

void FUN_101c4ba30(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c4ba68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c4ba6c; end: 101c4ba73;  */

void FUN_101c4ba6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4d1f8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101c4ba74; end: 101c4bc67;  */

undefined * FUN_101c4ba74(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e0b750,&UNK_10d9e4e48);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined4 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar10 + -4);
      uVar3 = *(ulong *)(puVar10 + -2);
      uVar4 = *puVar10;
      func_0x000107c61434(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101c4bb64);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined4 *)(*(long *)(puVar6 + 0x38) + uVar7 * 4) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101c4bb68);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 6;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 101c4bc68; end: 101c4bc7b;  */

void FUN_101c4bc68(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11045c530;
  if (lRam0000000112e0b758 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e0b758 = param_1;
  }
  return;
}



/* Entry: 101c4bc7c; end: 101c4bcbf;  */

void FUN_101c4bc7c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101c4bcc0; end: 101c4bd1b;  */

void FUN_101c4bcc0(void)

{
  FUN_101c49c24();
  return;
}



/* Entry: 101c4bd1c; end: 101c4bd5f;  */

void FUN_101c4bd1c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_101c4be48();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11045c578;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c4bd60; end: 101c4bd67;  */

void FUN_101c4bd60(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101c4be48();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11045c578;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c4bd68; end: 101c4bd97;  */

void FUN_101c4bd68(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101c4bd98; end: 101c4bdbb;  */

void FUN_101c4bd98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c4bdbc; end: 101c4bdc7;  */

void FUN_101c4bdbc(void)

{
  return;
}



/* Entry: 101c4bdc8; end: 101c4be27;  */

void FUN_101c4bdc8(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x30))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 101c4be28; end: 101c4be47;  */

void FUN_101c4be28(void)

{
  return;
}



/* Entry: 101c4be48; end: 101c4be67;  */

void FUN_101c4be48(void)

{
  func_0x000107c61168(&PTR_PTR_112e0b7a0);
  return;
}



/* Entry: 101c4be68; end: 101c4bf63;  */

void FUN_101c4be68(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_60;
  puVar11 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar4 = (int)puVar11;
  func_0x000107c4a02c();
  if (iVar4 == 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
    puVar11 = &UNK_11045c638;
    func_0x000107c613fc(&UNK_11045c638,0x18,7);
    func_0x000107c61644(puVar11 + 0x10);
    puVar5 = &UNK_11045c6b0;
    func_0x000107c613fc(&UNK_11045c6b0,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar11;
    *(code **)(puVar5 + 0x18) = FUN_101c4cec0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar10);
    func_0x000107c60bd0(ppuVar6);
    return;
  }
  puVar7 = &uStack_90;
  FUN_101c4d690(0);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0,0);
  lVar13 = *(long *)(unaff_x20 + 0x28);
  puVar11 = *(undefined **)(lVar13 + 0x10);
  if (puVar11 == (undefined *)0x0) {
    lVar13 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar13);
    puVar5 = puVar11;
    func_0x00010109b448(puVar11,0);
    FUN_101c4f958(&uStack_90,puVar5 + 0x20,puVar11,lVar13);
    FUN_101c4f950(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (puVar7 != (undefined8 *)puVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c4d058);
      (*pcVar3)();
    }
    lVar13 = *(long *)(puVar5 + 0x10);
  }
  if (lVar13 != 0) {
    puVar14 = (ulong *)(puVar5 + 0x28);
    do {
      uVar1 = puVar14[-1];
      uVar2 = *puVar14;
      func_0x000107c61428(unaff_x20 + 0x28,&uStack_90,0x20,0);
      lVar12 = *(long *)(unaff_x20 + 0x28);
      lVar15 = *(long *)(lVar12 + 0x10);
      func_0x000107c61434(uVar2);
      if (lVar15 == 0) {
LAB_101c4cf9c:
        func_0x000107c614a8(&uStack_90);
      }
      else {
        func_0x000107c61434(lVar12);
        uVar8 = uVar1;
        uVar9 = uVar2;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          func_0x000107c6142c(lVar12);
          goto LAB_101c4cf9c;
        }
        iVar4 = *(int *)(*(long *)(lVar12 + 0x38) + uVar8 * 4);
        func_0x000107c6142c(lVar12);
        func_0x000107c614a8(&uStack_90);
        if (iVar4 != 0) {
          FUN_101c4d4b4(0,uVar1,uVar2);
        }
      }
      puVar14 = puVar14 + 2;
      func_0x000107c6142c(uVar2);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101c4bf64; end: 101c4c0eb;  */

/* WARNING: Possible PIC construction at 0x000101c4c0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c4c0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c4c0b4) */
/* WARNING: Removing unreachable block (ram,0x000101c4c0c8) */

void FUN_101c4bf64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puVar3;
  
  puVar2 = &UNK_11045c778;
  func_0x000107c613fc(&UNK_11045c778,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar3;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar3 = &UNK_11045c638;
    func_0x000107c613fc(&UNK_11045c638,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11045c7a0;
    func_0x000107c613fc(&UNK_11045c7a0,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_101c4fab0;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    uStack_60 = 0x101c4fca0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11045c7b8;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c(puVar2);
  }
  else {
    FUN_101c4c77c(param_1,param_2,param_3,param_4);
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 101c4c0ec; end: 101c4c45f;  */

/* WARNING: Possible PIC construction at 0x000101c4c214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c4c228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c4c218) */
/* WARNING: Removing unreachable block (ram,0x000101c4c22c) */

void FUN_101c4c0ec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puVar3;
  
  puVar2 = &UNK_11045c700;
  func_0x000107c613fc(&UNK_11045c700,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar3;
  func_0x000107c61434(param_2);
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    puVar3 = &UNK_11045c638;
    func_0x000107c613fc(&UNK_11045c638,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11045c728;
    func_0x000107c613fc(&UNK_11045c728,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_101c4faa8;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    uStack_50 = 0x101c4fc9c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11045c740;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(puVar2);
  }
  else {
    func_0x000101c4cdcc(param_1,param_2);
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 101c4c460; end: 101c4c5d3;  */

void FUN_101c4c460(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x70);
  if (lVar3 != 0) {
    func_0x000107c6157c(lVar3);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar3);
  }
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x68));
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x000107c4e454();
  }
  lVar3 = *(long *)(unaff_x20 + 0x80);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c6157c(uVar4);
    func_0x000107c61174(lVar3);
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(uVar4);
    lVar1 = lStack_38;
    func_0x000107c4d2e4();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4fd6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101c4c5d4; end: 101c4c613;  */

void FUN_101c4c5d4(void)

{
  FUN_101c4c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c4c614; end: 101c4c77b;  */

undefined * FUN_101c4c614(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_58 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4b940(uVar7);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_58,0x20,0);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    lVar1 = param_1;
    uVar5 = param_2;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      puVar2 = *(undefined **)(*(long *)(lVar8 + 0x38) + lVar1 * 8);
      func_0x000107c61174(puVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar8);
      goto LAB_101c4c758;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_58);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c49470();
  func_0x000107c61170(puVar3);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_58,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61558(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0x8000000000000000;
  FUN_101c4eb50(puVar2,param_1,param_2,uVar4);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
  func_0x000107c614a8(auStack_58);
LAB_101c4c758:
  func_0x000107c5d278(uVar7);
  return puVar2;
}



/* Entry: 101c4c77c; end: 101c4cce7;  */

void FUN_101c4c77c(ulong param_1,ulong param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  byte **ppbVar17;
  long unaff_x20;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  byte *pbStack_68;
  ulong uStack_60;
  
  uVar13 = *(ulong *)(unaff_x20 + 0x48);
  if ((uVar13 != 0) &&
     ((uVar9 = *(ulong *)(unaff_x20 + 0x40), uVar9 == param_1 && uVar13 == param_2 ||
      (func_0x000107c605b8(uVar9,uVar13,param_1,param_2,0), (uVar9 & 1) != 0)))) {
    func_0x000107c61428(unaff_x20 + 0x28,&pbStack_68,0x20,0);
    lVar20 = *(long *)(unaff_x20 + 0x28);
    if (*(long *)(lVar20 + 0x10) == 0) {
      func_0x000107c614a8(&pbStack_68);
    }
    else {
      func_0x000107c61434(lVar20);
      uVar13 = param_1;
      uVar9 = param_2;
      func_0x000100029284();
      if ((uVar9 & 1) == 0) {
        func_0x000107c614a8(&pbStack_68);
        func_0x000107c6142c(lVar20);
      }
      else {
        iVar1 = *(int *)(*(long *)(lVar20 + 0x38) + uVar13 * 4);
        func_0x000107c614a8(&pbStack_68);
        func_0x000107c6142c(lVar20);
        if (iVar1 == 1) {
          FUN_101c4d690(0);
          return;
        }
        if (iVar1 == 2) {
          if (*(long *)(unaff_x20 + 0x60) != 0) {
            func_0x000107c4e454();
          }
          FUN_101c4d3fc();
          uVar21 = 3;
          goto LAB_101c4cb58;
        }
        if ((iVar1 == 3) && (lVar20 = *(long *)(unaff_x20 + 0x60), lVar20 != 0)) {
          func_0x000107c61174();
          FUN_101c4d788();
          func_0x000107c4e868(lVar20);
          FUN_101c4d4b4(2,param_1,param_2);
          func_0x000107c61170(lVar20);
          return;
        }
      }
    }
  }
  uVar14 = (ulong)param_3 & 0xffffffffffff;
  uVar9 = param_4 >> 0x38 & 0xf;
  uVar13 = uVar14;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar13 = uVar9;
  }
  if (uVar13 == 0) goto LAB_101c4cb54;
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) != 0) {
      pbStack_68 = param_3;
      uStack_60 = param_4 & 0xffffffffffffff;
      uVar19 = (uint)param_3 & 0xff;
      if (uVar19 == 0x2b) {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4cce8);
          (*pcVar8)();
        }
        lVar20 = uVar9 - 1;
        if (lVar20 == 0) goto LAB_101c4cae8;
        pbVar18 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_68 | 1);
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar18, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar9 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*pbVar16 - 0x30),
             pbVar18 = (byte *)(uVar9 + uVar13), CARRY8(uVar9,uVar13))) goto LAB_101c4cae8;
          uVar19 = 0;
          lVar20 = lVar20 + -1;
          pbVar16 = pbVar16 + 1;
        } while (lVar20 != 0);
      }
      else if (uVar19 == 0x2d) {
        if (uVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4cce0);
          (*pcVar8)();
        }
        lVar20 = uVar9 - 1;
        if (lVar20 == 0) {
LAB_101c4cae8:
          uVar19 = 1;
          pbVar18 = (byte *)0x0;
        }
        else {
          pbVar18 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_68 | 1);
          do {
            if (((9 < *pbVar16 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar18, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar9 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*pbVar16 - 0x30),
               pbVar18 = (byte *)(uVar9 - uVar13), uVar9 < uVar13)) goto LAB_101c4cae8;
            uVar19 = 0;
            lVar20 = lVar20 + -1;
            pbVar16 = pbVar16 + 1;
          } while (lVar20 != 0);
        }
      }
      else {
        if (uVar9 == 0) goto LAB_101c4cae8;
        pbVar18 = (byte *)0x0;
        ppbVar17 = &pbStack_68;
        do {
          if (((9 < *(byte *)ppbVar17 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar18, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar14 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*(byte *)ppbVar17 - 0x30),
             pbVar18 = (byte *)(uVar14 + uVar13), CARRY8(uVar14,uVar13))) goto LAB_101c4cae8;
          uVar19 = 0;
          uVar9 = uVar9 - 1;
          ppbVar17 = (byte **)((long)ppbVar17 + 1);
        } while (uVar9 != 0);
      }
      goto LAB_101c4caf0;
    }
    if (((ulong)param_3 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      param_3 = (byte *)((param_4 & 0xfffffffffffffff) + 0x20);
      param_4 = uVar14;
    }
    if (*param_3 == 0x2b) {
      lVar20 = param_4 - 1;
      if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4cce4);
        (*pcVar8)();
      }
      if (lVar20 != 0) {
        pbVar18 = (byte *)0x0;
        do {
          param_3 = param_3 + 1;
          if (((9 < *param_3 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar18, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar9 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*param_3 - 0x30),
             pbVar18 = (byte *)(uVar9 + uVar13), CARRY8(uVar9,uVar13))) goto LAB_101c4cb54;
          uVar19 = 0;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        goto LAB_101c4caf0;
      }
    }
    else if (*param_3 == 0x2d) {
      lVar20 = param_4 - 1;
      if ((long)param_4 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4ccdc);
        (*pcVar8)();
      }
      if (lVar20 != 0) {
        pbVar18 = (byte *)0x0;
        do {
          param_3 = param_3 + 1;
          if (((9 < *param_3 - 0x30) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar18, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
             (uVar9 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*param_3 - 0x30),
             pbVar18 = (byte *)(uVar9 - uVar13), uVar9 < uVar13)) goto LAB_101c4cb54;
          uVar19 = 0;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        goto LAB_101c4caf0;
      }
    }
    else if ((param_3 != (byte *)0x0) && (param_4 != 0)) {
      pbVar18 = (byte *)0x0;
      do {
        if (((9 < *param_3 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar18, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar9 = (long)pbVar18 * 10, uVar13 = (ulong)(byte)(*param_3 - 0x30),
           pbVar18 = (byte *)(uVar9 + uVar13), CARRY8(uVar9,uVar13))) goto LAB_101c4cb54;
        uVar19 = 0;
        param_4 = param_4 - 1;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
      goto LAB_101c4caf0;
    }
  }
  else {
    func_0x000107c61434(param_4);
    uVar13 = param_4;
    func_0x000100f5015c(param_3,param_4,10);
    uVar19 = (uint)uVar13;
    func_0x000107c6142c(param_4);
    pbVar18 = param_3;
LAB_101c4caf0:
    if (((uVar19 & 0xff) != 1) && (pbVar18 != (byte *)0x0)) {
      lVar20 = *(long *)(unaff_x20 + 0x48);
      if (lVar20 == 0) {
        uVar15 = 0;
      }
      else {
        uVar21 = *(undefined8 *)(unaff_x20 + 0x40);
        func_0x000107c6157c(unaff_x20);
        func_0x000107c61434(lVar20);
        func_0x000101c4d8bc(uVar21,lVar20,unaff_x20);
        func_0x000107c61574(unaff_x20);
        func_0x000107c6142c(lVar20);
        uVar15 = 3;
        if (((uint)uVar21 & 0xfffffffe) != 2) {
          uVar15 = 0;
        }
      }
      FUN_101c4d690(uVar15);
      uVar21 = *(undefined8 *)(unaff_x20 + 0x48);
      *(ulong *)(unaff_x20 + 0x40) = param_1;
      *(ulong *)(unaff_x20 + 0x48) = param_2;
      func_0x000107c6142c(uVar21);
      *(byte **)(unaff_x20 + 0x50) = pbVar18;
      *(char *)(unaff_x20 + 0x58) = (char)uVar19;
      func_0x000107c61434(param_2);
      FUN_101c4d4b4(1,param_1,param_2);
      lVar20 = *(long *)(unaff_x20 + 0x78) + 1;
      if (*(long *)(unaff_x20 + 0x78) != -1) {
        *(long *)(unaff_x20 + 0x78) = lVar20;
        puVar10 = &UNK_11045c638;
        func_0x000107c613fc(&UNK_11045c638,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,unaff_x20);
        uVar21 = *(undefined8 *)(unaff_x20 + 0x10);
        puVar11 = &UNK_11045c7f0;
        func_0x000107c613fc(&UNK_11045c7f0,0x40,7);
        *(undefined8 *)(puVar11 + 0x10) = uVar21;
        *(byte **)(puVar11 + 0x18) = pbVar18;
        *(undefined **)(puVar11 + 0x20) = puVar10;
        *(ulong *)(puVar11 + 0x28) = param_1;
        *(ulong *)(puVar11 + 0x30) = param_2;
        *(long *)(puVar11 + 0x38) = lVar20;
        func_0x000107c61434(param_2);
        func_0x000107c6157c(uVar21);
        uVar21 = 0xb;
        func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e4fe0,puVar11,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(puVar11);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x70);
        *(undefined8 *)(unaff_x20 + 0x70) = uVar21;
        func_0x000107c61574(uVar12);
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101c4ccd8);
      (*pcVar8)();
    }
  }
LAB_101c4cb54:
  uVar21 = 4;
LAB_101c4cb58:
  FUN_101c4d4b4(uVar21,param_1,param_2);
  return;
}



/* Entry: 101c4cce8; end: 101c4cebf;  */

void FUN_101c4cce8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((uVar2 == 0) ||
     ((uVar1 = *(ulong *)(param_1 + 0x40), uVar1 != param_2 || uVar2 != param_3 &&
      (func_0x000107c605b8(uVar1,uVar2,param_2,param_3,0), (uVar1 & 1) == 0)))) {
    func_0x000107c61428(param_1 + 0x28,auStack_58,0x20,0);
    lVar3 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar3 + 0x10) == 0) {
      func_0x000107c614a8(auStack_58);
    }
    else {
      func_0x000107c61434(lVar3);
      uVar2 = param_3;
      func_0x000100029284(param_2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) != 0) {
        FUN_101c4d4b4(0,param_2,param_3);
      }
    }
  }
  else {
    FUN_101c4d690(0);
  }
  return;
}



/* Entry: 101c4cec0; end: 101c4cedf;  */

void FUN_101c4cec0(void)

{
  FUN_101c4cee0();
  return;
}



/* Entry: 101c4cee0; end: 101c4d057;  */

void FUN_101c4cee0(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  puVar6 = &uStack_90;
  FUN_101c4d690(0);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0,0);
  lVar11 = *(long *)(unaff_x20 + 0x28);
  puVar9 = *(undefined **)(lVar11 + 0x10);
  if (puVar9 == (undefined *)0x0) {
    lVar11 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar11);
    puVar5 = puVar9;
    func_0x00010109b448(puVar9,0);
    FUN_101c4f958(&uStack_90,puVar5 + 0x20,puVar9,lVar11);
    FUN_101c4f950(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    if (puVar6 != (undefined8 *)puVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c4d058);
      (*pcVar4)();
    }
    lVar11 = *(long *)(puVar5 + 0x10);
  }
  if (lVar11 != 0) {
    puVar12 = (ulong *)(puVar5 + 0x28);
    do {
      uVar1 = puVar12[-1];
      uVar2 = *puVar12;
      func_0x000107c61428(unaff_x20 + 0x28,&uStack_90,0x20,0);
      lVar10 = *(long *)(unaff_x20 + 0x28);
      lVar13 = *(long *)(lVar10 + 0x10);
      func_0x000107c61434(uVar2);
      if (lVar13 == 0) {
LAB_101c4cf9c:
        func_0x000107c614a8(&uStack_90);
      }
      else {
        func_0x000107c61434(lVar10);
        uVar7 = uVar1;
        uVar8 = uVar2;
        func_0x000100029284();
        if ((uVar8 & 1) == 0) {
          func_0x000107c6142c(lVar10);
          goto LAB_101c4cf9c;
        }
        iVar3 = *(int *)(*(long *)(lVar10 + 0x38) + uVar7 * 4);
        func_0x000107c6142c(lVar10);
        func_0x000107c614a8(&uStack_90);
        if (iVar3 != 0) {
          FUN_101c4d4b4(0,uVar1,uVar2);
        }
      }
      puVar12 = puVar12 + 2;
      func_0x000107c6142c(uVar2);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101c4d058; end: 101c4d3fb;  */

void FUN_101c4d058(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long alStack_b8 [3];
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  FUN_101c4d690(0);
  if (param_2 != 0) {
    uStack_a0 = param_1;
    lStack_98 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(0x3a,0xe100000000000000);
    lVar3 = lStack_98;
    uVar2 = uStack_a0;
    func_0x000107c61428(unaff_x20 + 0x28,auStack_78,0,0);
    lVar12 = *(long *)(unaff_x20 + 0x28);
    puVar10 = *(ulong **)(lVar12 + 0x10);
    if (puVar10 == (ulong *)0x0) {
      uVar13 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(lVar12);
      puVar6 = puVar10;
      func_0x00010109b448(puVar10,0);
      puVar7 = &uStack_a0;
      FUN_101c4f958(puVar7,puVar6 + 4,puVar10,lVar12);
      FUN_101c4f950(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80);
      if (puVar7 != puVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c4d3f8);
        (*pcVar4)();
      }
      uVar13 = puVar6[2];
    }
    if (uVar13 != 0) {
      puVar10 = puVar6 + 5;
      do {
        uVar9 = puVar10[-1];
        uVar1 = *puVar10;
        func_0x000107c61434(uVar1);
        uVar8 = uVar2;
        func_0x000107c5fbb4(uVar2,lVar3,uVar9,uVar1);
        if ((uVar8 & 1) == 0) {
          func_0x000107c61428(unaff_x20 + 0x28,&uStack_a0,0x21,0);
          uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
          func_0x000107c61434(uVar11);
          uVar8 = uVar1;
          func_0x000100029284();
          func_0x000107c6142c(uVar11);
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(uVar1);
          }
          else {
            iVar5 = (int)*(undefined8 *)(unaff_x20 + 0x28);
            func_0x000107c61558();
            alStack_b8[0] = *(long *)(unaff_x20 + 0x28);
            *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
            if (iVar5 == 0) {
              func_0x000101c4ef58();
            }
            lVar12 = alStack_b8[0];
            func_0x000107c6142c(*(undefined8 *)(*(long *)(alStack_b8[0] + 0x30) + uVar9 * 0x10 + 8))
            ;
            func_0x000101c4f7a0(uVar9,lVar12);
            func_0x000107c6142c(uVar1);
            *(long *)(unaff_x20 + 0x28) = lVar12;
          }
          func_0x000107c614a8(&uStack_a0);
        }
        else {
          func_0x000107c6142c(uVar1);
        }
        puVar10 = puVar10 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    func_0x000107c61574(puVar6);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c4b940(uVar11);
    func_0x000107c61428(unaff_x20 + 0x38,alStack_b8,0,0);
    lVar12 = *(long *)(unaff_x20 + 0x38);
    puVar10 = *(ulong **)(lVar12 + 0x10);
    if (puVar10 == (ulong *)0x0) {
      uVar13 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar6 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(lVar12);
      puVar6 = puVar10;
      func_0x00010109b448(puVar10,0);
      puVar7 = &uStack_a0;
      FUN_101c4f958(puVar7,puVar6 + 4,puVar10,lVar12);
      FUN_101c4f950(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80);
      if (puVar7 != puVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101c4d3fc);
        (*pcVar4)();
      }
      uVar13 = puVar6[2];
    }
    if (uVar13 != 0) {
      puVar10 = puVar6 + 5;
      do {
        uVar9 = puVar10[-1];
        uVar1 = *puVar10;
        func_0x000107c61434(uVar1);
        uVar8 = uVar2;
        func_0x000107c5fbb4(uVar2,lVar3,uVar9,uVar1);
        if ((uVar8 & 1) == 0) {
          func_0x000107c61428(unaff_x20 + 0x38,&uStack_a0,0x21,0);
          uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
          func_0x000107c61434(uVar14);
          uVar8 = uVar1;
          func_0x000100029284();
          func_0x000107c6142c(uVar14);
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(uVar1);
          }
          else {
            iVar5 = (int)*(undefined8 *)(unaff_x20 + 0x38);
            func_0x000107c61558();
            lVar12 = *(long *)(unaff_x20 + 0x38);
            *(undefined8 *)(unaff_x20 + 0x38) = 0x8000000000000000;
            if (iVar5 == 0) {
              func_0x000101c4ede8();
            }
            func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar9 * 0x10 + 8));
            func_0x000107c61170(*(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar9 * 8));
            func_0x000101c4f5f0(uVar9,lVar12);
            func_0x000107c6142c(uVar1);
            *(long *)(unaff_x20 + 0x38) = lVar12;
          }
          func_0x000107c614a8(&uStack_a0);
        }
        else {
          func_0x000107c6142c(uVar1);
        }
        puVar10 = puVar10 + 2;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c5d278(uVar11);
  }
  return;
}



/* Entry: 101c4d3fc; end: 101c4d4b3;  */

void FUN_101c4d3fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x80);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    func_0x000107c4d2e4();
    func_0x000107c61180();
    func_0x000107c61170(lStack_38);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c4fd6c(lVar3,param_2,lVar1,0,0);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61170(lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 101c4d4b4; end: 101c4d68f;  */

void FUN_101c4d4b4(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long alStack_68 [3];
  
  if ((int)param_1 == 2) {
    func_0x000107c61428(unaff_x20 + 0x28,alStack_68,0x20,0);
    lVar8 = *(long *)(unaff_x20 + 0x28);
    if (*(long *)(lVar8 + 0x10) == 0) {
      func_0x000107c614a8(alStack_68);
    }
    else {
      func_0x000107c61434(lVar8);
      lVar2 = param_2;
      uVar5 = param_3;
      func_0x000100029284();
      if ((uVar5 & 1) == 0) {
        func_0x000107c614a8(alStack_68);
        func_0x000107c6142c(lVar8);
      }
      else {
        iVar1 = *(int *)(*(long *)(lVar8 + 0x38) + lVar2 * 4);
        func_0x000107c614a8(alStack_68);
        func_0x000107c6142c(lVar8);
        if (iVar1 == 2) goto LAB_101c4d5d8;
      }
    }
    if ((*(char *)(unaff_x20 + 0x58) != '\x01') &&
       (func_0x000100083b20(alStack_68), alStack_68[0] != 0)) {
      puVar3 = PTR___ss6UInt64VN_11034f048;
      puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
      func_0x000107c4bcec(0,alStack_68[0]);
      func_0x000107c615e8(alStack_68[0]);
      func_0x000107c61170(puVar3);
    }
  }
LAB_101c4d5d8:
  func_0x000107c61428(unaff_x20 + 0x28,alStack_68,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61558(uVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0x8000000000000000;
  func_0x000101c4eca0(param_1,param_2,param_3,uVar4);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar7;
  func_0x000107c614a8(alStack_68);
  FUN_101c4c614(param_2,param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101c4d690; end: 101c4d787;  */

/* WARNING: Possible PIC construction at 0x000101c4d74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c4d750) */

void FUN_101c4d690(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x70);
    if (lVar3 == 0) {
      func_0x000107c61434(lVar1);
      uVar2 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      func_0x000107c6157c(lVar3);
      func_0x000107c5fd50();
      func_0x000107c61574(lVar3);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    }
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    func_0x000107c61574(uVar2);
    func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x68));
    uVar2 = 0;
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      func_0x000107c4e454();
      uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    }
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  return;
}



/* Entry: 101c4d788; end: 101c4d953;  */

void FUN_101c4d788(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_38;
  
  if (*(long *)(unaff_x20 + 0x80) == 0) {
    func_0x000100083b20(&lStack_38);
    lVar2 = lStack_38;
    lVar1 = lStack_38;
    func_0x000107c4d2e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000100083b20(&lStack_38);
      lVar1 = lStack_38;
      func_0x000107c40114();
      func_0x000107c61180();
      func_0x000107c61170(lStack_38);
      lVar3 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        lVar1 = lVar3;
        func_0x000107c40980(lVar3,param_2,7);
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        lVar3 = lVar2;
        func_0x000107c40188(lVar2,param_2,lVar1,0,0);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
        *(long *)(unaff_x20 + 0x80) = lVar3;
        func_0x000107c61170(uVar4);
      }
    }
  }
  return;
}



/* Entry: 101c4d954; end: 101c4d973;  */

void FUN_101c4d954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4d974,0,0);
  return;
}



/* Entry: 101c4d974; end: 101c4d9f7;  */

void FUN_101c4d974(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c4d9f8;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_103fca084;
                    /* WARNING: Could not recover jumptable at 0x000103fca080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar6,PTR___swiftEmptySetSingleton_11034f1d8,uVar2,lVar3);
  return;
}



/* Entry: 101c4d9f8; end: 101c4da47;  */

void FUN_101c4d9f8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4da48,0,0);
  return;
}



/* Entry: 101c4da48; end: 101c4db4f;  */

/* WARNING: Removing unreachable block (ram,0x000101c4dae8) */

void FUN_101c4da48(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  lVar2 = *(long *)(unaff_x22 + 0x88);
  if ((uVar1 & 1) == 0) {
    lVar3 = lVar2;
    if (lVar2 != 0) {
      func_0x000107c3e3b4();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar2);
      FUN_101c4ea24();
      func_0x000107c613fc();
      FUN_101c4e5f8(lVar3,param_2);
    }
    *(long *)(unaff_x22 + 0x90) = lVar3;
    uVar4 = 0;
    func_0x000107c5fcec();
    uVar5 = uVar4;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4db50,uVar4,uVar5);
    return;
  }
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x000101c4da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c4db50; end: 101c4dc43;  */

void FUN_101c4db50(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x38,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if ((*(long *)(lVar4 + 0x48) != 0) &&
       (((uVar1 = *(ulong *)(lVar4 + 0x40),
         uVar1 == *(ulong *)(unaff_x22 + 0x68) &&
         *(long *)(lVar4 + 0x48) == *(long *)(unaff_x22 + 0x70) ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)) &&
        (*(long *)(unaff_x22 + 0x78) == *(long *)(lVar4 + 0x78))))) {
      lVar3 = *(long *)(unaff_x22 + 0x90);
      uVar2 = *(undefined8 *)(lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x70) = 0;
      func_0x000107c61574(uVar2);
      if (lVar3 == 0) {
        FUN_101c4d690(4);
      }
      else {
        lVar3 = *(long *)(unaff_x22 + 0x90);
        func_0x000107c6157c(lVar3);
        FUN_101c4dce0();
        func_0x000107c61574(lVar4);
        lVar4 = lVar3;
      }
    }
    func_0x000107c61574(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4dc44,0,0);
  return;
}



/* Entry: 101c4dc44; end: 101c4dc7b;  */

void FUN_101c4dc44(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000101c4dc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c4dc7c; end: 101c4dcdf;  */

void FUN_101c4dc7c(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c4dce0; end: 101c4de6b;  */

void FUN_101c4dce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  FUN_101c4d788();
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  func_0x000107c52030(puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar2 = puVar1;
  func_0x000107c5c734(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126c47f0;
  func_0x000107c610f8();
  pcStack_60 = FUN_101c4fbd0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101c4eb18;
  puStack_68 = &UNK_11045c808;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c(param_1);
  func_0x000107c45848();
  func_0x000107c615e8(puVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(uStack_58);
  if (puVar1 == (undefined *)0x0) {
    FUN_101c4d690(4);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined **)(unaff_x20 + 0x60) = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c61170(uVar4);
    FUN_101c4ded4(puVar1);
    func_0x000107c4edb8(puVar1);
    func_0x000107c4e868(puVar1);
    FUN_101c4d4b4(2,param_2,param_3);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101c4de6c; end: 101c4ded3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c4de6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c48fd4(puVar1,param_2,puVar2,0);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101c4ded4; end: 101c4e127;  */

void FUN_101c4ded4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  uVar11 = *unaff_x20;
  uVar1 = param_1;
  func_0x000107c4e98c();
  func_0x000107c61180();
  puVar7 = &UNK_11045c638;
  puVar2 = puVar7;
  func_0x000107c613fc(&UNK_11045c638,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar8 = &UNK_11045c840;
  puVar3 = puVar8;
  func_0x000107c613fc(&UNK_11045c840,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  uVar10 = unaff_x20[0x11];
  puVar4 = &UNK_11045c868;
  func_0x000107c613fc(&UNK_11045c868,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101c4fbd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100b5fdac;
  puStack_88 = &UNK_11045c880;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c615f4(uVar10,2);
  func_0x000107c61574(puVar4);
  uVar6 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  uVar1 = param_1;
  func_0x000107c4e618(param_1);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11045c638,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  func_0x000107c613fc(&UNK_11045c840,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,param_1);
  puVar4 = &UNK_11045c8b8;
  func_0x000107c613fc(&UNK_11045c8b8,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  *(undefined **)(puVar4 + 0x20) = puVar7;
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  pcStack_80 = FUN_101c4fc34;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x101c4fc94;
  puStack_88 = &UNK_11045c8d0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar6 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101c4e128; end: 101c4e1ff;  */

void FUN_101c4e128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11045c958;
  func_0x000107c613fc(&UNK_11045c958,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  uStack_50 = 0x101c4fc48;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11045c970;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101c4e200; end: 101c4e2af;  */

void FUN_101c4e200(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      if ((*(long *)(param_1 + 0x60) != 0) && (param_2 == *(long *)(param_1 + 0x60))) {
        FUN_101c4e2b0(param_3);
      }
      func_0x000107c61574(param_1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101c4e2b0; end: 101c4e3b3;  */

void FUN_101c4e2b0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x48);
  if (uVar5 == 0) {
    return;
  }
  lVar7 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c61434(uVar5);
  func_0x000107c49820();
  iVar4 = 2;
  if (param_1 != 0) {
    iVar4 = 3;
  }
  func_0x000107c61428(unaff_x20 + 0x28,auStack_68,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_101c4e39c:
    func_0x000107c614a8(auStack_68);
  }
  else {
    func_0x000107c61434(lVar6);
    lVar2 = lVar7;
    uVar3 = uVar5;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_101c4e39c;
    }
    iVar1 = *(int *)(*(long *)(lVar6 + 0x38) + lVar2 * 4);
    func_0x000107c6142c(lVar6);
    func_0x000107c614a8(auStack_68);
    if (iVar1 == iVar4) goto LAB_101c4e370;
  }
  if (param_1 == 0) {
    FUN_101c4d788();
  }
  FUN_101c4d4b4(iVar4,lVar7,uVar5);
LAB_101c4e370:
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101c4e3b4; end: 101c4e53f;  */

void FUN_101c4e3b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_98;
  double dStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c42378(&puStack_98);
    dVar3 = dStack_90;
    func_0x000107c60a3c(&puStack_98);
    func_0x000107c3ab48(&puStack_98,param_1);
    dVar4 = dStack_90;
    func_0x000107c60a3c(&puStack_98);
    if (((0.0 < dVar3) && ((ulong)ABS(dVar4) < 0x7ff0000000000000)) && (dVar3 + -0.05 <= dVar4)) {
      puVar1 = &UNK_11045c908;
      func_0x000107c613fc(&UNK_11045c908,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = param_4;
      *(long *)(puVar1 + 0x18) = param_2;
      uStack_78 = 0x101c4fc40;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      dStack_90 = 5.47077039858234e-315;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11045c920;
      ppuVar2 = &puStack_98;
      puStack_70 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_70;
      func_0x000107c6157c(param_4);
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(param_3);
      func_0x000107c60bd0(ppuVar2);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101c4e540; end: 101c4e5ab;  */

void FUN_101c4e540(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x60) != 0 && param_2 == *(long *)(param_1 + 0x60)) {
      FUN_101c4d690(0);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c4e5ac; end: 101c4e5f7;  */

void FUN_101c4e5ac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c4e5f8; end: 101c4e893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101c4e5f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lStack_a0 = *unaff_x20;
  lVar2 = 0;
  uStack_88 = param_1;
  uStack_80 = param_2;
  func_0x000107c5eec8();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_00;
  func_0x000107c60b1c();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5faec();
  func_0x000107c61170(lVar2);
  uVar6 = param_2;
  func_0x000107c5ed80(lVar8,lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c602fc(0x16);
  uVar5 = 0xe000000000000000;
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5eeac();
  uVar1 = uStack_88;
  (**(code **)(lStack_98 + 8))(lVar9,lStack_90);
  func_0x000107c5fb78(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5ed9c(lVar12,0xd000000000000014,0x800000010f0050a0);
  func_0x000107c6142c(0x800000010f0050a0);
  uVar6 = uStack_80;
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(lVar8,lVar3);
  func_0x000107c5eda0(lVar11,0x766177,0xe300000000000000);
  (*pcVar7)(lVar12,lVar3);
  func_0x000107c5ee40(lVar11,1,uVar1,uVar6);
  if (unaff_x21 == 0) {
    func_0x00010006c090(uVar1,uVar6);
    (**(code **)(lVar10 + 0x20))((long)unaff_x20 + _DAT_112e0b908,lVar11,lVar3);
  }
  else {
    func_0x000107c61654();
    func_0x00010006c090(uVar1,uVar6);
    (*pcVar7)(lVar11,lVar3);
    func_0x000107c61464(unaff_x20,lStack_a0,*(undefined4 *)(*unaff_x20 + 0x30),
                        *(undefined2 *)(*unaff_x20 + 0x34));
  }
  return unaff_x20;
}



/* Entry: 101c4e894; end: 101c4e9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c4e894(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long alStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + lVar1;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  lVar2 = _DAT_112e0b908;
  puVar5 = puVar9;
  (**(code **)(lVar10 + 0x10))(puVar9,unaff_x20 + _DAT_112e0b908,lVar3);
  func_0x000107c5ed90();
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(puVar9,lVar3);
  uStack_60 = 0;
  puVar6 = puVar4;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  uVar8 = uStack_60;
  if ((int)puVar6 == 0) {
    uVar7 = uStack_60;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(uVar8);
  }
  else {
    func_0x000107c61174();
  }
  (*pcVar11)(unaff_x20 + lVar2,lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  *(undefined1 **)((long)alStack_80 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_80 + lVar1 + 8) = FUN_101c4e9fc;
  FUN_101c4e894();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c4e9fc; end: 101c4ea1b;  */

void FUN_101c4e9fc(void)

{
  FUN_101c4e894();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c4ea1c; end: 101c4ea23;  */

void FUN_101c4ea1c(void)

{
  if (lRam0000000112e0b938 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e67c114);
  return;
}



/* Entry: 101c4ea24; end: 101c4ea5b;  */

void FUN_101c4ea24(undefined8 param_1)

{
  if (lRam0000000112e0b938 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67c114);
  return;
}



/* Entry: 101c4ea5c; end: 101c4eaef;  */

void FUN_101c4ea5c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 101c4eaf0; end: 101c4eb17;  */

void FUN_101c4eaf0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    (*pcVar1)();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101c4eb18; end: 101c4eb4f;  */

void FUN_101c4eb18(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c4eb50; end: 101c4f0bf;  */

void FUN_101c4eb50(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c4ec28);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101c4f0c0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c4ebf0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101c4ede8();
    lVar6 = *unaff_x20;
    goto joined_r0x000101c4ec3c;
  }
  lVar6 = *unaff_x20;
joined_r0x000101c4ec3c:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c4eca0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101c4f0c0; end: 101c4f94f;  */

void FUN_101c4f0c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e0b748;
  func_0x0001000285a8(0x112e0b748,&UNK_10d9e4fd0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101c4f328:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c4f358);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101c4f328;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c4f35c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101c4f950; end: 101c4f957;  */

void FUN_101c4f950(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101c4f958; end: 101c4faa7;  */

long FUN_101c4f958(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101c4faa8);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101c4faa4);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_101c4fa68;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_101c4fa68:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 101c4faa8; end: 101c4faaf;  */

void FUN_101c4faa8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x48);
  if ((uVar4 == 0) ||
     ((uVar3 = *(ulong *)(param_1 + 0x40), uVar3 != uVar1 || uVar4 != uVar2 &&
      (func_0x000107c605b8(uVar3,uVar4,uVar1,uVar2,0), (uVar3 & 1) == 0)))) {
    func_0x000107c61428(param_1 + 0x28,auStack_58,0x20,0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar5 + 0x10) == 0) {
      func_0x000107c614a8(auStack_58);
    }
    else {
      func_0x000107c61434(lVar5);
      uVar4 = uVar2;
      func_0x000100029284(uVar1);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar5);
      if ((uVar4 & 1) != 0) {
        FUN_101c4d4b4(0,uVar1,uVar2);
      }
    }
  }
  else {
    FUN_101c4d690(0);
  }
  return;
}



/* Entry: 101c4fab0; end: 101c4fadb;  */

void FUN_101c4fab0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c4c77c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101c4fadc; end: 101c4fb07;  */

void FUN_101c4fadc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c4fb08; end: 101c4fb93;  */

void FUN_101c4fb08(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101c4fb94;
  plVar7[0xe] = lVar3;
  plVar7[0xf] = lVar6;
  plVar7[0xc] = lVar2;
  plVar7[0xd] = lVar5;
  plVar7[10] = lVar1;
  plVar7[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4d974,0,0);
  return;
}



/* Entry: 101c4fb94; end: 101c4fbcf;  */

void FUN_101c4fb94(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c4fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c4fbd0; end: 101c4fbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c4fbd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c48fd4(puVar1,param_2,puVar2,0);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101c4fbe4; end: 101c4fc33;  */

void FUN_101c4fbe4(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c4fc34; end: 101c4fca3;  */

void FUN_101c4fc34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined *puStack_98;
  double dStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c42378(&puStack_98);
    dVar6 = dStack_90;
    func_0x000107c60a3c(&puStack_98);
    func_0x000107c3ab48(&puStack_98,param_1);
    dVar7 = dStack_90;
    func_0x000107c60a3c(&puStack_98);
    if (((0.0 < dVar6) && ((ulong)ABS(dVar7) < 0x7ff0000000000000)) && (dVar6 + -0.05 <= dVar7)) {
      puVar4 = &UNK_11045c908;
      func_0x000107c613fc(&UNK_11045c908,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar1;
      *(long *)(puVar4 + 0x18) = lVar3;
      uStack_78 = 0x101c4fc40;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      dStack_90 = 5.47077039858234e-315;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_11045c920;
      ppuVar5 = &puStack_98;
      puStack_70 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_70;
      func_0x000107c6157c(uVar1);
      func_0x000107c61174(lVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar2);
      func_0x000107c60bd0(ppuVar5);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101c4fca4; end: 101c4ffdb;  */

undefined * FUN_101c4fca4(undefined *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puVar3;
  
  ppuVar5 = &puStack_70;
  FUN_101c51218();
  if ((param_2 & 0xff) == 1) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  else {
    puVar2 = &UNK_11045cae8;
    func_0x000107c613fc(&UNK_11045cae8,0x18,7);
    *(undefined **)(puVar2 + 0x10) = param_1;
    puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c61168();
    iVar1 = (int)puVar3;
    func_0x000107c4a02c();
    if (iVar1 == 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
      puVar3 = &UNK_11045c9d0;
      func_0x000107c613fc(&UNK_11045c9d0,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_11045cb10;
      func_0x000107c613fc(&UNK_11045cb10,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(code **)(puVar4 + 0x18) = FUN_101c515f0;
      *(undefined **)(puVar4 + 0x20) = puVar2;
      uStack_50 = 0x101c5169c;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11045cb28;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c60bd0(ppuVar5);
    }
    else {
      FUN_101c500c8();
      func_0x000101c50218(param_1);
      func_0x000107c61574(puVar2);
    }
    puVar2 = PTR___ss6UInt64VN_11034f048;
    puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    puStack_70 = param_1;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000101c503fc();
    func_0x000107c6142c(puVar3);
  }
  return puVar2;
}



/* Entry: 101c4ffdc; end: 101c500c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c4ffdc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    func_0x000100083b20(&lStack_38);
    lVar1 = *(long *)(lStack_38 + _DAT_112fdbe90);
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c40a14(lVar2,param_2,1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000101c515d0(uVar4);
  }
  func_0x000101c515e0(lVar3);
  return lVar2;
}



/* Entry: 101c500c8; end: 101c50563;  */

void FUN_101c500c8(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (((*(byte *)(unaff_x20 + 0x58) & 1) == 0) && (FUN_101c4ffdc(), param_1 != 0)) {
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
    lVar1 = param_1;
    func_0x000107c5d58c();
    func_0x000107c61180();
    pcVar2 = "observeUpdatesIfNeeded()";
    func_0x0001000c10c0("observeUpdatesIfNeeded()");
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c4da88(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(pcVar2);
    puVar4 = &UNK_11045c9d0;
    func_0x000107c613fc(&UNK_11045c9d0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_50 = FUN_101c515c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_101c50f28;
    puStack_58 = &UNK_11045cab0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar1 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar1);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101c50564; end: 101c508cb;  */

void FUN_101c50564(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  byte bVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  FUN_101c51218();
  if (((param_2 & 0xff) != 1) && (puVar1 = param_1, FUN_101c4ffdc(), puVar1 != (undefined *)0x0)) {
    FUN_101c500c8();
    puVar2 = PTR___ss6UInt64VN_11034f048;
    puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    puStack_80 = param_1;
    func_0x000107c6057c();
    func_0x000107c61428(unaff_x20 + 0x38,&puStack_80,0x20,0);
    lVar8 = *(long *)(unaff_x20 + 0x38);
    if (*(long *)(lVar8 + 0x10) == 0) {
      bVar9 = 0;
    }
    else {
      func_0x000107c61434(lVar8);
      puVar3 = puVar2;
      puVar7 = puVar4;
      func_0x000100029284();
      if (((ulong)puVar7 & 1) == 0) {
        bVar9 = 0;
      }
      else {
        bVar9 = puVar3[*(long *)(lVar8 + 0x38)];
      }
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c614a8(&puStack_80);
    func_0x000101c50768(bVar9 ^ 1,puVar2,puVar4);
    func_0x000107c6142c(puVar4);
    puVar2 = puVar1;
    if ((bVar9 & 1) == 0) {
      func_0x000107c3d920(puVar1);
    }
    else {
      func_0x000107c5003c();
    }
    func_0x000107c61180();
    puVar4 = &UNK_11045c9d0;
    func_0x000107c613fc(&UNK_11045c9d0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar3 = &UNK_11045ca48;
    func_0x000107c613fc(&UNK_11045ca48,0x28,7);
    puVar3[0x10] = bVar9 ^ 1;
    *(undefined **)(puVar3 + 0x18) = param_1;
    *(undefined **)(puVar3 + 0x20) = puVar4;
    pcStack_60 = FUN_101c51504;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1011b0640;
    puStack_68 = &UNK_11045ca60;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    pcVar6 = "toggleSaveOnMain(trackId:)";
    func_0x0001000c10c0("toggleSaveOnMain(trackId:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar2);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101c508cc; end: 101c50a6b;  */

void FUN_101c508cc(undefined8 param_1,long param_2,byte param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  lVar2 = param_5 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(lVar2);
    func_0x000100083b20(alStack_70);
    func_0x000107c61574(uVar5);
    if (alStack_70[0] != 0) {
      puVar3 = PTR___ss6UInt64VN_11034f048;
      puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
      func_0x000107c4bce8(alStack_70[0]);
      func_0x000107c615e8(alStack_70[0]);
      func_0x000107c61170(puVar3);
    }
  }
  func_0x000107c61428(param_5 + 0x10,alStack_70,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x18);
    uVar1 = *(undefined8 *)(param_5 + 0x20);
    puVar3 = &UNK_11045ca98;
    func_0x000107c613fc(&UNK_11045ca98,0x29,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar1;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    puVar3[0x28] = param_3 & 1;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar5);
    uVar5 = 0xb;
    func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e5078,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 101c50a6c; end: 101c50adf;  */

void FUN_101c50a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c50ae0,uVar1,uVar2);
  return;
}



/* Entry: 101c50ae0; end: 101c50b9f;  */

void FUN_101c50ae0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  uVar4 = 0x112e0b708;
  func_0x0001000285a8(0x112e0b708,&UNK_10d9e4df0);
  func_0x000107c61538();
  FUN_101c4b0b4();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c50ba0;
                    /* WARNING: Could not recover jumptable at 0x000101c50b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x48),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c50ba0; end: 101c50c23;  */

void FUN_101c50ba0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  if (unaff_x20 == 0) {
    func_0x000107c6142c(uVar3);
    *(undefined8 *)(lVar4 + 0x80) = param_1;
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_101c50c24;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_101c50cb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 101c50c24; end: 101c50cb7;  */

void FUN_101c50c24(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = *(undefined1 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = uVar3;
  func_0x000107c3dab0(uVar3);
  func_0x000107c61180();
  func_0x000107c5c2b8(uVar4,param_2,uVar1,uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101c50cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c50cb8; end: 101c50d3f;  */

void FUN_101c50cb8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = *(undefined1 *)(unaff_x22 + 0x88);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000100083b20(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = 0;
  func_0x000107c3dab0(0);
  func_0x000107c61180();
  func_0x000107c5c2b8(uVar3,param_2,uVar1,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c50d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c50d40; end: 101c50f27;  */

void FUN_101c50d40(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  lVar2 = param_1;
  func_0x000107c42e20();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61574(param_2);
    return;
  }
  lVar3 = lVar2;
  func_0x000107c3ebcc();
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c50f24);
    (*pcVar1)();
  }
  lVar7 = lVar2;
  func_0x000107c44fd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(lVar7);
  func_0x000107c4b940(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61428(param_2 + 0x48,auStack_80,0x20,0);
  lVar7 = *(long *)(param_2 + 0x48);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    puVar6 = puVar5;
    func_0x000100029284();
    if (((ulong)puVar6 & 1) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar4);
      func_0x000107c614a8(auStack_80);
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(lVar7);
      func_0x000107c5d278(*(undefined8 *)(param_2 + 0x40));
      func_0x000107c6142c(puVar5);
      func_0x000107c42c98();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c50f28);
        (*pcVar1)();
      }
      lVar2 = param_1;
      func_0x000107c44fd4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar7 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000101c50768(lVar3,lVar7,puVar6);
      puVar5 = puVar6;
      goto LAB_101c50ef4;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_80);
  func_0x000107c5d278(*(undefined8 *)(param_2 + 0x40));
LAB_101c50ef4:
  func_0x000107c61574(param_2);
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 101c50f28; end: 101c50f73;  */

void FUN_101c50f28(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c50f74; end: 101c510b7;  */

void FUN_101c50f74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  if (param_1 == 0) {
    func_0x000107c61428(param_3 + 0x50,auStack_70,0x21,0);
    func_0x0001010af1e4(param_4,param_5);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_3);
LAB_101c5105c:
    func_0x000107c6142c(param_5);
  }
  else {
    func_0x000107c61428(param_3 + 0x38,auStack_70,0x20,0);
    uVar1 = *(ulong *)(param_3 + 0x38);
    lVar2 = *(long *)(uVar1 + 0x10);
    func_0x000107c61174(param_1);
    if (lVar2 != 0) {
      func_0x000107c61434(uVar1);
      func_0x000100029284(param_4);
      if ((param_5 & 1) != 0) {
        func_0x000107c614a8(auStack_70);
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        param_5 = uVar1;
        goto LAB_101c5105c;
      }
      func_0x000107c6142c(uVar1);
    }
    func_0x000107c614a8(auStack_70);
    func_0x000107c3ebcc(param_1);
    func_0x000101c50768();
    func_0x000107c61574(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101c510b8; end: 101c5111b;  */

void FUN_101c510b8(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 101c5111c; end: 101c511c7;  */

void FUN_101c5111c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000101c515d0(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101c511c8; end: 101c511ef;  */

void FUN_101c511c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101c50564(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101c511f0; end: 101c51217;  */

void FUN_101c511f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    (*pcVar1)();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 101c51218; end: 101c51503;  */

undefined1  [16] FUN_101c51218(byte *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  long lVar9;
  byte **ppbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  byte *pbStack_40;
  ulong uStack_38;
  
  uVar11 = param_2 >> 0x38 & 0xf;
  uVar12 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if (uVar12 == 0) goto LAB_101c5148c;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) != 0) {
      pbStack_40 = param_1;
      uStack_38 = param_2 & 0xffffffffffffff;
      uVar1 = (uint)param_1 & 0xff;
      if (uVar1 == 0x2b) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c51504);
          (*pcVar8)();
        }
        lVar9 = uVar11 - 1;
        if (lVar9 == 0) goto LAB_101c51474;
        param_1 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&pbStack_40 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = param_1, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*pbVar13 - 0x30),
             param_1 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c51474;
          uVar12 = 0;
          lVar9 = lVar9 + -1;
          pbVar13 = pbVar13 + 1;
        } while (lVar9 != 0);
      }
      else if (uVar1 == 0x2d) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101c514fc);
          (*pcVar8)();
        }
        lVar9 = uVar11 - 1;
        if (lVar9 == 0) {
LAB_101c51474:
          param_1 = (byte *)0x0;
          uVar12 = 1;
        }
        else {
          param_1 = (byte *)0x0;
          pbVar13 = (byte *)((ulong)&pbStack_40 | 1);
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (auVar3._8_8_ = 0, auVar3._0_8_ = param_1, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
               (uVar11 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*pbVar13 - 0x30),
               param_1 = (byte *)(uVar11 - uVar12), uVar11 < uVar12)) goto LAB_101c51474;
            uVar12 = 0;
            lVar9 = lVar9 + -1;
            pbVar13 = pbVar13 + 1;
          } while (lVar9 != 0);
        }
      }
      else {
        if (uVar11 == 0) goto LAB_101c51474;
        param_1 = (byte *)0x0;
        ppbVar10 = &pbStack_40;
        do {
          if (((9 < *(byte *)ppbVar10 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = param_1, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar14 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*(byte *)ppbVar10 - 0x30),
             param_1 = (byte *)(uVar14 + uVar12), CARRY8(uVar14,uVar12))) goto LAB_101c51474;
          uVar12 = 0;
          uVar11 = uVar11 - 1;
          ppbVar10 = (byte **)((long)ppbVar10 + 1);
        } while (uVar11 != 0);
      }
      goto LAB_101c5147c;
    }
    if (((ulong)param_1 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
      pbVar13 = param_1;
    }
    else {
      uVar12 = param_2 & 0xfffffffffffffff;
      param_2 = (ulong)param_1 & 0xffffffffffff;
      pbVar13 = (byte *)(uVar12 + 0x20);
    }
    if (*pbVar13 == 0x2b) {
      lVar9 = param_2 - 1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101c51500);
        (*pcVar8)();
      }
      if (lVar9 != 0) {
        param_1 = (byte *)0x0;
        do {
          pbVar13 = pbVar13 + 1;
          if (((9 < *pbVar13 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = param_1, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*pbVar13 - 0x30),
             param_1 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c5148c;
          uVar12 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        goto LAB_101c5147c;
      }
    }
    else if (*pbVar13 == 0x2d) {
      lVar9 = param_2 - 1;
      if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101c514f8);
        (*pcVar8)();
      }
      if (lVar9 != 0) {
        param_1 = (byte *)0x0;
        do {
          pbVar13 = pbVar13 + 1;
          if (((9 < *pbVar13 - 0x30) ||
              (auVar2._8_8_ = 0, auVar2._0_8_ = param_1, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*pbVar13 - 0x30),
             param_1 = (byte *)(uVar11 - uVar12), uVar11 < uVar12)) goto LAB_101c5148c;
          uVar12 = 0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        goto LAB_101c5147c;
      }
    }
    else if ((pbVar13 != (byte *)0x0) && (param_2 != 0)) {
      param_1 = (byte *)0x0;
      do {
        if (((9 < *pbVar13 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = param_1, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar11 = (long)param_1 * 10, uVar12 = (ulong)(byte)(*pbVar13 - 0x30),
           param_1 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c5148c;
        uVar12 = 0;
        param_2 = param_2 - 1;
        pbVar13 = pbVar13 + 1;
      } while (param_2 != 0);
      goto LAB_101c5147c;
    }
  }
  else {
    func_0x000107c61434(param_2);
    uVar12 = param_2;
    func_0x000100f5015c(param_1,param_2,10);
    func_0x000107c6142c(param_2);
LAB_101c5147c:
    if ((((uint)uVar12 & 0xff) != 1) && (param_1 != (byte *)0x0)) goto LAB_101c51494;
  }
LAB_101c5148c:
  param_1 = (byte *)0x0;
  uVar12 = 1;
LAB_101c51494:
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 101c51504; end: 101c5150f;  */

void FUN_101c51504(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  bVar2 = *(byte *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar3 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(lVar3);
    func_0x000100083b20(alStack_70);
    func_0x000107c61574(uVar8);
    if (alStack_70[0] != 0) {
      puVar4 = PTR___ss6UInt64VN_11034f048;
      puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
      func_0x000107c4bce8(alStack_70[0]);
      func_0x000107c615e8(alStack_70[0]);
      func_0x000107c61170(puVar4);
    }
  }
  func_0x000107c61428(lVar5 + 0x10,alStack_70,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    puVar4 = &UNK_11045ca98;
    func_0x000107c613fc(&UNK_11045ca98,0x29,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar1;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(undefined8 *)(puVar4 + 0x20) = uVar8;
    puVar4[0x28] = bVar2 & 1;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar8);
    uVar6 = 0xb;
    func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e5078,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 101c51510; end: 101c5158b;  */

void FUN_101c51510(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c5158c;
  *(undefined1 *)(plVar4 + 0x11) = uVar1;
  plVar4[9] = lVar2;
  plVar4[10] = lVar5;
  plVar4[8] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0xb] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0xc] = lVar2;
  plVar4[0xd] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c50ae0,lVar2,lVar3);
  return;
}



/* Entry: 101c5158c; end: 101c515c7;  */

void FUN_101c5158c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c515c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c515c8; end: 101c515ef;  */

void FUN_101c515c8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1;
  func_0x000107c42e20();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61574(lVar2);
    return;
  }
  lVar4 = lVar3;
  func_0x000107c3ebcc();
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c50f24);
    (*pcVar1)();
  }
  lVar8 = lVar3;
  func_0x000107c44fd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61428(lVar2 + 0x48,auStack_80,0x20,0);
  lVar8 = *(long *)(lVar2 + 0x48);
  if (*(long *)(lVar8 + 0x10) != 0) {
    func_0x000107c61434(lVar8);
    puVar7 = puVar6;
    func_0x000100029284();
    if (((ulong)puVar7 & 1) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
      func_0x000107c61174(uVar5);
      func_0x000107c614a8(auStack_80);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(lVar8);
      func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x40));
      func_0x000107c6142c(puVar6);
      func_0x000107c42c98();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c50f28);
        (*pcVar1)();
      }
      lVar3 = param_1;
      func_0x000107c44fd4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar8 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000101c50768(lVar4,lVar8,puVar7);
      puVar6 = puVar7;
      goto LAB_101c50ef4;
    }
    func_0x000107c6142c(lVar8);
  }
  func_0x000107c614a8(auStack_80);
  func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x40));
LAB_101c50ef4:
  func_0x000107c61574(lVar2);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 101c515f0; end: 101c5166f;  */

void FUN_101c515f0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101c500c8();
  func_0x000101c50218(uVar1);
  return;
}



/* Entry: 101c51670; end: 101c5169f;  */

void FUN_101c51670(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  if (param_1 == 0) {
    func_0x000107c61428(lVar2 + 0x50,auStack_70,0x21,0);
    func_0x0001010af1e4(uVar1,uVar3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(lVar2);
LAB_101c5105c:
    func_0x000107c6142c(uVar3);
  }
  else {
    func_0x000107c61428(lVar2 + 0x38,auStack_70,0x20,0);
    uVar4 = *(ulong *)(lVar2 + 0x38);
    lVar5 = *(long *)(uVar4 + 0x10);
    func_0x000107c61174(param_1);
    if (lVar5 != 0) {
      func_0x000107c61434(uVar4);
      func_0x000100029284(uVar1);
      if ((uVar3 & 1) != 0) {
        func_0x000107c614a8(auStack_70);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(param_1);
        uVar3 = uVar4;
        goto LAB_101c5105c;
      }
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c614a8(auStack_70);
    func_0x000107c3ebcc(param_1);
    func_0x000101c50768();
    func_0x000107c61574(lVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101c516a0; end: 101c51717;  */

void FUN_101c516a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar1);
  func_0x000100292220(0);
  func_0x000107c610f8();
  func_0x0001028f087c();
  *param_1 = puVar2;
  return;
}



/* Entry: 101c51718; end: 101c51727;  */

undefined1  [16] FUN_101c51718(void)

{
  return ZEXT816(0x11045cc50);
}



/* Entry: 101c51728; end: 101c51817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112e0bb08,0);
  lVar1 = _DAT_112e0bb10;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e0bb18;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e0bb20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e0baf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e0baf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e0bb00) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c51818; end: 101c51887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51818(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112e0bb08;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c51888; end: 101c51907; -[_TtC45NotificationCenterBadgeServicesImplementation35NotificationCenterBadgeUpdateDriver dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c51888(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = param_1 + _DAT_112e0bb08;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar2 != 0) {
    func_0x000107c4ff64(lVar2);
    func_0x000107c615e8(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}


