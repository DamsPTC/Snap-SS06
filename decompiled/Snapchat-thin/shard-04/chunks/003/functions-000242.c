/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033a3a04; end: 1033a3ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a3a04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112f60868;
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  lVar2 = _DAT_112f60870;
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar6;
  lVar3 = _DAT_112f60878;
  puVar6 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  lVar4 = _DAT_112f60880;
  *(undefined8 *)(unaff_x20 + _DAT_112f60880) = 0;
  lVar5 = _DAT_112f60888;
  *(undefined8 *)(unaff_x20 + _DAT_112f60888) = 0;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar4));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar5));
  FUN_1033a4208();
  func_0x000107c61464();
  return 0;
}



/* Entry: 1033a3ae4; end: 1033a3b0f; -[_TtC26SCPasskeyManagementFeature17PasskeyDetailView initWithCoder:] */

undefined8 FUN_1033a3ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1033a3a04();
  return 0;
}



/* Entry: 1033a3b10; end: 1033a416f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a3b10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lStack_68 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f60868);
  lVar4 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59c6c(uVar13);
  func_0x000107c61170();
  FUN_1033a3218();
  lVar5 = param_1;
  func_0x000107c40c34(param_1);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar12);
  func_0x000107c61170(lVar5);
  func_0x000107c5ee70();
  pcStack_80 = *(code **)(lVar14 + 8);
  lVar10 = lVar3;
  (*pcStack_80)(lVar12);
  lVar12 = lVar4;
  func_0x000107c5c1b8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  lVar4 = lVar12;
  func_0x000107c5faec();
  lVar5 = lVar10;
  func_0x000107c61170(lVar12);
  lVar12 = param_1;
  func_0x000107c40c38();
  func_0x000107c61180();
  lStack_70 = lVar14;
  if (lVar12 == 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f60870);
    func_0x000106b24690();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a416c);
      (*pcVar2)();
    }
    lVar14 = lVar12;
    func_0x000107c5faec();
    func_0x000107c61170(lVar12);
    lVar12 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 2;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar12;
    func_0x00010075bbf0();
    *(long *)(lVar12 + 0x40) = lVar6;
    *(long *)(lVar12 + 0x20) = lVar4;
    *(long *)(lVar12 + 0x28) = lVar10;
    lVar4 = lVar5;
    func_0x000107c5fae0(lVar14,lVar5,lVar12);
  }
  else {
    lVar6 = lVar12;
    lStack_90 = param_1;
    lStack_88 = lVar3;
    func_0x000107c5faec();
    lVar11 = lVar5;
    func_0x000107c61170();
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f60870);
    func_0x000106b246a8();
    func_0x000107c61180();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a4164);
      (*pcVar2)();
    }
    lVar14 = lVar12;
    func_0x000107c5faec();
    func_0x000107c61170(lVar12);
    lVar12 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 4;
    *(undefined8 *)(lVar12 + 0x10) = 2;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
    lVar3 = lVar12;
    func_0x00010075bbf0();
    *(long *)(lVar12 + 0x20) = lVar4;
    *(long *)(lVar12 + 0x28) = lVar10;
    *(undefined **)(lVar12 + 0x60) = puVar1;
    *(long *)(lVar12 + 0x68) = lVar3;
    *(long *)(lVar12 + 0x40) = lVar3;
    *(long *)(lVar12 + 0x48) = lVar6;
    *(long *)(lVar12 + 0x50) = lVar5;
    lVar4 = lVar11;
    func_0x000107c5fae0(lVar14,lVar11,lVar12);
    param_1 = lStack_90;
    lVar3 = lStack_88;
    lVar5 = lVar11;
  }
  func_0x000107c6142c(lVar5);
  func_0x000107c61574(lVar12);
  func_0x000107c5fadc(lVar14,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c59c6c(uVar13);
  func_0x000107c61170(lVar14);
  lVar12 = param_1;
  func_0x000107c4aaa8();
  func_0x000107c61180();
  lVar4 = lStack_78;
  if (lVar12 == 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f60878);
    func_0x000106b246f0();
    func_0x000107c61180();
    func_0x000107c59c6c(uVar13);
    func_0x000107c61170(lVar12);
  }
  else {
    func_0x000107c5ee94(lStack_78);
    func_0x000107c61170(lVar12);
    (**(code **)(lStack_70 + 0x20))(lStack_68,lVar4,lVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f60880);
    func_0x000107c61174();
    uVar13 = uVar7;
    func_0x000107c5ee70();
    uVar8 = uVar7;
    func_0x000107c5c1b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar13);
    uVar13 = uVar8;
    func_0x000107c5faec();
    lVar12 = lVar4;
    lStack_78 = uVar13;
    func_0x000107c61170();
    func_0x0001033a3294();
    uVar13 = uVar8;
    func_0x000107c5ee70();
    uVar7 = uVar8;
    func_0x000107c5c1b8();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar13);
    uVar13 = uVar7;
    func_0x000107c5faec();
    lVar14 = lVar12;
    func_0x000107c61170(uVar7);
    func_0x000107c4aaac();
    func_0x000107c61180();
    if (param_1 == 0) {
      lStack_70 = *(undefined8 *)(unaff_x20 + _DAT_112f60878);
      func_0x000106b246c0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a4170);
        (*pcVar2)();
      }
      lVar10 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      puVar1 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
      lVar6 = lVar5;
      func_0x00010075bbf0();
      *(long *)(lVar5 + 0x20) = lStack_78;
      *(long *)(lVar5 + 0x28) = lVar4;
      *(undefined **)(lVar5 + 0x60) = puVar1;
      *(long *)(lVar5 + 0x68) = lVar6;
      *(long *)(lVar5 + 0x40) = lVar6;
      *(undefined8 *)(lVar5 + 0x48) = uVar13;
      *(long *)(lVar5 + 0x50) = lVar12;
      lVar4 = lVar14;
      func_0x000107c5fae0(lVar10,lVar14,lVar5);
    }
    else {
      lVar6 = param_1;
      func_0x000107c5faec();
      lVar11 = lVar14;
      func_0x000107c61170();
      lStack_70 = *(undefined8 *)(unaff_x20 + _DAT_112f60878);
      func_0x000106b246d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a4168);
        (*pcVar2)();
      }
      lVar10 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      lVar5 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 6;
      *(undefined8 *)(lVar5 + 0x10) = 3;
      puVar1 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
      lVar9 = lVar5;
      func_0x00010075bbf0();
      *(long *)(lVar5 + 0x20) = lStack_78;
      *(long *)(lVar5 + 0x28) = lVar4;
      *(undefined **)(lVar5 + 0x60) = puVar1;
      *(long *)(lVar5 + 0x68) = lVar9;
      *(long *)(lVar5 + 0x40) = lVar9;
      *(undefined8 *)(lVar5 + 0x48) = uVar13;
      *(long *)(lVar5 + 0x50) = lVar12;
      *(undefined **)(lVar5 + 0x88) = puVar1;
      *(long *)(lVar5 + 0x90) = lVar9;
      *(long *)(lVar5 + 0x70) = lVar6;
      *(long *)(lVar5 + 0x78) = lVar14;
      lVar4 = lVar11;
      func_0x000107c5fae0(lVar10,lVar11,lVar5);
      lVar14 = lVar11;
    }
    func_0x000107c6142c(lVar14);
    func_0x000107c61574(lVar5);
    func_0x000107c5fadc(lVar10,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c59c6c(lStack_70);
    func_0x000107c61170(lVar10);
    (*pcStack_80)(lStack_68,lVar3);
  }
  return;
}



/* Entry: 1033a4170; end: 1033a419f;  */

void FUN_1033a4170(void)

{
  FUN_1033a4208();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a41a0; end: 1033a4207; -[_TtC26SCPasskeyManagementFeature17PasskeyDetailView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033a41bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a41dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a41c0) */
/* WARNING: Removing unreachable block (ram,0x0001033a41e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a41a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60868));
  return;
}



/* Entry: 1033a4208; end: 1033a4227;  */

void FUN_1033a4208(void)

{
  func_0x000107c61168(&PTR_PTR_1128d50b8);
  return;
}



/* Entry: 1033a4228; end: 1033a429f;  */

void FUN_1033a4228(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001033a42c4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1033a42a0; end: 1033a4303;  */

undefined8 FUN_1033a42a0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033a4304; end: 1033a4513;  */

/* WARNING: Possible PIC construction at 0x0001033a43c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a44bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a446c) */
/* WARNING: Removing unreachable block (ram,0x0001033a4418) */
/* WARNING: Removing unreachable block (ram,0x0001033a43c4) */
/* WARNING: Removing unreachable block (ram,0x0001033a44c0) */

void FUN_1033a4304(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c3d89c();
  func_0x000107c5a050(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c40280(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033a4514; end: 1033a46ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033a4514(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f608e8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f608e8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeff0;
    func_0x000107c610f8();
    func_0x000107c45eac();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1033a46ac; end: 1033a4937;  */

undefined * FUN_1033a46ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c42448();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c49778(param_1);
  func_0x000107c5a050(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 9;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar5 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar7 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar4 + 0x20) = puVar6;
  puVar5 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = param_1;
  func_0x000107c3ec1c(param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar4 + 0x28) = puVar6;
  puVar5 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar7 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  *(undefined **)(puVar4 + 0x30) = puVar6;
  puVar5 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c5ce8c(param_1);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  *(undefined **)(puVar4 + 0x38) = puVar6;
  uVar7 = 0;
  func_0x000100847984(0);
  puVar5 = puVar4;
  func_0x000107c5fc48(puVar4,uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1033a4938; end: 1033a4a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1033a4938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f608e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f608d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f608f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f608c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f608d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f608e0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffb0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1033a4a0c();
  func_0x000107c61170(puVar2);
  return puVar2;
}



/* Entry: 1033a4a0c; end: 1033a4c9b;  */

/* WARNING: Possible PIC construction at 0x0001033a4a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a4c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a4bf4) */
/* WARNING: Removing unreachable block (ram,0x0001033a4b9c) */
/* WARNING: Removing unreachable block (ram,0x0001033a4b40) */
/* WARNING: Removing unreachable block (ram,0x0001033a4a90) */
/* WARNING: Removing unreachable block (ram,0x0001033a4a74) */
/* WARNING: Removing unreachable block (ram,0x0001033a4a58) */
/* WARNING: Removing unreachable block (ram,0x0001033a4c48) */

void FUN_1033a4a0c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1033a4c9c; end: 1033a4cbb; -[_TtC27PasskeyPendingViewPresenter21PasskeyPendingingView initWithFrame:] */

void FUN_1033a4c9c(void)

{
  FUN_1033a4938();
  return;
}



/* Entry: 1033a4cbc; end: 1033a4d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033a4cbc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f608e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f608d8) = 0;
  lVar2 = _DAT_112f608f0;
  *(undefined8 *)(unaff_x20 + _DAT_112f608f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f608c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f608d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f608e0) = 0;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar2));
  func_0x000107c6142c(puVar1[1]);
  func_0x000107c61464();
  return 0;
}



/* Entry: 1033a4d68; end: 1033a4d93; -[_TtC27PasskeyPendingViewPresenter21PasskeyPendingingView initWithCoder:] */

undefined8 FUN_1033a4d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1033a4cbc();
  return 0;
}



/* Entry: 1033a4d94; end: 1033a4e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a4d94(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f608d0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar2);
  func_0x0001033a4588();
  if (param_2 == 0) {
    func_0x000107c550d8(uVar2);
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c59c6c(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112f608d8));
  }
  return;
}



/* Entry: 1033a4e70; end: 1033a4f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a4e70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  FUN_1033a4514();
  func_0x000107c5ba54();
  func_0x000107c61170(param_1);
  lVar1 = _DAT_112f608c8;
  func_0x000107c61428(unaff_x20 + _DAT_112f608c8,auStack_38,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    func_0x000107c550d8();
  }
  return;
}



/* Entry: 1033a4f40; end: 1033a4f73;  */

void FUN_1033a4f40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a4f74; end: 1033a4fcf; -[_TtC27PasskeyPendingViewPresenter21PasskeyPendingingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a4f74(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f608e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f608d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f608f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f608d0 + 8))
  ;
  return;
}



/* Entry: 1033a4fd0; end: 1033a4fef;  */

void FUN_1033a4fd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d51c8);
  return;
}



/* Entry: 1033a4ff0; end: 1033a507f;  */

long FUN_1033a4ff0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1033a5910();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5677c();
    func_0x000107c5676c(lVar1,param_2,1);
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1033a5080; end: 1033a50a3;  */

void FUN_1033a5080(void)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1033a50a4; end: 1033a50af;  */

void FUN_1033a50a4(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1033a50b0; end: 1033a5377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a50b0(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar3 = param_1;
  FUN_1033a4ff0();
  func_0x000107c3e2c0(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f60920);
  func_0x000107c61434(param_4);
  func_0x000107c61174(uVar3);
  FUN_1033a4d94(param_3,param_4);
  func_0x000107c61170(uVar3);
  lVar2 = _DAT_112f608e0;
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f60920);
  func_0x000107c61428(lVar4 + _DAT_112f608e0,auStack_58,1,0);
  *(byte *)(lVar4 + lVar2) = param_2;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(lVar4);
  if ((param_2 & 1) == 0) {
    func_0x000107c5af88(puVar1);
  }
  else {
    func_0x000107c3fa94();
  }
  func_0x000107c61180();
  func_0x000107c52b50(lVar4);
  func_0x000107c61170(puVar1);
  func_0x0001033a4648();
  func_0x000107c550d8();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar4);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f60920);
  func_0x000107c61174();
  lVar2 = lVar4;
  func_0x0001033a4514();
  func_0x000107c5ba54();
  func_0x000107c61170(lVar2);
  lVar2 = _DAT_112f608c8;
  func_0x000107c61428(lVar4 + _DAT_112f608c8,auStack_70,0,0);
  if (*(char *)(lVar4 + lVar2) == '\x01') {
    func_0x000107c550d8(lVar4);
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1033a5378; end: 1033a5393;  */

void FUN_1033a5378(long param_1,long param_2)

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



/* Entry: 1033a5394; end: 1033a53b7;  */

void FUN_1033a5394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033a53b8; end: 1033a53f7;  */

void FUN_1033a53b8(void)

{
  FUN_1033a50b0();
  return;
}



/* Entry: 1033a53f8; end: 1033a5417;  */

void FUN_1033a53f8(void)

{
  func_0x000107c61168(&PTR_PTR_112f60968);
  return;
}



/* Entry: 1033a5418; end: 1033a5473; -[_TtC27PasskeyPendingViewPresenter28PasskeyPendingViewController viewDidLoad] */

void FUN_1033a5418(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_1033a5910();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1033a5474();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033a5474; end: 1033a5723;  */

/* WARNING: Possible PIC construction at 0x0001033a54b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a5538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a5558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a55a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a55c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a5618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a5638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a569c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033a56bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a56a0) */
/* WARNING: Removing unreachable block (ram,0x0001033a563c) */
/* WARNING: Removing unreachable block (ram,0x0001033a5720) */
/* WARNING: Removing unreachable block (ram,0x0001033a5670) */
/* WARNING: Removing unreachable block (ram,0x0001033a561c) */
/* WARNING: Removing unreachable block (ram,0x0001033a55cc) */
/* WARNING: Removing unreachable block (ram,0x0001033a571c) */
/* WARNING: Removing unreachable block (ram,0x0001033a5600) */
/* WARNING: Removing unreachable block (ram,0x0001033a55ac) */
/* WARNING: Removing unreachable block (ram,0x0001033a555c) */
/* WARNING: Removing unreachable block (ram,0x0001033a5718) */
/* WARNING: Removing unreachable block (ram,0x0001033a5590) */
/* WARNING: Removing unreachable block (ram,0x0001033a553c) */
/* WARNING: Removing unreachable block (ram,0x0001033a54bc) */
/* WARNING: Removing unreachable block (ram,0x0001033a5714) */
/* WARNING: Removing unreachable block (ram,0x0001033a5520) */
/* WARNING: Removing unreachable block (ram,0x0001033a56c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a5474(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a5714);
  (*pcVar1)();
}



/* Entry: 1033a5724; end: 1033a5817; -[_TtC27PasskeyPendingViewPresenter28PasskeyPendingViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033a5724(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  lVar1 = _DAT_112f60920;
  lVar2 = 0;
  FUN_1033a4fd0();
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c469a4(0,0,0,0);
  *(long *)(param_1 + lVar1) = lVar2;
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
    lVar2 = param_2;
  }
  FUN_1033a5910();
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar3;
}



/* Entry: 1033a5818; end: 1033a58cf; -[_TtC27PasskeyPendingViewPresenter28PasskeyPendingViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033a5818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112f60920;
  plVar3 = &lStack_50;
  uVar2 = 0;
  FUN_1033a4fd0();
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c469a4(0,0,0,0);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_1033a5910();
  lStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61154(&lStack_50,PTR_s_initWithCoder__1125dd730,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1033a58d0; end: 1033a58ff;  */

void FUN_1033a58d0(void)

{
  FUN_1033a5910();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033a5900; end: 1033a590f; -[_TtC27PasskeyPendingViewPresenter28PasskeyPendingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a5900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60920));
  return;
}



/* Entry: 1033a5910; end: 1033a592f;  */

void FUN_1033a5910(void)

{
  func_0x000107c61168(&PTR_PTR_1128d52a8);
  return;
}



/* Entry: 1033a5930; end: 1033a599b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a5930(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1033a5d24();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f60a20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1033a599c; end: 1033a5a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a599c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60a20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a5a08; end: 1033a5a67; -[_TtC44PasswordSettingsScopedFactoryServiceProvider32SCPasswordSettingsScopedServices init] */

void FUN_1033a5a08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasswordSettingsScopedFactoryServiceProvider.SCPasswordSettingsScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a5a34);
  (*pcVar1)();
}



/* Entry: 1033a5a68; end: 1033a5a77; -[_TtC44PasswordSettingsScopedFactoryServiceProvider32SCPasswordSettingsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a5a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f60a20));
  return;
}



/* Entry: 1033a5a78; end: 1033a5ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a5a78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11064a908;
  func_0x000107c613fc(&UNK_11064a908,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1033a5dbc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033a5ae4; end: 1033a5b7f;  */

void FUN_1033a5ae4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11064a818;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11064a818;
  return;
}



/* Entry: 1033a5b80; end: 1033a5bb7;  */

void FUN_1033a5b80(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1033a5bb8; end: 1033a5bbf;  */

undefined8 FUN_1033a5bb8(void)

{
  return 0x1b;
}



/* Entry: 1033a5bc0; end: 1033a5cf3;  */

void FUN_1033a5bc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11064a930;
  func_0x000107c613fc(&UNK_11064a930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1033a5d94;
  func_0x00010058fa64(FUN_1033a5d94,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033a5cf4; end: 1033a5d23;  */

undefined ** FUN_1033a5cf4(void)

{
  return &PTR_DAT_113066e08;
}



/* Entry: 1033a5d24; end: 1033a5d43;  */

void FUN_1033a5d24(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5368);
  return;
}



/* Entry: 1033a5d44; end: 1033a5d93;  */

undefined1  [16] FUN_1033a5d44(void)

{
  return ZEXT816(0x11064a868);
}



/* Entry: 1033a5d94; end: 1033a5dbb;  */

void FUN_1033a5d94(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1033a5dbc; end: 1033a5dcf;  */

void FUN_1033a5dbc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033a5dd0; end: 1033a61ab;  */

void FUN_1033a5dd0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f60a98,&UNK_10dbbc9f8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1033a7a1c();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerSubjectServiceProvider",0x39,2);
  puVar3 = puVar2;
  FUN_1033a7aa8();
  func_0x000100082720("SCUserPhoneVerificationScopeExposerObservableServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1033a5b80;
  func_0x0001000823a8(FUN_1033a5b80,0);
  func_0x000100082720("SCPasswordSettingsScopedServicesCleanupRelayServiceProvider",0x3b,2);
  puVar5 = puVar2;
  FUN_1033a78d0();
  func_0x000100082720("PasswordSettingsScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f60aa0,&UNK_10dbbca10);
  puVar6 = &UNK_11064a9e0;
  func_0x000107c613fc(&UNK_11064a9e0,0x60,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 **)(puVar6 + 0x58) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1033a61dc;
  func_0x0001000823a8(0x1033a61dc,puVar6);
  func_0x000100082720("SCLegacyPasswordSettingsEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f60aa8,&UNK_10dbbca00);
  puVar6 = &UNK_11064aa08;
  func_0x000107c613fc(&UNK_11064aa08,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_1033a6210;
  func_0x0001000823a8(FUN_1033a6210,puVar6);
  func_0x000100082720("SCPasswordSettingsScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f60a28,&UNK_10dbbc7a0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x1033a621c;
  func_0x0001000823a8(0x1033a621c,pcVar7);
  func_0x000100082720("SCPasswordSettingsScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f60a18,&UNK_10dbbc790);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1033a6224;
  func_0x0001000823a8(0x1033a6224,uVar8);
  func_0x000100082720("SCPasswordSettingsScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11064aa30;
  func_0x000107c613fc(&UNK_11064aa30,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1033a622c;
  func_0x0001000823a8(0x1033a622c,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCPasswordSettingsScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1033a61ac; end: 1033a620f;  */

void FUN_1033a61ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1033a5dd0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1033a6210; end: 1033a6233;  */

void FUN_1033a6210(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1033a7038(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCPasswordSettingsScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033a6234; end: 1033a6df7;  */

void FUN_1033a6234(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  FUN_1033a6f88();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  func_0x0001000285a8(0x112e51088,&UNK_10db59590);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar12 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar9;
  puVar10 = PTR_PTR_1126ad1f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f146560);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef116c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef22f10);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f144b40);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0d4580);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efbb4b0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar9);
  uVar12 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f059550);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  *param_1 = param_2;
  return;
}



/* Entry: 1033a6df8; end: 1033a6e7b;  */

void FUN_1033a6df8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1033a6e7c; end: 1033a6e83;  */

undefined8 FUN_1033a6e7c(void)

{
  return 0x1b;
}



/* Entry: 1033a6e84; end: 1033a6f07;  */

void FUN_1033a6e84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033a6fc8,param_2,FUN_1033a6fcc,param_2,FUN_1033a6ff4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033a6f08; end: 1033a6f57;  */

undefined8 FUN_1033a6f08(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1033a6f58; end: 1033a6f87;  */

undefined ** FUN_1033a6f58(void)

{
  return &PTR_DAT_113066e08;
}



/* Entry: 1033a6f88; end: 1033a6fa7;  */

void FUN_1033a6f88(void)

{
  func_0x000107c61168(&PTR_PTR_112f60b18);
  return;
}



/* Entry: 1033a6fa8; end: 1033a6fcb;  */

undefined1  [16] FUN_1033a6fa8(void)

{
  return ZEXT816(0x11064aa88);
}



/* Entry: 1033a6fcc; end: 1033a6ff3;  */

void FUN_1033a6fcc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1033a6ff4; end: 1033a6ffb;  */

undefined8 FUN_1033a6ff4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1033a6ffc; end: 1033a7037;  */

void FUN_1033a6ffc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1033a7038();
  func_0x0001000a7f38("SCPasswordSettingsScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1033a7038; end: 1033a7223;  */

void FUN_1033a7038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d9d8;
  ppuVar4 = &PTR_DAT_113066e08;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11064aad8;
  func_0x000107c613fc(&UNK_11064aad8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f60bc0;
  func_0x0001000285a8(0x112f60bc0,&UNK_10dbbcba0);
  func_0x0001000a6ee8(&UNK_11064ad28,"PasswordSettingsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1033a7224,puVar2,uVar3,&UNK_11064ad28,&PTR_DAT_112f60c58);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11064aa88,
                      "SCLegacyPasswordSettingsEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1033a72d8,param_3,uVar3,&UNK_11064aa88,&PTR_DAT_112f60ab0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11064ab00;
  func_0x000107c613fc(&UNK_11064ab00,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11064a8a8,"SCPasswordSettingsScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_1033a7388,puVar2,uVar3,&UNK_11064a8a8,&PTR_DAT_112f60a30);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f60bc8;
  func_0x0001000285a8(0x112f60bc8,&UNK_10dbbcba8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1033a7224; end: 1033a7263;  */

void FUN_1033a7224(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1033a7b50(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PasswordSettingsScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033a7264; end: 1033a72d7;  */

void FUN_1033a7264(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1033a73c4;
  func_0x0001000823a8(0x1033a73c4,param_3);
  func_0x000100082720("SCLegacyPasswordSettingsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033a72d8; end: 1033a72df;  */

void FUN_1033a72d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1033a73c4;
  func_0x0001000823a8();
  func_0x000100082720("SCLegacyPasswordSettingsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033a72e0; end: 1033a7387;  */

void FUN_1033a72e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11064ab28;
  func_0x000107c613fc(&UNK_11064ab28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1033a73bc;
  func_0x0001000823a8(FUN_1033a73bc,puVar1);
  func_0x000100082720("SCPasswordSettingsScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1033a7388; end: 1033a738f;  */

void FUN_1033a7388(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11064ab28;
  func_0x000107c613fc(&UNK_11064ab28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1033a73bc;
  func_0x0001000823a8(FUN_1033a73bc,puVar3);
  func_0x000100082720("SCPasswordSettingsScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1033a7390; end: 1033a73bb;  */

void FUN_1033a7390(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033a73bc; end: 1033a73cb;  */

void FUN_1033a73bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11064a930;
  func_0x000107c613fc(&UNK_11064a930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1033a5d94;
  func_0x00010058fa64(FUN_1033a5d94,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1033a73cc; end: 1033a74a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033a73cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1033a77e0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f60bd0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f60bd8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a74a8);
  (*pcVar1)();
}



/* Entry: 1033a74a8; end: 1033a7507; -[_TtC32PasswordSettingsScopeGraphBridge47PasswordSettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1033a74a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasswordSettingsScopeGraphBridge.PasswordSettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a74d4);
  (*pcVar1)();
}



/* Entry: 1033a7508; end: 1033a753f; -[_TtC32PasswordSettingsScopeGraphBridge47PasswordSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033a7524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033a7528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60bd0));
  return;
}



/* Entry: 1033a7540; end: 1033a7567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7540(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f60bd8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f60bd0));
  return;
}



/* Entry: 1033a7568; end: 1033a7587;  */

void FUN_1033a7568(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5428);
  return;
}



/* Entry: 1033a7588; end: 1033a760f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033a7588(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60c08) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f60c10);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033a7610);
  (*pcVar2)();
}



/* Entry: 1033a7610; end: 1033a76f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033a7610(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f60c08);
  *(undefined **)(unaff_x20 + _DAT_112f60c08) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f60c10);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f60c10))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11064ac48;
  func_0x000107c613fc(&UNK_11064ac48,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1033a76fc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1033a76f8; end: 1033a7703;  */

void FUN_1033a76f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033a7704; end: 1033a7763; -[_TtC32PasswordSettingsScopeGraphBridge47SCPasswordSettingsScopedServicesSaberEntryPoint init] */

void FUN_1033a7704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasswordSettingsScopeGraphBridge.SCPasswordSettingsScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a7730);
  (*pcVar1)();
}



/* Entry: 1033a7764; end: 1033a779b; -[_TtC32PasswordSettingsScopeGraphBridge47SCPasswordSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7764(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f60c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f60c08));
  return;
}



/* Entry: 1033a779c; end: 1033a779f;  */

void FUN_1033a779c(void)

{
  return;
}



/* Entry: 1033a77a0; end: 1033a77bf;  */

void FUN_1033a77a0(void)

{
  FUN_1033a7610();
  return;
}



/* Entry: 1033a77c0; end: 1033a77df;  */

void FUN_1033a77c0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d54f0);
  return;
}



/* Entry: 1033a77e0; end: 1033a78af;  */

undefined8 FUN_1033a77e0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f60c40,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1033a78b0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1033a78b0; end: 1033a78cf;  */

void FUN_1033a78b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d55b8);
  return;
}



/* Entry: 1033a78d0; end: 1033a78eb;  */

void FUN_1033a78d0(undefined8 param_1)

{
  func_0x0001000285a8(0x112f60c48,&UNK_10dbbcc68);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033a7958,param_1);
  return;
}



/* Entry: 1033a78ec; end: 1033a7957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a78ec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1033a78b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f60c50) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1033a7958; end: 1033a795f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7958(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1033a78b0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f60c50) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1033a7960; end: 1033a79ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7960(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f60c50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033a79ac; end: 1033a7a0b; -[_TtC32PasswordSettingsScopeGraphBridge40PasswordSettingsScopeGraphBridgeServices init] */

void FUN_1033a79ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PasswordSettingsScopeGraphBridge.PasswordSettingsScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033a79d8);
  (*pcVar1)();
}



/* Entry: 1033a7a0c; end: 1033a7a1b; -[_TtC32PasswordSettingsScopeGraphBridge40PasswordSettingsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033a7a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f60c50));
  return;
}



/* Entry: 1033a7a1c; end: 1033a7aa7;  */

void FUN_1033a7a1c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1033a7a5c,0);
  return;
}



/* Entry: 1033a7aa8; end: 1033a7ac3;  */

void FUN_1033a7aa8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1033a7b14,param_1);
  return;
}



/* Entry: 1033a7ac4; end: 1033a7b13;  */

void FUN_1033a7ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1033a7b14; end: 1033a7b47;  */

void FUN_1033a7b14(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1033a7b48; end: 1033a7b4f;  */

undefined8 FUN_1033a7b48(void)

{
  return 0x1b;
}



/* Entry: 1033a7b50; end: 1033a7cc7;  */

void FUN_1033a7b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11064ac90;
  func_0x000107c613fc(&UNK_11064ac90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1033a7cc8,puVar1);
  return;
}



/* Entry: 1033a7cc8; end: 1033a7ccf;  */

void FUN_1033a7cc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f60c40,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f60c40,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11064ad68;
  func_0x000107c613fc(&UNK_11064ad68,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1033a7d9c;
  func_0x00010058fa64(0x1033a7d9c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


