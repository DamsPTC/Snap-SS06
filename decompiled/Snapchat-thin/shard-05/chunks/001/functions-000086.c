/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b08de8; end: 103b08e07;  */

void FUN_103b08de8(void)

{
  func_0x000107c61168(&PTR_PTR_112928608);
  return;
}



/* Entry: 103b08e08; end: 103b08f6f;  */

int FUN_103b08e08(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b08e84;
        goto LAB_103b08e68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b08e68:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103b08e84:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b08f70; end: 103b08faf;  */

void FUN_103b08f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112feba90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54690;
  func_0x000107c61520(&UNK_10dc54690,&UNK_1106d2510);
  puRam0000000112feba90 = puVar1;
  return;
}



/* Entry: 103b08fb0; end: 103b08fb7;  */

void FUN_103b08fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103b08fb8; end: 103b09023;  */

void FUN_103b08fb8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b09024; end: 103b09033; -[SCReactionsDetailViewModel conversationMessageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feba98));
  return;
}



/* Entry: 103b09034; end: 103b09043; -[SCReactionsDetailViewModel isReactable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b09034(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112febaa0);
}



/* Entry: 103b09044; end: 103b09093; -[SCReactionsDetailViewModel reactions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09044(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112febaa8);
  FUN_103b08624(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b09094; end: 103b090a3; -[SCReactionsDetailViewModel focusedMessageViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febab0));
  return;
}



/* Entry: 103b090a4; end: 103b0912f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b090a4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feba98) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112febaa0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112febaa8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112febab0) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b09130; end: 103b0925f; -[SCReactionsDetailViewModel initWithConversationMessageId:isReactable:reactions:focusedMessageViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09130(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_103b08624(0);
  func_0x000107c5fc54(param_5,uVar3);
  *(undefined8 *)(param_1 + _DAT_112feba98) = param_3;
  *(undefined1 *)(param_1 + _DAT_112febaa0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112febaa8) = param_5;
  *(undefined8 *)(param_1 + _DAT_112febab0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 103b09260; end: 103b09263; -[SCReactionsDetailViewModel copyWithZone:] */

void FUN_103b09260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b09264; end: 103b092c7; -[SCReactionsDetailViewModel description] */

void FUN_103b09264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103b09a5c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b092c8; end: 103b09343; -[SCReactionsDetailViewModel init] */

void FUN_103b092c8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCReactionsDetailScope/SCReactionsDetailViewModelWrapper.swift",0x3e,2,0x37,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b09310);
  (*pcVar1)();
}



/* Entry: 103b09344; end: 103b0938b; -[SCReactionsDetailViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b09360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b09364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112feba98));
  return;
}



/* Entry: 103b0938c; end: 103b093c3;  */

void FUN_103b0938c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103b093c4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103b093c4; end: 103b094e7;  */

undefined * FUN_103b093c4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b094e8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103b09608();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103b08624(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103b094e8; end: 103b09607;  */

undefined * FUN_103b094e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b09608);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112febae0;
    func_0x0001000285a8(0x112febae0,&UNK_10dc54750);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x58) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106d2350);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x58 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 103b09608; end: 103b09663;  */

void FUN_103b09608(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103b08624();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112febae8;
  plVar5 = (long *)&UNK_10dc54758;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103b09664; end: 103b09d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09664(undefined8 param_1,undefined1 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long unaff_x20;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112feba98) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112febaa0) = param_2;
  lVar20 = *(long *)(param_3 + 0x10);
  if (lVar20 == 0) {
    func_0x000107c61174(param_1);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(param_1);
    FUN_103b0938c(0,lVar20,0);
    puVar19 = puStack_70;
    lVar12 = 0;
    FUN_103b08624();
    puVar22 = (undefined8 *)(param_3 + 0x38);
    do {
      uVar2 = puVar22[-3];
      uVar6 = puVar22[-2];
      uVar3 = puVar22[-1];
      uVar7 = *puVar22;
      uVar4 = puVar22[1];
      uVar8 = puVar22[2];
      cVar10 = *(char *)(puVar22 + 3);
      uVar17 = puVar22[4];
      uVar9 = puVar22[5];
      uVar21 = puVar22[6];
      uVar11 = *(undefined1 *)(puVar22 + 7);
      lVar13 = lVar12;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar13 + _DAT_112feb9f0);
      *puVar1 = uVar2;
      puVar1[1] = uVar6;
      if (cVar10 == '\x01') {
        lVar14 = 0;
        FUN_103b08de8();
        lVar15 = lVar14;
        func_0x000107c610f8();
        *(undefined1 *)(lVar15 + _DAT_112feba40) = 1;
        *(undefined8 *)(lVar15 + _DAT_112feba50) = 0;
        *(undefined8 *)(lVar15 + _DAT_112feba58) = 0;
        puVar1 = (undefined8 *)(lVar15 + _DAT_112feba60);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar15 + _DAT_112feba48);
        *puVar1 = uVar3;
        puVar1[1] = uVar7;
        func_0x000107c61434(uVar6);
        func_0x000103b07268(uVar3,uVar7,uVar4,uVar8,1);
        func_0x000107c61434(uVar21);
        func_0x000107c61434(uVar6);
        func_0x000107c61174(uVar17);
        func_0x000103b07268(uVar3,uVar7,uVar4,uVar8,1);
        plVar16 = &lStack_80;
        puVar18 = PTR_s_init_1125d9248;
        lStack_80 = lVar15;
        lStack_78 = lVar14;
      }
      else {
        lVar14 = 0;
        FUN_103b08de8();
        lVar15 = lVar14;
        func_0x000107c610f8();
        *(undefined1 *)(lVar15 + _DAT_112feba40) = 0;
        *(undefined8 *)(lVar15 + _DAT_112feba50) = uVar3;
        *(undefined8 *)(lVar15 + _DAT_112feba58) = uVar7;
        puVar1 = (undefined8 *)(lVar15 + _DAT_112feba60);
        *puVar1 = uVar4;
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)(lVar15 + _DAT_112feba48);
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x000107c61434(uVar6);
        func_0x000103b07268(uVar3,uVar7,uVar4,uVar8,cVar10);
        puVar18 = PTR_s_init_1125d9248;
        lStack_b0 = lVar15;
        lStack_a8 = lVar14;
        func_0x000107c61174(uVar17);
        func_0x000107c61434(uVar21);
        func_0x000107c61434(uVar6);
        func_0x000107c61174(uVar3);
        func_0x000107c61434(uVar8);
        func_0x000107c61174(uVar7);
        plVar16 = &lStack_b0;
      }
      func_0x000107c61154(plVar16,puVar18);
      *(long **)(lVar13 + _DAT_112feb9f8) = plVar16;
      *(undefined8 *)(lVar13 + _DAT_112feba00) = uVar17;
      puVar1 = (undefined8 *)(lVar13 + _DAT_112feba08);
      *puVar1 = uVar9;
      puVar1[1] = uVar21;
      *(undefined1 *)(lVar13 + _DAT_112feba10) = uVar11;
      puVar18 = PTR_s_init_1125d9248;
      lStack_90 = lVar13;
      lStack_88 = lVar12;
      func_0x000107c61174();
      func_0x000107c61434(uVar21);
      plVar16 = &lStack_90;
      func_0x000107c61154(plVar16,puVar18);
      func_0x000107c6142c(uVar6);
      func_0x000103b072f8(uVar3,uVar7,uVar4,uVar8,cVar10);
      func_0x000107c6142c(uVar21);
      func_0x000107c61170(uVar17);
      uVar5 = *(ulong *)(puVar19 + 0x10);
      puStack_70 = puVar19;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar5) {
        FUN_103b0938c(1 < *(ulong *)(puVar19 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puStack_70 + 0x10) = uVar5 + 1;
      *(long **)(puStack_70 + uVar5 * 8 + 0x20) = plVar16;
      puVar22 = puVar22 + 0xb;
      lVar20 = lVar20 + -1;
      puVar19 = puStack_70;
    } while (lVar20 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112febaa8) = puVar19;
  *(undefined8 *)(unaff_x20 + _DAT_112febab0) = param_4;
  puVar19 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_4);
  func_0x000107c61154(auStack_a0,puVar19);
  return;
}



/* Entry: 103b09d58; end: 103b09d77;  */

void FUN_103b09d58(void)

{
  func_0x000107c61168(&PTR_PTR_1129286e8);
  return;
}



/* Entry: 103b09d78; end: 103b09dc7; -[SCNMessagingConversation canUserSendMessage] */

uint FUN_103b09d78(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar2 = param_1;
  func_0x000107c4a004();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x000107c49b24(param_1);
    func_0x000107c61170(param_1);
    uVar1 = (uint)uVar2 ^ 1;
  }
  else {
    func_0x000107c61170(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 103b09dc8; end: 103b09e4b;  */

ulong FUN_103b09dc8(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c5d0f0();
  uVar3 = 1;
  switch(uVar2) {
  default:
    uVar3 = 0;
    break;
  case 1:
  case 7:
  case 0x1c:
  case 0x26:
  case 0x2b:
  case 0x2c:
    break;
  case 2:
  case 0xb:
    func_0x000107c4a430();
    return unaff_x20;
  case 0x10:
    uVar2 = unaff_x20;
    func_0x000107c4a384();
    if (((uVar2 & 1) != 0) || (uVar3 = unaff_x20, func_0x000107c4a71c(), (int)uVar3 != 0)) {
      func_0x000107c4ca5c();
      uVar1 = (uint)unaff_x20;
      func_0x0001085436b8();
      return (ulong)(uVar1 ^ 1);
    }
  }
  return uVar3;
}



/* Entry: 103b09e4c; end: 103b09e7f; -[SCNMessagingMessage canSnapReply] */

uint FUN_103b09e4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b09dc8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103b09e80; end: 103b09e9f; +[SCChatAnchorAboveInputBarHelpers isEligibleForSubtype:windowDays:] */

uint FUN_103b09e80(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_3 < 6) {
    uVar1 = 0x31 >> (ulong)((uint)param_3 & 0x1f);
  }
  uVar2 = 0;
  if (0 < param_4) {
    uVar2 = uVar1;
  }
  return uVar2 & 1;
}



/* Entry: 103b09ea0; end: 103b09edb; -[SCChatAnchorAboveInputBarHelpers init] */

void FUN_103b09ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b09edc; end: 103b09f2f;  */

void FUN_103b09edc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b09f30; end: 103b09fb3; -[SCStoriesPostingQuickSendViewModel myStorySelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b09f30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb18;
  func_0x000107c61428(param_1 + _DAT_112febb18,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103b09fb4; end: 103b0a04f; -[SCStoriesPostingQuickSendViewModel setMyStorySelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b09fb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112febb18;
  func_0x000107c61428(param_1 + _DAT_112febb18,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103b0a050; end: 103b0a08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a050(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb18;
  func_0x000107c61428(unaff_x20 + _DAT_112febb18,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b0a798;
  return auVar2;
}



/* Entry: 103b0a090; end: 103b0a0a7; -[SCStoriesPostingQuickSendViewModel mischiefsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb20;
  func_0x000107c61428(param_1 + _DAT_112febb20,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_103b0a74c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0a0a8; end: 103b0a0bf; -[SCStoriesPostingQuickSendViewModel setMischiefsSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112febb20;
  func_0x000107c61428(param_1 + _DAT_112febb20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a0c0; end: 103b0a0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a0c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb20;
  func_0x000107c61428(unaff_x20 + _DAT_112febb20,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b0a790;
  return auVar2;
}



/* Entry: 103b0a100; end: 103b0a117; -[SCStoriesPostingQuickSendViewModel friendRecipientsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb28;
  func_0x000107c61428(param_1 + _DAT_112febb28,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_103b0a74c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0a118; end: 103b0a12f; -[SCStoriesPostingQuickSendViewModel setFriendRecipientsSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112febb28;
  func_0x000107c61428(param_1 + _DAT_112febb28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a130; end: 103b0a16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a130(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb28;
  func_0x000107c61428(unaff_x20 + _DAT_112febb28,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b0a794;
  return auVar2;
}



/* Entry: 103b0a170; end: 103b0a187; -[SCStoriesPostingQuickSendViewModel customStoriesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a170(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb30;
  func_0x000107c61428(param_1 + _DAT_112febb30,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_103b0a74c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0a188; end: 103b0a19f; -[SCStoriesPostingQuickSendViewModel setCustomStoriesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112febb30;
  func_0x000107c61428(param_1 + _DAT_112febb30,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a1a0; end: 103b0a1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a1a0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb30;
  func_0x000107c61428(unaff_x20 + _DAT_112febb30,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b0a7a0;
  return auVar2;
}



/* Entry: 103b0a1e0; end: 103b0a1f7; -[SCStoriesPostingQuickSendViewModel businessProfilesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a1e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb38;
  func_0x000107c61428(param_1 + _DAT_112febb38,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_103b0a74c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0a1f8; end: 103b0a20f; -[SCStoriesPostingQuickSendViewModel setBusinessProfilesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a1f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112febb38;
  func_0x000107c61428(param_1 + _DAT_112febb38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a210; end: 103b0a24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a210(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb38;
  func_0x000107c61428(unaff_x20 + _DAT_112febb38,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103b0a79c;
  return auVar2;
}



/* Entry: 103b0a250; end: 103b0a25b; -[SCStoriesPostingQuickSendViewModel ourStoriesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a250(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb40;
  func_0x000107c61428(param_1 + _DAT_112febb40,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  FUN_103b0a74c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b0a25c; end: 103b0a2c7;  */

void FUN_103b0a25c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_3;
  func_0x000107c61428(param_1 + lVar3,auStack_38,0,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  FUN_103b0a74c(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0a2c8; end: 103b0a2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a2c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112febb40;
  func_0x000107c61428(unaff_x20 + _DAT_112febb40,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103b0a2d4; end: 103b0a313;  */

void FUN_103b0a2d4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103b0a314; end: 103b0a31f; -[SCStoriesPostingQuickSendViewModel setOurStoriesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_112febb40;
  func_0x000107c61428(param_1 + _DAT_112febb40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a320; end: 103b0a38f;  */

void FUN_103b0a320(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_3,uVar1);
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103b0a390; end: 103b0a39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a390(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112febb40;
  func_0x000107c61428(unaff_x20 + _DAT_112febb40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b0a39c; end: 103b0a3eb;  */

void FUN_103b0a39c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103b0a3ec; end: 103b0a42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b0a3ec(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112febb40;
  func_0x000107c61428(unaff_x20 + _DAT_112febb40,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b0a42c;
  return auVar2;
}



/* Entry: 103b0a42c; end: 103b0a42f;  */

void FUN_103b0a42c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b0a430; end: 103b0a4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a430(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112febb18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112febb20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112febb28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112febb30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112febb38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112febb40) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0a4e4; end: 103b0a57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a4e4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112febb18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112febb20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112febb28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112febb30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112febb38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112febb40) = param_6;
  func_0x000103b0a55c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0a57c; end: 103b0a687; -[SCStoriesPostingQuickSendViewModel initWithMyStorySelected:mischiefsSelected:friendRecipientsSelected:customStoriesSelected:businessProfilesSelected:ourStoriesSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a57c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  FUN_103b0a74c(0);
  func_0x000107c5fc54(param_4,uVar1);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c5fc54(param_7,uVar1);
  func_0x000107c5fc54(param_8,uVar1);
  *(undefined1 *)(param_1 + _DAT_112febb18) = param_3;
  *(undefined8 *)(param_1 + _DAT_112febb20) = param_4;
  *(undefined8 *)(param_1 + _DAT_112febb28) = param_5;
  *(undefined8 *)(param_1 + _DAT_112febb30) = param_6;
  *(undefined8 *)(param_1 + _DAT_112febb38) = param_7;
  *(undefined8 *)(param_1 + _DAT_112febb40) = param_8;
  func_0x000103b0a55c();
  lStack_60 = param_1;
  uStack_58 = param_8;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0a688; end: 103b0a6e3; -[SCStoriesPostingQuickSendViewModel init] */

void FUN_103b0a688(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesPostingServices.StoriesPostingQuickSendViewModel",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0a6b4);
  (*pcVar1)();
}



/* Entry: 103b0a6e4; end: 103b0a74b; -[SCStoriesPostingQuickSendViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b0a700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b0a720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b0a704) */
/* WARNING: Removing unreachable block (ram,0x000103b0a724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a6e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112febb20));
  return;
}



/* Entry: 103b0a74c; end: 103b0a78f;  */

void FUN_103b0a74c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e93978 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5170;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e93978 = puVar1;
  return;
}



/* Entry: 103b0a790; end: 103b0a7a3;  */

void FUN_103b0a790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b0a7a4; end: 103b0a857; -[_TtC24SCStoriesPostingServices22StoriesPostingServices storiesPostingServiceSCLazy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a7a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b0a858; end: 103b0a8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a858(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112febb70) = param_1;
  func_0x000103b0a894();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0a8b4; end: 103b0a90f; -[_TtC24SCStoriesPostingServices22StoriesPostingServices init] */

void FUN_103b0a8b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesPostingServices.StoriesPostingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0a8e0);
  (*pcVar1)();
}



/* Entry: 103b0a910; end: 103b0a91f; -[_TtC24SCStoriesPostingServices22StoriesPostingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112febb70));
  return;
}



/* Entry: 103b0a920; end: 103b0a9ab;  */

void FUN_103b0a920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112febbd8;
  func_0x0001000285a8(0x112febbd8,&UNK_10dc54830);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b0a9ac; end: 103b0aa13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0a9ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103b0b014();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112febbe8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b0aa14; end: 103b0aa5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0aa14(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112febbe8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0aa60; end: 103b0ab9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b0aa60(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112febbc8);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_103b0ad1c(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_103b0ad1c(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xe);
  return puVar5;
}



/* Entry: 103b0aba0; end: 103b0abff; -[_TtC31SCPreviewFeaturesSaberPluginAPI35SCPreviewFeaturesSaberPluginService buildSaberPlugins] */

void FUN_103b0aba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b0aa60();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d73a18;
  func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b0ac00; end: 103b0ac33;  */

void FUN_103b0ac00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b0ac34; end: 103b0ac43; -[_TtC31SCPreviewFeaturesSaberPluginAPI35SCPreviewFeaturesSaberPluginService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0ac34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112febbe8));
  return;
}



/* Entry: 103b0ac44; end: 103b0ad07;  */

void FUN_103b0ac44(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b0ad08; end: 103b0ad1b;  */

void FUN_103b0ad08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febcc0 == (undefined *)0x0 || ((ulong)puRam0000000112febcc0 & 1) != 0) {
    puVar1 = &UNK_10e9be794;
    func_0x000107c61518(&UNK_10e9be794,0x21,0,0);
    puRam0000000112febcc0 = puVar1;
  }
  return;
}



/* Entry: 103b0ad1c; end: 103b0ae43;  */

ulong FUN_103b0ad1c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0ae44);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103b0b1a0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0ae40);
      (*pcVar1)();
    }
    FUN_103b0b220(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103b0ae44; end: 103b0ae47;  */

void FUN_103b0ae44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54848;
  func_0x000107c61520(&UNK_10dc54848,&UNK_1106d28d0);
  puRam0000000112febc30 = puVar1;
  return;
}



/* Entry: 103b0ae48; end: 103b0aeb3;  */

void FUN_103b0ae48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54848;
  func_0x000107c61520(&UNK_10dc54848,&UNK_1106d28d0);
  puRam0000000112febc30 = puVar1;
  return;
}



/* Entry: 103b0aeb4; end: 103b0aeb7;  */

void FUN_103b0aeb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc548f0;
  func_0x000107c61520(&UNK_10dc548f0,&UNK_1106d2980);
  puRam0000000112febc48 = puVar1;
  return;
}



/* Entry: 103b0aeb8; end: 103b0af23;  */

void FUN_103b0aeb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc548f0;
  func_0x000107c61520(&UNK_10dc548f0,&UNK_1106d2980);
  puRam0000000112febc48 = puVar1;
  return;
}



/* Entry: 103b0af24; end: 103b0af67;  */

void FUN_103b0af24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103b0af68; end: 103b0af6b;  */

void FUN_103b0af68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54960;
  func_0x000107c61520(&UNK_10dc54960,&UNK_1106d2980);
  puRam0000000112febc60 = puVar1;
  return;
}



/* Entry: 103b0af6c; end: 103b0afab;  */

void FUN_103b0af6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54960;
  func_0x000107c61520(&UNK_10dc54960,&UNK_1106d2980);
  puRam0000000112febc60 = puVar1;
  return;
}



/* Entry: 103b0afac; end: 103b0afaf;  */

void FUN_103b0afac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54918;
  func_0x000107c61520(&UNK_10dc54918,&UNK_1106d2980);
  puRam0000000112febc68 = puVar1;
  return;
}



/* Entry: 103b0afb0; end: 103b0afef;  */

void FUN_103b0afb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febc68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54918;
  func_0x000107c61520(&UNK_10dc54918,&UNK_1106d2980);
  puRam0000000112febc68 = puVar1;
  return;
}



/* Entry: 103b0aff0; end: 103b0b013;  */

void FUN_103b0aff0(void)

{
  return;
}



/* Entry: 103b0b014; end: 103b0b033;  */

void FUN_103b0b014(void)

{
  func_0x000107c61168(&PTR_PTR_112928ab8);
  return;
}



/* Entry: 103b0b034; end: 103b0b19f;  */

int FUN_103b0b034(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf2 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xd) {
      iVar2 = 4;
    }
    if (param_2 + 0xd >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b0b0b4;
        goto LAB_103b0b098;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b0b098:
      return ((uint)*param_1 | uVar1 << 8) - 0xd;
    }
  }
LAB_103b0b0b4:
  iVar2 = *param_1 - 0xe;
  if (*param_1 < 0xe) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b0b1a0; end: 103b0b21f;  */

undefined * FUN_103b0b1a0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103b0ad08();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103b0b220; end: 103b0b343;  */

long FUN_103b0b220(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0b340);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0b344);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d73a18;
        func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d73a18;
      func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b0b33c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103b0b344; end: 103b0b373;  */

undefined1 FUN_103b0b344(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103b0b374; end: 103b0b383; -[SCPreviewExportServices previewExportService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febcc8));
  return;
}



/* Entry: 103b0b384; end: 103b0b41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b384(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112febcc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0b41c; end: 103b0b47b; -[SCPreviewExportServices init] */

void FUN_103b0b41c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPreviewExportServices.SCPreviewExportServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0b448);
  (*pcVar1)();
}



/* Entry: 103b0b47c; end: 103b0b4a3; -[SCPreviewExportServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112febcc8));
  return;
}



/* Entry: 103b0b4a4; end: 103b0b4e3;  */

void FUN_103b0b4a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112febcf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc54ab0;
  func_0x000107c61520(&UNK_10dc54ab0,&UNK_1106d2b60);
  puRam0000000112febcf8 = puVar1;
  return;
}



/* Entry: 103b0b4e4; end: 103b0b58f;  */

void FUN_103b0b4e4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b0b590; end: 103b0b5c7;  */

void FUN_103b0b590(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b0b5c8; end: 103b0b5d7; -[SendToMassSnapNotificationServices sendToMassSnapNotificationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112febd00));
  return;
}



/* Entry: 103b0b5d8; end: 103b0b623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b5d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112febd00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b0b624; end: 103b0b67b; -[SendToMassSnapNotificationServices initWithSendToMassSnapNotificationService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112febd00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b0b67c; end: 103b0b6db; -[SendToMassSnapNotificationServices init] */

void FUN_103b0b67c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToMassSnapNotificationServices.SendToMassSnapNotificationServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b0b6a8);
  (*pcVar1)();
}



/* Entry: 103b0b6dc; end: 103b0b6eb; -[SendToMassSnapNotificationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b0b6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112febd00));
  return;
}


