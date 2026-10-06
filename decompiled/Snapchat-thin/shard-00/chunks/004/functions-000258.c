/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005ced80; end: 1005cee4f;  */

void FUN_1005ced80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11059f220;
  func_0x000107c613fc(&UNK_11059f220,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1005cee50,puVar1);
  return;
}



/* Entry: 1005cee50; end: 1005cee57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cee50(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_40);
  FUN_1005cf204();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  func_0x000107c61634(lStack_40 + _DAT_112ef4988,uStack_38);
  func_0x000107c61170(lStack_40);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11059f248;
  return;
}



/* Entry: 1005cee58; end: 1005ceeeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cee58(long *param_1,long param_2)

{
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&lStack_40);
  FUN_1005cf204();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  func_0x000107c61634(lStack_40 + _DAT_112ef4988,uStack_38);
  func_0x000107c61170(lStack_40);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_11059f248;
  return;
}



/* Entry: 1005ceeec; end: 1005ceef3;  */

void FUN_1005ceeec(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1005c75cc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1005ceef4; end: 1005cef3f;  */

void FUN_1005ceef4(long *param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  FUN_1005c75cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  *param_1 = param_2;
  return;
}



/* Entry: 1005cef40; end: 1005cef4b;  */

void FUN_1005cef40(void)

{
  long unaff_x20;
  
  FUN_1005cef4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1005cef4c; end: 1005cf083;  */

/* WARNING: Possible PIC construction at 0x0001005cf01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005cf02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005cf03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005cf04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005cf05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005cf050) */
/* WARNING: Removing unreachable block (ram,0x0001005cf040) */
/* WARNING: Removing unreachable block (ram,0x0001005cf030) */
/* WARNING: Removing unreachable block (ram,0x0001005cf020) */
/* WARNING: Removing unreachable block (ram,0x0001005cf060) */

void FUN_1005cef4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11058b860;
  func_0x000107c613fc(&UNK_11058b860,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  uVar2 = 0x112ee42c0;
  FUN_1000285a8(0x112ee42c0,&UNK_10db0f398);
  func_0x000107c613fc();
  puVar3 = &UNK_102a41db0;
  FUN_1000841f8(&UNK_102a41db0,puVar1,uVar2);
  FUN_100084214(&UNK_10db0f360,0x36,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1005cf084; end: 1005cf087;  */

void FUN_1005cf084(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005cf088; end: 1005cf0bf;  */

void FUN_1005cf088(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1005cf0c0; end: 1005cf0c3;  */

void FUN_1005cf0c0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005cf0c4; end: 1005cf12f;  */

void FUN_1005cf0c4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005cf130; end: 1005cf19b;  */

void FUN_1005cf130(undefined8 *param_1,undefined8 param_2)

{
  FUN_1005c28f0();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 1005cf19c; end: 1005cf1af;  */

void FUN_1005cf19c(void)

{
  return;
}



/* Entry: 1005cf1b0; end: 1005cf203; -[_TtC34CameraLensApiServicePluginRegistry40CameraLensApiServicePluginProviderHandle init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005cf1b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61644(param_1 + _DAT_112ef4988,0);
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005cf204; end: 1005cf24f;  */

void FUN_1005cf204(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4928);
  return;
}



/* Entry: 1005cf250; end: 1005cf273;  */

undefined ** FUN_1005cf250(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005cf274; end: 1005cf30b;  */

void FUN_1005cf274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110589300;
  func_0x000107c613fc(&UNK_110589300,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1005cf360,puVar1);
  return;
}



/* Entry: 1005cf30c; end: 1005cf35f;  */

void FUN_1005cf30c(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005cf360; end: 1005cf36b;  */

void FUN_1005cf360(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005d8384();
  func_0x000107c613fc();
  FUN_1005d83a4(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110589350;
  return;
}



/* Entry: 1005cf36c; end: 1005cf407;  */

void FUN_1005cf36c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005d8384();
  func_0x000107c613fc();
  FUN_1005d83a4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_110589350;
  return;
}



/* Entry: 1005cf408; end: 1005cf40f;  */

void FUN_1005cf408(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005cf410; end: 1005cf463;  */

void FUN_1005cf410(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005cf464; end: 1005cf487;  */

void FUN_1005cf464(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  func_0x0001005c6c00();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126abcb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0db760);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010effce60);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cf9f8);
    (*pcVar1)();
  }
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(long *)(lVar2 + 0x58) = lVar13;
  *param_1 = lVar2;
  return;
}



/* Entry: 1005cf488; end: 1005cf9f7;  */

void FUN_1005cf488(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  func_0x0001005c6c00();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abcb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef13070);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0db760);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010effce60);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cf9f8);
  (*pcVar1)();
}



/* Entry: 1005cf9f8; end: 1005cf9ff;  */

void FUN_1005cf9f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005cfa00; end: 1005cfa53;  */

void FUN_1005cfa00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005cfa54; end: 1005cfa5f;  */

void FUN_1005cfa54(void)

{
  long unaff_x20;
  
  FUN_1005cfa98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1005cfa60; end: 1005cfa97;  */

void FUN_1005cfa60(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1005cfa98; end: 1005d0097;  */

void FUN_1005cfa98(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  func_0x0001005c3384();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126abce8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0dbb70);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efc1ba0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef38480);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0dbb90);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar14 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0dbbb0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(param_2 + 0x60) = lVar14;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d0098);
  (*pcVar1)();
}



/* Entry: 1005d0098; end: 1005d00e7;  */

void FUN_1005d0098(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126aa8b8;
  func_0x000107c610f8();
  func_0x000107c479c4();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1005d00e8; end: 1005d010f;  */

undefined8 * FUN_1005d00e8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_DAT_110d12a80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1005d0174(param_1);
    }
    else {
      func_0x000107c3065c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1005d0110; end: 1005d0173;  */

long FUN_1005d0110(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1005d0174(param_1);
    }
    else {
      func_0x000107c3065c(param_1);
    }
  }
  return param_1;
}



/* Entry: 1005d0174; end: 1005d01bb;  */

void FUN_1005d0174(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  func_0x0001004a641c(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1005d01bc; end: 1005d01ef;  */

long FUN_1005d01bc(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_1005d0210(param_1);
  return param_1;
}



/* Entry: 1005d01f0; end: 1005d020f;  */

void FUN_1005d01f0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1005d01bc();
  }
  return;
}



/* Entry: 1005d0210; end: 1005d0237;  */

long * FUN_1005d0210(long param_1)

{
  long *plVar1;
  
  FUN_100067de0(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    FUN_100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 1005d0238; end: 1005d0267;  */

bool FUN_1005d0238(long *param_1,long *param_2)

{
  return *param_1 != *param_2;
}



/* Entry: 1005d0268; end: 1005d02cf;  */

void FUN_1005d0268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_2;
  while( true ) {
    puVar1 = &uStack_28;
    FUN_1005d0238(puVar1,&uStack_30);
    if (((ulong)puVar1 & 1) == 0) break;
    FUN_1005d02d0();
    func_0x0001004c3c54();
    FUN_1005d0360(&uStack_28);
  }
  return;
}



/* Entry: 1005d02d0; end: 1005d02eb;  */

undefined8 FUN_1005d02d0(undefined8 *param_1)

{
  return *(undefined8 *)*param_1;
}



/* Entry: 1005d02ec; end: 1005d035f; -[SCCameraNavigationServices initWithNavigationService:] */

undefined1 * FUN_1005d02ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f6338;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d0360; end: 1005d037f;  */

void FUN_1005d0360(long *param_1)

{
  *param_1 = *param_1 + 8;
  return;
}



/* Entry: 1005d0380; end: 1005d0387;  */

void FUN_1005d0380(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d0388; end: 1005d03db;  */

void FUN_1005d0388(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d03dc; end: 1005d040f;  */

void FUN_1005d03dc(void)

{
  long unaff_x20;
  
  FUN_1005d0774(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1005d0410; end: 1005d04f7;  */

void FUN_1005d0410(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_1005d0500(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1005d04f8; end: 1005d04ff;  */

void FUN_1005d04f8(void)

{
  return;
}



/* Entry: 1005d0500; end: 1005d055f;  */

void FUN_1005d0500(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x000107c60ca0(param_2 + 2);
    func_0x000107c60e14(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 1005d0560; end: 1005d0577;  */

void FUN_1005d0560(long *param_1)

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



/* Entry: 1005d0578; end: 1005d059b;  */

undefined8 FUN_1005d0578(undefined8 param_1)

{
  FUN_1005d0560(param_1,0);
  return param_1;
}



/* Entry: 1005d059c; end: 1005d05af;  */

void FUN_1005d059c(void)

{
  return;
}



/* Entry: 1005d05b0; end: 1005d0627;  */

void FUN_1005d05b0(void)

{
  ulong uVar1;
  undefined1 in_CY;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  
  FUN_1005d059c();
  if ((bool)in_CY) {
    FUN_1005d0628();
    if (extraout_x10 != 0) {
      func_0x000107c2c580();
LAB_1005d0624:
      func_0x000104bd35f4();
      return;
    }
    func_0x0001005d0640();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) goto LAB_1005d0624;
      func_0x0001005d0660();
    }
    func_0x0001005d0668();
    *unaff_x19 = unaff_x21;
    unaff_x19[1] = unaff_x23;
    unaff_x19[2] = uVar1;
    if (unaff_x20 != 0) {
      FUN_1005d1198();
    }
  }
  else {
    func_0x000107c35704();
  }
  unaff_x19[1] = unaff_x23;
  return;
}



/* Entry: 1005d0628; end: 1005d06ab;  */

void FUN_1005d0628(void)

{
  return;
}



/* Entry: 1005d06ac; end: 1005d0773;  */

undefined8 * FUN_1005d06ac(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *param_1 = &PTR_DAT_110cd1d20;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_2 != 0) {
    FUN_10002b838(&uStack_88,&UNK_10f74236b);
    uStack_60 = uStack_78;
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0xc;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_100100fec(&uStack_a0);
    func_0x000107c60ca0(&uStack_88);
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&uStack_70);
    if (((uint)param_2 >> 8 & 1) != 0) {
      *(char *)(param_1 + 1) = (char)param_2;
    }
    FUN_100114924(&uStack_70);
  }
  return param_1;
}



/* Entry: 1005d0774; end: 1005d0dab;  */

void FUN_1005d0774(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_10023a3c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  puVar1 = PTR_PTR_1126a7ee0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef855a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc1b80);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar12 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar13 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  uVar12 = uVar13;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(param_2 + 0x60) = uVar12;
  *param_1 = param_2;
  return;
}



/* Entry: 1005d0dac; end: 1005d0db3;  */

void FUN_1005d0dac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d0db4; end: 1005d0e07;  */

void FUN_1005d0db4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d0e08; end: 1005d0e13;  */

void FUN_1005d0e08(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10020e818();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1005d0ee4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d0e14; end: 1005d0ee3;  */

void FUN_1005d0e14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10020e818();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1005d0ee4(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d0ee4; end: 1005d1197;  */

void FUN_1005d0ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7ee8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0x53676e6967676f6c;
  func_0x000107c5fadc(0x53676e6967676f6c,0xef73656369767265);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efc1ba0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1bc0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d1198);
  (*pcVar1)();
}



/* Entry: 1005d1198; end: 1005d119f;  */

void FUN_1005d1198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1005d11a0; end: 1005d1367;  */

undefined8 * FUN_1005d11a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = &uStack_f0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd1d70;
  puVar7 = param_1 + 4;
  *puVar7 = 0;
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  param_1[5] = 0;
  FUN_10002b838(&uStack_c8,&DAT_10f7423a0);
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0xc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_100100fec(&uStack_e0);
  func_0x000107c60ca0(&uStack_c8);
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x38))(plVar3,&uStack_b0);
  *(bool *)(param_1 + 3) = (((uint)plVar3 ^ 0xffffffff) & 0x101) == 0;
  FUN_1005d1638(&uStack_f0);
  uVar2 = uStack_e8;
  uVar1 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_58 = param_1[5];
  uStack_60 = *puVar7;
  param_1[5] = uVar2;
  *puVar7 = uVar1;
  FUN_1005d8154(&uStack_60);
  FUN_1005d8154(&uStack_f0);
  FUN_10046e484();
  lVar5 = 0xa0;
  func_0x000107c60e20();
  FUN_10002b838(&uStack_60,&UNK_10f7423bc);
  FUN_10028bc78(lVar5,&uStack_60,0,puVar4,0);
  func_0x000107c60ca0(&uStack_60);
  plVar3 = (long *)*plVar6;
  *plVar6 = lVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_100114924(&uStack_b0);
  return param_1;
}



/* Entry: 1005d1368; end: 1005d1513; -[SCCameraUserLoggingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d1368(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b9d28;
  func_0x000107c610f4(PTR_PTR_1126b9d28);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112724534;
    func_0x000107c61148(lVar4);
  }
  lVar3 = lVar4;
  func_0x000107c4c01c(lVar4);
  func_0x000107c61180();
  func_0x000107c47564(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112724528));
  param_1 = param_1 + _DAT_11272452c;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c3eac4();
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c43b6c();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1005d1514; end: 1005d151b; -[SCCameraLoggingServices loggingQueue] */

undefined8 FUN_1005d1514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005d151c; end: 1005d15bf; -[SCCameraUserLoggingServices initWithLoggingQueue:userBlizzard:] */

undefined1 *
FUN_1005d151c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702bc8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d15c0; end: 1005d15c7; -[SCCameraStabilityServices blizzardPromiseKeeper] */

undefined8 FUN_1005d15c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1005d15c8; end: 1005d15df; -[SCCameraStabilityLogger fulfillPromiseWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d15c8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ed6708) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ed6708),PTR_s_completeWithValue__1125ae900);
    return;
  }
  return;
}



/* Entry: 1005d15e0; end: 1005d15ef; -[SCPromise completeWithValue:] */

void FUN_1005d15e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s__completeWithValue_ignoreRedunda_1125567e0,param_3,
             *(undefined1 *)(param_1 + 0x10));
  return;
}



/* Entry: 1005d15f0; end: 1005d15fb; -[SCFuture _completeWithValue:ignoreRedundantCompletions:] */

void FUN_1005d15f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__completeWithItem_tag_assertIfAl_112556778,param_3,1,param_4 ^ 1);
  return;
}



/* Entry: 1005d15fc; end: 1005d1637;  */

void FUN_1005d15fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d1638; end: 1005d16f7;  */

void FUN_1005d1638(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if ((bRam000000011383d5c0 & 1) == 0) {
    iVar6 = 0x1383d5c0;
    func_0x000107c60e48();
    if (iVar6 != 0) {
      uRam000000011383d5b0 = 0;
      lRam000000011383d5b8 = 0;
      func_0x000107c60e4c(0x11383d5c0);
    }
  }
  if (lRam000000011383d5c8 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    func_0x000107c60c38(0x11383d5c8,&ppuStack_30,FUN_1005d16f8);
  }
  lVar5 = lRam000000011383d5b8;
  uVar4 = uRam000000011383d5b0;
  param_1[1] = lRam000000011383d5b8;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1005d16f8; end: 1005d1773;  */

void FUN_1005d16f8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xb0;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110cec390;
  FUN_1005d1868(puVar2,0,0);
  uStack_28 = puRam000000011383d5b8;
  uStack_30 = puRam000000011383d5b0;
  puRam000000011383d5b0 = puVar2;
  puRam000000011383d5b8 = puVar1;
  FUN_1005d8154(&uStack_30);
  return;
}



/* Entry: 1005d1774; end: 1005d178f;  */

long FUN_1005d1774(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005d1774();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005d1790; end: 1005d17b7;  */

long FUN_1005d1790(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005d1774();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005d17b8; end: 1005d1847;  */

void FUN_1005d17b8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005d1790(auStack_40,1);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_1108a1518;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001005d1948(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1005d1848;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1005d17b8(&uStack_51);
  return;
}



/* Entry: 1005d1848; end: 1005d1867;  */

void FUN_1005d1848(void)

{
  undefined1 uStack_11;
  
  FUN_1005d17b8(&uStack_11);
  return;
}



/* Entry: 1005d1868; end: 1005d193f;  */

undefined8 * FUN_1005d1868(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_50 [16];
  
  *param_1 = &PTR_DAT_110cec3e0;
  param_1[1] = 0x32aaaba7;
  param_1[0xc] = 0;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xd] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_1005d1848(auStack_50);
  func_0x0001005d1988(param_1 + 9,auStack_50);
  func_0x0001005d1964(auStack_50);
  *(undefined1 *)(param_1 + 0x12) = param_3;
  FUN_1005d19d0(param_1,param_2);
  return param_1;
}



/* Entry: 1005d1940; end: 1005d1963;  */

void FUN_1005d1940(void)

{
  return;
}



/* Entry: 1005d1964; end: 1005d19c3;  */

void FUN_1005d1964(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005d19c4; end: 1005d19cf;  */

void FUN_1005d19c4(void)

{
  return;
}



/* Entry: 1005d19d0; end: 1005d1b0f;  */

long * FUN_1005d19d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 in_ZR;
  char cVar3;
  char cVar4;
  char ***pppcVar5;
  undefined4 **ppuVar6;
  char ****ppppcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  char ****extraout_x9;
  char ****extraout_x9_00;
  char ****extraout_x9_01;
  long *plVar17;
  ulong uVar18;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  char ***pppcStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined4 **ppuStack_180;
  undefined8 *puStack_178;
  char ***pppcStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  char cStack_108;
  char *apcStack_100 [3];
  char cStack_e8;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long alStack_60 [3];
  undefined1 uStack_41;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  if ((int)param_2 != 0) {
    uStack_7c = 0;
    func_0x000105300f7c(&uStack_7c);
    puVar11 = &uStack_7c;
    func_0x0001052ff4ac();
    puStack_40 = puVar11;
    uStack_38 = param_2;
    FUN_1002a2640(&uStack_78,&puStack_40);
    FUN_100066230(alStack_60,&uStack_78);
    func_0x0001005d8120();
    func_0x000105301534(&uStack_7c);
  }
  uVar18 = *(ulong *)(param_1 + 0x48);
  func_0x000107c60dec(&uStack_78,&UNK_10f76f1ca,alStack_60);
  FUN_10002b838(&puStack_40,"");
  puVar10 = &uStack_78;
  ppuVar6 = &puStack_40;
  puVar16 = &uStack_41;
  puVar12 = (undefined8 *)0x4;
  FUN_1005d1b10();
  func_0x000107c60ca0(&puStack_40);
  func_0x0001005d8120();
  if ((uVar18 & 1) == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    puVar12 = &uStack_78;
    func_0x0001005d1988((ulong *)(param_1 + 0x48));
    func_0x0001005d1964(&uStack_78);
  }
  plVar17 = alStack_60;
  func_0x000107c60ca0();
  func_0x0001005d8128(uStack_28);
  if ((bool)in_ZR) {
    return plVar17;
  }
  func_0x000107c60e78();
  plVar17 = alStack_60;
  func_0x000107c60ca0();
  func_0x000107c39430();
  if (*plVar17 != 0) {
    func_0x000107c2ff6c();
    func_0x000107c39474(&uStack_1b0,0xd);
    func_0x000107c39470();
    func_0x000107c39468();
    func_0x000107c2ff50(&uStack_1b0);
    return (long *)0x0;
  }
  puVar13 = puVar12;
  FUN_1005d1f64(apcStack_100,puVar12);
  if (cStack_e8 == '\x01') {
    pppcVar5 = (char ***)apcStack_100;
    FUN_1005d466c();
    puVar14 = puVar13;
    FUN_1005d466c();
    puVar15 = puVar14;
    FUN_1005d466c();
    uStack_1a0 = (ulong)puVar12 & 0xffffffff;
    uStack_198 = 0;
    uStack_1b0 = pppcVar5;
    puStack_1a8 = puVar13;
    puStack_190 = puVar10;
    puStack_188 = puVar14;
    ppuStack_180 = ppuVar6;
    puStack_178 = puVar15;
    FUN_1005d4680();
    FUN_1003a9204(&pppcStack_220);
    uStack_118 = uStack_218;
    pppcStack_120 = pppcStack_220;
    uStack_110 = uStack_210;
    pppcStack_220 = (char ***)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    cStack_108 = '\x01';
    func_0x000107c60ca0(&pppcStack_220);
    if (cStack_108 != '\x01') goto LAB_1005d1c44;
    if ((long)(char)uStack_110._7_1_ < 0) {
      if ((0x14 < uStack_118) &&
         (uVar18 = uStack_118, ppppcVar7 = (char ****)pppcStack_120, *(char *)pppcStack_120 == '/'))
      goto LAB_1005d1cc0;
      goto LAB_1005d1c44;
    }
    if ((uStack_110._7_1_ < 0x15) || ((char)pppcStack_120 != '/')) goto LAB_1005d1c44;
    uVar18 = (long)(char)uStack_110._7_1_;
    ppppcVar7 = &pppcStack_120;
LAB_1005d1cc0:
    if (*(char *)((long)ppppcVar7 + (uVar18 - 1)) != '/') goto LAB_1005d1c44;
    ppppcVar7 = &pppcStack_120;
    FUN_1005d480c(ppppcVar7,&UNK_10f76f1f5,0);
    cVar3 = SCARRY8((long)ppppcVar7,1);
    cVar4 = (long)ppppcVar7 + 1 < 0;
    if (ppppcVar7 == (char ****)0xffffffffffffffff) goto LAB_1005d1c44;
    FUN_1005d4874();
    ppppcVar7 = extraout_x9;
    if (cVar4 == cVar3) {
      ppppcVar7 = &pppcStack_120;
    }
    func_0x000107c613b8(ppppcVar7,&uStack_1b0);
    if ((int)ppppcVar7 == 0) {
      if ((uStack_1b0._4_2_ & 0xf000) == 0x4000) goto LAB_1005d1e18;
      func_0x000107c2ff6c();
      func_0x000107c39474(&pppcStack_220,5);
      func_0x000107c39470();
      func_0x000107c39468();
      ppppcVar7 = &pppcStack_220;
      goto LAB_1005d1c68;
    }
    func_0x000107c60e5c();
    uVar1 = *(uint *)ppppcVar7;
    FUN_1005d4874();
    ppppcVar7 = extraout_x9_00;
    if (cVar4 == cVar3) {
      ppppcVar7 = &pppcStack_120;
    }
    func_0x000107c610dc(ppppcVar7,0x1ff);
    if ((int)ppppcVar7 == 0) {
LAB_1005d1e18:
      ppppcVar7 = &pppcStack_120;
      FUN_1005d6a84(ppppcVar7,puVar12);
      *puVar16 = (char)ppppcVar7;
      puVar10 = (undefined8 *)0x70;
      func_0x000107c60e20();
      puVar10[4] = 0;
      puVar10[5] = 0x32aaaba7;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 4) = 4;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      pppcStack_220 = (char ***)0x0;
      func_0x0001005d80dc(plVar17);
      FUN_1005d80f4(&pppcStack_220);
      puVar11 = (undefined4 *)*plVar17;
      *puVar11 = (int)puVar12;
      func_0x000107c60ca4(puVar11 + 2,&pppcStack_120);
      *(undefined4 *)(*plVar17 + 0x20) = 2;
      plVar17 = (long *)0x1;
      goto LAB_1005d1c70;
    }
    func_0x000107c60e5c();
    iVar2 = *(int *)ppppcVar7;
    func_0x000107c2ff5c(iVar2,0x10003,puVar12);
    cVar3 = SBORROW4(iVar2,0xd);
    cVar4 = iVar2 + -0xd < 0;
    if (iVar2 == 0xd) {
      FUN_1005d4874();
      pppcStack_220 = (char ***)extraout_x9_01;
      if (cVar4 == cVar3) {
        pppcStack_220 = (char ***)&pppcStack_120;
      }
      uStack_218 = 0;
      uStack_208 = 0;
      puVar8 = &UNK_10f76f207;
      uStack_210 = (ulong)uVar1;
      FUN_1003a91d4(&UNK_10f76f207);
      FUN_1003a9204(auStack_1c8);
      func_0x000100458ae4();
      func_0x000107c60c94(&uStack_238,auStack_1c8);
      uVar9 = 3;
      func_0x000107c316c0(&uStack_250);
      FUN_10054f908();
      uStack_1e8 = uStack_240;
      pppcStack_220 = (char ***)CONCAT44(pppcStack_220._4_4_,0x13);
      uStack_218 = 0xd;
      uStack_208 = uStack_230;
      uStack_210 = uStack_238;
      uStack_200 = uStack_228;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_1f0 = uStack_248;
      uStack_1f8 = uStack_250;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = uVar9;
      func_0x000107c31340(puVar8,&pppcStack_220);
      func_0x00010786e114(&pppcStack_220);
      func_0x000107c39460();
      func_0x000107c3946c();
      func_0x000107c60ca0(auStack_1c8);
    }
  }
  else {
    pppcStack_120 = (char ***)((ulong)pppcStack_120 & 0xffffffffffffff00);
    cStack_108 = '\0';
LAB_1005d1c44:
    func_0x000107c2ff6c();
    func_0x000107c39474(&uStack_1b0,4);
    func_0x000107c39470();
    func_0x000107c39468();
    ppppcVar7 = (char ****)&uStack_1b0;
LAB_1005d1c68:
    func_0x000107c2ff50(ppppcVar7);
  }
  plVar17 = (long *)0x0;
LAB_1005d1c70:
  FUN_1001148fc(&pppcStack_120);
  FUN_1001148fc(apcStack_100);
  return plVar17;
}



/* Entry: 1005d1b10; end: 1005d1f4f;  */

undefined8
FUN_1005d1b10(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char ***pppcVar5;
  char ****ppppcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char ****extraout_x9;
  char ****extraout_x9_00;
  char ****extraout_x9_01;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  char ***pppcStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  char ***pppcStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  char cStack_88;
  char *apcStack_80 [3];
  char cStack_68;
  
  if (*param_1 != 0) {
    func_0x000107c2ff6c();
    func_0x000107c39474(&uStack_130,0xd);
    func_0x000107c39470();
    func_0x000107c39468();
    func_0x000107c2ff50(&uStack_130);
    return 0;
  }
  uVar11 = param_2;
  FUN_1005d1f64(apcStack_80,param_2);
  if (cStack_68 == '\x01') {
    pppcVar5 = (char ***)apcStack_80;
    FUN_1005d466c();
    uVar12 = uVar11;
    FUN_1005d466c();
    uVar13 = uVar12;
    FUN_1005d466c();
    uStack_120 = param_2 & 0xffffffff;
    uStack_118 = 0;
    uStack_130 = pppcVar5;
    uStack_128 = uVar11;
    uStack_110 = param_3;
    uStack_108 = uVar12;
    uStack_100 = param_4;
    uStack_f8 = uVar13;
    FUN_1005d4680();
    FUN_1003a9204(&pppcStack_1a0);
    uStack_98 = uStack_198;
    pppcStack_a0 = pppcStack_1a0;
    uStack_90 = uStack_190;
    pppcStack_1a0 = (char ***)0x0;
    uStack_198 = 0;
    uStack_190 = 0;
    cStack_88 = '\x01';
    func_0x000107c60ca0(&pppcStack_1a0);
    if (cStack_88 != '\x01') goto LAB_1005d1c44;
    if ((long)(char)uStack_90._7_1_ < 0) {
      if ((0x14 < uStack_98) &&
         (uVar11 = uStack_98, ppppcVar6 = (char ****)pppcStack_a0, *(char *)pppcStack_a0 == '/'))
      goto LAB_1005d1cc0;
      goto LAB_1005d1c44;
    }
    if ((uStack_90._7_1_ < 0x15) || ((char)pppcStack_a0 != '/')) goto LAB_1005d1c44;
    uVar11 = (long)(char)uStack_90._7_1_;
    ppppcVar6 = &pppcStack_a0;
LAB_1005d1cc0:
    if (*(char *)((long)ppppcVar6 + (uVar11 - 1)) != '/') goto LAB_1005d1c44;
    ppppcVar6 = &pppcStack_a0;
    FUN_1005d480c(ppppcVar6,&UNK_10f76f1f5,0);
    cVar3 = SCARRY8((long)ppppcVar6,1);
    cVar4 = (long)ppppcVar6 + 1 < 0;
    if (ppppcVar6 == (char ****)0xffffffffffffffff) goto LAB_1005d1c44;
    FUN_1005d4874();
    ppppcVar6 = extraout_x9;
    if (cVar4 == cVar3) {
      ppppcVar6 = &pppcStack_a0;
    }
    func_0x000107c613b8(ppppcVar6,&uStack_130);
    if ((int)ppppcVar6 == 0) {
      if ((uStack_130._4_2_ & 0xf000) == 0x4000) goto LAB_1005d1e18;
      func_0x000107c2ff6c();
      func_0x000107c39474(&pppcStack_1a0,5);
      func_0x000107c39470();
      func_0x000107c39468();
      ppppcVar6 = &pppcStack_1a0;
      goto LAB_1005d1c68;
    }
    func_0x000107c60e5c();
    uVar1 = *(uint *)ppppcVar6;
    FUN_1005d4874();
    ppppcVar6 = extraout_x9_00;
    if (cVar4 == cVar3) {
      ppppcVar6 = &pppcStack_a0;
    }
    func_0x000107c610dc(ppppcVar6,0x1ff);
    if ((int)ppppcVar6 == 0) {
LAB_1005d1e18:
      ppppcVar6 = &pppcStack_a0;
      FUN_1005d6a84(ppppcVar6,param_2);
      *param_5 = (char)ppppcVar6;
      puVar9 = (undefined8 *)0x70;
      func_0x000107c60e20();
      puVar9[4] = 0;
      puVar9[5] = 0x32aaaba7;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 4) = 4;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      pppcStack_1a0 = (char ***)0x0;
      func_0x0001005d80dc(param_1);
      FUN_1005d80f4(&pppcStack_1a0);
      puVar10 = (undefined4 *)*param_1;
      *puVar10 = (int)param_2;
      func_0x000107c60ca4(puVar10 + 2,&pppcStack_a0);
      *(undefined4 *)(*param_1 + 0x20) = 2;
      uVar8 = 1;
      goto LAB_1005d1c70;
    }
    func_0x000107c60e5c();
    iVar2 = *(int *)ppppcVar6;
    func_0x000107c2ff5c(iVar2,0x10003,param_2);
    cVar3 = SBORROW4(iVar2,0xd);
    cVar4 = iVar2 + -0xd < 0;
    if (iVar2 == 0xd) {
      FUN_1005d4874();
      pppcStack_1a0 = (char ***)extraout_x9_01;
      if (cVar4 == cVar3) {
        pppcStack_1a0 = (char ***)&pppcStack_a0;
      }
      uStack_198 = 0;
      uStack_188 = 0;
      puVar7 = &UNK_10f76f207;
      uStack_190 = (ulong)uVar1;
      FUN_1003a91d4(&UNK_10f76f207);
      FUN_1003a9204(auStack_148);
      func_0x000100458ae4();
      func_0x000107c60c94(&uStack_1b8,auStack_148);
      uVar8 = 3;
      func_0x000107c316c0(&uStack_1d0);
      FUN_10054f908();
      uStack_168 = uStack_1c0;
      pppcStack_1a0 = (char ***)CONCAT44(pppcStack_1a0._4_4_,0x13);
      uStack_198 = 0xd;
      uStack_188 = uStack_1b0;
      uStack_190 = uStack_1b8;
      uStack_180 = uStack_1a8;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_170 = uStack_1c8;
      uStack_178 = uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_158 = 0;
      uStack_160 = uVar8;
      func_0x000107c31340(puVar7,&pppcStack_1a0);
      func_0x00010786e114(&pppcStack_1a0);
      func_0x000107c39460();
      func_0x000107c3946c();
      func_0x000107c60ca0(auStack_148);
    }
  }
  else {
    pppcStack_a0 = (char ***)((ulong)pppcStack_a0 & 0xffffffffffffff00);
    cStack_88 = '\0';
LAB_1005d1c44:
    func_0x000107c2ff6c();
    func_0x000107c39474(&uStack_130,4);
    func_0x000107c39470();
    func_0x000107c39468();
    ppppcVar6 = (char ****)&uStack_130;
LAB_1005d1c68:
    func_0x000107c2ff50(ppppcVar6);
  }
  uVar8 = 0;
LAB_1005d1c70:
  FUN_1001148fc(&pppcStack_a0);
  FUN_1001148fc(apcStack_80);
  return uVar8;
}



/* Entry: 1005d1f50; end: 1005d1f63;  */

void FUN_1005d1f50(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 1005d1f64; end: 1005d20c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d1f64(undefined8 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lStack_718;
  long lStack_710;
  undefined1 auStack_478 [40];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  
  iVar2 = param_2;
  FUN_1005d1f50();
  uStack_450 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uVar1 = iVar2 - 3U == 2;
  if (iVar2 - 3U < 2) {
    puVar3 = (undefined8 *)0x9;
LAB_1005d1fa8:
    func_0x000107c6166c(puVar3,1);
    func_0x000107c61668();
    if ((int)puVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c610f4();
      func_0x000107c48ff0();
      puVar5 = puVar4;
      func_0x000107c5c17c();
      func_0x000107c61180();
      func_0x000107c61178();
      func_0x000107c3ac4c(puVar5);
      func_0x000107c60c64(&uStack_450,puVar5);
      FUN_1005d4630();
      func_0x000107c61170(puVar4);
      param_1[1] = uStack_448;
      *param_1 = uStack_450;
      param_1[2] = uStack_440;
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_450 = 0;
      uVar21 = 1;
      goto LAB_1005d2054;
    }
    func_0x000107c2ff6c();
    func_0x000107c39450(auStack_478,6);
    func_0x000107c39448(*puVar3);
    func_0x000107c39438();
    func_0x000107c39440();
  }
  else if (param_2 != 0) {
    puVar3 = (undefined8 *)0xd;
    goto LAB_1005d1fa8;
  }
  uVar21 = 0;
  *(undefined1 *)param_1 = 0;
LAB_1005d2054:
  *(undefined1 *)(param_1 + 3) = uVar21;
  func_0x000107c60ca0();
  func_0x0001005d4638();
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c39440();
  puVar3 = &uStack_450;
  func_0x000107c60ca0();
  func_0x000107c3943c();
  if (puVar3 == (undefined8 *)0x0) {
    lStack_718 = 0;
    lStack_710 = 0;
    lVar24 = 0;
    lVar23 = 0;
  }
  else {
    lVar24 = (long)puVar3 + (long)_DAT_1127244d4;
    func_0x000107c61148();
    lVar23 = (long)puVar3 + (long)_DAT_1127244d8;
    func_0x000107c61148();
    lStack_718 = (long)puVar3 + (long)_DAT_1127244e0;
    func_0x000107c61148();
    lStack_710 = (long)puVar3 + (long)_DAT_1127244e4;
    func_0x000107c61148();
  }
  puVar6 = puVar3;
  FUN_1005d27e0();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) {
    lVar26 = 0;
    lVar27 = 0;
    lVar25 = 0;
    lVar22 = 0;
  }
  else {
    lVar27 = (long)puVar3 + (long)_DAT_1127244ec;
    func_0x000107c61148();
    lVar25 = (long)puVar3 + (long)_DAT_1127244f0;
    func_0x000107c61148();
    lVar26 = (long)puVar3 + (long)_DAT_1127244f4;
    func_0x000107c61148();
    lVar22 = (long)puVar3 + (long)_DAT_1127244f8;
    func_0x000107c61148();
  }
  lVar7 = lVar22;
  func_0x000107c4b254();
  func_0x000107c61180();
  func_0x000107c61170(lVar22);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar24);
  func_0x000107c61174(lVar23);
  func_0x000107c61174(lVar26);
  func_0x000107c61174(lVar25);
  func_0x000107c61174(lVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = puVar3;
  FUN_1005d27e0(puVar3);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c52fe0();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c61174(lStack_710);
  func_0x000107c61174(lVar27);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  FUN_1005d27e0(puVar3);
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c530a8();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  puVar12 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar24);
  func_0x000107c61174(lVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  func_0x000107c61174();
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c61174(lVar24);
  func_0x000107c3e4fc(puVar15);
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar17 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c61174(lStack_710);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar18 = PTR_PTR_1126ae720;
  func_0x000107c61174(lVar23);
  func_0x000107c61174(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar19 = PTR_PTR_1126ae720;
  func_0x000107c61174(puVar6);
  func_0x000107c61174(lVar23);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126b9d08;
  func_0x000107c610f4();
  func_0x000107c48740();
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lStack_710);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lStack_718);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lStack_710);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lStack_710);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lStack_718);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1005d20c8; end: 1005d27df; -[SCCameraFeatureLoggingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d20c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  long lStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  if (param_1 == 0) {
    lStack_298 = 0;
    lStack_290 = 0;
    lVar19 = 0;
    lVar18 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127244d4;
    func_0x000107c61148();
    lVar18 = param_1 + _DAT_1127244d8;
    func_0x000107c61148();
    lStack_298 = param_1 + _DAT_1127244e0;
    func_0x000107c61148();
    lStack_290 = param_1 + _DAT_1127244e4;
    func_0x000107c61148();
  }
  lVar1 = param_1;
  FUN_1005d27e0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar21 = 0;
    lVar22 = 0;
    lVar20 = 0;
    lVar17 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_1127244ec;
    func_0x000107c61148();
    lVar20 = param_1 + _DAT_1127244f0;
    func_0x000107c61148();
    lVar21 = param_1 + _DAT_1127244f4;
    func_0x000107c61148();
    lVar17 = param_1 + _DAT_1127244f8;
    func_0x000107c61148();
  }
  lVar2 = lVar17;
  func_0x000107c4b254();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  puVar3 = PTR_PTR_1126ae720;
  puVar16 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1054cb148;
  puStack_88 = &UNK_1108906e8;
  func_0x000107c61174(lVar18);
  lStack_80 = lVar18;
  func_0x000107c3e4fc(puVar3,param_2,&puStack_a0);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_e8 = puVar16;
  uStack_e0 = 0xc2000000;
  puStack_d8 = &UNK_1054cb1a4;
  puStack_d0 = &UNK_110890718;
  func_0x000107c61174(lVar19);
  lStack_c8 = lVar19;
  lStack_c0 = lVar2;
  func_0x000107c61174(lVar18);
  lStack_b8 = lVar18;
  lStack_b0 = lVar20;
  lStack_a8 = lVar21;
  func_0x000107c61174(lVar21);
  func_0x000107c61174(lVar20);
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar4,param_2,&puStack_e8);
  func_0x000107c61180();
  lVar17 = param_1;
  FUN_1005d27e0(param_1);
  func_0x000107c61180();
  lVar5 = lVar17;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c52fe0();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar17);
  puVar7 = PTR_PTR_1126ae720;
  puStack_120 = puVar16;
  uStack_118 = 0xc2000000;
  puStack_110 = &UNK_1054cb224;
  puStack_108 = &UNK_110890748;
  func_0x000107c61174(lVar18);
  lStack_100 = lVar18;
  func_0x000107c61174(lStack_290);
  lStack_f8 = lStack_290;
  lStack_f0 = lVar22;
  func_0x000107c61174(lVar22);
  func_0x000107c3e4fc(puVar7,param_2,&puStack_120);
  func_0x000107c61180();
  FUN_1005d27e0(param_1);
  func_0x000107c61180();
  lVar17 = param_1;
  func_0x000107c3f0fc();
  func_0x000107c61180();
  lVar5 = lVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c530a8();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(param_1);
  puVar8 = PTR_PTR_1126ae720;
  puStack_148 = puVar16;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_1054cb28c;
  puStack_130 = &UNK_110890778;
  func_0x000107c61174(lVar18);
  lStack_128 = lVar18;
  func_0x000107c3e4fc(puVar8,param_2,&puStack_148);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  puStack_178 = puVar16;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_1008cbb10;
  puStack_160 = &UNK_1108907a8;
  func_0x000107c61174(lVar19);
  lStack_158 = lVar19;
  func_0x000107c61174(lVar18);
  lStack_150 = lVar18;
  func_0x000107c3e4fc(puVar9,param_2,&puStack_178);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_1a0 = puVar16;
  uStack_198 = 0xc2000000;
  puStack_190 = &UNK_1054cb2bc;
  puStack_188 = &UNK_1108907d8;
  lStack_180 = lStack_298;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar10,param_2,&puStack_1a0);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  puStack_1d0 = puVar16;
  uStack_1c8 = 0xc2000000;
  puStack_1c0 = &UNK_1054cb318;
  puStack_1b8 = &UNK_110890808;
  lStack_1b0 = lVar19;
  func_0x000107c61174(lVar18);
  lStack_1a8 = lVar18;
  func_0x000107c61174(lVar19);
  func_0x000107c3e4fc(puVar11,param_2,&puStack_1d0);
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae720;
  puStack_1f8 = puVar16;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_1007eee94;
  puStack_1e0 = &UNK_110890838;
  func_0x000107c61174(lVar18);
  lStack_1d8 = lVar18;
  func_0x000107c3e4fc(puVar12,param_2,&puStack_1f8);
  func_0x000107c61180();
  puVar13 = PTR_PTR_1126ae720;
  puStack_228 = puVar16;
  uStack_220 = 0xc2000000;
  puStack_218 = &UNK_1054cb348;
  puStack_210 = &UNK_110890868;
  func_0x000107c61174(lVar18);
  lStack_200 = lStack_290;
  lStack_208 = lVar18;
  func_0x000107c61174(lStack_290);
  func_0x000107c3e4fc(puVar13,param_2,&puStack_228);
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_258 = puVar16;
  uStack_250 = 0xc2000000;
  puStack_248 = &UNK_1054cb378;
  puStack_240 = &UNK_110890898;
  func_0x000107c61174(lVar18);
  lStack_238 = lVar18;
  func_0x000107c61174(lVar1);
  lStack_230 = lVar1;
  func_0x000107c3e4fc(puVar14,param_2,&puStack_258);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126ae720;
  puStack_288 = puVar16;
  uStack_280 = 0xc2000000;
  pcStack_278 = FUN_1008af76c;
  puStack_270 = &UNK_1108908c8;
  lStack_268 = lVar18;
  lStack_260 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c61174(lVar18);
  func_0x000107c3e4fc(puVar15,param_2,&puStack_288);
  func_0x000107c61180();
  puVar16 = PTR_PTR_1126b9d08;
  func_0x000107c610f4();
  func_0x000107c48740();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(lStack_260);
  func_0x000107c61170(lStack_268);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lStack_230);
  func_0x000107c61170(lStack_238);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lStack_200);
  func_0x000107c61170(lStack_208);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lStack_1d8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lStack_1a8);
  func_0x000107c61170(lStack_1b0);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lStack_180);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lStack_150);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lStack_128);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(lStack_100);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(lStack_b0);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lStack_290);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lStack_298);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1005d27e0; end: 1005d2803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d27e0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127244e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d2804; end: 1005d2897; -[SCCameraHardwareServicesAPIImpl setCameraCreationDelayLogger:] */

/* WARNING: Possible PIC construction at 0x0001005d2838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d285c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d2880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005d2860) */
/* WARNING: Removing unreachable block (ram,0x0001005d283c) */
/* WARNING: Removing unreachable block (ram,0x0001005d2884) */

void FUN_1005d2804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005d2898; end: 1005d28df; -[SCCameraHardwareServicesAPIImpl _videoCapturer] */

void FUN_1005d2898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5dd78();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005d28e0; end: 1005d28e7; -[SCCameraHardwareResourceImpl videoCapturer] */

undefined8 FUN_1005d28e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1005d28e8; end: 1005d292f; -[SCCameraHardwareServicesAPIImpl _imageCapturer] */

void FUN_1005d28e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5bde4();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1005d2930; end: 1005d2937; -[SCCameraHardwareResourceImpl stillImageCapturer] */

undefined8 FUN_1005d2930(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1005d2938; end: 1005d29a7; -[SCCameraHardwareServicesAPIImpl setCameraSnapCaptureLogger:] */

/* WARNING: Possible PIC construction at 0x0001005d296c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d2990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005d2970) */
/* WARNING: Removing unreachable block (ram,0x0001005d2994) */

void FUN_1005d2938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005d29a8; end: 1005d2c27; -[SCCameraFeatureLoggingServices initWithSnapCreationLogger:coreCameraLogger:cameraScreenshotLogger:cameraOpenLogger:permissionStateLogger:cameraShortcutLogger:cameraCrashLogger:videoNoSoundLogger:snapCaptureLogger:cameraUserActionLogger:cameraFeaturePerformanceLoggerFactory:] */

undefined8 *
FUN_1005d29a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_68 = PTR_PTR_1127044d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1005d2c28; end: 1005d2c93;  */

void FUN_1005d2c28(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d2c94; end: 1005d2c9b;  */

void FUN_1005d2c94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1000966a4(0);
  func_0x000107c610f8();
  FUN_1005d2ce4(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1005d2c9c; end: 1005d2ce3;  */

void FUN_1005d2c9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_1000966a4(0);
  func_0x000107c610f8();
  FUN_1005d2ce4(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1005d2ce4; end: 1005d2d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d2ce4(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_113097718) = param_1;
  FUN_1000966a4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005d2d20; end: 1005d3347; -[SCCameraUIServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d2d20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  func_0x000107c3afd0();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  puVar3 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10608df84;
  puStack_88 = &UNK_11090b340;
  func_0x000107c61174();
  puStack_80 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c3ca80();
  func_0x000107c61180();
  lVar26 = param_1;
  FUN_1005d34b4();
  func_0x000107c61180();
  lVar5 = lVar26;
  func_0x000107c519ac();
  func_0x000107c61170(lVar26);
  if (lVar5 != 3) {
    func_0x000107c4967c(lVar4);
  }
  func_0x000107c61144(auStack_a8,param_1);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_a8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126c77f0;
  func_0x000107c610f4();
  puVar8 = PTR_PTR_1126ae820;
  func_0x000107c61160(PTR_PTR_1126ae820);
  lVar26 = param_1;
  func_0x000107c3afac();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  func_0x000107c45c74();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126c77f8;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11273e3f0;
    func_0x000107c61148();
  }
  lVar5 = lVar26;
  func_0x000107c40d98();
  func_0x000107c61180();
  lVar10 = param_1;
  FUN_1005d3520();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c3f0f4();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c5dd88();
  func_0x000107c61180();
  lVar14 = param_1;
  FUN_1005d34b4();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c5de90();
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c4c168();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11273e3f4;
    func_0x000107c61148();
  }
  lVar16 = lVar27;
  func_0x000107c3de00();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_11273e3f8;
    func_0x000107c61148(lVar28);
  }
  lVar17 = lVar28;
  func_0x000107c4008c(lVar28);
  func_0x000107c61180();
  lVar18 = lVar17;
  func_0x000107c3f108();
  func_0x000107c61180();
  lVar19 = lVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4f0ac();
  func_0x000107c46274();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11273e3d0);
  *(undefined **)(param_1 + _DAT_11273e3d0) = puVar8;
  func_0x000107c61170(uVar20);
  func_0x000107c61174(puVar8);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar26);
  lVar26 = param_1 + _DAT_11273e3d8;
  func_0x000107c61148();
  lVar5 = lVar26;
  func_0x000107c519ac();
  if (lVar5 == 3) {
    uVar21 = param_1 + _DAT_11273e3f8;
    func_0x000107c61148();
    uVar22 = uVar21;
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar23 = uVar22;
    func_0x000107c3f108();
    func_0x000107c61180();
    uVar24 = uVar23;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar25 = uVar24;
    func_0x000107c5adc8();
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(lVar26);
    if ((uVar25 & 1) == 0) goto LAB_1005d3190;
  }
  else {
    func_0x000107c61170(lVar26);
LAB_1005d3190:
    lVar26 = param_1 + _DAT_11273e3d8;
    func_0x000107c61148();
    lVar5 = lVar26;
    func_0x000107c519ac();
    if (lVar5 == 3) {
      func_0x000107c61170(lVar26);
      goto LAB_1005d323c;
    }
    lVar5 = param_1 + _DAT_11273e3f8;
    func_0x000107c61148();
    lVar10 = lVar5;
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c3f108();
    func_0x000107c61180();
    lVar12 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c5adcc();
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar26);
    if ((int)lVar13 == 0) goto LAB_1005d323c;
  }
  func_0x000107c5bb08(puVar8);
LAB_1005d323c:
  lVar26 = param_1;
  func_0x000107c3b26c();
  func_0x000107c61180();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11273e3d4);
  *(long *)(param_1 + _DAT_11273e3d4) = lVar26;
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_1 + _DAT_11273e3fc);
  func_0x000107c61174(uVar20);
  func_0x000107c42c20(uVar20);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1005d3348; end: 1005d336b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d3348(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273e3e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005d336c; end: 1005d33fb; -[SCCameraUIServicesEntryPoint _cameraUIServicesDidBegin] */

/* WARNING: Possible PIC construction at 0x0001005d33d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005d33e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005d33d8) */
/* WARNING: Removing unreachable block (ram,0x0001005d33e8) */

void FUN_1005d336c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1005d3348();
  func_0x000107c61180();
  func_0x000107c4d524();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  FUN_1005d34b4(param_1);
  func_0x000107c61180();
  func_0x000107c41c18(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005d33fc; end: 1005d3403; -[SCCameraNavigationServices navigationService] */

undefined8 FUN_1005d33fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


