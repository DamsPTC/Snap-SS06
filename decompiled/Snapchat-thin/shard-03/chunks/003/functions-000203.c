/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026fef0c; end: 1026fef17;  */

void FUN_1026fef0c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026ff00c,param_1);
  return;
}



/* Entry: 1026fef18; end: 1026fef6f;  */

void FUN_1026fef18(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1026fef70; end: 1026ff00b;  */

void FUN_1026fef70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c610f8();
  uVar1 = uStack_48;
  func_0x000107c6157c(uStack_48);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uStack_48);
  *param_1 = puVar2;
  return;
}



/* Entry: 1026ff00c; end: 1026ff033;  */

void FUN_1026ff00c(void)

{
  FUN_1026fef70();
  return;
}



/* Entry: 1026ff034; end: 1026ff053;  */

undefined1  [16] FUN_1026ff034(void)

{
  return ZEXT816(0x11053db00);
}



/* Entry: 1026ff054; end: 1026ff08b;  */

/* WARNING: Possible PIC construction at 0x0001026ff068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ff078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ff06c) */
/* WARNING: Removing unreachable block (ram,0x0001026ff07c) */

void FUN_1026ff054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1026ff08c; end: 1026ff19b;  */

undefined8 * FUN_1026ff08c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1026ff19c; end: 1026ff1ff;  */

undefined8 * FUN_1026ff19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1026ff200; end: 1026ff40b;  */

int FUN_1026ff200(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026ff40c; end: 1026ff44b;  */

/* WARNING: Possible PIC construction at 0x0001026ff420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026ff430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026ff424) */
/* WARNING: Removing unreachable block (ram,0x0001026ff434) */

void FUN_1026ff40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1026ff44c; end: 1026ff4cf;  */

undefined8 * FUN_1026ff44c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 1026ff4d0; end: 1026ff59b;  */

undefined8 * FUN_1026ff4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026ff59c; end: 1026ff617;  */

undefined8 * FUN_1026ff59c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026ff618; end: 1026ff6c7;  */

int FUN_1026ff618(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1026ff6c8; end: 1026ff707;  */

void FUN_1026ff6c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad0d54;
  func_0x000107c61520(&UNK_10dad0d54,&UNK_11053dc38);
  puRam0000000112eb9540 = puVar1;
  return;
}



/* Entry: 1026ff708; end: 1026ff71b;  */

bool FUN_1026ff708(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026ff71c; end: 1026ff7c7;  */

void FUN_1026ff71c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026ff7c8; end: 1026ff7cf;  */

long FUN_1026ff7c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1026ff7d0; end: 1026ff8a7;  */

void FUN_1026ff7d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3fdc0();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI5ColorV02uiC0ACSo7UIColorC_tcfC_1103496a0)(uVar1);
  return;
}



/* Entry: 1026ff8a8; end: 1026ffb13;  */

void FUN_1026ff8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0x112eb9548;
  func_0x0001000285a8(0x112eb9548,&UNK_10dad0d80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x00010052bbec();
  func_0x000107c61180();
  lVar2 = 0;
  func_0x000107c5f340();
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(puVar3,param_3,lVar2);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,lVar2);
  func_0x000107c6006c(puVar3);
  puVar4 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c61168(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
  func_0x000107c5ceac();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  lVar2 = lVar1;
  func_0x000107c43788(param_1,lVar1);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c5f5ac(lVar2);
  return;
}



/* Entry: 1026ffb14; end: 1026ffbff;  */

void FUN_1026ffb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *puVar4;
  
  lVar1 = 0;
  FUN_1026ffc00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &UNK_10dad0d90;
  func_0x000107c614e0();
  *puVar4 = puVar2;
  uVar3 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  func_0x000107c6159c(puVar4,uVar3,0);
  *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar1 + 0x14)) = param_3;
  *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar1 + 0x18)) = param_2;
  func_0x000107c5f6a8(param_1,puVar4,param_4,lVar1,param_5);
  FUN_1026ffe38(puVar4);
  return;
}



/* Entry: 1026ffc00; end: 1026ffc37;  */

void FUN_1026ffc00(undefined8 param_1)

{
  if (lRam0000000112eb95b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ef2f4);
  return;
}



/* Entry: 1026ffc38; end: 1026ffe37;  */

void FUN_1026ffc38(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = 0x112eb9548;
  func_0x0001000285a8(0x112eb9548,&UNK_10dad0d80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffff90 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5f340();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1026ffc00();
  lVar2 = lVar4;
  func_0x0001020d5a7c(lVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x18));
  func_0x00010052bbec();
  func_0x000107c61180();
  (**(code **)(lVar8 + 0x10))(puVar5,lVar7,lVar3);
  (**(code **)(lVar8 + 0x38))(puVar5,0,1,lVar3);
  func_0x000107c6006c(puVar5);
  puVar6 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c61168(PTR__OBJC_CLASS___UITraitCollection_1126b6d80);
  func_0x000107c5ceac();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  lVar4 = lVar2;
  func_0x000107c43788(uVar9);
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c5f5ac();
  (**(code **)(lVar8 + 8))(lVar7,lVar3);
  puVar6 = &UNK_10dad0e50;
  func_0x000107c614e0();
  lVar2 = 0x112eb95f0;
  func_0x0001000285a8(0x112eb95f0,&UNK_10dad0e80);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  lVar2 = 0x112eb95f8;
  func_0x0001000285a8(0x112eb95f8,&UNK_10dad0e88);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = lVar4;
  return;
}



/* Entry: 1026ffe38; end: 1026ffe73;  */

undefined8 FUN_1026ffe38(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1026ffc00();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1026ffe74; end: 1026ffeb7;  */

void FUN_1026ffe74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb9550 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1026ffc00(0xff);
  puVar2 = &UNK_10dad0df8;
  func_0x000107c61520(&UNK_10dad0df8,uVar1);
  puRam0000000112eb9550 = puVar2;
  return;
}



/* Entry: 1026ffeb8; end: 1026fff97;  */

long * FUN_1026ffeb8(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    uVar4 = 0x112e57758;
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    plVar5 = param_2;
    func_0x000107c614c4(param_2,uVar4);
    bVar3 = (int)plVar5 != 1;
    if (bVar3) {
      *param_1 = *param_2;
      func_0x000107c6157c();
    }
    else {
      lVar6 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    }
    func_0x000107c6159c(param_1,uVar4,!bVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1026fff98; end: 102700003;  */

void FUN_1026fff98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  puVar2 = param_1;
  func_0x000107c614c4(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000107c5f340();
                    /* WARNING: Could not recover jumptable at 0x0001026ffff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102700004; end: 10270017f;  */

undefined8 * FUN_102700004(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  puVar4 = param_2;
  func_0x000107c614c4(param_2,uVar3);
  bVar2 = (int)puVar4 != 1;
  if (bVar2) {
    *param_1 = *param_2;
    func_0x000107c6157c();
  }
  else {
    lVar5 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
  }
  func_0x000107c6159c(param_1,uVar3,!bVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 102700180; end: 1027001c7;  */

undefined8 FUN_102700180(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1027001c8; end: 102700347;  */

long FUN_1027001c8(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar3 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,1);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  return param_1;
}



/* Entry: 102700348; end: 10270035f;  */

void FUN_102700348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102700360; end: 1027003d7;  */

void FUN_102700360(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x0001020d6274();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1027003d8; end: 1027003f7;  */

void FUN_1027003d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6ef31c,1);
  return;
}



/* Entry: 1027003f8; end: 1027004f3;  */

void FUN_1027003f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112eb9600 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112eb95f8;
  func_0x00010002969c(0x112eb95f8,&UNK_10dad0e88);
  uVar2 = 0x112eb9608;
  func_0x0001027004b0(0x112eb9608,0x112eb95f0,&UNK_10dad0e80,
                      PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
  uVar3 = 0x112e02e08;
  func_0x0001027004b0(0x112e02e08,0x112e02e10,&UNK_10d9deec0,
                      PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112eb9600 = puVar4;
  return;
}



/* Entry: 1027004f4; end: 1027005af;  */

undefined1 * FUN_1027004f4(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + *(long *)PTR___s7SwiftUI19UIHostingControllerCMo_110348e78);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(lVar4 + 0x10))(puVar1,param_1,lVar3);
  func_0x000107c5f454(puVar1);
  if ((param_2 & 1) != 0) {
    puVar2 = puVar1;
    func_0x000107c61174(puVar1);
    FUN_1027005b0();
    func_0x000107c61170(puVar2);
  }
  (**(code **)(lVar4 + 8))(param_1,lVar3);
  return puVar1;
}



/* Entry: 1027005b0; end: 1027005e7;  */

void FUN_1027005b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  iVar3 = 2;
  uVar13 = 0x10;
  func_0x000100029b9c(2,0x10,4,0);
  if (iVar3 != 0) {
    func_0x000107c5f448(0);
    return;
  }
  ppuVar10 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c611b4();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    func_0x000107c60f00();
    func_0x000107c5fb80();
    puStack_a0 = (undefined *)0xd000000000000022;
    uStack_98 = 0x800000010f0b7390;
    puStack_68 = (undefined *)uVar13;
    func_0x000107c61434(uVar13);
    puVar1 = PTR___sSSSTsWP_11034daa0;
    puVar2 = PTR___sSSN_11034da80;
    pppuVar6 = &ppuStack_70;
    puVar14 = PTR___sSSN_11034da80;
    func_0x000107c5fbd4(pppuVar6,PTR___sSSN_11034da80,
                        PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0)
    ;
    ppuStack_70 = pppuVar6;
    puStack_68 = puVar14;
    func_0x000107c5fb70(&puStack_a0,puVar2,puVar1);
    func_0x000107c6142c(uVar13);
    puVar2 = puStack_68;
    pppuVar6 = (undefined8 ***)ppuStack_70;
    pppuVar7 = (undefined8 ***)ppuStack_70;
    func_0x000107c5fadc(ppuStack_70,puStack_68);
    pppuVar8 = pppuVar7;
    func_0x000107c60af0();
    func_0x000107c61170(pppuVar7);
    if (pppuVar8 == (undefined8 ***)0x0) {
      func_0x000107c5fadc(pppuVar6,puVar2);
      func_0x000107c6142c(puVar2);
      pppuVar7 = pppuVar6;
      func_0x000107c3ac4c();
      func_0x000107c61104(pppuVar6);
      if (pppuVar7 == (undefined8 ***)0x0) {
        return;
      }
      func_0x000107c61100(lVar5,pppuVar7,0);
      puVar2 = PTR_s_safeAreaInsets_11262fe10;
      if (lVar5 == 0) {
        return;
      }
      lVar9 = 0;
      func_0x000100f115fc();
      func_0x000107c614e8();
      lVar4 = lVar9;
      func_0x000107c60ef4();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar4 != 0) {
        pcStack_80 = FUN_102700894;
        uStack_78 = 0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_1027008a8;
        puStack_88 = &UNK_11053de08;
        func_0x000107c60bc4(&puStack_a0);
        puVar11 = (undefined1 *)ppuVar10;
        func_0x000107c6103c();
        func_0x000107c610d4(lVar4);
        func_0x000107c60eec(lVar5,puVar2,puVar11,lVar4);
        func_0x000107c60bd0(ppuVar10);
      }
      puVar2 = PTR_s_safeAreaLayoutGuide_11262fe30;
      func_0x000107c60ef4(lVar9,PTR_s_safeAreaLayoutGuide_11262fe30);
      if (lVar9 != 0) {
        pcStack_80 = FUN_102700924;
        uStack_78 = 0;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_10270092c;
        puStack_88 = &UNK_11053dde0;
        func_0x000107c60bc4(&puStack_a0);
        puVar11 = (undefined1 *)ppuVar12;
        func_0x000107c6103c();
        func_0x000107c610d4(lVar9);
        func_0x000107c60eec(lVar5,puVar2,puVar11,lVar9);
        func_0x000107c60bd0(ppuVar12);
      }
      func_0x000107c6116c(lVar5);
    }
    else {
      func_0x000107c6142c(puVar2);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c611bc();
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 1027005e8; end: 102700893;  */

void FUN_1027005e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c611b4();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c60f00();
    func_0x000107c5fb80();
    puStack_a0 = (undefined *)0xd000000000000022;
    uStack_98 = 0x800000010f0b7390;
    puStack_68 = (undefined *)param_2;
    func_0x000107c61434(param_2);
    puVar1 = PTR___sSSSTsWP_11034daa0;
    puVar2 = PTR___sSSN_11034da80;
    pppuVar5 = &ppuStack_70;
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c5fbd4(pppuVar5,PTR___sSSN_11034da80,
                        PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0)
    ;
    ppuStack_70 = pppuVar5;
    puStack_68 = puVar12;
    func_0x000107c5fb70(&puStack_a0,puVar2,puVar1);
    func_0x000107c6142c(param_2);
    puVar2 = puStack_68;
    pppuVar5 = (undefined8 ***)ppuStack_70;
    pppuVar6 = (undefined8 ***)ppuStack_70;
    func_0x000107c5fadc(ppuStack_70,puStack_68);
    pppuVar7 = pppuVar6;
    func_0x000107c60af0();
    func_0x000107c61170(pppuVar6);
    if (pppuVar7 == (undefined8 ***)0x0) {
      func_0x000107c5fadc(pppuVar5,puVar2);
      func_0x000107c6142c(puVar2);
      pppuVar6 = pppuVar5;
      func_0x000107c3ac4c();
      func_0x000107c61104(pppuVar5);
      if (pppuVar6 == (undefined8 ***)0x0) {
        return;
      }
      func_0x000107c61100(lVar4,pppuVar6,0);
      puVar2 = PTR_s_safeAreaInsets_11262fe10;
      if (lVar4 == 0) {
        return;
      }
      lVar8 = 0;
      func_0x000100f115fc();
      func_0x000107c614e8();
      lVar3 = lVar8;
      func_0x000107c60ef4();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar3 != 0) {
        pcStack_80 = FUN_102700894;
        uStack_78 = 0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_1027008a8;
        puStack_88 = &UNK_11053de08;
        func_0x000107c60bc4(&puStack_a0);
        puVar10 = (undefined1 *)ppuVar9;
        func_0x000107c6103c();
        func_0x000107c610d4(lVar3);
        func_0x000107c60eec(lVar4,puVar2,puVar10,lVar3);
        func_0x000107c60bd0(ppuVar9);
      }
      puVar2 = PTR_s_safeAreaLayoutGuide_11262fe30;
      func_0x000107c60ef4(lVar8,PTR_s_safeAreaLayoutGuide_11262fe30);
      if (lVar8 != 0) {
        pcStack_80 = FUN_102700924;
        uStack_78 = 0;
        puStack_a0 = puVar1;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_10270092c;
        puStack_88 = &UNK_11053dde0;
        func_0x000107c60bc4(&puStack_a0);
        puVar10 = (undefined1 *)ppuVar11;
        func_0x000107c6103c();
        func_0x000107c610d4(lVar8);
        func_0x000107c60eec(lVar4,puVar2,puVar10,lVar8);
        func_0x000107c60bd0(ppuVar11);
      }
      func_0x000107c6116c(lVar4);
    }
    else {
      func_0x000107c6142c(puVar2);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c611bc();
    func_0x000107c61170(unaff_x20);
  }
  return;
}



/* Entry: 102700894; end: 1027008a7;  */

undefined8 FUN_102700894(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 1027008a8; end: 102700923;  */

undefined8 FUN_1027008a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_3);
  return param_1;
}



/* Entry: 102700924; end: 10270092b;  */

undefined8 FUN_102700924(void)

{
  return 0;
}



/* Entry: 10270092c; end: 10270097f;  */

void FUN_10270092c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102700980; end: 1027009a3;  */

void FUN_102700980(long param_1,long param_2)

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



/* Entry: 1027009a4; end: 102700a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027009a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700a30; end: 102700a57; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster didInit] */

void FUN_102700a30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027009a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700a58; end: 102700ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700a58(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700ae4; end: 102700b0b; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster viewDidLoad] */

void FUN_102700ae4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102700a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700b0c; end: 102700b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700b0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 0x18))(uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700b98; end: 102700bbf; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster viewWillAppear] */

void FUN_102700b98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102700b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700bc0; end: 102700c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700bc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700c4c; end: 102700c73; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster viewDidAppear] */

void FUN_102700c4c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102700bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700c74; end: 102700cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700c74(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700d00; end: 102700d27; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster viewWillDisappear] */

void FUN_102700d00(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102700c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700d28; end: 102700dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700d28(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112eb9610) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eb9610) + 0x20;
    do {
      FUN_102700e7c(lVar3,auStack_68);
      lVar2 = lStack_48;
      uVar1 = uStack_50;
      func_0x0001000a8868(auStack_68,uStack_50);
      (**(code **)(lVar2 + 0x30))(param_1 & 1,uVar1,lVar2);
      func_0x0001000834e4(auStack_68);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 102700dbc; end: 102700deb; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster viewDidDisappearWithIsPresenting:] */

void FUN_102700dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102700d28(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102700dec; end: 102700e4b; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster init] */

void FUN_102700dec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapViewLifecycleImplementation.MapViewLifecycleBroadcaster",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102700e18);
  (*pcVar1)();
}



/* Entry: 102700e4c; end: 102700e5b; -[_TtC30MapViewLifecycleImplementation27MapViewLifecycleBroadcaster .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb9610));
  return;
}



/* Entry: 102700e5c; end: 102700e7b;  */

void FUN_102700e5c(void)

{
  func_0x000107c61168(&PTR_PTR_11285c010);
  return;
}



/* Entry: 102700e7c; end: 102700f0b;  */

long FUN_102700e7c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102700f0c; end: 102700f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700f0c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10270135c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112eb9648) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102700f78; end: 102700f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700f78(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10270135c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112eb9648) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102700f80; end: 102700fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700f80(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9648) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102700fcc; end: 10270114b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102700fcc(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 auStack_a0 [40];
  long alStack_78 [5];
  
  FUN_1027021f8();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar9 = 0x20;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = *(undefined1 *)(param_1 + lVar9);
      func_0x000100083b20(&uStack_a8);
      uVar3 = CONCAT71(uStack_a7,uStack_a8);
      uStack_a8 = uVar2;
      func_0x00010008a7c8(alStack_78,&uStack_a8);
      func_0x000107c61574(uVar3);
      lVar4 = alStack_78[0];
      if (alStack_78[0] != 0) {
        func_0x0001048580f8(auStack_a0);
        func_0x000107c61574(lVar4);
        FUN_102701180(auStack_a0,alStack_78);
        puVar5 = puVar6;
        func_0x000107c61558();
        puVar7 = puVar6;
        if (((ulong)puVar5 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_102701208(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puVar6 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_102701208(puVar6,uVar1 + 1,1,puVar7);
        }
        *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
        FUN_102701180(alStack_78,puVar6 + uVar1 * 0x28 + 0x20);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(param_1);
  }
  lVar9 = 0;
  FUN_102700e5c();
  lVar8 = lVar9;
  func_0x000107c610f8();
  *(undefined **)(lVar8 + _DAT_112eb9610) = puVar6;
  lStack_b8 = lVar8;
  lStack_b0 = lVar9;
  func_0x000107c61154(&lStack_b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10270114c; end: 10270117f; -[_TtC30MapViewLifecycleImplementation48MapViewLifecycleBroadcasterFactoryImplementation makeBroadcaster] */

void FUN_10270114c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102700fcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102701180; end: 102701197;  */

undefined8 * FUN_102701180(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102701198; end: 1027011f7; -[_TtC30MapViewLifecycleImplementation48MapViewLifecycleBroadcasterFactoryImplementation init] */

void FUN_102701198(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapViewLifecycleImplementation.MapViewLifecycleBroadcasterFactoryImplementation"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027011c4);
  (*pcVar1)();
}



/* Entry: 1027011f8; end: 102701207; -[_TtC30MapViewLifecycleImplementation48MapViewLifecycleBroadcasterFactoryImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027011f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb9648));
  return;
}



/* Entry: 102701208; end: 10270134b;  */

undefined * FUN_102701208(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10270134c);
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
    puVar3 = (undefined *)0x112eb9678;
    func_0x0001000285a8(0x112eb9678,&UNK_10dad0f58);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112eb9680;
    func_0x0001000285a8(0x112eb9680,&UNK_10dad0f60);
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



/* Entry: 10270134c; end: 10270135b;  */

undefined1  [16] FUN_10270134c(void)

{
  return ZEXT816(0x11053dec8);
}



/* Entry: 10270135c; end: 10270137b;  */

void FUN_10270135c(void)

{
  func_0x000107c61168(&PTR_PTR_11285c0d0);
  return;
}



/* Entry: 10270137c; end: 10270140f;  */

void FUN_10270137c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb9688,&UNK_10dad0f70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102701410,param_1);
  return;
}



/* Entry: 102701410; end: 102701427;  */

void FUN_102701410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_102702ab0(0);
  func_0x000107c610f8();
  func_0x0001027029f4(unaff_x20,uVar1);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102701428; end: 102701517;  */

void FUN_102701428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053df08;
  func_0x000107c613fc(&UNK_11053df08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001002acf1c(FUN_102701518,puVar1);
  return;
}



/* Entry: 102701518; end: 10270151f;  */

/* WARNING: Possible PIC construction at 0x000102701500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102701504) */

void FUN_102701518(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_102701b30();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x18) = lVar1;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11053df70;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 102701520; end: 10270155f;  */

void FUN_102701520(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102701560; end: 102701583;  */

void FUN_102701560(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x93;
  func_0x0001000e48c0();
  uRam0000000112eb9698 = uVar1;
  uRam0000000112eb96a0 = param_2;
  return;
}



/* Entry: 102701584; end: 102701767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102701584(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x000100083b20(&puStack_70);
  puVar5 = puStack_70;
  puVar1 = puStack_70;
  func_0x000107c4e288();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar1 != (undefined *)0x0) {
    if (lRam0000000112eb9690 != -1) {
      func_0x000107c61568(0x112eb9690,FUN_102701560);
    }
    uVar7 = uRam0000000112eb9698;
    func_0x000107c5fadc(uRam0000000112eb9698,uRam0000000112eb96a0);
    func_0x000107c496d4(puVar1);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(uVar7);
  }
  func_0x000100083b20(&puStack_70);
  lVar2 = *(long *)(puStack_70 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c61170(puStack_70);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c4c334();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c4c330();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar5 = &UNK_11053df30;
    func_0x000107c613fc(&UNK_11053df30,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcStack_50 = FUN_102701998;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b5fdac;
    puStack_58 = &UNK_11053df48;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar2 = lVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 102701768; end: 102701847;  */

void FUN_102701768(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000100083b20(&lStack_50);
    lVar1 = lStack_50;
    func_0x000107c4e288();
    func_0x000107c61180();
    func_0x000107c61170(lStack_50);
    if (lVar1 != 0) {
      if (lRam0000000112eb9690 != -1) {
        func_0x000107c61568(0x112eb9690,FUN_102701560);
      }
      uVar2 = uRam0000000112eb9698;
      func_0x000107c5fadc(uRam0000000112eb9698,uRam0000000112eb96a0);
      func_0x000107c4e278(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102701848; end: 102701997;  */

void FUN_102701848(void)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c4e288();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  if (lVar1 != 0) {
    if (lRam0000000112eb9690 != -1) {
      func_0x000107c61568(0x112eb9690,FUN_102701560);
    }
    uVar2 = uRam0000000112eb9698;
    func_0x000107c5fadc(uRam0000000112eb9698,uRam0000000112eb96a0);
    func_0x000107c5deb8(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102701998; end: 1027019bb;  */

void FUN_102701998(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100083b20(&lStack_50);
    lVar2 = lStack_50;
    func_0x000107c4e288();
    func_0x000107c61180();
    func_0x000107c61170(lStack_50);
    if (lVar2 != 0) {
      if (lRam0000000112eb9690 != -1) {
        func_0x000107c61568(0x112eb9690,FUN_102701560);
      }
      uVar3 = uRam0000000112eb9698;
      func_0x000107c5fadc(uRam0000000112eb9698,uRam0000000112eb96a0);
      func_0x000107c4e278(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1027019bc; end: 1027019ef;  */

void FUN_1027019bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027019f0; end: 102701a2f;  */

void FUN_1027019f0(void)

{
  FUN_102701584();
  return;
}



/* Entry: 102701a30; end: 102701a33;  */

void FUN_102701a30(void)

{
  return;
}



/* Entry: 102701a34; end: 102701a53;  */

void FUN_102701a34(void)

{
  func_0x0001027018f0();
  return;
}



/* Entry: 102701a54; end: 102701a57;  */

void FUN_102701a54(void)

{
  return;
}



/* Entry: 102701a58; end: 102701b1f;  */

void FUN_102701a58(void)

{
  func_0x000102701a78();
  return;
}



/* Entry: 102701b20; end: 102701b2f;  */

undefined1  [16] FUN_102701b20(void)

{
  return ZEXT816(0x11053dfb8);
}



/* Entry: 102701b30; end: 102701b4f;  */

void FUN_102701b30(void)

{
  func_0x000107c61168(&PTR_PTR_112eb96e8);
  return;
}



/* Entry: 102701b50; end: 102701c57;  */

void FUN_102701b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11053dfe0;
  func_0x000107c613fc(&UNK_11053dfe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001002acf1c(FUN_102701c58,puVar1);
  return;
}



/* Entry: 102701c58; end: 102701c5f;  */

void FUN_102701c58(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_102701eac();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = uStack_38;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uStack_40;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11053dff8;
  *param_1 = lVar2;
  return;
}



/* Entry: 102701c60; end: 102701dcb;  */

void FUN_102701c60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102701dcc; end: 102701e2f;  */

void FUN_102701dcc(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c5d320();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102701e30; end: 102701e4f;  */

void FUN_102701e30(void)

{
  func_0x000102701ca0();
  return;
}



/* Entry: 102701e50; end: 102701e53;  */

void FUN_102701e50(void)

{
  return;
}



/* Entry: 102701e54; end: 102701e73;  */

void FUN_102701e54(void)

{
  func_0x000102701d3c();
  return;
}



/* Entry: 102701e74; end: 102701e7b;  */

void FUN_102701e74(void)

{
  return;
}



/* Entry: 102701e7c; end: 102701e9b;  */

void FUN_102701e7c(void)

{
  FUN_102701dcc();
  return;
}



/* Entry: 102701e9c; end: 102701eab;  */

undefined1  [16] FUN_102701e9c(void)

{
  return ZEXT816(0x11053e040);
}



/* Entry: 102701eac; end: 102701ecb;  */

void FUN_102701eac(void)

{
  func_0x000107c61168(&PTR_PTR_112eb9798);
  return;
}



/* Entry: 102701ecc; end: 102701f23;  */

void FUN_102701ecc(undefined8 param_1)

{
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x0001002acf1c(FUN_102701f88,param_1);
  return;
}



/* Entry: 102701f24; end: 102701f87;  */

void FUN_102701f24(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102702074();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11053e058;
  *param_1 = lVar1;
  return;
}


