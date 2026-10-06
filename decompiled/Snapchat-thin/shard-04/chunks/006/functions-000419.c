/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036fd13c; end: 1036fd13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd13c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113074700);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = PTR_PTR_1126ad4e8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c47880();
  func_0x000107c61170(uVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036fd140; end: 1036fd1bf;  */

long FUN_1036fd140(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112f8a200,&UNK_10dbff730);
  func_0x000107c613fc();
  pcVar1 = FUN_1036fd1c0;
  func_0x0001000bdd8c(FUN_1036fd1c0,0);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  return unaff_x20;
}



/* Entry: 1036fd1c0; end: 1036fd1f7;  */

void FUN_1036fd1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1037051c4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106869b8;
  return;
}



/* Entry: 1036fd1f8; end: 1036fd1ff;  */

void FUN_1036fd1f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036fd200; end: 1036fd29f;  */

void FUN_1036fd200(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fd2a0; end: 1036fd313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd2a0(undefined8 *param_1)

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
  FUN_1036ff994();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a6b0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036fd314; end: 1036fd4e7;  */

long FUN_1036fd314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106861a8;
  func_0x000107c613fc(&UNK_1106861a8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  uVar2 = 0x112f8a2d8;
  func_0x0001000285a8(0x112f8a2d8,&UNK_10dbff770);
  func_0x000107c613fc();
  pcVar3 = FUN_1036fd4e8;
  func_0x0001000bdd8c(FUN_1036fd4e8,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 1036fd4e8; end: 1036fd4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd4e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0();
  uStack_78 = uStack_68;
  auStack_98[0] = uStack_70;
  func_0x000103a7f854();
  FUN_10370eba0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x00010370e080(uVar2,uVar3,auStack_98,uVar1,uVar4,uVar5,uVar6);
  *param_1 = uVar2;
  return;
}



/* Entry: 1036fd4ec; end: 1036fd53f;  */

void FUN_1036fd4ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036fd540; end: 1036fd55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd540(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 auStack_98 [4];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000d224c(&uStack_70);
  uVar1 = uStack_70;
  func_0x000107c614f0();
  uStack_78 = uStack_68;
  auStack_98[0] = uStack_70;
  func_0x000103a7f854();
  FUN_10370eba0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x00010370e080(uVar2,uVar3,auStack_98,uVar1,uVar4,uVar5,uVar6);
  *param_1 = uVar2;
  return;
}



/* Entry: 1036fd55c; end: 1036fd5fb;  */

void FUN_1036fd55c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fd5fc; end: 1036fd66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd5fc(undefined8 *param_1)

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
  FUN_1036ffa24();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a6e0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036fd670; end: 1036fd717;  */

long FUN_1036fd670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1106861e8;
  func_0x000107c613fc(&UNK_1106861e8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  uVar2 = 0x112f8a3b0;
  func_0x0001000285a8(0x112f8a3b0,&UNK_10dbff7b0);
  func_0x000107c613fc();
  pcVar3 = FUN_1036fd8fc;
  func_0x0001000bdd8c(FUN_1036fd8fc,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x10) = pcVar3;
  return unaff_x20;
}



/* Entry: 1036fd718; end: 1036fd8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd718(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long lVar9;
  
  lVar6 = 0;
  func_0x0001043a86b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_2 + _DAT_1130746f8);
  *puVar8 = *(undefined1 *)(lVar9 + _DAT_1130748a8);
  iVar4 = *(int *)(lVar6 + 0x14);
  func_0x000107c61174(*(undefined8 *)(lVar9 + _DAT_1130748b0));
  func_0x0001043b0d5c(puVar8 + iVar4);
  iVar4 = *(int *)(lVar6 + 0x18);
  bVar1 = *(long *)(lVar9 + _DAT_1130748b8) == 0;
  if (!bVar1) {
    func_0x000107c61174();
    func_0x0001043b0d5c(puVar8 + iVar4);
  }
  lVar6 = 0;
  func_0x0001043aa0ac();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar8 + iVar4,bVar1,1,lVar6);
  func_0x000107c5cc68();
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1036fd8fc);
    (*pcVar5)();
  }
  func_0x0001000285a8(0x112f8a488,&UNK_10dbff7f0);
  lVar6 = param_3;
  func_0x0001000bda74(param_3);
  func_0x000107c61170(param_3);
  func_0x0001000285a8(0x112d68918,&UNK_10d92c580);
  func_0x000107c4d1f8(param_4);
  func_0x000107c61180();
  uVar7 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113074700);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113074700))[1];
  FUN_103714bf0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar3);
  func_0x000103713db8(puVar8,lVar6,uVar7,uVar2,uVar3);
  *param_1 = puVar8;
  return;
}



/* Entry: 1036fd8fc; end: 1036fd907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd8fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  long lVar12;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = 0;
  func_0x0001043a86b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar10 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar3 + _DAT_1130746f8);
  *puVar10 = *(undefined1 *)(lVar12 + _DAT_1130748a8);
  iVar5 = *(int *)(lVar7 + 0x14);
  func_0x000107c61174(*(undefined8 *)(lVar12 + _DAT_1130748b0));
  func_0x0001043b0d5c(puVar10 + iVar5);
  iVar5 = *(int *)(lVar7 + 0x18);
  bVar2 = *(long *)(lVar12 + _DAT_1130748b8) == 0;
  if (!bVar2) {
    func_0x000107c61174();
    func_0x0001043b0d5c(puVar10 + iVar5);
  }
  lVar7 = 0;
  func_0x0001043aa0ac();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar10 + iVar5,bVar2,1,lVar7);
  func_0x000107c5cc68();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1036fd8fc);
    (*pcVar6)();
  }
  func_0x0001000285a8(0x112f8a488,&UNK_10dbff7f0);
  lVar7 = lVar8;
  func_0x0001000bda74(lVar8);
  func_0x000107c61170(lVar8);
  func_0x0001000285a8(0x112d68918,&UNK_10d92c580);
  func_0x000107c4d1f8(uVar11);
  func_0x000107c61180();
  uVar9 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  puVar1 = (undefined8 *)(lVar3 + _DAT_113074700);
  uVar11 = *puVar1;
  uVar4 = puVar1[1];
  FUN_103714bf0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar4);
  func_0x000103713db8(puVar10,lVar7,uVar9,uVar11,uVar4);
  *param_1 = puVar10;
  return;
}



/* Entry: 1036fd908; end: 1036fd93b;  */

void FUN_1036fd908(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036fd93c; end: 1036fd943;  */

void FUN_1036fd93c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036fd944; end: 1036fd9e3;  */

void FUN_1036fd944(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036fd9e4; end: 1036fda57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fd9e4(undefined8 *param_1)

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
  FUN_1036ffab4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a710) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1036fda58; end: 1036fdd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036fda58(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f8a680);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + _DAT_112f8a650);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + _DAT_112f8a6b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + _DAT_112f8a6e0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_6 + _DAT_112f8a710);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  return unaff_x20;
}



/* Entry: 1036fdd68; end: 1036fde0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fdd68(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_11303fee8);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574(uVar1);
  uVar1 = uStack_38;
  func_0x000107c5b614();
  func_0x000107c615e8(uStack_38);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    FUN_103715150(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103714d50();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1036fde10; end: 1036fde17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fde10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + _DAT_11303fee8);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574(uVar1);
  uVar1 = uStack_38;
  func_0x000107c5b614();
  func_0x000107c615e8(uStack_38);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_103715150(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000103714d50();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1036fde18; end: 1036fdfa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fde18(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x48) + _DAT_11303fee8);
  lVar11 = *(long *)(param_2 + 0x50);
  func_0x000107c6157c(uVar13);
  func_0x000107c5cc5c();
  func_0x000107c61180();
  if (lVar11 != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0x58);
    uVar12 = *(undefined8 *)(param_2 + 0x70);
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    lVar6 = 0;
    FUN_1036ff574();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar3 = _DAT_112f8a600;
    func_0x000107c61614(lVar7 + _DAT_112f8a600,0);
    lVar4 = _DAT_112f8a610;
    puVar8 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar7 + lVar4) = puVar8;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112f8a618);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61614(lVar7 + _DAT_112f8a620,0);
    *(undefined8 *)(lVar7 + _DAT_112f8a5d8) = uVar2;
    *(undefined8 *)(lVar7 + _DAT_112f8a5e0) = uVar13;
    *(undefined8 *)(lVar7 + _DAT_112f8a5e8) = param_3;
    *(long *)(lVar7 + _DAT_112f8a5f0) = lVar11;
    func_0x000107c61604(lVar7 + lVar3,uVar14);
    *(undefined8 *)(lVar7 + _DAT_112f8a608) = uVar12;
    *(undefined8 *)(lVar7 + _DAT_112f8a5f8) = uVar10;
    puVar8 = PTR_s_init_1125d9248;
    lStack_70 = lVar7;
    lStack_68 = lVar6;
    func_0x000107c61174(uVar2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(uVar12);
    func_0x000107c6157c(uVar10);
    plVar9 = &lStack_70;
    func_0x000107c61154(plVar9,puVar8);
    *param_1 = (long)plVar9;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1036fdfa8);
  (*pcVar5)();
}



/* Entry: 1036fdfa8; end: 1036fdfaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fdfa8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_70;
  long lStack_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  uVar14 = *(undefined8 *)(*(long *)(lVar3 + 0x48) + _DAT_11303fee8);
  lVar12 = *(long *)(lVar3 + 0x50);
  func_0x000107c6157c(uVar14);
  func_0x000107c5cc5c();
  func_0x000107c61180();
  if (lVar12 != 0) {
    uVar15 = *(undefined8 *)(lVar3 + 0x58);
    uVar13 = *(undefined8 *)(lVar3 + 0x70);
    uVar11 = *(undefined8 *)(lVar3 + 0x30);
    lVar7 = 0;
    FUN_1036ff574();
    lVar8 = lVar7;
    func_0x000107c610f8();
    lVar3 = _DAT_112f8a600;
    func_0x000107c61614(lVar8 + _DAT_112f8a600,0);
    lVar5 = _DAT_112f8a610;
    puVar9 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + lVar5) = puVar9;
    puVar1 = (undefined8 *)(lVar8 + _DAT_112f8a618);
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61614(lVar8 + _DAT_112f8a620,0);
    *(undefined8 *)(lVar8 + _DAT_112f8a5d8) = uVar2;
    *(undefined8 *)(lVar8 + _DAT_112f8a5e0) = uVar14;
    *(undefined8 *)(lVar8 + _DAT_112f8a5e8) = uVar4;
    *(long *)(lVar8 + _DAT_112f8a5f0) = lVar12;
    func_0x000107c61604(lVar8 + lVar3,uVar15);
    *(undefined8 *)(lVar8 + _DAT_112f8a608) = uVar13;
    *(undefined8 *)(lVar8 + _DAT_112f8a5f8) = uVar11;
    puVar9 = PTR_s_init_1125d9248;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar13);
    func_0x000107c6157c(uVar11);
    plVar10 = &lStack_70;
    func_0x000107c61154(plVar10,puVar9);
    *param_1 = (long)plVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1036fdfa8);
  (*pcVar6)();
}



/* Entry: 1036fdfb0; end: 1036fe05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fdfb0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [40];
  
  func_0x000103703d00(auStack_58);
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  lVar2 = 0;
  func_0x0001036fffc8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a750) = 0;
  func_0x0001028bb4e8(auStack_58,lVar3 + _DAT_112f8a740);
  *(undefined8 *)(lVar3 + _DAT_112f8a748) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61174(uVar5);
  plVar4 = &lStack_68;
  func_0x000107c61154(plVar4,puVar1);
  func_0x0001000834e4(auStack_58);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1036fe060; end: 1036fe067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fe060(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [40];
  
  func_0x000103703d00(auStack_58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar2 = 0;
  func_0x0001036fffc8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f8a750) = 0;
  func_0x0001028bb4e8(auStack_58,lVar3 + _DAT_112f8a740);
  *(undefined8 *)(lVar3 + _DAT_112f8a748) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c61174(uVar5);
  plVar4 = &lStack_68;
  func_0x000107c61154(plVar4,puVar1);
  func_0x0001000834e4(auStack_58);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1036fe068; end: 1036fe217;  */

/* WARNING: Possible PIC construction at 0x0001036fe09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fe0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fe0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fe0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fe0c0) */
/* WARNING: Removing unreachable block (ram,0x0001036fe0b0) */
/* WARNING: Removing unreachable block (ram,0x0001036fe0a0) */
/* WARNING: Removing unreachable block (ram,0x0001036fe0d0) */

void FUN_1036fe068(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1036fe218; end: 1036fe23b;  */

void FUN_1036fe218(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001036fdbb4();
  *param_1 = param_2;
  return;
}



/* Entry: 1036fe23c; end: 1036fe3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fe23c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_2;
  func_0x0001000d224c(&lStack_68);
  lVar4 = lStack_68;
  func_0x000107c5cfd4();
  func_0x000107c615e8();
  if (((int)lVar4 != 0) && (FUN_1036ff5fc(0x4030000000000000,0x4028000000000000), lStack_68 != 0)) {
    if (((uint)param_2 & 0xff) == 1) {
      func_0x000107e48430();
      func_0x000107c61180();
      if (lStack_68 == 0) {
        lVar6 = 0;
        uVar7 = 0xe000000000000000;
      }
      else {
        lVar6 = lStack_68;
        func_0x000107c5faec();
        func_0x000107c61170(lStack_68);
        uVar7 = uVar5;
      }
    }
    else {
      func_0x000107e48460();
      lVar4 = lStack_68;
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1036fe3d0);
        (*pcVar3)();
      }
      lVar6 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar1 = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar2 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar4 + 0x38) = puVar1;
      *(undefined **)(lVar4 + 0x40) = puVar2;
      *(undefined8 *)(lVar4 + 0x20) = param_1;
      uVar7 = uVar5;
      func_0x000107c5fb00(lVar6,uVar5,lVar4);
      func_0x000107c6142c(uVar5);
    }
    uStack_50 = 0xd000000000000023;
    uStack_48 = 0x800000010f15d660;
    lStack_60 = lVar6;
    uStack_58 = uVar7;
    func_0x000103b8605c(0);
    func_0x000107c610f8();
    func_0x000103b85f00(&lStack_68);
  }
  return;
}



/* Entry: 1036fe3d0; end: 1036fe40b; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider headerAccessoryButtonConfig] */

void FUN_1036fe3d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_1036fe23c(0,1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036fe40c; end: 1036fe50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fe40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f8a618);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x0001036ff5e4();
  func_0x0001036ff5c4(uVar5,uVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f8a5e8);
  puVar3 = &UNK_110686268;
  func_0x000107c613fc(&UNK_110686268,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_40 = 0x1036ff5f4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100b5fdac;
  puStack_48 = &UNK_110686320;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1036fe510; end: 1036fe5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fe510(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + _DAT_112f8a618);
    if (pcVar1 == (code *)0x0) {
      func_0x000107c61170();
    }
    else {
      uVar2 = ((undefined8 *)(param_2 + _DAT_112f8a618))[1];
      func_0x000107c6157c(uVar2);
      func_0x000107c49820(param_1);
      FUN_1036fe23c();
      (*pcVar1)();
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x0001036ff5c4(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 1036fe5d0; end: 1036fe65b; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider observeHeaderAccessoryButtonConfigChanges:] */

void FUN_1036fe5d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_110686308;
    func_0x000107c613fc(&UNK_110686308,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    uVar2 = 0x1036ff5d4;
  }
  func_0x000107c61174(param_1);
  FUN_1036fe40c(uVar2,puVar1);
  func_0x0001036ff5c4(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1036fe65c; end: 1036fe7db;  */

/* WARNING: Possible PIC construction at 0x0001036fe740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036fe7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fe744) */
/* WARNING: Removing unreachable block (ram,0x0001036fe7b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fe65c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f8a5d8);
  lVar2 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000d224c(&uStack_78);
    uVar1 = uStack_78;
    func_0x000107c4bf48(uStack_78);
    func_0x000107c615e8(uVar1);
    func_0x000107c61604(unaff_x20 + _DAT_112f8a620,param_1);
    puVar3 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    puVar4 = puVar3;
    func_0x000107e48448();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      uStack_78 = 0;
      uStack_70 = 0xe000000000000000;
      uStack_68 = 0;
      uStack_60 = 0xe000000000000000;
      uStack_58 = 0x101;
      uStack_56 = 1;
      FUN_103703510(0);
      func_0x000107c610f8();
      func_0x000107c61174(puVar3);
      func_0x000107c61174();
      func_0x000103703278(puVar3,&uStack_78,0,unaff_x20);
      func_0x000107c42c1c(lVar5);
    }
    else {
      func_0x000107c5faec();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1036fe7dc; end: 1036fe82b; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider didTapHeaderAccessoryButtonFromPresentingViewController:] */

/* WARNING: Possible PIC construction at 0x0001036fe814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036fe818) */

void FUN_1036fe7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036fe65c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036fe82c; end: 1036fe8fb;  */

void FUN_1036fe82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c3ab28(param_6);
  func_0x000107c61180();
  func_0x000107c608ec(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_6);
  func_0x000107c609d0(param_1,param_2,param_3,param_4,param_5,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_7,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 1036fe8fc; end: 1036fea0b;  */

void FUN_1036fe8fc(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x000107c614f0();
  pcVar1 = "onTrackSelected(_:)";
  func_0x0001000c10c0("onTrackSelected(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_110686268;
  func_0x000107c613fc(&UNK_110686268,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110686290;
  func_0x000107c613fc(&UNK_110686290,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  pcStack_50 = FUN_1036ff594;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106862a8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036fea0c; end: 1036ff31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fea0c(double param_1,long param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 auStack_100 [2];
  int aiStack_f0 [4];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar14 = (long)&puStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  puVar16 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar16,0,0);
  puVar2 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    return;
  }
  puVar13 = param_3;
  func_0x000107c5cda4();
  func_0x000107c61180();
  puVar3 = puVar13;
  func_0x00010af28d38();
  func_0x000107c61170(puVar13);
  puVar13 = puVar2 + _DAT_112f8a600;
  func_0x000107c61618();
  puVar19 = puVar2;
  if (puVar13 != (undefined1 *)0x0) {
    lVar9 = *(long *)(puVar13 + _DAT_1130746f8);
    func_0x000107c61174();
    func_0x000107c61170(puVar13);
    lVar4 = *(long *)(lVar9 + _DAT_1130748b0);
    func_0x000107c61174();
    func_0x000107c61170(lVar9);
    puVar13 = *(undefined1 **)(lVar4 + _DAT_1130749c0);
    func_0x000107c61170(lVar4);
    lVar9 = _DAT_112f8a620;
    if (puVar3 == puVar13) {
      puVar16 = puVar2 + _DAT_112f8a620;
      func_0x000107c61618();
      func_0x000107c61604(puVar2 + lVar9,0);
      if (puVar16 != (undefined1 *)0x0) {
        puVar8 = &UNK_110686268;
        func_0x000107c613fc(&UNK_110686268,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,puVar2);
        uStack_88 = 0x1036ff5bc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1106862d0;
        ppuVar5 = &puStack_a8;
        puStack_80 = puVar8;
        func_0x000107c60bc4(ppuVar5);
        puVar8 = puStack_80;
        func_0x000107c61174(puVar16);
        func_0x000107c61574(puVar8);
        func_0x000107c420a8(puVar16);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar16);
        func_0x000107c60bd0(ppuVar5);
        puVar19 = puVar16;
      }
      goto LAB_1036ff2ec;
    }
  }
  puVar13 = puVar2 + _DAT_112f8a620;
  func_0x000107c61618();
  if (puVar13 == (undefined1 *)0x0) goto LAB_1036ff2ec;
  puVar19 = param_3;
  func_0x000107c5cab0();
  func_0x000107c61180();
  puVar18 = puVar19;
  func_0x000107c5faec();
  puStack_c0 = puVar16;
  puStack_b8 = puVar18;
  func_0x000107c61170(puVar19);
  puVar19 = param_3;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  puVar18 = puVar19;
  func_0x000107c5faec();
  puStack_d0 = puVar16;
  puStack_c8 = puVar18;
  func_0x000107c61170(puVar19);
  puVar19 = param_3;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar19 == (undefined1 *)0x0) {
    func_0x000107c5ede0();
    puVar18 = (undefined1 *)0x1;
    (**(code **)(*(long *)(puVar19 + -8) + 0x38))(lVar10,1,1,puVar19);
  }
  else {
    func_0x000107c61174();
    puVar18 = puVar19;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar12 = puVar18;
    func_0x000107c5faec();
    func_0x000107c61170(puVar18);
    puVar18 = puVar16;
    func_0x000107c5edd0(lVar10,puVar12);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(puVar19);
    func_0x000107c6142c(puVar16);
  }
  puVar16 = param_3;
  func_0x000107c3dab0();
  func_0x000107c61180();
  puVar19 = puVar18;
  if (puVar16 == (undefined1 *)0x0) {
LAB_1036fed7c:
    puVar16 = (undefined1 *)0x0;
    puVar18 = (undefined1 *)0xf000000000000000;
  }
  else {
    puVar12 = puVar16;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar19 = puVar18;
    if (puVar12 == (undefined1 *)0x0) goto LAB_1036fed7c;
    puVar11 = puVar12;
    func_0x000107c4a8c4(puVar12);
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    puVar16 = puVar11;
    func_0x000107c5ee30(puVar11);
    puVar19 = puVar18;
    func_0x000107c61170(puVar11);
  }
  puVar12 = param_3;
  func_0x000107c3dab0();
  func_0x000107c61180();
  puStack_b0 = puVar13;
  if (puVar12 == (undefined1 *)0x0) {
LAB_1036fedf8:
    puVar13 = (undefined1 *)0x0;
LAB_1036fedfc:
    puVar19 = (undefined1 *)0xf000000000000000;
  }
  else {
    puVar13 = puVar12;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    if (puVar13 == (undefined1 *)0x0) goto LAB_1036fedfc;
    puVar12 = puVar13;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    if (puVar12 == (undefined1 *)0x0) goto LAB_1036fedf8;
    puVar13 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
  }
  func_0x000107c4161c(param_3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff318);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff31c);
    (*pcVar1)();
  }
  if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff320);
    (*pcVar1)();
  }
  uVar6 = 0;
  func_0x0001043b1a4c();
  uStack_d8 = uVar6;
  func_0x000107c610f8();
  *(int *)(lVar10 + -0x10) = (int)param_1;
  *(undefined1 **)(lVar10 + -0x20) = puVar13;
  *(undefined1 **)(lVar10 + -0x18) = puVar19;
  puVar13 = puStack_b8;
  func_0x0001043b1198(uVar6,puVar3,puStack_b8,puStack_c0,puStack_c8,puStack_d0,lVar10,puVar16,
                      puVar18);
  puVar16 = param_3;
  func_0x000107c4fd3c();
  func_0x000107c61180();
  if (puVar16 == (undefined1 *)0x0) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    puVar19 = puVar16;
    func_0x000107c5cda4();
    func_0x000107c61180();
    puVar18 = puVar19;
    func_0x00010af28d38();
    puStack_b8 = puVar18;
    func_0x000107c61170(puVar19);
    puVar19 = puVar16;
    func_0x000107c5cab0();
    func_0x000107c61180();
    puVar18 = puVar19;
    func_0x000107c5faec();
    puStack_c8 = puVar13;
    puStack_c0 = puVar18;
    func_0x000107c61170(puVar19);
    puVar19 = puVar16;
    func_0x000107c3e19c();
    func_0x000107c61180();
    puVar18 = puVar19;
    func_0x000107c5faec();
    puStack_e0 = puVar13;
    puStack_d0 = puVar18;
    func_0x000107c61170(puVar19);
    puVar19 = puVar16;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (puVar19 == (undefined1 *)0x0) {
      func_0x000107c5ede0();
      puVar18 = (undefined1 *)0x1;
      (**(code **)(*(long *)(puVar19 + -8) + 0x38))(lVar14,1,1,puVar19);
    }
    else {
      func_0x000107c61174();
      puVar18 = puVar19;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      puVar12 = puVar18;
      func_0x000107c5faec();
      func_0x000107c61170(puVar18);
      puVar18 = puVar13;
      func_0x000107c5edd0(lVar14,puVar12);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar19);
      func_0x000107c6142c(puVar13);
    }
    puVar13 = puVar16;
    func_0x000107c3dab0();
    func_0x000107c61180();
    puVar19 = puVar18;
    if (puVar13 == (undefined1 *)0x0) {
LAB_1036ff008:
      puVar12 = (undefined1 *)0x0;
      puVar18 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar12 = puVar13;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar19 = puVar18;
      if (puVar12 == (undefined1 *)0x0) goto LAB_1036ff008;
      puVar13 = puVar12;
      func_0x000107c4a8c4(puVar12);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = puVar13;
      func_0x000107c5ee30(puVar13);
      puVar19 = puVar18;
      func_0x000107c61170(puVar13);
    }
    puVar13 = puVar16;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (puVar13 == (undefined1 *)0x0) {
LAB_1036ff080:
      puVar11 = (undefined1 *)0x0;
LAB_1036ff084:
      puVar19 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar11 = puVar13;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      if (puVar11 == (undefined1 *)0x0) goto LAB_1036ff084;
      puVar13 = puVar11;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      if (puVar13 == (undefined1 *)0x0) goto LAB_1036ff080;
      puVar11 = puVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar13);
    }
    uVar6 = uStack_d8;
    func_0x000107c610f8(uStack_d8);
    *(undefined4 *)(lVar10 + -0x10) = 0;
    *(undefined1 **)(lVar10 + -0x20) = puVar11;
    *(undefined1 **)(lVar10 + -0x18) = puVar19;
    puVar13 = puStack_b8;
    func_0x0001043b1198(uVar6,puStack_b8,puStack_c0,puStack_c8,puStack_d0,puStack_e0,lVar14,puVar12,
                        puVar18);
    func_0x000107c61170(puVar16);
  }
  puVar16 = puStack_b0;
  func_0x0001043ade18(0);
  func_0x000107c610f8();
  puVar19 = puVar13;
  func_0x000107c61174(puVar13);
  func_0x000107c61174(puVar3);
  uVar6 = 0;
  func_0x0001043ad274(0,puVar3,puVar13);
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112f8a608);
  lVar14 = *(long *)(puVar2 + _DAT_112f8a5d8);
  func_0x000107c61174(uVar7);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar14 == 0) {
    uVar17 = 0;
    uVar15 = 0xe000000000000000;
  }
  else {
    uVar17 = *(undefined8 *)(lVar14 + _DAT_112f8aba0);
    uVar15 = ((undefined8 *)(lVar14 + _DAT_112f8aba0))[1];
    func_0x000107c61434(uVar15);
    func_0x000107c61170(lVar14);
  }
  func_0x000107c5fadc(uVar17,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c61174();
  puVar18 = puVar16;
  func_0x000107c4f078();
  func_0x000107c61180();
  puVar13 = puVar16;
  while (puVar18 != (undefined1 *)0x0) {
    puVar12 = puVar18;
    func_0x000107c49aa0();
    if ((int)puVar12 != 0) {
      func_0x000107c61170(puVar18);
      break;
    }
    func_0x000107c61170(puVar13);
    puVar12 = puVar18;
    func_0x000107c4f078();
    func_0x000107c61180();
    puVar13 = puVar18;
    puVar18 = puVar12;
  }
  puVar8 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x000107c61170(puVar13);
  func_0x000107c4a274(param_3);
  *(undefined1 **)(lVar10 + -0x10) = puVar2;
  uVar15 = uVar7;
  func_0x000107c3ed6c(uVar7);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar8);
  uVar7 = *(undefined8 *)(puVar2 + _DAT_112f8a5f0);
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(puVar2);
  func_0x000107c4ab88(uVar7);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar3);
LAB_1036ff2ec:
  func_0x000107c61170(puVar19);
  return;
}



/* Entry: 1036ff320; end: 1036ff3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff320(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f8a5d8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4ffe8(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1036ff3ac; end: 1036ff3fb; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider onTrackSelected:] */

/* WARNING: Possible PIC construction at 0x0001036ff3e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ff3e8) */

void FUN_1036ff3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036fe8fc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036ff3fc; end: 1036ff447; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider onDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff3fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f8a5d8);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1036ff448; end: 1036ff457; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider didCompleteTopicViewerMusicScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f8a5f0),
             PTR_s_endLaunchTopicViewerMusicFeature_1125c2ca8);
  return;
}



/* Entry: 1036ff458; end: 1036ff4b7; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider init] */

void FUN_1036ff458(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerHeaderAccessoryButtonProvider"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff484);
  (*pcVar1)();
}



/* Entry: 1036ff4b8; end: 1036ff573; -[_TtC30MusicTopicViewerImplementation45MusicTopicViewerHeaderAccessoryButtonProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036ff524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ff528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff4b8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8a5d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f8a5e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8a5e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f8a5f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f8a5f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f8a600);
  return;
}



/* Entry: 1036ff574; end: 1036ff593;  */

void FUN_1036ff574(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5520);
  return;
}



/* Entry: 1036ff594; end: 1036ff5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff594(double param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x12;
  long lVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 auStack_100 [2];
  int aiStack_f0 [4];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined1 **)(unaff_x20 + 0x18);
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,*(undefined8 *)(unaff_x20 + 0x20));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar14 = (long)&puStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12;
  puVar17 = auStack_78;
  func_0x000107c61428(lVar10 + 0x10,puVar17,0,0);
  puVar2 = (undefined1 *)(lVar10 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined1 *)0x0) {
    return;
  }
  puVar15 = puVar5;
  func_0x000107c5cda4();
  func_0x000107c61180();
  puVar3 = puVar15;
  func_0x00010af28d38();
  func_0x000107c61170(puVar15);
  puVar15 = puVar2 + _DAT_112f8a600;
  func_0x000107c61618();
  puVar20 = puVar2;
  if (puVar15 != (undefined1 *)0x0) {
    lVar10 = *(long *)(puVar15 + _DAT_1130746f8);
    func_0x000107c61174();
    func_0x000107c61170(puVar15);
    lVar4 = *(long *)(lVar10 + _DAT_1130748b0);
    func_0x000107c61174();
    func_0x000107c61170(lVar10);
    puVar15 = *(undefined1 **)(lVar4 + _DAT_1130749c0);
    func_0x000107c61170(lVar4);
    lVar10 = _DAT_112f8a620;
    if (puVar3 == puVar15) {
      puVar5 = puVar2 + _DAT_112f8a620;
      func_0x000107c61618();
      func_0x000107c61604(puVar2 + lVar10,0);
      if (puVar5 != (undefined1 *)0x0) {
        puVar9 = &UNK_110686268;
        func_0x000107c613fc(&UNK_110686268,0x18,7);
        func_0x000107c61614(puVar9 + 0x10,puVar2);
        uStack_88 = 0x1036ff5bc;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1106862d0;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar9;
        func_0x000107c60bc4(ppuVar6);
        puVar9 = puStack_80;
        func_0x000107c61174(puVar5);
        func_0x000107c61574(puVar9);
        func_0x000107c420a8(puVar5);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c60bd0(ppuVar6);
        puVar20 = puVar5;
      }
      goto LAB_1036ff2ec;
    }
  }
  puVar15 = puVar2 + _DAT_112f8a620;
  func_0x000107c61618();
  if (puVar15 == (undefined1 *)0x0) goto LAB_1036ff2ec;
  puVar20 = puVar5;
  func_0x000107c5cab0();
  func_0x000107c61180();
  puVar19 = puVar20;
  func_0x000107c5faec();
  puStack_c0 = puVar17;
  puStack_b8 = puVar19;
  func_0x000107c61170(puVar20);
  puVar20 = puVar5;
  func_0x000107c3e1a4();
  func_0x000107c61180();
  puVar19 = puVar20;
  func_0x000107c5faec();
  puStack_d0 = puVar17;
  puStack_c8 = puVar19;
  func_0x000107c61170(puVar20);
  puVar20 = puVar5;
  func_0x000107c3dab0();
  func_0x000107c61180();
  if (puVar20 == (undefined1 *)0x0) {
    func_0x000107c5ede0();
    puVar19 = (undefined1 *)0x1;
    (**(code **)(*(long *)(puVar20 + -8) + 0x38))(lVar11,1,1,puVar20);
  }
  else {
    func_0x000107c61174();
    puVar19 = puVar20;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar13 = puVar19;
    func_0x000107c5faec();
    func_0x000107c61170(puVar19);
    puVar19 = puVar17;
    func_0x000107c5edd0(lVar11,puVar13);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puVar20);
    func_0x000107c6142c(puVar17);
  }
  puVar17 = puVar5;
  func_0x000107c3dab0();
  func_0x000107c61180();
  puVar20 = puVar19;
  if (puVar17 == (undefined1 *)0x0) {
LAB_1036fed7c:
    puVar17 = (undefined1 *)0x0;
    puVar19 = (undefined1 *)0xf000000000000000;
  }
  else {
    puVar13 = puVar17;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    puVar20 = puVar19;
    if (puVar13 == (undefined1 *)0x0) goto LAB_1036fed7c;
    puVar12 = puVar13;
    func_0x000107c4a8c4(puVar13);
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    puVar17 = puVar12;
    func_0x000107c5ee30(puVar12);
    puVar20 = puVar19;
    func_0x000107c61170(puVar12);
  }
  puVar13 = puVar5;
  func_0x000107c3dab0();
  func_0x000107c61180();
  puStack_b0 = puVar15;
  if (puVar13 == (undefined1 *)0x0) {
LAB_1036fedf8:
    puVar15 = (undefined1 *)0x0;
LAB_1036fedfc:
    puVar20 = (undefined1 *)0xf000000000000000;
  }
  else {
    puVar15 = puVar13;
    func_0x000107c427c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    if (puVar15 == (undefined1 *)0x0) goto LAB_1036fedfc;
    puVar13 = puVar15;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    if (puVar13 == (undefined1 *)0x0) goto LAB_1036fedf8;
    puVar15 = puVar13;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar13);
  }
  func_0x000107c4161c(puVar5);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff318);
    (*pcVar1)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff31c);
    (*pcVar1)();
  }
  if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff320);
    (*pcVar1)();
  }
  uVar7 = 0;
  func_0x0001043b1a4c();
  uStack_d8 = uVar7;
  func_0x000107c610f8();
  *(int *)(lVar11 + -0x10) = (int)param_1;
  *(undefined1 **)(lVar11 + -0x20) = puVar15;
  *(undefined1 **)(lVar11 + -0x18) = puVar20;
  puVar15 = puStack_b8;
  func_0x0001043b1198(uVar7,puVar3,puStack_b8,puStack_c0,puStack_c8,puStack_d0,lVar11,puVar17,
                      puVar19);
  puVar17 = puVar5;
  func_0x000107c4fd3c();
  func_0x000107c61180();
  if (puVar17 == (undefined1 *)0x0) {
    puVar15 = (undefined1 *)0x0;
  }
  else {
    puVar20 = puVar17;
    func_0x000107c5cda4();
    func_0x000107c61180();
    puVar19 = puVar20;
    func_0x00010af28d38();
    puStack_b8 = puVar19;
    func_0x000107c61170(puVar20);
    puVar20 = puVar17;
    func_0x000107c5cab0();
    func_0x000107c61180();
    puVar19 = puVar20;
    func_0x000107c5faec();
    puStack_c8 = puVar15;
    puStack_c0 = puVar19;
    func_0x000107c61170(puVar20);
    puVar20 = puVar17;
    func_0x000107c3e19c();
    func_0x000107c61180();
    puVar19 = puVar20;
    func_0x000107c5faec();
    puStack_e0 = puVar15;
    puStack_d0 = puVar19;
    func_0x000107c61170(puVar20);
    puVar20 = puVar17;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (puVar20 == (undefined1 *)0x0) {
      func_0x000107c5ede0();
      puVar19 = (undefined1 *)0x1;
      (**(code **)(*(long *)(puVar20 + -8) + 0x38))(lVar14,1,1,puVar20);
    }
    else {
      func_0x000107c61174();
      puVar19 = puVar20;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      puVar13 = puVar19;
      func_0x000107c5faec();
      func_0x000107c61170(puVar19);
      puVar19 = puVar15;
      func_0x000107c5edd0(lVar14,puVar13);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar20);
      func_0x000107c6142c(puVar15);
    }
    puVar15 = puVar17;
    func_0x000107c3dab0();
    func_0x000107c61180();
    puVar20 = puVar19;
    if (puVar15 == (undefined1 *)0x0) {
LAB_1036ff008:
      puVar13 = (undefined1 *)0x0;
      puVar19 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar13 = puVar15;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      puVar20 = puVar19;
      if (puVar13 == (undefined1 *)0x0) goto LAB_1036ff008;
      puVar15 = puVar13;
      func_0x000107c4a8c4(puVar13);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar13 = puVar15;
      func_0x000107c5ee30(puVar15);
      puVar20 = puVar19;
      func_0x000107c61170(puVar15);
    }
    puVar15 = puVar17;
    func_0x000107c3dab0();
    func_0x000107c61180();
    if (puVar15 == (undefined1 *)0x0) {
LAB_1036ff080:
      puVar12 = (undefined1 *)0x0;
LAB_1036ff084:
      puVar20 = (undefined1 *)0xf000000000000000;
    }
    else {
      puVar12 = puVar15;
      func_0x000107c427c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      if (puVar12 == (undefined1 *)0x0) goto LAB_1036ff084;
      puVar15 = puVar12;
      func_0x000107c4a804();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      if (puVar15 == (undefined1 *)0x0) goto LAB_1036ff080;
      puVar12 = puVar15;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar15);
    }
    uVar7 = uStack_d8;
    func_0x000107c610f8(uStack_d8);
    *(undefined4 *)(lVar11 + -0x10) = 0;
    *(undefined1 **)(lVar11 + -0x20) = puVar12;
    *(undefined1 **)(lVar11 + -0x18) = puVar20;
    puVar15 = puStack_b8;
    func_0x0001043b1198(uVar7,puStack_b8,puStack_c0,puStack_c8,puStack_d0,puStack_e0,lVar14,puVar13,
                        puVar19);
    func_0x000107c61170(puVar17);
  }
  puVar17 = puStack_b0;
  func_0x0001043ade18(0);
  func_0x000107c610f8();
  puVar20 = puVar15;
  func_0x000107c61174(puVar15);
  func_0x000107c61174(puVar3);
  uVar7 = 0;
  func_0x0001043ad274(0,puVar3,puVar15);
  uVar8 = *(undefined8 *)(puVar2 + _DAT_112f8a608);
  lVar10 = *(long *)(puVar2 + _DAT_112f8a5d8);
  func_0x000107c61174(uVar8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar10 == 0) {
    uVar18 = 0;
    uVar16 = 0xe000000000000000;
  }
  else {
    uVar18 = *(undefined8 *)(lVar10 + _DAT_112f8aba0);
    uVar16 = ((undefined8 *)(lVar10 + _DAT_112f8aba0))[1];
    func_0x000107c61434(uVar16);
    func_0x000107c61170(lVar10);
  }
  func_0x000107c5fadc(uVar18,uVar16);
  func_0x000107c6142c(uVar16);
  func_0x000107c61174();
  puVar19 = puVar17;
  func_0x000107c4f078();
  func_0x000107c61180();
  puVar15 = puVar17;
  while (puVar19 != (undefined1 *)0x0) {
    puVar13 = puVar19;
    func_0x000107c49aa0();
    if ((int)puVar13 != 0) {
      func_0x000107c61170(puVar19);
      break;
    }
    func_0x000107c61170(puVar15);
    puVar13 = puVar19;
    func_0x000107c4f078();
    func_0x000107c61180();
    puVar15 = puVar19;
    puVar19 = puVar13;
  }
  puVar9 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x000107c61170(puVar15);
  func_0x000107c4a274(puVar5);
  *(undefined1 **)(lVar11 + -0x10) = puVar2;
  uVar16 = uVar8;
  func_0x000107c3ed6c(uVar8);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(puVar9);
  uVar8 = *(undefined8 *)(puVar2 + _DAT_112f8a5f0);
  func_0x000107c615f0(uVar8);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(puVar2);
  func_0x000107c4ab88(uVar8);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(puVar3);
LAB_1036ff2ec:
  func_0x000107c61170(puVar20);
  return;
}



/* Entry: 1036ff5fc; end: 1036ff7b7;  */

undefined * FUN_1036ff5fc(double param_1,double param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afa8(param_2);
  func_0x000107c61180();
  puVar7 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(param_1,param_1);
    puVar4 = &UNK_110686358;
    func_0x000107c613fc(&UNK_110686358,0x40,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 0;
    *(double *)(puVar4 + 0x20) = param_1;
    *(double *)(puVar4 + 0x28) = param_1;
    *(undefined **)(puVar4 + 0x30) = puVar2;
    *(double *)(puVar4 + 0x38) = (param_1 - param_2) * 0.5;
    puVar5 = &UNK_110686380;
    func_0x000107c613fc(&UNK_110686380,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1036ff7b8;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_70 = FUN_1036ff7cc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f9148c;
    puStack_78 = &UNK_110686398;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(puVar2);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    puVar7 = puVar3;
    func_0x000107c45138(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    puVar2 = puVar5;
    func_0x000107c61544(puVar5,"",0x84,0x97,0x41,1);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff7b8);
      (*pcVar1)();
    }
  }
  return puVar7;
}



/* Entry: 1036ff7b8; end: 1036ff7cb;  */

void FUN_1036ff7b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c608ec(uVar3,uVar4,uVar5,uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c609d0(uVar3,uVar4,uVar5,uVar6,uVar7,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 1036ff7cc; end: 1036ff7eb;  */

void FUN_1036ff7cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036ff7ec; end: 1036ff803;  */

void FUN_1036ff7ec(long param_1,long param_2)

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



/* Entry: 1036ff804; end: 1036ff863; -[_TtC30MusicTopicViewerImplementation34MusicTopicViewerCTAProviderService init] */

void FUN_1036ff804(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerCTAProviderService",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff830);
  (*pcVar1)();
}



/* Entry: 1036ff864; end: 1036ff873; -[_TtC30MusicTopicViewerImplementation34MusicTopicViewerCTAProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a650));
  return;
}



/* Entry: 1036ff874; end: 1036ff893;  */

void FUN_1036ff874(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5628);
  return;
}



/* Entry: 1036ff894; end: 1036ff8f3; -[_TtC30MusicTopicViewerImplementation38MusicTopicViewerCameraPresenterService init] */

void FUN_1036ff894(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerCameraPresenterService",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff8c0);
  (*pcVar1)();
}



/* Entry: 1036ff8f4; end: 1036ff903; -[_TtC30MusicTopicViewerImplementation38MusicTopicViewerCameraPresenterService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a680));
  return;
}



/* Entry: 1036ff904; end: 1036ff923;  */

void FUN_1036ff904(void)

{
  func_0x000107c61168(&PTR_PTR_1128e56e8);
  return;
}



/* Entry: 1036ff924; end: 1036ff983; -[_TtC30MusicTopicViewerImplementation29MusicTopicViewerEventServices init] */

void FUN_1036ff924(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerEventServices",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff950);
  (*pcVar1)();
}



/* Entry: 1036ff984; end: 1036ff993; -[_TtC30MusicTopicViewerImplementation29MusicTopicViewerEventServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ff984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a6b0));
  return;
}



/* Entry: 1036ff994; end: 1036ff9b3;  */

void FUN_1036ff994(void)

{
  func_0x000107c61168(&PTR_PTR_1128e57a8);
  return;
}



/* Entry: 1036ff9b4; end: 1036ffa13; -[_TtC30MusicTopicViewerImplementation37MusicTopicViewerHeaderProviderService init] */

void FUN_1036ff9b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerHeaderProviderService",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ff9e0);
  (*pcVar1)();
}



/* Entry: 1036ffa14; end: 1036ffa23; -[_TtC30MusicTopicViewerImplementation37MusicTopicViewerHeaderProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ffa14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a6e0));
  return;
}



/* Entry: 1036ffa24; end: 1036ffa43;  */

void FUN_1036ffa24(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5868);
  return;
}



/* Entry: 1036ffa44; end: 1036ffaa3; -[_TtC30MusicTopicViewerImplementation37MusicTopicViewerLoggingContextService init] */

void FUN_1036ffa44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.MusicTopicViewerLoggingContextService",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036ffa70);
  (*pcVar1)();
}



/* Entry: 1036ffaa4; end: 1036ffab3; -[_TtC30MusicTopicViewerImplementation37MusicTopicViewerLoggingContextService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ffaa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f8a710));
  return;
}



/* Entry: 1036ffab4; end: 1036ffad3;  */

void FUN_1036ffab4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e5928);
  return;
}



/* Entry: 1036ffad4; end: 1036ffb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ffad4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f8a750;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f8a750) != 0) {
    func_0x000107c41848();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c615e8(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036ffb3c; end: 1036ffb5f; -[_TtC30MusicTopicViewerImplementation31SoundShareSendToPreviewProvider dealloc] */

void FUN_1036ffb3c(void)

{
  func_0x000107c61174();
  FUN_1036ffad4();
  return;
}



/* Entry: 1036ffb60; end: 1036ffba7; -[_TtC30MusicTopicViewerImplementation31SoundShareSendToPreviewProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ffb60(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f8a740);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f8a748));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f8a750));
  return;
}



/* Entry: 1036ffba8; end: 1036ffe7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036ffba8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  long unaff_x20;
  
  lVar2 = _DAT_112f8a750;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f8a750) != 0) {
    func_0x000107c41848();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c615e8(uVar3);
  if (param_1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f8a748);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar4 != 0) {
        puVar6 = PTR___ss6UInt64VN_11034f048;
        puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        func_0x0001036fffe8(0);
        func_0x000107c614e8();
        puVar7 = PTR_PTR_1126ab6b8;
        func_0x000107c610f8(PTR_PTR_1126ab6b8);
        puVar8 = puVar6;
        func_0x000107c5fadc(puVar6,puVar11);
        func_0x000107c48e14(puVar7);
        func_0x000107c61170(puVar8);
        lVar5 = unaff_x20 + _DAT_112f8a740;
        uVar3 = *(undefined8 *)(lVar5 + 0x18);
        lVar1 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar3);
        (**(code **)(lVar1 + 0x10))(puVar6,puVar11,uVar3,lVar1);
        func_0x000107c6142c(puVar11);
        lVar5 = lVar4;
        func_0x000107c40994();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
          *(long *)(unaff_x20 + lVar2) = lVar5;
          func_0x000107c615f4(lVar5,2);
          func_0x000107c615e8(uVar3);
          puVar6 = &UNK_1106863d0;
          func_0x000107c613fc(&UNK_1106863d0,0x18,7);
          func_0x000107c61614(puVar6 + 0x10,lVar5);
          func_0x000107c615e8(lVar5);
          uVar3 = 0x112d67258;
          func_0x0001000285a8(0x112d67258,&UNK_10d92b770);
          func_0x000107c613fc();
          pcVar9 = FUN_10370002c;
          func_0x0001000bdd8c(FUN_10370002c,puVar6,uVar3);
          pcVar10 = pcVar9;
          func_0x0001003a5b88();
          func_0x000107c61574(pcVar9);
          puVar6 = PTR_PTR_1126b07e8;
          func_0x000107c610f8(PTR_PTR_1126b07e8);
          func_0x000107c494fc();
          puVar7 = PTR_PTR_1126b07f0;
          func_0x000107c61168(PTR_PTR_1126b07f0);
          func_0x000107c43b84();
          func_0x000107c61180();
          puVar8 = PTR_PTR_1126b07f8;
          func_0x000107c610f8(PTR_PTR_1126b07f8);
          func_0x000107c46ea0();
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(pcVar10);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(puVar7);
          return puVar8;
        }
        func_0x000107c615e8(lVar4);
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1036ffe80; end: 1036ffefb;  */

void FUN_1036ffe80(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126b1870;
  func_0x000107c610f8();
  func_0x000107c49624();
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c57f14();
    func_0x000107c615e8(param_2);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1036ffefc; end: 1036fff37; -[_TtC30MusicTopicViewerImplementation31SoundShareSendToPreviewProvider makePreviewConfigurationForTrackId:] */

void FUN_1036ffefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1036ffba8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1036fff38; end: 1036fff9b; -[_TtC30MusicTopicViewerImplementation31SoundShareSendToPreviewProvider cleanUpPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036fff38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f8a750;
  lVar2 = *(long *)(param_1 + _DAT_112f8a750);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
    uVar3 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c41848(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 1036fff9c; end: 10370002b; -[_TtC30MusicTopicViewerImplementation31SoundShareSendToPreviewProvider init] */

void FUN_1036fff9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicTopicViewerImplementation.SoundShareSendToPreviewProvider",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036fffc8);
  (*pcVar1)();
}



/* Entry: 10370002c; end: 103700033;  */

void FUN_10370002c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_PTR_1126b1870;
  func_0x000107c610f8();
  func_0x000107c49624();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c57f14();
    func_0x000107c615e8(lVar2);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 103700034; end: 10370003f; -[SCMusicTopicViewerServicesProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700034(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a780;
  func_0x000107c61428(param_1 + _DAT_112f8a780,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700040; end: 10370004b; -[SCMusicTopicViewerServicesProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a780;
  func_0x000107c61428(param_1 + _DAT_112f8a780,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10370004c; end: 103700057; -[SCMusicTopicViewerServicesProvider cameraPresenterService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370004c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a788;
  func_0x000107c61428(param_1 + _DAT_112f8a788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700058; end: 103700063; -[SCMusicTopicViewerServicesProvider setCameraPresenterService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a788;
  func_0x000107c61428(param_1 + _DAT_112f8a788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103700064; end: 10370006f; -[SCMusicTopicViewerServicesProvider ctaProviderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700064(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a790;
  func_0x000107c61428(param_1 + _DAT_112f8a790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700070; end: 10370007b; -[SCMusicTopicViewerServicesProvider setCtaProviderService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a790;
  func_0x000107c61428(param_1 + _DAT_112f8a790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10370007c; end: 103700087; -[SCMusicTopicViewerServicesProvider eventServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370007c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a798;
  func_0x000107c61428(param_1 + _DAT_112f8a798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700088; end: 103700093; -[SCMusicTopicViewerServicesProvider setEventServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700088(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a798;
  func_0x000107c61428(param_1 + _DAT_112f8a798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103700094; end: 10370009f; -[SCMusicTopicViewerServicesProvider headerProviderService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700094(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7a0;
  func_0x000107c61428(param_1 + _DAT_112f8a7a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037000a0; end: 1037000ab; -[SCMusicTopicViewerServicesProvider setHeaderProviderService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7a0;
  func_0x000107c61428(param_1 + _DAT_112f8a7a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037000ac; end: 1037000b7; -[SCMusicTopicViewerServicesProvider loggingContextService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7a8;
  func_0x000107c61428(param_1 + _DAT_112f8a7a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037000b8; end: 1037000c3; -[SCMusicTopicViewerServicesProvider setLoggingContextService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7a8;
  func_0x000107c61428(param_1 + _DAT_112f8a7a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037000c4; end: 1037000cf; -[SCMusicTopicViewerServicesProvider musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7b0;
  func_0x000107c61428(param_1 + _DAT_112f8a7b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037000d0; end: 1037000db; -[SCMusicTopicViewerServicesProvider setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7b0;
  func_0x000107c61428(param_1 + _DAT_112f8a7b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037000dc; end: 1037000e7; -[SCMusicTopicViewerServicesProvider musicFeatureLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7b8;
  func_0x000107c61428(param_1 + _DAT_112f8a7b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037000e8; end: 1037000f3; -[SCMusicTopicViewerServicesProvider setMusicFeatureLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7b8;
  func_0x000107c61428(param_1 + _DAT_112f8a7b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037000f4; end: 1037000ff; -[SCMusicTopicViewerServicesProvider soundShareCardContextServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037000f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7c0;
  func_0x000107c61428(param_1 + _DAT_112f8a7c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700100; end: 10370010b; -[SCMusicTopicViewerServicesProvider setSoundShareCardContextServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7c0;
  func_0x000107c61428(param_1 + _DAT_112f8a7c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10370010c; end: 103700117; -[SCMusicTopicViewerServicesProvider composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370010c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7c8;
  func_0x000107c61428(param_1 + _DAT_112f8a7c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700118; end: 103700123; -[SCMusicTopicViewerServicesProvider setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7c8;
  func_0x000107c61428(param_1 + _DAT_112f8a7c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103700124; end: 10370012f; -[SCMusicTopicViewerServicesProvider topicViewerMusicScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7d0;
  func_0x000107c61428(param_1 + _DAT_112f8a7d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103700130; end: 103700173;  */

void FUN_103700130(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103700174; end: 10370017f; -[SCMusicTopicViewerServicesProvider setTopicViewerMusicScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103700174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7d0;
  func_0x000107c61428(param_1 + _DAT_112f8a7d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103700180; end: 1037001d3;  */

void FUN_103700180(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037001d4; end: 10370021b; -[SCMusicTopicViewerServicesProvider soundReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037001d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f8a7d8;
  func_0x000107c61428(param_1 + _DAT_112f8a7d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10370021c; end: 103700227; -[SCMusicTopicViewerServicesProvider setSoundReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10370021c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f8a7d8;
  func_0x000107c61428(param_1 + _DAT_112f8a7d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


