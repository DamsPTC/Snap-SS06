/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009abf48; end: 1009abf6b;  */

void FUN_1009abf48(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009abf6c; end: 1009abf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009abf6c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1002199a8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113040b18) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113040b20) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009abf74; end: 1009abff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009abf74(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002199a8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113040b18) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113040b20) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009abff8; end: 1009abffb;  */

void FUN_1009abff8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009abffc; end: 1009ac027;  */

void FUN_1009abffc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ac028; end: 1009ac04f;  */

void FUN_1009ac028(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ac050; end: 1009ac0cf;  */

void FUN_1009ac050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11072ef40;
  func_0x000107c613fc(&UNK_11072ef40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ac0d0,puVar1);
  return;
}



/* Entry: 1009ac0d0; end: 1009ac0d7;  */

void FUN_1009ac0d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113041550,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113041550,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072efd8;
  func_0x000107c613fc(&UNK_11072efd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fd2bd4;
  FUN_10058fa64(&UNK_103fd2bd4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ac0d8; end: 1009ac1cf;  */

void FUN_1009ac0d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113041550,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113041550,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11072efd8;
  func_0x000107c613fc(&UNK_11072efd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fd2bd4;
  FUN_10058fa64(&UNK_103fd2bd4,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ac1d0; end: 1009ac1f3;  */

void FUN_1009ac1d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ac1f4; end: 1009ac36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ac1f4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_10023f184();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113041560) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113041568) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113041570) = param_4;
  *(undefined8 *)(lVar3 + _DAT_113041578) = param_5;
  *(undefined8 *)(lVar3 + _DAT_113041580) = param_6;
  *(undefined8 *)(lVar3 + _DAT_113041588) = param_7;
  *(undefined8 *)(lVar3 + _DAT_113041590) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113041598) = param_9;
  *(undefined8 *)(lVar3 + _DAT_1130415a0) = param_10;
  *(undefined8 *)(lVar3 + _DAT_1130415a8) = param_11;
  *(undefined8 *)(lVar3 + _DAT_1130415b0) = param_12;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009ac370; end: 1009ac44b;  */

void FUN_1009ac370(void)

{
  long unaff_x20;
  
  FUN_1009ac1f4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1009ac44c; end: 1009ac46f;  */

undefined ** FUN_1009ac44c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ac470; end: 1009ac4ef;  */

void FUN_1009ac470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107306c0;
  func_0x000107c613fc(&UNK_1107306c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ac4f0,puVar1);
  return;
}



/* Entry: 1009ac4f0; end: 1009ac4f7;  */

void FUN_1009ac4f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130432b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130432b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110730758;
  func_0x000107c613fc(&UNK_110730758,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fe0970;
  FUN_10058fa64(&UNK_103fe0970,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ac4f8; end: 1009ac5ef;  */

void FUN_1009ac4f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x1130432b8,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x1130432b8,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110730758;
  func_0x000107c613fc(&UNK_110730758,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103fe0970;
  FUN_10058fa64(&UNK_103fe0970,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ac5f0; end: 1009ac613;  */

void FUN_1009ac5f0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ac614; end: 1009ac7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ac614(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_10023d8fc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130432c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130432d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130432d8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_1130432e0) = param_5;
  *(undefined8 *)(lVar3 + _DAT_1130432e8) = param_6;
  *(undefined8 *)(lVar3 + _DAT_1130432f0) = param_7;
  *(undefined8 *)(lVar3 + _DAT_1130432f8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_113043300) = param_9;
  *(undefined8 *)(lVar3 + _DAT_113043308) = param_10;
  *(undefined8 *)(lVar3 + _DAT_113043310) = param_11;
  *(undefined8 *)(lVar3 + _DAT_113043318) = param_12;
  *(undefined8 *)(lVar3 + _DAT_113043320) = param_13;
  *(undefined8 *)(lVar3 + _DAT_113043328) = param_14;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1009ac7cc; end: 1009ac8b7;  */

void FUN_1009ac7cc(void)

{
  long unaff_x20;
  
  FUN_1009ac614(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1009ac8b8; end: 1009ac8db;  */

undefined ** FUN_1009ac8b8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ac8dc; end: 1009ac95b;  */

void FUN_1009ac8dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1107315f8;
  func_0x000107c613fc(&UNK_1107315f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009ac95c,puVar1);
  return;
}



/* Entry: 1009ac95c; end: 1009ac963;  */

void FUN_1009ac95c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113044210,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113044210,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110731690;
  func_0x000107c613fc(&UNK_110731690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103feb588;
  FUN_10058fa64(&UNK_103feb588,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009ac964; end: 1009aca5b;  */

void FUN_1009ac964(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113044210,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113044210,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110731690;
  func_0x000107c613fc(&UNK_110731690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103feb588;
  FUN_10058fa64(&UNK_103feb588,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009aca5c; end: 1009aca7f;  */

void FUN_1009aca5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009aca80; end: 1009aca8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009aca80(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_100239778();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113044220) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_113044228) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_113044230) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1009aca8c; end: 1009acb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009aca8c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_100239778();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113044220) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113044228) = param_3;
  *(undefined8 *)(lVar3 + _DAT_113044230) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009acb30; end: 1009acb8f;  */

void FUN_1009acb30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009acb90; end: 1009acbb3;  */

undefined ** FUN_1009acb90(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009acbb4; end: 1009acc33;  */

void FUN_1009acbb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110731880;
  func_0x000107c613fc(&UNK_110731880,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009acc34,puVar1);
  return;
}



/* Entry: 1009acc34; end: 1009acc3b;  */

void FUN_1009acc34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113044510,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113044510,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110731918;
  func_0x000107c613fc(&UNK_110731918,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103febe88;
  FUN_10058fa64(&UNK_103febe88,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009acc3c; end: 1009acd33;  */

void FUN_1009acc3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x113044510,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113044510,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110731918;
  func_0x000107c613fc(&UNK_110731918,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103febe88;
  FUN_10058fa64(&UNK_103febe88,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1009acd34; end: 1009acd57;  */

void FUN_1009acd34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009acd58; end: 1009acd5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009acd58(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1001f5cac();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_113044520) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1009acd60; end: 1009acdcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009acd60(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1001f5cac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_113044520) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1009acdcc; end: 1009acdf7;  */

void FUN_1009acdcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009acdf8; end: 1009ace03;  */

undefined ** FUN_1009acdf8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ace04; end: 1009ace8f;  */

void FUN_1009ace04(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009ace90,param_1);
  return;
}



/* Entry: 1009ace90; end: 1009ace97;  */

void FUN_1009ace90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1009acf5c();
  FUN_1009acf7c();
  uVar2 = uVar1;
  FUN_1009acfd0();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_101a78028);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ace98; end: 1009acf5b;  */

void FUN_1009ace98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1009acf5c();
  FUN_1009acf7c();
  uVar2 = uVar1;
  FUN_1009acfd0();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_101a78028,param_2,&UNK_101a7802c,param_2,&UNK_101a78054,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009acf5c; end: 1009acf7b;  */

void FUN_1009acf5c(void)

{
  func_0x000107c61168(&PTR_PTR_1129e2c20);
  return;
}



/* Entry: 1009acf7c; end: 1009acf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009acf7c(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309baf0) = 0xc;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009acf84; end: 1009acfcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009acf84(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309baf0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009acfd0; end: 1009acfd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009acfd0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x1a;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(long *)(lVar3 + _DAT_11309ad30) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1009acfd4; end: 1009ad007; -[SCMappedCdnClientConfig .cxx_destruct] */

void FUN_1009acfd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1009ad008; end: 1009ad047;  */

void FUN_1009ad008(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009acfec();
  FUN_100082720("SCActivityCenterDynamicServiceProviderWrapperScopeInitializationPluginProvider",
                0x4e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad048; end: 1009ad04f;  */

void FUN_1009ad048(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101772548);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad050; end: 1009ad0d3;  */

void FUN_1009ad050(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101772548,param_2,&UNK_10177254c,param_2,&UNK_101772574,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad0d4; end: 1009ad0fb;  */

undefined ** FUN_1009ad0d4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad0fc; end: 1009ad13b;  */

void FUN_1009ad0fc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad0e0();
  FUN_100082720("SCAdOperationalLoggingServicesEntryPointWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad13c; end: 1009ad143;  */

void FUN_1009ad13c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177e538);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad144; end: 1009ad1c7;  */

void FUN_1009ad144(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177e538,param_2,&UNK_10177e53c,param_2,&UNK_10177e564,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad1c8; end: 1009ad1ef;  */

undefined ** FUN_1009ad1c8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad1f0; end: 1009ad22f;  */

void FUN_1009ad1f0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad1d4();
  FUN_100082720("SCAdTrackEventRepositoryServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad230; end: 1009ad237;  */

void FUN_1009ad230(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177ec74);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad238; end: 1009ad2bb;  */

void FUN_1009ad238(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177ec74,param_2,&UNK_10177ec78,param_2,&UNK_10177eca0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad2bc; end: 1009ad2e3;  */

undefined ** FUN_1009ad2bc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad2e4; end: 1009ad323;  */

void FUN_1009ad2e4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad2c8();
  FUN_100082720("SCAdUnlockableTrackingServiceProviderWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad324; end: 1009ad32b;  */

void FUN_1009ad324(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177f78c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad32c; end: 1009ad3af;  */

void FUN_1009ad32c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177f78c,param_2,&UNK_10177f790,param_2,&UNK_10177f7b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad3b0; end: 1009ad3d7;  */

undefined ** FUN_1009ad3b0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad3d8; end: 1009ad417;  */

void FUN_1009ad3d8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad3bc();
  FUN_100082720("SCAdWebviewMetricsValidationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x53,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad418; end: 1009ad41f;  */

void FUN_1009ad418(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177fd44);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad420; end: 1009ad4a3;  */

void FUN_1009ad420(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177fd44,param_2,&UNK_10177fd48,param_2,&UNK_10177fd70,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad4a4; end: 1009ad4df; -[SCMappedRoutingDefinition .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001009ad4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009ad4c0) */

void FUN_1009ad4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1009ad4e0; end: 1009ad507;  */

undefined ** FUN_1009ad4e0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad508; end: 1009ad547;  */

void FUN_1009ad508(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad4ec();
  FUN_100082720("SCAdaptiveContentFetchingServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad548; end: 1009ad54f;  */

void FUN_1009ad548(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101961098);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad550; end: 1009ad5d3;  */

void FUN_1009ad550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101961098,param_2,&UNK_10196109c,param_2,&UNK_1019610c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad5d4; end: 1009ad5fb;  */

undefined ** FUN_1009ad5d4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad5fc; end: 1009ad63b;  */

void FUN_1009ad5fc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad5e0();
  FUN_100082720("SCAddFriendsInviteServiceProviderWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad63c; end: 1009ad643;  */

void FUN_1009ad63c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101982570);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad644; end: 1009ad6c7;  */

void FUN_1009ad644(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101982570,param_2,&UNK_101982574,param_2,&UNK_10198259c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad6c8; end: 1009ad6ef;  */

undefined ** FUN_1009ad6c8(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad6f0; end: 1009ad72f;  */

void FUN_1009ad6f0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad6d4();
  FUN_100082720("SCAdsCanOpenURLServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad730; end: 1009ad737;  */

void FUN_1009ad730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177fe88);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad738; end: 1009ad7bb;  */

void FUN_1009ad738(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177fe88,param_2,&UNK_10177fe8c,param_2,&UNK_10177feb4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad7bc; end: 1009ad7e3;  */

undefined ** FUN_1009ad7bc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad7e4; end: 1009ad823;  */

void FUN_1009ad7e4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad7c8();
  FUN_100082720("SCAdsInteractionServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad824; end: 1009ad82b;  */

void FUN_1009ad824(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017803ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad82c; end: 1009ad8af;  */

void FUN_1009ad82c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1017803ac,param_2,&UNK_1017803b0,param_2,&UNK_1017803d8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad8b0; end: 1009ad8d7;  */

undefined ** FUN_1009ad8b0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad8d8; end: 1009ad917;  */

void FUN_1009ad8d8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ad8bc();
  FUN_100082720("SCAltitudeStickerInjectorServiceProviderWrapperScopeInitializationPluginProvider",
                0x50,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ad918; end: 1009ad91f;  */

void FUN_1009ad918(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019779d4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad920; end: 1009ad9a3;  */

void FUN_1009ad920(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1019779d4,param_2,&UNK_1019779d8,param_2,&UNK_101977a00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ad9a4; end: 1009ad9af;  */

undefined ** FUN_1009ad9a4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ad9b0; end: 1009ada3b;  */

void FUN_1009ad9b0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009ada3c,param_1);
  return;
}



/* Entry: 1009ada3c; end: 1009ada43;  */

void FUN_1009ada3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a6b5ac);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ada44; end: 1009adac7;  */

void FUN_1009ada44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101a6b5ac,param_2,FUN_1009adac8,param_2,&UNK_101a6b5b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009adac8; end: 1009adaef;  */

void FUN_1009adac8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009adaf0; end: 1009adaff;  */

void FUN_1009adaf0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020e3ac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8660;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcd530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 1009adb00; end: 1009ade17;  */

void FUN_1009adb00(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10020e3ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8660;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efcd530);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1009ade18; end: 1009adf5b; -[SCAppBadFrameServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001009adefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009adf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009adf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009adf2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009adf20) */
/* WARNING: Removing unreachable block (ram,0x0001009adf10) */
/* WARNING: Removing unreachable block (ram,0x0001009adf00) */
/* WARNING: Removing unreachable block (ram,0x0001009adf30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009ade18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bcb40;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_112727620;
  func_0x000107c61148();
  func_0x000107c3e610();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112727624;
  func_0x000107c61148(lVar3);
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar4 = param_1 + _DAT_112727628;
  func_0x000107c61148(lVar4);
  func_0x000107c40fb0();
  func_0x000107c61180();
  lVar5 = param_1 + _DAT_11272762c;
  func_0x000107c61148(lVar5);
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c458fc(puVar1,param_2,lVar2,lVar3,lVar4,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112727630);
  *(undefined **)(param_1 + _DAT_112727630) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1009adf5c; end: 1009adf7b; -[_TtC26SCFrameRateMonitorServices26SCFrameRateMonitorServices badFrameRateStatsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009adf5c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11307cca0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1009adf7c; end: 1009ae1e7; -[SCSwipePerformanceMonitor initWithBadFrameRateStatsTracker:circumstanceEngine:currentPageTracker:logger:] */

undefined8 *
FUN_1009adf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1126e9938;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x000107c5ac60();
    if ((int)puVar2 != 0) {
      func_0x000107c61174(param_3);
      uVar3 = puVar1[5];
      puVar1[5] = param_3;
      func_0x000107c61170(uVar3);
      func_0x000107c61174(param_4);
      uVar3 = puVar1[6];
      puVar1[6] = param_4;
      func_0x000107c61170(uVar3);
      func_0x000107c61174(param_6);
      uVar3 = puVar1[8];
      puVar1[8] = param_6;
      func_0x000107c61170(uVar3);
      puVar2 = PTR_PTR_1126bcb60;
      func_0x000107c610f4();
      func_0x000107c47d24();
      uVar3 = puVar1[3];
      puVar1[3] = puVar2;
      func_0x000107c61170(uVar3);
      puVar2 = PTR_PTR_1126ae810;
      func_0x000107c61160();
      uVar3 = puVar1[4];
      puVar1[4] = puVar2;
      func_0x000107c61170(uVar3);
      func_0x000107c61144(auStack_78,puVar1);
      uVar3 = param_5;
      func_0x000107c40fa4(param_5);
      func_0x000107c61180();
      puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c4da80(uVar3);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_80,auStack_78);
      uVar5 = uVar4;
      func_0x000107c5c320(uVar4);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61174(puVar1);
      func_0x000107c61120(auStack_80);
      func_0x000107c61120(auStack_78);
      puVar6 = puVar1;
      goto LAB_1009ae178;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1009ae178:
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return puVar6;
}



/* Entry: 1009ae1e8; end: 1009ae25f; -[SCSwipePerformanceMonitor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001009ae200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009ae218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009ae230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001009ae248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009ae234) */
/* WARNING: Removing unreachable block (ram,0x0001009ae21c) */
/* WARNING: Removing unreachable block (ram,0x0001009ae204) */
/* WARNING: Removing unreachable block (ram,0x0001009ae24c) */

void FUN_1009ae1e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 1009ae260; end: 1009ae2a3;  */

void FUN_1009ae260(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009ae2a4; end: 1009ae2cb;  */

undefined ** FUN_1009ae2a4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1009ae2cc; end: 1009ae30b;  */

void FUN_1009ae2cc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001009ae2b0();
  FUN_100082720("SCAppUserLifecycleEventHandlerServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x55,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009ae30c; end: 1009ae313;  */

void FUN_1009ae30c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101965c1c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009ae314; end: 1009ae397;  */

void FUN_1009ae314(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101965c1c,param_2,&UNK_101965c20,param_2,&UNK_101965c48,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


