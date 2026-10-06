/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026b17e0; end: 1026b17ff;  */

void FUN_1026b17e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_1105363a0;
  param_1[4] = &PTR_DAT_110536360;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b1800; end: 1026b18af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b1800(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar2 = 0;
  FUN_1026a8d80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4918);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4920);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4930) = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4928) = uStack_38;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_110535498;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b18b0; end: 1026b18d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b18b0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*unaff_x20);
  lVar2 = 0;
  FUN_1026a8d80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4918);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4920);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4930) = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4928) = uStack_38;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_110535498;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b18d8; end: 1026b196f;  */

void FUN_1026b18d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105363d0;
  func_0x000107c613fc(&UNK_1105363d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b19e0,puVar1);
  return;
}



/* Entry: 1026b1970; end: 1026b19df;  */

void FUN_1026b1970(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = param_3;
  param_1[3] = &UNK_110536480;
  param_1[4] = &PTR_DAT_1105363e8;
  param_1[2] = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 1026b19e0; end: 1026b19eb;  */

void FUN_1026b19e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38,uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  *param_1 = uStack_38;
  param_1[1] = uVar2;
  param_1[3] = &UNK_110536480;
  param_1[4] = &PTR_DAT_1105363e8;
  param_1[2] = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 1026b19ec; end: 1026b1acf;  */

void FUN_1026b19ec(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar2 = uStack_48;
  uVar1 = 0x112ea7878;
  func_0x0001000285a8(0x112ea7878,&UNK_10dabb4e8);
  func_0x000107c610f8();
  func_0x00010017da58(uVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  func_0x000107c6157c(param_2);
  func_0x000100083b20(&uStack_48);
  lVar4 = 0;
  func_0x0001026a9254();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x30) = param_2;
  *(undefined8 *)(lVar4 + 0x38) = uStack_48;
  *(undefined **)(lVar4 + 0x40) = puVar3;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *param_1 = lVar4;
  param_1[1] = (long)&PTR_DAT_1105354f0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b1ad0; end: 1026b1aeb;  */

void FUN_1026b1ad0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *unaff_x20;
  func_0x000100083b20(&uStack_48,uVar1,unaff_x20[1],unaff_x20[2]);
  uVar3 = uStack_48;
  uVar2 = 0x112ea7878;
  func_0x0001000285a8(0x112ea7878,&UNK_10dabb4e8);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3,uVar2);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000100083b20(&uStack_48);
  lVar5 = 0;
  func_0x0001026a9254();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x30) = uVar1;
  *(undefined8 *)(lVar5 + 0x38) = uStack_48;
  *(undefined **)(lVar5 + 0x40) = puVar4;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *param_1 = lVar5;
  param_1[1] = (long)&PTR_DAT_1105354f0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b1aec; end: 1026b1b1b;  */

/* WARNING: Possible PIC construction at 0x0001026b1b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b1b04) */

void FUN_1026b1aec(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b1b1c; end: 1026b1bdb;  */

undefined8 * FUN_1026b1b1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b1bdc; end: 1026b1c27;  */

undefined8 * FUN_1026b1bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b1c28; end: 1026b1cc7;  */

int FUN_1026b1c28(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b1cc8; end: 1026b1d47;  */

void FUN_1026b1cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105364b8;
  func_0x000107c613fc(&UNK_1105364b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026b1d48,puVar1);
  return;
}



/* Entry: 1026b1d48; end: 1026b1d83;  */

/* WARNING: Possible PIC construction at 0x0001026b1d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b1d74) */

void FUN_1026b1d48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110536568;
  param_1[4] = &PTR_DAT_1105364d0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b1d84; end: 1026b1e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b1d84(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar4 = 0;
  FUN_10269ba5c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb4050);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb4068) = 0;
  *(long *)(lVar5 + _DAT_112eb4058) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb4060) = uVar3;
  plVar6 = &lStack_48;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534b40;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b1e64; end: 1026b1e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b1e64(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*unaff_x20,unaff_x20[1]);
  lVar2 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar3 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar4 = 0;
  FUN_10269ba5c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb4050);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb4068) = 0;
  *(long *)(lVar5 + _DAT_112eb4058) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb4060) = uVar3;
  plVar6 = &lStack_48;
  lStack_48 = lVar5;
  lStack_40 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534b40;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b1e7c; end: 1026b1ed7;  */

/* WARNING: Possible PIC construction at 0x0001026b1e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b1e94) */

void FUN_1026b1e7c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b1ed8; end: 1026b1f33;  */

undefined8 * FUN_1026b1ed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b1f34; end: 1026b1f6f;  */

undefined8 * FUN_1026b1f34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b1f70; end: 1026b200b;  */

int FUN_1026b1f70(ulong *param_1,int param_2)

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



/* Entry: 1026b200c; end: 1026b208b;  */

void FUN_1026b200c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536598;
  func_0x000107c613fc(&UNK_110536598,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026b208c,puVar1);
  return;
}



/* Entry: 1026b208c; end: 1026b20c7;  */

/* WARNING: Possible PIC construction at 0x0001026b20b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b20b8) */

void FUN_1026b208c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110536648;
  param_1[4] = &PTR_DAT_1105365b0;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b20c8; end: 1026b2167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b20c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = 0;
  func_0x00010269bd28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(long *)(lVar3 + 0x20) = lVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110534b80;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b2168; end: 1026b217f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b2168(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38,*unaff_x20,unaff_x20[1]);
  lVar1 = lStack_38;
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = 0;
  func_0x00010269bd28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(long *)(lVar3 + 0x20) = lVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_110534b80;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b2180; end: 1026b21db;  */

/* WARNING: Possible PIC construction at 0x0001026b2194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b2198) */

void FUN_1026b2180(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b21dc; end: 1026b2237;  */

undefined8 * FUN_1026b21dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2238; end: 1026b2273;  */

undefined8 * FUN_1026b2238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2274; end: 1026b230f;  */

int FUN_1026b2274(ulong *param_1,int param_2)

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



/* Entry: 1026b2310; end: 1026b2523;  */

void FUN_1026b2310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536678;
  func_0x000107c613fc(&UNK_110536678,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_1026b2524,puVar1);
  return;
}



/* Entry: 1026b2524; end: 1026b2557;  */

void FUN_1026b2524(void)

{
  long unaff_x20;
  
  func_0x0001026b2424(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1026b2558; end: 1026b2973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b2558(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    uVar12 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(lVar5,uVar12);
    puVar7 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4c370();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar4 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4c440();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(&lStack_68);
    lVar4 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    lVar10 = lStack_68;
    func_0x000107c4e26c();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    uVar11 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    uVar12 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar17 = *(long *)(lStack_68 + _DAT_1130831b0);
    lVar13 = lVar17;
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    if (lVar17 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar13 + _DAT_113083398);
      func_0x000107c61170(lVar13);
    }
    uVar16 = *unaff_x20;
    lVar14 = 0;
    FUN_10269caec();
    lVar17 = lVar14;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar17 + _DAT_112eb4148);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar13 = _DAT_112eb41a0;
    func_0x000107c61614(lVar17 + _DAT_112eb41a0,0);
    *(undefined8 *)(lVar17 + _DAT_112eb41a8) = 0;
    *(undefined8 *)(lVar17 + _DAT_112eb4150) = uVar16;
    *(long *)(lVar17 + _DAT_112eb4158) = lVar6;
    *(long *)(lVar17 + _DAT_112eb4160) = lVar8;
    *(long *)(lVar17 + _DAT_112eb4168) = lVar5;
    *(long *)(lVar17 + _DAT_112eb4170) = lVar9;
    *(undefined **)(lVar17 + _DAT_112eb4178) = puVar7;
    *(long *)(lVar17 + _DAT_112eb4180) = lVar4;
    *(long *)(lVar17 + _DAT_112eb4188) = lVar10;
    *(undefined8 *)(lVar17 + _DAT_112eb4190) = uVar11;
    func_0x000107c61604(lVar17 + lVar13,uVar12);
    *(undefined1 *)(lVar17 + _DAT_112eb4198) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_78 = lVar17;
    lStack_70 = lVar14;
    func_0x000107c61174(uVar11);
    func_0x000107c6157c(uVar16);
    func_0x000107c615f0(lVar6);
    func_0x000107c61174(lVar8);
    func_0x000107c61174(lVar5);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(lVar4);
    func_0x000107c61174(lVar10);
    plVar15 = &lStack_78;
    func_0x000107c61154(plVar15,puVar3);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110534bb8;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



/* Entry: 1026b2974; end: 1026b2987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b2974(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar6 = lStack_68;
  lVar5 = lStack_68;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    uVar12 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(lVar5,uVar12);
    puVar7 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    lVar8 = lStack_68;
    func_0x000107c4c370();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar4 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4c440();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(&lStack_68);
    lVar4 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    lVar10 = lStack_68;
    func_0x000107c4e26c();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    uVar11 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar13 = lStack_68;
    uVar12 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    func_0x000100083b20(&lStack_68);
    lVar17 = *(long *)(lStack_68 + _DAT_1130831b0);
    lVar13 = lVar17;
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    if (lVar17 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar13 + _DAT_113083398);
      func_0x000107c61170(lVar13);
    }
    uVar16 = *unaff_x20;
    lVar14 = 0;
    FUN_10269caec();
    lVar17 = lVar14;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar17 + _DAT_112eb4148);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar13 = _DAT_112eb41a0;
    func_0x000107c61614(lVar17 + _DAT_112eb41a0,0);
    *(undefined8 *)(lVar17 + _DAT_112eb41a8) = 0;
    *(undefined8 *)(lVar17 + _DAT_112eb4150) = uVar16;
    *(long *)(lVar17 + _DAT_112eb4158) = lVar6;
    *(long *)(lVar17 + _DAT_112eb4160) = lVar8;
    *(long *)(lVar17 + _DAT_112eb4168) = lVar5;
    *(long *)(lVar17 + _DAT_112eb4170) = lVar9;
    *(undefined **)(lVar17 + _DAT_112eb4178) = puVar7;
    *(long *)(lVar17 + _DAT_112eb4180) = lVar4;
    *(long *)(lVar17 + _DAT_112eb4188) = lVar10;
    *(undefined8 *)(lVar17 + _DAT_112eb4190) = uVar11;
    func_0x000107c61604(lVar17 + lVar13,uVar12);
    *(undefined1 *)(lVar17 + _DAT_112eb4198) = uVar2;
    puVar3 = PTR_s_init_1125d9248;
    lStack_78 = lVar17;
    lStack_70 = lVar14;
    func_0x000107c61174(uVar11);
    func_0x000107c6157c(uVar16);
    func_0x000107c615f0(lVar6);
    func_0x000107c61174(lVar8);
    func_0x000107c61174(lVar5);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(lVar4);
    func_0x000107c61174(lVar10);
    plVar15 = &lStack_78;
    func_0x000107c61154(plVar15,puVar3);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110534bb8;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



/* Entry: 1026b2988; end: 1026b2a1b;  */

long FUN_1026b2988(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b2a1c; end: 1026b2acf;  */

undefined8 * FUN_1026b2a1c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar1 = param_2[2];
  uVar6 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  uVar2 = param_2[4];
  uVar7 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar7;
  uVar3 = param_2[6];
  uVar8 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  uVar4 = param_2[8];
  uVar9 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar9;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  return param_1;
}



/* Entry: 1026b2ad0; end: 1026b2beb;  */

undefined8 * FUN_1026b2ad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2bec; end: 1026b2c87;  */

undefined8 * FUN_1026b2bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2c88; end: 1026b2d33;  */

int FUN_1026b2c88(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b2d34; end: 1026b2d9f;  */

void FUN_1026b2d34(void)

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



/* Entry: 1026b2da0; end: 1026b2e1f;  */

void FUN_1026b2da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105367a0;
  func_0x000107c613fc(&UNK_1105367a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026b2e20,puVar1);
  return;
}



/* Entry: 1026b2e20; end: 1026b2e5b;  */

/* WARNING: Possible PIC construction at 0x0001026b2e48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b2e4c) */

void FUN_1026b2e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110536850;
  param_1[4] = &PTR_DAT_1105367b8;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b2e5c; end: 1026b2e83;  */

void FUN_1026b2e5c(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Entry: 1026b2e84; end: 1026b2edf;  */

/* WARNING: Possible PIC construction at 0x0001026b2e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b2e9c) */

void FUN_1026b2e84(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b2ee0; end: 1026b2f3b;  */

undefined8 * FUN_1026b2ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2f3c; end: 1026b2f77;  */

undefined8 * FUN_1026b2f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b2f78; end: 1026b3013;  */

int FUN_1026b2f78(ulong *param_1,int param_2)

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



/* Entry: 1026b3014; end: 1026b30ab;  */

void FUN_1026b3014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536880;
  func_0x000107c613fc(&UNK_110536880,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b30f8,puVar1);
  return;
}



/* Entry: 1026b30ac; end: 1026b30f7;  */

/* WARNING: Possible PIC construction at 0x0001026b30dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b30e0) */

void FUN_1026b30ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[3] = &UNK_110536930;
  param_1[4] = &PTR_DAT_110536898;
  param_1[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b30f8; end: 1026b3103;  */

/* WARNING: Possible PIC construction at 0x0001026b30dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b30e0) */

void FUN_1026b30f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[1] = uVar1;
  param_1[3] = &UNK_110536930;
  param_1[4] = &PTR_DAT_110536898;
  param_1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b3104; end: 1026b320b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b3104(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  lVar5 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_48);
  lVar4 = 0;
  FUN_10269d390();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb41d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb41f8) = 0;
  *(long *)(lVar5 + _DAT_112eb41e0) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb41e8) = uVar3;
  *(long *)(lVar5 + _DAT_112eb41f0) = lStack_48;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534d28;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b320c; end: 1026b3227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b320c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  lVar5 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(&lStack_48);
  lVar4 = 0;
  FUN_10269d390();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb41d8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb41f8) = 0;
  *(long *)(lVar5 + _DAT_112eb41e0) = lVar2;
  *(undefined8 *)(lVar5 + _DAT_112eb41e8) = uVar3;
  *(long *)(lVar5 + _DAT_112eb41f0) = lStack_48;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534d28;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b3228; end: 1026b3257;  */

/* WARNING: Possible PIC construction at 0x0001026b323c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b3240) */

void FUN_1026b3228(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b3258; end: 1026b3317;  */

undefined8 * FUN_1026b3258(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b3318; end: 1026b3363;  */

undefined8 * FUN_1026b3318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b3364; end: 1026b3403;  */

int FUN_1026b3364(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b3404; end: 1026b3687;  */

void FUN_1026b3404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536968;
  func_0x000107c613fc(&UNK_110536968,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
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
  func_0x0001000823a8(FUN_1026b3688,puVar1);
  return;
}



/* Entry: 1026b3688; end: 1026b36c3;  */

void FUN_1026b3688(void)

{
  long unaff_x20;
  
  func_0x0001026b3548(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1026b36c4; end: 1026b3bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b36c4(long *param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar17 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar4 = *(undefined8 *)(lStack_68 + _DAT_113072718);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar5 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x0001000285a8(0x112ea7840,&UNK_10dabb498);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2);
    puVar6 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    puVar16 = &UNK_10daaf8a0;
    func_0x0001000285a8(0x112e4ccf0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2);
    puVar7 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    uVar18 = *unaff_x20;
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar12 = uVar8;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    uVar8 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar10 = lStack_68;
    func_0x000107c4d1cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar11 = lStack_68;
    func_0x000107c4e830();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar14 = lStack_68;
    uVar12 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar14);
    func_0x000100083b20(&lStack_68);
    lVar13 = 0;
    FUN_1026aa160();
    lVar14 = lVar13;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a30);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar14 + _DAT_112eb4a38) = uVar18;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a40);
    *puVar1 = uVar8;
    puVar1[1] = puVar16;
    *(long *)(lVar14 + _DAT_112eb4a48) = lVar3;
    *(long *)(lVar14 + _DAT_112eb4a50) = lVar9;
    *(long *)(lVar14 + _DAT_112eb4a58) = lVar5;
    *(undefined8 *)(lVar14 + _DAT_112eb4a60) = uVar4;
    *(long *)(lVar14 + _DAT_112eb4a68) = lVar10;
    *(long *)(lVar14 + _DAT_112eb4a70) = lVar11;
    *(long *)(lVar14 + _DAT_112eb4a78) = lVar2;
    *(undefined **)(lVar14 + _DAT_112eb4a80) = puVar6;
    *(undefined **)(lVar14 + _DAT_112eb4a88) = puVar7;
    *(undefined8 *)(lVar14 + _DAT_112eb4a90) = uVar12;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar18);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar5);
    func_0x000107c61174();
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x0001090218f0(lStack_68);
    *(double *)(lVar14 + _DAT_112eb4a98) = (double)param_2;
    plVar15 = &lStack_78;
    lStack_78 = lVar14;
    lStack_70 = lVar13;
    func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar12);
    uVar17 = 0;
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110535548;
  }
  *(undefined1 *)(param_1 + 5) = uVar17;
  return;
}



/* Entry: 1026b3bd0; end: 1026b3be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b3bd0(long *param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar2 = *(long *)(lStack_68 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar17 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar4 = *(undefined8 *)(lStack_68 + _DAT_113072718);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar5 = lStack_68;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x0001000285a8(0x112ea7840,&UNK_10dabb498);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2);
    puVar6 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    puVar16 = &UNK_10daaf8a0;
    func_0x0001000285a8(0x112e4ccf0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2);
    puVar7 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    uVar18 = *unaff_x20;
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar12 = uVar8;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    uVar8 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar9 = lStack_68;
    func_0x000107c4b8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar10 = lStack_68;
    func_0x000107c4d1cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    lVar11 = lStack_68;
    func_0x000107c4e830();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x000100083b20(&lStack_68);
    lVar14 = lStack_68;
    uVar12 = *(undefined8 *)(lStack_68 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lVar14);
    func_0x000100083b20(&lStack_68);
    lVar13 = 0;
    FUN_1026aa160();
    lVar14 = lVar13;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a28);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a30);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar14 + _DAT_112eb4a38) = uVar18;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4a40);
    *puVar1 = uVar8;
    puVar1[1] = puVar16;
    *(long *)(lVar14 + _DAT_112eb4a48) = lVar3;
    *(long *)(lVar14 + _DAT_112eb4a50) = lVar9;
    *(long *)(lVar14 + _DAT_112eb4a58) = lVar5;
    *(undefined8 *)(lVar14 + _DAT_112eb4a60) = uVar4;
    *(long *)(lVar14 + _DAT_112eb4a68) = lVar10;
    *(long *)(lVar14 + _DAT_112eb4a70) = lVar11;
    *(long *)(lVar14 + _DAT_112eb4a78) = lVar2;
    *(undefined **)(lVar14 + _DAT_112eb4a80) = puVar6;
    *(undefined **)(lVar14 + _DAT_112eb4a88) = puVar7;
    *(undefined8 *)(lVar14 + _DAT_112eb4a90) = uVar12;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar18);
    func_0x000107c61174(lVar3);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar5);
    func_0x000107c61174();
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x0001090218f0(lStack_68);
    *(double *)(lVar14 + _DAT_112eb4a98) = (double)param_2;
    plVar15 = &lStack_78;
    lStack_78 = lVar14;
    lStack_70 = lVar13;
    func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar12);
    uVar17 = 0;
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110535548;
  }
  *(undefined1 *)(param_1 + 5) = uVar17;
  return;
}



/* Entry: 1026b3be4; end: 1026b3c8f;  */

long FUN_1026b3be4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b3c90; end: 1026b3d7b;  */

undefined8 * FUN_1026b3c90(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar7;
  uVar2 = param_2[4];
  uVar8 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar8;
  uVar3 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar9;
  uVar4 = param_2[8];
  uVar10 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar10;
  uVar5 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar11;
  uVar12 = param_2[0xc];
  param_1[0xc] = uVar12;
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  return param_1;
}



/* Entry: 1026b3d7c; end: 1026b3edf;  */

undefined8 * FUN_1026b3d7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b3ee0; end: 1026b3fa3;  */

undefined8 * FUN_1026b3ee0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[10]);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b3fa4; end: 1026b4053;  */

int FUN_1026b3fa4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xd] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b4054; end: 1026b409f;  */

void FUN_1026b4054(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026b40a0,param_1);
  return;
}



/* Entry: 1026b40a0; end: 1026b40bf;  */

void FUN_1026b40a0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110536ad0;
  param_1[4] = &PTR_DAT_110536a90;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b40c0; end: 1026b416f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b40c0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar2 = 0;
  FUN_1026aaafc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4ac8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4ad0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4ae0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4ad8) = uStack_38;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_1105355a0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b4170; end: 1026b4197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b4170(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x20;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*unaff_x20);
  lVar2 = 0;
  FUN_1026aaafc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4ac8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4ad0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4ae0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4ad8) = uStack_38;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  param_1[1] = (long)&PTR_DAT_1105355a0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b4198; end: 1026b422f;  */

void FUN_1026b4198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536b00;
  func_0x000107c613fc(&UNK_110536b00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b427c,puVar1);
  return;
}



/* Entry: 1026b4230; end: 1026b427b;  */

/* WARNING: Possible PIC construction at 0x0001026b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b4264) */

void FUN_1026b4230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[3] = &UNK_110536bb0;
  param_1[4] = &PTR_DAT_110536b18;
  param_1[2] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b427c; end: 1026b4287;  */

/* WARNING: Possible PIC construction at 0x0001026b4260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b4264) */

void FUN_1026b427c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = uVar2;
  param_1[3] = &UNK_110536bb0;
  param_1[4] = &PTR_DAT_110536b18;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b4288; end: 1026b439f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b4288(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c5a86c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar5 = 0;
  FUN_10269d768();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112eb4228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar6 + _DAT_112eb4230) = lVar3;
  *(long *)(lVar6 + _DAT_112eb4238) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112eb4240) = uVar4;
  plVar7 = &lStack_58;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_110534d58;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b43a0; end: 1026b43bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b43a0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  lVar2 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c5a86c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar5 = 0;
  FUN_10269d768();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112eb4228);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar6 + _DAT_112eb4230) = lVar3;
  *(long *)(lVar6 + _DAT_112eb4238) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112eb4240) = uVar4;
  plVar7 = &lStack_58;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_110534d58;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b43bc; end: 1026b43eb;  */

/* WARNING: Possible PIC construction at 0x0001026b43d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b43d4) */

void FUN_1026b43bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b43ec; end: 1026b44ab;  */

undefined8 * FUN_1026b43ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b44ac; end: 1026b44f7;  */

undefined8 * FUN_1026b44ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b44f8; end: 1026b4597;  */

int FUN_1026b44f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b4598; end: 1026b462f;  */

void FUN_1026b4598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536be8;
  func_0x000107c613fc(&UNK_110536be8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b467c,puVar1);
  return;
}



/* Entry: 1026b4630; end: 1026b467b;  */

/* WARNING: Possible PIC construction at 0x0001026b4660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b4664) */

void FUN_1026b4630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_4;
  param_1[1] = param_3;
  param_1[3] = &UNK_110536c98;
  param_1[4] = &PTR_DAT_110536c00;
  param_1[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b467c; end: 1026b4687;  */

/* WARNING: Possible PIC construction at 0x0001026b4660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b4664) */

void FUN_1026b467c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[1] = uVar2;
  param_1[3] = &UNK_110536c98;
  param_1[4] = &PTR_DAT_110536c00;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1026b4688; end: 1026b47e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b4688(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar7 = lStack_48;
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c52060();
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = 0;
  FUN_10269dc38();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb4270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb4290) = 0;
  *(long *)(lVar5 + _DAT_112eb4278) = lVar2;
  *(long *)(lVar5 + _DAT_112eb4280) = lVar7;
  *(undefined8 *)(lVar5 + _DAT_112eb4288) = uVar3;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534d88;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b47e8; end: 1026b4803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b47e8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  lVar2 = lStack_48;
  lVar7 = lStack_48;
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c52060();
    func_0x000107c615e8(lVar2);
  }
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = 0;
  FUN_10269dc38();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb4270);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112eb4290) = 0;
  *(long *)(lVar5 + _DAT_112eb4278) = lVar2;
  *(long *)(lVar5 + _DAT_112eb4280) = lVar7;
  *(undefined8 *)(lVar5 + _DAT_112eb4288) = uVar3;
  plVar6 = &lStack_58;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  *param_1 = (long)plVar6;
  param_1[1] = (long)&PTR_DAT_110534d88;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b4804; end: 1026b4833;  */

/* WARNING: Possible PIC construction at 0x0001026b4818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b481c) */

void FUN_1026b4804(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1026b4834; end: 1026b48f3;  */

undefined8 * FUN_1026b4834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b48f4; end: 1026b493f;  */

undefined8 * FUN_1026b48f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b4940; end: 1026b49df;  */

int FUN_1026b4940(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b49e0; end: 1026b4abf;  */

void FUN_1026b49e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536cd0;
  func_0x000107c613fc(&UNK_110536cd0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1026b4b90,puVar1);
  return;
}



/* Entry: 1026b4ac0; end: 1026b4b8f;  */

void FUN_1026b4ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_110536d80;
  param_1[4] = &PTR_DAT_110536ce8;
  puVar1 = &UNK_110536dc0;
  func_0x000107c613fc(&UNK_110536dc0,0x48,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x10) = uStack_58;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  return;
}



/* Entry: 1026b4b90; end: 1026b4ba3;  */

void FUN_1026b4b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000100083b20(&uStack_58);
  param_1[3] = &UNK_110536d80;
  param_1[4] = &PTR_DAT_110536ce8;
  puVar6 = &UNK_110536dc0;
  func_0x000107c613fc(&UNK_110536dc0,0x48,7);
  *param_1 = puVar6;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar2;
  *(undefined8 *)(puVar6 + 0x30) = uVar5;
  *(undefined8 *)(puVar6 + 0x38) = uVar4;
  *(undefined8 *)(puVar6 + 0x40) = uVar3;
  *(undefined8 *)(puVar6 + 0x10) = uStack_58;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  return;
}



/* Entry: 1026b4ba4; end: 1026b4dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b4ba4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *unaff_x20;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&lStack_70);
  lVar2 = lStack_70;
  lVar1 = *(long *)(lStack_70 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar12 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar3 = 0x112ea7838;
    func_0x0001000285a8(0x112ea7838,&UNK_10dabb488);
    func_0x000107c610f8();
    func_0x00010017da58(lVar1,uVar3);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar1);
    uVar5 = 0;
    func_0x0001026ab468();
    uVar6 = *unaff_x20;
    func_0x000107c61174();
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar7 = *(undefined8 *)(lStack_70 + _DAT_113083f78);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar1);
    uVar8 = uVar7;
    func_0x000107c5d984(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uVar8;
    func_0x000107c5faec(uVar8);
    func_0x000107c61170(uVar8);
    lVar9 = lVar2;
    func_0x000107c3eca4(lVar2);
    func_0x000107c61180();
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar10 = *(undefined8 *)(lStack_70 + _DAT_112fcd5d8);
    func_0x000107c61174(uVar10);
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    func_0x000100083b20(&lStack_70);
    func_0x000107c61170(lVar2);
    uVar11 = *(undefined8 *)(lStack_70 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lStack_70);
    uVar8 = uVar11;
    func_0x000107c614f0();
    FUN_1026abb9c(uVar6,uVar7,uVar3,lVar9,uVar10,puVar4,lVar1,uStack_68,uVar11,uVar5,uVar8);
    uVar12 = 0;
    *param_1 = uVar6;
    param_1[1] = &PTR_DAT_1105355f8;
  }
  *(undefined1 *)(param_1 + 5) = uVar12;
  return;
}



/* Entry: 1026b4dfc; end: 1026b4e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b4dfc(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *unaff_x20;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&lStack_70);
  lVar2 = lStack_70;
  lVar1 = *(long *)(lStack_70 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    uVar12 = 0xff;
  }
  else {
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar3 = 0x112ea7838;
    func_0x0001000285a8(0x112ea7838,&UNK_10dabb488);
    func_0x000107c610f8();
    func_0x00010017da58(lVar1,uVar3);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(lVar1);
    uVar5 = 0;
    func_0x0001026ab468();
    uVar6 = *unaff_x20;
    func_0x000107c61174();
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar7 = *(undefined8 *)(lStack_70 + _DAT_113083f78);
    func_0x000107c61174(uVar7);
    func_0x000107c61170(lVar1);
    uVar8 = uVar7;
    func_0x000107c5d984(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    uVar7 = uVar8;
    func_0x000107c5faec(uVar8);
    func_0x000107c61170(uVar8);
    lVar9 = lVar2;
    func_0x000107c3eca4(lVar2);
    func_0x000107c61180();
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    uVar10 = *(undefined8 *)(lStack_70 + _DAT_112fcd5d8);
    func_0x000107c61174(uVar10);
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_70);
    lVar1 = lStack_70;
    func_0x000100083b20(&lStack_70);
    func_0x000107c61170(lVar2);
    uVar11 = *(undefined8 *)(lStack_70 + _DAT_112eb7d80);
    func_0x000107c61174();
    func_0x000107c61170(lStack_70);
    uVar8 = uVar11;
    func_0x000107c614f0();
    FUN_1026abb9c(uVar6,uVar7,uVar3,lVar9,uVar10,puVar4,lVar1,uStack_68,uVar11,uVar5,uVar8);
    uVar12 = 0;
    *param_1 = uVar6;
    param_1[1] = &PTR_DAT_1105355f8;
  }
  *(undefined1 *)(param_1 + 5) = uVar12;
  return;
}



/* Entry: 1026b4e10; end: 1026b4e8b;  */

long FUN_1026b4e10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b4e8c; end: 1026b4f17;  */

undefined8 * FUN_1026b4e8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar4 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  uVar6 = param_2[6];
  param_1[6] = uVar6;
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  return param_1;
}



/* Entry: 1026b4f18; end: 1026b4feb;  */

undefined8 * FUN_1026b4f18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b4fec; end: 1026b5067;  */

undefined8 * FUN_1026b4fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b5068; end: 1026b510b;  */

int FUN_1026b5068(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b510c; end: 1026b524b;  */

void FUN_1026b510c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536df0;
  func_0x000107c613fc(&UNK_110536df0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026b524c,puVar1);
  return;
}



/* Entry: 1026b524c; end: 1026b5257;  */

void FUN_1026b524c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  param_1[3] = &UNK_110536ea0;
  param_1[4] = &PTR_DAT_110536e08;
  puVar4 = &UNK_110536ed0;
  func_0x000107c613fc(&UNK_110536ed0,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026b5258; end: 1026b5357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b5258(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_58;
  
  uVar2 = 0;
  FUN_1026ac1f8(0);
  func_0x000107c61174();
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar3 = lStack_58;
  func_0x000107c43e84(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lStack_58);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  FUN_1026ac4f4(param_2,lVar3,lVar1,uVar4,uVar2,uVar5);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_1105356a0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b5358; end: 1026b5373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b5358(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lStack_58;
  
  uVar3 = *unaff_x20;
  uVar2 = 0;
  FUN_1026ac1f8(0,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  func_0x000107c61174();
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar4 = lStack_58;
  func_0x000107c43e84(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_58);
  uVar6 = uVar5;
  func_0x000107c614f0(uVar5);
  FUN_1026ac4f4(uVar3,lVar4,lVar1,uVar5,uVar2,uVar6);
  *param_1 = uVar3;
  param_1[1] = &PTR_DAT_1105356a0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 1026b5374; end: 1026b53d7;  */

long FUN_1026b5374(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}


