/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101395d14; end: 101395f3f;  */

void FUN_101395d14(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_60;
  ppuVar5 = &puStack_60;
  ppuVar6 = &puStack_60;
  ppuVar7 = &puStack_60;
  puVar11 = (ulong *)*param_2;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  *param_1 = puVar3;
  puVar2 = PTR__swift_isaMask_11034f488;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar11) + 0xa8))();
  puVar1 = PTR___sSSN_11034da80;
  puStack_48 = PTR___sSSN_11034da80;
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
    uStack_50 = 0;
    puStack_48 = (undefined *)0x0;
  }
  uVar8 = 0x4e79616c70736964;
  puStack_60 = puVar3;
  lStack_58 = param_3;
  func_0x000100102934(&puStack_60,0x4e79616c70736964,0xeb00000000656d61);
  (**(code **)((*(ulong *)puVar2 & *puVar11) + 0x78))();
  puStack_48 = puVar1;
  lVar9 = 0x644972657375;
  puStack_60 = (undefined *)ppuVar4;
  lStack_58 = uVar8;
  func_0x000100102934(&puStack_60,0x644972657375,0xe600000000000000);
  (**(code **)((*(ulong *)puVar2 & *puVar11) + 0x90))();
  puStack_48 = PTR___sSSN_11034da80;
  if (lVar9 == 0) {
    ppuVar5 = (undefined **)0x0;
    uStack_50 = 0;
    puStack_48 = (undefined *)0x0;
  }
  lVar10 = 0x656d616e72657375;
  puStack_60 = (undefined *)ppuVar5;
  lStack_58 = lVar9;
  func_0x000100102934(&puStack_60,0x656d616e72657375,0xe800000000000000);
  (**(code **)((*(ulong *)puVar2 & *puVar11) + 0xc0))();
  puStack_48 = PTR___sSSN_11034da80;
  if (lVar10 == 0) {
    ppuVar6 = (undefined **)0x0;
    uStack_50 = 0;
    puStack_48 = (undefined *)0x0;
  }
  lVar9 = 0x41696a6f6d746962;
  puStack_60 = (undefined *)ppuVar6;
  lStack_58 = lVar10;
  func_0x000100102934(&puStack_60,0x41696a6f6d746962,0xef64497261746176);
  (**(code **)((*(ulong *)puVar2 & *puVar11) + 0xd8))();
  puStack_48 = PTR___sSSN_11034da80;
  if (lVar9 == 0) {
    ppuVar7 = (undefined **)0x0;
    uStack_50 = 0;
    puStack_48 = (undefined *)0x0;
  }
  puStack_60 = (undefined *)ppuVar7;
  lStack_58 = lVar9;
  func_0x000100102934(&puStack_60,0x53696a6f6d746962,0xef64496569666c65);
  return;
}



/* Entry: 101395f40; end: 101395f5f;  */

void FUN_101395f40(void)

{
  func_0x000107c61168(&PTR_PTR_112d77e58);
  return;
}



/* Entry: 101395f60; end: 101395f8f;  */

void FUN_101395f60(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101395674);
      (*pcVar2)();
    }
    FUN_101395674(lVar1,param_1);
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101395f90; end: 101395fab;  */

void FUN_101395f90(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101395fac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101395fac; end: 1013962af;  */

undefined * FUN_101395fac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013960dc);
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
    puVar3 = (undefined *)0x112d77ed0;
    func_0x0001000285a8(0x112d77ed0,&UNK_10d9379c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
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



/* Entry: 1013962b0; end: 1013962cf;  */

void FUN_1013962b0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001013962c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1013962d0; end: 10139635f;  */

void FUN_1013962d0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101396360);
      (*pcVar1)();
    }
    FUN_101396360(param_3,param_1);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101396360; end: 101396467;  */

void FUN_101396360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_1103aa8a8;
  func_0x000107c613fc(&UNK_1103aa8a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1103aa920;
  func_0x000107c613fc(&UNK_1103aa920,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_58 = 0x101396980;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_1013968c8;
  puStack_60 = &UNK_1103aa938;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_50;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4f884(uStack_48);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 101396468; end: 101396587; -[_TtC25DreamsLensRemoteApiPlugin28DreamsLensGetMetadataHandler handleRequest:] */

void FUN_101396468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1103aa8a8;
  func_0x000107c613fc(&UNK_1103aa8a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103aa8d0;
  func_0x000107c613fc(&UNK_1103aa8d0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_50 = FUN_10139695c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_1103aa8e8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101396588; end: 10139658b; -[_TtC25DreamsLensRemoteApiPlugin28DreamsLensGetMetadataHandler reset] */

void FUN_101396588(void)

{
  return;
}



/* Entry: 10139658c; end: 1013968c7;  */

/* WARNING: Possible PIC construction at 0x000101396714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013967e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013967f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101396814) */
/* WARNING: Removing unreachable block (ram,0x0001013967f8) */
/* WARNING: Removing unreachable block (ram,0x0001013967e8) */
/* WARNING: Removing unreachable block (ram,0x000101396718) */
/* WARNING: Removing unreachable block (ram,0x000101396738) */
/* WARNING: Removing unreachable block (ram,0x000101396750) */
/* WARNING: Removing unreachable block (ram,0x000101396854) */
/* WARNING: Removing unreachable block (ram,0x00010139687c) */

void FUN_10139658c(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puStack_c8;
  undefined1 auStack_c0 [64];
  undefined auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = auStack_80;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (param_1 != (ulong *)0x0) {
      puVar5 = (undefined *)0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      puVar4 = auStack_c0;
      func_0x000107c61534();
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      *(undefined8 *)(puVar5 + 0x20) = 0x6449646e65697266;
      *(undefined8 *)(puVar5 + 0x28) = 0xe800000000000000;
      pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x78);
      func_0x000107c61174();
      (*pcVar6)();
      *(ulong **)(puVar5 + 0x30) = param_1;
      *(undefined1 **)(puVar5 + 0x38) = puVar4;
      puVar3 = puVar5;
      func_0x0001001830b8();
      func_0x000107c61588(puVar5);
      func_0x000100ab5dc4(puVar5 + 0x20);
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      puStack_c8 = puVar3;
      func_0x000107c61434(puVar3);
      uVar1 = 0x112d550a0;
      func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
      ppuVar2 = &puStack_c8;
      func_0x000107c6061c(ppuVar2,uVar1);
      puStack_c8 = (undefined *)0x0;
      func_0x000107c41300();
      func_0x000107c61180();
      func_0x000107c615e8(ppuVar2);
      puVar3 = puStack_c8;
      func_0x000107c61174(puStack_c8);
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c5ed30();
      }
      else {
        func_0x000107c5ee30(puVar5);
        puVar3 = puVar5;
      }
      goto code_r0x000107c61170;
    }
    puVar5 = (undefined *)0x5;
    FUN_10139698c(param_3,5,param_4);
    func_0x000107c61574();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  pcVar6 = *(code **)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar1);
  puVar3 = puVar5;
  func_0x000107c61174(puVar5);
  (*pcVar6)(puVar5);
  func_0x000107c61574(uVar1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1013968c8; end: 101396917;  */

void FUN_1013968c8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101396918; end: 10139695b;  */

void FUN_101396918(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10139695c; end: 10139698b;  */

void FUN_10139695c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101396360);
      (*pcVar2)();
    }
    FUN_101396360(lVar1,param_1);
    func_0x000107c61574(lVar3);
  }
  func_0x000107c61168(PTR_PTR_1126b0418);
  func_0x000107c408f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10139698c; end: 101396a77;  */

/* WARNING: Possible PIC construction at 0x000101396a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101396a44) */

void FUN_10139698c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  func_0x000107c48368(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101396a78; end: 101396a7f;  */

void FUN_101396a78(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101396a80; end: 101396c37;  */

void FUN_101396a80(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar3 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar4 = 0xb;
  func_0x0001044e4b78();
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = uVar4;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar5 = 1;
  func_0x000107c602e8();
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101396c38);
      (*pcVar2)();
    }
    uVar4 = *puVar11;
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar5 + 0x38;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60114();
  uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar6 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar6 & 0x3f);
  if ((uVar9 & uVar8) != 0) {
    do {
      uVar8 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8);
      func_0x000107c61174();
      uVar7 = uVar8;
      func_0x000107c60118();
      func_0x000107c61170(uVar8);
      if ((uVar7 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_101396bf0;
      }
      uVar6 = uVar6 + 1 & ~uVar10;
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101396c34);
    (*pcVar2)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
LAB_101396bf0:
  func_0x000107c61588(param_1);
  func_0x000107c61408(puVar11,*(undefined8 *)(param_1 + 0x10),uVar3);
  lRam00000001137ff3c8 = lVar5;
  return;
}



/* Entry: 101396c38; end: 101396c7b;  */

void FUN_101396c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101396c7c; end: 10139701f;  */

/* WARNING: Possible PIC construction at 0x000101396cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101396fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101396fa0) */
/* WARNING: Removing unreachable block (ram,0x000101396f90) */
/* WARNING: Removing unreachable block (ram,0x000101396e68) */
/* WARNING: Removing unreachable block (ram,0x000101396e3c) */
/* WARNING: Removing unreachable block (ram,0x000101396e2c) */
/* WARNING: Removing unreachable block (ram,0x000101396cfc) */
/* WARNING: Removing unreachable block (ram,0x000101396e70) */
/* WARNING: Removing unreachable block (ram,0x000101396fec) */
/* WARNING: Removing unreachable block (ram,0x000101396f18) */
/* WARNING: Removing unreachable block (ram,0x000101396d0c) */
/* WARNING: Removing unreachable block (ram,0x000101397004) */
/* WARNING: Removing unreachable block (ram,0x000101396db4) */
/* WARNING: Removing unreachable block (ram,0x000101396fcc) */

void FUN_101396c7c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef3a250);
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101397020);
  (*pcVar1)();
}



/* Entry: 101397020; end: 101397217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397020(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + _DAT_113015ec8);
    lVar1 = 0;
    func_0x00010139693c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 101397218; end: 10139724b;  */

void FUN_101397218(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10139724c; end: 10139726b;  */

void FUN_10139724c(void)

{
  FUN_101396c7c();
  return;
}



/* Entry: 10139726c; end: 101397283;  */

undefined8 FUN_10139726c(void)

{
  return 0;
}



/* Entry: 101397284; end: 1013972a3;  */

void FUN_101397284(void)

{
  func_0x000107c61168(&PTR_PTR_112d78030);
  return;
}



/* Entry: 1013972a4; end: 1013972f3;  */

void FUN_1013972a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1013972f4; end: 10139752b;  */

/* WARNING: Possible PIC construction at 0x00010139736c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013974ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013974d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013974b0) */
/* WARNING: Removing unreachable block (ram,0x0001013974a0) */
/* WARNING: Removing unreachable block (ram,0x000101397370) */
/* WARNING: Removing unreachable block (ram,0x0001013974f8) */
/* WARNING: Removing unreachable block (ram,0x000101397374) */
/* WARNING: Removing unreachable block (ram,0x000101397510) */
/* WARNING: Removing unreachable block (ram,0x000101397420) */
/* WARNING: Removing unreachable block (ram,0x0001013974dc) */

void FUN_1013972f4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010ef3a300);
    func_0x000107c3ebd4(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10139752c);
  (*pcVar1)();
}



/* Entry: 10139752c; end: 10139761f;  */

void FUN_10139752c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    lVar3 = lVar2;
    func_0x000107c3e27c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      uVar1 = 0x737574617473;
      func_0x000107c5fadc(0x737574617473,0xe600000000000000);
      lVar3 = lVar2;
      func_0x000107c40a34();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar1);
      goto LAB_101397608;
    }
  }
  lVar3 = 0;
LAB_101397608:
  *param_1 = lVar3;
  return;
}



/* Entry: 101397620; end: 10139765b;  */

void FUN_101397620(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10139765c; end: 10139767b;  */

void FUN_10139765c(void)

{
  FUN_1013972f4();
  return;
}



/* Entry: 10139767c; end: 10139768b;  */

undefined8 FUN_10139767c(void)

{
  return 0;
}



/* Entry: 10139768c; end: 1013976ab;  */

void FUN_10139768c(void)

{
  func_0x000107c61168(&PTR_PTR_112d78118);
  return;
}



/* Entry: 1013976ac; end: 1013976b7; -[SCDreamsLensRemoteApiPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013976ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78190;
  func_0x000107c61428(param_1 + _DAT_112d78190,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013976b8; end: 1013976c3; -[SCDreamsLensRemoteApiPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013976b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78190;
  func_0x000107c61428(param_1 + _DAT_112d78190,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013976c4; end: 1013976cf; -[SCDreamsLensRemoteApiPluginEntryPoint dreamsFriendsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013976c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d78198;
  func_0x000107c61428(param_1 + _DAT_112d78198,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013976d0; end: 1013976db; -[SCDreamsLensRemoteApiPluginEntryPoint setDreamsFriendsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013976d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78198;
  func_0x000107c61428(param_1 + _DAT_112d78198,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013976dc; end: 1013976e7; -[SCDreamsLensRemoteApiPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013976dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d781a0;
  func_0x000107c61428(param_1 + _DAT_112d781a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013976e8; end: 10139772b;  */

void FUN_1013976e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139772c; end: 101397737; -[SCDreamsLensRemoteApiPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10139772c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d781a0;
  func_0x000107c61428(param_1 + _DAT_112d781a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397738; end: 10139778b;  */

void FUN_101397738(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10139778c; end: 1013978af;  */

/* WARNING: Possible PIC construction at 0x00010139783c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139784c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101397840) */
/* WARNING: Removing unreachable block (ram,0x000101397850) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10139778c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c422f8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3fa0c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_101397284();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x18) = unaff_x20;
        *(long *)(lVar3 + 0x20) = lVar2;
        *(long *)(lVar3 + 0x10) = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(unaff_x20);
        FUN_101396c7c();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1013978b0; end: 1013978d7; -[SCDreamsLensRemoteApiPluginEntryPoint begin] */

void FUN_1013978b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10139778c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013978d8; end: 10139791b; -[SCDreamsLensRemoteApiPluginEntryPoint end] */

void FUN_1013978d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10139791c; end: 101397b1f;  */

void FUN_10139791c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10c5cb0)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef3a350,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DreamsLensRemoteApiPlugin/SCDreamsLensRemoteApiPluginEntryPoint.swift"
                              ,0x45,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101397b20);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53414();
        goto LAB_1013979a8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c542f0();
  }
LAB_1013979a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101397b20; end: 101397bcb; -[SCDreamsLensRemoteApiPluginEntryPoint setValue:forIvarName:] */

void FUN_101397b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10139791c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101397bcc; end: 101397c53; -[SCDreamsLensRemoteApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397bcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d78190,0);
  func_0x000107c61614(param_1 + _DAT_112d78198,0);
  func_0x000107c61614(param_1 + _DAT_112d781a0,0);
  *(undefined8 *)(param_1 + _DAT_112d781a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101397c54; end: 101397c87;  */

void FUN_101397c54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101397c88; end: 101397cdf; -[SCDreamsLensRemoteApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397c88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d78190);
  func_0x000107c61610(param_1 + _DAT_112d78198);
  func_0x000107c61610(param_1 + _DAT_112d781a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d781a8));
  return;
}



/* Entry: 101397ce0; end: 101397cff;  */

void FUN_101397ce0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cce20);
  return;
}



/* Entry: 101397d00; end: 101397d0b; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d781d8;
  func_0x000107c61428(param_1 + _DAT_112d781d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397d0c; end: 101397d17; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d781d8;
  func_0x000107c61428(param_1 + _DAT_112d781d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397d18; end: 101397d23; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint snapRendererScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d781e0;
  func_0x000107c61428(param_1 + _DAT_112d781e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397d24; end: 101397d2f; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint setSnapRendererScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d781e0;
  func_0x000107c61428(param_1 + _DAT_112d781e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397d30; end: 101397d3b; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d781e8;
  func_0x000107c61428(param_1 + _DAT_112d781e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397d3c; end: 101397d47; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d781e8;
  func_0x000107c61428(param_1 + _DAT_112d781e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397d48; end: 101397d53; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint asyncTaskCompletionAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d781f0;
  func_0x000107c61428(param_1 + _DAT_112d781f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397d54; end: 101397d97;  */

void FUN_101397d54(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397d98; end: 101397da3; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint setAsyncTaskCompletionAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101397d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d781f0;
  func_0x000107c61428(param_1 + _DAT_112d781f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397da4; end: 101397df7;  */

void FUN_101397da4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101397df8; end: 101397f6f;  */

/* WARNING: Possible PIC construction at 0x000101397ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101397ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101397f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101397f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101397f4c) */
/* WARNING: Removing unreachable block (ram,0x000101397ee4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101397ed4) */
/* WARNING: Removing unreachable block (ram,0x000101397f3c) */

void FUN_101397df8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5b3b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3e278();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar4 = 0;
        FUN_10139768c();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x20) = lVar3;
        *(long *)(lVar4 + 0x28) = unaff_x20;
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(unaff_x20);
        FUN_1013972f4();
        lVar1 = unaff_x20;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 101397f70; end: 101397f97; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint begin] */

void FUN_101397f70(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101397df8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101397f98; end: 101397fdb; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint end] */

void FUN_101397f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101397fdc; end: 101398247;  */

void FUN_101397fdc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10dbaa0)) {
      uVar2 = 0xd000000000000011;
      func_0x000107c605b8(0xd000000000000011,0x800000010ef24560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef10dfd50)) &&
             (func_0x000107c605b8(0xd000000000000024,0x800000010ef202b0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "DreamsLensRemoteApiPlugin/SCSendDreamsMetadataRemoteApiPluginEntryPoint.swift"
                                ,0x4d,2,0x32,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101398248);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5295c();
        }
        goto LAB_10139806c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59450();
  }
LAB_10139806c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101398248; end: 1013982f3; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint setValue:forIvarName:] */

void FUN_101398248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101397fdc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013982f4; end: 10139838f; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013982f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d781d8,0);
  func_0x000107c61614(param_1 + _DAT_112d781e0,0);
  func_0x000107c61614(param_1 + _DAT_112d781e8,0);
  func_0x000107c61614(param_1 + _DAT_112d781f0,0);
  *(undefined8 *)(param_1 + _DAT_112d781f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101398390; end: 1013983c3;  */

void FUN_101398390(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013983c4; end: 10139842b; -[SCSendDreamsMetadataRemoteApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013983c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d781d8);
  func_0x000107c61610(param_1 + _DAT_112d781e0);
  func_0x000107c61610(param_1 + _DAT_112d781e8);
  func_0x000107c61610(param_1 + _DAT_112d781f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d781f8));
  return;
}



/* Entry: 10139842c; end: 10139844b;  */

void FUN_10139842c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ccef0);
  return;
}



/* Entry: 10139844c; end: 101398603;  */

void FUN_10139844c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  uVar3 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar4 = 0x1c;
  func_0x0001044e4b78();
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = uVar4;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar5 = 1;
  func_0x000107c602e8();
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101398604);
      (*pcVar2)();
    }
    uVar4 = *puVar11;
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar5 + 0x38;
  uVar6 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60114();
  uVar10 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
  uVar7 = uVar6 >> 6;
  uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
  uVar9 = 1L << (uVar6 & 0x3f);
  if ((uVar9 & uVar8) != 0) {
    do {
      uVar8 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8);
      func_0x000107c61174();
      uVar7 = uVar8;
      func_0x000107c60118();
      func_0x000107c61170(uVar8);
      if ((uVar7 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_1013985bc;
      }
      uVar6 = uVar6 + 1 & ~uVar10;
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
    } while ((uVar9 & uVar8) != 0);
  }
  *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
  *(undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101398600);
    (*pcVar2)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
LAB_1013985bc:
  func_0x000107c61588(param_1);
  func_0x000107c61408(puVar11,*(undefined8 *)(param_1 + 0x10),uVar3);
  lRam00000001137ff3d0 = lVar5;
  return;
}



/* Entry: 101398604; end: 101398667;  */

undefined8
FUN_101398604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101398668(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101398668; end: 101398957;  */

void FUN_101398668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar2 = &UNK_1103aaa80;
  func_0x000107c613fc(&UNK_1103aaa80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  pcVar3 = FUN_101398a10;
  func_0x0001000bdd8c(FUN_101398a10,puVar2);
  uVar4 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar5 = 0x101398a18;
  func_0x0001000cb480(0x101398a18,0,uVar4);
  uVar4 = uVar5;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar5);
  if (lRam0000000112d78228 != -1) {
    func_0x000107c61568(0x112d78228,FUN_10139844c);
  }
  uVar5 = uRam00000001137ff3d0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,1,0);
  uVar1 = *(ulong *)(puVar2 + 0x10);
  if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
  }
  *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x28) = 0x800000010ef3a410;
  puVar6 = puVar2;
  func_0x000100403a6c(puVar2);
  func_0x000107c61574(puVar2);
  puVar2 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar7 = 0;
  func_0x0001044e4d64(0);
  uVar8 = uVar7;
  FUN_100f06a9c();
  func_0x000107c61174(uVar4);
  func_0x000107c5fe08(uVar5,uVar7,uVar8);
  puVar9 = puVar6;
  func_0x000107c5fe08(puVar6,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar6);
  func_0x000107c48360(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar9);
  uVar5 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 101398958; end: 101398a0f;  */

void FUN_101398958(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x000107c43d50();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c40430();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10139b3b4();
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010139a724();
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  *(undefined **)(lVar3 + 0x30) = puVar4;
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = uVar1;
  *(undefined8 *)(lVar3 + 0x20) = param_3;
  *param_1 = lVar3;
  return;
}



/* Entry: 101398a10; end: 101398a23;  */

void FUN_101398a10(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c43d50();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5b034();
  func_0x000107c61180();
  func_0x000107c40430();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10139b3b4();
  func_0x000107c613fc();
  lVar5 = 0;
  func_0x00010139a724();
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  *(undefined **)(lVar5 + 0x30) = puVar6;
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *param_1 = lVar5;
  return;
}



/* Entry: 101398a24; end: 101398a5f;  */

void FUN_101398a24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101398a60; end: 101398a6b;  */

void FUN_101398a60(void)

{
  return;
}



/* Entry: 101398a6c; end: 101398adb;  */

void FUN_101398a6c(void)

{
  func_0x000107c61168(&PTR_PTR_112d78270);
  return;
}



/* Entry: 101398adc; end: 1013992ff;  */

/* WARNING: Possible PIC construction at 0x000101398c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101398f80) */
/* WARNING: Removing unreachable block (ram,0x000101398f88) */
/* WARNING: Removing unreachable block (ram,0x000101398fa0) */
/* WARNING: Removing unreachable block (ram,0x000101398d60) */
/* WARNING: Removing unreachable block (ram,0x000101398c98) */
/* WARNING: Removing unreachable block (ram,0x000101398c74) */
/* WARNING: Removing unreachable block (ram,0x000101398da4) */
/* WARNING: Removing unreachable block (ram,0x00010139905c) */
/* WARNING: Removing unreachable block (ram,0x000101398de0) */
/* WARNING: Removing unreachable block (ram,0x000101399074) */
/* WARNING: Removing unreachable block (ram,0x000101398e10) */
/* WARNING: Removing unreachable block (ram,0x000101398c78) */
/* WARNING: Removing unreachable block (ram,0x000101398ef8) */
/* WARNING: Removing unreachable block (ram,0x0001013990c8) */
/* WARNING: Removing unreachable block (ram,0x000101398f38) */
/* WARNING: Removing unreachable block (ram,0x0001013990e4) */
/* WARNING: Removing unreachable block (ram,0x000101399138) */
/* WARNING: Removing unreachable block (ram,0x000101398f68) */
/* WARNING: Removing unreachable block (ram,0x000101398c84) */
/* WARNING: Removing unreachable block (ram,0x000101398e28) */
/* WARNING: Removing unreachable block (ram,0x000101398e30) */
/* WARNING: Removing unreachable block (ram,0x000101398e48) */
/* WARNING: Removing unreachable block (ram,0x000101399068) */
/* WARNING: Removing unreachable block (ram,0x00010139913c) */

void FUN_101398adc(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x000107c61168(PTR_PTR_1126b0418);
    func_0x000107c408f0();
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10139917c);
      (*pcVar1)();
    }
    puVar3 = &UNK_1103aab60;
    func_0x000107c613fc(&UNK_1103aab60,0x28,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(param_2);
    func_0x000107c61174();
    func_0x000107c5c734(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101399300; end: 10139941f; -[_TtC35GenerativeAIIdentityRemoteApiPlugin22GetUserMySelfieHandler handleRequest:] */

void FUN_101399300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_1103aaae8;
  func_0x000107c613fc(&UNK_1103aaae8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103aab10;
  func_0x000107c613fc(&UNK_1103aab10,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcStack_50 = FUN_10139a744;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1004725e8;
  puStack_58 = &UNK_1103aab28;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 101399420; end: 101399423; -[_TtC35GenerativeAIIdentityRemoteApiPlugin22GetUserMySelfieHandler reset] */

void FUN_101399420(void)

{
  return;
}



/* Entry: 101399424; end: 101399607;  */

void FUN_101399424(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_1103aabd8;
    func_0x000107c613fc(&UNK_1103aabd8,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(long *)(puVar2 + 0x20) = param_2;
    *(undefined8 *)(puVar2 + 0x28) = param_5;
    puVar3 = &UNK_1103aac00;
    func_0x000107c613fc(&UNK_1103aac00,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10139ab64;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_10139ab70;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x10139b30c;
    puStack_a0 = &UNK_1103aac18;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_5);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1103aac50;
    func_0x000107c613fc(&UNK_1103aac50,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    puVar5 = &UNK_1103aac78;
    func_0x000107c613fc(&UNK_1103aac78,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10139ab90;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_98 = (code *)0x10139b304;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x100e27b38;
    puStack_a0 = &UNK_1103aac90;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar5);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101399608; end: 101399c5b;  */

void FUN_101399608(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x13;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (lVar9 - extraout_x12) - extraout_x12_00;
  if (param_1 == 0) {
    (**(code **)(lVar12 + 0x38))(lVar13,1,1,lVar2);
    (*param_2)(lVar13,8);
    func_0x0001000293e4(lVar13);
    return;
  }
  puVar3 = &UNK_1103aaae8;
  puStack_a8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar2;
  uStack_98 = extraout_x13;
  func_0x000107c613fc(&UNK_1103aaae8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_4);
  puVar4 = &UNK_1103aacc8;
  func_0x000107c613fc(&UNK_1103aacc8,0x38,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(code **)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  *(long *)(puVar4 + 0x30) = param_1;
  lVar10 = *(long *)(param_4 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lStack_a0;
  if (lVar10 != 0) {
    puVar8 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar8);
    func_0x000107c61170(puVar5);
    lVar9 = param_1;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
    }
    puVar6 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c4766c();
    func_0x000107c61170(lVar9);
    puVar5 = &UNK_1103aacf0;
    func_0x000107c613fc(&UNK_1103aacf0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x10139ab98;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_70 = FUN_10139b22c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100f17d9c;
    puStack_78 = &UNK_1103aad08;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c50784(lVar10);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar6);
    return;
  }
  pcVar11 = *(code **)(lVar12 + 0x38);
  pcStack_b0 = param_2;
  (*pcVar11)(uStack_98,1,1,lStack_a0);
  func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
  puVar8 = puVar3 + 0x10;
  func_0x000107c61648();
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000100029394(uStack_98,lVar9);
    lVar10 = lVar9;
    (**(code **)(lVar12 + 0x30))(lVar9,1,lVar2);
    puVar1 = puStack_a8;
    if ((int)lVar10 != 1) {
      puStack_b8 = puVar3;
      (**(code **)(lVar12 + 0x20))(puStack_a8,lVar9,lVar2);
      (**(code **)(lVar12 + 0x10))(lVar13,puVar1,lVar2);
      (*pcVar11)(lVar13,0,1,lVar2);
      (*pcStack_b0)(lVar13,1);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar8);
      func_0x0001000293e4(lVar13);
      (**(code **)(lVar12 + 8))(puVar1,lVar2);
      func_0x0001000293e4(uStack_98);
      puVar3 = puStack_b8;
      goto LAB_101399a70;
    }
    func_0x0001000293e4(lVar9);
    FUN_10139ac94(param_1,pcStack_b0,param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar4);
    puVar4 = puVar8;
  }
  func_0x000107c61574(puVar4);
  func_0x0001000293e4(uStack_98);
LAB_101399a70:
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101399c5c; end: 101399d47;  */

void FUN_101399c5c(undefined8 param_1,code *param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  (*param_2)(puVar2,8);
  func_0x0001000293e4(puVar2);
  return;
}



/* Entry: 101399d48; end: 10139a277;  */

void FUN_101399d48(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = param_1;
  func_0x000107c44314();
  if (lVar1 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5edd0(lVar6,lVar1,puVar3);
      func_0x000107c6142c(puVar3);
      lVar1 = lVar6;
      (**(code **)(lVar7 + 0x30))(lVar6,1,lVar2);
      if ((int)lVar1 != 1) {
        (**(code **)(lVar7 + 0x20))(lVar5,lVar6,lVar2);
        (**(code **)(lVar7 + 0x10))(puVar4,lVar5,lVar2);
        (**(code **)(lVar7 + 0x38))(puVar4,0,1,lVar2);
        (*param_2)(puVar4);
        func_0x0001000293e4(puVar4);
        (**(code **)(lVar7 + 8))(lVar5,lVar2);
        return;
      }
      func_0x0001000293e4(lVar6);
    }
  }
  (**(code **)(lVar7 + 0x38))(puVar4,1,1,lVar2);
  (*param_2)(puVar4);
  func_0x0001000293e4(puVar4);
  return;
}



/* Entry: 10139a278; end: 10139a6df;  */

void FUN_10139a278(ulong param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      lVar6 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar7,1,1,lVar6);
      (*param_3)(puVar7,10);
    }
    else {
      puVar1 = &UNK_1103aade0;
      func_0x000107c613fc(&UNK_1103aade0,0x20,7);
      *(code **)(puVar1 + 0x10) = param_3;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      lVar6 = *(long *)(param_2 + 0x20);
      func_0x000107c6157c(param_4);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        puVar2 = PTR_PTR_1126b1060;
        func_0x000107c610f8(PTR_PTR_1126b1060);
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar4 = PTR___sSSN_11034da80;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c47d08(puVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c44fdc();
        func_0x000107c61180();
        if (param_5 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar4);
        }
        puVar4 = PTR_PTR_1126b08b8;
        func_0x000107c610f8(PTR_PTR_1126b08b8);
        func_0x000107c4766c();
        func_0x000107c61170(param_5);
        puVar3 = &UNK_1103aae08;
        func_0x000107c613fc(&UNK_1103aae08,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = 0x10139b284;
        *(undefined **)(puVar3 + 0x18) = puVar1;
        uStack_78 = 0x10139b308;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        pcStack_88 = FUN_100f17d9c;
        puStack_80 = &UNK_1103aae20;
        ppuVar5 = &puStack_98;
        puStack_70 = puVar3;
        func_0x000107c60bc4(ppuVar5);
        puVar3 = puStack_70;
        func_0x000107c6157c(puVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c50784(lVar6);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61574(puVar1);
        func_0x000107c61574(param_2);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar4);
        return;
      }
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar7,1,1,lVar6);
      func_0x00010139a548(puVar7,param_3,param_4);
      func_0x000107c61574(puVar1);
    }
    func_0x000107c61574(param_2);
    func_0x0001000293e4(puVar7);
  }
  return;
}



/* Entry: 10139a6e0; end: 10139a743;  */

void FUN_10139a6e0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10139a744; end: 10139a773;  */

/* WARNING: Possible PIC construction at 0x000101398c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398c94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101398e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101398f80) */
/* WARNING: Removing unreachable block (ram,0x000101398f88) */
/* WARNING: Removing unreachable block (ram,0x000101398fa0) */
/* WARNING: Removing unreachable block (ram,0x000101398d60) */
/* WARNING: Removing unreachable block (ram,0x000101398c98) */
/* WARNING: Removing unreachable block (ram,0x000101398c74) */
/* WARNING: Removing unreachable block (ram,0x000101398da4) */
/* WARNING: Removing unreachable block (ram,0x00010139905c) */
/* WARNING: Removing unreachable block (ram,0x000101398de0) */
/* WARNING: Removing unreachable block (ram,0x000101399074) */
/* WARNING: Removing unreachable block (ram,0x000101398e10) */
/* WARNING: Removing unreachable block (ram,0x000101398c78) */
/* WARNING: Removing unreachable block (ram,0x000101398ef8) */
/* WARNING: Removing unreachable block (ram,0x0001013990c8) */
/* WARNING: Removing unreachable block (ram,0x000101398f38) */
/* WARNING: Removing unreachable block (ram,0x0001013990e4) */
/* WARNING: Removing unreachable block (ram,0x000101399138) */
/* WARNING: Removing unreachable block (ram,0x000101398f68) */
/* WARNING: Removing unreachable block (ram,0x000101398c84) */
/* WARNING: Removing unreachable block (ram,0x000101398e28) */
/* WARNING: Removing unreachable block (ram,0x000101398e30) */
/* WARNING: Removing unreachable block (ram,0x000101398e48) */
/* WARNING: Removing unreachable block (ram,0x000101399068) */
/* WARNING: Removing unreachable block (ram,0x00010139913c) */

void FUN_10139a744(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar4 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    func_0x000107c61168(PTR_PTR_1126b0418);
    func_0x000107c408f0();
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10139917c);
      (*pcVar3)();
    }
    puVar5 = &UNK_1103aab60;
    func_0x000107c613fc(&UNK_1103aab60,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(long *)(puVar5 + 0x18) = lVar2;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(lVar1);
    func_0x000107c61174();
    func_0x000107c5c734(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10139a774; end: 10139a7df;  */

void FUN_10139a774(void)

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
    FUN_10139b28c(0,0x112d550a8,&PTR_PTR_1126b1d00);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d5d2e8;
  plVar5 = (long *)&UNK_10d923ac0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10139a7e0; end: 10139a9a3;  */

ulong FUN_10139a7e0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10139a8c4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10139a8c8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b97a0;
    func_0x000107c61168(PTR_PTR_1126b97a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b97a0;
    func_0x000107c61168(PTR_PTR_1126b97a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10139b28c(0,0x112d783b0,&PTR_PTR_1126b97a0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10139a9a4);
  (*pcVar2)();
}



/* Entry: 10139a9a4; end: 10139ab57;  */

/* WARNING: Possible PIC construction at 0x00010139a9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ab0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ab1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010139ab38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139ab20) */
/* WARNING: Removing unreachable block (ram,0x00010139ab10) */
/* WARNING: Removing unreachable block (ram,0x00010139aa00) */
/* WARNING: Removing unreachable block (ram,0x00010139aa18) */
/* WARNING: Removing unreachable block (ram,0x00010139aa30) */
/* WARNING: Removing unreachable block (ram,0x00010139ab3c) */

void FUN_10139a9a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1d00;
  func_0x000107c610f8(PTR_PTR_1126b1d00);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c49150(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10139ab58; end: 10139ab6f;  */

void FUN_10139ab58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    puVar6 = &UNK_1103aabd8;
    func_0x000107c613fc(&UNK_1103aabd8,0x30,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar2;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    *(long *)(puVar6 + 0x20) = lVar5;
    *(undefined8 *)(puVar6 + 0x28) = uVar3;
    puVar7 = &UNK_1103aac00;
    func_0x000107c613fc(&UNK_1103aac00,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x10139ab64;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_10139ab70;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x10139b30c;
    puStack_a0 = &UNK_1103aac18;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(lVar5);
    func_0x000107c61174(uVar3);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_1103aac50;
    func_0x000107c613fc(&UNK_1103aac50,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    puVar9 = &UNK_1103aac78;
    func_0x000107c613fc(&UNK_1103aac78,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10139ab90;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    pcStack_98 = (code *)0x10139b304;
    puStack_b8 = puVar4;
    uStack_b0 = 0x42000000;
    uStack_a8 = 0x100e27b38;
    puStack_a0 = &UNK_1103aac90;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_90;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar9);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(lVar5);
  }
  return;
}



/* Entry: 10139ab70; end: 10139ab8f;  */

void FUN_10139ab70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10139ab90; end: 10139aba7;  */

void FUN_10139ab90(void)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,1,1,lVar2);
  (*pcVar1)(puVar3,8);
  func_0x0001000293e4(puVar3);
  return;
}



/* Entry: 10139aba8; end: 10139ac93;  */

/* WARNING: Possible PIC construction at 0x00010139ac5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010139ac60) */

void FUN_10139aba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  func_0x000107c48368(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10139ac94; end: 10139b22b;  */

void FUN_10139ac94(ulong param_1,code *param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  undefined1 auStack_c0 [8];
  ulong uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_c0 + -extraout_x8;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar7 = param_1;
      func_0x000107c51d54();
      func_0x000107c61180();
      uVar5 = 0;
      FUN_10139b28c(0,0x112d783b0,&PTR_PTR_1126b97a0);
      uVar6 = uVar7;
      func_0x000107c5fc54(uVar7,uVar5);
      func_0x000107c61170(uVar7);
      if (uVar6 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar7 = uVar6;
        }
        func_0x000107c60480();
      }
      if (uVar7 == 0) {
        func_0x000107c6142c(uVar6);
        lVar10 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar18,1,1,lVar10);
        (*param_2)(puVar18,5);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar3);
      }
      else {
        lStack_b0 = lVar4;
        pcStack_a8 = param_2;
        lStack_a0 = lVar3;
        uStack_98 = param_3;
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10139b228);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(uVar6 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar7 = 0;
          FUN_10139a7e0(0,uVar6);
        }
        func_0x000107c6142c(uVar6);
        uStack_b8 = param_1;
        func_0x000107c51d54();
        func_0x000107c61180();
        uVar6 = param_1;
        func_0x000107c5fc54();
        func_0x000107c61170(param_1);
        uVar19 = uVar6 & 0xffffffffffffff8;
        if (uVar6 >> 0x3e == 0) {
          uVar17 = *(ulong *)(uVar19 + 0x10);
        }
        else {
          uVar17 = uVar19;
          if (0x7fffffffffffffff < uVar6) {
            uVar17 = uVar6;
          }
          func_0x000107c60480();
        }
        if (uVar17 != 0) {
          uVar16 = 0;
          do {
            while( true ) {
              if ((uVar6 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar19 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10139aee8);
                  (*pcVar2)();
                }
                uVar8 = *(ulong *)(uVar6 + uVar16 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar8 = uVar16;
                FUN_10139a7e0(uVar16,uVar6);
              }
              uVar1 = uVar16 + 1;
              if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10139aee4);
                (*pcVar2)();
              }
              uVar9 = uVar8;
              func_0x000107c5d0a4();
              if (uVar9 == 5) break;
              func_0x000107c61170(uVar8);
              uVar16 = uVar16 + 1;
              if (uVar1 == uVar17) goto LAB_10139af74;
            }
            func_0x000107c61170(uVar7);
            uVar16 = uVar1;
            uVar7 = uVar8;
          } while (uVar1 != uVar17);
        }
LAB_10139af74:
        func_0x000107c6142c(uVar6);
        uVar6 = uVar7;
        func_0x000107c45034();
        func_0x000107c61180();
        uVar19 = uVar6;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        if (uVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10139b22c);
          (*pcVar2)();
        }
        puVar11 = PTR_PTR_1126b08b0;
        func_0x000107c61168(PTR_PTR_1126b08b0);
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170(uVar19);
        puVar12 = PTR_PTR_1126b17d8;
        func_0x000107c610f8();
        func_0x000107c61174(puVar11);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c460ec();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar13);
        if (puVar12 != (undefined *)0x0) {
          func_0x000107c56498(puVar12);
          uVar6 = uVar7;
          func_0x000107c45034(uVar7);
          func_0x000107c61180();
          uVar19 = uVar6;
          func_0x000107c4271c();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          uVar6 = uVar7;
          func_0x000107c45034(uVar7);
          func_0x000107c61180();
          uVar17 = uVar6;
          func_0x000107c42718();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          func_0x000107c54584(puVar12);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar17);
          puVar13 = &UNK_1103aaae8;
          func_0x000107c613fc(&UNK_1103aaae8,0x18,7);
          func_0x000107c61644(puVar13 + 0x10);
          puVar14 = &UNK_1103aad40;
          func_0x000107c613fc(&UNK_1103aad40,0x38,7);
          uVar5 = uStack_98;
          lVar3 = lStack_b0;
          uVar6 = uStack_b8;
          *(undefined **)(puVar14 + 0x10) = puVar13;
          *(code **)(puVar14 + 0x18) = pcStack_a8;
          *(undefined8 *)(puVar14 + 0x20) = uStack_98;
          *(long *)(puVar14 + 0x28) = lStack_b0;
          *(ulong *)(puVar14 + 0x30) = uStack_b8;
          uStack_70 = 0x10139b234;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_100f17d9c;
          puStack_78 = &UNK_1103aad58;
          ppuVar15 = &puStack_90;
          puStack_68 = puVar14;
          func_0x000107c60bc4(ppuVar15);
          puVar13 = puStack_68;
          func_0x000107c6157c(uVar5);
          func_0x000107c615f0(lVar3);
          func_0x000107c61174(uVar6);
          func_0x000107c61574(puVar13);
          lVar4 = lStack_a0;
          func_0x000107c5078c(lStack_a0);
          func_0x000107c61180();
          func_0x000107c615e8();
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c60bd0(ppuVar15);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar12);
          return;
        }
        lVar3 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar18,1,1,lVar3);
        (*pcStack_a8)(puVar18,10);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar11);
        func_0x000107c615e8(lStack_b0);
        func_0x000107c615e8(lStack_a0);
      }
      goto LAB_10139aeb8;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar18,1,1,lVar3);
  (*param_2)(puVar18,10);
LAB_10139aeb8:
  func_0x0001000293e4(puVar18);
  return;
}



/* Entry: 10139b22c; end: 10139b243;  */

void FUN_10139b22c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  func_0x000107c44314();
  if (lVar2 == 0) {
    func_0x000107c4407c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5edd0(lVar7,lVar2,puVar4);
      func_0x000107c6142c(puVar4);
      lVar2 = lVar7;
      (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
      if ((int)lVar2 != 1) {
        (**(code **)(lVar8 + 0x20))(lVar6,lVar7,lVar3);
        (**(code **)(lVar8 + 0x10))(puVar5,lVar6,lVar3);
        (**(code **)(lVar8 + 0x38))(puVar5,0,1,lVar3);
        (*pcVar1)(puVar5);
        func_0x0001000293e4(puVar5);
        (**(code **)(lVar8 + 8))(lVar6,lVar3);
        return;
      }
      func_0x0001000293e4(lVar7);
    }
  }
  (**(code **)(lVar8 + 0x38))(puVar5,1,1,lVar3);
  (*pcVar1)(puVar5);
  func_0x0001000293e4(puVar5);
  return;
}



/* Entry: 10139b244; end: 10139b277;  */

void FUN_10139b244(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10139b278; end: 10139b28b;  */

void FUN_10139b278(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    if ((param_1 & 1) == 0) {
      lVar10 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar11,1,1,lVar10);
      (*pcVar2)(puVar11,10);
    }
    else {
      puVar4 = &UNK_1103aade0;
      func_0x000107c613fc(&UNK_1103aade0,0x20,7);
      *(code **)(puVar4 + 0x10) = pcVar2;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      lVar10 = *(long *)(lVar3 + 0x20);
      func_0x000107c6157c(uVar1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar10 != 0) {
        puVar5 = PTR_PTR_1126b1060;
        func_0x000107c610f8(PTR_PTR_1126b1060);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___sSSN_11034da80;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c47d08(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c44fdc();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar8);
        }
        puVar8 = PTR_PTR_1126b08b8;
        func_0x000107c610f8(PTR_PTR_1126b08b8);
        func_0x000107c4766c();
        func_0x000107c61170(lVar7);
        puVar6 = &UNK_1103aae08;
        func_0x000107c613fc(&UNK_1103aae08,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = 0x10139b284;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        uStack_78 = 0x10139b308;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        pcStack_88 = FUN_100f17d9c;
        puStack_80 = &UNK_1103aae20;
        ppuVar9 = &puStack_98;
        puStack_70 = puVar6;
        func_0x000107c60bc4(ppuVar9);
        puVar6 = puStack_70;
        func_0x000107c6157c(puVar4);
        func_0x000107c61574(puVar6);
        func_0x000107c50784(lVar10);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61574(puVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar8);
        return;
      }
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(puVar11,1,1,lVar10);
      func_0x00010139a548(puVar11,pcVar2,uVar1);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c61574(lVar3);
    func_0x0001000293e4(puVar11);
  }
  return;
}



/* Entry: 10139b28c; end: 10139b2cb;  */

void FUN_10139b28c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10139b2cc; end: 10139b30f;  */

void FUN_10139b2cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10139b310; end: 10139b3a3; -[_TtC35GenerativeAIIdentityRemoteApiPlugin27MySelfieImageNormalizerImpl getNormalizedMySelfieImageDataWithFilePath:] */

void FUN_10139b310(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  uVar2 = param_2;
  FUN_10139b558(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_3;
    func_0x000107c5ee20(param_3,uVar2);
    func_0x0001000b44c0(param_3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10139b3a4; end: 10139b3b3;  */

void FUN_10139b3a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


