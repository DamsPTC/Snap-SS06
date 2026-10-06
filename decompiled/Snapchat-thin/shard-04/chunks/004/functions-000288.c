/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034712f0; end: 1034713a3;  */

void FUN_1034712f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_10347b8f8();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a9d8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 1034713a4; end: 1034713ab;  */

void FUN_1034713a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1034713ac; end: 10347144b;  */

void FUN_1034713ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347144c; end: 10347153f;  */

void FUN_10347144c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_1034712f0;
  func_0x0001000cb480(FUN_1034712f0,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x10347132c;
  func_0x0001000cb480(0x10347132c,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x103471368;
  func_0x0001000cb480(0x103471368,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  func_0x000103f9627c(0);
  func_0x000107c610f8();
  func_0x000103f95f98(pcVar1,uVar4);
  *param_1 = pcVar1;
  return;
}



/* Entry: 103471540; end: 103471543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103471540(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = 0;
  FUN_10347b8f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f707b0;
  func_0x0001000285a8(0x112f6d7e0,&UNK_10dbcc580);
  func_0x000107c613fc();
  uVar6 = unaff_x20;
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  lVar2 = _DAT_112f707b8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f707c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f707c8;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f707a8) = unaff_x20;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 103471544; end: 103471803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103471544(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112ee3fd8,&UNK_10dbcc510);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_11307d010) + _DAT_11307d050);
  func_0x000107c61174(uVar1);
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  uVar1 = 0x112f6fb48;
  func_0x0001000285a8(0x112f6fb48,&UNK_10dbcc518);
  func_0x000107c613fc();
  pcVar3 = FUN_103471804;
  func_0x0001000bdd8c(FUN_103471804,uVar2,uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 103471804; end: 10347180b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103471804(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = 0;
  FUN_10347b8f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f707b0;
  func_0x0001000285a8(0x112f6d7e0,&UNK_10dbcc580);
  func_0x000107c613fc();
  uVar6 = unaff_x20;
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  lVar2 = _DAT_112f707b8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f707c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f707c8;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f707a8) = unaff_x20;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 10347180c; end: 1034718f3;  */

void FUN_10347180c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_1034718f4;
  func_0x0001000cb480(FUN_1034718f4,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x103471930;
  func_0x0001000cb480(0x103471930,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x10347196c;
  func_0x0001000cb480(0x10347196c,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  func_0x0001005c73cc(0);
  func_0x000107c610f8();
  func_0x000103f95f28(pcVar1);
  return;
}



/* Entry: 1034718f4; end: 1034719a7;  */

void FUN_1034718f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_10347b8f8();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a9d8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 1034719a8; end: 1034719af;  */

void FUN_1034719a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1034719b0; end: 103471a4f;  */

void FUN_1034719b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103471a50; end: 103471b43;  */

void FUN_103471a50(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x112f6ce80;
  func_0x0001000285a8(0x112f6ce80,&UNK_10dbcc520);
  pcVar1 = FUN_1034718f4;
  func_0x0001000cb480(FUN_1034718f4,0,uVar4);
  uVar4 = 0x112f6ce88;
  func_0x0001000285a8(0x112f6ce88,&UNK_10dbcad90);
  uVar2 = 0x103471930;
  func_0x0001000cb480(0x103471930,0,uVar4);
  uVar4 = 0x112f6ce90;
  func_0x0001000285a8(0x112f6ce90,&UNK_10dbcc530);
  uVar3 = 0x10347196c;
  func_0x0001000cb480(0x10347196c,0,uVar4);
  uVar4 = 0;
  func_0x000100b5e690(0);
  func_0x000107c610f8();
  func_0x000103f96380(pcVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  func_0x0001005c73cc(0);
  func_0x000107c610f8();
  func_0x000103f95f28(pcVar1,uVar4);
  *param_1 = pcVar1;
  return;
}



/* Entry: 103471b44; end: 103471b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103471b44(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = 0;
  FUN_10347b8f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f707b0;
  func_0x0001000285a8(0x112f6d7e0,&UNK_10dbcc580);
  func_0x000107c613fc();
  uVar6 = unaff_x20;
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  lVar2 = _DAT_112f707b8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f707c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112f707c8;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + lVar2) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f707a8) = unaff_x20;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 103471b48; end: 103471c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103471b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = *(long *)(param_4 + _DAT_113038b58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    *(long *)(unaff_x20 + 0x10) = lVar1;
    func_0x000107c615f0();
    func_0x0001000d224c(&uStack_58);
    func_0x000107c55c74(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uStack_58);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 103471c30; end: 103471c53;  */

void FUN_103471c30(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103471c54; end: 103471c5f;  */

void FUN_103471c54(void)

{
  return;
}



/* Entry: 103471c60; end: 103471c7f;  */

void FUN_103471c60(void)

{
  func_0x000107c61168(&PTR_PTR_112f6fd30);
  return;
}



/* Entry: 103471c80; end: 103471ebf;  */

long FUN_103471c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110659ed8;
  func_0x000107c613fc(&UNK_110659ed8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_60 = FUN_103471f60;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_103471f68;
  puStack_68 = &UNK_110659ef0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 103471ec0; end: 103471f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103471ec0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd8) + _DAT_113038cc8);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd8) + _DAT_113038cd0);
  func_0x00010347d124(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_10347cc00(param_1,uVar1,uVar2);
  return;
}



/* Entry: 103471f60; end: 103471f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103471f60(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4b1cc(uVar1);
  func_0x000107c61180();
  lVar2 = *(long *)(lVar2 + _DAT_113038bd8);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113038cc8);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_113038cd0);
  func_0x00010347d124(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  FUN_10347cc00(uVar1,uVar3,uVar4);
  return;
}



/* Entry: 103471f68; end: 103471f9f;  */

void FUN_103471f68(long param_1)

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



/* Entry: 103471fa0; end: 103471fbb;  */

void FUN_103471fa0(long param_1,long param_2)

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



/* Entry: 103471fbc; end: 10347200f;  */

void FUN_103471fbc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f96c74(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000103f96b60();
  func_0x000103f96ae0(0);
  func_0x000107c610f8();
  func_0x000103f969a4(uVar1);
  return;
}



/* Entry: 103472010; end: 103472017;  */

void FUN_103472010(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103472018; end: 1034720b7;  */

void FUN_103472018(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034720b8; end: 103472123;  */

void FUN_1034720b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f96c74(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000103f96b60();
  uVar1 = 0;
  func_0x000103f96ae0(0);
  func_0x000107c610f8();
  func_0x000103f969a4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 103472124; end: 10347212f;  */

void FUN_103472124(long param_1,long param_2)

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



/* Entry: 103472130; end: 10347236f;  */

long FUN_103472130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110659f90;
  func_0x000107c613fc(&UNK_110659f90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_60 = FUN_103472410;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_103471f68;
  puStack_68 = &UNK_110659fa8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 103472370; end: 10347240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103472370(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd0) + _DAT_113038cc8);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd0) + _DAT_113038cd0);
  func_0x00010347d124(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_10347cc00(param_1,uVar1,uVar2);
  return;
}



/* Entry: 103472410; end: 103472433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103472410(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4b1cc(uVar1);
  func_0x000107c61180();
  lVar2 = *(long *)(lVar2 + _DAT_113038bd0);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113038cc8);
  uVar4 = *(undefined8 *)(lVar2 + _DAT_113038cd0);
  func_0x00010347d124(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  FUN_10347cc00(uVar1,uVar3,uVar4);
  return;
}



/* Entry: 103472434; end: 103472487;  */

void FUN_103472434(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f96c74(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000103f96b60();
  func_0x0001005c762c(0);
  func_0x000107c610f8();
  func_0x000103f968dc(uVar1);
  return;
}



/* Entry: 103472488; end: 10347248f;  */

void FUN_103472488(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103472490; end: 10347252f;  */

void FUN_103472490(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103472530; end: 10347259b;  */

void FUN_103472530(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000103f96c74(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000103f96b60();
  uVar1 = 0;
  func_0x0001005c762c(0);
  func_0x000107c610f8();
  func_0x000103f968dc(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10347259c; end: 1034725a7;  */

void FUN_10347259c(long param_1,long param_2)

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



/* Entry: 1034725a8; end: 10347262f;  */

long FUN_1034725a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c5d198();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x00010073b204(0);
  func_0x000107c610f8();
  func_0x00010073b224(uVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103472630; end: 103472637;  */

void FUN_103472630(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103472638; end: 10347265b;  */

void FUN_103472638(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10347265c; end: 10347267f;  */

void FUN_10347265c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010073b6e0();
  *param_1 = param_2;
  return;
}



/* Entry: 103472680; end: 103472683;  */

void FUN_103472680(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11065a7d8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 103472684; end: 1034727c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103472684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(param_5 + _DAT_113082920);
  uVar5 = *(undefined8 *)(param_6 + _DAT_113038858);
  uVar3 = *(undefined8 *)(param_7 + _DAT_113038b60);
  puVar1 = &UNK_11065a150;
  func_0x000107c613fc(&UNK_11065a150,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  func_0x0001000285a8(0x112f420e8,&UNK_10db8f0b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  pcVar2 = FUN_10347296c;
  func_0x0001000bdd8c(FUN_10347296c,puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return unaff_x20;
}



/* Entry: 1034727c8; end: 10347296b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034727c8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &UNK_11065a178;
  func_0x000107c613fc(&UNK_11065a178,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar2 = FUN_103472b88;
  func_0x0001000bdd8c(FUN_103472b88,puVar1);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130828e8);
  func_0x0001000bda74();
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c4af50();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar5 = uStack_88;
  (**(code **)(lStack_80 + 8))(uStack_88,lStack_80);
  lVar6 = 0;
  FUN_103476260();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(code **)(lVar7 + 0x10) = pcVar2;
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x30) = param_5;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  param_1[3] = lVar6;
  param_1[4] = (long)&PTR_DAT_11065a420;
  *param_1 = lVar7;
  return;
}



/* Entry: 10347296c; end: 10347296f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347296c(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_11065a178;
  func_0x000107c613fc(&UNK_11065a178,0x18,7,uVar5,*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_103472b88;
  func_0x0001000bdd8c(FUN_103472b88,puVar1);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar8 + _DAT_1130828e8);
  func_0x0001000bda74();
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c4af50();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar6 = uStack_88;
  (**(code **)(lStack_80 + 8))(uStack_88,lStack_80);
  lVar7 = 0;
  FUN_103476260();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(code **)(lVar8 + 0x10) = pcVar2;
  *(undefined8 *)(lVar8 + 0x18) = uVar3;
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  *(undefined8 *)(lVar8 + 0x30) = uVar5;
  *(undefined8 *)(lVar8 + 0x20) = uVar4;
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11065a420;
  *param_1 = lVar8;
  return;
}



/* Entry: 103472970; end: 1034729b3;  */

void FUN_103472970(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034729b4; end: 1034729c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034729b4(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_11065a178;
  func_0x000107c613fc(&UNK_11065a178,0x18,7,uVar5,*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112f421c0,&UNK_10dbcc740);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_103472b88;
  func_0x0001000bdd8c(FUN_103472b88,puVar1);
  func_0x0001000285a8(0x112f55828,&UNK_10dbcae70);
  uVar3 = *(undefined8 *)(lVar8 + _DAT_1130828e8);
  func_0x0001000bda74();
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar4 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c4af50();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  uVar6 = uStack_88;
  (**(code **)(lStack_80 + 8))(uStack_88,lStack_80);
  lVar7 = 0;
  FUN_103476260();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(code **)(lVar8 + 0x10) = pcVar2;
  *(undefined8 *)(lVar8 + 0x18) = uVar3;
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  *(undefined8 *)(lVar8 + 0x30) = uVar5;
  *(undefined8 *)(lVar8 + 0x20) = uVar4;
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11065a420;
  *param_1 = lVar8;
  return;
}



/* Entry: 1034729c4; end: 103472a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034729c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_113038bd0) + _DAT_113038cc0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103472a6c; end: 103472a73;  */

void FUN_103472a6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103472a74; end: 103472a97;  */

void FUN_103472a74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103472a98; end: 103472b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103472a98(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_103475eb8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f70160) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103472b0c; end: 103472b87;  */

void FUN_103472b0c(undefined8 param_1)

{
  if (lRam0000000112f70030 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e769048);
  return;
}



/* Entry: 103472b88; end: 103472b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103472b88(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113038bd0) + _DAT_113038cc0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar1);
  func_0x0001000a8868(auStack_58,lStack_40);
  *(long *)(param_1 + 0x18) = lStack_40;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lStack_38 + 8);
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(lStack_40 + -8) + 0x10))();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 103472b90; end: 103472de3;  */

uint FUN_103472b90(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103472de4);
          (*pcVar1)();
        }
        FUN_103473204(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103472d84);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103472d88);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103472d8c);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_103472cac;
LAB_103472c7c:
              func_0x000100ff3f88(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              func_0x000100ff3f88(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_103472c7c;
LAB_103472cac:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103472d90);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_103472dbc;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_103472dbc:
  return uVar8 & 1;
}



/* Entry: 103472de4; end: 103472dff;  */

ulong FUN_103472de4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar6 = *param_1;
  uVar8 = param_1[1];
  uVar1 = *param_2;
  uVar7 = param_2[1];
  bVar2 = (byte)param_2[2];
  uVar4 = param_1[2];
  bVar3 = (byte)uVar4 >> 6;
  if (bVar3 == 0) {
    if ((bVar2 < 0x40) && (FUN_103472b90(uVar6,uVar1), (uVar6 & 1) != 0)) {
      if (uVar8 == 0) {
        if (uVar7 == 0) {
LAB_103472f88:
          uVar9 = (byte)(bVar2 ^ (byte)uVar4) ^ 1;
          goto LAB_103472f70;
        }
      }
      else if (uVar7 != 0) {
        FUN_103473204(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        func_0x000107c61174(uVar7);
        func_0x000107c61174();
        uVar6 = uVar8;
        func_0x000107c60118();
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar7);
        if ((uVar6 & 1) != 0) goto LAB_103472f88;
      }
    }
  }
  else if (bVar3 == 1) {
    if ((bVar2 & 0xc0) == 0x40) {
      uVar5 = 0;
      FUN_103473204(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(uVar6,uVar1,uVar5);
      uVar9 = 0;
      if ((uVar6 & 1) != 0) {
        uVar9 = (uint)uVar7 ^ (uint)uVar8 ^ 1;
      }
      goto LAB_103472f70;
    }
  }
  else if ((char)bVar2 < -0x40) {
    if ((uVar6 != uVar1) || (uVar8 != uVar7)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar6,uVar8,uVar1,uVar7,0);
      return uVar6;
    }
    uVar9 = 1;
    goto LAB_103472f70;
  }
  uVar9 = 0;
LAB_103472f70:
  return (ulong)(uVar9 & 1);
}



/* Entry: 103472e00; end: 103472f93;  */

ulong FUN_103472e00(ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,
                   uint param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = param_3 >> 6 & 3;
  if (uVar3 == 0) {
    if (((param_6 & 0xff) < 0x40) && (FUN_103472b90(param_1,param_4), (param_1 & 1) != 0)) {
      if (param_2 == 0) {
        if (param_5 == 0) {
LAB_103472f88:
          uVar3 = param_6 ^ param_3 ^ 1;
          goto LAB_103472f70;
        }
      }
      else if (param_5 != 0) {
        FUN_103473204(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        func_0x000107c61174(param_5);
        func_0x000107c61174();
        uVar2 = param_2;
        func_0x000107c60118();
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_5);
        if ((uVar2 & 1) != 0) goto LAB_103472f88;
      }
    }
  }
  else if (uVar3 == 1) {
    if ((param_6 & 0xc0) == 0x40) {
      uVar1 = 0;
      FUN_103473204(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(param_1,param_4,uVar1);
      uVar3 = 0;
      if ((param_1 & 1) != 0) {
        uVar3 = (uint)param_5 ^ (uint)param_2 ^ 1;
      }
      goto LAB_103472f70;
    }
  }
  else if ((char)param_6 < -0x40) {
    if ((param_1 != param_4) || (param_2 != param_5)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_4,param_5,0);
      return param_1;
    }
    uVar3 = 1;
    goto LAB_103472f70;
  }
  uVar3 = 0;
LAB_103472f70:
  return (ulong)(uVar3 & 1);
}



/* Entry: 103472f94; end: 103472fe3;  */

/* WARNING: Possible PIC construction at 0x000103472fb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103472fbc) */

void FUN_103472f94(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_1);
    return;
  }
  if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 103472fe4; end: 103472ff3;  */

/* WARNING: Possible PIC construction at 0x000103473014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473018) */

void FUN_103472fe4(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2) >> 6;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    param_1 = param_1 + 1;
    if (bVar1 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 103472ff4; end: 10347303b;  */

/* WARNING: Possible PIC construction at 0x000103473014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473018) */

void FUN_103472ff4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    param_1 = param_2;
    if (uVar1 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 10347303c; end: 1034730d7;  */

undefined8 * FUN_10347303c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103472f94(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1034730d8; end: 10347311b;  */

undefined8 * FUN_1034730d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_103472ff4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10347311c; end: 103473203;  */

int FUN_10347311c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 4) >> 6) | (*(byte *)(param_1 + 4) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103473204; end: 103473243;  */

void FUN_103473204(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103473244; end: 10347324b;  */

undefined8 * FUN_103473244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103472f94(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10347324c; end: 10347357b;  */

long FUN_10347324c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10347357c; end: 103473677;  */

void FUN_10347357c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103f99b5c(0);
  func_0x000103f99828(param_1,param_2,uVar1);
  uVar1 = *param_3;
  *param_3 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103473678; end: 1034736b7;  */

void FUN_103473678(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000103f99b5c(0);
  uVar1 = 0;
  func_0x000103f99714(0,1);
  uVar2 = *param_1;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1034736b8; end: 1034736d7;  */

void FUN_1034736b8(void)

{
  return;
}



/* Entry: 1034736d8; end: 10347380f;  */

uint FUN_1034736d8(ulong param_1,ulong param_2,char param_3,long param_4,long param_5,char param_6)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_3 == '\x01') {
    uVar2 = (uint)param_4 ^ (uint)param_1 ^ 1;
    if (param_6 != '\x01') {
      uVar2 = 0;
    }
    goto LAB_103473720;
  }
  if (param_6 != '\x01') {
    if (param_1 == 0) {
      if (param_4 == 0) {
LAB_1034737a8:
        if (param_2 == 0) {
          if (param_5 == 0) {
LAB_103473808:
            uVar2 = 1;
            goto LAB_103473720;
          }
        }
        else if (param_5 != 0) {
          func_0x0001044ff654(0);
          func_0x000107c61174(param_5);
          func_0x000107c61174();
          uVar1 = param_2;
          func_0x000107c60118();
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_5);
          if ((uVar1 & 1) != 0) goto LAB_103473808;
        }
      }
    }
    else if (param_4 != 0) {
      func_0x000104501ac4(0);
      func_0x000107c61174(param_4);
      func_0x000107c61174();
      uVar1 = param_1;
      func_0x000107c60118();
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_4);
      if ((uVar1 & 1) != 0) goto LAB_1034737a8;
    }
  }
  uVar2 = 0;
LAB_103473720:
  return uVar2 & 1;
}



/* Entry: 103473810; end: 103473843;  */

/* WARNING: Possible PIC construction at 0x000103473830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473834) */

void FUN_103473810(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103473844; end: 103473853;  */

/* WARNING: Possible PIC construction at 0x000103473870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473874) */

void FUN_103473844(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1,param_1[1]);
  return;
}



/* Entry: 103473854; end: 103473883;  */

/* WARNING: Possible PIC construction at 0x000103473870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103473874) */

void FUN_103473854(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103473884; end: 10347391f;  */

undefined8 * FUN_103473884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_103473810(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103473920; end: 103473963;  */

undefined8 * FUN_103473920(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_103473854(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103473964; end: 103473a1b;  */

int FUN_103473964(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103473a1c; end: 103473da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103473a1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long *plStack_70;
  long lStack_68;
  
  lVar2 = _DAT_112f70100;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f70100);
  func_0x000107c6157c(uVar7);
  func_0x000100c82230();
  func_0x000107c61574(uVar7);
  lVar1 = _DAT_112f700e8;
  func_0x000107c61428(unaff_x20 + _DAT_112f700e8,auStack_a0,0,0);
  FUN_103475948(unaff_x20 + lVar1,auStack_c8);
  if (lStack_b0 == 0) {
    func_0x000103475998(auStack_c8);
  }
  else {
    FUN_1034759e0(auStack_c8,auStack_88);
    lVar1 = lStack_68;
    plVar3 = plStack_70;
    func_0x0001000a8868(auStack_88,plStack_70);
    (**(code **)(lVar1 + 8))(plVar3,lVar1);
    puVar5 = &UNK_11065a400;
    puVar4 = puVar5;
    func_0x000107c613fc(&UNK_11065a400,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar7 = 0x1034759f8;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x1034759f8);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    pcVar9 = *(code **)(puVar6 + 0x18);
    func_0x000107c6157c(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar8);
    lVar1 = lStack_68;
    plVar3 = plStack_70;
    func_0x0001000a8868(auStack_88,plStack_70);
    (**(code **)(lVar1 + 0x10))(plVar3,lVar1);
    puVar4 = puVar5;
    func_0x000107c613fc(&UNK_11065a400,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar7 = 0x103475a00;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x103475a00);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    pcVar9 = *(code **)(puVar6 + 0x18);
    func_0x000107c6157c(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar8);
    lVar1 = lStack_68;
    plVar3 = plStack_70;
    func_0x0001000a8868(auStack_88,plStack_70);
    (**(code **)(lVar1 + 0x18))(plVar3,lVar1);
    puVar4 = puVar5;
    func_0x000107c613fc(&UNK_11065a400,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar7 = 0x103475a08;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x103475a08);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    pcVar9 = *(code **)(puVar6 + 0x18);
    func_0x000107c6157c(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar8);
    func_0x0001000a8868(auStack_88,plStack_70);
    plVar3 = plStack_70;
    (**(code **)(lStack_68 + 0x20))(plStack_70,lStack_68);
    func_0x000107c613fc(&UNK_11065a400,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uVar7 = 0x103475a10;
    puVar4 = puVar5;
    (**(code **)(*plVar3 + 0x60))(0x103475a10);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c614f0(uVar7);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
    pcVar9 = *(code **)(puVar4 + 0x18);
    func_0x000107c6157c(uVar8);
    (*pcVar9)();
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar8);
    func_0x0001000834e4(auStack_88);
  }
  return;
}



/* Entry: 103473da8; end: 103473eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103473da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f700e8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112f700f0;
  uVar3 = 0x112f70158;
  func_0x0001000285a8(0x112f70158,&UNK_10dbcc890);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f700f8) = 0;
  lVar2 = _DAT_112f70100;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f70108) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f70110) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f700d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f700e0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103473eb4; end: 103473fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103473eb4(undefined8 param_1,long param_2)

{
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(char *)(param_2 + _DAT_112f70108) == '\x01') &&
       (func_0x0001000d224c(&lStack_50), lStack_50 != 0)) {
      func_0x000107c53590(lStack_50);
      func_0x000107c615e8(lStack_50);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103473fdc; end: 1034741bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103473fdc(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  
  if (0xfd < ((uint)param_3 & 0xff)) {
    return;
  }
  FUN_103472f94();
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
LAB_1034740b0:
    func_0x000103475a40(param_1,param_2,param_3);
  }
  else {
    uVar1 = (uint)param_3 >> 6 & 3;
    if (uVar1 == 0) {
      uVar2 = 0;
      func_0x000100c70ba8(0);
      lVar3 = param_2;
      func_0x000107c61174();
      lVar4 = param_1;
      func_0x000107c5fc48(param_1,uVar2);
      if (param_2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar2);
        }
      }
      func_0x000107c5d3d0(lStack_58);
      func_0x000107c615e8(lStack_58);
      func_0x000103475a40(param_1,param_2,param_3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
    }
    else {
      if (uVar1 == 1) {
        lVar4 = param_2;
        FUN_103472f94(param_1,param_2,param_3);
        lVar3 = param_1;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar4);
        }
        func_0x000107c5d4d8(lStack_58);
        func_0x000103475a40(param_1,param_2,param_3);
        func_0x000107c615e8(lStack_58);
        func_0x000107c61170(lVar3);
        goto LAB_1034740b0;
      }
      lVar5 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4fd78(lStack_58);
      func_0x000103475a40(param_1,param_2,param_3);
      func_0x000107c615e8(lStack_58);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 1034741bc; end: 10347444f;  */

void FUN_1034741bc(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lStack_d0 = param_2;
      lStack_b0 = param_2;
      lStack_90 = param_2;
      lStack_70 = param_2;
      lStack_50 = param_2;
      func_0x000107c61174(lVar1);
      func_0x000104500f7c(0x103475a18,auStack_60,0x103475a20,auStack_80,0x103475a28,auStack_a0,
                          0x103475a30,auStack_c0,0x103475a38,auStack_e0);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 103474450; end: 1034744af; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController init] */

void FUN_103474450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselIntegration.LensCarouselUIController",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10347447c);
  (*pcVar1)();
}



/* Entry: 1034744b0; end: 103474527; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034744cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034744fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034744d0) */
/* WARNING: Removing unreachable block (ram,0x000103474500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034744b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f700d8));
  return;
}



/* Entry: 103474528; end: 103474547;  */

void FUN_103474528(void)

{
  func_0x000107c61168(&PTR_PTR_1128dc890);
  return;
}



/* Entry: 103474548; end: 1034745f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474548(void)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f70140,&UNK_10dbcc870);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112f70140,&UNK_10dbcc870);
    lVar1 = lStack_38;
    func_0x000107c4ae6c(lStack_38);
    func_0x000107c61180();
    func_0x0001000b637c();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1034745f4; end: 1034749d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034745f4(long param_1,long param_2,char param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long *plStack_c0;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long alStack_70 [2];
  
  *(bool *)(unaff_x20 + _DAT_112f70108) = param_3 != '\x01';
  func_0x0001000d224c(&puStack_100);
  puVar3 = puStack_100;
  if (puStack_100 == (undefined *)0x0) {
    if (param_4 == (code *)0x0) {
      return;
    }
    (*param_4)();
    return;
  }
  if (param_3 == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f70110) = 0;
    puVar5 = (undefined *)0x0;
    func_0x000104507528();
    func_0x000104505884();
    puStack_100 = puVar5;
    func_0x0001002a64a8(&puStack_100);
    func_0x000107c61170(puVar5);
    func_0x000107c44e20(puVar3);
    if (param_4 != (code *)0x0) {
      (*param_4)();
    }
    func_0x0001000d224c(&puStack_100);
    ppuVar9 = &puStack_100;
    func_0x0001000a8868(ppuVar9,puStack_e8);
    func_0x00010450e7f8();
    puVar5 = *ppuVar9;
    pcVar8 = *(code **)(pcStack_e0 + 0x10);
    func_0x000107c61174(puVar5);
    (*pcVar8)();
    func_0x000107c61170(puVar5);
    func_0x0001000834e4(&puStack_100);
    func_0x0001034743bc();
    func_0x000107c615e8(puVar3);
    return;
  }
  func_0x000103474314();
  if (param_2 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f70110) = 0;
    if (param_4 == (code *)0x0) goto LAB_103474800;
LAB_103474798:
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0x42000000;
    plStack_f0 = (long *)&UNK_1000f6b44;
    puStack_e8 = &UNK_11065a3c8;
    ppuVar9 = &puStack_100;
    pcStack_e0 = param_4;
    uStack_d8 = param_5;
    func_0x000107c60bc4(ppuVar9);
    uVar7 = uStack_d8;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar7);
LAB_103474804:
    func_0x000107c5ae98(puVar3);
    func_0x000107c60bd0(ppuVar9);
    bVar2 = false;
    if (param_1 == 0) goto LAB_1034748ac;
LAB_103474824:
    alStack_70[0] = 0;
    plStack_f0 = alStack_70;
    plStack_c0 = plStack_f0;
    plStack_a0 = plStack_f0;
    plStack_80 = plStack_f0;
    func_0x000104500f7c(FUN_103475da0,&puStack_100,0x103475dac,auStack_90,0x103475da4,auStack_b0,
                        0x103475da8,auStack_d0,FUN_1034736b8,0);
    if (alStack_70[0] == 0) goto LAB_1034748ac;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f700f8);
    *(long *)(unaff_x20 + _DAT_112f700f8) = alStack_70[0];
    lVar4 = alStack_70[0];
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
  }
  else {
    bVar1 = *(byte *)(param_2 + _DAT_113081e90);
    *(byte *)(unaff_x20 + _DAT_112f70110) = bVar1;
    if ((bVar1 & 1) == 0) {
      if (param_4 != (code *)0x0) goto LAB_103474798;
LAB_103474800:
      ppuVar9 = (undefined **)0x0;
      goto LAB_103474804;
    }
    bVar2 = true;
    func_0x000107c53590(puVar3);
    if (param_1 != 0) goto LAB_103474824;
LAB_1034748ac:
    lVar6 = *(long *)(unaff_x20 + _DAT_112f700f8);
    lVar4 = lVar6;
    func_0x000107c61174(lVar6);
    if (lVar6 == 0) goto LAB_103474908;
  }
  func_0x000107c61174(lVar4);
  func_0x0001000d224c(&puStack_100);
  puVar5 = puStack_100;
  if (puStack_100 != (undefined *)0x0) {
    func_0x000107c51c40(puStack_100);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(lVar4);
LAB_103474908:
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + _DAT_113081e88);
    func_0x0001000d224c(&puStack_100);
    pcVar8 = pcStack_e0;
    puVar5 = puStack_e8;
    func_0x0001000a8868(&puStack_100,puStack_e8);
    (**(code **)(pcVar8 + 0x10))(uVar7,puVar5,pcVar8);
    func_0x0001000834e4(&puStack_100);
  }
  puVar5 = (undefined *)0x0;
  func_0x000104507528();
  func_0x0001045058b4();
  puStack_100 = puVar5;
  func_0x0001002a64a8(&puStack_100);
  func_0x000107c61170(puVar5);
  if ((bVar2) && (param_4 != (code *)0x0)) {
    (*param_4)();
  }
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1034749d8; end: 103474b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034749d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined1 auStack_70 [16];
  long *plStack_60;
  long alStack_50 [2];
  long *plStack_40;
  long lStack_38;
  
  plStack_a0 = &lStack_38;
  lStack_38 = 0;
  plStack_80 = plStack_a0;
  plStack_60 = plStack_a0;
  plStack_40 = plStack_a0;
  func_0x000104500f7c(0x10347590c,alStack_50,0x103475914,auStack_70,0x10347591c,auStack_90,
                      0x103475924,auStack_b0,FUN_1034736b8,0);
  if (lStack_38 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f700f8);
    *(long *)(unaff_x20 + _DAT_112f700f8) = lStack_38;
    lVar1 = lStack_38;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(lVar1);
    func_0x0001000d224c(alStack_50);
    if (alStack_50[0] != 0) {
      func_0x000107c51c40(alStack_50[0]);
      func_0x000107c615e8(alStack_50[0]);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103474b50; end: 103474c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  if (uStack_58 != 0) {
    uVar1 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = uStack_58;
    func_0x000107c51c30();
    func_0x000107c61170(uVar1);
    if (((uVar2 & 1) == 0) && ((param_5 & 1) != 0)) {
      FUN_103474ed0(param_1,param_2);
    }
    func_0x000107c615e8(uStack_58);
  }
  return;
}



/* Entry: 103474c04; end: 103474cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = 0;
  func_0x000103f99b5c(0);
  func_0x000103f99714(param_1,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_3 + _DAT_112f700f8);
  *(undefined8 *)(param_3 + _DAT_112f700f8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c51c40(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103474cc4; end: 103474de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474cc4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + _DAT_112f700e8;
  func_0x000107c61428(param_1,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x28))(lVar2,lVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c4b1dc(lVar1);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      FUN_103474ed0(lVar4,lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(lVar2);
    }
  }
  return;
}



/* Entry: 103474de8; end: 103474e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474de8(void)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c51c44(lStack_28);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 103474e34; end: 103474ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103474e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  
  if (((*(char *)(unaff_x20 + _DAT_112f70108) == '\x01') &&
      ((*(byte *)(unaff_x20 + _DAT_112f70110) & 1) == 0)) &&
     (func_0x0001000d224c(&lStack_38), lStack_38 != 0)) {
    lVar1 = lStack_38;
    func_0x000107c4eae8(param_1,param_2,lStack_38,param_4,0);
    func_0x000107c615e8(lStack_38);
    return lVar1;
  }
  return 0;
}



/* Entry: 103474ed0; end: 103474fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474ed0(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long lStack_38;
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000103f99b5c(0);
    func_0x000103f99828(param_1,param_2,uVar1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f700f8);
  *(ulong *)(unaff_x20 + _DAT_112f700f8) = param_1;
  uVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar1);
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c51c40(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 103474fa4; end: 103474fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474fa4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f700f0));
  return;
}



/* Entry: 103474fb4; end: 10347506f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103474fb4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f700e8;
  func_0x000107c61428(unaff_x20 + _DAT_112f700e8,auStack_48,0,0);
  FUN_103475948(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 103475070; end: 1034750e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103475070(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _DAT_112f700e8;
  func_0x000107c61428(unaff_x20 + _DAT_112f700e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x1034750b4;
  return auVar2;
}



/* Entry: 1034750e4; end: 1034750e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034750e4(void)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112f70140,&UNK_10dbcc870);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112f70140,&UNK_10dbcc870);
    lVar1 = lStack_38;
    func_0x000107c4ae6c(lStack_38);
    func_0x000107c61180();
    func_0x0001000b637c();
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1034750e8; end: 10347514b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1034750e8(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_28;
    func_0x000107c3d138(lStack_28);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_28);
  }
  return lVar1;
}



/* Entry: 10347514c; end: 103475157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347514c(long param_1,long param_2,char param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  long *plStack_c0;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long alStack_70 [2];
  
  *(bool *)(unaff_x20 + _DAT_112f70108) = param_3 != '\x01';
  func_0x0001000d224c(&puStack_100);
  puVar3 = puStack_100;
  if (puStack_100 == (undefined *)0x0) {
    if (param_4 == (code *)0x0) {
      return;
    }
    (*param_4)();
    return;
  }
  if (param_3 == '\x01') {
    *(undefined1 *)(unaff_x20 + _DAT_112f70110) = 0;
    puVar5 = (undefined *)0x0;
    func_0x000104507528();
    func_0x000104505884();
    puStack_100 = puVar5;
    func_0x0001002a64a8(&puStack_100);
    func_0x000107c61170(puVar5);
    func_0x000107c44e20(puVar3);
    if (param_4 != (code *)0x0) {
      (*param_4)();
    }
    func_0x0001000d224c(&puStack_100);
    ppuVar9 = &puStack_100;
    func_0x0001000a8868(ppuVar9,puStack_e8);
    func_0x00010450e7f8();
    puVar5 = *ppuVar9;
    pcVar8 = *(code **)(pcStack_e0 + 0x10);
    func_0x000107c61174(puVar5);
    (*pcVar8)();
    func_0x000107c61170(puVar5);
    func_0x0001000834e4(&puStack_100);
    func_0x0001034743bc();
    func_0x000107c615e8(puVar3);
    return;
  }
  func_0x000103474314();
  if (param_2 == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f70110) = 0;
    if (param_4 == (code *)0x0) goto LAB_103474800;
LAB_103474798:
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0x42000000;
    plStack_f0 = (long *)&UNK_1000f6b44;
    puStack_e8 = &UNK_11065a3c8;
    ppuVar9 = &puStack_100;
    pcStack_e0 = param_4;
    uStack_d8 = param_5;
    func_0x000107c60bc4(ppuVar9);
    uVar7 = uStack_d8;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar7);
LAB_103474804:
    func_0x000107c5ae98(puVar3);
    func_0x000107c60bd0(ppuVar9);
    bVar2 = false;
    if (param_1 == 0) goto LAB_1034748ac;
LAB_103474824:
    alStack_70[0] = 0;
    plStack_f0 = alStack_70;
    plStack_c0 = plStack_f0;
    plStack_a0 = plStack_f0;
    plStack_80 = plStack_f0;
    func_0x000104500f7c(FUN_103475da0,&puStack_100,0x103475dac,auStack_90,0x103475da4,auStack_b0,
                        0x103475da8,auStack_d0,FUN_1034736b8,0);
    if (alStack_70[0] == 0) goto LAB_1034748ac;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f700f8);
    *(long *)(unaff_x20 + _DAT_112f700f8) = alStack_70[0];
    lVar4 = alStack_70[0];
    func_0x000107c61174();
    func_0x000107c61170(uVar7);
  }
  else {
    bVar1 = *(byte *)(param_2 + _DAT_113081e90);
    *(byte *)(unaff_x20 + _DAT_112f70110) = bVar1;
    if ((bVar1 & 1) == 0) {
      if (param_4 != (code *)0x0) goto LAB_103474798;
LAB_103474800:
      ppuVar9 = (undefined **)0x0;
      goto LAB_103474804;
    }
    bVar2 = true;
    func_0x000107c53590(puVar3);
    if (param_1 != 0) goto LAB_103474824;
LAB_1034748ac:
    lVar6 = *(long *)(unaff_x20 + _DAT_112f700f8);
    lVar4 = lVar6;
    func_0x000107c61174(lVar6);
    if (lVar6 == 0) goto LAB_103474908;
  }
  func_0x000107c61174(lVar4);
  func_0x0001000d224c(&puStack_100);
  puVar5 = puStack_100;
  if (puStack_100 != (undefined *)0x0) {
    func_0x000107c51c40(puStack_100);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(lVar4);
LAB_103474908:
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_2 + _DAT_113081e88);
    func_0x0001000d224c(&puStack_100);
    pcVar8 = pcStack_e0;
    puVar5 = puStack_e8;
    func_0x0001000a8868(&puStack_100,puStack_e8);
    (**(code **)(pcVar8 + 0x10))(uVar7,puVar5,pcVar8);
    func_0x0001000834e4(&puStack_100);
  }
  puVar5 = (undefined *)0x0;
  func_0x000104507528();
  func_0x0001045058b4();
  puStack_100 = puVar5;
  func_0x0001002a64a8(&puStack_100);
  func_0x000107c61170(puVar5);
  if ((bVar2) && (param_4 != (code *)0x0)) {
    (*param_4)();
  }
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103475158; end: 10347525b; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController defaultLensIdToSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103475158(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + _DAT_112f700e8;
  func_0x000107c61428(param_1,auStack_58,0,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,lVar2);
    lVar4 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar1 = lVar2;
    (**(code **)(lVar3 + 0x30))(lVar2);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (lVar3 != 0) {
      func_0x000107c5fadc(lVar1,lVar3);
      func_0x000107c6142c(lVar3);
      goto LAB_103475244;
    }
  }
  lVar1 = 0;
LAB_103475244:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10347525c; end: 10347526b; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensRestoreStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347525c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f700f8));
  return;
}



/* Entry: 10347526c; end: 103475283; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController resetSelectionRestoreStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10347526c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f700f8);
  *(undefined8 *)(param_1 + _DAT_112f700f8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103475284; end: 1034752ab; -[_TtC25SCLensCarouselIntegration24LensCarouselUIController lensCarouselCollectionController:didActivateLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_103475284(void)

{
  FUN_103475384();
  return;
}


