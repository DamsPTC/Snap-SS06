/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026b53d8; end: 1026b54b7;  */

undefined8 * FUN_1026b53d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026b54b8; end: 1026b550b;  */

undefined8 * FUN_1026b54b8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1026b550c; end: 1026b55a3;  */

int FUN_1026b550c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b55a4; end: 1026b563b;  */

void FUN_1026b55a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536f00;
  func_0x000107c613fc(&UNK_110536f00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b56ac,puVar1);
  return;
}



/* Entry: 1026b563c; end: 1026b56ab;  */

void FUN_1026b563c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = param_4;
  param_1[3] = &UNK_110536fb0;
  param_1[4] = &PTR_DAT_110536f18;
  param_1[2] = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 1026b56ac; end: 1026b56b7;  */

void FUN_1026b56ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = uStack_38;
  param_1[1] = uVar2;
  param_1[3] = &UNK_110536fb0;
  param_1[4] = &PTR_DAT_110536f18;
  param_1[2] = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 1026b56b8; end: 1026b57cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b56b8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112eb87d8);
  uVar3 = ((undefined8 *)(param_2 + _DAT_112eb87d8))[1];
  func_0x000107c61434(uVar3);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar6 = 0;
  FUN_10269dfec();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb42c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112eb42e0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb42c8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar7 + _DAT_112eb42d0) = lVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb42d8) = uVar5;
  plVar8 = &lStack_58;
  lStack_58 = lVar7;
  lStack_50 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  param_1[1] = (long)&PTR_DAT_110534db8;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b57cc; end: 1026b57e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b57cc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + _DAT_112eb87d8);
  uVar3 = ((undefined8 *)(*unaff_x20 + _DAT_112eb87d8))[1];
  func_0x000107c61434(uVar3,unaff_x20[1],unaff_x20[2]);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar6 = 0;
  FUN_10269dfec();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb42c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112eb42e0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb42c8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar7 + _DAT_112eb42d0) = lVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb42d8) = uVar5;
  plVar8 = &lStack_58;
  lStack_58 = lVar7;
  lStack_50 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  param_1[1] = (long)&PTR_DAT_110534db8;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b57e8; end: 1026b5817;  */

/* WARNING: Possible PIC construction at 0x0001026b5804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b5808) */

void FUN_1026b57e8(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1026b5818; end: 1026b58d7;  */

undefined8 * FUN_1026b5818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b58d8; end: 1026b5923;  */

undefined8 * FUN_1026b58d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
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



/* Entry: 1026b5924; end: 1026b59c3;  */

int FUN_1026b5924(ulong *param_1,int param_2)

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



/* Entry: 1026b59c4; end: 1026b5a5b;  */

void FUN_1026b59c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110536fe8;
  func_0x000107c613fc(&UNK_110536fe8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b5acc,puVar1);
  return;
}



/* Entry: 1026b5a5c; end: 1026b5acb;  */

void FUN_1026b5a5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = param_4;
  param_1[3] = &UNK_110537098;
  param_1[4] = &PTR_DAT_110537000;
  param_1[2] = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 1026b5acc; end: 1026b5ad7;  */

void FUN_1026b5acc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = uStack_38;
  param_1[1] = uVar2;
  param_1[3] = &UNK_110537098;
  param_1[4] = &PTR_DAT_110537000;
  param_1[2] = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 1026b5ad8; end: 1026b5beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b5ad8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112eb8808);
  uVar3 = ((undefined8 *)(param_2 + _DAT_112eb8808))[1];
  func_0x000107c61434(uVar3);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar6 = 0;
  FUN_10269e3d8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb4310);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112eb4330) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb4318);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar7 + _DAT_112eb4320) = lVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb4328) = uVar5;
  plVar8 = &lStack_58;
  lStack_58 = lVar7;
  lStack_50 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  param_1[1] = (long)&PTR_DAT_110534de8;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b5bec; end: 1026b5c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b5bec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + _DAT_112eb8808);
  uVar3 = ((undefined8 *)(*unaff_x20 + _DAT_112eb8808))[1];
  func_0x000107c61434(uVar3,unaff_x20[1],unaff_x20[2]);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar6 = 0;
  FUN_10269e3d8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb4310);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112eb4330) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112eb4318);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar7 + _DAT_112eb4320) = lVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb4328) = uVar5;
  plVar8 = &lStack_58;
  lStack_58 = lVar7;
  lStack_50 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  param_1[1] = (long)&PTR_DAT_110534de8;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b5c08; end: 1026b5c37;  */

/* WARNING: Possible PIC construction at 0x0001026b5c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b5c28) */

void FUN_1026b5c08(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1026b5c38; end: 1026b5cf7;  */

undefined8 * FUN_1026b5c38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026b5cf8; end: 1026b5d43;  */

undefined8 * FUN_1026b5cf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
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



/* Entry: 1026b5d44; end: 1026b5de3;  */

int FUN_1026b5d44(ulong *param_1,int param_2)

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



/* Entry: 1026b5de4; end: 1026b5f23;  */

void FUN_1026b5de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105370d0;
  func_0x000107c613fc(&UNK_1105370d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026b5f24,puVar1);
  return;
}



/* Entry: 1026b5f24; end: 1026b5f2f;  */

void FUN_1026b5f24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10));
  param_1[3] = &UNK_110537180;
  param_1[4] = &PTR_DAT_1105370e8;
  puVar4 = &UNK_1105371b0;
  func_0x000107c613fc(&UNK_1105371b0,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar1;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026b5f30; end: 1026b6097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b5f30(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  uVar4 = 0x112ea7888;
  func_0x0001000285a8(0x112ea7888,&UNK_10dabb500);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar4);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  uVar8 = *(undefined8 *)(param_2 + _DAT_112eb8838);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar5 = 0;
  FUN_10269e85c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112eb4360);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112eb4368) = uVar8;
  *(undefined **)(lVar6 + _DAT_112eb4370) = puVar3;
  *(long *)(lVar6 + _DAT_112eb4378) = lVar2;
  *(undefined8 *)(lVar6 + _DAT_112eb4380) = uVar4;
  plVar7 = &lStack_58;
  lStack_58 = lVar6;
  lStack_50 = lVar5;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_110534e18;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b6098; end: 1026b60b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b6098(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = *unaff_x20;
  func_0x000100083b20(&lStack_48,lVar2,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  lVar3 = lStack_48;
  uVar5 = 0x112ea7888;
  func_0x0001000285a8(0x112ea7888,&UNK_10dabb500);
  func_0x000107c610f8();
  func_0x00010017da58(lVar3,uVar5);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar3);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112eb8838);
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar6 = 0;
  FUN_10269e85c();
  lVar3 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112eb4360);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112eb4368) = uVar8;
  *(undefined **)(lVar3 + _DAT_112eb4370) = puVar4;
  *(long *)(lVar3 + _DAT_112eb4378) = lVar2;
  *(undefined8 *)(lVar3 + _DAT_112eb4380) = uVar5;
  plVar7 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar6;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *param_1 = (long)plVar7;
  param_1[1] = (long)&PTR_DAT_110534e18;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b60b4; end: 1026b6117;  */

long FUN_1026b60b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b6118; end: 1026b61f7;  */

undefined8 * FUN_1026b6118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026b61f8; end: 1026b624b;  */

undefined8 * FUN_1026b61f8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1026b624c; end: 1026b62e3;  */

int FUN_1026b624c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b62e4; end: 1026b639f;  */

void FUN_1026b62e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105371e0;
  func_0x000107c613fc(&UNK_1105371e0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1026b643c,puVar1);
  return;
}



/* Entry: 1026b63a0; end: 1026b643b;  */

/* WARNING: Possible PIC construction at 0x0001026b6408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026b6418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b640c) */
/* WARNING: Removing unreachable block (ram,0x0001026b641c) */

void FUN_1026b63a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  param_1[3] = &UNK_110537290;
  param_1[4] = &PTR_DAT_1105371f8;
  puVar1 = &UNK_1105372c8;
  func_0x000107c613fc(&UNK_1105372c8,0x38,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1026b643c; end: 1026b644b;  */

/* WARNING: Possible PIC construction at 0x0001026b6408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026b6418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026b640c) */
/* WARNING: Removing unreachable block (ram,0x0001026b641c) */

void FUN_1026b643c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  param_1[3] = &UNK_110537290;
  param_1[4] = &PTR_DAT_1105371f8;
  puVar5 = &UNK_1105372c8;
  func_0x000107c613fc(&UNK_1105372c8,0x38,7);
  *param_1 = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar4;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1026b644c; end: 1026b673f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b644c(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined1 auStack_b0 [40];
  long alStack_88 [5];
  
  func_0x000100083b20(alStack_88);
  lVar13 = alStack_88[0];
  lVar12 = *(long *)(alStack_88[0] + _DAT_1130831b0);
  lVar4 = lVar12;
  func_0x000107c61174();
  func_0x000107c61170(lVar13);
  if ((lVar12 != 0) &&
     (cVar3 = *(char *)(lVar4 + _DAT_113083398), func_0x000107c61170(lVar4), cVar3 == '\x01')) {
    func_0x000100083b20(alStack_88);
    lVar13 = alStack_88[0];
    pbVar5 = *(byte **)(alStack_88[0] + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    pbVar6 = pbVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (pbVar6 != (byte *)0x0) {
      func_0x0001000ad07c();
      if ((((*pbVar5 & 1) != 0) || (func_0x0001005e3364(), *pbVar5 == 1)) &&
         (func_0x0001090224d8(), ((ulong)pbVar5 & 1) == 0)) {
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 5) = 0xff;
        func_0x000107c61170(pbVar6);
        return;
      }
      FUN_1026d7c04();
      lVar13 = *(long *)(pbVar5 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar13 != 0) {
        pbVar14 = pbVar5 + 0x20;
        do {
          bVar2 = *pbVar14;
          func_0x000100083b20(&bStack_b8);
          uVar10 = CONCAT71(uStack_b7,bStack_b8);
          bStack_b8 = bVar2;
          func_0x00010008a7c8(alStack_88,&bStack_b8);
          func_0x000107c61574(uVar10);
          lVar4 = alStack_88[0];
          if (alStack_88[0] != 0) {
            func_0x000100083b20(auStack_b0);
            func_0x000107c61574(lVar4);
            FUN_10269f3f8(auStack_b0,alStack_88);
            puVar7 = puVar8;
            func_0x000107c61558();
            puVar9 = puVar8;
            if (((ulong)puVar7 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_1026b6744(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar1 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_1026b6744(puVar8,uVar1 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
            FUN_10269f3f8(alStack_88,puVar8 + uVar1 * 0x28 + 0x20);
          }
          lVar13 = lVar13 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar13 != 0);
      }
      func_0x000107c6142c(pbVar5);
      if (*(long *)(puVar8 + 0x10) != 0) {
        pbVar5 = pbVar6;
        func_0x000107c4c334();
        func_0x000107c61180();
        func_0x000100083b20(alStack_88);
        lVar13 = alStack_88[0];
        uVar10 = *(undefined8 *)(alStack_88[0] + _DAT_112eb7d80);
        func_0x000107c61174();
        func_0x000107c61170(lVar13);
        func_0x000100083b20(alStack_88);
        func_0x000107c61170(pbVar6);
        lVar13 = 0;
        func_0x00010269f228();
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(undefined8 *)(lVar13 + 0x48) = 0;
        *(undefined **)(lVar13 + 0x20) = puVar8;
        *(byte **)(lVar13 + 0x28) = pbVar5;
        *(undefined8 *)(lVar13 + 0x30) = uVar10;
        *(long *)(lVar13 + 0x38) = alStack_88[0];
        *param_1 = lVar13;
        param_1[1] = (long)&PTR_DAT_110534e48;
        uVar11 = 1;
        goto LAB_1026b671c;
      }
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(pbVar6);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar11 = 0xff;
LAB_1026b671c:
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Entry: 1026b6740; end: 1026b6743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b6740(long *param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined1 auStack_b0 [40];
  long alStack_88 [5];
  
  func_0x000100083b20(alStack_88);
  lVar13 = alStack_88[0];
  lVar12 = *(long *)(alStack_88[0] + _DAT_1130831b0);
  lVar4 = lVar12;
  func_0x000107c61174();
  func_0x000107c61170(lVar13);
  if ((lVar12 != 0) &&
     (cVar3 = *(char *)(lVar4 + _DAT_113083398), func_0x000107c61170(lVar4), cVar3 == '\x01')) {
    func_0x000100083b20(alStack_88);
    lVar13 = alStack_88[0];
    pbVar5 = *(byte **)(alStack_88[0] + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar13);
    pbVar6 = pbVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (pbVar6 != (byte *)0x0) {
      func_0x0001000ad07c();
      if ((((*pbVar5 & 1) != 0) || (func_0x0001005e3364(), *pbVar5 == 1)) &&
         (func_0x0001090224d8(), ((ulong)pbVar5 & 1) == 0)) {
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 5) = 0xff;
        func_0x000107c61170(pbVar6);
        return;
      }
      FUN_1026d7c04();
      lVar13 = *(long *)(pbVar5 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar13 != 0) {
        pbVar14 = pbVar5 + 0x20;
        do {
          bVar2 = *pbVar14;
          func_0x000100083b20(&bStack_b8);
          uVar10 = CONCAT71(uStack_b7,bStack_b8);
          bStack_b8 = bVar2;
          func_0x00010008a7c8(alStack_88,&bStack_b8);
          func_0x000107c61574(uVar10);
          lVar4 = alStack_88[0];
          if (alStack_88[0] != 0) {
            func_0x000100083b20(auStack_b0);
            func_0x000107c61574(lVar4);
            FUN_10269f3f8(auStack_b0,alStack_88);
            puVar7 = puVar8;
            func_0x000107c61558();
            puVar9 = puVar8;
            if (((ulong)puVar7 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_1026b6744(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar1 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_1026b6744(puVar8,uVar1 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
            FUN_10269f3f8(alStack_88,puVar8 + uVar1 * 0x28 + 0x20);
          }
          lVar13 = lVar13 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar13 != 0);
      }
      func_0x000107c6142c(pbVar5);
      if (*(long *)(puVar8 + 0x10) != 0) {
        pbVar5 = pbVar6;
        func_0x000107c4c334();
        func_0x000107c61180();
        func_0x000100083b20(alStack_88);
        lVar13 = alStack_88[0];
        uVar10 = *(undefined8 *)(alStack_88[0] + _DAT_112eb7d80);
        func_0x000107c61174();
        func_0x000107c61170(lVar13);
        func_0x000100083b20(alStack_88);
        func_0x000107c61170(pbVar6);
        lVar13 = 0;
        func_0x00010269f228();
        func_0x000107c613fc();
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x40) = 0;
        *(undefined8 *)(lVar13 + 0x48) = 0;
        *(undefined **)(lVar13 + 0x20) = puVar8;
        *(byte **)(lVar13 + 0x28) = pbVar5;
        *(undefined8 *)(lVar13 + 0x30) = uVar10;
        *(long *)(lVar13 + 0x38) = alStack_88[0];
        *param_1 = lVar13;
        param_1[1] = (long)&PTR_DAT_110534e48;
        uVar11 = 1;
        goto LAB_1026b671c;
      }
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(pbVar6);
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar11 = 0xff;
LAB_1026b671c:
  *(undefined1 *)(param_1 + 5) = uVar11;
  return;
}



/* Entry: 1026b6744; end: 1026b6887;  */

undefined * FUN_1026b6744(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026b6888);
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
    puVar3 = (undefined *)0x112eb4d38;
    func_0x0001000285a8(0x112eb4d38,&UNK_10dacb630);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112eb4d40;
    func_0x0001000285a8(0x112eb4d40,&UNK_10dacb638);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1026b6888; end: 1026b6897;  */

undefined1  [16] FUN_1026b6888(void)

{
  return ZEXT816(0x110537218);
}



/* Entry: 1026b6898; end: 1026b6903;  */

long FUN_1026b6898(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b6904; end: 1026b696f;  */

undefined8 * FUN_1026b6904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  return param_1;
}



/* Entry: 1026b6970; end: 1026b6a13;  */

undefined8 * FUN_1026b6970(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1026b6a14; end: 1026b6a77;  */

undefined8 * FUN_1026b6a14(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b6a78; end: 1026b6b17;  */

int FUN_1026b6a78(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b6b18; end: 1026b6b5b;  */

void FUN_1026b6b18(void)

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



/* Entry: 1026b6b5c; end: 1026b6d9b;  */

void FUN_1026b6b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_1105372f8;
  func_0x000107c613fc(&UNK_1105372f8,0x68,7);
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
  func_0x0001000823a8(FUN_1026b6d9c,puVar1);
  return;
}



/* Entry: 1026b6d9c; end: 1026b6dd7;  */

void FUN_1026b6d9c(void)

{
  long unaff_x20;
  
  func_0x0001026b6c84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1026b6dd8; end: 1026b70c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b6dd8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  uVar6 = 0x112e4a000;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  func_0x00010017da58(lVar12,uVar6);
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar12);
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x000107c61434(uVar2);
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  lVar8 = alStack_78[0];
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  lVar9 = alStack_78[0];
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  if (lVar9 != 0) {
    func_0x000100083b20(alStack_78);
    lVar12 = alStack_78[0];
    uVar10 = *(undefined8 *)(alStack_78[0] + _DAT_11307edb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    func_0x000100083b20(alStack_78);
    lVar12 = alStack_78[0];
    uVar11 = *(undefined8 *)(alStack_78[0] + _DAT_112ff2410);
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    func_0x000100083b20(alStack_78);
    lVar3 = alStack_78[0];
    func_0x000100083b20(alStack_78);
    lVar4 = alStack_78[0];
    func_0x000100083b20(alStack_78);
    lVar12 = _DAT_113083198;
    func_0x000107c61428(alStack_78[0] + _DAT_113083198,alStack_78,0,0);
    lVar12 = alStack_78[0] + lVar12;
    func_0x000107c61618();
    func_0x000107c61170(alStack_78[0]);
    if (lVar12 == 0) {
      func_0x000100083b20(&lStack_80);
      lVar12 = *(long *)(lStack_80 + _DAT_112eb7d80);
      func_0x000107c61174();
      func_0x000107c61170(lStack_80);
    }
    lVar16 = unaff_x20[8];
    lVar13 = 0;
    FUN_10269fcbc();
    lVar14 = lVar13;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4478);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4480);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    *(long *)(lVar14 + _DAT_112eb4488) = lVar8;
    *(long *)(lVar14 + _DAT_112eb4490) = lVar9;
    *(undefined8 *)(lVar14 + _DAT_112eb4498) = uVar10;
    *(undefined8 *)(lVar14 + _DAT_112eb44a0) = uVar11;
    *(long *)(lVar14 + _DAT_112eb44a8) = lVar3;
    *(long *)(lVar14 + _DAT_112eb44b0) = lVar16;
    *(long *)(lVar14 + _DAT_112eb44b8) = lVar4;
    *(undefined **)(lVar14 + _DAT_112eb44c0) = puVar7;
    *(long *)(lVar14 + _DAT_112eb44c8) = lVar12;
    puVar7 = PTR_s_init_1125d9248;
    lStack_90 = lVar14;
    lStack_88 = lVar13;
    func_0x000107c6157c(lVar16);
    plVar15 = &lStack_90;
    func_0x000107c61154(plVar15,puVar7);
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110534ea0;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1026b70c8);
  (*pcVar5)();
}



/* Entry: 1026b70c8; end: 1026b70db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b70c8(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long alStack_78 [3];
  
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  uVar6 = 0x112e4a000;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  func_0x00010017da58(lVar12,uVar6);
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar12);
  uVar6 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x000107c61434(uVar2);
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  lVar8 = alStack_78[0];
  func_0x000107c4c370();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000100083b20(alStack_78);
  lVar12 = alStack_78[0];
  lVar9 = alStack_78[0];
  func_0x000107c5bf44();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  if (lVar9 != 0) {
    func_0x000100083b20(alStack_78);
    lVar12 = alStack_78[0];
    uVar10 = *(undefined8 *)(alStack_78[0] + _DAT_11307edb0);
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    func_0x000100083b20(alStack_78);
    lVar12 = alStack_78[0];
    uVar11 = *(undefined8 *)(alStack_78[0] + _DAT_112ff2410);
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    func_0x000100083b20(alStack_78);
    lVar3 = alStack_78[0];
    func_0x000100083b20(alStack_78);
    lVar4 = alStack_78[0];
    func_0x000100083b20(alStack_78);
    lVar12 = _DAT_113083198;
    func_0x000107c61428(alStack_78[0] + _DAT_113083198,alStack_78,0,0);
    lVar12 = alStack_78[0] + lVar12;
    func_0x000107c61618();
    func_0x000107c61170(alStack_78[0]);
    if (lVar12 == 0) {
      func_0x000100083b20(&lStack_80);
      lVar12 = *(long *)(lStack_80 + _DAT_112eb7d80);
      func_0x000107c61174();
      func_0x000107c61170(lStack_80);
    }
    lVar16 = unaff_x20[8];
    lVar13 = 0;
    FUN_10269fcbc();
    lVar14 = lVar13;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4478);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112eb4480);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    *(long *)(lVar14 + _DAT_112eb4488) = lVar8;
    *(long *)(lVar14 + _DAT_112eb4490) = lVar9;
    *(undefined8 *)(lVar14 + _DAT_112eb4498) = uVar10;
    *(undefined8 *)(lVar14 + _DAT_112eb44a0) = uVar11;
    *(long *)(lVar14 + _DAT_112eb44a8) = lVar3;
    *(long *)(lVar14 + _DAT_112eb44b0) = lVar16;
    *(long *)(lVar14 + _DAT_112eb44b8) = lVar4;
    *(undefined **)(lVar14 + _DAT_112eb44c0) = puVar7;
    *(long *)(lVar14 + _DAT_112eb44c8) = lVar12;
    puVar7 = PTR_s_init_1125d9248;
    lStack_90 = lVar14;
    lStack_88 = lVar13;
    func_0x000107c6157c(lVar16);
    plVar15 = &lStack_90;
    func_0x000107c61154(plVar15,puVar7);
    *param_1 = (long)plVar15;
    param_1[1] = (long)&PTR_DAT_110534ea0;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1026b70c8);
  (*pcVar5)();
}



/* Entry: 1026b70dc; end: 1026b7177;  */

long FUN_1026b70dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b7178; end: 1026b7247;  */

undefined8 * FUN_1026b7178(undefined8 *param_1,undefined8 *param_2)

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
  uVar10 = param_2[10];
  param_1[10] = uVar10;
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
  func_0x000107c6157c(uVar10);
  return param_1;
}



/* Entry: 1026b7248; end: 1026b737b;  */

undefined8 * FUN_1026b7248(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b737c; end: 1026b7427;  */

undefined8 * FUN_1026b737c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b7428; end: 1026b74d3;  */

int FUN_1026b7428(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b74d4; end: 1026b7547;  */

void FUN_1026b74d4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026b7548; end: 1026b76a3;  */

void FUN_1026b7548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110537428;
  func_0x000107c613fc(&UNK_110537428,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1026b75c8,puVar1);
  return;
}



/* Entry: 1026b76a4; end: 1026b76b3;  */

undefined1  [16] FUN_1026b76a4(void)

{
  return ZEXT816(0x110537460);
}



/* Entry: 1026b76b4; end: 1026b76db;  */

void FUN_1026b76b4(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 1026b76dc; end: 1026b7737;  */

undefined8 * FUN_1026b76dc(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1026b7738; end: 1026b7773;  */

undefined8 * FUN_1026b7738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1026b7774; end: 1026b780f;  */

int FUN_1026b7774(ulong *param_1,int param_2)

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



/* Entry: 1026b7810; end: 1026b794f;  */

void FUN_1026b7810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4d30,&UNK_10dacab00);
  puVar1 = &UNK_110537508;
  func_0x000107c613fc(&UNK_110537508,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026b7950,puVar1);
  return;
}



/* Entry: 1026b7950; end: 1026b795b;  */

void FUN_1026b7950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  param_1[3] = &UNK_1105375b8;
  param_1[4] = &PTR_DAT_110537520;
  puVar4 = &UNK_1105375e8;
  func_0x000107c613fc(&UNK_1105375e8,0x30,7);
  *param_1 = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 1026b795c; end: 1026b7ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b795c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112eb89d8);
  uVar3 = ((undefined8 *)(param_2 + _DAT_112eb89d8))[1];
  func_0x000107c61434(uVar3);
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar8 = lStack_58;
  lVar5 = lStack_58;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = 0;
  FUN_1026a03dc();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112eb44f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112eb4520) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112eb4500);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar8 + _DAT_112eb4508) = lVar4;
  *(long *)(lVar8 + _DAT_112eb4510) = lVar5;
  *(undefined8 *)(lVar8 + _DAT_112eb4518) = uVar6;
  plVar9 = &lStack_68;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  *param_1 = (long)plVar9;
  param_1[1] = (long)&PTR_DAT_110534f20;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b7ab4; end: 1026b7acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b7ab4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + _DAT_112eb89d8);
  uVar3 = ((undefined8 *)(*unaff_x20 + _DAT_112eb89d8))[1];
  func_0x000107c61434(uVar3,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  func_0x000100083b20(&lStack_58);
  lVar8 = lStack_58;
  lVar5 = lStack_58;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000100083b20(&lStack_58);
  uVar6 = *(undefined8 *)(lStack_58 + _DAT_112eb7d80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar7 = 0;
  FUN_1026a03dc();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112eb44f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar8 + _DAT_112eb4520) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112eb4500);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(long *)(lVar8 + _DAT_112eb4508) = lVar4;
  *(long *)(lVar8 + _DAT_112eb4510) = lVar5;
  *(undefined8 *)(lVar8 + _DAT_112eb4518) = uVar6;
  plVar9 = &lStack_68;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  *param_1 = (long)plVar9;
  param_1[1] = (long)&PTR_DAT_110534f20;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Entry: 1026b7ad0; end: 1026b7b33;  */

long FUN_1026b7ad0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026b7b34; end: 1026b7c13;  */

undefined8 * FUN_1026b7b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 1026b7c14; end: 1026b7c67;  */

undefined8 * FUN_1026b7c14(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1026b7c68; end: 1026b7cff;  */

int FUN_1026b7c68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026b7d00; end: 1026b7d4b;  */

void FUN_1026b7d00(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb4d48,&UNK_10dacb760);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026b7dc0,param_1);
  return;
}



/* Entry: 1026b7d4c; end: 1026b7dbf;  */

void FUN_1026b7d4c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001026b80a0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  uVar1 = 0;
  FUN_1026e5d60(0);
  func_0x000107c610f8();
  func_0x0001026e5cd0(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1026b7dc0; end: 1026b7dd7;  */

void FUN_1026b7dc0(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001026b80a0();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_38;
  uVar1 = 0;
  FUN_1026e5d60(0);
  func_0x000107c610f8();
  func_0x0001026e5cd0(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1026b7dd8; end: 1026b7e2f;  */

void FUN_1026b7dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_38 = param_3;
  func_0x00010008a7c8(&uStack_28,&uStack_38);
  func_0x0001048580f8(param_1);
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 1026b7e30; end: 1026b7fe7;  */

undefined8
FUN_1026b7e30(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b7fe8);
    (*pcVar1)();
  }
  puVar2 = &UNK_110537638;
  func_0x000107c613fc(&UNK_110537638,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    param_2 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b7f4c);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b7eec);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 1026b7fe8; end: 1026b807b; -[_TtC23MapRouterImplementation17MapRoutingBuilder build:] */

void FUN_1026b7fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5fcec(0);
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = 0x1026b80c0;
  FUN_1026b7e30(0x1026b80c0,auStack_50,
                "MapRouterImplementation/MapRoutingFactoryServiceProvider.swift",0x3e,2,0x1b);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1026b807c; end: 1026b80d7;  */

void FUN_1026b807c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026b80d8; end: 1026b818f; -[_TtC37MapSDKDataBridgeFactoryImplementation23MapSDKDataBridgeBuilder buildDataBridgeWithMetadataManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b80d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_102702cb4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000102702ba0();
  uStack_40 = uVar1;
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1026b8190; end: 1026b81ef; -[_TtC37MapSDKDataBridgeFactoryImplementation23MapSDKDataBridgeBuilder init] */

void FUN_1026b8190(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSDKDataBridgeFactoryImplementation.MapSDKDataBridgeBuilder",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b81bc);
  (*pcVar1)();
}



/* Entry: 1026b81f0; end: 1026b81ff; -[_TtC37MapSDKDataBridgeFactoryImplementation23MapSDKDataBridgeBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b81f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb4df0));
  return;
}



/* Entry: 1026b8200; end: 1026b821f;  */

void FUN_1026b8200(void)

{
  func_0x000107c61168(&PTR_PTR_112858b98);
  return;
}



/* Entry: 1026b8220; end: 1026b826b;  */

void FUN_1026b8220(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb4e20,&UNK_10dacb810);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026b82fc,param_1);
  return;
}



/* Entry: 1026b826c; end: 1026b82fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b826c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1026b8200();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eb4df0) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  FUN_1026ec8fc(0);
  func_0x000107c610f8();
  func_0x0001026ec840(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1026b82fc; end: 1026b8313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b82fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1026b8200();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eb4df0) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  FUN_1026ec8fc(0);
  func_0x000107c610f8();
  func_0x0001026ec840(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1026b8314; end: 1026b85e7;  */

void FUN_1026b8314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4e28,&UNK_10dacb860);
  puVar1 = &UNK_110537790;
  func_0x000107c613fc(&UNK_110537790,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_1026b85e8,puVar1);
  return;
}



/* Entry: 1026b85e8; end: 1026b8623;  */

void FUN_1026b85e8(void)

{
  long unaff_x20;
  
  func_0x0001026b8468(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1026b8624; end: 1026b8633;  */

undefined1  [16] FUN_1026b8624(void)

{
  return ZEXT816(0x1105377b8);
}



/* Entry: 1026b8634; end: 1026b8847;  */

void FUN_1026b8634(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112eb4e38,&UNK_10dacb8a8);
  puVar1 = auStack_70;
  auStack_70[0] = uVar4;
  func_0x0001000838ec();
  func_0x0001026b92d8();
  func_0x000100082720("FullMapDataBridgeLoggerServiceProvider",0x26,2);
  func_0x0001000285a8(0x112eb4e40,&UNK_10dacb8b0);
  puVar2 = &UNK_110537800;
  func_0x000107c613fc(&UNK_110537800,0x70,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_12;
  *(undefined8 *)(puVar2 + 0x38) = param_14;
  *(undefined8 *)(puVar2 + 0x40) = param_15;
  *(undefined8 *)(puVar2 + 0x48) = param_11;
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  *(undefined8 *)(puVar2 + 0x58) = param_9;
  *(undefined8 *)(puVar2 + 0x60) = param_10;
  *(undefined8 *)(puVar2 + 0x68) = param_13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_13);
  uVar4 = 0x1026b891c;
  func_0x0001000823a8(0x1026b891c,puVar2);
  func_0x000100082720("MapSDKDataBridgeFullMapPluginRegistryServiceProvider",0x34,2);
  puVar3 = puVar1;
  FUN_1026b93e4(puVar1,uVar4,param_16,param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(uVar4);
  func_0x000100082720("FullMapDataBridgeEntryPointProvider",0x23,2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 1026b8848; end: 1026b8957;  */

void FUN_1026b8848(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026b8958; end: 1026b8c53;  */

void FUN_1026b8958(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11053e3d0;
  ppuVar4 = &PTR_DAT_112eb9bd8;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110537828;
  func_0x000107c613fc(&UNK_110537828,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112eb4e48;
  func_0x0001000285a8(0x112eb4e48,&UNK_10dacb8b8);
  func_0x0001000a6ee8(&UNK_1105382c8,"LocationRequestStatePluginKey",0x1d,2,FUN_1026b8c54,puVar2,
                      uVar3,&UNK_1105382c8,&PTR_DAT_112eb5960);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110537850;
  func_0x000107c613fc(&UNK_110537850,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110538408,"NowPlayingPluginKey",0x13,2,0x1026b8c94,puVar2,uVar3,
                      &UNK_110538408,&PTR_DAT_112eb5b38);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110538548,"SessionIDPluginKey",0x12,2,0x1026b8cdc,param_9,uVar3,
                      &UNK_110538548,&PTR_DAT_112eb5c68);
  func_0x000107c61574(param_9);
  puVar2 = &UNK_110537878;
  func_0x000107c613fc(&UNK_110537878,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_10;
  *(undefined8 *)(puVar2 + 0x18) = param_11;
  *(undefined8 *)(puVar2 + 0x20) = param_12;
  *(undefined8 *)(puVar2 + 0x28) = param_13;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x0001000a6ee8(&UNK_110538958,"WidgetOnboardingPluginKey",0x19,2,0x1026b8d1c,puVar2,uVar3,
                      &UNK_110538958,&PTR_DAT_112eb61d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112eb4e50;
  func_0x0001000285a8(0x112eb4e50,&UNK_10dacb8c0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("MapSDKDataBridgeFullMapPluginRegistryServiceProvider",0x34,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1026b8c54; end: 1026b8dab;  */

void FUN_1026b8c54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1026c26dc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LocationRequestStatePluginPluginProvider",0x28,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1026b8dac; end: 1026b8e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b8dac(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112ed0d00);
  func_0x000107c61170();
  lVar2 = 0;
  FUN_1026ba0c4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126aad70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6465646465626d65;
  *(undefined8 *)(lVar3 + 0x28) = 0xe800000000000000;
  *(undefined **)(lVar3 + 0x30) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110537a20;
  *param_1 = lVar3;
  return;
}



/* Entry: 1026b8e6c; end: 1026b8e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b8e6c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_112ed0d00);
  func_0x000107c61170();
  lVar2 = 0;
  FUN_1026ba0c4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126aad70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6465646465626d65;
  *(undefined8 *)(lVar3 + 0x28) = 0xe800000000000000;
  *(undefined **)(lVar3 + 0x30) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110537a20;
  *param_1 = lVar3;
  return;
}



/* Entry: 1026b8e74; end: 1026b8fa3;  */

void FUN_1026b8e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb4e60,&UNK_10dacb8d8);
  puVar1 = &UNK_110537928;
  func_0x000107c613fc(&UNK_110537928,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1026b8fa4,puVar1);
  return;
}



/* Entry: 1026b8fa4; end: 1026b8faf;  */

void FUN_1026b8fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_50);
  FUN_1026b9074();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  uVar1 = uStack_48;
  FUN_1026b9094(uStack_48,uStack_50,uVar2);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 1026b8fb0; end: 1026b8fe3; -[_TtC32MapSDKDataBridgingImplementation21EmbeddedMapDataBridge start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b8fb0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026b9acc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026b8fe4; end: 1026b9043; -[_TtC32MapSDKDataBridgingImplementation21EmbeddedMapDataBridge init] */

void FUN_1026b8fe4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSDKDataBridgingImplementation.EmbeddedMapDataBridge",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b9010);
  (*pcVar1)();
}



/* Entry: 1026b9044; end: 1026b9073; -[_TtC32MapSDKDataBridgingImplementation21EmbeddedMapDataBridge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b9044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb4e68));
  return;
}



/* Entry: 1026b9074; end: 1026b9093;  */

void FUN_1026b9074(void)

{
  func_0x000107c61168(&PTR_PTR_112858c58);
  return;
}



/* Entry: 1026b9094; end: 1026b929f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b9094(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_a8 [16];
  ulong uStack_98;
  undefined1 auStack_90 [40];
  undefined *puStack_68;
  
  uVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001048575f8();
  puVar3 = &UNK_10dacb988;
  func_0x000107c614e0(&UNK_10dacb988);
  if (uVar2 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar8 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar8 == 0) {
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1026be2f4(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026b92a0);
      (*pcVar1)();
    }
    uVar9 = 0;
    puVar7 = puStack_68;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar9 * 8 + 0x20);
        func_0x000107c6157c(uVar5);
      }
      else {
        uVar5 = uVar9;
        FUN_1026c5b48(uVar9,uVar2);
      }
      uStack_98 = uVar5;
      func_0x000107c6157c(uVar5);
      func_0x000107c614bc(auStack_90,&uStack_98,puVar3);
      func_0x000107c61578(uVar5,2);
      uVar5 = *(ulong *)(puVar7 + 0x10);
      puStack_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        FUN_1026be2f4(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
      }
      puVar7 = puStack_68;
      uVar9 = uVar9 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      FUN_1026b92a0(auStack_90,puStack_68 + uVar5 * 0x28 + 0x20);
    } while (uVar8 != uVar9);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = 0;
  func_0x0001026b9dec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  *(undefined **)(lVar4 + 0x20) = puVar7;
  *(long *)(unaff_x20 + _DAT_112eb4e68) = lVar4;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(auStack_a8,puVar3);
  return;
}



/* Entry: 1026b92a0; end: 1026b92b7;  */

undefined8 * FUN_1026b92a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1026b92b8; end: 1026b9323;  */

void FUN_1026b92b8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1026b9324; end: 1026b93db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b9324(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130831c8);
  func_0x000107c61170();
  lVar2 = 0;
  FUN_1026ba0c4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126aad70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6e69616d;
  *(undefined8 *)(lVar3 + 0x28) = 0xe400000000000000;
  *(undefined **)(lVar3 + 0x30) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110537a20;
  *param_1 = lVar3;
  return;
}



/* Entry: 1026b93dc; end: 1026b93e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026b93dc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130831c8);
  func_0x000107c61170();
  lVar2 = 0;
  FUN_1026ba0c4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = PTR_PTR_1126aad70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar3 + 0x10) = puVar4;
  *(undefined8 *)(lVar3 + 0x18) = uVar5;
  *(undefined8 *)(lVar3 + 0x20) = 0x6e69616d;
  *(undefined8 *)(lVar3 + 0x28) = 0xe400000000000000;
  *(undefined **)(lVar3 + 0x30) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110537a20;
  *param_1 = lVar3;
  return;
}


