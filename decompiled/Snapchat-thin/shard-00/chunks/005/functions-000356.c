/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10076c278; end: 10076c2df;  */

void FUN_10076c278(void)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1cc30,&UNK_10d9fe310);
  func_0x000107c613fc();
  puVar1 = &UNK_101cf7538;
  FUN_1000bdd8c(&UNK_101cf7538,0);
  func_0x000100287374(0);
  func_0x000107c610f8();
  FUN_10076c488(puVar1);
  return;
}



/* Entry: 10076c2e0; end: 10076c40f; -[SCCofIPInferredCountryCodeRepository initWithPreferences:] */

undefined8 * FUN_10076c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e7920;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c40aa4(puVar1[2]);
    func_0x000107c611b0();
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10076c410; end: 10076c487;  */

void FUN_10076c410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c61160(PTR_PTR_1126ae820);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c41050(param_1);
    func_0x000107c61180();
    func_0x000107c4d664(puVar1,param_2,lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10076c488; end: 10076c4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076c488(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c0d8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10076c4d4; end: 10076c523; -[SCCofIPInferredCountryCodeRepository currentValue] */

void FUN_10076c4d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c1ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10076c524; end: 10076c52b;  */

void FUN_10076c524(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076c52c; end: 10076c57f;  */

void FUN_10076c52c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10076c580; end: 10076c58b;  */

void FUN_10076c580(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ae274();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10076c6f4(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10076c774();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10076c7b0();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10076c58c; end: 10076c6f3;  */

void FUN_10076c58c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ae274();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10076c6f4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10076c774();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10076c7b0();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10076c6f4; end: 10076c773;  */

void FUN_10076c6f4(undefined8 param_1)

{
  if (lRam0000000112e5ab00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b1758);
  return;
}



/* Entry: 10076c774; end: 10076c7af;  */

void FUN_10076c774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10076c7b0; end: 10076c98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10076c7b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  puVar2 = &UNK_1104cf860;
  func_0x000107c613fc(&UNK_1104cf860,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  FUN_1000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  puVar3 = &UNK_10212e314;
  FUN_1000bdd8c(&UNK_10212e314,puVar2);
  FUN_1000285a8(0x112e5aac8,&UNK_10da60568);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aca0();
  func_0x000107c61180();
  uVar5 = uVar4;
  FUN_1000bda74();
  func_0x000107c61170(uVar4);
  FUN_1000285a8(0x112e284a0,&UNK_10da107d0);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11307e6a8);
  func_0x000107c61174();
  uVar4 = uVar6;
  FUN_1000bda74();
  func_0x000107c61170(uVar6);
  puVar2 = &UNK_1104cf888;
  func_0x000107c613fc(&UNK_1104cf888,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  FUN_1000285a8(0x112e5aad0,&UNK_10da60578);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar3);
  puVar7 = &UNK_10212e3bc;
  FUN_1000bdd8c(&UNK_10212e3bc,puVar2);
  uVar6 = 0;
  FUN_1002b66fc(0);
  func_0x000107c610f8();
  FUN_10076c9ec(puVar7,uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar4);
  return puVar7;
}



/* Entry: 10076c98c; end: 10076c9e3;  */

void FUN_10076c98c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076c9e4; end: 10076c9eb; -[SCCognacDataServices leaderboardDataService] */

undefined8 FUN_10076c9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10076c9ec; end: 10076ca37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076c9ec(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fc8a28) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10076ca38; end: 10076cb03;  */

void FUN_10076ca38(void)

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



/* Entry: 10076cb04; end: 10076d04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076cb04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113083f78);
  uVar3 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  return;
}



/* Entry: 10076d050; end: 10076d17b;  */

void FUN_10076d050(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076d17c; end: 10076d183;  */

void FUN_10076d17c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10076d184; end: 10076d1f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10076d184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc8c58) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10076d1f8; end: 10076d24b;  */

void FUN_10076d1f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076d24c; end: 10076d253;  */

void FUN_10076d24c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10076d254; end: 10076d2ef;  */

void FUN_10076d254(undefined8 param_1)

{
  if (lRam0000000112f61710 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7610bc);
  return;
}



/* Entry: 10076d2f0; end: 10076dafb;  */

void FUN_10076d2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_19;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  return;
}



/* Entry: 10076dafc; end: 10076dbcf;  */

void FUN_10076dafc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076dbd0; end: 10076dbdb;  */

void FUN_10076dbd0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076dbdc; end: 10076dbfb;  */

void FUN_10076dbdc(void)

{
  func_0x000107c61168(&PTR_PTR_112f62ef8);
  return;
}



/* Entry: 10076dbfc; end: 10076de83;  */

/* WARNING: Possible PIC construction at 0x00010076dc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076dcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076dd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076ddb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076de40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076de50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010076de60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010076de54) */
/* WARNING: Removing unreachable block (ram,0x00010076de44) */
/* WARNING: Removing unreachable block (ram,0x00010076ddbc) */
/* WARNING: Removing unreachable block (ram,0x00010076dd64) */
/* WARNING: Removing unreachable block (ram,0x00010076dd08) */
/* WARNING: Removing unreachable block (ram,0x00010076dcd4) */
/* WARNING: Removing unreachable block (ram,0x00010076dcf4) */
/* WARNING: Removing unreachable block (ram,0x00010076dc8c) */
/* WARNING: Removing unreachable block (ram,0x00010076dca8) */
/* WARNING: Removing unreachable block (ram,0x00010076de64) */

void FUN_10076dbfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126be150;
  if (param_1 != 0) {
    func_0x000107c61174(param_2);
    func_0x000107c4cd90(puVar1);
    func_0x000107c61180();
    func_0x000107c5a344();
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c61180();
    func_0x000107c4ecb0();
    func_0x000107c61180();
    func_0x000107c43638();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10076de84; end: 10076dec7;  */

void FUN_10076de84(undefined8 *param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  uStack_11 = param_2;
  FUN_1000d0424(&uStack_12,puVar2,uVar1,&uStack_11,1);
  return;
}



/* Entry: 10076dec8; end: 10076decf;  */

void FUN_10076dec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_1 + 0xb0);
  return;
}



/* Entry: 10076ded0; end: 10076df37; +[SCCognacClientContextUserContext descriptor] */

void FUN_10076ded0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c01e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64ef0,
                        &PTR____CFConstantStringClassReference_110e00498,&PTR_DAT_1130fc9c0,
                        &PTR_s_userId_1130fcad8,6,0x30,0x1c);
    puRam00000001136c01e8 = puVar1;
  }
  return;
}



/* Entry: 10076df38; end: 10076df77;  */

void FUN_10076df38(void)

{
  func_0x000107c61168(&PTR_PTR_112fa6658);
  return;
}



/* Entry: 10076df78; end: 10076e027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10076df78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  FUN_10076e028(param_1,unaff_x20 + _DAT_112fa64d8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa64e0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fa64e8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar2;
}



/* Entry: 10076e028; end: 10076e06b;  */

long FUN_10076e028(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10076e06c; end: 10076e097; +[_TtC28SCFideliusClientInitServices19SCFideliusConstants transferableIdentityBackupKey] */

void FUN_10076e06c(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1ea650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10076e098; end: 10076e0cb;  */

undefined8 * FUN_10076e098(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110881218;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_100561eb4();
  return param_1;
}



/* Entry: 10076e0cc; end: 10076e0df;  */

void FUN_10076e0cc(void)

{
  return;
}



/* Entry: 10076e0e0; end: 10076e12f;  */

void FUN_10076e0e0(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10076e130; end: 10076e13f;  */

void FUN_10076e130(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10076e140; end: 10076e15b;  */

void FUN_10076e140(void)

{
  FUN_10076ac28();
  FUN_10076e15c();
  return;
}



/* Entry: 10076e15c; end: 10076e1cf;  */

void FUN_10076e15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010054fcb8();
  FUN_10054fd50();
  FUN_10076e1d0();
  FUN_10076e294(uStack_40,param_2,param_3,param_4);
  func_0x00010054ff60();
  FUN_10076e2c4();
  func_0x00010054ff88(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053a6b34();
  FUN_10076e2c4();
  func_0x0001053a6ad0();
  func_0x00010054fd5c();
  FUN_10076e1f0();
  FUN_10054fdb8();
  return;
}



/* Entry: 10076e1d0; end: 10076e1ef;  */

void FUN_10076e1d0(void)

{
  func_0x00010054fd5c();
  FUN_10076e1f0();
  FUN_10054fdb8();
  return;
}



/* Entry: 10076e1f0; end: 10076e217;  */

void FUN_10076e1f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  if ((undefined8 *)0x333333333333333 < param_2) {
    func_0x000104bd35f4();
    *param_1 = &PTR_DAT_110880c28;
    lVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010054fdc4();
      } while (extraout_w10 != 0);
    }
    lVar1 = param_3[1];
    uVar2 = *param_3;
    param_1[4] = param_3[1];
    param_1[3] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010054fdc4();
      } while (extraout_w10_00 != 0);
    }
    lVar1 = param_4[1];
    uVar2 = *param_4;
    param_1[6] = param_4[1];
    param_1[5] = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010054fdc4();
      } while (extraout_w10_01 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x50);
  return;
}



/* Entry: 10076e218; end: 10076e293;  */

void FUN_10076e218(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110880c28;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10076e294; end: 10076e2c3;  */

undefined8 * FUN_10076e294(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110880e10;
  FUN_10076e218(param_1 + 3);
  return param_1;
}



/* Entry: 10076e2c4; end: 10076e2d3;  */

void FUN_10076e2c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10076e2d4; end: 10076e31b;  */

void FUN_10076e2d4(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10076e31c; end: 10076e323;  */

void FUN_10076e31c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  func_0x00010076e0d4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10076e324; end: 10076e347;  */

void FUN_10076e324(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10076e348; end: 10076e357;  */

void FUN_10076e348(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10076e358; end: 10076e3d3;  */

void FUN_10076e358(long param_1,long param_2)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110880860;
    lStack_38 = param_1;
    lStack_30 = param_2;
    if (param_2 != 0) {
      do {
        FUN_10076e348();
      } while (extraout_w10 != 0);
    }
    FUN_10015c218(&ppuStack_28,&lStack_38,FUN_10076e3d4);
    func_0x000107c61180();
    func_0x00010076e53c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10076e3d4; end: 10076e447;  */

void FUN_10076e3d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b80b8;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10076e348();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010076e508(&uStack_30);
  return;
}



/* Entry: 10076e448; end: 10076e487; -[SCNDeltaforceDeltaForceSyncClient .cxx_construct] */

undefined8 * FUN_10076e448(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10076e348();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10076e488; end: 10076e48f;  */

void FUN_10076e488(void)

{
  return;
}



/* Entry: 10076e490; end: 10076e52f; -[SCNDeltaforceDeltaForceSyncClient initWithCpp:] */

undefined1 * FUN_10076e490(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7d70;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10076e348();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010076e508(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10076e530; end: 10076e55f;  */

void FUN_10076e530(void)

{
  return;
}



/* Entry: 10076e560; end: 10076e57b; -[SCNDeltaforceHeaders .cxx_destruct] */

void FUN_10076e560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10076e57c; end: 10076e5bf;  */

void FUN_10076e57c(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010076e5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10076e5c0; end: 10076e64f;  */

undefined * FUN_10076e5c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bffc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd8(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dffc18,
                        &UNK_10ddbd258,&UNK_10ddbd33c,0x2b,0x10076eee0,0,&UNK_10ddbd3e8);
    do {
      if (puRam00000001136bffc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001136bffc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bffc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bffc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bffc8;
}



/* Entry: 10076e650; end: 10076e65b; -[SCNDeltaforceDeltaForceConfiguration .cxx_destruct] */

void FUN_10076e650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10076e65c; end: 10076e6d7;  */

undefined * FUN_10076e65c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c01c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e00418,
                        &UNK_10ddbd700,&UNK_10ddbd71c,3,FUN_100787738,0);
    do {
      if (puRam00000001136c01c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001136c01c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c01c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c01c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c01c8;
}



/* Entry: 10076e6d8; end: 10076e83b;  */

void FUN_10076e6d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_100083b20(&uStack_68);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = (undefined *)0x100a84d7c;
  puStack_70 = (undefined *)0x0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100a84cf8;
  puStack_80 = &UNK_1103dad68;
  ppuVar4 = &puStack_98;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = &UNK_1103dada0;
  func_0x000107c613fc(&UNK_1103dada0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  puStack_78 = &UNK_100c05ffc;
  puStack_98 = puVar2;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_100ba5314;
  puStack_80 = &UNK_1103dadb8;
  ppuVar6 = &puStack_98;
  puStack_70 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_70;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c42c14(uStack_68);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uStack_68);
  puVar5 = puVar3;
  func_0x000107c43bf4();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *param_1 = puVar5;
  return;
}



/* Entry: 10076e83c; end: 10076e8c3;  */

void FUN_10076e83c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112db0ea8;
  FUN_1000285a8(0x112db0ea8,&UNK_10d95b2c8);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10025a71c(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10076e8c4; end: 10076e8cb;  */

void FUN_10076e8c4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10076e8cc; end: 10076e9bf;  */

undefined * FUN_10076e8cc(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    FUN_1000285a8(0x112ec7f30);
    puVar4 = puVar7;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar9 + -1);
      uVar8 = (ulong)bVar1;
      uVar11 = puVar9[1];
      uVar10 = *puVar9;
      func_0x000107c615f0(uVar10);
      func_0x0001028c0d28();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10076e9bc);
        (*pcVar3)();
      }
      uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar8) = bVar1;
      puVar2 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar8 * 0x10);
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10076e9c0);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 10076e9c0; end: 10076e9df;  */

void FUN_10076e9c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f619a8);
  return;
}



/* Entry: 10076e9e0; end: 10076ea7f;  */

int FUN_10076e9e0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  func_0x000107c61174();
  if (lRam00000001136bfed0 != -1) {
    FUN_10002a2fc(0x1136bfed0,&PTR___NSConcreteGlobalBlock_1108b15e0);
  }
  uVar2 = uRam00000001136bfec8;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49804();
  func_0x000107c61170(uVar2);
  iVar4 = (int)uVar3;
  iVar1 = 6;
  if (iVar4 != -0x4524111 && iVar4 != 0) {
    iVar1 = iVar4;
  }
  func_0x000107c61170(param_1);
  return iVar1;
}



/* Entry: 10076ea80; end: 10076ea97;  */

void FUN_10076ea80(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136bfec8;
  ppuRam00000001136bfec8 = &PTR__OBJC_CLASS___NSConstantDictionary_111174978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10076ea98; end: 10076ec3f;  */

undefined8 * FUN_10076ea98(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar12 = param_2[2];
  uVar6 = param_2[3];
  param_1[2] = uVar12;
  param_1[3] = uVar6;
  uVar19 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = uVar19;
  param_1[5] = uVar7;
  uVar1 = param_2[6];
  uVar8 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar8;
  uVar2 = param_2[8];
  uVar9 = param_2[9];
  param_1[8] = uVar2;
  param_1[9] = uVar9;
  uVar15 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[10] = uVar15;
  param_1[0xb] = uVar13;
  uVar16 = param_2[0xc];
  uVar14 = param_2[0xd];
  param_1[0xc] = uVar16;
  param_1[0xd] = uVar14;
  uVar18 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar18;
  uVar3 = param_2[0x10];
  uVar10 = param_2[0x11];
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar10;
  uVar4 = param_2[0x12];
  uVar11 = param_2[0x13];
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar11;
  lVar17 = param_2[0x14];
  func_0x000107c6157c();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar16);
  func_0x000107c61174(uVar14);
  func_0x000107c615f0(uVar18);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar11);
  if (lVar17 == 0) {
    lVar17 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar17;
  }
  else {
    uVar12 = param_2[0x15];
    param_1[0x14] = lVar17;
    param_1[0x15] = uVar12;
    func_0x000107c6157c();
  }
  uVar19 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar19;
  uVar12 = param_2[0x18];
  param_1[0x18] = uVar12;
  func_0x000107c615f0(uVar19);
  func_0x000107c61434(uVar12);
  return param_1;
}



/* Entry: 10076ec40; end: 10076ec7b;  */

undefined8 FUN_10076ec40(undefined8 param_1,undefined8 param_2)

{
  FUN_10076ea98(param_2,param_1);
  return param_2;
}



/* Entry: 10076ec7c; end: 10076ee6f;  */

void FUN_10076ec7c(undefined8 *param_1)

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
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar12 = param_1[5];
  uVar9 = uVar12;
  func_0x000107c4b130();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
  func_0x000107c4b144();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar12;
  uVar9 = param_1[4];
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar10 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar10;
  uVar9 = *param_1;
  uVar12 = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x30) = uVar9;
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x000107c4dad8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  uVar13 = param_1[2];
  uVar11 = param_1[3];
  uVar9 = param_1[8];
  uVar14 = param_1[7];
  *(undefined8 *)(unaff_x20 + 0x48) = param_1[3];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar14;
  uVar9 = param_1[8];
  uVar3 = param_1[9];
  uVar12 = param_1[10];
  uVar4 = param_1[0xb];
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar12;
  uVar10 = param_1[0xc];
  uVar5 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar5;
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uVar15 = param_1[0xe];
  *(undefined8 *)(unaff_x20 + 0x90) = param_1[0xf];
  *(undefined8 *)(unaff_x20 + 0x88) = uVar15;
  uVar15 = param_1[0x10];
  uVar6 = param_1[0x11];
  *(undefined8 *)(unaff_x20 + 0x98) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar6;
  uVar1 = param_1[0x12];
  uVar7 = param_1[0x13];
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar7;
  uVar2 = param_1[0x14];
  uVar8 = param_1[0x15];
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
  uStack_78 = param_1[0x17];
  uStack_80 = param_1[0x16];
  uStack_88 = param_1[0x18];
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_78;
  *(undefined8 *)(unaff_x20 + 200) = uStack_80;
  func_0x000107c61174(uVar13);
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(uVar14);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar10);
  func_0x000107c61174(uVar5);
  FUN_10076ee88(&uStack_70,auStack_98,0x112f61ac0,&UNK_10dbbe358);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar7);
  FUN_10076eed0(uVar2,uVar8);
  FUN_10076ee88(&uStack_80,auStack_98,0x112f61ac8,&UNK_10dbbe360);
  FUN_10076ee88(&uStack_88,auStack_98,0x112f61ad0,&UNK_10dbbe368);
  return;
}



/* Entry: 10076ee70; end: 10076ee77; -[SCLensFavoritesServices lensFavoritesObservable] */

undefined8 FUN_10076ee70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10076ee78; end: 10076ee7f; -[SCLensFavoritesServices lensFavoritesUpdater] */

undefined8 FUN_10076ee78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10076ee80; end: 10076ee87; -[SCOffPlatformLinkGenerationServices offPlatformLinkGenerationService] */

undefined8 FUN_10076ee80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10076ee88; end: 10076eecf;  */

undefined8 FUN_10076ee88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10076eed0; end: 10076eefb;  */

void FUN_10076eed0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10076eefc; end: 10076efdf; +[SCCognacClientContextDevice descriptor] */

void FUN_10076eefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c01d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64e00,
                        &PTR____CFConstantStringClassReference_110e00438,&PTR_DAT_1130fc9c0,
                        &PTR_s_platform_1130fca58,4,0x18,0x1c);
    puRam00000001136c01d0 = puVar1;
  }
  return;
}



/* Entry: 10076efe0; end: 10076efeb;  */

void FUN_10076efe0(long param_1,long param_2)

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



/* Entry: 10076efec; end: 10076f077;  */

void FUN_10076efec(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(code **)(param_1 + 0x168) = FUN_10076f078;
  *(long *)(param_1 + 0x170) = param_1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10074775c(uVar3,param_1 + 0x160,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 10076f078; end: 10076f2bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10076f078(long param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_78;
  ulong auStack_70 [4];
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar6 = *param_2;
  bVar5 = uVar6 != 0;
  if (uVar6 != 0) {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = uVar6;
    func_0x000104a98258(param_1,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (*(int *)(param_1 + 0x768) == 2) {
    *(undefined4 *)(param_1 + 0x768) = 3;
    lVar8 = param_1 + 0xf8;
    FUN_1008ded94();
    if (lVar8 == 0) {
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[1] = 0;
      func_0x000104ab5920(&uStack_48,2,"goaway sent",0xb,&uStack_49,auStack_70 + 1);
      func_0x000104a98258(param_1,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        FUN_10084dad0();
      }
      puStack_38 = auStack_70 + 1;
      func_0x000100482b64(&puStack_38);
    }
    bVar5 = true;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x90) = 1;
      plVar1 = (long *)(param_1 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (!bVar5) {
        FUN_10076f2bc(&puStack_38,param_1 + 0xb40);
      }
      *(code **)(param_1 + 0x128) = FUN_100749ff0;
      *(long *)(param_1 + 0x130) = param_1;
      *(undefined8 *)(param_1 + 0x138) = 0;
      auStack_70[0] = 0;
      FUN_100747564(*(undefined8 *)(param_1 + 0x78),param_1 + 0x120,auStack_70);
      if ((auStack_70[0] & 1) != 0) {
        FUN_10084dad0();
      }
      goto LAB_10076f1e8;
    }
    if (iVar2 != 0) goto LAB_10076f1e8;
    func_0x000104a6e964(&UNK_10f5177aa,
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                        ,0x411);
  }
  FUN_10074a40c(param_1,0);
LAB_10076f1e8:
  uStack_78 = *param_2;
  if ((uStack_78 & 1) != 0) {
    piVar7 = (int *)(uStack_78 - 1);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar5) {
        *piVar7 = *piVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10076f350(param_1,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    FUN_10084dad0();
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 + -1 == 0) {
    func_0x000104a96f9c(param_1);
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 10076f2bc; end: 10076f313;  */

void FUN_10076f2bc(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  if (*param_2 != 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340d948;
    (*(code *)PTR___tlv_bootstrap_11340d948)();
    puVar2 = extraout_x8;
    do {
      puVar3 = (undefined8 *)*puVar2;
      puVar4 = *ppuVar1;
      *puVar2 = 0;
      plVar5 = (long *)(puVar4 + 8);
      if (*plVar5 != 0) {
        plVar5 = *(long **)(puVar4 + 0x10);
      }
      *plVar5 = (long)puVar2;
      *(undefined8 **)(puVar4 + 0x10) = puVar2;
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10076f314; end: 10076f34f;  */

void FUN_10076f314(undefined8 param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_2 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + (ulong)param_3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100467750();
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 10076f350; end: 10076f42f;  */

void FUN_10076f350(ulong param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_40;
  long lStack_38;
  
  if (*(long *)(param_1 + 0xce8) != 0) {
    FUN_10076f314(*(long *)(param_1 + 0xce8),*(undefined4 *)(param_1 + 0xcf0));
  }
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  uVar5 = param_1;
  FUN_10076f430(param_1,&lStack_38);
  if ((int)uVar5 != 0) {
    do {
      lVar3 = *(long *)(lStack_38 + 0x868);
      if (lVar3 != 0) {
        uVar5 = *param_2;
        if ((uVar5 & 1) != 0) {
          piVar4 = (int *)(uVar5 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_40 = uVar5;
        func_0x000104aa7c78(param_1,lStack_38,lVar3,lStack_38 + 0x858,lStack_38 + 0xd0,&uStack_40);
        if ((uVar5 & 1) != 0) {
          FUN_10084dad0(uVar5);
        }
        *(undefined8 *)(lStack_38 + 0x868) = 0;
      }
      FUN_1008e1b6c(lStack_38);
      uVar5 = param_1;
      FUN_10076f430(param_1,&lStack_38);
    } while ((uVar5 & 1) != 0);
  }
  FUN_1005a7050(param_1 + 0x310);
  return;
}



/* Entry: 10076f430; end: 10076f443;  */

bool FUN_10076f430(long param_1,long *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 *puVar4;
  
  lVar5 = 1;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    puVar4 = puVar3 + -0x10;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    plVar7 = (long *)(param_1 + lVar5 * 0x10 + 0xa8);
    lVar6 = *plVar7;
    if (lVar6 == 0) {
LAB_10074a2c8:
      *param_2 = lVar6;
      return lVar6 != 0;
    }
    pbVar1 = (byte *)(lVar6 + 0x98);
    if (((uint)*pbVar1 & 1 << lVar5) != 0) {
      lVar8 = *(long *)(lVar6 + lVar5 * 0x10 + 0x48);
      puVar2 = (undefined8 *)(param_1 + lVar5 * 0x10 + 0xb0);
      if (lVar8 != 0) {
        puVar2 = (undefined8 *)(lVar8 + lVar5 * 0x10 + 0x50);
      }
      *puVar2 = 0;
      *plVar7 = lVar8;
      *pbVar1 = *pbVar1 & ((byte)(1 << lVar5) ^ 0xff);
      goto LAB_10074a2c8;
    }
    unaff_x30 = FUN_10074a2e0;
    func_0x000107c2c2d8();
    lVar5 = 0;
    puVar3 = puVar3 + -0x10;
    unaff_x29 = puVar4;
  } while( true );
}



/* Entry: 10076f444; end: 10076f5eb; -[SCDefaultDeltaSyncService initWithProcessors:syncTokenRepository:syncClient:docObjectContext:performer:metricsReporter:] */

undefined1 *
FUN_10076f444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e7d80;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    pcVar4 = "DeltaSyncService._promiseLock";
    func_0x000107c60f50("DeltaSyncService._promiseLock",0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(char **)((long)puVar1 + 0x48) = pcVar4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076f5ec; end: 10076f653; +[SCCognacClientContextGpuInfo descriptor] */

void FUN_10076f5ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c01d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a64e50,
                        &PTR____CFConstantStringClassReference_110e00458,&PTR_DAT_1130fc9c0,
                        &PTR_DAT_1130fc9f8,3,0x20,0x1c);
    puRam00000001136c01d8 = puVar1;
  }
  return;
}



/* Entry: 10076f654; end: 10076f657;  */

void FUN_10076f654(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076f658; end: 10076f6a3;  */

void FUN_10076f658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10076f6a4; end: 10076f76f; -[SCSpartaService initWithSyncService:syncClient:metricsReporter:] */

undefined1 *
FUN_10076f6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e7dc0;
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
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076f770; end: 10076f7a7;  */

void FUN_10076f770(undefined8 *param_1,undefined8 param_2)

{
  FUN_1001cddb0();
  func_0x000107c613fc();
  FUN_10076f7c8();
  *param_1 = param_2;
  return;
}



/* Entry: 10076f7a8; end: 10076f7c7;  */

void FUN_10076f7a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f93800);
  return;
}



/* Entry: 10076f7c8; end: 10076f8c3;  */

void FUN_10076f7c8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar4 = &puStack_70;
  lVar2 = 0;
  FUN_10076f7a8();
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_50 = &UNK_1037ac6a0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1007642c8;
  puStack_58 = &UNK_110693a68;
  lStack_48 = lVar2;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c61580(lVar2,2);
  func_0x000107c61574(lVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61574(lVar2);
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  return;
}



/* Entry: 10076f8c4; end: 10076f8d7;  */

void FUN_10076f8c4(long param_1,long param_2)

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



/* Entry: 10076f8d8; end: 10076f91b;  */

void FUN_10076f8d8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x10));
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c615f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 10076f91c; end: 10076f957;  */

void FUN_10076f91c(void)

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



/* Entry: 10076f958; end: 10076f963;  */

void FUN_10076f958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10076f964; end: 10076fab7; -[SCUserInfoDeltaSyncFetcher initWithUserId:userSessionContext:unskippableKinds:allKinds:updatesFrequency:deltaSyncService:] */

undefined1 *
FUN_10076f964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126e8268;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10076fab8; end: 10076fb7f; -[SCUserInfoDeltaSyncFetcher beginFetching] */

void FUN_10076fab8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10076fb80; end: 10076fbab;  */

void FUN_10076fb80(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b6a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10076fbac; end: 10076fc13; -[SCUserInfoDeltaSyncFetcher _fetchDeltaSyncIfNecessary] */

void FUN_10076fbac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c49e24();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x000107c49e14();
    if ((uVar1 & 1) != 0) {
      lVar2 = 0x18;
      goto LAB_10076fbc8;
    }
  }
  lVar2 = 0x20;
LAB_10076fbc8:
  func_0x000107c3b708(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  func_0x000107c611b0();
  return;
}


