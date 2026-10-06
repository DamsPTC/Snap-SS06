/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10830cae4; end: 10830cb1b;  */

undefined * FUN_10830cae4(void)

{
  return &UNK_10f48a2aa;
}



/* Entry: 10830cb1c; end: 10830cb4b;  */

void FUN_10830cb1c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010830cff8();
  func_0x00010830cf64();
  *param_1 = &PTR_DAT_110a3b710;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10830cb4c; end: 10830cb57;  */

void FUN_10830cb4c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10830cb50);
  (*pcVar1)();
}



/* Entry: 10830cb58; end: 10830cb6b;  */

void FUN_10830cb58(void)

{
  FUN_10830cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830cb6c; end: 10830cd3f;  */

void FUN_10830cb6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_10830cd70(0x40800000,param_4,&DAT_10f48a2c5);
  FUN_10830cd70(0x40a00000,param_4,&UNK_10f48a2cf);
  FUN_10830cd70(0x4200000042000000,param_4,&UNK_10f48a2e7);
  func_0x00010830cf98();
  if ((*(byte *)(param_3 + 0x80) >> 5 & 1) == 0) {
    func_0x00010830cf98();
  }
  else {
    FUN_1083a3c34(auStack_58,&UNK_10f48a2fa);
    func_0x00010830cf98();
    func_0x00010830d014();
    FUN_1083a3c34(auStack_58,&UNK_10f48a32a);
    func_0x00010830cf98();
    func_0x00010830d014();
  }
  func_0x00010830cf98();
  func_0x00010830d00c();
  if ((*(byte *)(param_3 + 0x80) >> 1 & 1) != 0) {
    func_0x00010830d00c();
  }
  func_0x00010830d00c();
  param_6[0x28] = 0xe;
  func_0x0001083a3534(param_6 + 0x38,&UNK_10f489995);
  *param_6 = 0xe;
  func_0x0001083a3534(param_6 + 0x10,&UNK_10f489ec7);
  if ((*(byte *)(param_3 + 0x80) >> 3 & 1) != 0) {
    auStack_58[0] = 0x17;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_44 = 0;
    FUN_1082dd868(param_5,&DAT_10f68f0f0,auStack_58,1);
    FUN_10828bae8(param_4,&UNK_10f48a9cf);
    func_0x0001083a3534(param_1 + 0x40,CONCAT44(uStack_44,uStack_48));
  }
  return;
}



/* Entry: 10830cd40; end: 10830cd6f;  */

undefined8 * FUN_10830cd40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3b5e0;
  FUN_1083a3c7c(param_1 + 8);
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 10830cd70; end: 10830cdb7;  */

void FUN_10830cd70(long param_1)

{
  code *pcVar1;
  
  if (1 < *(int *)(param_1 + 0xa8)) {
    FUN_1083a3a90(*(long *)(param_1 + 0xa0) + 8,&UNK_10f48a9e1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10830cdb8);
  (*pcVar1)();
}



/* Entry: 10830cdb8; end: 10830cdd3;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_10830cdb8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_58 [8];
  
  if (*(int *)(param_1 + 0xa8) < 8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10830cdd4);
    (*pcVar5)();
  }
  plVar1 = (long *)(*(long *)(param_1 + 0xa0) + 0x38);
  if (param_2 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = plVar1;
    FUN_1083a3d50();
  }
  if (plVar8 != (long *)0x0) {
    uVar9 = (ulong)*(uint *)*plVar1;
    plVar3 = (long *)(uVar9 ^ 0xffffffff);
    if ((long)plVar8 + uVar9 >> 0x20 == 0) {
      plVar3 = plVar8;
    }
    if (plVar3 != (long *)0x0) {
      uVar2 = (long)plVar3 + uVar9;
      if (((uint *)*plVar1)[1] == 1 && (uVar2 ^ uVar9) < 4) {
        plVar8 = plVar1;
        func_0x0001083a3dbc(plVar1,0xffffffffffffffff,param_2);
        func_0x0001083a3dd4((long)plVar8 + uVar9);
        *(undefined1 *)((long)plVar8 + uVar2) = 0;
        *(int *)*plVar1 = (int)uVar2;
      }
      else {
        puVar6 = auStack_58;
        FUN_1083a3310(puVar6,(long)plVar3 + (ulong)*(uint *)*plVar1);
        func_0x0001083a3de0();
        if (uVar9 != 0) {
          func_0x0001083a3d9c(puVar6,*plVar1 + 8);
        }
        func_0x0001083a3dd4(puVar6 + uVar9);
        puVar7 = (uint *)*plVar1;
        lVar4 = *puVar7 - uVar9;
        if (uVar9 <= *puVar7 && lVar4 != 0) {
          _memcpy(puVar6 + uVar9 + (long)plVar3,(long)puVar7 + uVar9 + 8,lVar4);
          puVar7 = (uint *)*plVar1;
        }
        func_0x0001083a3cdc(puVar7);
      }
    }
  }
  return;
}



/* Entry: 10830cdd4; end: 10830cdf7;  */

undefined8 * FUN_10830cdd4(long param_1)

{
  func_0x00010830cfe4(*(undefined8 *)(param_1 + -0x91));
  return (undefined8 *)(param_1 + -0x91);
}



/* Entry: 10830cdf8; end: 10830ce0f;  */

void FUN_10830cdf8(void)

{
  return;
}



/* Entry: 10830ce10; end: 10830ce3f;  */

void FUN_10830ce10(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010830cff8();
  func_0x00010830cf64();
  *param_1 = &PTR_FUN_110a3b7d0;
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10830ce40; end: 10830ce43;  */

undefined8 * FUN_10830ce40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3b5e0;
  FUN_1083a3c7c(param_1 + 8);
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 10830ce44; end: 10830ce57;  */

void FUN_10830ce44(void)

{
  FUN_10830cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830ce58; end: 10830cefb;  */

/* WARNING: Possible PIC construction at 0x00010830ce8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010830ce90) */

long * FUN_10830ce58(void)

{
  long *plVar1;
  undefined8 in_x3;
  long in_x5;
  long lVar2;
  long alStack_48 [3];
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10829dbfc(in_x3,&UNK_10f48aa22);
  *(undefined1 *)(in_x5 + 0x28) = 0xe;
  plVar1 = (long *)(in_x5 + 0x38);
  alStack_48[1] = 0xe;
  uStack_28 = 0x10830ce90;
  alStack_48[2] = in_x5;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_1083a3348(alStack_48,&UNK_10f489995);
  lVar2 = *plVar1;
  if (lVar2 != alStack_48[0]) {
    *plVar1 = alStack_48[0];
    alStack_48[0] = lVar2;
  }
  FUN_1083a3ca0(alStack_48[0]);
  return plVar1;
}



/* Entry: 10830cefc; end: 10830cf5b;  */

undefined8 FUN_10830cefc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  uStack_28 = *(undefined8 *)param_1[1];
  *(undefined8 *)param_1[1] = 0;
  FUN_1082a2fc4(param_2,uVar1,&uStack_28,param_1[2]);
  FUN_1082a36c0(&uStack_28);
  return param_2;
}



/* Entry: 10830cf5c; end: 10830d027;  */

undefined8 FUN_10830cf5c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  undefined8 unaff_x19;
  
  lVar3 = param_1 + -0x91;
  FUN_1082a36f0(param_1 + -0x41);
  FUN_1082a36c0(param_1 + -0x49);
  FUN_10827a4f4(param_1 + -0x69);
  func_0x000108276964();
  if (lVar3 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return unaff_x19;
}



/* Entry: 10830d028; end: 10830d363;  */

undefined8 *
FUN_10830d028(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,long param_6,uint param_7,undefined8 *param_8,undefined8 *param_9)

{
  int extraout_w8;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined8 *puVar4;
  int extraout_w9;
  int extraout_w9_00;
  undefined4 uVar5;
  int extraout_w9_01;
  int extraout_w9_02;
  undefined8 *puVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_45;
  undefined4 uStack_44;
  
  param_5[3] = 0;
  param_5[2] = 0;
  *(undefined4 *)(param_5 + 1) = 0x3d;
  param_5[5] = 0;
  param_5[4] = 0;
  param_5[7] = 0;
  param_5[6] = 0;
  *(undefined4 *)(param_5 + 8) = 0;
  *param_5 = &PTR_FUN_110a3b6d0;
  *(undefined1 *)((long)param_5 + 0x44) = 1;
  uVar8 = param_8[1];
  uVar7 = *param_8;
  uVar10 = param_8[3];
  uVar9 = param_8[2];
  param_5[0xd] = param_8[4];
  param_5[0xc] = uVar10;
  param_5[0xb] = uVar9;
  param_5[10] = uVar8;
  param_5[9] = uVar7;
  *(undefined4 *)(param_5 + 0xe) = param_1;
  *(undefined4 *)((long)param_5 + 0x74) = param_2;
  *(undefined4 *)(param_5 + 0xf) = param_3;
  *(undefined4 *)((long)param_5 + 0x7c) = param_4;
  *param_5 = &PTR_FUN_110a3b820;
  *(uint *)(param_5 + 0x10) = param_7 | 1;
  uVar7 = *param_9;
  *(undefined8 *)((long)param_5 + 0x8c) = param_9[1];
  *(undefined8 *)((long)param_5 + 0x84) = uVar7;
  param_5[0x25] = param_5 + 0x13;
  param_5[0x26] = 0xc00000000;
  uStack_44 = 3;
  uStack_45 = 0x10;
  FUN_1082eb028(param_5 + 0x25,&UNK_10f48aa7c,&uStack_44,&uStack_45);
  uStack_4c = 3;
  uStack_4d = 0x10;
  puVar4 = param_5 + 0x25;
  FUN_1082eb028(puVar4,&UNK_10f48aa86,&uStack_4c,&uStack_4d);
  if (*(int *)(param_5 + 0x26) < (int)(*(uint *)((long)param_5 + 0x134) >> 1)) {
    *(undefined **)(param_5[0x25] + (long)*(int *)(param_5 + 0x26) * 0x18) = &UNK_10f48aa90;
    func_0x00010830dbcc();
    iVar1 = extraout_w8;
  }
  else {
    func_0x00010830db8c();
    func_0x00010830db9c();
    puVar6 = (undefined8 *)((long)puVar4 + (long)extraout_w9 * (long)extraout_w10);
    *puVar6 = &UNK_10f48aa90;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined1 *)((long)puVar6 + 0xc) = 0xe;
    *(undefined4 *)(puVar6 + 2) = 1;
    func_0x00010830dbb0();
    iVar1 = *(int *)(param_5 + 0x26);
  }
  iVar1 = iVar1 + 1;
  *(int *)(param_5 + 0x26) = iVar1;
  uVar3 = (ulong)*(uint *)(param_5 + 0x10);
  if ((*(uint *)(param_5 + 0x10) >> 2 & 1) != 0) {
    if (iVar1 < (int)(*(uint *)((long)param_5 + 0x134) >> 1)) {
      *(undefined **)(param_5[0x25] + (long)iVar1 * 0x18) = &UNK_10f48aa99;
      func_0x00010830dbcc();
      uVar3 = extraout_x8;
    }
    else {
      func_0x00010830db8c();
      func_0x00010830db9c();
      puVar6 = (undefined8 *)((long)puVar4 + (long)extraout_w9_00 * (long)extraout_w10_00);
      *puVar6 = &UNK_10f48aa99;
      *(undefined4 *)(puVar6 + 1) = 1;
      *(undefined1 *)((long)puVar6 + 0xc) = 0xe;
      *(undefined4 *)(puVar6 + 2) = 1;
      func_0x00010830dbb0();
      iVar1 = *(int *)(param_5 + 0x26);
      uVar3 = (ulong)*(uint *)(param_5 + 0x10);
    }
    iVar1 = iVar1 + 1;
    *(int *)(param_5 + 0x26) = iVar1;
  }
  uVar2 = (uint)uVar3;
  if ((uVar2 >> 3 & 1) != 0) {
    uVar5 = 0x11;
    if ((uVar3 & 0x40) != 0) {
      uVar5 = 3;
    }
    if (iVar1 < (int)(*(uint *)((long)param_5 + 0x134) >> 1)) {
      puVar6 = (undefined8 *)(param_5[0x25] + (long)iVar1 * 0x18);
      *puVar6 = &UNK_10f48aaab;
      *(undefined4 *)(puVar6 + 1) = uVar5;
      *(undefined1 *)((long)puVar6 + 0xc) = 0x17;
      *(undefined4 *)(puVar6 + 2) = 1;
    }
    else {
      func_0x00010830db8c();
      func_0x00010830db9c();
      puVar6 = (undefined8 *)((long)puVar4 + (long)extraout_w9_01 * (long)extraout_w10_01);
      *puVar6 = &UNK_10f48aaab;
      *(undefined4 *)(puVar6 + 1) = uVar5;
      *(undefined1 *)((long)puVar6 + 0xc) = 0x17;
      *(undefined4 *)(puVar6 + 2) = 1;
      func_0x00010830dbb0();
      iVar1 = *(int *)(param_5 + 0x26);
      uVar2 = *(uint *)(param_5 + 0x10);
    }
    iVar1 = iVar1 + 1;
    *(int *)(param_5 + 0x26) = iVar1;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    if (iVar1 < (int)(*(uint *)((long)param_5 + 0x134) >> 1)) {
      puVar4 = (undefined8 *)(param_5[0x25] + (long)iVar1 * 0x18);
      *puVar4 = &UNK_10f48aabc;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined1 *)((long)puVar4 + 0xc) = 0xd;
      *(undefined4 *)(puVar4 + 2) = 1;
    }
    else {
      func_0x00010830db8c();
      func_0x00010830db9c();
      puVar4 = (undefined8 *)((long)puVar4 + (long)extraout_w9_02 * (long)extraout_w10_02);
      *puVar4 = &UNK_10f48aabc;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined1 *)((long)puVar4 + 0xc) = 0xd;
      *(undefined4 *)(puVar4 + 2) = 1;
      func_0x00010830dbb0();
      iVar1 = *(int *)(param_5 + 0x26);
    }
    *(int *)(param_5 + 0x26) = iVar1 + 1;
  }
  FUN_10829e324(param_5 + 5,param_5[0x25]);
  if ((*(byte *)(param_6 + 0x5e) & 1) == 0) {
    FUN_10829e324(param_5 + 2,&PTR_DAT_110a3b850,1);
  }
  return param_5;
}



/* Entry: 10830d364; end: 10830d88f;  */

void FUN_10830d364(long param_1,long *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  undefined4 uVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar7 = param_2[5];
  uVar2 = *(uint *)(lVar7 + 0x90);
  FUN_1082dd9a4(param_2[2],lVar7);
  if (1 < *(int *)(*param_2 + 0xa8)) {
    FUN_1083a3a90(*(long *)(*param_2 + 0xa0) + 8,&UNK_10f48c325);
    FUN_10830cd70(0x40800000,*param_2,&DAT_10f48a2c5);
    uVar8 = 0x467ffc00;
    if (*(char *)(param_2[4] + 0x5e) == '\0') {
      uVar8 = 0x44800000;
    }
    FUN_10830cd70(uVar8,*param_2,&UNK_10f48aae9);
    if ((*(byte *)(lVar7 + 0x80) >> 2 & 1) != 0) {
      FUN_10830cdb8(*param_2,&UNK_10f48c338);
    }
    FUN_10830cdb8(*param_2,&UNK_10f48c3ca);
    FUN_10830cdb8(*param_2,&UNK_10f48c49b);
    FUN_10830cdb8(*param_2,&UNK_10f48c4f7);
    FUN_10830cdb8(*param_2,&UNK_10f48c596);
    FUN_10830cdb8(*param_2,&UNK_10f48c69c);
    if ((*(byte *)(lVar7 + 0x80) >> 2 & 1) == 0) {
      uVar8 = (undefined4)param_2[3];
      func_0x00010830dbe4();
      func_0x00010828bb5c();
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      lVar5 = *param_2;
      puVar6 = &UNK_10f48ab09;
    }
    else {
      uVar8 = (undefined4)param_2[3];
      func_0x00010830dbe4();
      func_0x00010828bb5c();
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      lVar5 = *param_2;
      puVar6 = &UNK_10f48ab71;
    }
    FUN_10828bae8(lVar5,puVar6);
    if ((*(byte *)(lVar7 + 0x80) >> 3 & 1) != 0) {
      uStack_58 = CONCAT31(uStack_58._1_3_,0x17);
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_44 = 0;
      FUN_1082dd868(param_2[2],&UNK_10f48ac1c,&uStack_58,0);
      FUN_10828bae8(*param_2,&UNK_10f48ac29);
      func_0x0001083a3534(param_1 + 0x40,CONCAT44(uStack_44,uStack_48));
    }
    uVar8 = (undefined4)param_2[3];
    func_0x00010830dbe4();
    func_0x00010828bb5c();
    *(undefined4 *)(param_1 + 0x38) = uVar8;
    uVar8 = (undefined4)param_2[3];
    func_0x00010830dbe4();
    func_0x00010828bb5c();
    *(undefined4 *)(param_1 + 0x34) = uVar8;
    FUN_10828bae8(*param_2,&UNK_10f48ac40);
    FUN_10828bae8(*param_2,&UNK_10f48ac72);
    lVar5 = *param_2;
    if ((*(byte *)(lVar7 + 0x80) >> 5 & 1) == 0) {
      FUN_10830cdb8(lVar5,&UNK_10f48acc0);
    }
    else {
      FUN_1083a3c34(&uStack_58,&UNK_10f48ac8a);
      FUN_10830cdb8(lVar5,CONCAT44(uStack_54,uStack_58) + 8);
      FUN_1083a3ca0(CONCAT44(uStack_54,uStack_58));
    }
    FUN_10829dbfc(*param_2,&UNK_10f48acf5);
    FUN_10829dbfc(*param_2,&UNK_10f48ad9c);
    iVar4 = (int)lVar7 + 0x84;
    FUN_10828782c();
    if (iVar4 != 0) {
      FUN_10829dbfc(*param_2,&UNK_10f48aed5);
    }
    FUN_10829dbfc(*param_2,&UNK_10f48af6a);
    if (*(char *)(param_2[4] + 0x5e) == '\x01') {
      FUN_10829dbfc(*param_2,&UNK_10f48b04f);
    }
    uVar2 = uVar2 >> 0x10 & 0xff;
    if ((*(char *)(lVar7 + 0x92) == '\x01') || ((*(byte *)(lVar7 + 0x80) >> 2 & 1) != 0)) {
      FUN_10829dbfc(*param_2,&UNK_10f48b0a6);
      if ((*(byte *)(lVar7 + 0x80) >> 2 & 1) != 0) {
        FUN_10829dbfc(*param_2,&UNK_10f48b1eb);
      }
    }
    else {
      if (2 < uVar2) goto LAB_10830d878;
      FUN_10828bae8(*param_2,&UNK_10f48b22b);
    }
    FUN_10829dbfc(*param_2,&UNK_10f48b246);
    if ((uVar2 == 0) || ((*(uint *)(lVar7 + 0x80) >> 2 & 1) != 0)) {
      FUN_10828bae8(*param_2,&UNK_10f48b801);
    }
    lVar5 = *param_2;
    func_0x00010828bb68(lVar5);
    FUN_1083a3a90();
    FUN_10818f348(lVar5,&UNK_10f48c216);
    iVar4 = (int)lVar7 + 0x84;
    FUN_10828782c();
    puVar6 = &UNK_10f48c2c1;
    if (iVar4 == 0) {
      puVar6 = &UNK_10f48c27a;
    }
    puVar1 = &UNK_10f488b52;
    if (iVar4 == 0) {
      puVar1 = &UNK_10f48c2b5;
    }
    FUN_10818f348(lVar5,puVar6);
    *param_3 = 0xe;
    func_0x0001083a3534(param_3 + 0x10,&UNK_10f488ad8);
    param_3[0x28] = 0xe;
    func_0x0001083a3534(param_3 + 0x38,puVar1);
    if ((*(byte *)(lVar7 + 0x80) >> 3 & 1) == 0) {
      lVar7 = param_2[3];
      func_0x00010828bb5c(lVar7,0,2,0x17,&DAT_10f68f0f0,&uStack_58);
      *(int *)(param_1 + 0x3c) = (int)lVar7;
      func_0x00010830dbbc();
      lVar7 = extraout_x8;
      lVar5 = extraout_x9;
    }
    else {
      func_0x00010830dbbc();
      lVar7 = extraout_x8_00;
      lVar5 = extraout_x9_00;
    }
    FUN_10828bae8(lVar7 + lVar5,&UNK_10f489ed1);
    func_0x00010830dbbc();
    FUN_10828bae8(extraout_x8_01 + extraout_x9_01,&UNK_10f481ead);
    return;
  }
LAB_10830d878:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10830d87c);
  (*pcVar3)();
}



/* Entry: 10830d890; end: 10830d9ef;  */

void FUN_10830d890(float param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_108365614(param_5 + 0x48);
  if ((*(byte *)(param_5 + 0x80) >> 2 & 1) == 0) {
    uVar3 = param_5 + 0x84;
    FUN_10828782c();
    fVar6 = 0.5;
    if ((uVar3 & 1) == 0) {
      fVar6 = *(float *)(param_5 + 0x88) * 0.5;
    }
    iVar2 = (int)param_5 + 0x84;
    FUN_10828782c();
    fVar5 = 1.0;
    if (iVar2 == 0) {
      fVar5 = ABS(param_1);
    }
    fVar4 = -0.25 / (fVar6 * fVar5) + 1.0;
    fVar5 = -1.0;
    if (-1.0 <= fVar4) {
      fVar5 = fVar4;
    }
    uVar3 = (ulong)(uint)fVar5;
    _acosf(uVar3);
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    fVar5 = (float)uVar3;
    FUN_10830d9f0(param_5 + 0x84);
    (**(code **)(*param_3 + 0x60))(0.5 / fVar5,uVar3,fVar6,param_3,uVar1);
  }
  else {
    (**(code **)(*param_3 + 0x20))(ABS(param_1),param_3,*(undefined4 *)(param_2 + 0x30));
  }
  (**(code **)(*param_3 + 0x40))
            (*(undefined4 *)(param_5 + 0x50),*(undefined4 *)(param_5 + 0x5c),param_3,
             *(undefined4 *)(param_2 + 0x34));
  (**(code **)(*param_3 + 0x80))
            (*(undefined4 *)(param_5 + 0x48),*(undefined4 *)(param_5 + 0x54),
             *(undefined4 *)(param_5 + 0x4c),*(undefined4 *)(param_5 + 0x58),param_3,
             *(undefined4 *)(param_2 + 0x38));
  if ((*(byte *)(param_5 + 0x80) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010830d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x88))(param_3,*(undefined4 *)(param_2 + 0x3c),1,param_5 + 0x70);
    return;
  }
  return;
}



/* Entry: 10830d9f0; end: 10830da1f;  */

undefined4 FUN_10830d9f0(long param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar3 = 0xbf800000;
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        return 0;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10830da20);
      (*pcVar2)();
    }
  }
  return uVar3;
}



/* Entry: 10830da20; end: 10830da8f;  */

void FUN_10830da20(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x92) << 1;
  }
  else {
    uVar2 = 0;
  }
  param_1 = param_1 + 0x84;
  FUN_10828782c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010830da8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,uVar2 | (uint)param_1 | (uVar1 & 0x1ffffff7) << 3,"unknown",7);
  return;
}



/* Entry: 10830da90; end: 10830daeb;  */

void FUN_10830da90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *puVar1 = &PTR_DAT_110a3b890;
  puVar1[6] = 0xffffffffffffffff;
  puVar1[7] = 0xffffffffffffffff;
  puVar1[8] = 0x1138270b0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10830daec; end: 10830daef;  */

undefined8 * FUN_10830daec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3b820;
  FUN_1082f4638(param_1 + 0x25);
  return param_1;
}



/* Entry: 10830daf0; end: 10830db03;  */

void FUN_10830daf0(void)

{
  undefined1 *unaff_x19;
  
  FUN_10830db28();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 10830db04; end: 10830db13;  */

undefined * FUN_10830db04(void)

{
  return &UNK_10f48c681;
}



/* Entry: 10830db14; end: 10830db27;  */

void FUN_10830db14(void)

{
  func_0x00010830db5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830db28; end: 10830db8b;  */

undefined8 * FUN_10830db28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3b820;
  FUN_1082f4638(param_1 + 0x25);
  return param_1;
}



/* Entry: 10830db8c; end: 10830dbef;  */

void FUN_10830db8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x128);
  uVar2 = 1;
  if ((int)(*(uint *)(unaff_x19 + 0x130) ^ 0x7fffffff) < 1) {
    func_0x00010bdb1a68(0x3ff8000000000000);
    pcStack_18 = FUN_1082eb3d4;
    puStack_20 = &stack0xfffffffffffffff0;
    if (*(int *)(puVar1 + 1) != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      _memcpy(uVar2,*puVar1,(long)*(int *)(puVar1 + 1) * 0x18);
    }
    if ((*(byte *)((long)puVar1 + 0xc) & 1) != 0) {
      _free(*puVar1);
    }
    param_3 = param_3 / 0x18;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *puVar1 = uVar2;
    *(uint *)((long)puVar1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  pcStack_18 = (code *)0x7fffffff;
  puStack_20 = (undefined1 *)0x18;
  FUN_10840fe24(&puStack_20,*(uint *)(unaff_x19 + 0x130) + 1);
  return;
}



/* Entry: 10830dbf0; end: 10830dc87;  */

undefined8
FUN_10830dbf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined2 uStack_38;
  
  auStack_68[0] = 0;
  uStack_50 = 0;
  uStack_4c = 0x3210;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0x3210;
  uStack_60 = param_1[5];
  uStack_58 = 0;
  FUN_1082a35a0(&uStack_58,param_1[3]);
  uStack_38 = *(undefined2 *)(param_1[1] + 0xc);
  FUN_1082f3ef8(*param_1,auStack_68,param_4,param_3);
  FUN_10830dc88();
  return param_3;
}



/* Entry: 10830dc88; end: 10830dc93;  */

undefined8 FUN_10830dc88(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  long unaff_x22;
  
  lVar3 = unaff_x22 + 0x10;
  func_0x000108276964();
  if (lVar3 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return param_1;
}



/* Entry: 10830dc94; end: 10830dcdf;  */

void FUN_10830dc94(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 10830dce0; end: 10830ddab;  */

void FUN_10830dce0(long param_1)

{
  int extraout_w11;
  int extraout_w11_00;
  long *plVar1;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x000108310228();
    for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 2) {
      if (*(long *)(param_1 + 0x40) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11 != 0);
      }
      func_0x00010830ffe8();
      plVar1 = (long *)*unaff_x22;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11_00 != 0);
      }
      func_0x00010830ffe8();
      func_0x00010830ffd0();
      func_0x000108310108();
      func_0x0001083100e4();
      func_0x0001083100dc();
      func_0x00010830ffb8();
    }
  }
  return;
}



/* Entry: 10830ddac; end: 10830ec5f;  */

void FUN_10830ddac(long param_1,long *param_2,float ******param_3,long param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 *puVar14;
  code *pcVar15;
  bool bVar16;
  float ******ppppppfVar17;
  float ******ppppppfVar18;
  uint uVar19;
  float *extraout_x8;
  long lVar20;
  int iVar21;
  int extraout_w11;
  int extraout_w11_00;
  int iVar22;
  float *****pppppfVar23;
  int iVar24;
  float ******unaff_x22;
  float ******unaff_x23;
  float fVar25;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar33;
  undefined8 uVar26;
  float fVar34;
  undefined8 extraout_d0;
  float *****extraout_d0_00;
  float *****pppppfVar27;
  float fVar35;
  undefined1 auVar28 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float *****extraout_var_03;
  float *****extraout_var_04;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float fVar36;
  float extraout_s1_01;
  float fVar37;
  float extraout_s1_02;
  undefined8 extraout_d1;
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  float fVar40;
  float *****pppppfVar38;
  undefined1 auVar39 [16];
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  float fVar41;
  float extraout_s2;
  undefined4 extraout_s2_00;
  float extraout_s2_01;
  float fVar42;
  float fVar43;
  float extraout_s2_02;
  float extraout_s2_03;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float *****pppppfVar54;
  float *****in_register_00005088;
  float *****pppppfVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  int iStack_244;
  long lStack_228;
  int iStack_214;
  undefined8 uStack_208;
  int iStack_1fc;
  undefined8 *puStack_1f8;
  undefined8 uStack_1e0;
  float ****ppppfStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_180;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  float ****ppppfStack_140;
  float ****ppppfStack_138;
  undefined8 uStack_130;
  float ****ppppfStack_120;
  float ****ppppfStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float *****pppppfStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  float *****pppppfStack_68;
  int iStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float ****ppppfStack_44;
  float *****pppppfStack_38;
  undefined8 *puStack_30;
  undefined4 uStack_28;
  byte bStack_24;
  long lStack_18;
  
  func_0x000108310250();
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (6 < param_5 * 5 + 6U) {
    uStack_108 = 0x3f800000;
    uStack_100 = 0;
    uVar19 = *(uint *)(param_1 + 8);
    unaff_x23 = (float ******)(ulong)uVar19;
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar19);
    uStack_88 = 0;
    ppppppfVar17 = unaff_x23;
    FUN_10830fd28();
    puStack_80 = &uStack_108;
    uStack_50 = 0;
    uStack_58 = 0;
    ppppfStack_44 = (float ****)0x0;
    bStack_24 = (byte)(uVar19 >> 3) & 1;
    puStack_30 = (undefined8 *)0x0;
    pppppfStack_38 = (float *****)0x0;
    uStack_28 = 0;
    fStack_a0 = *(float *)param_3;
    fStack_98 = *(float *)((long)param_3 + 4);
    fStack_9c = *(float *)((long)param_3 + 0xc);
    fStack_94 = *(float *)(param_3 + 2);
    pppppfVar54 = (float *****)NEON_fmov(0x3f800000,4);
    lStack_70 = param_1 + 0x10;
    iStack_60 = (param_5 * 5 + 3) / 4;
    pppppfVar23 = pppppfVar54;
    uStack_90 = pppppfVar54;
    pppppfStack_68 = (float *****)ppppppfVar17;
    plStack_78 = param_2;
    unaff_x22 = param_3;
    ppppfStack_118 = (float ****)in_register_00005088;
joined_r0x00010830decc:
    if (param_4 != 0) {
      ppppppfVar17 = (float ******)&fStack_e0;
      FUN_108301818(ppppppfVar17,param_4);
      if (((uint)uStack_a8 >> 3 & 1) != 0) {
        ppppppfVar17 = &pppppfStack_f8;
        func_0x0001082e70b0(ppppppfVar17,param_4 + 0x38,(uint)uStack_a8 >> 6 & 1);
        puStack_30 = puStack_f0;
        pppppfStack_38 = pppppfStack_f8;
        uStack_28 = (undefined4)lStack_e8;
      }
      iStack_244 = 0;
      iVar21 = 0;
      iVar22 = 0;
      bVar16 = false;
      lVar20 = *(long *)(param_4 + 0x28);
      unaff_x23 = *(float *******)(lVar20 + 0x40);
      iStack_214 = *(int *)(lVar20 + 0x48);
      puStack_1f8 = *(undefined8 **)(lVar20 + 0x28);
      lStack_228 = *(long *)(lVar20 + 0x58);
LAB_10830df3c:
      lVar20 = (long)iVar22;
LAB_10830df60:
      iVar24 = iStack_214 - iVar22;
      fVar25 = (float)((ulong)uStack_208 >> 0x20);
      if (iVar24 == 0 || iStack_214 < iVar22) {
        if (bVar16) goto code_r0x00010830dfa4;
        param_4 = *(long *)(param_4 + 0x48);
        goto joined_r0x00010830decc;
      }
      switch(*(byte *)((long)unaff_x23 + lVar20)) {
      case 0:
        goto code_r0x00010830df98;
      case 1:
        iVar24 = 1;
        break;
      case 2:
        goto code_r0x00010830e9b8;
      case 3:
        iStack_244 = iStack_244 + 1;
        goto code_r0x00010830e9b8;
      case 4:
        iVar24 = 3;
        break;
      default:
        goto LAB_10830e9f4;
      }
      goto code_r0x00010830e9c4;
    }
    uVar19 = (uint)ppppppfVar17;
    func_0x00010830fcd0();
    if (4 < uVar19) {
      uVar19 = 5;
    }
    *(int *)(param_1 + 0x30) = 3 << (ulong)(uVar19 & 0x1f);
    func_0x0001083101c0();
  }
  (**(code **)(*param_2 + 0xb0))();
  if ((bRam000000011372acb0 & 1) == 0) {
    iVar22 = 0x1372acb0;
    ___cxa_guard_acquire();
    if (iVar22 != 0) {
      ___cxa_guard_release(0x11372acb0);
    }
  }
  uStack_a8 = 0x11372ad50;
  func_0x000108310098();
  if ((bRam000000011372acc0 & 1) == 0) {
    iVar22 = 0x1372acc0;
    ___cxa_guard_acquire();
    if (iVar22 != 0) {
      func_0x0001083100f4(0x11372ad50);
    }
  }
  FUN_1082aef50(&uStack_a8,param_2,0,0x110,uRam000000011372acb8,FUN_108322484);
  uVar26 = uStack_a8;
  uStack_a8 = 0;
  FUN_1082eea00(param_1 + 0x38,uVar26);
  func_0x0001083101e8();
  if ((bRam000000011372acc8 & 1) == 0) {
    iVar22 = 0x1372acc8;
    ___cxa_guard_acquire();
    if (iVar22 != 0) {
      ___cxa_guard_release(0x11372acc8);
    }
  }
  uStack_a8 = 0x11372ad88;
  func_0x000108310098();
  if ((bRam000000011372acd8 & 1) == 0) {
    iVar22 = 0x1372acd8;
    ___cxa_guard_acquire();
    if (iVar22 != 0) {
      func_0x0001083100f4(0x11372ad88);
    }
  }
  FUN_1082aef50(&uStack_a8,param_2,1,0xc0,uRam000000011372acd0,0x108322494);
  uVar26 = uStack_a8;
  uStack_a8 = 0;
  param_1 = param_1 + 0x40;
  FUN_1082eea00(param_1,uVar26);
  func_0x0001083101e8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001083101e8();
  func_0x0001083100ec();
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x000108310228();
    for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 2) {
      if (*(long *)(param_1 + 0x40) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11 != 0);
      }
      func_0x00010830ffe8();
      pppppfVar23 = *unaff_x22;
      if (pppppfVar23 != (float *****)0x0) {
        (*(code *)(*pppppfVar23)[2])(pppppfVar23);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11_00 != 0);
      }
      func_0x00010830ffe8();
      func_0x00010830ffd0();
      func_0x000108310108();
      func_0x0001083100e4();
      func_0x0001083100dc();
      func_0x00010830ffb8();
    }
  }
  return;
code_r0x00010830e9b8:
  iVar24 = 2;
code_r0x00010830e9c4:
  iVar21 = iVar24 + iVar21;
  uStack_208 = CONCAT44(fVar25 + (float)((ulong)puStack_1f8[(long)iVar21 + -1] >> 0x20),
                        (float)uStack_208 + (float)puStack_1f8[(long)iVar21 + -1]);
  iStack_1fc = iStack_1fc + 1;
  bVar16 = true;
  goto LAB_10830e9f4;
code_r0x00010830df98:
  if (bVar16) goto code_r0x00010830dfa4;
  iStack_1fc = 0;
  iVar22 = 0;
  bVar16 = false;
  unaff_x23 = (float ******)((long)unaff_x23 + lVar20);
  puStack_1f8 = puStack_1f8 + iVar21;
  lStack_228 = lStack_228 + (long)iStack_244 * 4;
  uStack_208 = 0;
  iVar21 = 1;
  iStack_244 = 0;
  iStack_214 = iVar24;
LAB_10830e9f4:
  iVar22 = iVar22 + 1;
  goto LAB_10830df3c;
code_r0x00010830dfa4:
  fVar41 = *(float *)((long)puStack_1f8 + (long)iVar21 * 8 + -4);
  fVar51 = (float)((ulong)*puStack_1f8 >> 0x20);
  fVar50 = 0.0;
  fVar52 = 0.0;
  fVar37 = 0.0;
  fVar33 = (float)*puStack_1f8;
  bVar16 = false;
  if ((fVar33 == *(float *)(puStack_1f8 + (long)iVar21 + -1)) &&
     (bVar16 = false, !NAN(fVar51) && !NAN(fVar41))) {
    bVar16 = fVar51 == fVar41;
  }
  if (!bVar16) {
    uStack_208 = CONCAT44(fVar25 + fVar51,(float)uStack_208 + fVar33);
    iStack_1fc = iStack_1fc + 1;
  }
  fVar25 = (float)uStack_208 * (1.0 / (float)iStack_1fc);
  fVar33 = (float)((ulong)uStack_208 >> 0x20) * (1.0 / (float)iStack_1fc);
  uVar26 = NEON_rev64(CONCAT44(fVar33,fVar25),4);
  ppppfStack_44 =
       (float ****)
       CONCAT44(fStack_dc * fVar33 +
                (float)((ulong)uStack_c0 >> 0x20) + fStack_cc * (float)((ulong)uVar26 >> 0x20),
                fStack_e0 * fVar25 + (float)uStack_c0 + fStack_d0 * (float)uVar26);
  puStack_f0 = puStack_1f8;
  lStack_e8 = lStack_228;
  ppppfStack_120 = (float ****)0x0;
  uStack_1e0 = 0;
  pppppfVar55 = (float *****)ppppfStack_118;
  pppppfStack_f8 = (float *****)unaff_x23;
  while( true ) {
    puVar14 = puStack_f0;
    ppppfStack_118 = (float ****)0x0;
    fVar25 = (float)((ulong)uStack_c0 >> 0x20);
    fVar33 = (float)((ulong)uStack_b8 >> 0x20);
    if ((float ******)pppppfStack_f8 == (float ******)((long)unaff_x23 + (long)iVar22)) break;
    uVar19 = (uint)*(byte *)pppppfStack_f8;
    fVar41 = fVar51;
    if (4 < uVar19 - 1) {
      if (uVar19 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10830eb9c);
        (*pcVar15)();
      }
      ppppfStack_120 = (float ****)*puStack_f0;
      uStack_1e0 = CONCAT44((int)ppppfStack_120,*(undefined4 *)((long)puStack_f0 + 4));
      goto LAB_10830e8ac;
    }
    switch(uVar19) {
    case 1:
      auVar31 = *(undefined1 (*) [16])(puStack_f0 + -1);
      auVar29 = NEON_rev64(auVar31,4);
      fVar53 = fStack_e0 * auVar31._0_4_ + fStack_d0 * auVar29._0_4_ + (float)uStack_c0;
      fVar25 = fStack_dc * auVar31._4_4_ + fStack_cc * auVar29._4_4_ + fVar25;
      auVar39._0_8_ = (float *****)CONCAT44(fVar25,fVar53);
      auVar39._8_4_ = fStack_d8 * auVar31._8_4_ + fStack_c8 * auVar29._8_4_ + (float)uStack_b8;
      auVar39._12_4_ = fStack_d4 * auVar31._12_4_ + fStack_c4 * auVar29._12_4_ + fVar33;
      uStack_90 = (float *****)CONCAT44(0x3f800000,(undefined4)uStack_90);
      NEON_ext(auVar39,auVar39,8,1);
      FUN_10830fcbc();
      fVar41 = fVar51;
      func_0x00010830fde8();
      if (ppppppfVar17 != (float ******)0x0) {
        fVar52 = (float)extraout_var_05;
        fVar37 = (float)((ulong)extraout_var_05 >> 0x20);
        fVar41 = (float)extraout_d1;
        fVar50 = (float)((ulong)extraout_d1 >> 0x20);
        auVar28._0_8_ = (float *****)CONCAT44(fVar25 + fVar41,fVar53 + extraout_s0);
        auVar28._8_4_ = auVar39._8_4_ + extraout_s2;
        auVar28._12_4_ = auVar39._12_4_ + fVar51;
        ppppppfVar17[1] = auVar28._0_8_;
        *ppppppfVar17 = auVar39._0_8_;
        ppppppfVar17[3] = auVar39._8_8_;
        ppppppfVar17[2] = auVar28._8_8_;
        func_0x00010830fdd4();
        func_0x00010830fe10();
        if (((byte)uStack_a8 >> 5 & 1) != 0) {
          func_0x00010830fda0();
        }
      }
      ppppfStack_120 = (float ****)*puVar14;
      break;
    case 2:
      uVar26 = func_0x00010830fe68();
      fVar41 = fVar51 + (float)uVar26;
      fVar50 = fVar50 + (float)((ulong)uVar26 >> 0x20);
      fVar52 = fVar52 + (float)extraout_var_02;
      fVar37 = fVar37 + (float)((ulong)extraout_var_02 >> 0x20);
      auVar31 = func_0x000108310160();
      fVar25 = auVar31._8_4_ + auVar31._0_4_;
      fVar51 = auVar31._12_4_ + auVar31._4_4_;
      auVar2._4_4_ = fVar50;
      auVar2._0_4_ = fVar41;
      auVar2._8_4_ = fVar52;
      auVar2._12_4_ = fVar37;
      auVar3._4_4_ = fVar50;
      auVar3._0_4_ = fVar41;
      auVar3._8_4_ = fVar52;
      auVar3._12_4_ = fVar37;
      auVar31 = NEON_ext(auVar2,auVar3,8,1);
      fStack_170 = auVar31._0_4_;
      fStack_16c = auVar31._4_4_;
      ppppfStack_118 = (float ****)CONCAT44(fVar37,fVar52);
      ppppfStack_120 = (float ****)CONCAT44(fVar50,fVar41);
      func_0x000108310178(CONCAT44((fVar50 - (fStack_16c + fStack_16c)) + fVar51,
                                   (fVar41 - (fStack_170 + fStack_170)) + fVar25),
                          CONCAT44(fStack_9c,fStack_a0),CONCAT44(fStack_94,fStack_98));
      func_0x0001083101f0();
      fStack_1b8 = 0.6666667;
      fStack_1b4 = 0.6666667;
      ppppfStack_1c0 = (float ****)0x3f2aaaab3f2aaaab;
      ppppppfVar18 = ppppppfVar17;
      if ((int)ppppppfVar17 == 0) {
        func_0x00010830fde8();
        if (ppppppfVar17 != (float ******)0x0) {
          fVar52 = 0.6666667;
          fVar37 = 0.6666667;
          fVar41 = 0.6666667;
          fVar50 = 0.6666667;
          func_0x000108310078(ppppfStack_118,ppppfStack_120,CONCAT44(fVar51,fVar25));
          func_0x00010830fdd4();
          func_0x00010830fe10();
          pppppfVar23 = (float *****)ppppfStack_120;
          pppppfVar55 = (float *****)ppppfStack_118;
          goto code_r0x00010830e890;
        }
      }
      else {
        while( true ) {
          unaff_x22 = ppppppfVar18;
          iVar24 = (int)unaff_x22;
          fVar33 = SUB84(ppppfStack_120,0);
          fVar53 = (float)((ulong)ppppfStack_120 >> 0x20);
          fVar59 = 0.6666667;
          fVar61 = 0.6666667;
          if (iVar24 < 3) break;
          func_0x0001083100a8(0x3f8000003f800000);
          func_0x00010830fde8();
          fVar43 = fVar33 + (fStack_170 - fVar33) * extraout_s0_02;
          fVar44 = fVar53 + (fStack_16c - fVar53) * extraout_s1_01;
          fVar33 = fVar33 + (fStack_170 - fVar33) * extraout_s2_02;
          fVar53 = fVar53 + (fStack_16c - fVar53) * fVar41;
          fVar59 = fStack_170 + (fVar25 - fStack_170) * extraout_s0_02;
          fVar40 = fStack_16c + (fVar51 - fStack_16c) * extraout_s1_01;
          fStack_170 = fStack_170 + (fVar25 - fStack_170) * extraout_s2_02;
          fStack_16c = fStack_16c + (fVar51 - fStack_16c) * fVar41;
          fVar61 = fVar59 - fVar43;
          fVar34 = fVar40 - fVar44;
          fVar35 = fStack_170 - fVar33;
          fVar42 = fStack_16c - fVar53;
          fVar36 = fVar43 + extraout_s0_02 * fVar61;
          fVar50 = fVar44 + extraout_s1_01 * fVar34;
          fVar52 = fVar33 + extraout_s2_02 * fVar35;
          fVar37 = fVar53 + fVar41 * fVar42;
          pppppfVar23 = (float *****)ppppfStack_120;
          pppppfVar55 = (float *****)ppppfStack_118;
          if (ppppppfVar17 != (float ******)0x0) {
            fVar45 = fVar36;
            fVar46 = fVar50;
            pppppfVar23 = (float *****)func_0x00010831023c(CONCAT44(fVar44,fVar43),ppppfStack_120);
            *ppppppfVar17 = (float *****)ppppfStack_120;
            ppppppfVar17[2] = extraout_var_03;
            ppppppfVar17[1] = pppppfVar23;
            ppppppfVar17[3] = (float *****)CONCAT44(fVar46,fVar45);
            func_0x00010830fdd4();
            func_0x00010830fe10();
            pppppfVar23 = (float *****)ppppfStack_120;
            pppppfVar55 = (float *****)ppppfStack_118;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
              pppppfVar23 = (float *****)ppppfStack_120;
              pppppfVar55 = (float *****)ppppfStack_118;
            }
          }
          func_0x00010830fde8();
          auVar5._4_4_ = fVar50;
          auVar5._0_4_ = fVar36;
          auVar5._8_4_ = fVar52;
          auVar4._4_4_ = fVar50;
          auVar4._0_4_ = fVar36;
          auVar4._8_4_ = fVar52;
          auVar4._12_4_ = fVar37;
          auVar5._12_4_ = fVar37;
          auVar31 = NEON_ext(auVar4,auVar5,8,1);
          ppppfStack_118 = auVar31._8_8_;
          ppppfStack_120 = auVar31._0_8_;
          if (ppppppfVar17 != (float ******)0x0) {
            pppppfVar55 = (float *****)0x3f2aaaab3f2aaaab;
            *ppppppfVar17 = (float *****)CONCAT44(fVar50,fVar36);
            *(float *)(ppppppfVar17 + 2) =
                 fVar33 + (extraout_s2_02 + (extraout_s0_02 - extraout_s2_02) * 0.6666667) * fVar35;
            *(float *)((long)ppppppfVar17 + 0x14) =
                 fVar53 + (fVar41 + (extraout_s1_01 - fVar41) * 0.6666667) * fVar42;
            *(float *)(ppppppfVar17 + 1) =
                 fVar43 + (extraout_s0_02 + (extraout_s2_02 - extraout_s0_02) * 0.6666667) * fVar61;
            *(float *)((long)ppppppfVar17 + 0xc) =
                 fVar44 + (extraout_s1_01 + (fVar41 - extraout_s1_01) * 0.6666667) * fVar34;
            ppppppfVar17[3] = (float *****)ppppfStack_120;
            pppppfVar23 = (float *****)ppppfStack_1c0;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
            }
          }
          auVar10._4_4_ = fVar40;
          auVar10._0_4_ = fVar59;
          auVar10._8_4_ = fStack_170;
          auVar10._12_4_ = fStack_16c;
          auVar31 = NEON_ext(auVar10,auVar10,8,1);
          fStack_170 = auVar31._0_4_;
          fStack_16c = auVar31._4_4_;
          ppppppfVar18 = (float ******)(ulong)(iVar24 - 2);
          fVar41 = fVar36;
        }
        if (iVar24 == 2) {
          func_0x00010830fde8();
          fVar52 = SUB84(ppppfStack_118,0);
          fVar37 = (float)((ulong)ppppfStack_118 >> 0x20);
          fVar36 = (fStack_170 + fVar33) * 0.5;
          fVar40 = (fStack_16c + fVar53) * 0.5;
          fVar25 = (fVar25 + fStack_170) * 0.5;
          fVar51 = (fVar51 + fStack_16c) * 0.5;
          pppppfVar38 = (float *****)CONCAT44((fVar51 + fVar40) * 0.5,(fVar25 + fVar36) * 0.5);
          fVar41 = fVar33;
          fVar50 = fVar53;
          if (ppppppfVar17 != (float ******)0x0) {
            pppppfVar55 = (float *****)0x0;
            pppppfVar23 = pppppfVar38;
            pppppfVar27 = (float *****)func_0x00010831023c(CONCAT44(fVar40,fVar36),ppppfStack_120);
            *ppppppfVar17 = (float *****)CONCAT44(fVar53,fVar33);
            ppppppfVar17[2] = extraout_var_04;
            ppppppfVar17[1] = pppppfVar27;
            ppppppfVar17[3] = pppppfVar23;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar41 = fVar33;
            fVar50 = fVar53;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
              fVar41 = fVar33;
              fVar50 = fVar53;
            }
          }
          func_0x00010830fde8();
          if (ppppppfVar17 != (float ******)0x0) {
            pppppfVar55 = (float *****)0x0;
            func_0x00010830fe28(pppppfVar38,CONCAT44(fVar51,fVar25));
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar41 = fVar59;
            fVar50 = fVar61;
            fVar52 = fStack_1b8;
            fVar37 = fStack_1b4;
            pppppfVar23 = pppppfVar38;
code_r0x00010830e890:
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              *(undefined4 *)*ppppppfVar17 = 0;
              goto code_r0x00010830e8a0;
            }
          }
        }
        else {
          func_0x00010830fde8();
          if (ppppppfVar17 != (float ******)0x0) {
            func_0x00010830fe28(ppppfStack_120,CONCAT44(fStack_16c,fStack_170));
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar41 = fVar59;
            fVar50 = fVar61;
            fVar52 = fStack_1b8;
            fVar37 = fStack_1b4;
            pppppfVar23 = (float *****)ppppfStack_120;
            pppppfVar55 = (float *****)ppppfStack_118;
            goto code_r0x00010830e890;
          }
        }
      }
      goto code_r0x00010830e8a4;
    case 3:
      uVar26 = func_0x00010830fe68(lStack_e8);
      fVar51 = fVar51 + (float)uVar26;
      fVar50 = fVar50 + (float)((ulong)uVar26 >> 0x20);
      fVar53 = fVar52 + (float)extraout_var;
      fVar59 = fVar37 + (float)((ulong)extraout_var >> 0x20);
      auVar31 = func_0x000108310160();
      fVar25 = auVar31._8_4_ + auVar31._0_4_;
      fVar33 = auVar31._12_4_ + auVar31._4_4_;
      fVar61 = *extraout_x8;
      func_0x000108310214(CONCAT44(fStack_9c,fStack_a0),CONCAT44(fStack_94,fStack_98));
      pppppfVar38 = (float *****)CONCAT44(fVar50,fVar51);
      func_0x00010830ff4c();
      func_0x00010830ff14();
      uStack_130 = (float *****)(ulong)(uint)(fVar61 * -2.0);
      ppppfStack_120 = (float ****)0x0;
      func_0x000108310200();
      fVar41 = -1.0;
      fVar50 = 0.0;
      fVar52 = 0.0;
      fVar37 = 0.0;
      func_0x0001083101a8();
      func_0x0001083101f0();
      if ((int)ppppppfVar17 == 0) {
        func_0x00010830fde8();
        pppppfVar23 = uStack_130;
        pppppfVar55 = (float *****)ppppfStack_120;
        if (ppppppfVar17 != (float ******)0x0) {
          ppppppfVar17[1] = (float *****)CONCAT44(fVar59,fVar53);
          *ppppppfVar17 = pppppfVar38;
          ppppppfVar17[2] = (float *****)CONCAT44(fVar33,fVar25);
          *(float *)(ppppppfVar17 + 3) = fVar61;
          *(float *)((long)ppppppfVar17 + 0x1c) = INFINITY;
          func_0x00010830fdd4();
          func_0x00010830fe10();
          goto code_r0x00010830e7cc;
        }
      }
      else {
        auVar31 = NEON_fmov(0x3f800000,4);
        ppppppfVar18 = ppppppfVar17;
        func_0x0001083101dc(auVar31._0_8_,pppppfVar38);
        ppppfStack_120 = (float ****)CONCAT44(extraout_s1,extraout_s0_00);
        uStack_150 = CONCAT44(fVar41,extraout_s2_00);
        unaff_x22 = ppppppfVar17;
        pppppfVar23 = (float *****)CONCAT44(fVar33,fVar25);
        pppppfVar55 = pppppfVar54;
        ppppfStack_140 = (float ****)pppppfVar54;
        ppppfStack_138 = (float ****)in_register_00005088;
        uStack_130 = pppppfVar38;
        while( true ) {
          fVar61 = SUB84(ppppfStack_120,0);
          fVar36 = (float)((ulong)ppppfStack_120 >> 0x20);
          fVar51 = SUB84(uStack_130,0);
          fVar53 = (float)((ulong)uStack_130 >> 0x20);
          fVar59 = (float)((ulong)ppppfStack_140 >> 0x20);
          if ((int)unaff_x22 < 2) break;
          func_0x00010830fde8();
          fVar43 = 1.0 / (float)((ulong)unaff_x22 & 0xffffffff);
          fVar40 = fVar51 + (fVar61 - fVar51) * fVar43;
          fVar34 = fVar53 + (fVar36 - fVar53) * fVar43;
          fVar35 = SUB84(ppppfStack_140,0) + ((float)uStack_150 - SUB84(ppppfStack_140,0)) * fVar43;
          fVar42 = fVar59 + (uStack_150._4_4_ - fVar59) * fVar43;
          fStack_158 = SUB84(pppppfVar54,0);
          fStack_154 = (float)((ulong)pppppfVar54 >> 0x20);
          fVar41 = fVar61 + (fVar25 - fVar61) * fVar43;
          fVar50 = fVar36 + (fVar33 - fVar36) * fVar43;
          fVar52 = (float)uStack_150 + (fStack_158 - (float)uStack_150) * fVar43;
          fVar37 = uStack_150._4_4_ + (fStack_154 - uStack_150._4_4_) * fVar43;
          auVar12._12_4_ = fVar37;
          auVar12._8_4_ = fVar52;
          ppppfStack_120 = (float ****)CONCAT44(fVar50,fVar41);
          fVar61 = fVar40 + (fVar41 - fVar40) * fVar43;
          fVar36 = fVar34 + (fVar50 - fVar34) * fVar43;
          fVar35 = fVar35 + (fVar52 - fVar35) * fVar43;
          fVar43 = fVar42 + (fVar37 - fVar42) * fVar43;
          if (ppppppfVar18 != (float ******)0x0) {
            ppppfStack_140 = (float ****)CONCAT44(fVar43,fVar43);
            ppppfStack_138 = (float ****)0x0;
            *(float *)(ppppppfVar18 + 1) = fVar40 / fVar42;
            *(float *)((long)ppppppfVar18 + 0xc) = fVar34 / fVar42;
            *(float *)ppppppfVar18 = fVar51 / fVar59;
            *(float *)((long)ppppppfVar18 + 4) = fVar53 / fVar59;
            ppppppfVar18[2] = (float *****)CONCAT44(fVar36 / fVar43,fVar61 / fVar43);
            *(float *)(ppppppfVar18 + 3) = fVar42 / SQRT(fVar43 * fVar59);
            *(float *)((long)ppppppfVar18 + 0x1c) = INFINITY;
            fVar50 = fVar59;
            fVar37 = fVar42;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar41 = fVar59;
            fVar52 = fVar42;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              *(undefined4 *)*ppppppfVar18 = 0x3f800000;
              func_0x00010830fdf4();
              fVar41 = fVar59;
              fVar52 = fVar42;
            }
          }
          unaff_x22 = (float ******)(ulong)((int)unaff_x22 - 1);
          auVar12._0_8_ = ppppfStack_120;
          auVar29 = NEON_ext(auVar12,auVar12,8,1);
          auVar6._4_4_ = fVar36;
          auVar6._0_4_ = fVar61;
          auVar6._8_4_ = fVar35;
          auVar6._12_4_ = fVar43;
          auVar7._4_4_ = fVar36;
          auVar7._0_4_ = fVar61;
          auVar7._8_4_ = fVar35;
          auVar7._12_4_ = fVar43;
          auVar31 = NEON_ext(auVar6,auVar7,8,1);
          uStack_150 = auVar29._0_8_;
          uStack_130 = (float *****)CONCAT44(fVar36,fVar61);
          pppppfVar23 = (float *****)ppppfStack_140;
          pppppfVar55 = (float *****)ppppfStack_138;
          ppppfStack_140 = (float ****)auVar31._0_8_;
          ppppfStack_138 = (float ****)auVar31._8_8_;
        }
        func_0x00010830fde8();
        if (ppppppfVar18 != (float ******)0x0) {
          *(float *)(ppppppfVar18 + 1) = fVar61 / uStack_150._4_4_;
          *(float *)((long)ppppppfVar18 + 0xc) = fVar36 / uStack_150._4_4_;
          *(float *)ppppppfVar18 = fVar51 / fVar59;
          *(float *)((long)ppppppfVar18 + 4) = fVar53 / fVar59;
          ppppppfVar18[2] = (float *****)CONCAT44(fVar33,fVar25);
          *(float *)(ppppppfVar18 + 3) = uStack_150._4_4_ / SQRT(fVar59);
          *(float *)((long)ppppppfVar18 + 0x1c) = INFINITY;
          fVar50 = fVar59;
          fVar37 = uStack_150._4_4_;
          func_0x00010830fdd4();
          func_0x00010830fe10();
          ppppppfVar17 = ppppppfVar18;
          fVar41 = fVar59;
          fVar52 = uStack_150._4_4_;
code_r0x00010830e7cc:
          pppppfVar23 = uStack_130;
          pppppfVar55 = (float *****)ppppfStack_120;
          if (((byte)uStack_a8 >> 5 & 1) != 0) {
            *(undefined4 *)*ppppppfVar17 = 0x3f800000;
code_r0x00010830e8a0:
            func_0x00010830fdf4();
          }
        }
      }
code_r0x00010830e8a4:
      ppppfStack_120 = (float ****)puVar14[1];
      break;
    case 4:
      func_0x00010830fe68();
      fVar41 = fVar51 + (float)extraout_d0;
      fVar50 = fVar50 + (float)((ulong)extraout_d0 >> 0x20);
      fVar52 = fVar52 + (float)extraout_var_00;
      fVar37 = fVar37 + (float)((ulong)extraout_var_00 >> 0x20);
      ppppfStack_118 = (float ****)CONCAT44(fVar37,fVar52);
      ppppfStack_120 = (float ****)CONCAT44(fVar50,fVar41);
      auVar31 = *(undefined1 (*) [16])(puVar14 + 1);
      auVar29 = NEON_rev64(auVar31,4);
      fStack_170 = (float)extraout_d1_00 * auVar31._0_4_ +
                   SUB84(pppppfVar23,0) + (float)extraout_d2 * auVar29._0_4_;
      fStack_16c = (float)((ulong)extraout_d1_00 >> 0x20) * auVar31._4_4_ +
                   (float)((ulong)pppppfVar23 >> 0x20) +
                   (float)((ulong)extraout_d2 >> 0x20) * auVar29._4_4_;
      auVar30._0_8_ = (float *****)CONCAT44(fStack_16c,fStack_170);
      auVar30._8_4_ =
           (float)extraout_var_06 * auVar31._8_4_ +
           SUB84(pppppfVar55,0) + (float)extraout_var_08 * auVar29._8_4_;
      auVar30._12_4_ =
           (float)((ulong)extraout_var_06 >> 0x20) * auVar31._12_4_ +
           (float)((ulong)pppppfVar55 >> 0x20) +
           (float)((ulong)extraout_var_08 >> 0x20) * auVar29._12_4_;
      auVar1._4_4_ = fVar50;
      auVar1._0_4_ = fVar41;
      auVar1._8_4_ = fVar52;
      auVar1._12_4_ = fVar37;
      auVar31 = NEON_ext(auVar1,auVar30,8,1);
      func_0x00010830fcc4(auVar31._0_8_);
      func_0x000108310110();
      func_0x00010830feac();
      func_0x0001083101f0();
      if ((int)ppppppfVar17 == 0) {
        func_0x00010830fde8();
        if (ppppppfVar17 != (float ******)0x0) {
          ppppppfVar17[1] = (float *****)ppppfStack_118;
          *ppppppfVar17 = (float *****)ppppfStack_120;
          ppppppfVar17[3] = auVar30._8_8_;
          ppppppfVar17[2] = auVar30._0_8_;
          func_0x00010830fdd4();
          func_0x00010830fe10();
          goto code_r0x00010830e850;
        }
      }
      else {
        auVar13._8_8_ = ppppfStack_118;
        auVar13._0_8_ = ppppfStack_120;
        auVar31 = NEON_ext(auVar13,auVar13,8,1);
        fStack_180 = auVar31._0_4_;
        fStack_17c = auVar31._4_4_;
        unaff_x22 = ppppppfVar17;
        while( true ) {
          auVar32._8_4_ = auVar30._8_4_;
          auVar32._0_8_ = auVar30._0_8_;
          auVar32._12_4_ = auVar30._12_4_;
          iVar24 = (int)unaff_x22;
          if (iVar24 < 3) break;
          func_0x0001083100a8(0x3f8000003f800000);
          func_0x00010830fde8();
          func_0x000108310148(ppppfStack_120);
          fVar36 = (float)extraout_d1_01;
          fVar40 = (float)((ulong)extraout_d1_01 >> 0x20);
          fVar34 = (float)extraout_var_07;
          fVar35 = (float)((ulong)extraout_var_07 >> 0x20);
          fVar42 = (float)extraout_d2_00 + (fStack_170 - fStack_180) * fVar36;
          fVar44 = (float)((ulong)extraout_d2_00 >> 0x20) + (fStack_16c - fStack_17c) * fVar40;
          fVar46 = (float)extraout_var_09 + (fStack_170 - fStack_180) * fVar34;
          fVar48 = (float)((ulong)extraout_var_09 >> 0x20) + (fStack_16c - fStack_17c) * fVar35;
          fVar56 = fStack_170 + (auVar30._8_4_ - fStack_170) * fVar36;
          fVar57 = fStack_16c + (auVar30._12_4_ - fStack_16c) * fVar40;
          fStack_170 = fStack_170 + (auVar30._8_4_ - fStack_170) * fVar34;
          fStack_16c = fStack_16c + (auVar30._12_4_ - fStack_16c) * fVar35;
          fVar59 = (float)((ulong)extraout_d0_00 >> 0x20);
          fVar61 = (float)((ulong)extraout_var_01 >> 0x20);
          fVar58 = SUB84(extraout_d0_00,0) + fVar36 * (fVar42 - SUB84(extraout_d0_00,0));
          fVar59 = fVar59 + fVar40 * (fVar44 - fVar59);
          fVar60 = (float)extraout_var_01 + fVar34 * (fVar46 - (float)extraout_var_01);
          fVar61 = fVar61 + fVar35 * (fVar48 - fVar61);
          fVar25 = fVar36 * (fVar56 - fVar42);
          fVar51 = fVar40 * (fVar57 - fVar44);
          fVar33 = fVar34 * (fStack_170 - fVar46);
          fVar53 = fVar35 * (fStack_16c - fVar48);
          fVar42 = fVar42 + fVar25;
          fVar44 = fVar44 + fVar51;
          fVar46 = fVar46 + fVar33;
          fVar48 = fVar48 + fVar53;
          fVar43 = fVar42 - fVar58;
          fVar45 = fVar44 - fVar59;
          fVar47 = fVar46 - fVar60;
          fVar49 = fVar48 - fVar61;
          fVar36 = fVar58 + fVar36 * fVar43;
          fVar40 = fVar59 + fVar40 * fVar45;
          pppppfVar23 = (float *****)ppppfStack_120;
          pppppfVar55 = (float *****)ppppfStack_118;
          if (ppppppfVar17 != (float ******)0x0) {
            ppppppfVar17[1] = extraout_d0_00;
            *ppppppfVar17 = (float *****)ppppfStack_120;
            ppppppfVar17[3] = (float *****)CONCAT44(fVar40,fVar36);
            ppppppfVar17[2] = (float *****)CONCAT44(fVar59,fVar58);
            pppppfVar55 = extraout_d0_00;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            pppppfVar23 = (float *****)ppppfStack_120;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
              pppppfVar23 = (float *****)ppppfStack_120;
            }
          }
          func_0x00010830fde8();
          pppppfVar38 = (float *****)CONCAT44(fVar40,fVar36);
          auVar11._8_4_ = fVar60 + fVar34 * fVar47;
          auVar11._0_8_ = pppppfVar38;
          auVar11._12_4_ = fVar61 + fVar35 * fVar49;
          auVar31 = NEON_ext(auVar11,auVar11,8,1);
          ppppfStack_118 = auVar31._8_8_;
          ppppfStack_120 = auVar31._0_8_;
          if (ppppppfVar17 != (float ******)0x0) {
            *ppppppfVar17 = pppppfVar38;
            *(float *)(ppppppfVar17 + 2) = fVar60 + extraout_s0_01 * fVar47;
            *(float *)((long)ppppppfVar17 + 0x14) = fVar61 + extraout_s1_00 * fVar49;
            *(float *)(ppppppfVar17 + 1) = fVar58 + extraout_s2_01 * fVar43;
            *(float *)((long)ppppppfVar17 + 0xc) = fVar59 + fVar41 * fVar45;
            ppppppfVar17[3] = (float *****)ppppfStack_120;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar25 = fVar41;
            fVar51 = fVar50;
            fVar33 = fVar52;
            fVar53 = fVar37;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
              fVar25 = fVar41;
              fVar51 = fVar50;
              fVar33 = fVar52;
              fVar53 = fVar37;
            }
          }
          auVar8._4_4_ = fVar44;
          auVar8._0_4_ = fVar42;
          auVar8._8_4_ = fVar46;
          auVar8._12_4_ = fVar48;
          auVar9._4_4_ = fVar57;
          auVar9._0_4_ = fVar56;
          auVar9._8_4_ = fStack_170;
          auVar9._12_4_ = fStack_16c;
          auVar29 = NEON_ext(auVar8,auVar8,8,1);
          auVar31 = NEON_ext(auVar9,auVar9,8,1);
          fStack_180 = auVar29._0_4_;
          fStack_17c = auVar29._4_4_;
          fStack_170 = auVar31._0_4_;
          fStack_16c = auVar31._4_4_;
          unaff_x22 = (float ******)(ulong)(iVar24 - 2);
          fVar41 = fVar25;
          fVar50 = fVar51;
          fVar52 = fVar33;
          fVar37 = fVar53;
        }
        auVar31 = NEON_ext(auVar32,auVar32,8,1);
        if (iVar24 == 2) {
          func_0x00010830fde8();
          fVar41 = SUB84(ppppfStack_120,0);
          fVar50 = (float)((ulong)ppppfStack_120 >> 0x20);
          fVar25 = (fStack_180 + fVar41) * 0.5;
          fVar51 = (fStack_17c + fVar50) * 0.5;
          fVar52 = (fStack_170 + fStack_180) * 0.5;
          fVar37 = (fStack_16c + fStack_17c) * 0.5;
          uStack_130._0_4_ = auVar31._0_4_;
          uStack_130._4_4_ = auVar31._4_4_;
          fVar59 = ((float)uStack_130 + fStack_170) * 0.5;
          fVar61 = (uStack_130._4_4_ + fStack_16c) * 0.5;
          pppppfVar38 = (float *****)CONCAT44(fVar61,fVar59);
          pppppfVar55 = (float *****)0x0;
          fVar33 = (fVar52 + fVar25) * 0.5;
          fVar53 = (fVar37 + fVar51) * 0.5;
          fVar59 = (fVar59 + fVar52) * 0.5;
          fVar61 = (fVar61 + fVar37) * 0.5;
          pppppfVar27 = (float *****)CONCAT44((fVar61 + fVar53) * 0.5,(fVar59 + fVar33) * 0.5);
          fVar52 = SUB84(ppppfStack_118,0);
          fVar37 = (float)((ulong)ppppfStack_118 >> 0x20);
          pppppfVar23 = pppppfVar38;
          if (ppppppfVar17 != (float ******)0x0) {
            ppppppfVar17[1] = (float *****)CONCAT44(fVar51,fVar25);
            *ppppppfVar17 = (float *****)ppppfStack_120;
            ppppppfVar17[2] = (float *****)CONCAT44(fVar53,fVar33);
            ppppppfVar17[3] = pppppfVar27;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            fVar52 = fVar25;
            fVar37 = fVar51;
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
              fVar52 = fVar25;
              fVar37 = fVar51;
            }
          }
          func_0x00010830fde8();
          if (ppppppfVar17 != (float ******)0x0) {
            *ppppppfVar17 = pppppfVar27;
            ppppppfVar17[2] = pppppfVar38;
            ppppppfVar17[1] = (float *****)CONCAT44(fVar61,fVar59);
            ppppppfVar17[3] = auVar31._0_8_;
            func_0x00010830fdd4();
            func_0x00010830fe10();
code_r0x00010830e850:
            if (((byte)uStack_a8 >> 5 & 1) != 0) {
              func_0x00010830fda0();
            }
          }
        }
        else {
          func_0x00010830fde8();
          if (ppppppfVar17 != (float ******)0x0) {
            ppppppfVar17[1] = (float *****)CONCAT44(fStack_17c,fStack_180);
            *ppppppfVar17 = (float *****)ppppfStack_120;
            ppppppfVar17[2] = (float *****)CONCAT44(fStack_16c,fStack_170);
            ppppppfVar17[3] = auVar31._0_8_;
            func_0x00010830fdd4();
            func_0x00010830fe10();
            goto code_r0x00010830e850;
          }
        }
      }
      ppppfStack_120 = (float ****)puVar14[2];
    }
LAB_10830e8ac:
    ppppppfVar17 = &pppppfStack_f8;
    func_0x0001081e8ec8();
    fVar51 = fVar41;
  }
  fVar51 = (float)uStack_1e0;
  fVar50 = (float)((ulong)uStack_1e0 >> 0x20);
  fVar52 = (float)((ulong)ppppfStack_120 >> 0x20);
  if (((bool)(~(SUB84(ppppfStack_120,0) == fVar50) & 1)) ||
     (bVar16 = false, pppppfVar23 = (float *****)ppppfStack_120, (bool)(~(fVar52 == fVar51) & 1))) {
    uVar26 = NEON_rev64(ppppfStack_120,4);
    fVar37 = SUB84(ppppfStack_120,0) * fStack_e0 + (float)uVar26 * fStack_d0 + (float)uStack_c0;
    fVar25 = fVar52 * fStack_dc + (float)((ulong)uVar26 >> 0x20) * fStack_cc + fVar25;
    auVar31._0_8_ = (float *****)CONCAT44(fVar25,fVar37);
    auVar31._8_4_ = fVar50 * fStack_d8 + fVar51 * fStack_c8 + (float)uStack_b8;
    auVar31._12_4_ = fVar51 * fStack_d4 + fVar50 * fStack_c4 + fVar33;
    uStack_90 = (float *****)CONCAT44(0x3f800000,(undefined4)uStack_90);
    NEON_ext(auVar31,auVar31,8,1);
    FUN_10830fcbc();
    func_0x00010830fde8();
    bVar16 = false;
    pppppfVar23 = (float *****)ppppfStack_120;
    if (ppppppfVar17 != (float ******)0x0) {
      auVar29._0_8_ = (float *****)CONCAT44(fVar25 + extraout_s1_02,fVar37 + extraout_s0_03);
      auVar29._8_4_ = auVar31._8_4_ + extraout_s2_03;
      auVar29._12_4_ = auVar31._12_4_ + fVar51;
      ppppppfVar17[1] = auVar29._0_8_;
      *ppppppfVar17 = auVar31._0_8_;
      ppppppfVar17[3] = auVar31._8_8_;
      ppppppfVar17[2] = auVar29._8_8_;
      ppppppfVar17[4] = (float *****)ppppfStack_44;
      pppppfStack_f8 = (float *****)(ppppppfVar17 + 5);
      ppppppfVar17 = &pppppfStack_f8;
      FUN_10830fc88(ppppppfVar17,&pppppfStack_38);
      if (((byte)uStack_a8 >> 5 & 1) != 0) {
        func_0x00010830fda0();
      }
      bVar16 = false;
      pppppfVar23 = (float *****)ppppfStack_120;
    }
  }
  goto LAB_10830df60;
}



/* Entry: 10830ec60; end: 10830ed2b;  */

void FUN_10830ec60(long param_1)

{
  int extraout_w11;
  int extraout_w11_00;
  long *plVar1;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x000108310228();
    for (; unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 2) {
      if (*(long *)(param_1 + 0x40) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11 != 0);
      }
      func_0x00010830ffe8();
      plVar1 = (long *)*unaff_x22;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        do {
          func_0x00010830fff8();
        } while (extraout_w11_00 != 0);
      }
      func_0x00010830ffe8();
      func_0x00010830ffd0();
      func_0x000108310108();
      func_0x0001083100e4();
      func_0x0001083100dc();
      func_0x00010830ffb8();
    }
  }
  return;
}



/* Entry: 10830ed2c; end: 10830ed2f;  */

undefined8 * FUN_10830ed2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3aec0;
  FUN_10828f708(param_1 + 8);
  FUN_10828f708(param_1 + 7);
  FUN_1083016b0(param_1 + 4);
  return param_1;
}



/* Entry: 10830ed30; end: 10830ed43;  */

void FUN_10830ed30(void)

{
  FUN_108301660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830ed44; end: 10830faaf;  */

void FUN_10830ed44(long param_1,long *param_2,undefined4 *param_3,long param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte *pbVar7;
  code *pcVar8;
  byte ***pppbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long extraout_x8;
  byte *pbVar13;
  float *extraout_x9;
  int iVar14;
  byte **ppbVar15;
  undefined4 uVar16;
  float fVar17;
  float extraout_s0;
  undefined8 extraout_d0;
  float fVar20;
  undefined8 extraout_d0_00;
  byte *extraout_d0_01;
  float fVar21;
  float fVar22;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_var_02;
  undefined4 uVar23;
  float fVar24;
  float extraout_s1;
  undefined8 extraout_d1;
  float fVar25;
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_d1_02;
  undefined8 extraout_d1_03;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined4 uVar26;
  float extraout_s2;
  float fVar27;
  float extraout_s2_00;
  byte *extraout_d2;
  float fVar30;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  undefined8 extraout_d2_02;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 extraout_var_07;
  float fVar34;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined1 auVar29 [16];
  undefined8 extraout_var_10;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float extraout_s3;
  float extraout_s3_00;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined1 auVar38 [16];
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  byte *pbVar39;
  undefined8 uVar40;
  float fVar41;
  byte *pbVar42;
  float fVar43;
  undefined8 in_register_000050a8;
  byte *pbVar44;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_350;
  float fStack_34c;
  undefined4 uStack_32c;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  byte *pbStack_310;
  byte *pbStack_300;
  undefined8 uStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  byte bStack_2c8;
  long *plStack_298;
  long lStack_290;
  byte **ppbStack_288;
  int iStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  byte **ppbStack_264;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  byte bStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  byte *pbStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [48];
  long lStack_1d0;
  byte **ppbStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 auVar28 [16];
  
  func_0x000108310250();
  param_5 = (param_5 + 3) / 2 + param_5;
  if (param_5 != 0) {
    uStack_248 = 0x3f800000;
    uStack_240 = 0;
    uVar10 = *(uint *)(param_1 + 8);
    ppbVar15 = (byte **)(ulong)uVar10;
    FUN_10830fd28();
    uStack_278 = 0;
    uStack_270 = 0;
    bStack_250 = (byte)(uVar10 >> 3) & 1;
    uStack_25c = 0;
    ppbStack_264 = (byte **)0x0;
    uStack_254 = 0;
    uVar16 = *param_3;
    uVar23 = param_3[1];
    pbVar42 = (byte *)NEON_fmov(0x3f800000,4);
    uVar26 = param_3[3];
    uVar37 = param_3[4];
    pbVar39 = (byte *)0xff800000ff800000;
    uVar40 = 0;
    iStack_280 = param_5;
    lStack_290 = param_1 + 0x10;
    ppbStack_288 = ppbVar15;
    plStack_298 = param_2;
    for (; param_4 != 0; param_4 = *(long *)(param_4 + 0x48)) {
      FUN_108301818(auStack_200,param_4);
      if ((uVar10 >> 3 & 1) != 0) {
        func_0x0001082e70b0(&ppbStack_1a0,param_4 + 0x38,uVar10 >> 6 & 1);
        uStack_25c = uStack_198;
        ppbStack_264 = ppbStack_1a0;
        uStack_254 = uStack_190;
      }
      ppbVar15 = &pbStack_220;
      FUN_1081e8e40(ppbVar15,param_4 + 0x28);
      pbVar7 = pbStack_218;
      pbStack_238 = pbStack_220;
      uStack_228 = uStack_208;
      uStack_230 = uStack_210;
      while (pbStack_238 != pbVar7) {
        bVar1 = *pbStack_238;
        if (bVar1 - 1 < 5) {
          iVar14 = (int)param_3;
          bStack_2c8 = (byte)uVar10;
          if (bVar1 == 4) {
            func_0x00010830fe44(uStack_230);
            auVar29._0_4_ = (float)extraout_d2_01 + (float)extraout_d0_00;
            auVar29._4_4_ =
                 (float)((ulong)extraout_d2_01 >> 0x20) + (float)((ulong)extraout_d0_00 >> 0x20);
            auVar29._8_4_ = (float)extraout_var_09 + (float)extraout_var_01;
            auVar29._12_4_ =
                 (float)((ulong)extraout_var_09 >> 0x20) + (float)((ulong)extraout_var_01 >> 0x20);
            auVar38 = *(undefined1 (*) [16])(extraout_x8 + 8);
            auVar18 = NEON_rev64(auVar38,4);
            auVar19._0_4_ =
                 (float)extraout_d1_01 * auVar38._0_4_ +
                 SUB84(pbVar39,0) + (float)extraout_d3_00 * auVar18._0_4_;
            auVar19._4_4_ =
                 (float)((ulong)extraout_d1_01 >> 0x20) * auVar38._4_4_ +
                 (float)((ulong)pbVar39 >> 0x20) +
                 (float)((ulong)extraout_d3_00 >> 0x20) * auVar18._4_4_;
            auVar19._8_4_ =
                 (float)extraout_var_04 * auVar38._8_4_ +
                 (float)uVar40 + (float)extraout_var_12 * auVar18._8_4_;
            auVar19._12_4_ =
                 (float)((ulong)extraout_var_04 >> 0x20) * auVar38._12_4_ +
                 (float)((ulong)uVar40 >> 0x20) +
                 (float)((ulong)extraout_var_12 >> 0x20) * auVar18._12_4_;
            auVar38 = NEON_ext(auVar29,auVar19,8,1);
            func_0x00010830fcc4(auVar38._0_8_);
            func_0x000108310110();
            fVar17 = (float)func_0x00010830feac();
            if (1.0 < fVar17 * 9.0) {
              func_0x0001083101d4();
              if ((int)ppbVar15 == 0) {
                func_0x00010830fde8();
                if (ppbVar15 != (byte **)0x0) {
                  pbVar11 = (byte *)CONCAT44(auVar29._4_4_,auVar29._0_4_);
                  pbVar13 = (byte *)CONCAT44(auVar19._4_4_,auVar19._0_4_);
                  ppbVar15[1] = auVar29._8_8_;
                  *ppbVar15 = pbVar11;
                  ppbVar15[3] = auVar19._8_8_;
                  ppbVar15[2] = pbVar13;
                  ppbStack_1a0 = ppbVar15 + 4;
                  pppbVar9 = &ppbStack_1a0;
                  func_0x00010830fe88();
LAB_10830f758:
                  if ((bStack_2c8 >> 5 & 1) != 0) {
                    *(undefined4 *)*pppbVar9 = 0;
LAB_10830f768:
                    func_0x00010830fdf4();
                  }
                }
              }
              else {
                func_0x000108310120();
                func_0x000108310008();
                auVar38._4_4_ = auVar29._4_4_;
                auVar38._0_4_ = auVar29._0_4_;
                auVar38._8_8_ = auVar29._8_8_;
                auVar18._4_4_ = auVar19._4_4_;
                auVar18._0_4_ = auVar19._0_4_;
                auVar18._8_4_ = auVar19._8_4_;
                auVar18._12_4_ = auVar19._12_4_;
                auVar18 = NEON_ext(auVar18,auVar18,8,1);
                auVar38 = NEON_ext(auVar38,auVar38,8,1);
                fStack_350 = auVar38._0_4_;
                fStack_34c = auVar38._4_4_;
                fStack_3b0 = auVar18._0_4_;
                fStack_3ac = auVar18._4_4_;
                fStack_2e0 = auVar19._0_4_;
                fStack_2dc = auVar19._4_4_;
                while (2 < iVar14) {
                  func_0x0001083100a8(0x3f8000003f800000);
                  func_0x00010830fde8();
                  uVar40 = CONCAT44(auVar29._4_4_,auVar29._0_4_);
                  func_0x000108310148(uVar40);
                  fVar17 = fStack_2e0 - (float)extraout_d3_01;
                  fVar24 = fStack_2dc - (float)((ulong)extraout_d3_01 >> 0x20);
                  fVar25 = (float)extraout_d1_02;
                  fVar20 = (float)((ulong)extraout_d1_02 >> 0x20);
                  fVar21 = (float)extraout_var_05;
                  fVar22 = (float)((ulong)extraout_var_05 >> 0x20);
                  fVar27 = (float)extraout_d2_02 + fVar17 * fVar25;
                  fVar31 = (float)((ulong)extraout_d2_02 >> 0x20) + fVar24 * fVar20;
                  fVar32 = (float)extraout_var_10 + fVar17 * fVar21;
                  fVar35 = (float)((ulong)extraout_var_10 >> 0x20) + fVar24 * fVar22;
                  fVar30 = fStack_2e0 + (auVar19._8_4_ - fStack_2e0) * fVar25;
                  fVar34 = fStack_2dc + (auVar19._12_4_ - fStack_2dc) * fVar20;
                  pbVar39 = (byte *)CONCAT44(fVar34,fVar30);
                  fStack_2e0 = fStack_2e0 + (auVar19._8_4_ - fStack_2e0) * fVar21;
                  fStack_2dc = fStack_2dc + (auVar19._12_4_ - fStack_2dc) * fVar22;
                  uVar40 = CONCAT44(fStack_2dc,fStack_2e0);
                  fVar17 = (float)((ulong)extraout_d0_01 >> 0x20);
                  fVar24 = (float)((ulong)extraout_var_02 >> 0x20);
                  fVar41 = SUB84(extraout_d0_01,0) + fVar25 * (fVar27 - SUB84(extraout_d0_01,0));
                  fVar17 = fVar17 + fVar20 * (fVar31 - fVar17);
                  fVar43 = (float)extraout_var_02 + fVar21 * (fVar32 - (float)extraout_var_02);
                  fVar24 = fVar24 + fVar22 * (fVar35 - fVar24);
                  fVar27 = fVar27 + fVar25 * (fVar30 - fVar27);
                  fVar31 = fVar31 + fVar20 * (fVar34 - fVar31);
                  fVar32 = fVar32 + fVar21 * (fStack_2e0 - fVar32);
                  fVar35 = fVar35 + fVar22 * (fStack_2dc - fVar35);
                  fVar30 = fVar27 - fVar41;
                  fVar34 = fVar31 - fVar17;
                  fVar33 = fVar32 - fVar43;
                  fVar36 = fVar35 - fVar24;
                  fStack_2e0 = fVar41 + fVar25 * fVar30;
                  fStack_2dc = fVar17 + fVar20 * fVar34;
                  if (ppbVar15 != (byte **)0x0) {
                    pbVar11 = (byte *)CONCAT44(auVar29._4_4_,auVar29._0_4_);
                    *ppbVar15 = pbVar11;
                    ppbVar15[2] = (byte *)CONCAT44(fVar17,fVar41);
                    ppbVar15[1] = extraout_d0_01;
                    func_0x00010830fe90(CONCAT44(fStack_2dc,fStack_2e0));
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830fde8();
                  auVar6._4_4_ = fStack_2dc;
                  auVar6._0_4_ = fStack_2e0;
                  auVar6._8_4_ = fVar43 + fVar21 * fVar33;
                  auVar6._12_4_ = fVar24 + fVar22 * fVar36;
                  auVar38 = NEON_ext(auVar6,auVar6,8,1);
                  if (ppbVar15 != (byte **)0x0) {
                    uVar3 = CONCAT44(auVar29._4_4_,auVar29._0_4_);
                    func_0x0001083100fc(uVar3,CONCAT44(fStack_2dc,fStack_2e0));
                    ppbVar15[2] = auVar38._0_8_;
                    ppbVar15[3] = (byte *)0x7f8000007f800000;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      pbVar11 = *ppbVar15;
                      pbVar11[0] = 0;
                      pbVar11[1] = 0;
                      pbVar11[2] = 0;
                      pbVar11[3] = 0x40;
                      func_0x00010830fdf4();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    func_0x0001083100c0();
                    *ppbVar15 = (byte *)CONCAT44(fStack_2dc,fStack_2e0);
                    *(float *)(ppbVar15 + 2) = fVar43 + (float)extraout_var_06 * fVar33;
                    *(float *)((long)ppbVar15 + 0x14) =
                         fVar24 + (float)((ulong)extraout_var_06 >> 0x20) * fVar36;
                    *(float *)(ppbVar15 + 1) = fVar41 + (float)extraout_d1_03 * fVar30;
                    *(float *)((long)ppbVar15 + 0xc) =
                         fVar17 + (float)((ulong)extraout_d1_03 >> 0x20) * fVar34;
                    func_0x00010830fe90(auVar38._0_8_);
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830ff7c();
                  func_0x00010830fe1c();
                  if (lStack_1d0 != 0) {
                    func_0x00010830fdb8();
                  }
                  auVar2._4_4_ = fVar31;
                  auVar2._0_4_ = fVar27;
                  auVar2._8_4_ = fVar32;
                  auVar2._12_4_ = fVar35;
                  auVar38 = NEON_ext(auVar2,auVar2,8,1);
                  fStack_350 = auVar38._0_4_;
                  fStack_34c = auVar38._4_4_;
                  func_0x000108310130();
                }
                pbVar11 = auVar18._0_8_;
                if (iVar14 == 2) {
                  func_0x00010830fde8();
                  fVar17 = (fStack_350 + auVar29._0_4_) * 0.5;
                  fVar24 = (fStack_34c + auVar29._4_4_) * 0.5;
                  fVar21 = (fStack_2e0 + fStack_350) * 0.5;
                  fVar22 = (fStack_2dc + fStack_34c) * 0.5;
                  fVar31 = (fStack_3b0 + fStack_2e0) * 0.5;
                  fVar34 = (fStack_3ac + fStack_2dc) * 0.5;
                  fVar25 = (fVar21 + fVar17) * 0.5;
                  fVar20 = (fVar22 + fVar24) * 0.5;
                  fVar21 = (fVar31 + fVar21) * 0.5;
                  fVar27 = (fVar34 + fVar22) * 0.5;
                  fVar22 = (fVar21 + fVar25) * 0.5;
                  fVar30 = (fVar27 + fVar20) * 0.5;
                  if (ppbVar15 != (byte **)0x0) {
                    pbVar13 = (byte *)CONCAT44(auVar29._4_4_,auVar29._0_4_);
                    *ppbVar15 = pbVar13;
                    ppbVar15[2] = (byte *)CONCAT44(fVar20,fVar25);
                    ppbVar15[1] = (byte *)CONCAT44(fVar24,fVar17);
                    func_0x00010830fe90(CONCAT44(fVar30,fVar22));
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    uVar3 = CONCAT44(auVar29._4_4_,auVar29._0_4_);
                    func_0x0001083100fc(uVar3,CONCAT44(fVar30,fVar22));
                    ppbVar15[2] = pbVar11;
                    ppbVar15[3] = (byte *)0x7f8000007f800000;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      pbVar13 = *ppbVar15;
                      pbVar13[0] = 0;
                      pbVar13[1] = 0;
                      pbVar13[2] = 0;
                      pbVar13[3] = 0x40;
                      func_0x00010830fdf4();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    *ppbVar15 = (byte *)CONCAT44(fVar30,fVar22);
                    ppbVar15[2] = (byte *)CONCAT44(fVar34,fVar31);
                    ppbVar15[1] = (byte *)CONCAT44(fVar27,fVar21);
                    func_0x00010830fe90(pbVar11);
                    func_0x00010830fe04();
LAB_10830f798:
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                }
                else {
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    uVar3 = CONCAT44(auVar29._4_4_,auVar29._0_4_);
                    func_0x0001083100fc(uVar3,CONCAT44(fStack_34c,fStack_350));
                    ppbVar15[2] = (byte *)CONCAT44(fStack_2dc,fStack_2e0);
                    ppbVar15[3] = pbVar11;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    goto LAB_10830f798;
                  }
                }
                func_0x00010830ffac();
                func_0x0001083019c0(auVar19._8_4_,auVar19._12_4_);
                func_0x00010830fe1c();
                if (lStack_1d0 != 0) {
                  func_0x00010830fdb8();
                }
                func_0x00010830ffac();
                func_0x000108301978();
                func_0x00010830fe1c();
LAB_10830f834:
                if (lStack_1d0 != 0) {
                  func_0x00010830fdb8();
                }
                FUN_108301948(&ppbStack_1a0);
              }
            }
          }
          else if (bVar1 == 3) {
            uVar40 = func_0x00010830fe44(uStack_230);
            fStack_2f0 = (float)extraout_d2_00 + (float)uVar40;
            fStack_2ec = (float)((ulong)extraout_d2_00 >> 0x20) + (float)((ulong)uVar40 >> 0x20);
            pbVar13 = (byte *)CONCAT44((float)((ulong)extraout_var_08 >> 0x20) +
                                       (float)((ulong)extraout_var >> 0x20),
                                       (float)extraout_var_08 + (float)extraout_var);
            auVar38 = func_0x000108310190();
            pbVar11 = (byte *)CONCAT44(auVar38._12_4_ + auVar38._4_4_,auVar38._8_4_ + auVar38._0_4_)
            ;
            fVar25 = *extraout_x9;
            func_0x000108310214(CONCAT44(uVar26,uVar16),CONCAT44(uVar37,uVar23));
            func_0x00010830ff4c();
            func_0x00010830ff14();
            pbVar39 = (byte *)(ulong)(uint)(fVar25 * -2.0);
            uVar40 = 0;
            func_0x000108310200();
            fVar24 = (float)func_0x0001083101a8();
            fVar17 = 1.0;
            if (fVar25 <= 1.0) {
              fVar17 = fVar25;
            }
            if (1.0 < fVar24 / (fVar17 * 4.0)) {
              func_0x0001083101d4();
              if ((int)ppbVar15 != 0) {
                func_0x000108310120();
                func_0x000108310008();
                uStack_32c = (undefined4)((ulong)pbVar11 >> 0x20);
                auVar38 = NEON_fmov(0x3f800000,4);
                func_0x0001083101dc(auVar38._0_8_,CONCAT44(fStack_2ec,fStack_2f0));
                pbVar39 = pbVar42;
                uVar40 = in_register_000050a8;
                pbVar13 = pbVar11;
                pbVar44 = pbVar42;
                pbStack_300 = (byte *)func_0x000108310110();
                pbStack_310 = pbVar39;
                uStack_2f8 = extraout_var_00;
                while (1 < (int)param_3) {
                  func_0x00010830fde8();
                  fVar24 = 1.0 / (float)((ulong)param_3 & 0xffffffff);
                  fVar25 = SUB84(pbStack_300,0);
                  fVar20 = (float)((ulong)pbStack_300 >> 0x20);
                  fVar22 = (float)uStack_2f8;
                  fVar17 = (float)((ulong)pbStack_310 >> 0x20);
                  fVar27 = (float)((ulong)uStack_2f8 >> 0x20);
                  fVar30 = fStack_2f0 + (fVar25 - fStack_2f0) * fVar24;
                  fVar31 = fStack_2ec + (fVar20 - fStack_2ec) * fVar24;
                  fVar21 = SUB84(pbStack_310,0) + (fVar22 - SUB84(pbStack_310,0)) * fVar24;
                  fVar34 = fVar17 + (fVar27 - fVar17) * fVar24;
                  fStack_320 = SUB84(pbVar13,0);
                  fStack_31c = (float)((ulong)pbVar13 >> 0x20);
                  fStack_318 = SUB84(pbVar44,0);
                  fStack_314 = (float)((ulong)pbVar44 >> 0x20);
                  fVar25 = fVar25 + (fStack_320 - fVar25) * fVar24;
                  fVar20 = fVar20 + (fStack_31c - fVar20) * fVar24;
                  pbStack_300 = (byte *)CONCAT44(fVar20,fVar25);
                  fVar22 = fVar22 + (fStack_318 - fVar22) * fVar24;
                  fVar27 = fVar27 + (fStack_314 - fVar27) * fVar24;
                  uStack_2f8 = CONCAT44(fVar27,fVar22);
                  fVar25 = fVar30 + (fVar25 - fVar30) * fVar24;
                  fVar20 = fVar31 + (fVar20 - fVar31) * fVar24;
                  fVar21 = fVar21 + (fVar22 - fVar21) * fVar24;
                  fVar24 = fVar34 + (fVar27 - fVar34) * fVar24;
                  pbVar39 = pbStack_300;
                  uVar40 = uStack_2f8;
                  if (ppbVar15 != (byte **)0x0) {
                    uVar40 = CONCAT44(fVar24,fVar21);
                    pbVar39 = (byte *)CONCAT44(fVar20,fVar25);
                    ppbVar15[1] = (byte *)CONCAT44(fVar31 / fVar34,fVar30 / fVar34);
                    *ppbVar15 = (byte *)CONCAT44(fStack_2ec / fVar17,fStack_2f0 / fVar17);
                    ppbVar15[2] = (byte *)CONCAT44(fVar20 / fVar24,fVar25 / fVar24);
                    *(float *)(ppbVar15 + 3) = fVar34 / SQRT(fVar17 * fVar24);
                    *(undefined4 *)((long)ppbVar15 + 0x1c) = 0x7f800000;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      pbVar12 = *ppbVar15;
                      pbVar12[0] = 0;
                      pbVar12[1] = 0;
                      pbVar12[2] = 0x80;
                      pbVar12[3] = 0x3f;
                      func_0x00010830fdf4();
                    }
                  }
                  func_0x00010830ffac();
                  func_0x0001083019c0();
                  func_0x00010830fe1c();
                  if (lStack_1d0 != 0) {
                    func_0x00010830fdb8();
                  }
                  param_3 = (undefined4 *)(ulong)((int)param_3 - 1);
                  auVar5._4_4_ = fVar20;
                  auVar5._0_4_ = fVar25;
                  auVar5._8_4_ = fVar21;
                  auVar5._12_4_ = fVar24;
                  auVar38 = NEON_ext(auVar5,auVar5,8,1);
                  pbStack_310 = auVar38._0_8_;
                  fStack_2f0 = fVar25;
                  fStack_2ec = fVar20;
                }
                func_0x00010830fde8();
                if (ppbVar15 != (byte **)0x0) {
                  func_0x0001083100fc();
                  ppbVar15[2] = pbVar11;
                  *(float *)(ppbVar15 + 3) = extraout_s3_00 / extraout_s2_00;
                  *(undefined4 *)((long)ppbVar15 + 0x1c) = 0x7f800000;
                  func_0x00010830fea0();
                  func_0x00010830fe04();
                  if ((bStack_2c8 >> 5 & 1) != 0) {
                    pbVar13 = *ppbVar15;
                    pbVar13[0] = 0;
                    pbVar13[1] = 0;
                    pbVar13[2] = 0x80;
                    pbVar13[3] = 0x3f;
                    func_0x00010830fdf4();
                  }
                }
                func_0x00010830ffac();
                func_0x0001083019c0(pbVar11,uStack_32c);
                func_0x00010830fe1c();
                if (lStack_1d0 != 0) {
                  func_0x00010830fdb8();
                }
                func_0x00010830ffac();
                func_0x000108301978();
                func_0x00010830fe1c();
                goto LAB_10830f834;
              }
              func_0x00010830fde8();
              if (ppbVar15 != (byte **)0x0) {
                ppbVar15[1] = pbVar13;
                *ppbVar15 = (byte *)CONCAT44(fStack_2ec,fStack_2f0);
                ppbVar15[2] = pbVar11;
                *(float *)(ppbVar15 + 3) = fVar25;
                *(undefined4 *)((long)ppbVar15 + 0x1c) = 0x7f800000;
                ppbStack_1a0 = ppbVar15 + 4;
                pppbVar9 = &ppbStack_1a0;
                func_0x00010830fe88();
                if ((bStack_2c8 >> 5 & 1) != 0) {
                  *(undefined4 *)*pppbVar9 = 0x3f800000;
                  goto LAB_10830f768;
                }
              }
            }
          }
          else if (bVar1 == 2) {
            func_0x00010830fe44(uStack_230);
            func_0x000108310190();
            auVar28._8_8_ = extraout_var_07;
            auVar28._0_8_ = extraout_d2;
            fVar24 = (float)extraout_d1 + (float)extraout_d0;
            fVar25 = (float)((ulong)extraout_d1 >> 0x20) + (float)((ulong)extraout_d0 >> 0x20);
            auVar38 = NEON_ext(auVar28,auVar28,8,1);
            fStack_2f0 = SUB84(extraout_d2,0);
            fStack_2ec = (float)((ulong)extraout_d2 >> 0x20);
            fVar17 = (float)func_0x000108310178(CONCAT44((fStack_2ec -
                                                         (auVar38._4_4_ + auVar38._4_4_)) + fVar25,
                                                         (fStack_2f0 -
                                                         (auVar38._0_4_ + auVar38._0_4_)) + fVar24),
                                                CONCAT44(uVar26,uVar16),CONCAT44(uVar37,uVar23),
                                                auVar38._0_8_);
            if (1.0 < fVar17) {
              fStack_2d8 = (float)extraout_var_11;
              fStack_2d4 = (float)((ulong)extraout_var_11 >> 0x20);
              fStack_2e0 = (float)extraout_d3;
              fStack_2dc = (float)((ulong)extraout_d3 >> 0x20);
              func_0x0001083101d4();
              if ((int)ppbVar15 != 0) {
                func_0x000108310120();
                func_0x000108310008();
                while (2 < iVar14) {
                  func_0x0001083100a8(0x3f8000003f800000);
                  func_0x00010830fde8();
                  uVar40 = CONCAT44(fStack_2d4,fStack_2d8);
                  pbVar39 = (byte *)CONCAT44(fStack_2dc,fStack_2e0);
                  fVar27 = fStack_2f0 + (fStack_2e0 - fStack_2f0) * extraout_s0;
                  fVar30 = fStack_2ec + (fStack_2dc - fStack_2ec) * extraout_s1;
                  fVar31 = fStack_2f0 + (fStack_2e0 - fStack_2f0) * extraout_s2;
                  fVar34 = fStack_2ec + (fStack_2dc - fStack_2ec) * extraout_s3;
                  fVar17 = (fStack_2e0 + (fVar24 - fStack_2e0) * extraout_s0) - fVar27;
                  fVar20 = (fStack_2dc + (fVar25 - fStack_2dc) * extraout_s1) - fVar30;
                  fVar21 = (fStack_2e0 + (fVar24 - fStack_2e0) * extraout_s2) - fVar31;
                  fVar22 = (fStack_2dc + (fVar25 - fStack_2dc) * extraout_s3) - fVar34;
                  fStack_2e0 = fVar27 + extraout_s0 * fVar17;
                  fStack_2dc = fVar30 + extraout_s1 * fVar20;
                  fStack_2d8 = fVar31 + extraout_s2 * fVar21;
                  fStack_2d4 = fVar34 + extraout_s3 * fVar22;
                  if (ppbVar15 != (byte **)0x0) {
                    uVar40 = CONCAT44(fStack_2d4,fStack_2d8);
                    pbVar39 = (byte *)CONCAT44(fStack_2dc,fStack_2e0);
                    *ppbVar15 = extraout_d2;
                    *(float *)(ppbVar15 + 2) = fStack_2e0 + (fVar27 - fStack_2e0) * 0.6666667;
                    *(float *)((long)ppbVar15 + 0x14) =
                         fStack_2dc + (fVar30 - fStack_2dc) * 0.6666667;
                    *(float *)(ppbVar15 + 1) = fStack_2f0 + (fVar27 - fStack_2f0) * 0.6666667;
                    *(float *)((long)ppbVar15 + 0xc) =
                         fStack_2ec + (fVar30 - fStack_2ec) * 0.6666667;
                    ppbVar15[3] = pbVar39;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830fde8();
                  auVar4._4_4_ = fStack_2dc;
                  auVar4._0_4_ = fStack_2e0;
                  auVar4._8_4_ = fStack_2d8;
                  auVar4._12_4_ = fStack_2d4;
                  auVar38 = NEON_ext(auVar4,auVar4,8,1);
                  if (ppbVar15 != (byte **)0x0) {
                    func_0x0001083100fc(extraout_d2,CONCAT44(fStack_2dc,fStack_2e0));
                    ppbVar15[2] = auVar38._0_8_;
                    ppbVar15[3] = (byte *)0x7f8000007f800000;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      pbVar11 = *ppbVar15;
                      pbVar11[0] = 0;
                      pbVar11[1] = 0;
                      pbVar11[2] = 0;
                      pbVar11[3] = 0x40;
                      func_0x00010830fdf4();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    func_0x0001083100c0();
                    *ppbVar15 = (byte *)CONCAT44(fStack_2dc,fStack_2e0);
                    *(float *)(ppbVar15 + 2) =
                         fVar31 + (extraout_s2 + ((float)extraout_var_03 - extraout_s2) * 0.6666667)
                                  * fVar21;
                    *(float *)((long)ppbVar15 + 0x14) =
                         fVar34 + (extraout_s3 +
                                  ((float)((ulong)extraout_var_03 >> 0x20) - extraout_s3) *
                                  0.6666667) * fVar22;
                    *(float *)(ppbVar15 + 1) =
                         fVar27 + (extraout_s0 + ((float)extraout_d1_00 - extraout_s0) * 0.6666667)
                                  * fVar17;
                    *(float *)((long)ppbVar15 + 0xc) =
                         fVar30 + (extraout_s1 +
                                  ((float)((ulong)extraout_d1_00 >> 0x20) - extraout_s1) * 0.6666667
                                  ) * fVar20;
                    func_0x00010830fe90(auVar38._0_8_);
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830ff7c();
                  func_0x00010830fe1c();
                  if (lStack_1d0 != 0) {
                    func_0x00010830fdb8();
                  }
                  func_0x000108310130();
                }
                if (iVar14 == 2) {
                  func_0x00010830fde8();
                  fVar17 = (fStack_2f0 + fStack_2e0) * 0.5;
                  fVar20 = (fStack_2ec + fStack_2dc) * 0.5;
                  fVar21 = (fVar24 + fStack_2e0) * 0.5;
                  fVar27 = (fVar25 + fStack_2dc) * 0.5;
                  fVar22 = (fVar17 + fVar21) * 0.5;
                  fVar30 = (fVar20 + fVar27) * 0.5;
                  pbVar11 = (byte *)CONCAT44(fVar30,fVar22);
                  if (ppbVar15 != (byte **)0x0) {
                    *ppbVar15 = extraout_d2;
                    *(float *)(ppbVar15 + 2) = fVar22 + (fVar17 - fVar22) * 0.6666667;
                    *(float *)((long)ppbVar15 + 0x14) = fVar30 + (fVar20 - fVar30) * 0.6666667;
                    *(float *)(ppbVar15 + 1) = fStack_2f0 + (fVar17 - fStack_2f0) * 0.6666667;
                    *(float *)((long)ppbVar15 + 0xc) =
                         fStack_2ec + (fVar20 - fStack_2ec) * 0.6666667;
                    func_0x00010830fe90(pbVar11);
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    ppbVar15[1] = (byte *)CONCAT44(fVar30,fVar22);
                    *ppbVar15 = extraout_d2;
                    ppbVar15[2] = (byte *)CONCAT44(fVar25,fVar24);
                    ppbVar15[3] = (byte *)0x7f8000007f800000;
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      pbVar13 = *ppbVar15;
                      pbVar13[0] = 0;
                      pbVar13[1] = 0;
                      pbVar13[2] = 0;
                      pbVar13[3] = 0x40;
                      func_0x00010830fdf4();
                    }
                  }
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    uVar40 = 0;
                    func_0x00010830fe28(pbVar11,CONCAT44(fVar27,fVar21),CONCAT44(fVar25,fVar24),
                                        0x3f2aaaab3f2aaaab);
                    func_0x00010830fea0();
                    func_0x00010830fe04();
LAB_10830f7fc:
                    pbVar39 = pbVar11;
                    if ((bStack_2c8 >> 5 & 1) != 0) {
                      func_0x00010830fda0();
                      pbVar39 = pbVar11;
                    }
                  }
                }
                else {
                  func_0x00010830fde8();
                  if (ppbVar15 != (byte **)0x0) {
                    pbVar11 = extraout_d2;
                    uVar40 = extraout_var_07;
                    func_0x00010830fe28(extraout_d2,CONCAT44(fStack_2dc,fStack_2e0),
                                        CONCAT44(fVar25,fVar24),0x3f2aaaab3f2aaaab);
                    func_0x00010830fea0();
                    func_0x00010830fe04();
                    goto LAB_10830f7fc;
                  }
                }
                func_0x00010830ffac();
                func_0x0001083019c0(CONCAT44(fVar25,fVar24),fVar25);
                func_0x00010830fe1c();
                if (lStack_1d0 != 0) {
                  func_0x00010830fdb8();
                }
                func_0x00010830ffac();
                func_0x000108301978();
                func_0x00010830fe1c();
                goto LAB_10830f834;
              }
              func_0x00010830fde8();
              if (ppbVar15 != (byte **)0x0) {
                pbVar39 = extraout_d2;
                uVar40 = extraout_var_07;
                func_0x000108310078(extraout_var_07,extraout_d2,CONCAT44(fVar25,fVar24),
                                    0x3f2aaaab3f2aaaab);
                ppbStack_1a0 = ppbVar15 + 4;
                pppbVar9 = &ppbStack_1a0;
                func_0x00010830fe88();
                goto LAB_10830f758;
              }
            }
          }
        }
        else if (bVar1 != 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10830f984);
          (*pcVar8)();
        }
        ppbVar15 = &pbStack_238;
        func_0x0001081e8ec8();
      }
    }
    uVar10 = (uint)ppbVar15;
    func_0x00010830fcd0();
    if (4 < uVar10) {
      uVar10 = 5;
    }
    *(int *)(param_1 + 0x30) = (3 << (ulong)(uVar10 & 0x1f)) + -3;
    FUN_1082b6654(&plStack_298);
  }
  (**(code **)(*param_2 + 0xb0))(param_2);
  if ((bRam000000011372ac80 & 1) == 0) {
    iVar14 = 0x1372ac80;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      ___cxa_guard_release(0x11372ac80);
    }
  }
  func_0x00010830ff94(0x11372ace0);
  if ((bRam000000011372ac90 & 1) == 0) {
    iVar14 = 0x1372ac90;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      func_0x0001083100f4(0x11372ace0);
    }
  }
  FUN_1082aef50(&ppbStack_1a0,param_2,0,0x108,uRam000000011372ac88,0x1083222b4);
  ppbVar15 = ppbStack_1a0;
  ppbStack_1a0 = (byte **)0x0;
  FUN_1082eea00(param_1 + 0x38,ppbVar15);
  func_0x0001083101f8();
  if ((bRam000000011372ac98 & 1) == 0) {
    iVar14 = 0x1372ac98;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      ___cxa_guard_release(0x11372ac98);
    }
  }
  func_0x00010830ff94(0x11372ad18);
  if ((bRam000000011372aca8 & 1) == 0) {
    iVar14 = 0x1372aca8;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      func_0x0001083100f4(0x11372ad18);
    }
  }
  FUN_1082aef50(&ppbStack_1a0,param_2,1,0xba,uRam000000011372aca0,0x108322314);
  ppbVar15 = ppbStack_1a0;
  ppbStack_1a0 = (byte **)0x0;
  FUN_1082eea00(param_1 + 0x40,ppbVar15);
  func_0x0001083101f8();
  return;
}



/* Entry: 10830fab0; end: 10830fab3;  */

undefined8 * FUN_10830fab0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3aec0;
  FUN_10828f708(param_1 + 8);
  FUN_10828f708(param_1 + 7);
  FUN_1083016b0(param_1 + 4);
  return param_1;
}



/* Entry: 10830fab4; end: 10830fac7;  */

void FUN_10830fab4(void)

{
  FUN_108301660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10830fac8; end: 10830fb07;  */

float FUN_10830fac8(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 10830fb08; end: 10830fbe3;  */

void FUN_10830fb08(byte *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  byte **ppbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbStack_68;
  
  lVar3 = param_2[1];
  uVar2 = *(undefined4 *)((long)param_2 + 0xc);
  puVar6 = (undefined8 *)param_2[2];
  plVar1 = param_2 + 2;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 0x188);
  }
  for (puVar7 = (undefined8 *)*plVar1; puVar7 != puVar6;
      puVar7 = (undefined8 *)((long)puVar7 + -0xc)) {
    uVar8 = *(undefined8 *)((long)puVar7 + -0xc);
    uVar9 = *puVar7;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0x80;
    param_1[0x1f] = 0x41;
    pbVar5 = param_1 + 0x28;
    FUN_10830fbe4(pbVar5,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      func_0x0001083100fc(uVar8,uVar9);
      *(int *)(pbVar5 + 0x10) = (int)lVar3;
      *(undefined4 *)(pbVar5 + 0x14) = uVar2;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0x80;
      pbVar5[0x1b] = 0x7f;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0x80;
      pbVar5[0x1f] = 0x7f;
      pbStack_68 = pbVar5 + 0x20;
      ppbVar4 = &pbStack_68;
      FUN_10830fc88(ppbVar4,param_1 + 100);
      if ((*param_1 >> 5 & 1) != 0) {
        pbVar5 = *ppbVar4;
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0x40;
        func_0x00010830fdf4();
      }
    }
  }
  return;
}



/* Entry: 10830fbe4; end: 10830fc47;  */

long FUN_10830fbe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  
  FUN_10830fc48(*param_1);
  iVar3 = *(int *)(param_1 + 6);
  if (*(int *)((long)param_1 + 0x34) <= iVar3) {
    puVar1 = param_1 + 1;
    FUN_1082b66c0(puVar1,1);
    if ((int)puVar1 == 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 6);
  }
  *(int *)(param_1 + 6) = iVar3 + 1;
  lVar2 = param_1[5];
  param_1[5] = lVar2 + param_1[3];
  return lVar2;
}



/* Entry: 10830fc48; end: 10830fc87;  */

void FUN_10830fc48(float *param_1,float *param_2)

{
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
  }
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
  }
  if ((int)param_1[2] < (int)param_2[2]) {
    param_1[2] = param_2[2];
  }
  return;
}



/* Entry: 10830fc88; end: 10830fcbb;  */

undefined8 FUN_10830fc88(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    FUN_1082fdf68(param_1);
  }
  return param_1;
}



/* Entry: 10830fcbc; end: 10830fd27;  */

float FUN_10830fcbc(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 10830fd28; end: 10830fd3f;  */

long FUN_10830fd28(long param_1)

{
  FUN_10830fd40();
  return param_1 + 0x20;
}



/* Entry: 10830fd40; end: 108310277;  */

int FUN_10830fd40(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 4;
  if ((param_1 & 0x40) != 0) {
    iVar1 = 0x10;
  }
  iVar2 = 0;
  if ((param_1 & 8) != 0) {
    iVar2 = iVar1;
  }
  return iVar2 + (param_1 >> 3 & 4) + (param_1 >> 2 & 4) + (param_1 >> 4 & 8) +
         (param_1 & 1) * 8 + (param_1 & 2) * 4 + (param_1 & 4) * 2;
}



/* Entry: 108310278; end: 108311af3;  */

void FUN_108310278(uint *param_1,long *param_2,float *param_3,long param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  float *pfVar13;
  undefined4 uVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  long *plVar21;
  float extraout_s0;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  int extraout_w8_12;
  int extraout_w8_13;
  int extraout_w8_14;
  int extraout_w8_15;
  int extraout_w8_16;
  int iVar22;
  undefined8 uVar23;
  undefined1 (*extraout_x8) [16];
  byte *extraout_x8_00;
  byte *extraout_x8_01;
  undefined1 (*extraout_x8_02) [16];
  undefined1 (*extraout_x8_03) [16];
  undefined1 (*extraout_x8_04) [16];
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  float fVar28;
  float fVar29;
  ulong uVar31;
  undefined8 uVar32;
  float fVar37;
  undefined1 auVar33 [16];
  float fVar36;
  ulong uVar30;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*extraout_var_00) [16];
  undefined1 (*extraout_var_01) [16];
  undefined1 (*extraout_var_02) [16];
  undefined1 (*extraout_var_03) [16];
  float extraout_s1;
  float fVar42;
  undefined8 extraout_d1;
  undefined1 (*extraout_d1_00) [16];
  undefined1 (*extraout_d1_01) [16];
  undefined1 (*pauVar43) [16];
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 (*extraout_var_04) [16];
  float fVar49;
  float extraout_s2;
  float fVar51;
  ulong extraout_d2;
  ulong extraout_d2_00;
  float *pfVar50;
  ulong extraout_d2_01;
  ulong extraout_d2_02;
  ulong extraout_d2_03;
  ulong extraout_d2_04;
  ulong extraout_d2_05;
  float fVar52;
  undefined1 (*extraout_var_05) [16];
  float extraout_s3;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_d3_02;
  undefined8 extraout_d3_03;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 in_d4;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_370;
  float fStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_358;
  int iStack_350;
  byte bStack_349;
  float *pfStack_348;
  long lStack_340;
  byte *pbStack_338;
  float *pfStack_330;
  undefined8 uStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  uint uStack_308;
  float *pfStack_300;
  undefined8 uStack_2f8;
  float *pfStack_2f0;
  uint auStack_2e8 [8];
  long alStack_2c8 [8];
  undefined8 auStack_288 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  uint auStack_1f8 [2];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  uint *puStack_1c0;
  ulong uStack_1b8;
  int iStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  byte bStack_194;
  undefined1 auStack_193 [71];
  undefined1 (*pauStack_14c) [16];
  float *pfStack_140;
  byte bStack_138;
  float *pfStack_134;
  long lStack_12c;
  undefined4 uStack_124;
  byte bStack_120;
  undefined1 auStack_118 [8];
  byte *pbStack_110;
  byte *pbStack_108;
  float *pfStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  float *pfStack_f0;
  undefined8 uStack_e8;
  undefined1 (*pauStack_e0) [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_b8;
  undefined8 extraout_var;
  undefined1 auVar45 [16];
  
  fVar55 = (float)((ulong)in_d4 >> 0x20);
  fVar29 = (float)in_d4;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_358 = 0x3f800000;
  iStack_350 = 0;
  uVar24 = *param_1;
  uVar26 = (ulong)uVar24;
  fStack_1f0 = 1.0;
  fStack_1ec = 0.0;
  fStack_1e8 = 0.0;
  uStack_1dc = 0x3f800000;
  fStack_1e4 = 1.0;
  fStack_1e0 = 1.0;
  uStack_1d4 = 0;
  auStack_1f8[0] = uVar24;
  FUN_10830fd28();
  puStack_1d0 = &uStack_358;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_198 = 0xbf800000;
  bStack_194 = 1;
  pauStack_14c = (undefined1 (*) [16])0x0;
  bStack_138 = (byte)(uVar24 >> 2) & 1;
  pfStack_140 = (float *)0x0;
  bStack_120 = (byte)(uVar24 >> 3) & 1;
  lStack_12c = 0;
  pfStack_134 = (float *)0x0;
  uStack_124 = 0;
  fVar56 = *param_3;
  fVar57 = param_3[1];
  fVar59 = param_3[3];
  fVar58 = param_3[4];
  plStack_1c8 = param_2;
  puStack_1c0 = param_1 + 2;
  uStack_1b8 = uVar26;
  iStack_1b0 = param_5 * 2 + 8;
  fStack_1e0 = (float)FUN_108365614(param_3);
  fStack_1e0 = ABS(fStack_1e0);
  fStack_1f0 = fVar56;
  fStack_1ec = fVar59;
  fStack_1e8 = fVar57;
  fStack_1e4 = fVar58;
  if (((byte)auStack_1f8[0] >> 2 & 1) == 0) {
    FUN_108311dec(&pfStack_348,param_4 + 0x10);
    func_0x000108312b48();
  }
  uVar23 = uStack_358;
joined_r0x000108310414:
  uStack_358 = uVar23;
  if (param_4 == 0) {
    uStack_358._4_4_ = (float)((ulong)uVar23 >> 0x20);
    uStack_358._0_4_ = (float)uVar23;
    fVar29 = (float)NEON_fminnm((int)(uStack_358._4_4_ * 3.1415927),0x4effffff);
    if (fVar29 <= -2.1474835e+09) {
      fVar29 = -2.1474835e+09;
    }
    iVar22 = (int)fVar29;
    if (iVar22 < 2) {
      iVar22 = 1;
    }
    fVar29 = (float)NEON_fminnm((int)SQRT(SQRT((float)uStack_358)),0x4effffff);
    if (fVar29 <= -2.1474835e+09) {
      fVar29 = -2.1474835e+09;
    }
    iVar22 = iVar22 + iStack_350 + (int)fVar29;
    if (0x3ffe < iVar22) {
      iVar22 = 0x3fff;
    }
    param_1[10] = iVar22 << 1;
    plVar21 = param_2;
    (**(code **)(*param_2 + 0xd0))();
    if ((*(byte *)(plVar21[2] + 0x5e) & 1) != 0) goto LAB_108311a14;
    uVar24 = param_1[10];
    if (0x7ff < (int)uVar24) {
      uVar24 = 0x800;
    }
    param_1[10] = uVar24;
    if ((bRam000000011372adc8 & 1) == 0) goto LAB_108311a6c;
    while( true ) {
      pfStack_348 = (float *)0x11372ade0;
      FUN_1082e9628(0x11372adc0,FUN_108311af4,&pfStack_348);
      if ((bRam000000011372add8 & 1) == 0) {
        iVar22 = 0x1372add8;
        ___cxa_guard_acquire();
        if (iVar22 != 0) {
          uRam000000011372add0 = 0x11372ade0;
          ___cxa_guard_release(0x11372add8);
        }
      }
      (**(code **)(*param_2 + 0xb0))(param_2);
      FUN_1082aef50(&pfStack_348);
      pfVar50 = pfStack_348;
      pfStack_348 = (float *)0x0;
      FUN_1082eea00(param_1 + 0xc,pfVar50);
      FUN_10828f708(&pfStack_348);
LAB_108311a14:
      FUN_108312818(auStack_1f8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) break;
      ___stack_chk_fail();
LAB_108311a6c:
      iVar22 = 0x1372adc8;
      ___cxa_guard_acquire();
      if (iVar22 != 0) {
        ___cxa_guard_release(0x11372adc8);
      }
    }
    return;
  }
  if ((auStack_1f8[0] >> 2 & 1) != 0) {
    FUN_108311dec(&pfStack_348,param_4 + 0x10);
    pfStack_140 = pfStack_348;
    func_0x000108312b48();
  }
  if ((auStack_1f8[0] >> 3 & 1) != 0) {
    func_0x0001082e70b0(&pfStack_348,param_4 + 0x20,auStack_1f8[0] >> 6 & 1);
    lStack_12c = lStack_340;
    pfStack_134 = pfStack_348;
    uStack_124 = pbStack_338._0_4_;
  }
  pfStack_2f0 = (float *)0x0;
  uStack_248 = 0;
  pfStack_330 = (float *)0x0;
  pbStack_338 = (byte *)0x0;
  pbStack_320 = (byte *)0x0;
  uStack_328 = 0;
  uStack_310 = 0;
  uStack_318 = 0;
  pauVar19 = (undefined1 (*) [16])&pbStack_110;
  pfStack_348 = param_3;
  lStack_340 = param_4 + 0x10;
  FUN_1081e8e40(pauVar19,param_4);
  pbStack_338 = pbStack_110;
  uStack_328 = CONCAT44(uStack_f4,fStack_f8);
  pfStack_330 = pfStack_100;
  pbStack_320 = pbStack_108;
  uStack_318 = 0;
  uStack_310 = 0;
LAB_1083104bc:
  iVar22 = uStack_248._4_4_;
  if (uStack_248._4_4_ == 0) {
LAB_1083104f4:
    while (pbStack_338 != pbStack_320) {
      bVar1 = *pbStack_338;
      uVar24 = (uint)bVar1;
      if (4 < uVar24 - 1) {
        if (uVar24 != 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x108311a68);
          (*pcVar15)();
        }
        uVar26 = 0;
        FUN_108311e24();
        pfVar50 = pfStack_2f0;
        if ((uVar26 & 1) == 0) goto LAB_1083105c4;
        goto LAB_10831066c;
      }
      pfVar50 = pfStack_330 + -2;
      iVar10 = (int)uStack_248;
      iVar22 = uStack_248._4_4_;
      switch(uVar24) {
      case 1:
        fVar56 = *pfStack_330;
        fVar57 = pfStack_330[1];
code_r0x000108310568:
        bVar16 = false;
        if ((fVar56 == pfStack_330[-2]) && (bVar16 = false, !NAN(fVar57) && !NAN(pfStack_330[-1])))
        {
          bVar16 = fVar57 == pfStack_330[-1];
        }
        if (!bVar16) goto code_r0x000108310594;
        break;
      default:
code_r0x00010831052c:
        fVar56 = *pfStack_330;
        fVar57 = pfStack_330[1];
        bVar16 = false;
        if ((pfStack_330[2] == fVar56) && (bVar16 = false, !NAN(pfStack_330[3]) && !NAN(fVar57))) {
          bVar16 = pfStack_330[3] == fVar57;
        }
        if (bVar16) goto code_r0x000108310568;
        goto code_r0x000108310594;
      case 4:
        bVar16 = false;
        if ((pfStack_330[4] == pfStack_330[2]) &&
           (bVar16 = false, !NAN(pfStack_330[5]) && !NAN(pfStack_330[3]))) {
          bVar16 = pfStack_330[5] == pfStack_330[3];
        }
        if (bVar16) goto code_r0x00010831052c;
code_r0x000108310594:
        uVar24 = uStack_248._4_4_ + (int)uStack_248 & 7;
        auStack_2e8[uVar24] = (uint)bVar1;
        alStack_2c8[uVar24] = (long)pfVar50;
        auStack_288[uVar24] = uStack_328;
        uStack_248 = CONCAT44(iVar22 + 1,(int)uStack_248);
        if (iVar22 != 0) {
LAB_10831066c:
          pauVar19 = (undefined1 (*) [16])&pbStack_338;
          func_0x0001081e8ec8();
          goto LAB_108310674;
        }
        uStack_2f8 = uStack_328;
        uStack_308 = (uint)bVar1;
        pfStack_300 = pfVar50;
        pfVar50 = pfStack_2f0;
        break;
      case 5:
        if (uStack_248._4_4_ != 0) {
          bVar16 = false;
          if ((pfStack_330[-2] == *pfStack_300) &&
             (bVar16 = false, !NAN(pfStack_330[-1]) && !NAN(pfStack_300[1]))) {
            bVar16 = pfStack_330[-1] == pfStack_300[1];
          }
          if (!bVar16) {
            uVar23 = *(undefined8 *)pfVar50;
            uVar25 = *(undefined8 *)pfStack_300;
            uVar24 = (int)uStack_248 + uStack_248._4_4_ & 7;
            auStack_2e8[uVar24] = 1;
            uStack_240 = uVar23;
            uStack_238 = uVar25;
            alStack_2c8[uVar24] = (long)&uStack_240;
            auStack_288[uVar24] = 0;
            iVar22 = iVar22 + 1;
          }
          uVar24 = iVar22 + iVar10 & 7;
          auStack_2e8[uVar24] = uStack_308;
          alStack_2c8[uVar24] = (long)pfStack_300;
          auStack_288[uVar24] = uStack_2f8;
          uVar24 = iVar22 + iVar10 + 1U & 7;
          auStack_2e8[uVar24] = 7;
          alStack_2c8[uVar24] = 0;
          auStack_288[uVar24] = 0;
          uStack_248 = CONCAT44(iVar22 + 2,(int)uStack_248);
          pfStack_2f0 = (float *)0x0;
          goto LAB_10831066c;
        }
      }
LAB_1083105c4:
      pfStack_2f0 = pfVar50;
      func_0x0001081e8ec8(&pbStack_338);
    }
    pauVar19 = (undefined1 (*) [16])&pfStack_348;
    FUN_108311e24();
    if ((int)pauVar19 == 0) goto LAB_1083118d8;
  }
  else {
    uVar24 = (int)uStack_248 + 1;
    uStack_248 = CONCAT44(uStack_248._4_4_ + -1,uVar24);
    if (iVar22 < 3) {
      if (auStack_2e8[uVar24 & 7] == 7) {
        uStack_248 = (ulong)uVar24;
      }
      goto LAB_1083104f4;
    }
  }
LAB_108310674:
  uVar24 = (int)uStack_248 + 1U & 7;
  pauVar27 = (undefined1 (*) [16])alStack_2c8[uVar24];
  uVar18 = auStack_2e8[uVar24] - 1 == 6;
  switch(auStack_2e8[uVar24] - 1) {
  case 0:
    uVar26 = *(ulong *)*pauVar27;
    uVar31 = *(ulong *)(*pauVar27 + 8);
    uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
    func_0x000108312a84();
    if ((bool)uVar18) {
      func_0x000108312acc();
      FUN_10830fd28();
      pauVar19 = (undefined1 (*) [16])auStack_193;
    }
    else {
      func_0x00010831291c();
      if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
    }
    *(ulong *)*pauVar19 = uVar26;
    *(ulong *)(*pauVar19 + 8) = uVar26;
    *(ulong *)pauVar19[1] = uVar31;
    *(ulong *)(pauVar19[1] + 8) = uVar31;
    func_0x0001083128b8();
    if ((bool)uVar18) {
      func_0x000108312908();
    }
    func_0x000108312974();
    if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
      func_0x0001083128a0();
    }
    uVar30 = func_0x0001083128d4();
    pauStack_14c = (undefined1 (*) [16])(uVar31 ^ (uVar31 ^ uVar26) & uVar30);
    goto code_r0x0001083111f4;
  case 1:
    pauVar19 = pauVar27;
    FUN_108311cf8();
    if ((int)pauVar19 == 0) {
      uVar23 = *(undefined8 *)(*pauVar27 + 8);
      uVar25 = *(undefined8 *)pauVar27[1];
      fStack_380 = (float)*(undefined8 *)*pauVar27;
      fStack_37c = (float)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
      fStack_370 = (float)uVar23;
      fStack_36c = (float)((ulong)uVar23 >> 0x20);
      fVar59 = (float)uVar25;
      fVar56 = (fStack_380 - (fStack_370 + fStack_370)) + fVar59;
      fVar36 = (float)((ulong)uVar25 >> 0x20);
      fVar58 = (fStack_37c - (fStack_36c + fStack_36c)) + fVar36;
      fVar28 = fStack_1f0 * fVar56;
      fVar56 = fStack_1ec * fVar56;
      fVar57 = fVar28 + fStack_1e8 * fVar58;
      fVar58 = fVar56 + fStack_1e4 * fVar58;
      pauVar19 = (undefined1 (*) [16])auStack_1f8;
      func_0x000108312314(fVar57 * fVar57 + fVar58 * fVar58,CONCAT44(fVar56,fVar28),
                          CONCAT44(fStack_1e4,fStack_1e8));
      pauVar27 = pauVar19;
      if ((int)pauVar19 == 0) {
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          uVar32 = FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
        }
        else {
          uVar32 = func_0x00010831291c();
          if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
        }
        fVar29 = fStack_380;
        fVar55 = fStack_37c;
        func_0x000108312b2c(uVar32,uVar23);
        pauVar27 = (undefined1 (*) [16])func_0x0001083129d0();
        uStack_368 = SUB84(extraout_var_00,0);
        uStack_364 = (undefined4)((ulong)extraout_var_00 >> 0x20);
        fStack_370 = SUB84(pauVar27,0);
        fStack_36c = (float)((ulong)pauVar27 >> 0x20);
        *(ulong *)*pauVar19 = CONCAT44(fVar55,fVar29);
        *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar27;
        *(undefined1 (**) [16])pauVar19[1] = extraout_var_00;
        *(undefined8 *)(pauVar19[1] + 8) = extraout_d3_00;
        func_0x0001083128b8();
        if ((bool)uVar18) {
          func_0x000108312908();
        }
        func_0x000108312974();
        pauVar43 = extraout_var_00;
code_r0x0001083114a0:
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        auVar9._4_4_ = fStack_36c;
        auVar9._0_4_ = fStack_370;
        auVar9._8_4_ = uStack_368;
        auVar9._12_4_ = uStack_364;
        auVar60 = NEON_ext(auVar9,auVar9,8,1);
        func_0x000108312a64(auVar60._0_8_,uVar25);
        if (extraout_w8_07 == 0) {
          func_0x0001083129a0();
          if (extraout_w8_08 != 0) goto code_r0x0001083118c4;
          pauStack_14c = (undefined1 (*) [16])CONCAT44(fStack_37c,fStack_380);
code_r0x0001083118d0:
        }
        else {
code_r0x0001083118b0:
          pauStack_14c = pauVar43;
        }
      }
      else {
        while( true ) {
          iVar22 = (int)pauVar27;
          uVar18 = iVar22 == 3;
          if (iVar22 < 3) break;
          func_0x000108312384(0x3f8000003f800000);
          fVar42 = fStack_380 + (fStack_370 - fStack_380) * extraout_s0;
          fVar46 = fStack_37c + (fStack_36c - fStack_37c) * extraout_s1;
          fVar47 = fStack_380 + (fStack_370 - fStack_380) * extraout_s2;
          fVar48 = fStack_37c + (fStack_36c - fStack_37c) * extraout_s3;
          fVar58 = fStack_370 + (fVar59 - fStack_370) * extraout_s0;
          fVar49 = fStack_36c + (fVar36 - fStack_36c) * extraout_s1;
          fStack_370 = fStack_370 + (fVar59 - fStack_370) * extraout_s2;
          fStack_36c = fStack_36c + (fVar36 - fStack_36c) * extraout_s3;
          fVar28 = fVar58 - fVar42;
          fVar51 = fVar49 - fVar46;
          fVar37 = fStack_370 - fVar47;
          fVar40 = fStack_36c - fVar48;
          fVar39 = fVar42 + extraout_s0 * fVar28;
          fVar52 = fVar46 + extraout_s1 * fVar51;
          fVar38 = fVar47 + extraout_s2 * fVar37;
          fVar41 = fVar48 + extraout_s3 * fVar40;
          fVar29 = fStack_380;
          fVar55 = fStack_37c;
          fVar56 = fStack_380;
          fVar57 = fStack_37c;
          func_0x000108312a84();
          if ((bool)uVar18) {
            func_0x0001083129b0();
            FUN_10830fd28();
            pauVar27 = (undefined1 (*) [16])auStack_193;
code_r0x000108310c40:
            auVar60 = func_0x000108312b74();
            auVar34._0_8_ = (undefined1 (*) [16])func_0x0001083129d0(auVar60._0_8_,auVar60._8_8_);
            auVar34._8_8_ = extraout_var;
            *(undefined8 *)*pauVar27 = extraout_d3;
            *(undefined1 (**) [16])(*pauVar27 + 8) = auVar34._0_8_;
            auVar2._4_4_ = fVar55;
            auVar2._0_4_ = fVar29;
            auVar2._8_4_ = fVar56;
            auVar2._12_4_ = fVar57;
            auVar60 = NEON_ext(auVar34,auVar2,8,1);
            *(long *)(pauVar27[1] + 8) = auVar60._8_8_;
            *(long *)pauVar27[1] = auVar60._0_8_;
            func_0x0001083128b8();
            if ((bool)uVar18) {
              func_0x000108312908();
            }
            func_0x000108312974();
            if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
              func_0x0001083128a0();
            }
            auVar3._8_8_ = extraout_var;
            auVar3._0_8_ = auVar34._0_8_;
            auVar60 = NEON_ext(auVar3,auVar3,8,1);
            func_0x000108312a64(auVar60._0_8_,CONCAT44(fVar52,fVar39));
            pauVar19 = extraout_var_05;
            if ((extraout_w8 == 0) &&
               (func_0x0001083129a0(), pauVar19 = auVar34._0_8_, extraout_w8_00 == 0)) {
              pauVar19 = (undefined1 (*) [16])CONCAT44(fStack_37c,fStack_380);
            }
            pauStack_14c = pauVar19;
            bStack_194 = 0;
code_r0x000108310cbc:
            func_0x00010831291c();
            if (pauVar27 != (undefined1 (*) [16])0x0) goto code_r0x000108310ce8;
          }
          else {
            func_0x00010831291c();
            if (pauVar27 != (undefined1 (*) [16])0x0) goto code_r0x000108310c40;
            if ((bStack_194 & 1) == 0) goto code_r0x000108310cbc;
            func_0x0001083129b0();
            FUN_10830fd28();
            pauVar27 = (undefined1 (*) [16])auStack_193;
code_r0x000108310ce8:
            fVar42 = fVar42 + (extraout_s0 + (extraout_s2 - extraout_s0) * 0.6666667) * fVar28;
            fVar46 = fVar46 + (extraout_s1 + (extraout_s3 - extraout_s1) * 0.6666667) * fVar51;
            auVar44._0_8_ = (undefined1 (*) [16])CONCAT44(fVar46,fVar42);
            auVar44._8_4_ =
                 fVar47 + (extraout_s2 + (extraout_s0 - extraout_s2) * 0.6666667) * fVar37;
            auVar44._12_4_ =
                 fVar48 + (extraout_s3 + (extraout_s1 - extraout_s3) * 0.6666667) * fVar40;
            *(ulong *)*pauVar27 = CONCAT44(fVar52,fVar39);
            *(undefined1 (**) [16])(*pauVar27 + 8) = auVar44._0_8_;
            *(ulong *)(pauVar27[1] + 8) = CONCAT44(fVar41,fVar38);
            *(long *)pauVar27[1] = auVar44._8_8_;
            func_0x0001083128b8();
            if ((bool)uVar18) {
              func_0x000108312908();
            }
            func_0x000108312974();
            if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
              func_0x0001083128a0();
            }
            auVar35._0_4_ = -(uint)(fVar39 == fVar42);
            auVar35._4_4_ = -(uint)(fVar52 == fVar46);
            auVar35._8_4_ = -(uint)(fVar38 == auVar44._8_4_);
            auVar35._12_4_ = -(uint)(fVar41 == auVar44._12_4_);
            auVar60 = NEON_ext(auVar35,auVar35,8,1);
            func_0x000108312a78(CONCAT17(~auVar60[7],
                                         CONCAT16(~auVar60[6],
                                                  CONCAT15(~auVar60[5],
                                                           CONCAT14(~auVar60[4],
                                                                    CONCAT13(~auVar60[3],
                                                                             CONCAT12(~auVar60[2],
                                                                                      CONCAT11(~
                                                  auVar60[1],~auVar60[0]))))))),
                                CONCAT44(fVar46,fVar42));
            auVar45._8_8_ = extraout_var_04;
            auVar45._0_8_ = extraout_d1;
            pauVar19 = extraout_var_04;
            if (extraout_w8_01 == 0) {
              NEON_ext(auVar45,auVar45,8,1);
              func_0x0001083129a0();
              pauVar19 = auVar44._0_8_;
              if (extraout_w8_02 == 0) {
                pauVar19 = (undefined1 (*) [16])CONCAT44(fVar52,fVar39);
              }
            }
            pauStack_14c = pauVar19;
            bStack_194 = 0;
          }
          auVar8._4_4_ = fVar52;
          auVar8._0_4_ = fVar39;
          auVar8._8_4_ = fVar38;
          auVar8._12_4_ = fVar41;
          auVar54 = NEON_ext(auVar8,auVar8,8,1);
          auVar4._4_4_ = fVar49;
          auVar4._0_4_ = fVar58;
          auVar4._8_4_ = fStack_370;
          auVar4._12_4_ = fStack_36c;
          auVar60 = NEON_ext(auVar4,auVar4,8,1);
          fStack_380 = auVar54._0_4_;
          fStack_37c = auVar54._4_4_;
          fStack_370 = auVar60._0_4_;
          fStack_36c = auVar60._4_4_;
          pauVar19 = pauVar27;
          pauVar27 = (undefined1 (*) [16])(ulong)(iVar22 - 2);
        }
        uVar18 = iVar22 == 2;
        if (!(bool)uVar18) {
          func_0x000108312a84();
          if ((bool)uVar18) {
            func_0x0001083129b0();
            uVar23 = FUN_10830fd28();
            pauVar19 = (undefined1 (*) [16])auStack_193;
          }
          else {
            uVar23 = func_0x00010831291c();
            if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
          }
          fVar29 = fStack_380;
          fVar55 = fStack_37c;
          func_0x000108312b2c(uVar23,CONCAT44(fStack_36c,fStack_370));
          pauVar27 = (undefined1 (*) [16])func_0x0001083129d0();
          uStack_368 = SUB84(extraout_var_02,0);
          uStack_364 = (undefined4)((ulong)extraout_var_02 >> 0x20);
          fStack_370 = SUB84(pauVar27,0);
          fStack_36c = (float)((ulong)pauVar27 >> 0x20);
          *(ulong *)*pauVar19 = CONCAT44(fVar55,fVar29);
          *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar27;
          *(undefined1 (**) [16])pauVar19[1] = extraout_var_02;
          *(undefined8 *)(pauVar19[1] + 8) = extraout_d3_02;
          func_0x0001083128b8();
          if ((bool)uVar18) {
            func_0x000108312908();
          }
          func_0x000108312974();
          pauVar43 = extraout_var_02;
          goto code_r0x0001083114a0;
        }
        fVar56 = (fVar59 + fStack_370) * 0.5;
        fVar58 = (fVar36 + fStack_36c) * 0.5;
        fVar57 = ((fStack_380 + fStack_370) * 0.5 + fVar56) * 0.5;
        fVar59 = ((fStack_37c + fStack_36c) * 0.5 + fVar58) * 0.5;
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108311404:
          func_0x000108312b74();
          pauVar27 = (undefined1 (*) [16])func_0x0001083129d0();
          uStack_388 = SUB84(extraout_var_01,0);
          uStack_384 = (undefined4)((ulong)extraout_var_01 >> 0x20);
          *(undefined8 *)*pauVar19 = extraout_d3_01;
          *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar27;
          *(undefined1 (**) [16])pauVar19[1] = extraout_var_01;
          *(ulong *)(pauVar19[1] + 8) = CONCAT44(fVar55,fVar29);
          func_0x0001083128b8();
          if ((bool)uVar18) {
            func_0x000108312908();
          }
          func_0x000108312974();
          if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
            func_0x0001083128a0();
          }
          auVar6._8_4_ = uStack_388;
          auVar6._0_8_ = pauVar27;
          auVar6._12_4_ = uStack_384;
          auVar60 = NEON_ext(auVar6,auVar6,8,1);
          func_0x000108312a64(auVar60._0_8_,CONCAT44(fVar59,fVar57));
          pauVar43 = extraout_var_01;
          if ((extraout_w8_06 == 0) &&
             (func_0x0001083129a0(), pauVar43 = pauVar27, extraout_w8_11 == 0)) {
            pauVar43 = (undefined1 (*) [16])CONCAT44(fStack_37c,fStack_380);
          }
          pauStack_14c = pauVar43;
          bStack_194 = 0;
code_r0x000108311814:
          func_0x00010831291c();
          if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
        }
        else {
          func_0x00010831291c();
          if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108311404;
          if ((bStack_194 & 1) == 0) goto code_r0x000108311814;
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
        }
        fVar29 = fVar57;
        fVar55 = fVar59;
        uVar23 = func_0x000108312b2c();
        pauVar27 = (undefined1 (*) [16])func_0x0001083129d0(uVar23,CONCAT44(fVar58,fVar56));
        *(ulong *)*pauVar19 = CONCAT44(fVar55,fVar29);
        *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar27;
        *(undefined1 (**) [16])pauVar19[1] = extraout_var_03;
        *(undefined8 *)(pauVar19[1] + 8) = extraout_d3_03;
        func_0x0001083128b8();
        if ((bool)uVar18) {
          func_0x000108312908();
        }
        func_0x000108312974();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        auVar7._8_8_ = extraout_var_03;
        auVar7._0_8_ = pauVar27;
        auVar60 = NEON_ext(auVar7,auVar7,8,1);
        func_0x000108312a64(auVar60._0_8_,uVar25);
        pauVar43 = extraout_var_03;
        if (extraout_w8_15 != 0) goto code_r0x0001083118b0;
        func_0x0001083129a0();
        if (extraout_w8_16 == 0) {
          pauStack_14c = (undefined1 (*) [16])CONCAT44(fVar59,fVar57);
          goto code_r0x0001083118d0;
        }
code_r0x0001083118c4:
        pauStack_14c = pauVar27;
      }
    }
    else {
      FUN_10835161c(pauVar27);
      pauVar19 = pauVar27;
      pauVar43 = (undefined1 (*) [16])FUN_1083514a0();
      uStack_1dc = uStack_1dc & 0xffffffff00000000;
      pauStack_200 = pauVar43;
      func_0x00010831291c();
      pauStack_208 = pauVar19;
      if (pauVar19 != (undefined1 (*) [16])0x0) {
        pauVar19 = (undefined1 (*) [16])&pauStack_208;
        FUN_1083122e8(pauVar19,&pauStack_200);
        func_0x000108312a90();
        if ((bool)uVar18) {
          func_0x000108312a54();
          pbStack_110 = extraout_x8_00;
        }
        func_0x000108312974();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
      }
      uVar26 = *(ulong *)*pauVar27;
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      func_0x000108312a84();
      if ((bool)uVar18) {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108310fdc:
        *(ulong *)*pauVar19 = uVar26;
        *(ulong *)(*pauVar19 + 8) = uVar26;
        *(undefined1 (**) [16])pauVar19[1] = pauVar43;
        *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar43;
        func_0x0001083128b8();
        if ((bool)uVar18) {
          func_0x000108312908();
        }
        func_0x000108312974();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        uVar23 = func_0x000108312b88();
        uVar31 = func_0x0001083128d4(uVar23,0xffffffffffffffff,pauVar43);
        func_0x000108312b3c(extraout_d2_00 ^ (extraout_d2_00 ^ uVar26) & uVar31);
        uVar26 = extraout_x8_06;
      }
      else {
        func_0x00010831291c();
        if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108310fdc;
        uVar26 = (ulong)bStack_194;
      }
      pauVar27 = *(undefined1 (**) [16])pauVar27[1];
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      if ((uVar26 & 1) == 0) {
        func_0x00010831291c();
        if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
      }
      else {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
      }
      *(undefined1 (**) [16])*pauVar19 = pauVar43;
      *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar43;
      *(undefined1 (**) [16])pauVar19[1] = pauVar27;
      *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar27;
      func_0x0001083128b8();
      if ((bool)uVar18) {
        func_0x000108312908();
      }
      func_0x000108312974();
code_r0x000108311094:
      fStack_36c = (float)((ulong)pauVar43 >> 0x20);
      fStack_390 = SUB84(pauVar43,0);
      if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
      func_0x0001083129a0();
      if (extraout_w8_03 == 0) {
        func_0x0001083129a0(CONCAT44(-(uint)((float)((ulong)pauVar27 >> 0x20) == fStack_36c),
                                     -(uint)(SUB84(pauVar27,0) == fStack_390)),pauVar43);
        pauVar27 = extraout_d1_00;
        if (extraout_w8_04 == 0) goto code_r0x00010831129c;
        goto code_r0x0001083117f4;
      }
      pauStack_14c = pauVar27;
    }
    break;
  case 2:
    pauVar19 = pauVar27;
    FUN_108311cf8();
    if ((int)pauVar19 != 0) {
      fStack_f8 = *(float *)auStack_288[uVar24];
      pbStack_110 = *(byte **)*pauVar27;
      pbStack_108 = *(byte **)(*pauVar27 + 8);
      pfStack_100 = *(float **)pauVar27[1];
      bVar16 = false;
      uVar18 = true;
      bVar17 = false;
      if (!NAN(fStack_f8 - fStack_f8)) {
        bVar16 = false;
        uVar18 = false;
        bVar17 = true;
        if (!NAN(fStack_f8)) {
          bVar16 = fStack_f8 < 0.0;
          uVar18 = fStack_f8 == 0.0;
          bVar17 = false;
        }
      }
      if ((bool)uVar18 || bVar16 != bVar17) {
        fStack_f8 = 1.0;
      }
      FUN_108353250(&pbStack_110);
      pauVar20 = (undefined1 (*) [16])&pbStack_110;
      pauVar43 = (undefined1 (*) [16])FUN_108352d70();
      uStack_1dc = uStack_1dc & 0xffffffff00000000;
      pauStack_208 = pauVar43;
      func_0x00010831291c();
      pauVar19 = (undefined1 (*) [16])0x0;
      pauStack_210 = pauVar20;
      if (pauVar20 != (undefined1 (*) [16])0x0) {
        pauVar19 = (undefined1 (*) [16])&pauStack_210;
        FUN_1083122e8(pauVar19,&pauStack_208);
        func_0x00010831294c();
        if ((bool)uVar18) {
          func_0x000108312a54();
          pauStack_200 = extraout_x8;
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
      }
      uVar26 = *(ulong *)*pauVar27;
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      func_0x000108312a84();
      if ((bool)uVar18) {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108310f78:
        *(ulong *)*pauVar19 = uVar26;
        *(ulong *)(*pauVar19 + 8) = uVar26;
        *(undefined1 (**) [16])pauVar19[1] = pauVar43;
        *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar43;
        func_0x0001083128ec();
        if ((bool)uVar18) {
          func_0x000108312928();
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        uVar23 = func_0x000108312b88();
        uVar31 = func_0x0001083128d4(uVar23,0xffffffffffffffff,pauVar43);
        func_0x000108312b3c(extraout_d2 ^ (extraout_d2 ^ uVar26) & uVar31);
        uVar26 = extraout_x8_05;
      }
      else {
        func_0x00010831291c();
        if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108310f78;
        uVar26 = (ulong)bStack_194;
      }
      pauVar27 = *(undefined1 (**) [16])pauVar27[1];
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      if ((uVar26 & 1) == 0) {
        func_0x00010831291c();
        if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
      }
      else {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
      }
      *(undefined1 (**) [16])*pauVar19 = pauVar43;
      *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar43;
      *(undefined1 (**) [16])pauVar19[1] = pauVar27;
      *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar27;
      func_0x0001083128ec();
      if ((bool)uVar18) {
        func_0x000108312928();
      }
      func_0x000108312980();
      goto code_r0x000108311094;
    }
    fStack_394 = *(float *)auStack_288[uVar24];
    fStack_370 = *(float *)*pauVar27;
    fStack_36c = *(float *)(*pauVar27 + 4);
    pauVar43 = *(undefined1 (**) [16])*pauVar27;
    uVar23 = *(undefined8 *)(*pauVar27 + 8);
    uVar25 = *(undefined8 *)pauVar27[1];
    fVar29 = fStack_394 * -2.0;
    fVar55 = 0.0;
    uVar18 = fStack_394 == 1.0;
    pauVar19 = (undefined1 (*) [16])auStack_1f8;
    func_0x000108312314();
    if ((int)pauVar19 != 0) {
      uVar32 = NEON_fmov(0x3f800000,4);
      fStack_3a0 = (float)uVar23 * fStack_394;
      fStack_39c = (float)((ulong)uVar23 >> 0x20) * fStack_394;
      fVar57 = (float)uVar32;
      fStack_398 = fVar57 * fStack_394;
      fVar58 = (float)((ulong)uVar32 >> 0x20);
      fStack_394 = fVar58 * fStack_394;
      pauVar27 = pauVar19;
      fVar56 = 1.0;
      fStack_380 = fVar57;
      fStack_37c = fVar58;
      while( true ) {
        iVar22 = (int)pauVar27;
        uVar18 = iVar22 == 2;
        if (iVar22 < 2) break;
        fVar59 = 1.0 / (float)((ulong)pauVar27 & 0xffffffff);
        fVar49 = fStack_370 + (fStack_3a0 - fStack_370) * fVar59;
        fVar51 = fStack_36c + (fStack_39c - fStack_36c) * fVar59;
        fStack_380 = fStack_380 + (fStack_398 - fStack_380) * fVar59;
        fVar52 = fStack_37c + (fStack_394 - fStack_37c) * fVar59;
        fStack_3a0 = fStack_3a0 + ((float)uVar25 - fStack_3a0) * fVar59;
        fStack_39c = fStack_39c + ((float)((ulong)uVar25 >> 0x20) - fStack_39c) * fVar59;
        fStack_398 = fStack_398 + (fVar57 - fStack_398) * fVar59;
        fStack_394 = fStack_394 + (fVar58 - fStack_394) * fVar59;
        fVar28 = fVar49 + (fStack_3a0 - fVar49) * fVar59;
        fVar36 = fVar51 + (fStack_39c - fVar51) * fVar59;
        fVar39 = fVar52 + (fStack_394 - fVar52) * fVar59;
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108310a84:
          uVar31 = CONCAT44(fStack_36c / fStack_37c,fStack_370 / fStack_37c);
          uVar26 = CONCAT44(fVar51 / fVar52,fVar49 / fVar52);
          *(ulong *)*pauVar19 = uVar31;
          *(ulong *)(*pauVar19 + 8) = uVar26;
          *(ulong *)pauVar19[1] = CONCAT44(fVar36 / fVar39,fVar28 / fVar39);
          *(float *)(pauVar19[1] + 8) = fVar52 / SQRT(fVar56 * fVar39);
          *(undefined4 *)(pauVar19[1] + 0xc) = 0x7f800000;
          func_0x0001083128b8();
          fVar29 = fVar49;
          fVar55 = fVar51;
          if ((bool)uVar18) {
            func_0x000108312908();
            fVar29 = fVar49;
            fVar55 = fVar51;
          }
          func_0x000108312974();
          if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
            **(undefined4 **)*pauVar19 = 0x3f800000;
            func_0x00010831293c();
          }
          uVar30 = func_0x0001083128d4();
          func_0x000108312b3c(uVar26 ^ (uVar26 ^ uVar31) & uVar30);
        }
        else {
          func_0x00010831291c();
          if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108310a84;
        }
        auVar5._4_4_ = fVar36;
        auVar5._0_4_ = fVar28;
        auVar5._8_4_ = fStack_380 + (fStack_398 - fStack_380) * fVar59;
        auVar5._12_4_ = fVar39;
        pauVar27 = (undefined1 (*) [16])(ulong)(iVar22 - 1);
        auVar60 = NEON_ext(auVar5,auVar5,8,1);
        fStack_380 = auVar60._0_4_;
        fStack_37c = auVar60._4_4_;
        fVar56 = fVar39;
        fStack_370 = fVar28;
        fStack_36c = fVar36;
      }
      func_0x000108312a84();
      if ((bool)uVar18) {
        func_0x0001083129b0();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
      }
      else {
        func_0x00010831291c();
        if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
      }
      uVar31 = CONCAT44(fStack_36c / fStack_37c,fStack_370 / fStack_37c);
      uVar26 = CONCAT44(fStack_39c / fStack_394,fStack_3a0 / fStack_394);
      *(ulong *)*pauVar19 = uVar31;
      *(ulong *)(*pauVar19 + 8) = uVar26;
      *(undefined8 *)pauVar19[1] = uVar25;
      *(float *)(pauVar19[1] + 8) = fStack_394 / SQRT(fVar56);
      *(undefined4 *)(pauVar19[1] + 0xc) = 0x7f800000;
      func_0x0001083128b8();
      if ((bool)uVar18) {
        func_0x000108312908();
      }
      func_0x000108312974();
      if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
        **(undefined4 **)*pauVar19 = 0x3f800000;
        func_0x00010831293c();
      }
      uVar30 = func_0x0001083128d4();
      pauStack_14c = (undefined1 (*) [16])(uVar26 ^ (uVar26 ^ uVar31) & uVar30);
      goto code_r0x0001083111f4;
    }
    func_0x000108312a84();
    if ((bool)uVar18) {
      func_0x0001083129b0();
      FUN_10830fd28();
      pauVar19 = (undefined1 (*) [16])auStack_193;
    }
    else {
      func_0x00010831291c();
      if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
    }
    *(float *)*pauVar19 = fStack_370;
    *(float *)(*pauVar19 + 4) = fStack_36c;
    *(undefined8 *)(*pauVar19 + 8) = uVar23;
    *(undefined8 *)pauVar19[1] = uVar25;
    *(float *)(pauVar19[1] + 8) = fStack_394;
    *(undefined4 *)(pauVar19[1] + 0xc) = 0x7f800000;
    func_0x0001083128b8();
    if ((bool)uVar18) {
      func_0x000108312908();
    }
    func_0x000108312974();
    if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
      **(undefined4 **)*pauVar19 = 0x3f800000;
      func_0x00010831293c();
    }
    func_0x00010831298c(uVar25,uVar23);
    pauVar27 = extraout_d1_01;
    if (extraout_w8_05 != 0) goto code_r0x0001083117f4;
code_r0x00010831129c:
    pauStack_14c = pauVar43;
    break;
  case 3:
    pauVar19 = pauVar27;
    FUN_108322f40(pauVar27,auStack_118,&bStack_349);
    uVar18 = (int)pauVar19 == 1;
    if ((bool)uVar18) {
      func_0x000108351a70(pauVar27,&pbStack_110);
      if ((bStack_349 & 1) == 0) {
        pfVar50 = (float *)CONCAT44(uStack_f4,fStack_f8);
        pauVar19 = pauVar27;
      }
      else {
        pauStack_208 = (undefined1 (*) [16])CONCAT44(uStack_f4,fStack_f8);
        uStack_1dc = uStack_1dc & 0xffffffff00000000;
        func_0x00010831291c();
        pauVar19 = (undefined1 (*) [16])0x0;
        pauStack_210 = pauVar27;
        if (pauVar27 != (undefined1 (*) [16])0x0) {
          pauVar19 = (undefined1 (*) [16])&pauStack_210;
          FUN_1083122e8(pauVar19,&pauStack_208);
          func_0x00010831294c();
          if ((bool)uVar18) {
            func_0x000108312a54();
            pauStack_200 = extraout_x8_02;
          }
          func_0x000108312980();
          if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
            func_0x0001083128a0();
          }
        }
        pfVar50 = (float *)CONCAT44(uStack_f4,fStack_f8);
        pfStack_100 = pfVar50;
        pfStack_f0 = pfVar50;
      }
      pfVar13 = pfStack_100;
      pbVar12 = pbStack_108;
      pbVar11 = pbStack_110;
      fStack_390 = SUB84(pbStack_108,0);
      fStack_38c = (float)((ulong)pbStack_108 >> 0x20);
      uVar23 = FUN_108312a1c();
      func_0x000108312848(uVar23,pfVar13,pbVar11);
      if ((int)pauVar19 == 0) {
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
        }
        else {
          func_0x00010831291c();
          if (pauVar19 == (undefined1 (*) [16])0x0) goto code_r0x000108311564;
        }
        *(byte **)*pauVar19 = pbVar11;
        *(byte **)(*pauVar19 + 8) = pbVar12;
        *(float **)pauVar19[1] = pfVar13;
        *(float **)(pauVar19[1] + 8) = pfVar50;
        func_0x0001083128ec();
        if ((bool)uVar18) {
          func_0x000108312928();
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        auVar60 = func_0x00010831298c(pfVar50,pfVar13);
        pauVar27 = auVar60._8_8_;
        if (extraout_w8_09 == 0) {
          uVar26 = func_0x0001083128d4(auVar60._0_8_,
                                       CONCAT44(-(uint)(auVar60._12_4_ == fStack_38c),
                                                -(uint)(auVar60._8_4_ == fStack_390)),pbVar12);
          pauVar27 = (undefined1 (*) [16])
                     ((ulong)pbVar11 ^ ((ulong)pbVar11 ^ extraout_d2_01) & ~uVar26);
        }
        bStack_194 = 0;
        pauStack_14c = pauVar27;
      }
      else {
        func_0x0001083129e4();
        func_0x000108312ae8();
      }
code_r0x000108311564:
      uVar25 = uStack_e8;
      pfVar50 = pfStack_f0;
      uVar14 = uStack_f4;
      fVar56 = fStack_f8;
      auVar54._8_8_ = pauStack_e0;
      auVar54._0_8_ = uStack_e8;
      uVar23 = CONCAT44(uStack_f4,fStack_f8);
      auVar60._8_8_ = pfStack_f0;
      auVar60._0_8_ = uVar23;
      fStack_380 = fStack_f8;
      fStack_37c = (float)uStack_f4;
      uStack_368 = SUB84(pauStack_e0,0);
      uStack_364 = (undefined4)((ulong)pauStack_e0 >> 0x20);
      fStack_370 = (float)uStack_e8;
      fStack_36c = (float)((ulong)uStack_e8 >> 0x20);
      auVar60 = NEON_ext(auVar60,auVar54,8,1);
      uVar32 = FUN_108312a1c(auVar60._0_8_);
      func_0x000108312848(uVar32,uVar25,uVar23);
      if ((int)pauVar19 != 0) goto code_r0x000108311774;
      func_0x000108312a84();
      if ((bool)uVar18) {
        func_0x0001083129b0();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
      }
      else {
        func_0x00010831291c();
        if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
      }
      auVar33._8_8_ = pfVar50;
      auVar33._0_8_ = CONCAT44(uVar14,fVar56);
      auVar53._8_4_ = uStack_368;
      auVar53._0_8_ = uVar25;
      auVar53._12_4_ = uStack_364;
      auVar60 = NEON_ext(auVar33,auVar33,8,1);
      auVar54 = NEON_ext(auVar53,auVar53,8,1);
      *(ulong *)*pauVar19 = CONCAT44(uVar14,fVar56);
      *(long *)(*pauVar19 + 8) = auVar60._0_8_;
      fStack_3a0 = auVar60._0_4_;
      fStack_39c = auVar60._4_4_;
      fStack_390 = auVar54._0_4_;
      fStack_38c = auVar54._4_4_;
      *(undefined8 *)pauVar19[1] = uVar25;
      *(long *)(pauVar19[1] + 8) = auVar54._0_8_;
      func_0x0001083128ec();
      if ((bool)uVar18) {
        func_0x000108312928();
      }
      func_0x000108312980();
code_r0x0001083115e8:
      if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
      auVar60 = func_0x00010831298c(CONCAT44(fStack_38c,fStack_390),CONCAT44(fStack_36c,fStack_370))
      ;
      pauVar27 = auVar60._8_8_;
      if (extraout_w8_10 != 0) goto code_r0x0001083117f4;
      uVar31 = func_0x0001083128d4(auVar60._0_8_,
                                   CONCAT44(-(uint)(auVar60._12_4_ == fStack_39c),
                                            -(uint)(auVar60._8_4_ == fStack_3a0)),
                                   CONCAT44(fStack_39c,fStack_3a0));
      pauVar43 = (undefined1 (*) [16])CONCAT44(fStack_37c,fStack_380);
      uVar26 = extraout_d2_02;
code_r0x000108311614:
      pauVar27 = (undefined1 (*) [16])((ulong)pauVar43 ^ ((ulong)pauVar43 ^ uVar26) & ~uVar31);
    }
    else {
      if ((int)pauVar19 == 0) {
        auVar54 = *pauVar27;
        auVar60 = pauVar27[1];
        fStack_380 = auVar54._0_4_;
        fStack_37c = auVar54._4_4_;
        fStack_370 = auVar60._0_4_;
        fStack_36c = auVar60._4_4_;
        auVar33 = NEON_ext(auVar54,auVar60,8,1);
        uVar23 = FUN_108312a1c(auVar33._0_8_);
        func_0x000108312848(uVar23,auVar60._0_8_,auVar54._0_8_);
        if ((int)pauVar19 != 0) {
code_r0x000108311774:
          func_0x000108312ae8();
          fVar29 = fStack_370;
          fVar55 = fStack_36c;
          goto LAB_1083104bc;
        }
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
        }
        else {
          func_0x00010831291c();
          if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
        }
        auVar33 = NEON_ext(auVar54,auVar54,8,1);
        auVar53 = NEON_ext(auVar60,auVar60,8,1);
        *(long *)*pauVar19 = auVar54._0_8_;
        *(long *)(*pauVar19 + 8) = auVar33._0_8_;
        fStack_3a0 = auVar33._0_4_;
        fStack_39c = auVar33._4_4_;
        fStack_390 = auVar53._0_4_;
        fStack_38c = auVar53._4_4_;
        *(long *)pauVar19[1] = auVar60._0_8_;
        *(long *)(pauVar19[1] + 8) = auVar53._0_8_;
        func_0x0001083128b8();
        if ((bool)uVar18) {
          func_0x000108312908();
        }
        func_0x000108312974();
        goto code_r0x0001083115e8;
      }
      FUN_108351b00(pauVar27,&pbStack_110);
      uVar14 = uStack_f4;
      fVar56 = fStack_f8;
      pfVar50 = pfStack_100;
      pbVar12 = pbStack_108;
      pbVar11 = pbStack_110;
      uVar18 = bStack_349 == 1;
      if (!(bool)uVar18) {
        uVar23 = FUN_108312a1c();
        func_0x000108312848(uVar23,pfVar50,pbVar11);
        if ((int)pauVar27 == 0) {
          func_0x000108312a84();
          if ((bool)uVar18) {
            func_0x0001083129b0();
            FUN_10830fd28();
            pauVar27 = (undefined1 (*) [16])auStack_193;
          }
          else {
            func_0x00010831291c();
            pauVar19 = pauVar27;
            if (pauVar27 == (undefined1 (*) [16])0x0) goto code_r0x00010831168c;
          }
          *(byte **)*pauVar27 = pbVar11;
          *(byte **)(*pauVar27 + 8) = pbVar12;
          *(float **)pauVar27[1] = pfVar50;
          *(ulong *)(pauVar27[1] + 8) = CONCAT44(uVar14,fVar56);
          func_0x0001083128ec();
          if ((bool)uVar18) {
            func_0x000108312928();
          }
          func_0x000108312980();
          if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
            func_0x0001083128a0();
          }
          auVar60 = func_0x00010831298c(CONCAT44(uVar14,fVar56),pfVar50);
          pauVar43 = auVar60._8_8_;
          if (extraout_w8_12 == 0) {
            uVar26 = func_0x0001083128d4(auVar60._0_8_,
                                         CONCAT44(-(uint)(auVar60._12_4_ ==
                                                         (float)((ulong)pbVar12 >> 0x20)),
                                                  -(uint)(auVar60._8_4_ == SUB84(pbVar12,0))),
                                         pbVar12);
            pauVar43 = (undefined1 (*) [16])
                       ((ulong)pbVar11 ^ ((ulong)pbVar11 ^ extraout_d2_03) & ~uVar26);
          }
          bStack_194 = 0;
          pauVar19 = pauVar27;
          pauStack_14c = pauVar43;
        }
        else {
          func_0x0001083129e4();
          func_0x000108312ae8();
          pauVar19 = pauVar27;
        }
code_r0x00010831168c:
        pauVar27 = pauStack_e0;
        uVar25 = uStack_e8;
        pfVar50 = pfStack_f0;
        uVar14 = uStack_f4;
        fVar56 = fStack_f8;
        uVar23 = CONCAT44(uStack_f4,fStack_f8);
        uVar32 = FUN_108312a1c();
        func_0x000108312848(uVar32,uVar25,uVar23);
        if ((int)pauVar19 == 0) {
          func_0x000108312a84();
          if ((bool)uVar18) {
            func_0x0001083129b0();
            FUN_10830fd28();
            pauVar19 = (undefined1 (*) [16])auStack_193;
          }
          else {
            func_0x00010831291c();
            if (pauVar19 == (undefined1 (*) [16])0x0) goto code_r0x00010831173c;
          }
          *(ulong *)*pauVar19 = CONCAT44(uVar14,fVar56);
          *(float **)(*pauVar19 + 8) = pfVar50;
          *(undefined8 *)pauVar19[1] = uVar25;
          *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar27;
          func_0x0001083128ec();
          if ((bool)uVar18) {
            func_0x000108312928();
          }
          func_0x000108312980();
          if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
            func_0x0001083128a0();
          }
          auVar60 = func_0x00010831298c(pauVar27,uVar25);
          pauVar27 = auVar60._8_8_;
          if (extraout_w8_13 == 0) {
            uVar31 = func_0x0001083128d4(auVar60._0_8_,
                                         CONCAT44(-(uint)(auVar60._12_4_ ==
                                                         (float)((ulong)pfVar50 >> 0x20)),
                                                  -(uint)(auVar60._8_4_ == SUB84(pfVar50,0))),
                                         pfVar50);
            uVar26 = CONCAT44(uVar14,fVar56);
            pauVar27 = (undefined1 (*) [16])(uVar26 ^ (uVar26 ^ extraout_d2_04) & ~uVar31);
          }
          bStack_194 = 0;
          pauStack_14c = pauVar27;
        }
        else {
          func_0x0001083129e4();
          func_0x000108312ae8();
        }
code_r0x00010831173c:
        uVar26 = uStack_c8;
        uVar25 = uStack_d0;
        uVar23 = uStack_d8;
        pauVar43 = pauStack_e0;
        fStack_3c0 = (float)uStack_d8;
        fStack_3bc = (float)((ulong)uStack_d8 >> 0x20);
        fStack_390 = (float)uStack_d0;
        fStack_38c = (float)((ulong)uStack_d0 >> 0x20);
        uVar32 = FUN_108312a1c(uStack_d8);
        func_0x000108312848(uVar32,uVar25,pauVar43);
        fStack_370 = fStack_390;
        fStack_36c = fStack_38c;
        if ((int)pauVar19 != 0) goto code_r0x000108311774;
        func_0x000108312a84();
        if ((bool)uVar18) {
          func_0x0001083129b0();
          FUN_10830fd28();
          pauVar19 = (undefined1 (*) [16])auStack_193;
        }
        else {
          func_0x00010831291c();
          if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
        }
        *(undefined1 (**) [16])*pauVar19 = pauVar43;
        *(undefined8 *)(*pauVar19 + 8) = uVar23;
        *(undefined8 *)pauVar19[1] = uVar25;
        *(ulong *)(pauVar19[1] + 8) = uVar26;
        func_0x0001083128ec();
        if ((bool)uVar18) {
          func_0x000108312928();
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        auVar60 = func_0x00010831298c(uVar26,uVar25);
        pauVar27 = auVar60._8_8_;
        if (extraout_w8_14 != 0) goto code_r0x0001083117f4;
        uVar31 = func_0x0001083128d4(auVar60._0_8_,
                                     CONCAT44(-(uint)(auVar60._12_4_ == fStack_3bc),
                                              -(uint)(auVar60._8_4_ == fStack_3c0)),uVar23);
        uVar26 = extraout_d2_05;
        goto code_r0x000108311614;
      }
      pauStack_208 = (undefined1 (*) [16])CONCAT44(uStack_f4,fStack_f8);
      uStack_1dc = uStack_1dc & 0xffffffff00000000;
      func_0x00010831291c();
      pauVar43 = (undefined1 (*) [16])0x0;
      pauStack_210 = pauVar27;
      if (pauVar27 != (undefined1 (*) [16])0x0) {
        pauVar43 = (undefined1 (*) [16])&pauStack_210;
        FUN_1083122e8(pauVar43,&pauStack_208);
        func_0x00010831294c();
        if ((bool)uVar18) {
          func_0x000108312a54();
          pauStack_200 = extraout_x8_03;
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
      }
      pauStack_208 = pauStack_e0;
      uStack_1dc = uStack_1dc & 0xffffffff00000000;
      func_0x00010831291c();
      pauVar19 = (undefined1 (*) [16])0x0;
      pauStack_210 = pauVar43;
      if (pauVar43 != (undefined1 (*) [16])0x0) {
        pauVar19 = (undefined1 (*) [16])&pauStack_210;
        FUN_1083122e8(pauVar19,&pauStack_208);
        func_0x00010831294c();
        if ((bool)uVar18) {
          func_0x000108312a54();
          pauStack_200 = extraout_x8_04;
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
      }
      pbVar11 = pbStack_110;
      uVar26 = CONCAT44(uStack_f4,fStack_f8);
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      func_0x000108312a84();
      if ((bool)uVar18) {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108311300:
        *(byte **)*pauVar19 = pbVar11;
        *(byte **)(*pauVar19 + 8) = pbVar11;
        *(ulong *)pauVar19[1] = uVar26;
        *(ulong *)(pauVar19[1] + 8) = uVar26;
        func_0x0001083128ec();
        if ((bool)uVar18) {
          func_0x000108312928();
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        func_0x000108312b88();
        uVar31 = func_0x0001083128d4();
        func_0x000108312b3c(uVar26 ^ (uVar26 ^ (ulong)pbVar11) & uVar31);
        uVar26 = extraout_x8_07;
      }
      else {
        func_0x00010831291c();
        if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108311300;
        uVar26 = (ulong)bStack_194;
      }
      pauVar27 = pauStack_e0;
      uVar31 = CONCAT44(uStack_f4,fStack_f8);
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      if ((uVar26 & 1) == 0) {
        func_0x00010831291c();
        if (pauVar19 != (undefined1 (*) [16])0x0) goto code_r0x000108311360;
        uVar26 = (ulong)bStack_194;
      }
      else {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
code_r0x000108311360:
        *(ulong *)*pauVar19 = uVar31;
        *(ulong *)(*pauVar19 + 8) = uVar31;
        *(undefined1 (**) [16])pauVar19[1] = pauVar27;
        *(undefined1 (**) [16])(pauVar19[1] + 8) = pauVar27;
        func_0x0001083128ec();
        if ((bool)uVar18) {
          func_0x000108312928();
        }
        func_0x000108312980();
        if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
          func_0x0001083128a0();
        }
        func_0x000108312b88();
        uVar26 = func_0x0001083128d4();
        func_0x000108312b3c((ulong)pauVar27 ^ ((ulong)pauVar27 ^ uVar31) & uVar26);
        uVar26 = extraout_x8_08;
      }
      uVar31 = uStack_c8;
      pauVar27 = pauStack_e0;
      uStack_1dc = CONCAT44(uStack_1dc._4_4_,0x3f800000);
      if ((uVar26 & 1) == 0) {
        func_0x00010831291c();
        if (pauVar19 == (undefined1 (*) [16])0x0) goto LAB_1083104bc;
      }
      else {
        func_0x000108312acc();
        FUN_10830fd28();
        pauVar19 = (undefined1 (*) [16])auStack_193;
      }
      *(undefined1 (**) [16])*pauVar19 = pauVar27;
      *(undefined1 (**) [16])(*pauVar19 + 8) = pauVar27;
      *(ulong *)pauVar19[1] = uVar31;
      *(ulong *)(pauVar19[1] + 8) = uVar31;
      func_0x0001083128ec();
      if ((bool)uVar18) {
        func_0x000108312928();
      }
      func_0x000108312980();
      if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
      uVar26 = func_0x0001083128d4();
      pauVar27 = (undefined1 (*) [16])(uVar31 ^ (uVar31 ^ (ulong)pauVar27) & uVar26);
    }
code_r0x0001083117f4:
    pauStack_14c = pauVar27;
    break;
  case 4:
    pauStack_200 = *(undefined1 (**) [16])*pauVar27;
    uStack_1dc = (ulong)uStack_1dc._4_4_ << 0x20;
    func_0x00010831291c();
    pauStack_208 = pauVar19;
    if (pauVar19 != (undefined1 (*) [16])0x0) {
      pauVar19 = (undefined1 (*) [16])&pauStack_208;
      FUN_1083122e8(pauVar19,&pauStack_200);
      func_0x000108312a90();
      if ((bool)uVar18) {
        func_0x000108312a54();
        pbStack_110 = extraout_x8_01;
      }
      func_0x000108312974();
      if (((byte)auStack_1f8[0] >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
    }
  case 5:
    pauStack_14c = *(undefined1 (**) [16])*pauVar27;
code_r0x0001083111f4:
    break;
  case 6:
    pauVar19 = (undefined1 (*) [16])auStack_1f8;
    FUN_108311c7c();
  default:
    goto LAB_1083104bc;
  }
  bStack_194 = 0;
  goto LAB_1083104bc;
LAB_1083118d8:
  param_4 = *(long *)(param_4 + 0x30);
  uVar23 = uStack_358;
  goto joined_r0x000108310414;
}



/* Entry: 108311af4; end: 108311b3f;  */

void FUN_108311af4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 108311b40; end: 108311c7b;  */

void FUN_108311b40(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if (((*(int *)(param_1 + 0x20) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0
      || (*(long *)(param_1 + 0x30) != 0)))) {
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    puVar2 = puVar7 + (long)*(int *)(param_1 + 0x20) * 2;
    for (; puVar7 != puVar2; puVar7 = puVar7 + 2) {
      uStack_48 = 0;
      plVar6 = (long *)*puVar7;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_58 = 0;
      if (lVar5 != 0) {
        lStack_58 = lVar5 + 0xb0;
      }
      plStack_50 = plVar6;
      FUN_1082a16e0(param_2,&uStack_48,&plStack_50,&lStack_58,0);
      FUN_1082647e4(&lStack_58);
      FUN_1082647e4(&plStack_50);
      FUN_1082647e4(&uStack_48);
      FUN_1082f43ac(param_2,*(undefined4 *)(puVar7 + 1),*(undefined4 *)((long)puVar7 + 0xc),
                    *(undefined4 *)(param_1 + 0x28),0);
    }
  }
  return;
}



/* Entry: 108311c7c; end: 108311cf7;  */

void FUN_108311c7c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (0.0 <= (float)param_1[0x18]) {
    param_1[7] = param_1[0x18];
    *(undefined8 *)((long)param_1 + 0x85) = *(undefined8 *)(param_1 + 0x2b);
    piVar2 = param_1 + 10;
    FUN_10830fbe4();
    if (piVar2 != (int *)0x0) {
      iVar1 = *param_1;
      FUN_10830fd28(iVar1);
      _memcpy(piVar2,(long)param_1 + 0x65,(long)iVar1);
    }
  }
  param_1[0x18] = -0x40800000;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



/* Entry: 108311cf8; end: 108311d37;  */

bool FUN_108311cf8(float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = param_1[2] - *param_1;
  fVar2 = param_1[4] - param_1[2];
  fVar5 = param_1[3] - param_1[1];
  fVar3 = param_1[5] - param_1[3];
  fVar6 = -(fVar2 * fVar5) + fVar3 * fVar4;
  bVar1 = false;
  if ((fVar5 * fVar3 + fVar2 * fVar4 < 0.0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 == 0.0;
  }
  return bVar1;
}



/* Entry: 108311d38; end: 108311deb;  */

void FUN_108311d38(float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.5;
  if (param_1 != 0.0) {
    fVar3 = -0.25 / (param_1 * param_3) + 1.0;
  }
  fVar2 = -1.0;
  if (-1.0 <= fVar3) {
    fVar2 = fVar3;
  }
  _acosf();
  fVar2 = 0.5 / fVar2;
  *(float *)(param_4 + 4) = fVar2;
  iVar1 = 4;
  if (param_2 <= 0.0) {
    iVar1 = 3;
  }
  if ((param_2 < 0.0) && (0.0 < fVar2)) {
    fVar3 = (float)NEON_fminnm((int)(fVar2 * 3.1415927),0x4effffff);
    if (fVar3 <= -2.1474835e+09) {
      fVar3 = -2.1474835e+09;
    }
    iVar1 = iVar1 + (int)fVar3 + -1;
  }
  *(int *)(param_4 + 8) = iVar1;
  return;
}



/* Entry: 108311dec; end: 108311e23;  */

void FUN_108311dec(float *param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 4) * 0.5;
  *param_1 = fVar1;
  FUN_10830d9f0(param_2);
  param_1[1] = fVar1;
  return;
}



/* Entry: 108311e24; end: 1083122e7;  */

undefined8 FUN_108311e24(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  short sVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  iVar9 = *(int *)((long)param_1 + 0x104);
  if (iVar9 == 0) {
    lVar11 = param_1[0xb];
    if (lVar11 != 0) {
      uVar8 = param_1[1];
      sVar5 = *(short *)(uVar8 + 0xc);
      if (sVar5 != 0) {
        if (sVar5 == 2) {
          FUN_10828782c();
          if ((uVar8 & 1) == 0) {
            fVar15 = *(float *)(param_1[1] + 4) * 0.5;
            fVar17 = 0.0;
          }
          else {
            pfVar10 = (float *)*param_1;
            fVar17 = -(pfVar10[3] * pfVar10[1]) + pfVar10[4] * *pfVar10;
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
              fVar15 = 1.0;
            }
            else {
              fVar17 = 0.5 / fVar17;
              fVar15 = pfVar10[4] * fVar17;
              fVar17 = fVar17 * -pfVar10[3];
            }
          }
          fVar14 = *(float *)param_1[0xb];
          fVar20 = ((float *)param_1[0xb])[1];
          plVar1 = param_1 + 0x23;
          *(float *)(param_1 + 0x23) = fVar14 - fVar15;
          *(float *)((long)param_1 + 0x11c) = fVar20 - fVar17;
          *(float *)(param_1 + 0x24) = fVar15 + fVar14;
          *(float *)((long)param_1 + 0x124) = fVar17 + fVar20;
          iVar9 = *(int *)((long)param_1 + 0x104);
          uVar2 = iVar9 + (int)param_1[0x20];
          uVar3 = uVar2 & 7;
          *(undefined4 *)((long)param_1 + (ulong)uVar3 * 4 + 0x60) = 1;
          param_1[(ulong)uVar3 + 0x10] = (long)plVar1;
          param_1[(ulong)uVar3 + 0x18] = 0;
          uVar2 = uVar2 + 1 & 7;
          *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 6;
          param_1[(ulong)uVar2 + 0x10] = (long)plVar1;
          param_1[(ulong)uVar2 + 0x18] = 0;
          iVar9 = iVar9 + 2;
          *(undefined4 *)(param_1 + 8) = 1;
          param_1[9] = (long)plVar1;
          param_1[10] = 0;
        }
        else {
          iVar9 = 0;
          if (sVar5 == 1) {
            uVar8 = (ulong)*(uint *)(param_1 + 0x20) & 7;
            *(undefined4 *)((long)param_1 + uVar8 * 4 + 0x60) = 5;
            param_1[uVar8 + 0x10] = lVar11;
            param_1[uVar8 + 0x18] = 0;
            *(undefined4 *)(param_1 + 8) = 5;
            param_1[9] = lVar11;
            param_1[10] = 0;
            iVar9 = 1;
          }
        }
        goto LAB_108312274;
      }
    }
    return 0;
  }
  uVar8 = param_1[1];
  sVar5 = *(short *)(uVar8 + 0xc);
  if (sVar5 != 2) {
    if (sVar5 == 1) {
      lVar11 = param_1[0x20];
      uVar2 = (int)lVar11 + iVar9;
      uVar3 = uVar2 - 1 & 7;
      bVar4 = (&UNK_10df18dec)[*(uint *)((long)param_1 + (ulong)uVar3 * 4 + 0x60)];
      lVar12 = param_1[(ulong)uVar3 + 0x10];
      uVar2 = uVar2 & 7;
      *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 5;
      param_1[(ulong)uVar2 + 0x10] = lVar12 + (ulong)bVar4 * 8 + -8;
      param_1[(ulong)uVar2 + 0x18] = 0;
      *(int *)((long)param_1 + 0x104) = iVar9 + 1;
      uVar2 = (int)lVar11 + iVar9 + 1 & 7;
      *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 5;
      lVar11 = param_1[10];
      param_1[(ulong)uVar2 + 0x10] = param_1[9];
      param_1[(ulong)uVar2 + 0x18] = lVar11;
      iVar9 = iVar9 + 2;
    }
    else if (sVar5 == 0) {
      lVar11 = param_1[9];
      lVar12 = param_1[10];
      uVar2 = (int)param_1[0x20] + iVar9 & 7;
      *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 6;
      param_1[(ulong)uVar2 + 0x10] = lVar11;
      param_1[(ulong)uVar2 + 0x18] = lVar12;
      iVar9 = iVar9 + 1;
    }
    goto LAB_108312274;
  }
  uVar2 = (iVar9 + (int)param_1[0x20]) - 1U & 7;
  puVar13 = (undefined8 *)param_1[(ulong)uVar2 + 0x10];
  uVar2 = *(uint *)((long)param_1 + (ulong)uVar2 * 4 + 0x60);
  if (uVar2 - 2 < 2) {
LAB_108312010:
    uVar16 = puVar13[1];
    fVar15 = (float)puVar13[2] - (float)uVar16;
    fVar17 = (float)((ulong)puVar13[2] >> 0x20) - (float)((ulong)uVar16 >> 0x20);
    uVar19 = CONCAT44(fVar17,fVar15);
    uStack_58 = uVar19;
    if ((fVar15 == 0.0) && (fVar17 == 0.0)) {
LAB_108312034:
      uVar19 = *puVar13;
      fVar17 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      uVar16 = CONCAT44(fVar17,(float)uVar16 - (float)uVar19);
      uStack_58 = uVar16;
    }
  }
  else {
    if (uVar2 != 4) {
      if (uVar2 != 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1083122e8);
        (*pcVar7)();
      }
      uVar16 = puVar13[1];
      goto LAB_108312034;
    }
    uVar19 = puVar13[2];
    fVar15 = (float)puVar13[3] - (float)uVar19;
    fVar17 = (float)((ulong)puVar13[3] >> 0x20) - (float)((ulong)uVar19 >> 0x20);
    uVar16 = CONCAT44(fVar17,fVar15);
    uStack_58 = uVar16;
    if ((fVar15 == 0.0) && (fVar17 == 0.0)) goto LAB_108312010;
  }
  uVar6 = uStack_58;
  fVar15 = (float)uVar16;
  uVar18 = (undefined4)uVar19;
  FUN_10828782c();
  if ((uVar8 & 1) == 0) {
    fVar15 = *(float *)(param_1[1] + 4);
    fVar17 = fVar15 * 0.5;
    FUN_1082878c8(&uStack_58);
    fVar14 = (float)uStack_58 * (fVar17 / fVar15);
    uStack_58._4_4_ = (float)((ulong)uStack_58 >> 0x20) * (fVar17 / fVar15);
  }
  else {
    func_0x000108312ad8();
    _fStack_60 = CONCAT44(uVar18,fVar15);
    FUN_1082878c8(&fStack_60);
    fVar14 = (float)uVar6 * (0.5 / fVar15);
    uStack_58._4_4_ = (float)((ulong)uVar6 >> 0x20) * (0.5 / fVar15);
  }
  lVar11 = puVar13[(ulong)(byte)(&UNK_10df18dec)[uVar2] - 1];
  param_1[0x23] = lVar11;
  param_1[0x24] = CONCAT44(uStack_58._4_4_ + (float)((ulong)lVar11 >> 0x20),fVar14 + (float)lVar11);
  fVar15 = (float)*(undefined8 *)param_1[9];
  uVar16 = ((undefined8 *)param_1[9])[1];
  uStack_58._0_4_ = fVar14;
  func_0x000108312b1c();
  if (((float)uVar16 == 0.0) && (fVar17 == 0.0)) {
    uVar16 = *(undefined8 *)(extraout_x8 + 0x10);
    func_0x000108312b1c();
    if (((float)uVar16 == 0.0) && (fVar17 == 0.0)) {
      uVar16 = *(undefined8 *)(extraout_x8_00 + 0x18);
      func_0x000108312b1c();
    }
  }
  uVar8 = param_1[1];
  uVar19 = uVar16;
  FUN_10828782c();
  uVar18 = (undefined4)uVar19;
  if ((uVar8 & 1) == 0) {
    fVar15 = *(float *)(param_1[1] + 4);
    fVar17 = fVar15 * -0.5;
    FUN_1082878c8(&fStack_60);
    fVar17 = fVar17 / fVar15;
    fVar14 = (float)_fStack_60 * fVar17;
    fVar17 = (float)((ulong)_fStack_60 >> 0x20) * fVar17;
  }
  else {
    func_0x000108312ad8();
    fStack_68 = fVar15;
    uStack_64 = uVar18;
    FUN_1082878c8(&fStack_68);
    fVar14 = (float)uVar16 * (-0.5 / fVar15);
    fVar17 = (float)((ulong)uVar16 >> 0x20) * (-0.5 / fVar15);
  }
  lVar12 = *(long *)param_1[9];
  param_1[0x26] = lVar12;
  lVar11 = param_1[0x20];
  iVar9 = *(int *)((long)param_1 + 0x104);
  uVar2 = iVar9 + (int)lVar11;
  uVar3 = uVar2 & 7;
  *(undefined4 *)((long)param_1 + (ulong)uVar3 * 4 + 0x60) = 1;
  param_1[(ulong)uVar3 + 0x10] = (long)(param_1 + 0x23);
  param_1[(ulong)uVar3 + 0x18] = 0;
  uVar2 = uVar2 + 1 & 7;
  *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 6;
  param_1[(ulong)uVar2 + 0x10] = (long)(param_1 + 0x25);
  param_1[(ulong)uVar2 + 0x18] = 0;
  param_1[0x25] = CONCAT44(fVar17 + (float)((ulong)lVar12 >> 0x20),fVar14 + (float)lVar12);
  uVar2 = iVar9 + 2 + (int)lVar11 & 7;
  *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 1;
  *(int *)((long)param_1 + 0x104) = iVar9 + 2;
  param_1[(ulong)uVar2 + 0x10] = (long)(param_1 + 0x25);
  param_1[(ulong)uVar2 + 0x18] = 0;
  iVar9 = iVar9 + 3;
LAB_108312274:
  lVar11 = param_1[9];
  lVar12 = param_1[10];
  uVar2 = (int)param_1[0x20] + iVar9;
  uVar3 = uVar2 & 7;
  *(int *)((long)param_1 + (ulong)uVar3 * 4 + 0x60) = (int)param_1[8];
  param_1[(ulong)uVar3 + 0x10] = lVar11;
  param_1[(ulong)uVar3 + 0x18] = lVar12;
  uVar2 = uVar2 + 1 & 7;
  *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x60) = 7;
  param_1[(ulong)uVar2 + 0x10] = 0;
  param_1[(ulong)uVar2 + 0x18] = 0;
  *(int *)((long)param_1 + 0x104) = iVar9 + 2;
  param_1[0xb] = 0;
  return 1;
}



/* Entry: 1083122e8; end: 108312393;  */

void FUN_1083122e8(long *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = 4;
  do {
    *(undefined8 *)*param_1 = *param_2;
    *param_1 = *param_1 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* Entry: 108312394; end: 10831280b;  */

void FUN_108312394(undefined4 param_1,float param_2,undefined4 param_3,ulong param_4,
                  undefined4 param_5,undefined4 param_6,float param_7,float param_8,ulong *param_9,
                  ulong *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  ulong *puVar8;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  ulong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  ulong uVar38;
  undefined8 in_register_00005088;
  float fVar40;
  undefined8 uStack_a0;
  ulong uStack_90;
  float fStack_80;
  float fStack_7c;
  ulong uVar37;
  ulong uVar41;
  
  uStack_a0 = CONCAT44(param_2,param_1);
  uVar16 = CONCAT44((int)param_4,param_3);
  auVar18._4_4_ = param_6;
  auVar18._0_4_ = param_5;
  auVar18._8_8_ = in_register_00005088;
  puVar9 = (ulong *)((long)param_9 + 0x65);
  puVar8 = param_9;
  uStack_90 = uVar16;
  while( true ) {
    fVar40 = (float)uVar16;
    iVar10 = (int)param_10;
    uVar7 = iVar10 == 3;
    fStack_80 = auVar18._0_4_;
    fStack_7c = auVar18._4_4_;
    fVar22 = (float)uStack_90;
    fVar25 = (float)(uStack_90 >> 0x20);
    if (iVar10 < 3) break;
    fVar11 = (float)func_0x000108312384(0x3f8000003f800000);
    fVar35 = (float)param_4;
    fVar28 = (float)uStack_a0 + (fVar22 - (float)uStack_a0) * fVar11;
    fVar30 = uStack_a0._4_4_ + (fVar25 - uStack_a0._4_4_) * param_2;
    fVar33 = (float)uStack_a0 + (fVar22 - (float)uStack_a0) * fVar40;
    fVar34 = uStack_a0._4_4_ + (fVar25 - uStack_a0._4_4_) * fVar35;
    fVar12 = fVar22 + (fStack_80 - fVar22) * fVar11;
    fVar19 = fVar25 + (fStack_7c - fVar25) * param_2;
    fVar22 = fVar22 + (fStack_80 - fVar22) * fVar40;
    fVar25 = fVar25 + (fStack_7c - fVar25) * fVar35;
    fVar36 = fStack_80 + (param_7 - fStack_80) * fVar11;
    fVar39 = fStack_7c + (param_8 - fStack_7c) * param_2;
    uVar37 = CONCAT44(fVar39,fVar36);
    fStack_80 = fStack_80 + (param_7 - fStack_80) * fVar40;
    fStack_7c = fStack_7c + (param_8 - fStack_7c) * fVar35;
    auVar5._12_4_ = fStack_7c;
    auVar5._8_4_ = fStack_80;
    fVar29 = fVar28 + fVar11 * (fVar12 - fVar28);
    fVar31 = fVar30 + param_2 * (fVar19 - fVar30);
    fVar33 = fVar33 + fVar40 * (fVar22 - fVar33);
    fVar34 = fVar34 + fVar35 * (fVar25 - fVar34);
    fVar36 = fVar11 * (fVar36 - fVar12);
    fVar39 = param_2 * (fVar39 - fVar19);
    uVar16 = CONCAT44(fVar39,fVar36);
    fVar12 = fVar12 + fVar36;
    fVar19 = fVar19 + fVar39;
    fVar22 = fVar22 + fVar40 * (fStack_80 - fVar22);
    fVar25 = fVar25 + fVar35 * (fStack_7c - fVar25);
    fVar39 = fVar12 - fVar29;
    fVar20 = fVar19 - fVar31;
    fVar23 = fVar22 - fVar33;
    fVar26 = fVar25 - fVar34;
    fVar13 = fVar29 + fVar11 * fVar39;
    fVar21 = fVar31 + param_2 * fVar20;
    fVar24 = fVar33 + fVar40 * fVar23;
    fVar27 = fVar34 + fVar35 * fVar26;
    fVar36 = fVar29;
    uVar38 = uVar37;
    func_0x000108312b68();
    if ((bool)uVar7) {
      func_0x0001083129c0();
      param_10 = puVar9;
LAB_1083124d0:
      *param_10 = uStack_a0;
      param_10[1] = CONCAT44(fVar30,fVar28);
      param_10[3] = CONCAT44(fVar21,fVar13);
      param_10[2] = CONCAT44(fVar31,fVar29);
      func_0x000108312a38();
      if ((bool)uVar7) {
        func_0x000108312ab8();
      }
      func_0x000108312a04();
      if (((byte)*param_9 >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
      fVar36 = fVar29;
      fVar32 = fVar31;
      func_0x000108312a78();
      if (extraout_w8 == 0) {
        func_0x000108312a78();
        if (extraout_w8_00 == 0) {
          *(ulong *)((long)param_9 + 0xac) = uStack_a0;
        }
        else {
          *(ulong *)((long)param_9 + 0xac) = CONCAT44(fVar30,fVar28);
        }
      }
      else {
        *(ulong *)((long)param_9 + 0xac) = CONCAT44(fVar32,fVar36);
      }
      *(byte *)((long)param_9 + 100) = 0;
LAB_108312550:
      func_0x000108312a10();
      if (param_10 != (ulong *)0x0) goto LAB_108312578;
    }
    else {
      func_0x000108312a10();
      if (param_10 != (ulong *)0x0) goto LAB_1083124d0;
      if ((*(byte *)((long)param_9 + 100) & 1) == 0) goto LAB_108312550;
      func_0x0001083129c0();
      param_10 = puVar9;
LAB_108312578:
      fVar36 = fVar29 + fVar40 * fVar39;
      fVar31 = fVar31 + fVar35 * fVar20;
      fVar33 = fVar33 + fVar11 * fVar23;
      fVar34 = fVar34 + param_2 * fVar26;
      uVar41 = CONCAT44(fVar31,fVar36);
      *param_10 = CONCAT44(fVar21,fVar13);
      param_10[1] = uVar41;
      auVar1._4_4_ = fVar31;
      auVar1._0_4_ = fVar36;
      auVar1._8_4_ = fVar33;
      auVar1._12_4_ = fVar34;
      param_10[3] = CONCAT44(fVar27,fVar24);
      param_10[2] = auVar1._8_8_;
      func_0x000108312a38();
      uVar16 = param_4;
      if ((bool)uVar7) {
        func_0x000108312ab8();
        uVar16 = param_4;
      }
      func_0x000108312a04();
      if (((byte)*param_9 >> 5 & 1) != 0) {
        func_0x0001083128a0();
      }
      auVar17._0_4_ = -(uint)(fVar13 == fVar36);
      auVar17._4_4_ = -(uint)(fVar21 == fVar31);
      auVar17._8_4_ = -(uint)(fVar24 == fVar33);
      auVar17._12_4_ = -(uint)(fVar27 == fVar34);
      NEON_ext(auVar17,auVar17,8,1);
      func_0x000108312a78();
      if (extraout_w8_01 == 0) {
        auVar2._4_4_ = fVar31;
        auVar2._0_4_ = fVar36;
        auVar2._8_4_ = fVar33;
        auVar2._12_4_ = fVar34;
        auVar3._4_4_ = fVar31;
        auVar3._0_4_ = fVar36;
        auVar3._8_4_ = fVar33;
        auVar3._12_4_ = fVar34;
        NEON_ext(auVar2,auVar3,8,1);
        func_0x0001083129a0();
        if (extraout_w8_02 == 0) {
          *(ulong *)((long)param_9 + 0xac) = CONCAT44(fVar21,fVar13);
        }
        else {
          *(ulong *)((long)param_9 + 0xac) = uVar41;
        }
      }
      else {
        *(ulong *)((long)param_9 + 0xac) = CONCAT44(fVar34,fVar33);
      }
      *(byte *)((long)param_9 + 100) = 0;
    }
    auVar6._4_4_ = fVar21;
    auVar6._0_4_ = fVar13;
    auVar6._8_4_ = fVar24;
    auVar6._12_4_ = fVar27;
    auVar18 = NEON_ext(auVar6,auVar6,8,1);
    uStack_a0 = auVar18._0_8_;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar22;
    auVar4._12_4_ = fVar25;
    auVar18 = NEON_ext(auVar4,auVar4,8,1);
    uStack_90 = auVar18._0_8_;
    auVar5._0_8_ = uVar37;
    auVar18 = NEON_ext(auVar5,auVar5,8,1);
    puVar8 = param_10;
    param_10 = (ulong *)(ulong)(iVar10 - 2);
    param_2 = fVar36;
    param_4 = uVar38;
  }
  uVar16 = CONCAT44(param_8,param_7);
  uVar7 = iVar10 == 2;
  if (!(bool)uVar7) {
    func_0x000108312b68();
    if ((bool)uVar7) {
      func_0x0001083129c0();
      puVar8 = puVar9;
    }
    else {
      func_0x000108312a10();
      if (puVar8 == (ulong *)0x0) {
        return;
      }
    }
    *puVar8 = uStack_a0;
    puVar8[1] = uStack_90;
    puVar8[2] = auVar18._0_8_;
    puVar8[3] = uVar16;
    func_0x000108312b00();
    if ((bool)uVar7) {
      func_0x000108312b54();
    }
    func_0x000108312a04();
    if (((byte)*param_9 >> 5 & 1) != 0) {
      func_0x0001083128a0();
    }
    uVar14 = func_0x00010831298c(uVar16);
    if (extraout_w8_05 == 0) {
      uVar16 = func_0x0001083128d4(uVar14,-(uint)(fStack_80 == fVar22));
      uStack_a0 = uStack_a0 ^ (uStack_a0 ^ uStack_90) & ~uVar16;
      fStack_80 = (float)uStack_a0;
      fStack_7c = (float)(uStack_a0 >> 0x20);
    }
    goto LAB_1083127d4;
  }
  fVar40 = (fVar22 + (float)uStack_a0) * 0.5;
  fVar36 = (fVar25 + uStack_a0._4_4_) * 0.5;
  uVar41 = CONCAT44(fVar36,fVar40);
  fVar22 = (fStack_80 + fVar22) * 0.5;
  fVar25 = (fStack_7c + fVar25) * 0.5;
  fStack_80 = (param_7 + fStack_80) * 0.5;
  fStack_7c = (param_8 + fStack_7c) * 0.5;
  fVar11 = (fVar22 + fVar40) * 0.5;
  fVar36 = (fVar25 + fVar36) * 0.5;
  uVar15 = CONCAT44(fVar36,fVar11);
  fVar22 = (fStack_80 + fVar22) * 0.5;
  fVar25 = (fStack_7c + fVar25) * 0.5;
  uVar38 = CONCAT44(fVar25,fVar22);
  uVar37 = CONCAT44((fVar25 + fVar36) * 0.5,(fVar22 + fVar11) * 0.5);
  func_0x000108312b68();
  if ((bool)uVar7) {
    func_0x0001083129c0();
    puVar8 = puVar9;
LAB_1083126c8:
    *puVar8 = uStack_a0;
    puVar8[1] = uVar41;
    puVar8[2] = uVar15;
    puVar8[3] = uVar37;
    func_0x000108312a38();
    if ((bool)uVar7) {
      func_0x000108312ab8();
    }
    func_0x000108312a04();
    if (((byte)*param_9 >> 5 & 1) != 0) {
      func_0x0001083128a0();
    }
    uVar14 = func_0x0001083129a0();
    if (extraout_w8_03 == 0) {
      uVar15 = func_0x0001083128d4(uVar14,-(uint)(fVar11 == fVar40));
      uVar15 = uVar41 ^ (uVar41 ^ uStack_a0) & uVar15;
    }
    *(ulong *)((long)param_9 + 0xac) = uVar15;
    *(byte *)((long)param_9 + 100) = 0;
LAB_108312718:
    func_0x000108312a10();
    puVar9 = puVar8;
    if (puVar8 == (ulong *)0x0) {
      return;
    }
  }
  else {
    func_0x000108312a10();
    if (puVar8 != (ulong *)0x0) goto LAB_1083126c8;
    func_0x000108312b68();
    if (!(bool)uVar7) goto LAB_108312718;
    func_0x0001083129c0();
  }
  *puVar9 = uVar37;
  puVar9[1] = uVar38;
  puVar9[2] = CONCAT44(fStack_7c,fStack_80);
  puVar9[3] = uVar16;
  func_0x000108312b00();
  if ((bool)uVar7) {
    func_0x000108312b54();
  }
  func_0x000108312a04();
  if (((byte)*param_9 >> 5 & 1) != 0) {
    func_0x0001083128a0();
  }
  uVar14 = func_0x00010831298c(uVar16);
  if (extraout_w8_04 == 0) {
    uVar16 = func_0x0001083128d4(uVar14,-(uint)(fStack_80 == fVar22));
    uVar38 = uVar38 ^ (uVar38 ^ uVar37) & uVar16;
    fStack_80 = (float)uVar38;
    fStack_7c = (float)(uVar38 >> 0x20);
  }
LAB_1083127d4:
  *(ulong *)((long)param_9 + 0xac) = CONCAT44(fStack_7c,fStack_80);
  *(byte *)((long)param_9 + 100) = 0;
  return;
}



/* Entry: 10831280c; end: 108312817;  */

float FUN_10831280c(float param_1)

{
  return param_1 * -2.0;
}



/* Entry: 108312818; end: 108312847;  */

long FUN_108312818(long param_1)

{
  FUN_108311c7c();
  FUN_1082b6654(param_1 + 0x30);
  return param_1;
}



/* Entry: 108312848; end: 108312a1b;  */

int FUN_108312848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_register_00005008;
  float fVar7;
  float in_register_0000500c;
  float fVar8;
  float fVar10;
  float in_register_00005028;
  float in_register_0000502c;
  undefined1 auVar9 [16];
  float fVar12;
  float in_register_00005048;
  float in_register_0000504c;
  undefined1 auVar11 [16];
  float unaff_s15;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  
  fVar4 = (float)param_2 + (float)param_3 + (float)param_1;
  fVar6 = (float)((ulong)param_2 >> 0x20) +
          (float)((ulong)param_3 >> 0x20) + (float)((ulong)param_1 >> 0x20);
  fVar7 = in_register_00005028 + in_register_00005048 + in_register_00005008;
  fVar8 = in_register_0000502c + in_register_0000504c + in_register_0000500c;
  fVar10 = (float)((ulong)in_stack_00000280 >> 0x20);
  fVar12 = (float)((ulong)in_stack_00000288 >> 0x20);
  fVar5 = (float)in_stack_00000280 * fVar4 + (float)in_stack_00000288 * fVar6;
  fVar4 = fVar10 * fVar4 + fVar12 * fVar6;
  fVar6 = (float)in_stack_00000280 * fVar7 + (float)in_stack_00000288 * fVar8;
  fVar7 = fVar10 * fVar7 + fVar12 * fVar8;
  fVar5 = fVar5 * fVar5;
  fVar4 = fVar4 * fVar4;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  auVar9._4_4_ = fVar4;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar6;
  auVar9._12_4_ = fVar7;
  auVar11._4_4_ = fVar4;
  auVar11._0_4_ = fVar5;
  auVar11._8_4_ = fVar6;
  auVar11._12_4_ = fVar7;
  auVar9 = NEON_ext(auVar9,auVar11,4,1);
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar7;
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar6;
  auVar2._12_4_ = fVar7;
  auVar11 = NEON_ext(auVar1,auVar2,8,1);
  fVar5 = auVar9._0_4_ + fVar5;
  fVar4 = auVar9._4_4_ + auVar11._4_4_;
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar4 = fVar4 * unaff_s15;
  if (fVar4 <= 1048576.0) {
    iVar3 = 0;
  }
  else {
    fVar5 = 1.0995116e+12;
    if (fVar4 <= 1.0995116e+12) {
      fVar5 = fVar4;
    }
    fVar4 = (float)NEON_fminnm((int)SQRT(SQRT(fVar5 * 9.536743e-07)),0x4effffff);
    if (fVar4 <= -2.1474835e+09) {
      fVar4 = -2.1474835e+09;
    }
    iVar3 = (int)fVar4;
  }
  return iVar3;
}



/* Entry: 108312a1c; end: 108312a37;  */

void FUN_108312a1c(void)

{
  FUN_10831280c();
  return;
}



/* Entry: 108312a38; end: 108312b93;  */

void FUN_108312a38(long param_1)

{
  long unaff_x19;
  long unaff_x29;
  
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x19 + 0xac);
  *(long *)(unaff_x29 + -0x58) = param_1 + 0x28;
  return;
}



/* Entry: 108312b94; end: 108312bd7;  */

undefined8 FUN_108312b94(int *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  FUN_10828e338();
  uVar1 = 0x14;
  if (param_2 == 0) {
    uVar1 = 0x10;
  }
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0xc;
  }
  if (iVar3 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108312bd8; end: 1083132d7;  */

void FUN_108312bd8(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,int param_5,
                  int param_6,long param_7,ulong param_8,undefined4 param_9,ulong param_10,
                  undefined8 param_11,undefined8 param_12,undefined8 param_13,long param_14)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  long *plVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort *puVar8;
  undefined2 *puVar9;
  code *pcVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int iVar36;
  int iVar37;
  undefined4 uVar38;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s15;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  int *piStack_100;
  long *plStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uStack_d8 = param_12;
  uStack_d0 = param_13;
  iStack_e0 = param_6;
  iStack_dc = param_5;
  lStack_c8 = param_7;
  uStack_c0 = param_8;
  func_0x00010834362c();
  plStack_f8 = &lStack_c8;
  piStack_f0 = &iStack_dc;
  piStack_e8 = &iStack_e0;
  piStack_100 = param_4;
  if ((char)param_4[1] == '\x01') {
    piVar11 = param_4 + 2;
    uVar13 = param_10;
    FUN_10831b9d4();
    if (((ulong)piVar11 & 1) != 0) {
      iVar18 = (int)&uStack_d8;
      FUN_10821a6d8();
      fVar35 = (float)((ulong)piVar11 >> 0x20);
      if (iVar18 == 0) {
        if (*param_4 != 2) {
          FUN_1083132d8(&lStack_128,&piStack_100,param_14);
          pfVar3 = (float *)(lStack_118 + 4);
          puVar8 = (ushort *)(lStack_128 + 0x3e);
          uVar17 = uStack_d8;
          uVar32 = uStack_d0;
          for (; lStack_110 != 0; lStack_110 = lStack_110 + -1) {
            uVar24 = *(ulong *)(*plStack_120 + 0x10);
            uVar23 = (ushort)(uVar24 >> 0x10);
            uVar21 = (ushort)(uVar24 >> 0x20);
            uVar22 = (ushort)(uVar24 >> 0x30);
            fVar31 = *pfVar3 + (float)uVar13;
            fVar27 = pfVar3[-1] + fVar35;
            iVar20 = (int)fVar27;
            iVar19 = (int)fVar31;
            iVar25 = (int)(fVar27 + (float)((int)(uVar24 >> 0x20) - (int)uVar24 & 0xffff));
            iVar18 = (int)(fVar31 + (float)((uint)uVar22 - (int)(uVar24 >> 0x10) & 0xffff));
            lStack_148 = CONCAT44(iVar19,iVar20);
            plStack_140 = (long *)CONCAT44(iVar18,iVar25);
            uStack_d8._0_4_ = (int)uVar17;
            uStack_d8._4_4_ = (int)((ulong)uVar17 >> 0x20);
            uStack_d0._0_4_ = (int)uVar32;
            uStack_d0._4_4_ = (int)((ulong)uVar32 >> 0x20);
            uStack_d8 = uVar17;
            uStack_d0 = uVar32;
            if (((iVar20 < (int)uStack_d8 || iVar19 < uStack_d8._4_4_) || (int)uStack_d0 < iVar25)
                || uStack_d0._4_4_ < iVar18) {
              uStack_b8 = 0;
              uStack_b0 = 0;
              puVar12 = &uStack_b8;
              FUN_10838ea90(puVar12,&lStack_148,&uStack_d8);
              if ((int)puVar12 == 0) {
                uVar22 = 0;
                uVar21 = 0;
                uVar23 = 0;
                uVar24 = 0;
                fVar34 = 0.0;
                fVar31 = 0.0;
                fVar27 = 0.0;
                fVar33 = 0.0;
              }
              else {
                uVar24 = (ulong)(uint)(((int)uStack_b8 - iVar20) + (int)uVar24);
                uVar23 = ((short)((ulong)uStack_b8 >> 0x20) - (short)iVar19) + uVar23;
                uVar21 = ((short)uStack_b0 - (short)iVar25) + uVar21;
                uVar22 = ((short)((ulong)uStack_b0 >> 0x20) - (short)iVar18) + uVar22;
                fVar34 = (float)(int)uStack_b8;
                fVar31 = (float)uStack_b8._4_4_;
                fVar27 = (float)(int)uStack_b0;
                fVar33 = (float)uStack_b0._4_4_;
              }
            }
            else {
              fVar34 = (float)iVar20;
              fVar31 = (float)iVar19;
              fVar27 = (float)iVar25;
              fVar33 = (float)iVar18;
            }
            *(float *)(puVar8 + -0x1f) = fVar34;
            *(float *)(puVar8 + -0x1d) = fVar31;
            *(undefined4 *)(puVar8 + -0x1b) = param_9;
            puVar8[-0x19] = (ushort)uVar24;
            puVar8[-0x18] = uVar23;
            *(float *)(puVar8 + -0x17) = fVar34;
            *(float *)(puVar8 + -0x15) = fVar33;
            *(undefined4 *)(puVar8 + -0x13) = param_9;
            puVar8[-0x11] = (ushort)uVar24;
            puVar8[-0x10] = uVar22;
            *(float *)(puVar8 + -0xf) = fVar27;
            *(float *)(puVar8 + -0xd) = fVar31;
            *(undefined4 *)(puVar8 + -0xb) = param_9;
            puVar8[-9] = uVar21;
            puVar8[-8] = uVar23;
            *(float *)(puVar8 + -7) = fVar27;
            *(float *)(puVar8 + -5) = fVar33;
            *(undefined4 *)(puVar8 + -3) = param_9;
            puVar8[-1] = uVar21;
            *puVar8 = uVar22;
            pfVar3 = pfVar3 + 2;
            plStack_120 = plStack_120 + 1;
            puVar8 = puVar8 + 0x20;
            uVar17 = uStack_d8;
            uVar32 = uStack_d0;
          }
          return;
        }
        FUN_108313520();
        puVar12 = &uStack_d8;
      }
      else {
        if (*param_4 != 2) {
          FUN_1083132d8(&lStack_128,&piStack_100,param_14);
          pfVar3 = (float *)(lStack_118 + 4);
          puVar8 = (ushort *)(lStack_128 + 0x3e);
          for (; lStack_110 != 0; lStack_110 = lStack_110 + -1) {
            uVar17 = *(undefined8 *)(*plStack_120 + 0x10);
            fVar31 = *pfVar3;
            uVar22 = (ushort)((ulong)uVar17 >> 0x30);
            fVar27 = pfVar3[-1] + fVar35;
            *(float *)(puVar8 + -0x1f) = fVar27;
            fVar31 = fVar31 + (float)uVar13;
            *(float *)(puVar8 + -0x1d) = fVar31;
            fVar33 = fVar27 + (float)(int)(((uint)((ulong)uVar17 >> 0x20) & 0xffff) -
                                          ((uint)uVar17 & 0xffff));
            fVar34 = fVar31 + (float)(int)((uint)uVar22 - ((uint)((ulong)uVar17 >> 0x10) & 0xffff));
            *(undefined4 *)(puVar8 + -0x1b) = param_9;
            puVar8[-0x19] = (ushort)uVar17;
            uVar23 = (ushort)((ulong)uVar17 >> 0x10);
            puVar8[-0x18] = uVar23;
            *(float *)(puVar8 + -0x17) = fVar27;
            *(float *)(puVar8 + -0x15) = fVar34;
            *(undefined4 *)(puVar8 + -0x13) = param_9;
            puVar8[-0x11] = (ushort)uVar17;
            puVar8[-0x10] = uVar22;
            *(float *)(puVar8 + -0xf) = fVar33;
            *(float *)(puVar8 + -0xd) = fVar31;
            *(undefined4 *)(puVar8 + -0xb) = param_9;
            uVar21 = (ushort)((ulong)uVar17 >> 0x20);
            puVar8[-9] = uVar21;
            puVar8[-8] = uVar23;
            *(float *)(puVar8 + -7) = fVar33;
            *(float *)(puVar8 + -5) = fVar34;
            *(undefined4 *)(puVar8 + -3) = param_9;
            puVar8[-1] = uVar21;
            *puVar8 = uVar22;
            pfVar3 = pfVar3 + 2;
            puVar8 = puVar8 + 0x20;
            plStack_120 = plStack_120 + 1;
          }
          return;
        }
        FUN_108313520();
        puVar12 = (undefined8 *)0x0;
      }
      FUN_1083132fc((ulong)piVar11 >> 0x20,uVar13 & 0xffffffff,&lStack_128,puVar12);
      return;
    }
  }
  func_0x00010831b964(&lStack_128,param_4,param_10);
  FUN_10828e338();
  iVar18 = *param_4;
  if ((param_10 & 1) == 0) {
    if (iVar18 == 2) {
      FUN_108313520();
      puVar1 = (undefined4 *)(lStack_148 + 0x18);
      puVar2 = (undefined4 *)(lStack_138 + 4);
      for (; lStack_130 != 0; lStack_130 = lStack_130 + -1) {
        uVar38 = *puVar2;
        func_0x0001083135dc(*plStack_140 + 8);
        FUN_108313648();
        FUN_1082d24d0();
        func_0x0001083136c8();
        uVar17 = param_1;
        uVar32 = param_2;
        func_0x0001083136e0();
        FUN_1082d24d0();
        func_0x0001083136b0();
        uVar15 = *(undefined8 *)(*plStack_140 + 0x10);
        puVar1[-6] = unaff_s12;
        puVar1[-5] = unaff_s13;
        uVar14 = (uint)uVar15;
        puVar1[-4] = uVar14;
        uVar16 = (uint)((ulong)uVar15 >> 0x20);
        puVar1[5] = uVar16;
        puVar1[-3] = (int)param_1;
        puVar1[-2] = (int)param_2;
        puVar1[-1] = uVar16 & 0xffff0000 | uVar14 & 0xffff;
        *puVar1 = uVar38;
        puVar1[1] = unaff_s15;
        puVar1[2] = uVar14 & 0xffff0000 | uVar16 & 0xffff;
        puVar1[3] = (int)uVar17;
        puVar1[4] = (int)uVar32;
        puVar1 = puVar1 + 0xc;
        puVar2 = puVar2 + 2;
        param_1 = uVar17;
        param_2 = uVar32;
        plStack_140 = plStack_140 + 1;
      }
    }
    else {
      FUN_1083132d8(&lStack_148,&piStack_100,param_14);
      puVar1 = (undefined4 *)(lStack_138 + 4);
      puVar9 = (undefined2 *)(lStack_148 + 0x3e);
      for (; lStack_130 != 0; lStack_130 = lStack_130 + -1) {
        uVar38 = *puVar1;
        func_0x0001083135dc(*plStack_140 + 8);
        FUN_108313648();
        FUN_1082d24d0();
        func_0x0001083136c8();
        uVar17 = param_1;
        uVar32 = param_2;
        func_0x0001083136e0();
        FUN_1082d24d0();
        func_0x0001083136b0();
        uVar15 = *(undefined8 *)(*plStack_140 + 0x10);
        *(undefined4 *)(puVar9 + -0x1f) = unaff_s12;
        *(undefined4 *)(puVar9 + -0x1d) = unaff_s13;
        *(undefined4 *)(puVar9 + -0x1b) = param_9;
        puVar9[-0x19] = (short)uVar15;
        uVar5 = (undefined2)((ulong)uVar15 >> 0x10);
        puVar9[-0x18] = uVar5;
        *(int *)(puVar9 + -0x17) = (int)param_1;
        *(int *)(puVar9 + -0x15) = (int)param_2;
        *(undefined4 *)(puVar9 + -0x13) = param_9;
        puVar9[-0x11] = (short)uVar15;
        uVar7 = (undefined2)((ulong)uVar15 >> 0x30);
        puVar9[-0x10] = uVar7;
        *(undefined4 *)(puVar9 + -0xf) = uVar38;
        *(undefined4 *)(puVar9 + -0xd) = unaff_s15;
        *(undefined4 *)(puVar9 + -0xb) = param_9;
        uVar6 = (undefined2)((ulong)uVar15 >> 0x20);
        puVar9[-9] = uVar6;
        puVar9[-8] = uVar5;
        *(int *)(puVar9 + -7) = (int)uVar17;
        *(int *)(puVar9 + -5) = (int)uVar32;
        *(undefined4 *)(puVar9 + -3) = param_9;
        puVar9[-1] = uVar6;
        *puVar9 = uVar7;
        puVar1 = puVar1 + 2;
        puVar9 = puVar9 + 0x20;
        param_1 = uVar17;
        param_2 = uVar32;
        plStack_140 = plStack_140 + 1;
      }
    }
  }
  else {
    uVar13 = (ulong)iStack_dc;
    if ((uStack_c0 < uVar13) || (uVar24 = (ulong)iStack_e0, uStack_c0 - uVar13 < uVar24)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1083132d8);
      (*pcVar10)();
    }
    plVar4 = (long *)(lStack_c8 + uVar13 * 8);
    param_4 = param_4 + 0x10;
    func_0x00010831356c(param_4,uVar13,uVar24);
    if (iVar18 == 2) {
      piVar11 = (int *)(param_14 + 0x20);
      param_4 = param_4 + 1;
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        iVar28 = (int)param_2;
        iVar37 = (int)param_1;
        iVar36 = param_4[-1];
        func_0x0001083135dc(*plVar4 + 8);
        FUN_108313648();
        FUN_108313600();
        iVar18 = param_3;
        iVar29 = (int)unaff_d11;
        FUN_108313600(&lStack_128);
        iVar19 = iVar18;
        iVar25 = iVar29;
        iVar26 = iVar36;
        func_0x0001083136e0();
        FUN_108313600();
        param_1 = unaff_d10;
        param_2 = unaff_d11;
        iVar20 = iVar19;
        FUN_108313600(&lStack_128);
        uVar17 = *(undefined8 *)(*plVar4 + 0x10);
        piVar11[-8] = iVar37;
        piVar11[-7] = iVar28;
        piVar11[-6] = param_3;
        uVar14 = (uint)uVar17;
        piVar11[-5] = uVar14;
        uVar16 = (uint)((ulong)uVar17 >> 0x20);
        piVar11[7] = uVar16;
        piVar11[-4] = iVar36;
        piVar11[-3] = iVar29;
        piVar11[-2] = iVar18;
        piVar11[-1] = uVar16 & 0xffff0000 | uVar14 & 0xffff;
        *piVar11 = iVar26;
        piVar11[1] = iVar25;
        piVar11[2] = iVar19;
        piVar11[3] = uVar14 & 0xffff0000 | uVar16 & 0xffff;
        piVar11[4] = (int)param_1;
        piVar11[5] = (int)param_2;
        piVar11[6] = iVar20;
        piVar11 = piVar11 + 0x10;
        param_4 = param_4 + 2;
        plVar4 = plVar4 + 1;
        param_3 = iVar20;
      }
    }
    else {
      param_4 = param_4 + 1;
      puVar9 = (undefined2 *)(param_14 + 0x4e);
      for (; uVar24 != 0; uVar24 = uVar24 - 1) {
        uVar30 = (undefined4)param_2;
        uVar38 = (undefined4)param_1;
        iVar37 = param_4[-1];
        func_0x0001083135dc(*plVar4 + 8);
        FUN_108313648();
        func_0x000108313624();
        iVar18 = param_3;
        iVar29 = (int)unaff_d11;
        func_0x000108313624(&lStack_128);
        iVar19 = iVar18;
        iVar25 = iVar37;
        iVar26 = iVar29;
        func_0x0001083136e0();
        func_0x000108313624();
        param_1 = unaff_d10;
        param_2 = unaff_d11;
        iVar20 = iVar19;
        func_0x000108313624(&lStack_128);
        uVar17 = *(undefined8 *)(*plVar4 + 0x10);
        *(undefined4 *)(puVar9 + -0x27) = uVar38;
        *(undefined4 *)(puVar9 + -0x25) = uVar30;
        *(int *)(puVar9 + -0x23) = param_3;
        *(undefined4 *)(puVar9 + -0x21) = param_9;
        puVar9[-0x1f] = (short)uVar17;
        uVar5 = (undefined2)((ulong)uVar17 >> 0x10);
        puVar9[-0x1e] = uVar5;
        *(int *)(puVar9 + -0x1d) = iVar37;
        *(int *)(puVar9 + -0x1b) = iVar29;
        *(int *)(puVar9 + -0x19) = iVar18;
        *(undefined4 *)(puVar9 + -0x17) = param_9;
        puVar9[-0x15] = (short)uVar17;
        uVar7 = (undefined2)((ulong)uVar17 >> 0x30);
        puVar9[-0x14] = uVar7;
        *(int *)(puVar9 + -0x13) = iVar25;
        *(int *)(puVar9 + -0x11) = iVar26;
        *(int *)(puVar9 + -0xf) = iVar19;
        *(undefined4 *)(puVar9 + -0xd) = param_9;
        uVar6 = (undefined2)((ulong)uVar17 >> 0x20);
        puVar9[-0xb] = uVar6;
        puVar9[-10] = uVar5;
        *(int *)(puVar9 + -9) = (int)param_1;
        *(int *)(puVar9 + -7) = (int)param_2;
        *(int *)(puVar9 + -5) = iVar20;
        *(undefined4 *)(puVar9 + -3) = param_9;
        puVar9[-1] = uVar6;
        *puVar9 = uVar7;
        param_4 = param_4 + 2;
        plVar4 = plVar4 + 1;
        puVar9 = puVar9 + 0x28;
        param_3 = iVar20;
      }
    }
  }
  return;
}



/* Entry: 1083132d8; end: 1083132fb;  */

void FUN_1083132d8(void)

{
  FUN_108313660();
  return;
}



/* Entry: 1083132fc; end: 10831351f;  */

void FUN_1083132fc(float param_1,float param_2,undefined8 param_3,float param_4,long *param_5,
                  ulong param_6)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x12;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar8 = 0;
  lVar9 = 0x2c;
  for (lVar6 = param_5[3]; lVar6 != 0; lVar6 = lVar6 + -1) {
    lVar2 = *param_5;
    puVar1 = (uint *)(lVar2 + lVar9);
    lVar12 = *(long *)(*(long *)(param_5[1] + lVar8) + 0x10);
    iVar7 = (int)((ulong)lVar12 >> 0x10);
    uVar10 = (uint)((ulong)lVar12 >> 0x20);
    uVar3 = (ushort)((ulong)lVar12 >> 0x30);
    uVar11 = (uint)uVar3;
    iVar14 = (uint)uVar3 - iVar7;
    fVar17 = ((float *)(param_5[2] + lVar8))[1];
    fVar16 = param_1 + *(float *)(param_5[2] + lVar8);
    fVar13 = param_2 + fVar17;
    if (param_6 == 0) {
      func_0x000108313718(iVar14);
      param_4 = fVar13 + param_4;
      puVar1[-0xb] = (uint)fVar16;
      puVar1[-10] = (uint)fVar13;
      uVar11 = (uint)lVar12;
      puVar1[-9] = uVar11;
      puVar1[-8] = (uint)fVar16;
      puVar1[-7] = (uint)param_4;
      puVar1[-6] = uVar11 & 0xffff | (uint)uVar3 << 0x10;
      puVar1[-5] = (uint)(fVar16 + fVar17);
      puVar1[-4] = (uint)fVar13;
      puVar1[-3] = uVar11 & 0xffff0000 | uVar10 & 0xffff;
      puVar1[-2] = (uint)(fVar16 + fVar17);
      puVar1[-1] = (uint)param_4;
      *puVar1 = uVar10 & 0xffff | (uint)uVar3 << 0x10;
      lVar6 = extraout_x12;
    }
    else {
      func_0x000108313718(iVar14);
      iVar14 = (int)fVar13;
      iVar15 = (int)(fVar13 + param_4);
      uStack_80 = CONCAT17((char)((uint)iVar14 >> 0x18),
                           CONCAT16((char)((uint)iVar14 >> 0x10),
                                    CONCAT15((char)((uint)iVar14 >> 8),
                                             CONCAT14((char)iVar14,(int)fVar16))));
      uStack_78 = CONCAT17((char)((uint)iVar15 >> 0x18),
                           CONCAT16((char)((uint)iVar15 >> 0x10),
                                    CONCAT15((char)((uint)iVar15 >> 8),
                                             CONCAT14((char)iVar15,(int)(fVar16 + fVar17)))));
      uVar4 = param_6;
      func_0x000108313590(param_6,&uStack_80);
      if ((uVar4 & 1) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        puVar5 = &uStack_90;
        FUN_10838ea90(puVar5,&uStack_80,param_6);
        if ((int)puVar5 == 0) {
          uVar11 = 0;
          uVar10 = 0;
          iVar7 = 0;
          lVar12 = 0;
          fVar16 = 0.0;
          fVar13 = 0.0;
          fVar17 = 0.0;
          param_4 = 0.0;
        }
        else {
          lVar12 = lVar12 + (ulong)(uint)((int)uStack_90 - (int)uStack_80);
          iVar7 = iVar7 + (uStack_90._4_4_ - uStack_80._4_4_);
          uVar10 = uVar10 + ((int)uStack_88 - (int)uStack_78);
          fVar16 = (float)(int)uStack_90;
          fVar13 = (float)uStack_90._4_4_;
          fVar17 = (float)(int)uStack_88;
          param_4 = (float)uStack_88._4_4_;
          uVar11 = (uint)uVar3 + (uStack_88._4_4_ - uStack_78._4_4_) & 0xffff;
        }
      }
      else {
        fVar16 = (float)(int)uStack_80;
        fVar13 = (float)uStack_80._4_4_;
        fVar17 = (float)(int)uStack_78;
        param_4 = (float)uStack_78._4_4_;
      }
      puVar1[-0xb] = (uint)fVar16;
      puVar1 = (uint *)(lVar2 + lVar9);
      puVar1[-10] = (uint)fVar13;
      puVar1[-9] = (uint)lVar12 & 0xffff | iVar7 << 0x10;
      puVar1[-8] = (uint)fVar16;
      puVar1[-7] = (uint)param_4;
      puVar1[-6] = uVar11 << 0x10 | (uint)lVar12 & 0xffff;
      puVar1[-5] = (uint)fVar17;
      puVar1[-4] = (uint)fVar13;
      puVar1[-3] = uVar10 & 0xffff | iVar7 << 0x10;
      puVar1[-2] = (uint)fVar17;
      puVar1[-1] = (uint)param_4;
      *puVar1 = uVar11 << 0x10 | uVar10 & 0xffff;
    }
    lVar9 = lVar9 + 0x30;
    lVar8 = lVar8 + 8;
  }
  return;
}



/* Entry: 108313520; end: 108313543;  */

void FUN_108313520(void)

{
  FUN_108313660();
  return;
}



/* Entry: 108313544; end: 1083135ff;  */

undefined1  [16] FUN_108313544(long *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  if ((param_2 <= (ulong)param_1[1]) && (param_3 <= param_1[1] - param_2)) {
    auVar2._8_8_ = param_3;
    auVar2._0_8_ = *param_1 + param_2 * 8;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10831356c);
  (*pcVar1)();
}



/* Entry: 108313600; end: 108313647;  */

undefined4 FUN_108313600(void)

{
  undefined4 uStack_24;
  
  func_0x0001083136f0();
  return uStack_24;
}



/* Entry: 108313648; end: 10831365f;  */

undefined1 * FUN_108313648(void)

{
  return &stack0x00000038;
}



/* Entry: 108313660; end: 1083136af;  */

void FUN_108313660(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  lVar2 = param_2[1];
  lVar5 = (long)*(int *)param_2[2];
  iVar1 = *(int *)param_2[3];
  lVar4 = lVar5;
  FUN_108313544(lVar2,lVar5,(long)iVar1);
  lVar3 = lVar3 + 0x40;
  func_0x00010831356c(lVar3,lVar5,(long)iVar1);
  *param_1 = param_3;
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  return;
}



/* Entry: 1083136b0; end: 10831372b;  */

undefined4 FUN_1083136b0(void)

{
  undefined4 auStack_18 [2];
  
  FUN_10836464c(&stack0x00000038,auStack_18);
  return auStack_18[0];
}



/* Entry: 10831372c; end: 1083137e3;  */

undefined8 *
FUN_10831372c(undefined8 *param_1,long param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110a3b968;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = param_5;
  param_1[7] = param_2;
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0xb8);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[8] = lVar4;
  func_0x000108291bd0(param_1 + 9,*(undefined4 *)(lVar4 + 0x3c));
  return param_1;
}



/* Entry: 1083137e4; end: 1083137e7;  */

undefined8 * FUN_1083137e4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a3b968;
  FUN_10826b6c8(param_1 + 8);
  lVar1 = 0x28;
  do {
    FUN_108291e40((long)param_1 + lVar1);
    lVar1 = lVar1 + -8;
  } while (lVar1 != 0x10);
  return param_1;
}



/* Entry: 1083137e8; end: 1083137fb;  */

void FUN_1083137e8(void)

{
  func_0x0001083137a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083137fc; end: 108313837;  */

void FUN_1083137fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  lVar1 = 3;
  do {
    FUN_108291e64(param_1,0);
    param_1 = param_1 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



/* Entry: 108313838; end: 1083139a7;  */

void FUN_108313838(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [88];
  char cStack_60;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)(param_1 + (long)(int)(uint)param_2 * 8 + 0x18);
  if (*plVar7 == 0) {
    if (2 < (uint)param_2) goto LAB_108313980;
    iVar1 = *(int *)(&UNK_10df19778 + (param_2 & 0xffffffff) * 4);
    uVar4 = param_1 + 0x48;
    func_0x000108291c20(uVar4,param_2);
    uVar5 = param_1 + 0x48;
    FUN_108291c58(uVar5,param_2);
    FUN_10828a818(auStack_b8,*(undefined8 *)(param_1 + 0x40),iVar1,0);
    uVar2 = iVar1 - 1;
    FUN_108290ad0(&uStack_c0,*(undefined8 *)(param_1 + 0x38),auStack_b8,
                  *(undefined4 *)(&UNK_10df19784 + (ulong)uVar2 * 4),
                  *(undefined8 *)(&UNK_10df19798 + (ulong)uVar2 * 8),uVar4,uVar4 >> 0x20,uVar5,
                  uVar5 >> 0x20,param_1 + 8,*(undefined1 *)(param_1 + 0x10));
    uVar6 = uStack_c0;
    uStack_c0 = 0;
    FUN_108291e64(plVar7,uVar6);
    FUN_108291e40(&uStack_c0);
    lVar8 = *plVar7;
    in_ZR = cStack_60 == '\x01';
    if ((bool)in_ZR) {
      func_0x000108314328();
    }
    if (lVar8 != 0) goto LAB_10831394c;
    uVar6 = 0;
  }
  else {
LAB_10831394c:
    uVar6 = 1;
  }
  func_0x000108314378(uStack_48,uVar6);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108313980:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108313984);
  (*pcVar3)();
}



/* Entry: 1083139a8; end: 1083140ff;  */

ulong FUN_1083139a8(long param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                   long *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined8 uVar22;
  short sVar23;
  int extraout_w8;
  int extraout_w8_00;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  uint uVar27;
  byte *extraout_x10;
  byte *pbVar28;
  byte *extraout_x10_00;
  char *extraout_x11;
  char *pcVar29;
  short *extraout_x11_00;
  short *psVar30;
  ulong extraout_x12;
  ulong extraout_x12_00;
  uint uVar31;
  long lVar32;
  undefined4 *puVar33;
  ulong uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined2 *puVar39;
  uint uVar40;
  long lVar41;
  undefined8 *puVar42;
  long alStack_6a0 [130];
  ushort auStack_290 [272];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = param_6;
  (**(code **)(*param_6 + 0xc0))();
  plVar17 = param_6;
  (**(code **)(*param_6 + 0xd8))();
  plVar18 = plVar17;
  func_0x00010831434c();
  plVar19 = param_6;
  (**(code **)(*param_6 + 0xb8))(param_6);
  FUN_1083144ac(param_1,plVar19);
  if (*(long **)(param_1 + 0x28) == plVar18) {
    uVar8 = false;
    if (param_3 == *(int *)(param_1 + 0x18)) {
      (**(code **)(*plVar17 + 0x10))();
      lVar24 = *plVar17;
      func_0x00010831431c();
      uVar2 = *(uint *)(param_1 + 0x58);
      lVar41 = 4;
      for (uVar38 = 0; uVar8 = (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) == uVar38, !(bool)uVar8;
          uVar38 = uVar38 + 1) {
        if ((long)*(int *)(param_1 + 0x58) <= (long)uVar38) goto LAB_10831409c;
        uVar11 = *(uint *)(*(long *)(param_1 + 0x50) + lVar41 + -4);
        if (uVar11 < *(uint *)((long)plVar17 + 0x18c)) {
          lVar32 = *(long *)(plVar17[(ulong)uVar11 * 3 + 0x25] +
                            (ulong)*(uint *)(*(long *)(param_1 + 0x50) + lVar41) * 8);
          FUN_108291ca0(plVar17,lVar32);
          *(long *)(lVar32 + 0x28) = lVar24 + 1;
        }
        lVar41 = lVar41 + 8;
      }
    }
    uVar38 = (ulong)(uint)(param_3 - param_2);
    uVar34 = 1;
LAB_10831406c:
    func_0x000108314378(uStack_70);
    if ((bool)uVar8) {
      return uVar34 | uVar38 << 0x20;
    }
    ___stack_chk_fail();
code_r0x0001083140a4:
    FUN_10841076c(&UNK_10f48ccc4);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1083140c4);
    (*pcVar7)();
  }
  puVar25 = (undefined8 *)(param_1 + 0x60);
  *puVar25 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1083a2de8(auStack_290,*(long *)(param_1 + 0x20) + 0x10);
  (**(code **)(*plVar17 + 0x10))();
  if ((ulong)(long)param_2 <= *(ulong *)(param_1 + 0x18)) {
    uVar38 = (long)param_3 - (long)param_2;
    if (uVar38 <= *(ulong *)(param_1 + 0x18) - (long)param_2) {
      uVar37 = 0;
      puVar42 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8);
      puVar1 = puVar42 + uVar38;
      uVar2 = 0xdf19748;
      plVar18 = plVar17;
      for (; uVar8 = puVar42 == puVar1, !(bool)uVar8; puVar42 = puVar42 + 1) {
        puVar33 = (undefined4 *)*puVar42;
        func_0x00010831431c();
        uVar34 = *(ulong *)(puVar33 + 2);
        if (uVar34 == 0) {
LAB_108313bcc:
          puVar20 = auStack_290;
          FUN_1083a2edc(puVar20,*puVar33);
          (**(code **)(*param_6 + 0xb0))();
          if (*(long *)(puVar20 + 4) != 0) {
            if (5 < (ulong)(byte)puVar20[0x14]) goto LAB_10831409c;
            plVar18 = plVar16;
            FUN_1082ee93c(plVar16,*(undefined4 *)(&UNK_10df197c0 + (ulong)(byte)puVar20[0x14] * 4));
            uVar11 = (uint)plVar18;
            uVar35 = 1;
            uVar8 = param_5 == 1;
            if (!(bool)uVar8) {
              if (param_5 != 0) goto LAB_108314060;
              uVar35 = (uint)*(byte *)(plVar16 + 6);
            }
            uVar31 = (uint)*puVar20 + uVar35 * 2 << (ulong)(uVar11 & 0x1f);
            iVar12 = ((uint)puVar20[1] + uVar35 * 2) * uVar31;
            FUN_10831422c(alStack_6a0,(long)iVar12);
            lVar41 = alStack_6a0[0];
            if (uVar35 != 0) {
              if (iVar12 != 0) {
                _bzero(alStack_6a0[0],(long)iVar12);
              }
              lVar41 = lVar41 + (int)uVar31 + (long)(1 << (ulong)(uVar11 & 0x1f));
            }
            bVar3 = 0;
            uVar27 = 0;
            switch((char)puVar20[0x14]) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x05':
              break;
            case '\x03':
              bVar3 = 0;
              uVar27 = 2;
              break;
            case '\x04':
              bVar3 = 1;
              uVar27 = 1;
              break;
            default:
              goto LAB_10831409c;
            }
            uVar4 = *puVar20;
            uVar5 = puVar20[1];
            uVar40 = (uint)uVar5;
            puVar39 = *(undefined2 **)(puVar20 + 4);
            if (uVar27 == uVar11) {
              puVar21 = puVar20;
              FUN_10835399c();
              if ((char)puVar20[0x14] == '\0') {
                if (uVar11 == 1) {
                  iVar12 = 0;
                  bVar10 = true;
                  while (func_0x000108314364(iVar12), pbVar28 = extraout_x10_00,
                        psVar30 = extraout_x11_00, uVar34 = extraout_x12_00, !bVar10) {
                    while (bVar10 = (int)uVar34 == 1, 0 < (int)uVar34) {
                      bVar3 = *pbVar28;
                      uVar31 = 7;
                      while( true ) {
                        if (((int)uVar31 < 0) || ((int)uVar34 == 0)) break;
                        *psVar30 = -(ushort)((bVar3 >> (ulong)(uVar31 & 0x1f) & 1) != 0);
                        uVar31 = uVar31 - 1;
                        psVar30 = psVar30 + 1;
                        uVar34 = (ulong)((int)uVar34 - 1);
                      }
                      pbVar28 = pbVar28 + 1;
                    }
                    iVar12 = extraout_w8_00 + 1;
                  }
                }
                else {
                  if (uVar11 != 0) goto code_r0x0001083140a4;
                  iVar12 = 0;
                  bVar10 = false;
                  while (func_0x000108314364(iVar12), pbVar28 = extraout_x10, pcVar29 = extraout_x11
                        , uVar34 = extraout_x12, !bVar10) {
                    while (bVar10 = (int)uVar34 == 1, 0 < (int)uVar34) {
                      bVar3 = *pbVar28;
                      uVar31 = 7;
                      while( true ) {
                        if (((int)uVar31 < 0) || ((int)uVar34 == 0)) break;
                        *pcVar29 = -((bVar3 >> (ulong)(uVar31 & 0x1f) & 1) != 0);
                        uVar31 = uVar31 - 1;
                        pcVar29 = pcVar29 + 1;
                        uVar34 = (ulong)((int)uVar34 - 1);
                      }
                      pbVar28 = pbVar28 + 1;
                    }
                    iVar12 = extraout_w8 + 1;
                  }
                }
              }
              else if (uVar31 == (uint)puVar21) {
                _memcpy(lVar41,puVar39,uVar31 * uVar5);
              }
              else {
                for (; uVar40 != 0; uVar40 = uVar40 - 1) {
                  _memcpy(lVar41,puVar39,(uint)uVar4 << (ulong)(uVar11 & 0x1f));
                  puVar39 = (undefined2 *)((long)puVar39 + (long)puVar21);
                  lVar41 = lVar41 + (int)uVar31;
                }
              }
            }
            else {
              bVar10 = (bool)(bVar3 ^ 1);
              if (uVar11 != 2) {
                bVar10 = true;
              }
              if (bVar10) goto LAB_10831409c;
              for (uVar27 = 0; uVar27 != uVar40; uVar27 = uVar27 + 1) {
                for (lVar24 = 0; (uint)uVar4 << 2 != (int)lVar24; lVar24 = lVar24 + 4) {
                  uVar6 = *puVar39;
                  uVar13 = uVar2;
                  func_0x00010836039c(&UNK_10df19748,uVar6);
                  uVar14 = uVar2;
                  func_0x0001083603ec(&UNK_10df19748,uVar6);
                  uVar15 = uVar2;
                  func_0x0001083603fc(&UNK_10df19748,uVar6);
                  *(uint *)(lVar41 + lVar24) = uVar13 | uVar14 << 8 | uVar15 << 0x10 | 0xff000000;
                  puVar39 = puVar39 + 1;
                }
                lVar41 = lVar41 + (ulong)uVar31;
              }
            }
            plVar18 = plVar16;
            FUN_1082ee9dc(plVar16,uVar11);
            FUN_108291394();
            iVar12 = (int)plVar18;
            uVar8 = iVar12 == 1;
            if ((bool)uVar8) {
              sVar23 = (short)uVar35;
              uVar22 = *(undefined8 *)(puVar33 + 4);
              *(ulong *)(puVar33 + 4) =
                   CONCAT26((short)((ulong)uVar22 >> 0x30) - sVar23,
                            CONCAT24((short)((ulong)uVar22 >> 0x20) - sVar23,
                                     CONCAT22((short)((ulong)uVar22 >> 0x10) + sVar23,
                                              (short)uVar22 + sVar23)));
              func_0x000108314344();
              uVar34 = *(ulong *)(puVar33 + 2);
              uVar36 = uVar34 >> 0x38;
              uVar26 = uVar34 >> 0x30 & 0xff;
              goto LAB_108313dac;
            }
            func_0x000108314344();
            uVar38 = uVar37;
            if (iVar12 != 0) break;
          }
LAB_108314060:
          uVar34 = 0;
          uVar38 = uVar37;
          goto LAB_108314064;
        }
        uVar26 = uVar34 >> 0x30 & 0xff;
        uVar8 = (uint)uVar26 == *(uint *)(plVar18 + 0x12);
        if (*(uint *)(plVar18 + 0x12) <= (uint)uVar26) goto LAB_108313bcc;
        uVar36 = uVar34 >> 0x38;
        bVar10 = (uint)(byte)(uVar34 >> 0x38) < *(uint *)((long)plVar18 + 0x18c);
        bVar9 = *(ulong *)(*(long *)(plVar18[uVar36 * 3 + 0x25] + uVar26 * 8) + 0x40) ==
                (uVar34 & 0xffffffffffff);
        uVar8 = bVar10 && bVar9;
        if (!bVar10 || !bVar9) goto LAB_108313bcc;
LAB_108313dac:
        uVar11 = *(uint *)((long)puVar25 + uVar36 * 4);
        uVar35 = 1 << (ulong)((uint)uVar26 & 0x1f);
        if ((uVar35 & uVar11) == 0) {
          lVar41 = *plVar17;
          *(uint *)((long)puVar25 + uVar36 * 4) = uVar35 | uVar11;
          uVar36 = uVar36 | (uVar34 >> 0x30 & 0xff) << 0x20;
          if (*(int *)(param_1 + 0x58) < (int)(*(uint *)(param_1 + 0x5c) >> 1)) {
            *(ulong *)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x58) * 8) = uVar36;
          }
          else {
            lVar24 = param_1 + 0x50;
            uVar22 = 1;
            FUN_10831416c(0x3ff8000000000000,lVar24,1);
            *(ulong *)(lVar24 + (long)*(int *)(param_1 + 0x58) * 8) = uVar36;
            plVar18 = (long *)(param_1 + 0x50);
            FUN_108314190(plVar18,lVar24,uVar22);
          }
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          func_0x00010831431c();
          uVar34 = *(ulong *)(puVar33 + 2);
          lVar24 = *(long *)(plVar18[(uVar34 >> 0x38) * 3 + 0x25] + (uVar34 >> 0x30 & 0xff) * 8);
          FUN_108291ca0();
          *(long *)(lVar24 + 0x28) = lVar41 + 1;
        }
        uVar37 = (ulong)((int)uVar37 + 1);
      }
      uVar8 = (int)uVar38 + param_2 == *(int *)(param_1 + 0x18);
      if ((bool)uVar8) {
        func_0x00010831434c();
        *(long **)(param_1 + 0x28) = plVar18;
      }
      uVar34 = 1;
LAB_108314064:
      FUN_1083a2e24(auStack_290);
      goto LAB_10831406c;
    }
  }
LAB_10831409c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1083140a0);
  (*pcVar7)();
}



/* Entry: 108314100; end: 108314117;  */

undefined8 FUN_108314100(long param_1)

{
  FUN_1082ee9dc();
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108314118; end: 10831411f;  */

undefined8 FUN_108314118(void)

{
  return 1;
}



/* Entry: 108314120; end: 108314163;  */

void FUN_108314120(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = 0; lVar2 != 0x18; lVar2 = lVar2 + 8) {
    lVar1 = *(long *)(param_1 + 0x18 + lVar2);
    if (lVar1 != 0) {
      FUN_108291800(lVar1,param_2);
    }
  }
  return;
}



/* Entry: 108314164; end: 10831416b;  */

undefined8 FUN_108314164(void)

{
  return 1;
}



/* Entry: 10831416c; end: 10831418f;  */

void FUN_10831416c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_108314190;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 1) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108314190; end: 1083141fb;  */

void FUN_108314190(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1083141fc; end: 10831422b;  */

void FUN_1083141fc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10831422c; end: 10831425f;  */

long * FUN_10831422c(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x400;
  FUN_108314260(param_1,param_2,0,0);
  return param_1;
}



/* Entry: 108314260; end: 1083142eb;  */

ulong * FUN_108314260(ulong *param_1,ulong *param_2,int param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar1 = param_2;
  if (param_2 < (ulong *)0x401) {
    puVar1 = (ulong *)0x400;
  }
  puVar3 = (ulong *)param_1[1];
  if (param_4 != 0) {
    *(bool *)param_4 = puVar1 != puVar3 && (param_3 == 0 || puVar3 < puVar1);
  }
  puVar2 = (ulong *)*param_1;
  if (puVar1 != puVar3 && (param_3 == 0 || puVar3 < puVar1)) {
    if (puVar2 != param_1 + 2) {
      _free();
    }
    puVar2 = param_1 + 2;
    if ((ulong *)0x400 < param_2) {
      puVar2 = puVar1;
      FUN_108410808(puVar1,2);
    }
    *param_1 = (ulong)puVar2;
    param_1[1] = (ulong)puVar1;
  }
  return puVar2;
}



/* Entry: 1083142ec; end: 10831431b;  */

long * FUN_1083142ec(long *param_1)

{
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 10831431c; end: 10831438b;  */

undefined8 FUN_10831431c(void)

{
  long lVar1;
  long unaff_x24;
  
  lVar1 = unaff_x24;
  FUN_1082ee93c();
  return *(undefined8 *)(unaff_x24 + (long)(int)lVar1 * 8 + 0x18);
}



/* Entry: 10831438c; end: 1083143cb;  */

void FUN_10831438c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_108404c20();
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x50) = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x58) = 0x800000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 1083143cc; end: 1083144ab;  */

void FUN_1083143cc(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  ulong uVar2;
  
  FUN_108314960(param_5,param_4);
  uVar2 = 0;
  while( true ) {
    if (((uint)param_4 & ((int)(uint)param_4 >> 0x1f ^ 0xffffffffU)) == uVar2) {
      FUN_108404c20(param_1,param_2);
      *(long *)(param_1 + 0x10) = param_5;
      *(ulong *)(param_1 + 0x18) = param_4;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long *)(param_1 + 0x50) = param_1 + 0x30;
      *(undefined8 *)(param_1 + 0x58) = 0x800000000;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return;
    }
    if (param_4 == uVar2) break;
    *(ulong *)(param_5 + uVar2 * 8) = (ulong)*(uint *)(param_3 + uVar2 * 4);
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108314444);
  (*pcVar1)();
}



/* Entry: 1083144ac; end: 108314573;  */

void FUN_1083144ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_48;
  
  plVar5 = (long *)(param_1 + 0x20);
  if (*plVar5 == 0) {
    lVar3 = param_1;
    FUN_108404a94();
    FUN_108315754(&uStack_48,param_2,lVar3 + 0x68);
    uVar2 = uStack_48;
    uStack_48 = 0;
    FUN_108314a44(plVar5,uVar2);
    FUN_108314884(uStack_48);
    plVar1 = *(long **)(param_1 + 0x10);
    for (lVar6 = *(long *)(param_1 + 0x18) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      lVar4 = *plVar5;
      FUN_108315ac8(lVar4,(int)*plVar1);
      *plVar1 = lVar4;
      plVar1 = plVar1 + 1;
    }
    if (*(long **)(lVar3 + 0x188) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 0x188) + 0x18))();
    }
    FUN_108404b40(param_1);
  }
  return;
}



/* Entry: 108314574; end: 1083145c7;  */

void FUN_108314574(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 8) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a3b9d8)[*(uint *)(param_1 + 8)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



/* Entry: 1083145c8; end: 1083145d7;  */

long * FUN_1083145c8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_2;
}



/* Entry: 1083145d8; end: 108314623;  */

long * FUN_1083145d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 108314624; end: 108314647;  */

undefined8 FUN_108314624(undefined8 param_1)

{
  FUN_108314648(param_1,0);
  return param_1;
}



/* Entry: 108314648; end: 10831465f;  */

void FUN_108314648(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001083a261c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108314660; end: 10831467b;  */

void FUN_108314660(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001083a261c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10831467c; end: 1083146eb;  */

long FUN_10831467c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1;
  FUN_108404c20();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  FUN_1083146ec(lVar5 + 0x30,param_2 + 0x30);
  return param_1;
}



/* Entry: 1083146ec; end: 10831470f;  */

void FUN_1083146ec(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_108314710();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}


