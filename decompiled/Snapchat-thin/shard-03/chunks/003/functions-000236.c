/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10278cd08; end: 10278cdfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278cd08(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  uVar1 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  if ((((uVar1 & 1) == 0) && ((*(byte *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebdca8) & 1) == 0))
     && ((*(byte *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebdca0) & 1) == 0)) {
    uVar1 = *(ulong *)(unaff_x22 + 0x70);
    if (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) != 0) {
      if (uVar1 >> 0x3e == 0) {
        uVar2 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = uVar1 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar1) {
          uVar2 = uVar1;
        }
        func_0x000107c60480();
        uVar1 = *(ulong *)(unaff_x22 + 0x70);
      }
      if (uVar2 == 0) goto LAB_10278cd60;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = 0;
    func_0x000100f9b9b0(0);
    uVar2 = uVar1;
    func_0x000107c5fc48(uVar1,uVar3);
    func_0x000107c6142c(uVar1);
    func_0x000107c4dc50(uVar4);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar1 = *(ulong *)(unaff_x22 + 0x70);
LAB_10278cd60:
    func_0x000107c6142c(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010278cd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10278cdfc; end: 10278ce6b;  */

void FUN_10278cdfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278ce6c,uVar1,uVar2);
  return;
}



/* Entry: 10278ce6c; end: 10278cf03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278ce6c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10278cf04;
                    /* WARNING: Could not recover jumptable at 0x00010278cf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x38),uVar2,lVar3);
  return;
}



/* Entry: 10278cf04; end: 10278cf4f;  */

void FUN_10278cf04(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10278cf50,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 10278cf50; end: 10278d137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278cf50(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  ulong uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  uVar2 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  func_0x000107c5fd5c();
  if (((uVar2 & 1) == 0) && ((*(byte *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebdca8) & 1) == 0)) {
    uVar2 = *(ulong *)(unaff_x22 + 0x70);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebdca0) & 1) == 0) {
      if (uVar2 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
        if (uVar7 == 0) goto LAB_10278d0dc;
LAB_10278cffc:
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x00010248094c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10278d138);
          (*pcVar1)();
        }
        uVar11 = 0;
        lVar6 = *(long *)(unaff_x22 + 0x70);
        do {
          if ((uVar2 & 0xc000000000000001) == 0) {
            uVar8 = *(ulong *)(lVar6 + 0x20 + uVar11 * 8);
            uVar3 = uVar8;
            func_0x000107c6157c();
          }
          else {
            uVar3 = uVar11;
            FUN_10278f4d8(uVar11,*(undefined8 *)(unaff_x22 + 0x70));
            uVar8 = uVar3;
          }
          func_0x00010488b12c();
          func_0x000107c61574(uVar8);
          uVar8 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
            func_0x00010248094c(1 < *(ulong *)(puVar10 + 0x18),uVar8 + 1,1);
          }
          uVar11 = uVar11 + 1;
          *(ulong *)(puVar10 + 0x10) = uVar8 + 1;
          *(ulong *)(puVar10 + uVar8 * 8 + 0x20) = uVar3;
        } while (uVar7 != uVar11);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
      }
      else {
        uVar7 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar7 = uVar2;
        }
        func_0x000107c60480();
        if (uVar7 != 0) goto LAB_10278cffc;
LAB_10278d0dc:
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar4 = 0x112d74dc8;
      func_0x0001000285a8(0x112d74dc8,&UNK_10d9355f0);
      puVar5 = puVar10;
      func_0x000107c5fc48(puVar10,uVar4);
      func_0x000107c6142c(puVar10);
      func_0x000107c4cc20(uVar9);
      func_0x000107c61170(puVar5);
      goto LAB_10278cfa8;
    }
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x70);
  }
  func_0x000107c6142c(uVar2);
LAB_10278cfa8:
                    /* WARNING: Could not recover jumptable at 0x00010278cfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10278d138; end: 10278d187;  */

undefined8 FUN_10278d138(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebdbf0;
  func_0x0001000285a8(0x112ebdbf0,&UNK_10dad8cd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10278d188; end: 10278d1a7;  */

void FUN_10278d188(void)

{
  func_0x00010278c430();
  return;
}



/* Entry: 10278d1a8; end: 10278d207; -[_TtC39MemTwoPickerCompatibilityImplementation37MemTwoPickerCompatibilityWorkflowImpl init] */

void FUN_10278d1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerCompatibilityImplementation.MemTwoPickerCompatibilityWorkflowImpl"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10278d1d4);
  (*pcVar1)();
}



/* Entry: 10278d208; end: 10278d217;  */

undefined1  [16] FUN_10278d208(void)

{
  return ZEXT816(0x110548770);
}



/* Entry: 10278d218; end: 10278d27f; -[_TtC39MemTwoPickerCompatibilityImplementation37MemTwoPickerCompatibilityWorkflowImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278d218(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebdcb8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebdcb0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebdcc0));
  FUN_10278a1e8(param_1 + _DAT_112ebdc98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebdcc8));
  return;
}



/* Entry: 10278d280; end: 10278d29f;  */

void FUN_10278d280(void)

{
  func_0x000107c61168(&PTR_PTR_1128604f0);
  return;
}



/* Entry: 10278d2a0; end: 10278d2a3;  */

void FUN_10278d2a0(void)

{
  return;
}



/* Entry: 10278d2a4; end: 10278d313;  */

undefined8 FUN_10278d2a4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038cf6d4)(param_2,param_1);
  return param_2;
}



/* Entry: 10278d314; end: 10278d333;  */

void FUN_10278d314(void)

{
  func_0x00010278c430();
  return;
}



/* Entry: 10278d334; end: 10278d363;  */

void FUN_10278d334(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_4);
    return;
  }
  return;
}



/* Entry: 10278d364; end: 10278d373;  */

void FUN_10278d364(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1105487b8;
    func_0x000107c613fc(&UNK_1105487b8,0x38,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    puVar2[0x28] = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_4;
    func_0x000107c61174(lVar1);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    uVar3 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,4,0,0,&UNK_10dad8ee0,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 10278d374; end: 10278d3e3;  */

undefined8 FUN_10278d374(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038d1f80)(param_2,param_1);
  return param_2;
}



/* Entry: 10278d3e4; end: 10278d447;  */

void FUN_10278d3e4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10278d560;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  plVar4[2] = (long)plVar1;
  *plVar1 = (long)plVar4;
  plVar1[1] = 0x10278d55c;
  plVar1[2] = lVar2;
  plVar1[3] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[4] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[5] = lVar2;
  plVar1[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278bd74,lVar2,lVar3);
  return;
}



/* Entry: 10278d448; end: 10278d4cb;  */

void FUN_10278d448(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10278d4cc;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  plVar5[2] = (long)plVar2;
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_10278c0f0;
  plVar2[4] = lVar7;
  plVar2[5] = lVar4;
  *(undefined1 *)(plVar2 + 0xd) = uVar1;
  plVar2[2] = lVar3;
  plVar2[3] = lVar6;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[7] = lVar3;
  plVar2[8] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278c1a0,lVar3,lVar4);
  return;
}



/* Entry: 10278d4cc; end: 10278d507;  */

void FUN_10278d4cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010278d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10278d508; end: 10278d563;  */

void FUN_10278d508(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_attachUI__1125a0c08,param_1);
  return;
}



/* Entry: 10278d564; end: 10278d5a3;  */

void FUN_10278d564(void)

{
  func_0x0001000285a8(0x112ebdd00,&UNK_10dad8f10);
  func_0x0001000823a8(FUN_10278d5a4,0);
  return;
}



/* Entry: 10278d5a4; end: 10278d5cb;  */

void FUN_10278d5a4(undefined8 *param_1)

{
  param_1[3] = &UNK_110548980;
  param_1[4] = &PTR_DAT_1105488e8;
  *param_1 = 0x10278d5c8;
  param_1[1] = 0;
  return;
}



/* Entry: 10278d5cc; end: 10278d78f;  */

undefined * FUN_10278d5cc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 in_stack_ffffffffffffffb0;
  
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar6 = &puStack_70;
  ppuVar7 = &puStack_70;
  puVar12 = *(undefined1 **)(param_1 + 0x10);
  if (puVar12 != (undefined1 *)0x0) {
    puVar13 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    func_0x000107c61434(param_1);
    puVar5 = puVar12;
    func_0x00010109b448(puVar12,0);
    func_0x00010109b930(&puStack_70,puVar5 + 0x20,puVar12,param_1);
    func_0x00010109bac0(puStack_70,uStack_68,puStack_60,puStack_58,in_stack_ffffffffffffffb0);
    if (ppuVar6 != (undefined **)puVar12) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10278d790);
      (*pcVar4)();
    }
    puVar12 = puVar5;
    func_0x000107c5fc48(puVar5,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar5);
    func_0x000107c42fcc(puVar13);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    puVar11 = &UNK_1105489a8;
    func_0x000107c613fc(&UNK_1105489a8,0x18,7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102790024();
    puVar14 = (undefined8 *)(puVar11 + 0x10);
    *puVar14 = puVar8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100faa5e4;
    puStack_58 = &UNK_1105489c0;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c6157c(puVar11);
    func_0x000107c61574(puVar11);
    func_0x000107c429cc(puVar13);
    func_0x000107c61170(puVar13);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61428(puVar14,&puStack_70,0,0);
    puVar13 = (undefined *)*puVar14;
    func_0x000107c61434(puVar13);
    func_0x000107c61574(puVar11);
    return puVar13;
  }
  puVar11 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebdd20,&UNK_10dad8fe0);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar14 = (undefined8 *)(puVar13 + 0x30);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar15 = *puVar14;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar9 = uVar2;
      uVar10 = uVar3;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102790120);
        (*pcVar4)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 8) = uVar15;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102790124);
        (*pcVar4)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      puVar14 = puVar14 + 3;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 10278d790; end: 10278d7ab;  */

void FUN_10278d790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278d7ac,0,0);
  return;
}



/* Entry: 10278d7ac; end: 10278e1f3;  */

void FUN_10278d7ac(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  long unaff_x22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined8 *puVar30;
  double dVar31;
  undefined *puStack_88;
  
  lVar15 = *(long *)(unaff_x22 + 0x10);
  uVar20 = *(ulong *)(lVar15 + 0x10);
  *(ulong *)(unaff_x22 + 0x28) = uVar20;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar25 = 0;
    do {
      uVar23 = uVar25;
      if (uVar25 <= uVar20) {
        uVar23 = uVar20;
      }
      lVar16 = uVar25 * 0x20;
      uVar25 = uVar25 + 1;
      pcVar18 = (char *)(lVar15 + 0x30 + lVar16);
      while( true ) {
        if (uVar25 - uVar23 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1d8);
          (*pcVar4)();
        }
        uVar14 = *(undefined8 *)(pcVar18 + -0x10);
        uVar8 = *(undefined8 *)(pcVar18 + -8);
        cVar2 = *pcVar18;
        func_0x000107c61434(uVar8);
        if (cVar2 == '\x01') break;
        func_0x000107c6142c(uVar8);
        uVar25 = uVar25 + 1;
        pcVar18 = pcVar18 + 0x20;
        if (uVar25 - uVar20 == 1) goto LAB_10278d8cc;
      }
      puVar6 = puVar7;
      func_0x000107c61558();
      puVar27 = puVar7;
      if (((ulong)puVar6 & 1) == 0) {
        param_2 = (undefined *)(*(long *)(puVar7 + 0x10) + 1);
        puVar27 = (undefined *)0x0;
        func_0x0001000d182c(0,param_2,1,puVar7);
      }
      uVar23 = *(ulong *)(puVar27 + 0x10);
      puVar6 = (undefined *)(uVar23 + 1);
      puVar7 = puVar27;
      if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar23) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar27 + 0x18));
        param_2 = puVar6;
        func_0x0001000d182c(puVar7,puVar6,1,puVar27);
      }
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(undefined8 *)(puVar7 + uVar23 * 0x10 + 0x20) = uVar14;
      *(undefined8 *)(puVar7 + uVar23 * 0x10 + 0x28) = uVar8;
    } while (uVar25 != uVar20);
  }
LAB_10278d8cc:
  puVar6 = puVar7;
  func_0x000100403a6c();
  *(undefined **)(unaff_x22 + 0x30) = puVar6;
  func_0x000107c6142c(puVar7);
  if (*(long *)(puVar6 + 0x10) != 0) {
    uVar8 = 0;
    func_0x000107c5fcec();
    puVar7 = PTR___sScMMa_11034fc70;
    uVar14 = uVar8;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
    uVar14 = 0x112d45220;
    func_0x000102790688(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar8,uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10278e1f4,uVar8,uVar14);
    return;
  }
  func_0x000107c6142c(puVar6);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102790024();
  if (*(long *)(unaff_x22 + 0x28) != 0) {
    lVar15 = 0;
    lVar16 = *(long *)(unaff_x22 + 0x10);
    do {
      puVar1 = (ulong *)(lVar16 + 0x20 + lVar15 * 0x20);
      uVar20 = *puVar1;
      puVar27 = (undefined *)puVar1[1];
      bVar3 = (byte)puVar1[2];
      puVar26 = (undefined *)puVar1[3];
      func_0x000107c61434(puVar27);
      func_0x000107c61434(puVar26);
      puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar13 = puVar27;
      if (bVar3 < 2) {
        if (bVar3 == 0) goto LAB_10278da20;
        if (*(long *)(puVar6 + 0x10) != 0) {
          func_0x000107c61434(puVar6);
          param_2 = puVar27;
          func_0x000100029284();
          if (((ulong)param_2 & 1) == 0) {
            func_0x000107c6142c(puVar26);
            puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar13 = puVar6;
            puVar26 = puVar27;
          }
          else {
            uVar14 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar20 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(puVar6);
            puStack_88 = (undefined *)0x112d4c1d0;
            func_0x00010278ed60(0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,&UNK_10dad8fe8);
            param_2 = (undefined *)(((ulong)*(uint *)(puStack_88 + 0x30) + 7 & 0x1fffffff8) + 8);
            func_0x000107c613fc();
            *(undefined8 *)(puStack_88 + 0x18) = 3;
            *(undefined8 *)(puStack_88 + 0x10) = 1;
            *(undefined8 *)(puStack_88 + 0x20) = uVar14;
          }
        }
      }
      else if (bVar3 == 2 || bVar3 == 4) {
LAB_10278da20:
        lVar21 = *(long *)(puVar26 + 0x10);
        if (lVar21 != 0) {
          lVar19 = 0;
          uVar25 = uVar20 & 0xffffffffffff;
          if (((ulong)puVar27 & 0x2000000000000000) != 0) {
            uVar25 = (ulong)puVar27 >> 0x38 & 0xf;
          }
          do {
            puVar30 = (undefined8 *)(puVar26 + lVar19 * 0x28 + 0x40);
            lVar19 = lVar19 + 1;
            while( true ) {
              if (*(ulong *)(puVar26 + 0x10) <= lVar19 - 1U) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1d4);
                (*pcVar4)();
              }
              uVar23 = puVar30[-4];
              uVar14 = puVar30[-3];
              puVar24 = (undefined *)puVar30[-2];
              uVar8 = *puVar30;
              puVar22 = PTR_PTR_1126c66e0;
              func_0x000107c610f8();
              func_0x000107c61434(uVar8);
              func_0x000107c61174();
              func_0x000107c61434(puVar24);
              func_0x000107c48eac();
              uVar17 = uVar23;
              func_0x000107c44fd8();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1f4);
                (*pcVar4)();
              }
              uVar9 = uVar17;
              func_0x000107c44fd8();
              func_0x000107c61180();
              func_0x000107c61170(uVar17);
              if (uVar9 == 0) {
                uVar17 = 0;
                puVar29 = (undefined *)0xe000000000000000;
                puVar11 = param_2;
              }
              else {
                uVar17 = uVar9;
                func_0x000107c5faec();
                puVar11 = param_2;
                func_0x000107c61170(uVar9);
                puVar29 = param_2;
              }
              param_2 = puVar11;
              uVar9 = uVar17 & 0xffffffffffff;
              if (((ulong)puVar29 & 0x2000000000000000) != 0) {
                uVar9 = (ulong)puVar29 >> 0x38 & 0xf;
              }
              if (uVar9 != 0) break;
              func_0x000107c6142c(puVar29);
              func_0x000107c61434(puVar27);
              uVar17 = uVar20;
              puVar29 = puVar27;
              if (bVar3 == 2 && uVar25 != 0) break;
              func_0x000107c6142c(puVar24);
              func_0x000107c6142c(uVar8);
              func_0x000107c61170(puVar22);
              func_0x000107c6142c(puVar27);
              func_0x000107c61170(uVar23);
              lVar19 = lVar19 + 1;
              puVar30 = puVar30 + 5;
              if (lVar19 - lVar21 == 1) goto LAB_10278df20;
            }
            uVar9 = uVar23;
            FUN_102790124();
            if (uVar9 == 0) {
              dVar31 = 0.0;
            }
            else {
              func_0x000107c5d0f0();
              uVar10 = uVar9;
              func_0x000107c4c978(uVar9);
              dVar31 = (double)(uVar10 & 0xffffffff);
            }
            puVar11 = PTR_PTR_1126c6628;
            func_0x000107c610f8();
            uVar12 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            func_0x000107c5fadc(uVar17,puVar29);
            func_0x000107c6142c(puVar29);
            param_2 = puVar24;
            func_0x000107c5fadc(uVar14);
            func_0x000107c46798(0,dVar31,puVar11);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uVar12);
            if (uVar9 != 0) {
              uVar17 = uVar9;
              func_0x000107c44824();
              if ((int)uVar17 != 0) {
                uVar17 = uVar9;
                func_0x000107c41e40();
                func_0x000107c61180();
                if (uVar17 != 0) {
                  func_0x000107c5e304();
                  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  func_0x000107c490d0();
                  func_0x000107c5a724(puVar11);
                  func_0x000107c61170(puVar29);
                  func_0x000107c44d98(uVar17);
                  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  func_0x000107c490d0();
                  func_0x000107c550b8(puVar11);
                  func_0x000107c61170(uVar17);
                  func_0x000107c61170(puVar29);
                }
              }
              func_0x000107c61170(uVar9);
            }
            func_0x000107c565cc(puVar22);
            func_0x000107c61170(uVar23);
            func_0x000107c6142c(puVar24);
            func_0x000107c6142c(uVar8);
            func_0x000107c61170(puVar11);
            puVar24 = puStack_88;
            func_0x000107c61550();
            if ((((int)puVar24 == 0) || ((long)puStack_88 < 0)) ||
               (puVar24 = puStack_88, ((ulong)puStack_88 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_88 >> 0x3e == 0) {
                param_2 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
              }
              else {
                param_2 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_88) {
                  param_2 = puStack_88;
                }
                func_0x000107c60480();
              }
              param_2 = param_2 + 1;
              puVar24 = (undefined *)0x0;
              FUN_10278f008(0,param_2,1,puStack_88,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                            &UNK_10dad8fe8);
            }
            uVar17 = (ulong)puVar24 & 0xffffffffffffff8;
            uVar23 = *(ulong *)(uVar17 + 0x10);
            puVar11 = (undefined *)(uVar23 + 1);
            puStack_88 = puVar24;
            if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar23) {
              puStack_88 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
              param_2 = puVar11;
              FUN_10278f008(puStack_88,puVar11,1,puVar24,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                            &UNK_10dad8fe8);
              uVar17 = (ulong)puStack_88 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar17 + 0x10) = puVar11;
            *(undefined **)(uVar17 + uVar23 * 8 + 0x20) = puVar22;
          } while (lVar19 != lVar21);
        }
      }
LAB_10278df20:
      func_0x000107c6142c(puVar13);
      func_0x000107c6142c(puVar26);
      if ((ulong)puStack_88 >> 0x3e == 0) {
        puVar27 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar27 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
        if (((ulong)puStack_88 & 0x8000000000000000) != 0) {
          puVar27 = puStack_88;
        }
        func_0x000107c60480();
      }
      uVar20 = (ulong)puVar7 >> 0x3e;
      if (uVar20 == 0) {
        puVar13 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar13 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if (((ulong)puVar7 & 0x8000000000000000) != 0) {
          puVar13 = puVar7;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar13,(long)puVar27)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1dc);
        (*pcVar4)();
      }
      puVar13 = puVar13 + (long)puVar27;
      puVar26 = puVar7;
      func_0x000107c61550();
      uVar5 = 0;
      if (uVar20 == 0) {
        uVar5 = (uint)puVar26;
      }
      puVar26 = (undefined *)(ulong)uVar5;
      if (uVar5 == 1) {
        uVar23 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar25 = *(ulong *)(uVar23 + 0x18) >> 1;
        if ((long)uVar25 < (long)puVar13) goto LAB_10278df88;
      }
      else {
LAB_10278df88:
        if (uVar20 == 0) {
          param_2 = *(undefined **)((undefined *)((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if (((ulong)puVar7 & 0x8000000000000000) != 0) {
            param_2 = puVar7;
          }
          func_0x000107c60480();
        }
        if ((long)param_2 <= (long)puVar13) {
          param_2 = puVar13;
        }
        FUN_10278f008(puVar26,param_2,1,puVar7,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                      &UNK_10dad8fe8);
        uVar23 = (ulong)puVar26 & 0xffffffffffffff8;
        uVar25 = *(ulong *)(uVar23 + 0x18) >> 1;
        puVar7 = puVar26;
      }
      lVar21 = *(long *)(uVar23 + 0x10);
      if ((ulong)puStack_88 >> 0x3e == 0) {
        puVar13 = *(undefined **)(((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
        if (puVar13 != (undefined *)0x0) {
          if ((undefined *)(uVar25 - lVar21) < puVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1ec);
            (*pcVar4)();
          }
          uVar14 = 0;
          func_0x0001027906c8(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
          func_0x000107c6140c(uVar23 + lVar21 * 8 + 0x20,
                              ((ulong)puStack_88 & 0xffffffffffffff8) + 0x20,puVar13,uVar14);
          goto LAB_10278e114;
        }
LAB_10278d9b8:
        func_0x000107c6142c(puStack_88);
        if (0 < (long)puVar27) goto LAB_10278e1dc;
      }
      else {
        puVar13 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
        if (((ulong)puStack_88 & 0x8000000000000000) != 0) {
          puVar13 = puStack_88;
        }
        puVar26 = puVar13;
        func_0x000107c60480();
        if (puVar26 == (undefined *)0x0) goto LAB_10278d9b8;
        func_0x000107c60480();
        if ((long)(uVar25 - lVar21) < (long)puVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1e8);
          (*pcVar4)();
        }
        if ((long)puVar26 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1f0);
          (*pcVar4)();
        }
        lVar21 = uVar23 + lVar21 * 8;
        puVar30 = (undefined8 *)(lVar21 + 0x20);
        if (((ulong)puStack_88 & 0xc000000000000001) == 0) {
          uVar14 = *(undefined8 *)(puStack_88 + 0x20);
          *puVar30 = uVar14;
          puVar26 = puVar26 + -1;
          if (puVar26 != (undefined *)0x0) {
            uVar8 = uVar14;
            puVar30 = (undefined8 *)(puStack_88 + 0x28);
            puVar28 = (undefined8 *)(lVar21 + 0x28);
            do {
              uVar14 = *puVar30;
              *puVar28 = uVar14;
              func_0x000107c61174(uVar8);
              puVar26 = puVar26 + -1;
              uVar8 = uVar14;
              puVar30 = puVar30 + 1;
              puVar28 = puVar28 + 1;
            } while (puVar26 != (undefined *)0x0);
          }
          func_0x000107c61174(uVar14);
        }
        else {
          puVar22 = (undefined *)0x0;
          do {
            puVar24 = puVar22;
            func_0x00010278f6a0(puVar22,puStack_88,&PTR_PTR_1126c66e0,0x112d4c1d0);
            puVar30[(long)puVar22] = puVar24;
            puVar22 = puVar22 + 1;
          } while (puVar26 != puVar22);
        }
LAB_10278e114:
        func_0x000107c6142c(puStack_88);
        if ((long)puVar13 < (long)puVar27) {
LAB_10278e1dc:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1e0);
          (*pcVar4)();
        }
        param_2 = puStack_88;
        if (0 < (long)puVar13) {
          if (SCARRY8(*(long *)(uVar23 + 0x10),(long)puVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10278e1e4);
            (*pcVar4)();
          }
          *(undefined **)(uVar23 + 0x10) = puVar13 + *(long *)(uVar23 + 0x10);
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != *(long *)(unaff_x22 + 0x28));
  }
  func_0x000107c6142c(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010278e1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 10278e1f4; end: 10278e24f;  */

void FUN_10278e1f4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  pcVar2 = *(code **)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  uVar3 = uVar1;
  (*pcVar2)();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278e250,0,0);
  return;
}



/* Entry: 10278e250; end: 10278eb07;  */

void FUN_10278e250(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long unaff_x22;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  double dVar27;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puVar9;
  
  puVar14 = *(undefined **)(unaff_x22 + 0x40);
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar24 = 0;
    lVar11 = *(long *)(unaff_x22 + 0x10);
    puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar9 = (undefined *)0x112d4c1d0;
      puVar1 = (ulong *)(lVar11 + 0x20 + lVar24 * 0x20);
      uVar16 = *puVar1;
      puVar19 = (undefined *)puVar1[1];
      bVar2 = (byte)puVar1[2];
      puVar21 = (undefined *)puVar1[3];
      func_0x000107c61434(puVar19);
      func_0x000107c61434(puVar21);
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (bVar2 < 2) {
        if (bVar2 == 0) goto LAB_10278e33c;
        if (*(long *)(puVar14 + 0x10) != 0) {
          func_0x000107c61434(puVar14);
          param_2 = puVar19;
          func_0x000100029284();
          if (((ulong)param_2 & 1) == 0) {
            func_0x000107c6142c(puVar21);
            puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar21 = puVar19;
            puVar19 = puVar14;
          }
          else {
            uVar10 = *(undefined8 *)(*(long *)(puVar14 + 0x38) + uVar16 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(puVar14);
            func_0x00010278ed60(0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,&UNK_10dad8fe8);
            param_2 = (undefined *)(((ulong)*(uint *)(puVar9 + 0x30) + 7 & 0x1fffffff8) + 8);
            func_0x000107c613fc();
            *(undefined8 *)(puVar9 + 0x18) = 3;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            *(undefined8 *)(puVar9 + 0x20) = uVar10;
            puStack_90 = puVar9;
          }
        }
      }
      else if (bVar2 == 2 || bVar2 == 4) {
LAB_10278e33c:
        lVar17 = *(long *)(puVar21 + 0x10);
        if (lVar17 != 0) {
          lVar22 = 0;
          uVar13 = uVar16 & 0xffffffffffff;
          if (((ulong)puVar19 & 0x2000000000000000) != 0) {
            uVar13 = (ulong)puVar19 >> 0x38 & 0xf;
          }
          do {
            puVar26 = (undefined8 *)(puVar21 + lVar22 * 0x28 + 0x40);
            lVar22 = lVar22 + 1;
            while( true ) {
              if (*(ulong *)(puVar21 + 0x10) <= lVar22 - 1U) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eaec);
                (*pcVar3)();
              }
              uVar20 = puVar26[-4];
              uVar10 = puVar26[-3];
              puVar18 = (undefined *)puVar26[-2];
              uVar15 = *puVar26;
              puVar9 = PTR_PTR_1126c66e0;
              func_0x000107c610f8();
              func_0x000107c61434(uVar15);
              func_0x000107c61174();
              func_0x000107c61434(puVar18);
              func_0x000107c48eac();
              uVar12 = uVar20;
              func_0x000107c44fd8();
              func_0x000107c61180();
              if (uVar12 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eb08);
                (*pcVar3)();
              }
              uVar5 = uVar12;
              func_0x000107c44fd8();
              func_0x000107c61180();
              func_0x000107c61170(uVar12);
              if (uVar5 == 0) {
                uVar12 = 0;
                puVar25 = (undefined *)0xe000000000000000;
                puVar7 = param_2;
              }
              else {
                uVar12 = uVar5;
                func_0x000107c5faec();
                puVar7 = param_2;
                func_0x000107c61170(uVar5);
                puVar25 = param_2;
              }
              param_2 = puVar7;
              uVar5 = uVar12 & 0xffffffffffff;
              if (((ulong)puVar25 & 0x2000000000000000) != 0) {
                uVar5 = (ulong)puVar25 >> 0x38 & 0xf;
              }
              if (uVar5 != 0) break;
              func_0x000107c6142c(puVar25);
              func_0x000107c61434(puVar19);
              uVar12 = uVar16;
              puVar25 = puVar19;
              if (bVar2 == 2 && uVar13 != 0) break;
              func_0x000107c6142c(puVar18);
              func_0x000107c6142c(uVar15);
              func_0x000107c61170(puVar9);
              func_0x000107c6142c(puVar19);
              func_0x000107c61170(uVar20);
              lVar22 = lVar22 + 1;
              puVar26 = puVar26 + 5;
              if (lVar22 - lVar17 == 1) goto LAB_10278e820;
            }
            uVar5 = uVar20;
            FUN_102790124();
            if (uVar5 == 0) {
              dVar27 = 0.0;
            }
            else {
              func_0x000107c5d0f0();
              uVar6 = uVar5;
              func_0x000107c4c978(uVar5);
              dVar27 = (double)(uVar6 & 0xffffffff);
            }
            puVar7 = PTR_PTR_1126c6628;
            func_0x000107c610f8();
            uVar8 = 0;
            func_0x000107c5fadc(0,0xe000000000000000);
            func_0x000107c5fadc(uVar12,puVar25);
            func_0x000107c6142c(puVar25);
            param_2 = puVar18;
            func_0x000107c5fadc(uVar10);
            func_0x000107c46798(0,dVar27,puVar7);
            func_0x000107c61170(uVar10);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar8);
            if (uVar5 != 0) {
              uVar12 = uVar5;
              func_0x000107c44824();
              if ((int)uVar12 != 0) {
                uVar12 = uVar5;
                func_0x000107c41e40();
                func_0x000107c61180();
                if (uVar12 != 0) {
                  func_0x000107c5e304();
                  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  func_0x000107c490d0();
                  func_0x000107c5a724(puVar7);
                  func_0x000107c61170(puVar25);
                  func_0x000107c44d98(uVar12);
                  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  func_0x000107c490d0();
                  func_0x000107c550b8(puVar7);
                  func_0x000107c61170(uVar12);
                  func_0x000107c61170(puVar25);
                }
              }
              func_0x000107c61170(uVar5);
            }
            func_0x000107c565cc(puVar9);
            func_0x000107c61170(uVar20);
            func_0x000107c6142c(puVar18);
            func_0x000107c6142c(uVar15);
            func_0x000107c61170(puVar7);
            puVar18 = puStack_90;
            func_0x000107c61550();
            if ((((int)puVar18 == 0) || ((long)puStack_90 < 0)) ||
               (puVar18 = puStack_90, ((ulong)puStack_90 >> 0x3e & 1) != 0)) {
              if ((ulong)puStack_90 >> 0x3e == 0) {
                param_2 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
              }
              else {
                param_2 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puStack_90) {
                  param_2 = puStack_90;
                }
                func_0x000107c60480();
              }
              param_2 = param_2 + 1;
              puVar18 = (undefined *)0x0;
              FUN_10278f008(0,param_2,1,puStack_90,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                            &UNK_10dad8fe8);
            }
            uVar12 = (ulong)puVar18 & 0xffffffffffffff8;
            uVar20 = *(ulong *)(uVar12 + 0x10);
            puVar7 = (undefined *)(uVar20 + 1);
            puStack_90 = puVar18;
            if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar20) {
              puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
              param_2 = puVar7;
              FUN_10278f008(puStack_90,puVar7,1,puVar18,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                            &UNK_10dad8fe8);
              uVar12 = (ulong)puStack_90 & 0xffffffffffffff8;
            }
            *(undefined **)(uVar12 + 0x10) = puVar7;
            *(undefined **)(uVar12 + uVar20 * 8 + 0x20) = puVar9;
          } while (lVar22 != lVar17);
        }
      }
LAB_10278e820:
      func_0x000107c6142c(puVar19);
      func_0x000107c6142c(puVar21);
      if ((ulong)puStack_90 >> 0x3e == 0) {
        puVar19 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar19 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
        if (((ulong)puStack_90 & 0x8000000000000000) != 0) {
          puVar19 = puStack_90;
        }
        func_0x000107c60480();
      }
      uVar16 = (ulong)puStack_88 >> 0x3e;
      if (uVar16 == 0) {
        puVar21 = *(undefined **)((undefined *)((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar21 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
        if (((ulong)puStack_88 & 0x8000000000000000) != 0) {
          puVar21 = puStack_88;
        }
        func_0x000107c60480();
      }
      if (SCARRY8((long)puVar21,(long)puVar19)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eaf0);
        (*pcVar3)();
      }
      puVar21 = puVar21 + (long)puVar19;
      puVar9 = puStack_88;
      func_0x000107c61550();
      uVar4 = 0;
      if (uVar16 == 0) {
        uVar4 = (uint)puVar9;
      }
      puVar9 = (undefined *)(ulong)uVar4;
      if (uVar4 == 1) {
        uVar20 = (ulong)puStack_88 & 0xffffffffffffff8;
        uVar13 = *(ulong *)(uVar20 + 0x18) >> 1;
        if ((long)uVar13 < (long)puVar21) goto LAB_10278e894;
      }
      else {
LAB_10278e894:
        if (uVar16 == 0) {
          param_2 = *(undefined **)((undefined *)((ulong)puStack_88 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
          if (((ulong)puStack_88 & 0x8000000000000000) != 0) {
            param_2 = puStack_88;
          }
          func_0x000107c60480();
        }
        if ((long)param_2 <= (long)puVar21) {
          param_2 = puVar21;
        }
        FUN_10278f008(puVar9,param_2,1,puStack_88,0x112d4c1d0,&PTR_PTR_1126c66e0,0x112ebdd28,
                      &UNK_10dad8fe8);
        uVar20 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar13 = *(ulong *)(uVar20 + 0x18) >> 1;
        puStack_88 = puVar9;
      }
      lVar17 = *(long *)(uVar20 + 0x10);
      if ((ulong)puStack_90 >> 0x3e == 0) {
        puVar21 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
        if (puVar21 != (undefined *)0x0) {
          if ((undefined *)(uVar13 - lVar17) < puVar21) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eb00);
            (*pcVar3)();
          }
          uVar10 = 0;
          func_0x0001027906c8(0,0x112d4c1d0,&PTR_PTR_1126c66e0);
          func_0x000107c6140c(uVar20 + lVar17 * 8 + 0x20,
                              ((ulong)puStack_90 & 0xffffffffffffff8) + 0x20,puVar21,uVar10);
          goto LAB_10278ea18;
        }
LAB_10278e2c8:
        func_0x000107c6142c(puStack_90);
        if (0 < (long)puVar19) goto LAB_10278eaf0;
      }
      else {
        puVar21 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
        if (((ulong)puStack_90 & 0x8000000000000000) != 0) {
          puVar21 = puStack_90;
        }
        puVar9 = puVar21;
        func_0x000107c60480();
        if (puVar9 == (undefined *)0x0) goto LAB_10278e2c8;
        func_0x000107c60480();
        if ((long)(uVar13 - lVar17) < (long)puVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eafc);
          (*pcVar3)();
        }
        if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eb04);
          (*pcVar3)();
        }
        lVar17 = uVar20 + lVar17 * 8;
        puVar26 = (undefined8 *)(lVar17 + 0x20);
        if (((ulong)puStack_90 & 0xc000000000000001) == 0) {
          uVar10 = *(undefined8 *)(puStack_90 + 0x20);
          *puVar26 = uVar10;
          puVar9 = puVar9 + -1;
          if (puVar9 != (undefined *)0x0) {
            uVar15 = uVar10;
            puVar26 = (undefined8 *)(puStack_90 + 0x28);
            puVar23 = (undefined8 *)(lVar17 + 0x28);
            do {
              uVar10 = *puVar26;
              *puVar23 = uVar10;
              func_0x000107c61174(uVar15);
              puVar9 = puVar9 + -1;
              uVar15 = uVar10;
              puVar26 = puVar26 + 1;
              puVar23 = puVar23 + 1;
            } while (puVar9 != (undefined *)0x0);
          }
          func_0x000107c61174(uVar10);
        }
        else {
          puVar18 = (undefined *)0x0;
          do {
            puVar7 = puVar18;
            func_0x00010278f6a0(puVar18,puStack_90,&PTR_PTR_1126c66e0,0x112d4c1d0);
            puVar26[(long)puVar18] = puVar7;
            puVar18 = puVar18 + 1;
          } while (puVar9 != puVar18);
        }
LAB_10278ea18:
        func_0x000107c6142c(puStack_90);
        if ((long)puVar21 < (long)puVar19) {
LAB_10278eaf0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eaf4);
          (*pcVar3)();
        }
        param_2 = puStack_90;
        if (0 < (long)puVar21) {
          if (SCARRY8(*(long *)(uVar20 + 0x10),(long)puVar21)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10278eaf8);
            (*pcVar3)();
          }
          *(undefined **)(uVar20 + 0x10) = puVar21 + *(long *)(uVar20 + 0x10);
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != *(long *)(unaff_x22 + 0x28));
  }
  func_0x000107c6142c(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010278eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puStack_88);
  return;
}



/* Entry: 10278eb08; end: 10278ec47;  */

void FUN_10278eb08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x000107c4b800();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107fe9894(param_1);
  func_0x000105f60ed0();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_58,0x21,0);
  }
  else {
    puVar3 = PTR_PTR_1126c66e0;
    func_0x000107c610f8();
    func_0x000107c48eac();
    func_0x000107c56434();
    func_0x000107c61170(param_1);
    func_0x000107c61428(param_4 + 0x10,auStack_58,0x21,0);
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      func_0x000107c61558(uVar4);
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_4 + 0x10) = 0x8000000000000000;
      FUN_10278f918(puVar3,lVar2,param_2,uVar4);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(param_4 + 0x10) = uVar5;
      goto LAB_10278ec28;
    }
  }
  func_0x00010278f85c(lVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(lVar2);
LAB_10278ec28:
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10278ec48; end: 10278eca7;  */

void FUN_10278ec48(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10278eca8;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
  plVar3[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278d7ac,0,0);
  return;
}



/* Entry: 10278eca8; end: 10278eceb;  */

void FUN_10278eca8(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010278ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10278ecec; end: 10278eedf;  */

/* WARNING: Possible PIC construction at 0x00010278ed2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010278ed30) */
/* WARNING: Removing unreachable block (ram,0x00010278ed34) */

void FUN_10278ecec(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x10278ed30;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 10278eee0; end: 10278f007;  */

ulong FUN_10278eee0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278f008);
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
  func_0x00010278f1f8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278f004);
      (*pcVar1)();
    }
    FUN_10278f298(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10278f008; end: 10278f167;  */

ulong FUN_10278f008(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278f168);
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
  FUN_10278f168(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278f164);
      (*pcVar1)();
    }
    func_0x00010278f3bc(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 10278f168; end: 10278f297;  */

undefined *
FUN_10278f168(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x00010278ed60(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10278f298; end: 10278f4d7;  */

long FUN_10278f298(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10278f3b8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10278f3bc);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d627b0;
        func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d627b0;
      func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10278f3b4);
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



/* Entry: 10278f4d8; end: 10278f917;  */

ulong FUN_10278f4d8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10278f5d4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10278f5d8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar5 = 0x112d627b0;
    func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar5 = 0x112d627b0;
    func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar3 = 0;
  func_0x000107c60714(uVar5,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10278f6a0);
  (*pcVar2)();
}



/* Entry: 10278f918; end: 10278fbd7;  */

void FUN_10278f918(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10278f9f0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_10278fbd8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10278f9b8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010278fa68();
    lVar6 = *unaff_x20;
    goto joined_r0x00010278fa04;
  }
  lVar6 = *unaff_x20;
joined_r0x00010278fa04:
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10278fa68);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10278fbd8; end: 102790023;  */

void FUN_10278fbd8(long param_1,ulong param_2)

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
  uVar6 = 0x112ebdd20;
  func_0x0001000285a8(0x112ebdd20,&UNK_10dad8fe0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10278fe40:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10278fe70);
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
          goto LAB_10278fe40;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10278fe74);
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



/* Entry: 102790024; end: 102790123;  */

undefined * FUN_102790024(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebdd20,&UNK_10dad8fe0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102790120);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102790124);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102790124; end: 1027904cb;  */

ulong FUN_102790124(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar3 = param_1;
  func_0x000107c44a2c();
  uVar4 = 0;
  if ((int)lVar3 != 0) {
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027904c8);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027904cc);
      (*pcVar1)();
    }
    lStack_d8 = lVar3;
    lStack_d0 = lVar14;
    func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    uVar5 = 0x112d38ec0;
    func_0x000102790688(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                        PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
    func_0x000107c601c0(auStack_80,lVar2,uVar5);
    puVar15 = PTR___sypN_11034f1a8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,auStack_c8);
      uVar8 = 0;
      func_0x0001027906c8(0,0x112d55598,&PTR_PTR_1126b25d0);
      plVar9 = &lStack_a8;
      func_0x000107c6147c(plVar9,auStack_c8,puVar15 + 8,uVar8,6);
      lVar3 = lStack_a8;
      if ((((ulong)plVar9 & 1) != 0) && (lStack_a8 != 0)) {
        puVar7 = puVar10;
        func_0x000107c61550();
        if (((int)puVar7 == 0) ||
           (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar6 = puVar10;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_10278f008(0,puVar6 + 1,1,puVar10,0x112d55598,&PTR_PTR_1126b25d0,0x112d555a0,
                        &UNK_10d9b78c0);
        }
        uVar13 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar4 = *(ulong *)(uVar13 + 0x10);
        puVar10 = puVar7;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar4) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_10278f008(puVar10,uVar4 + 1,1,puVar7,0x112d55598,&PTR_PTR_1126b25d0,0x112d555a0,
                        &UNK_10d9b78c0);
          uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
        *(long *)(uVar13 + uVar4 * 8 + 0x20) = lVar3;
      }
      func_0x000107c601c0(auStack_80,lVar2,uVar5);
    }
    func_0x000107c61170(lStack_d8);
    (**(code **)(lStack_d0 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar15 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar15 != (undefined *)0x0) {
      uVar4 = 0;
      do {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10279045c);
            (*pcVar1)();
          }
          uVar13 = *(ulong *)(puVar10 + uVar4 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar4;
          func_0x00010278f6a0(uVar4,puVar10,&PTR_PTR_1126b25d0,0x112d55598);
        }
        puVar7 = (undefined *)(uVar4 + 1);
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102790458);
          (*pcVar1)();
        }
        uVar11 = uVar13;
        func_0x000107c4abb4();
        if ((int)uVar11 == 1) {
          uVar11 = uVar13;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1027904c4);
            (*pcVar1)();
          }
          uVar12 = uVar11;
          func_0x000107c3e240();
          func_0x000107c61170(uVar11);
          if ((int)uVar12 == 5) goto LAB_102790478;
        }
        func_0x000107c61170(uVar13);
        uVar4 = uVar4 + 1;
      } while (puVar7 != puVar15);
    }
    uVar13 = 0;
LAB_102790478:
    func_0x000107c6142c(puVar10);
    uVar4 = uVar13;
    func_0x000107c4c930(uVar13);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
  }
  return uVar4;
}



/* Entry: 1027904cc; end: 1027904e3;  */

undefined1  [16] FUN_1027904cc(void)

{
  return ZEXT816(0x110548908);
}



/* Entry: 1027904e4; end: 10279054f;  */

undefined8 * FUN_1027904e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 102790550; end: 1027905e3;  */

int FUN_102790550(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027905e4; end: 102790707;  */

void FUN_1027905e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if (lRam0000000112ebdd08 != 0) {
    return;
  }
  uVar1 = 0x112ebdd10;
  func_0x00010002969c(0x112ebdd10,&UNK_10dad8fc8);
  uVar3 = 0x112d5d480;
  func_0x00010002969c(0x112d5d480,&UNK_10d923b90);
  uVar2 = 0xff;
  uStack_28 = uVar3;
  func_0x000107c5fcec(0xff);
  uVar3 = 0xd4000001;
  func_0x000107c614d0(0xd4000001,0,&uStack_28,0,uVar1,uVar2,0x10,0);
  lRam0000000112ebdd08 = uVar3;
  return;
}



/* Entry: 102790708; end: 102790733;  */

void FUN_102790708(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x000107c4b800();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  func_0x000107c61170(lVar1);
  func_0x000107fe9894(param_1);
  func_0x000105f60ed0();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0x21,0);
  }
  else {
    puVar3 = PTR_PTR_1126c66e0;
    func_0x000107c610f8();
    func_0x000107c48eac();
    func_0x000107c56434();
    func_0x000107c61170(param_1);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0x21,0);
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c61558(uVar4);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
      FUN_10278f918(puVar3,lVar2,param_2,uVar4);
      func_0x000107c6142c(param_2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
      goto LAB_10278ec28;
    }
  }
  func_0x00010278f85c(lVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(lVar2);
LAB_10278ec28:
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102790734; end: 10279077f;  */

void FUN_102790734(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebdd30,&UNK_10dad8ff0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102790780,param_1);
  return;
}



/* Entry: 102790780; end: 10279079f;  */

void FUN_102790780(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110548a28;
  param_1[4] = &PTR_DAT_1105489e8;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1027907a0; end: 1027907ff;  */

void FUN_1027907a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102790800,0,0);
  return;
}



/* Entry: 102790800; end: 102790b1f;  */

void FUN_102790800(undefined8 param_1,undefined *param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar18 = 0;
  lVar11 = *(long *)(unaff_x22 + 0x38);
  lVar12 = *(long *)(unaff_x22 + 0x20);
  uVar19 = *(ulong *)(lVar12 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar18;
    if (uVar18 <= uVar19) {
      uVar1 = uVar19;
    }
    plVar2 = (long *)(lVar12 + 0x38 + uVar18 * 0x20);
    do {
      plVar14 = plVar2;
      if (uVar19 == uVar18) {
        func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102790b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar10);
        return;
      }
      uVar18 = uVar18 + 1;
      if (uVar1 + 1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102790b20);
        (*pcVar3)();
      }
      lVar16 = *plVar14;
      plVar2 = plVar14 + 4;
    } while (*(long *)(lVar16 + 0x10) == 0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar4 = plVar14[-2];
    uVar17 = *(undefined8 *)(lVar16 + 0x20);
    func_0x000107c61434();
    func_0x000107c61434(lVar16);
    func_0x000107c61174();
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar22 = uVar15;
    func_0x000107c42d48();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    uVar15 = uVar22;
    func_0x000107c42428();
    func_0x000107c61180();
    func_0x000107c615e8(uVar22);
    puVar5 = PTR_PTR_1126aff30;
    func_0x000107c61168(PTR_PTR_1126aff30);
    func_0x000107c5b1c0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5eec4(uVar20);
    func_0x000107c5eeac();
    (**(code **)(lVar11 + 8))(uVar20,uVar21);
    puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
    func_0x000107c61174(puVar5);
    puVar9 = PTR__kCMTimeRangeZero_110348668;
    uVar21 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uVar20 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uVar22 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar22;
    uVar21 = *(undefined8 *)(puVar9 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(puVar9 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar21;
    func_0x000107c5dc60(puVar7);
    func_0x000107c61180();
    puVar9 = PTR_PTR_1126aff40;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar6,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c46e34();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    param_2 = &UNK_10daabba0;
    func_0x0001000285a8(0x112d627b0);
    *(undefined **)(unaff_x22 + 0x18) = puVar9;
    lVar8 = unaff_x22 + 0x18;
    func_0x000104888f7c();
    func_0x000107c6142c(lVar4);
    func_0x000107c6142c(lVar16);
    func_0x000107c61170(puVar5);
    func_0x000107c615e8(uVar15);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(puVar9);
    puVar9 = puVar10;
    func_0x000107c61550();
    if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
       (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        param_2 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        param_2 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          param_2 = puVar10;
        }
        func_0x000107c60480();
      }
      param_2 = param_2 + 1;
      puVar9 = (undefined *)0x0;
      FUN_10278eee0(0,param_2,1,puVar10);
    }
    uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar13 + 0x10);
    puVar5 = (undefined *)(uVar1 + 1);
    puVar10 = puVar9;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      param_2 = puVar5;
      FUN_10278eee0(puVar10,puVar5,1,puVar9);
      uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar13 + 0x10) = puVar5;
    *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar8;
  } while( true );
}



/* Entry: 102790b20; end: 102790b73;  */

void FUN_102790b20(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102790b74;
  plVar2[4] = param_1;
  plVar2[5] = lVar3;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[6] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[7] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[8] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102790800,0,0);
  return;
}



/* Entry: 102790b74; end: 102790bb7;  */

void FUN_102790b74(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102790bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102790bb8; end: 102790bd7;  */

undefined1  [16] FUN_102790bb8(void)

{
  return ZEXT816(0x110548a08);
}



/* Entry: 102790bd8; end: 102790bf7;  */

undefined1 FUN_102790bd8(ulong param_1)

{
  if (param_1 < 0x11) {
    return (&UNK_10dad90a4)[param_1];
  }
  return 0x14;
}



/* Entry: 102790bf8; end: 102790d43;  */

/* WARNING: Possible PIC construction at 0x000102790ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102790cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102790cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102790cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102790d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102790d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102790d10) */
/* WARNING: Removing unreachable block (ram,0x000102790d00) */
/* WARNING: Removing unreachable block (ram,0x000102790cf0) */
/* WARNING: Removing unreachable block (ram,0x000102790ce0) */
/* WARNING: Removing unreachable block (ram,0x000102790cd0) */
/* WARNING: Removing unreachable block (ram,0x000102790d20) */

void FUN_102790bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar12 = &UNK_110548b40;
  func_0x000107c613fc(&UNK_110548b40,0x70,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar6;
  *(undefined8 *)(puVar12 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined8 *)(puVar12 + 0x30) = uVar2;
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined8 *)(puVar12 + 0x40) = uVar3;
  *(undefined8 *)(puVar12 + 0x48) = uVar9;
  *(undefined8 *)(puVar12 + 0x50) = uVar4;
  *(undefined8 *)(puVar12 + 0x58) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar5;
  *(undefined8 *)(puVar12 + 0x68) = uVar11;
  uVar13 = 0x112ebdd40;
  func_0x0001000285a8(0x112ebdd40,&UNK_10dad9108);
  func_0x000107c613fc();
  pcVar14 = FUN_102790dd0;
  func_0x0001000841fc(FUN_102790dd0,puVar12,uVar13);
  func_0x000100084214(&UNK_10dad90d0,0x31,2);
  *param_1 = pcVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102790d44; end: 102790d53;  */

undefined1  [16] FUN_102790d44(void)

{
  return ZEXT816(0x110548b20);
}



/* Entry: 102790d54; end: 102790dcf;  */

void FUN_102790d54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102790dd0; end: 102790f27;  */

void FUN_102790dd0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_1a8 [328];
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  func_0x000107c610b4(auStack_1a8,param_2,0x13b);
  func_0x0001000285a8(0x112ebdd48,&UNK_10dad9110);
  puVar8 = auStack_1a8;
  func_0x0001000838ec();
  FUN_1027922b8(uVar9,uVar4,puVar8,uVar1,uVar5,uVar2,uVar6,uVar12,uVar13,uVar14,uVar3,uVar7);
  func_0x000100082720("MemTwoPickerValdiComponentScopedFactoryServiceProvider",0x36,2);
  FUN_102791144(uVar11,puVar8,uVar9);
  func_0x000100082720("MemTwoPickerViewControllerServiceProvider",0x29,2);
  puVar10 = puVar8;
  FUN_102790f28(puVar8,uVar11);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar8);
  func_0x000100082720("MemTwoPickerPresenterEntryPointProvider",0x27,2);
  *param_1 = (long)puVar10;
  return;
}



/* Entry: 102790f28; end: 102790fa7;  */

void FUN_102790f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdd50,&UNK_10dad9120);
  puVar1 = &UNK_110548be8;
  func_0x000107c613fc(&UNK_110548be8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102791030,puVar1);
  return;
}



/* Entry: 102790fa8; end: 10279102f;  */

void FUN_102790fa8(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_180 [320];
  
  func_0x000100083b20(auStack_180);
  FUN_102791124();
  lVar1 = param_2;
  func_0x000107c613fc();
  func_0x000107c610b4(lVar1 + 0x18,auStack_180,0x13b);
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110548c00;
  *param_1 = lVar1;
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 102791030; end: 102791037;  */

void FUN_102791030(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_180 [320];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(auStack_180);
  FUN_102791124();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c610b4(lVar3 + 0x18,auStack_180,0x13b);
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110548c00;
  *param_1 = lVar3;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 102791038; end: 10279108b;  */

long FUN_102791038(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c610b4(unaff_x20 + 0x18,param_1,0x13b);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return unaff_x20;
}



/* Entry: 10279108c; end: 1027910b7;  */

void FUN_10279108c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000102789a90(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027910b8; end: 102791103;  */

void FUN_1027910b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_28);
  func_0x000107c3e2c0(uVar1,param_2,uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 102791104; end: 102791123;  */

void FUN_102791104(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 102791124; end: 102791143;  */

void FUN_102791124(void)

{
  func_0x000107c61168(&PTR_PTR_112ebdd98);
  return;
}



/* Entry: 102791144; end: 1027912ab;  */

void FUN_102791144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebde00,&UNK_10dad91c0);
  puVar1 = &UNK_110548c50;
  func_0x000107c613fc(&UNK_110548c50,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1027912ac,puVar1);
  return;
}



/* Entry: 1027912ac; end: 1027912b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027912ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = &lStack_50;
  lVar5 = lVar2;
  FUN_1027921a0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ebde08) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ebde10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(long *)(lVar6 + _DAT_112ebde18) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112ebde20) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ebde28) = uVar8;
  puVar4 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_50 = lVar6;
  lStack_48 = lVar5;
  func_0x000107c6157c(lVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_50,puVar4,0,0);
  *param_1 = plVar7;
  return;
}



/* Entry: 1027912b8; end: 102791357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027912b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebde08) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebde10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebde18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebde20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebde28) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102791358; end: 102791427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102791358(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112ebde08;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebde08);
  lStack_50 = lVar2;
  if (lVar2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c61174();
    func_0x000100083b20(&uStack_48);
    uVar3 = uStack_48;
    lStack_50 = lVar2;
    func_0x00010008a7c8(&uStack_48,&lStack_50);
    func_0x000107c61574(uVar3);
    func_0x000100083b20(&lStack_50);
    func_0x000107c61574(uStack_48);
    func_0x000107c61170(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lStack_50;
    func_0x000107c6157c(lStack_50);
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lStack_50;
}



/* Entry: 102791428; end: 10279142b; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController preferredStatusBarStyle] */

undefined8 FUN_102791428(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10279142c; end: 1027914df; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController loadView] */

void FUN_10279142c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_loadView_112604be0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027914e0);
  (*pcVar1)();
}



/* Entry: 1027914e0; end: 102791547;  */

void FUN_1027914e0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x150) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x158) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x160) = uVar1;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102791548;
  plVar2[4] = param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[6] = lVar3;
  plVar2[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027917a4,lVar3,lVar4);
  return;
}



/* Entry: 102791548; end: 1027915c7;  */

void FUN_102791548(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x168);
  *(long *)(lVar4 + 0x170) = unaff_x20;
  func_0x000107c615c0(uVar1);
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x158);
    func_0x000100eea164();
    func_0x000107c5fca8(uVar3,uVar1);
    pcVar2 = FUN_1027915c8;
  }
  else {
    pcVar2 = FUN_1027915f8;
    uVar3 = 0;
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,uVar1);
  return;
}



/* Entry: 1027915c8; end: 1027915f7;  */

void FUN_1027915c8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x0001027915f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027915f8; end: 10279165b;  */

void FUN_1027915f8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x180) = param_1;
  func_0x000107c5fca8(uVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10279165c,uVar1,param_1);
  return;
}



/* Entry: 10279165c; end: 1027916fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279165c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x178));
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c615f0(uVar3);
  func_0x000102789a90(unaff_x22 + 0x10);
  func_0x000107c41864(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027916fc,uVar1,uVar2);
  return;
}



/* Entry: 1027916fc; end: 102791737;  */

void FUN_1027916fc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x170));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102791734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102791738; end: 1027917a3;  */

void FUN_102791738(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027917a4,uVar1,uVar2);
  return;
}



/* Entry: 1027917a4; end: 102791833;  */

void FUN_1027917a4(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  FUN_102791358();
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  lVar3 = 0x112ebde58;
  func_0x0001000285a8(0x112ebde58,&UNK_10dad9230);
  lVar4 = lVar3;
  func_0x000102792260();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102791834;
  plVar2[3] = unaff_x22 + 0x18;
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar4,lVar3,&UNK_10e821f58,&UNK_10e821f60);
  uVar6 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar5,uVar6,PTR___ss5ErrorWS_11034ee10);
  plVar2[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[5] = uVar8;
  piVar10 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar9;
  *plVar9 = (long)plVar2;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar3,lVar4);
  return;
}



/* Entry: 102791834; end: 10279188b;  */

void FUN_102791834(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10279188c;
  }
  else {
    pcVar1 = FUN_102791bc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
  return;
}



/* Entry: 10279188c; end: 102791bbf;  */

void FUN_10279188c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(uVar6);
  lVar7 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102791bb0);
    (*pcVar1)();
  }
  lVar8 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c5a050(lVar7);
  lVar2 = lVar7;
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102791bb4);
    (*pcVar1)();
  }
  lVar10 = *(long *)(unaff_x22 + 0x20);
  lVar4 = lVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  *(long *)(lVar2 + 0x20) = lVar8;
  lVar3 = lVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102791bb8);
    (*pcVar1)();
  }
  lVar9 = *(long *)(unaff_x22 + 0x20);
  lVar8 = lVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar4 = lVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  *(long *)(lVar2 + 0x28) = lVar4;
  lVar3 = lVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar10 = *(long *)(unaff_x22 + 0x20);
    lVar8 = lVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar3);
    *(long *)(lVar2 + 0x30) = lVar4;
    lVar3 = lVar7;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar8 = lVar10;
      func_0x000107c3ec1c(lVar10);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      lVar4 = lVar3;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar3);
      *(long *)(lVar2 + 0x38) = lVar4;
      uVar6 = 0;
      func_0x000100847984(0);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar6);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x000102791ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102791bc0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102791bbc);
  (*pcVar1)();
}



/* Entry: 102791bc0; end: 102791bff;  */

void FUN_102791bc0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102791bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102791c00; end: 102791cd3; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController viewDidLoad] */

void FUN_102791c00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar1);
  puVar1 = &UNK_110548c98;
  func_0x000107c613fc(&UNK_110548c98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  func_0x000107c61174(param_1);
  uVar2 = 0xc1;
  func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad9220,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102791cd4; end: 102791def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102791cd4(uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51750();
  func_0x000107c61170(puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ebde10);
  *puVar1 = puVar4;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_113097748);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_58);
  func_0x000107c5bb50(uVar5);
  func_0x000107c615e8(uVar5);
  func_0x000107c5a9c4(puVar2);
  func_0x000107c61180();
  func_0x000107c30a30();
  func_0x000107c517f4(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102791df0; end: 102791e1f; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController viewWillAppear:] */

void FUN_102791df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102791cd4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102791e20; end: 102791ee3; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102791e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_s_viewWillDisappear__112685438;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar3,param_3);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebde10);
  if (*(char *)(puVar1 + 1) != '\x01') {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c517f4();
    func_0x000107c61170(puVar3);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102791ee4; end: 102791f27;  */

void FUN_102791ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407010c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102791f28; end: 102791f4b; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController defaultSubProjectName] */

void FUN_102791f28(void)

{
  func_0x000107c5fadc(0x6f775477654d,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102791f4c; end: 102791feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102791f4c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 auStack_2c0 [320];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [320];
  
  uStack_180 = 0x2065727574616566;
  uStack_178 = 0xea0000000000203d;
  func_0x000100083b20(auStack_2c0);
  func_0x000107c610b4(auStack_170,auStack_2c0,0x13b);
  func_0x000102789a90(auStack_170);
  auStack_2c0[0] = auStack_170[0];
  puVar2 = &UNK_1106a6548;
  func_0x000107c5fb18(auStack_2c0,&UNK_1106a6548);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = uStack_178;
  auVar1._0_8_ = uStack_180;
  return auVar1;
}



/* Entry: 102791fec; end: 102792053; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController jiraMetaInfo] */

void FUN_102791fec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102791f4c();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102792054; end: 10279205b; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController pageViewName] */

undefined8 FUN_102792054(void)

{
  return 0x76;
}



/* Entry: 10279205c; end: 1027920d7; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279205c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112ebde08) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ebde10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemTwoPickerImplementation/MemTwoPickerViewController.swift",0x3b,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027920d8);
  (*pcVar2)();
}



/* Entry: 1027920d8; end: 102792137; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController initWithNibName:bundle:] */

void FUN_1027920d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerImplementation.MemTwoPickerViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102792104);
  (*pcVar1)();
}



/* Entry: 102792138; end: 102792147;  */

undefined1  [16] FUN_102792138(void)

{
  return ZEXT816(0x110548c78);
}



/* Entry: 102792148; end: 10279219f; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102792164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102792184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102792168) */
/* WARNING: Removing unreachable block (ram,0x000102792188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102792148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebde20));
  return;
}



/* Entry: 1027921a0; end: 1027921bf;  */

void FUN_1027921a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128605e0);
  return;
}



/* Entry: 1027921c0; end: 102792223;  */

void FUN_1027921c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102792224;
  plVar5[0x2a] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec(0,lVar4,uVar1);
  plVar5[0x2b] = lVar2;
  func_0x000107c5fce8();
  plVar5[0x2c] = lVar2;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  plVar5[0x2d] = (long)plVar3;
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_102791548;
  plVar3[4] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027917a4,lVar2,lVar4);
  return;
}



/* Entry: 102792224; end: 1027922af;  */

void FUN_102792224(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027922b0; end: 1027922b3; -[_TtC26MemTwoPickerImplementation26MemTwoPickerViewController defaultProjectNameV3] */

void FUN_1027922b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010407010c();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


