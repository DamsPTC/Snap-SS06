/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082c612c; end: 1082c6283;  */

void FUN_1082c612c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined8 *in_x6;
  undefined8 extraout_x8;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  
  func_0x0001082c65f4();
  fStack_60 = (float)(int)((float)*in_x6 + -1.5) + 0.5;
  fStack_58 = (float)(int)((float)((ulong)*in_x6 >> 0x20) + -1.5) + 0.5;
  fVar3 = (float)(int)((float)in_x6[1] + 1.5) + -0.5;
  fVar4 = (float)(int)((float)((ulong)in_x6[1] >> 0x20) + 1.5) + -0.5;
  auVar5._4_4_ = fStack_58;
  auVar5._0_4_ = fStack_60;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar4;
  auVar1._4_4_ = fStack_58;
  auVar1._0_4_ = fStack_60;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar4;
  auVar5 = NEON_ext(auVar5,auVar1,8,1);
  uStack_5c = auVar5._0_4_;
  uStack_54 = auVar5._4_4_;
  func_0x0001082c64f0();
  puVar2 = auStack_78;
  FUN_1082cdf9c(auStack_68);
  func_0x0001082c6514();
  func_0x0001082c6598();
  func_0x0001082c65a8();
  FUN_1082c6284();
  puStack_80 = puVar2;
  FUN_1082c8ba8(extraout_x8,param_3,&puStack_80);
  if (puStack_80 != (undefined1 *)0x0) {
    func_0x0001082c64e4();
  }
  if (lStack_88 != 0) {
    func_0x0001082c64e4();
  }
  return;
}



/* Entry: 1082c6284; end: 1082c634f;  */

undefined8 *
FUN_1082c6284(undefined4 param_1,undefined4 param_2,undefined8 *param_3,long *param_4,
             undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  long lStack_28;
  
  if (*param_4 == 0) {
    uVar2 = 0x17;
  }
  else {
    uVar2 = *(uint *)(*param_4 + 0x30) & 7 | 0x10;
  }
  *(undefined4 *)(param_3 + 1) = 0x17;
  param_3[3] = param_3 + 2;
  param_3[4] = 0x200000000;
  param_3[5] = 0;
  *(undefined1 *)(param_3 + 7) = 0;
  *param_3 = &PTR_FUN_110a37758;
  *(undefined4 *)((long)param_3 + 0x3c) = param_1;
  *(undefined4 *)(param_3 + 8) = param_2;
  *(undefined4 *)((long)param_3 + 0x44) = param_5;
  *(undefined4 *)(param_3 + 9) = param_6;
  *(uint *)(param_3 + 6) = uVar2;
  *(undefined4 *)((long)param_3 + 0x34) = 0;
  lStack_28 = *param_4;
  *param_4 = 0;
  FUN_108296280(param_3,&lStack_28,4);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    FUN_1082c64e4();
  }
  return param_3;
}



/* Entry: 1082c6350; end: 1082c637b;  */

void FUN_1082c6350(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c6378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,*(uint *)(param_1 + 0x44) | *(int *)(param_1 + 0x48) << 2,"unknown",7);
  return;
}



/* Entry: 1082c637c; end: 1082c63d7;  */

void FUN_1082c637c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[5] = 0;
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110a377a8;
  uVar2 = NEON_fmov(0xbf800000,4);
  puVar1[3] = 0x100000000;
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c63d8; end: 1082c6443;  */

bool FUN_1082c63d8(long param_1,long param_2)

{
  if (((*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44)) &&
      (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
     (*(float *)(param_1 + 0x3c) == *(float *)(param_2 + 0x3c))) {
    return *(float *)(param_1 + 0x40) == *(float *)(param_2 + 0x40);
  }
  return false;
}



/* Entry: 1082c6444; end: 1082c6457;  */

void FUN_1082c6444(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c6458; end: 1082c645b;  */

undefined8 * FUN_1082c6458(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082c645c; end: 1082c646f;  */

void FUN_1082c645c(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c6470; end: 1082c647b;  */

undefined * FUN_1082c6470(void)

{
  return &UNK_10f48494d;
}



/* Entry: 1082c647c; end: 1082c64e3;  */

void FUN_1082c647c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  func_0x0001082c6598();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a37758;
  *(undefined8 *)((long)puVar1 + 0x3c) = *(undefined8 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c64e4; end: 1082c65ff;  */

void FUN_1082c64e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c64ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082c6600; end: 1082c6887;  */

undefined8 *
FUN_1082c6600(undefined8 *param_1,long param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
             long *param_6,uint param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
             uint param_11,undefined4 param_12,undefined8 *param_13,char param_14)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined2 uStack_62;
  
  lVar7 = 0;
  *(undefined4 *)(param_1 + 1) = 0x18;
  *param_1 = &PTR_FUN_110a37808;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar5 = *param_3;
  *(undefined8 *)((long)param_1 + 0x4c) = param_3[1];
  *(undefined8 *)((long)param_1 + 0x44) = uVar5;
  uVar5 = *param_5;
  *param_5 = 0;
  param_1[0xb] = uVar5;
  uVar8 = param_13[1];
  uVar5 = *param_13;
  uVar10 = param_13[3];
  uVar9 = param_13[2];
  param_1[0x10] = param_13[4];
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar5;
  *(char *)(param_1 + 0x11) = param_14;
  puVar2 = param_1 + 0x13;
  do {
    func_0x0001082c6adc((long)param_1 + lVar7 + 0x98);
    lVar7 = lVar7 + 0x88;
  } while (lVar7 != 0x220);
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 1;
  *(uint *)(param_1 + 0x60) = param_11;
  uVar3 = 1;
  if (param_14 != '\0') {
    uVar3 = 2;
  }
  uVar4 = 0xe;
  if (param_14 != '\0') {
    uVar4 = 0xf;
  }
  param_1[0x57] = &UNK_10f481dd5;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2c4) = uVar4;
  *(undefined4 *)(param_1 + 0x59) = 1;
  if (param_11 < 2) {
    uVar3 = 3;
    if (param_4 == 0) {
      uVar3 = 0x11;
    }
    param_1[0x5a] = &UNK_10f481de0;
    *(undefined4 *)(param_1 + 0x5b) = uVar3;
    *(undefined1 *)((long)param_1 + 0x2dc) = 0x17;
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  cVar1 = *(char *)(param_2 + 7);
  param_1[0x5d] = &UNK_10f484955;
  *(undefined4 *)(param_1 + 0x5e) = 0x14;
  uVar4 = 10;
  if (cVar1 == '\0') {
    uVar4 = 0xe;
  }
  *(undefined1 *)((long)param_1 + 0x2f4) = uVar4;
  *(undefined4 *)(param_1 + 0x5f) = 1;
  FUN_10829e324(param_1 + 2,param_1 + 0x57,3);
  if (param_7 != 0) {
    *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)(*param_6 + 0x90);
  }
  for (uVar6 = (ulong)(param_7 & ((int)param_7 >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    uStack_62 = *(undefined2 *)((long)param_6 + 0xc);
    FUN_10829c7b0(puVar2,param_9,param_10,*param_6 + 0x20,&uStack_62);
    param_6 = param_6 + 2;
    puVar2 = puVar2 + 0x11;
  }
  *(uint *)(param_1 + 8) = param_7;
  return param_1;
}



/* Entry: 1082c6888; end: 1082c693b;  */

void FUN_1082c6888(long param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined2 uStack_52;
  
  if (3 < (int)param_3) {
    param_3 = 4;
  }
  lVar1 = param_1 + 0x98;
  if ((*(byte *)(param_1 + 0x11a) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(*param_2 + 0x90);
  }
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    if ((*(byte *)(lVar1 + 0x82) & 1) == 0) {
      uStack_52 = *(undefined2 *)((long)param_2 + 0xc);
      FUN_10829c7b0(lVar1,param_4,param_5,*param_2 + 0x20,&uStack_52);
    }
    lVar1 = lVar1 + 0x88;
    param_2 = param_2 + 2;
  }
  *(uint *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1082c693c; end: 1082c6a1b;  */

void FUN_1082c693c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  
  func_0x0001082c70b0(param_1,param_2,*(undefined1 *)(param_1 + 0x88));
  (*extraout_x8)(param_3,1);
  func_0x0001082c70b0();
  (*extraout_x8_00)(param_3,2);
  FUN_10828e2dc(param_2,param_1 + 0x60);
  func_0x0001082c70b0();
  (*extraout_x8_01)(param_3,2);
  func_0x0001082c70b0();
  (*extraout_x8_02)(param_3,0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_10828b1a4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001082c6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,&UNK_10f484992,0xf);
  return;
}



/* Entry: 1082c6a1c; end: 1082c6aa7;  */

void FUN_1082c6a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  _bzero();
  puVar4[7] = 0xff800000ff800000;
  puVar4[6] = 0xff800000ff800000;
  puVar4[8] = 0xffffffffffffffff;
  uVar3 = uRam0000000113254e60;
  uVar2 = uRam0000000113254e58;
  uVar1 = uRam0000000113254e48;
  puVar4[10] = uRam0000000113254e50;
  puVar4[9] = uVar1;
  *(undefined4 *)(puVar4 + 5) = 0x3f800000;
  *puVar4 = &PTR_FUN_110a37860;
  puVar4[0xc] = uVar3;
  puVar4[0xb] = uVar2;
  puVar4[0xd] = uRam0000000113254e68;
  puVar4[0xe] = 0xffffffffffffffff;
  puVar4[0xf] = 0xffffffffffffffff;
  puVar4[0x10] = 0xffffffffffffffff;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *(undefined1 *)((long)puVar4 + 0x8c) = 0;
  *param_1 = puVar4;
  return;
}



/* Entry: 1082c6aa8; end: 1082c6aab;  */

undefined8 * FUN_1082c6aa8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a37808;
  lVar1 = 0x220;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x78) == '\x01') {
      (*(code *)**(undefined8 **)((long)param_1 + lVar1 + 0x28))();
    }
    *(undefined1 *)((long)param_1 + lVar1 + 0x78) = 0;
    lVar1 = lVar1 + -0x88;
  } while (lVar1 != 0);
  FUN_10827f5a4(param_1 + 0xb);
  return param_1;
}



/* Entry: 1082c6aac; end: 1082c6abf;  */

void FUN_1082c6aac(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082c6b08();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c6ac0; end: 1082c6b07;  */

undefined * FUN_1082c6ac0(void)

{
  return &UNK_10f4849a2;
}



/* Entry: 1082c6b08; end: 1082c6b73;  */

undefined8 * FUN_1082c6b08(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110a37808;
  lVar1 = 0x220;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x78) == '\x01') {
      (*(code *)**(undefined8 **)((long)param_1 + lVar1 + 0x28))();
    }
    *(undefined1 *)((long)param_1 + lVar1 + 0x78) = 0;
    lVar1 = lVar1 + -0x88;
  } while (lVar1 != 0);
  FUN_10827f5a4(param_1 + 0xb);
  return param_1;
}



/* Entry: 1082c6b74; end: 1082c6b77;  */

undefined8 * FUN_1082c6b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082c6b78; end: 1082c6b8b;  */

void FUN_1082c6b78(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c6b8c; end: 1082c6c5f;  */

void FUN_1082c6b8c(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4 + 0x44;
  FUN_10828e84c(lVar1,param_1 + 0x30);
  if (((int)lVar1 != 0) && (*(char *)(param_4 + 0x2dc) == '\0')) {
    (**(code **)(*param_2 + 0x88))(param_2,*(undefined4 *)(param_1 + 0x70),1,param_4 + 0x44);
    uVar2 = *(undefined8 *)(param_4 + 0x44);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 0x4c);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_4 + 0x8c) ||
      *(int *)(param_1 + 0x44) != *(int *)(param_4 + 0x90)) {
    (**(code **)(*param_2 + 0x40))
              (1.0 / (float)*(int *)(param_4 + 0x8c),1.0 / (float)*(int *)(param_4 + 0x90),param_2,
               *(undefined4 *)(param_1 + 0x74));
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_4 + 0x8c);
  }
  FUN_10829dcd4(param_2,param_3,param_1 + 0x78,param_4 + 0x60,param_1 + 0x48);
  lVar1 = *(long *)(param_4 + 0x58);
  if (*(char *)(param_1 + 0x89) == '\x01') {
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x7c),7,lVar1 + 0x14);
  }
  if (*(char *)(param_1 + 0x8a) == '\x01') {
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined4 *)(param_1 + 0x80),lVar1 + 0x4c);
  }
  if (*(char *)(param_1 + 0x8b) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010828bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x84),7,lVar1 + 0x30);
    return;
  }
  return;
}



/* Entry: 1082c6c60; end: 1082c7053;  */

void FUN_1082c6c60(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  lVar6 = param_2[5];
  uVar8 = *param_2;
  uVar9 = param_2[2];
  uVar3 = param_2[3];
  FUN_10828ba0c(param_1 + 0x7c,uVar3,*(undefined8 *)(lVar6 + 0x58),2);
  FUN_1082dd9a4(uVar9,lVar6);
  uVar5 = uVar3;
  func_0x00010828bb5c(uVar3,0,1,0xe,&UNK_10f4849ad,auStack_70);
  *(int *)(param_1 + 0x74) = (int)uVar5;
  puVar2 = &UNK_10f484a08;
  if (1 < *(int *)(lVar6 + 0x40)) {
    puVar2 = &UNK_10f484a43;
  }
  puVar1 = &UNK_10f484abb;
  if (1 < *(int *)(lVar6 + 0x40)) {
    puVar1 = &UNK_10f484af8;
  }
  if (*(char *)(param_2[4] + 7) == '\0') {
    puVar2 = puVar1;
  }
  FUN_10828bae8(*param_2,puVar2);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0xe;
  FUN_1082dd868(param_2[2],&UNK_10f484b8a,&uStack_88,0);
  FUN_10828bae8(*param_2,&UNK_10f484b98);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0xd;
  FUN_1082dd868(param_2[2],&UNK_10f484bb2,&uStack_a0,1);
  FUN_10828bae8(*param_2,&UNK_10f484bbb);
  lVar7 = param_2[1];
  func_0x0001082c7084();
  func_0x0001082c70a0();
  if (*(char *)(lVar6 + 0x2dc) == '\0') {
    FUN_10829dc20(param_1,lVar7,uVar3,param_2[6],param_1 + 0x70);
  }
  else {
    func_0x00010828e8b0(auStack_c8,lVar6 + 0x2d0);
    FUN_1082dd7c8(uVar9,auStack_c8,param_2[6],0);
    func_0x00010827024c(auStack_c8);
  }
  func_0x00010828e8b0(auStack_c8,lVar6 + 0x2b8);
  FUN_10827535c(param_3,auStack_c8);
  func_0x00010827024c(auStack_c8);
  uVar9 = param_2[4];
  func_0x00010828e8b0(auStack_f0,lVar6 + 0x2b8);
  FUN_10829e1b8(uVar8,uVar3,uVar9,param_3,auStack_f0,lVar6 + 0x60,param_1 + 0x78);
  func_0x00010827024c(auStack_f0);
  func_0x0001082c7084();
  func_0x0001082c70a8();
  iVar4 = *(int *)(lVar6 + 0x40);
  if (iVar4 < 1) {
    func_0x0001082c7074();
    FUN_10828bae8(extraout_x8_02 + extraout_x9_02,&UNK_10f484bcc);
  }
  else {
    for (uVar10 = 0; func_0x0001082c7074(), iVar4 - 1 != uVar10; uVar10 = uVar10 + 1) {
      FUN_10828bae8(extraout_x8 + extraout_x9,&UNK_10f484bdc);
      func_0x0001082c7074();
      func_0x0001082c7090();
      func_0x0001082c7074();
      FUN_10829dbfc(extraout_x8_00 + extraout_x9_00,&UNK_10f484bf2);
    }
    FUN_10828bae8(extraout_x8 + extraout_x9,&UNK_10f484bfc);
    func_0x0001082c7074();
    func_0x0001082c7090();
    func_0x0001082c7074();
    FUN_10829dbfc(extraout_x8_01 + extraout_x9_01,&UNK_10f484c04);
  }
  uVar10 = param_1 + 0x7c;
  FUN_1082c7054();
  if ((uVar10 & 1) == 0) {
    func_0x0001082c7084();
    func_0x0001082c70a8();
    func_0x0001082c7084();
    FUN_1082dc9e0(lVar7 + extraout_x8_03,&DAT_10f4849ca,param_1 + 0x7c);
    func_0x0001082c7084();
    func_0x0001082c70a8();
  }
  func_0x0001082c7084();
  if (extraout_w9 == 2) {
    func_0x0001082c70a0();
    func_0x0001082c7084();
  }
  func_0x0001082c70a0();
  return;
}



/* Entry: 1082c7054; end: 1082c7073;  */

bool FUN_1082c7054(long param_1)

{
  param_1 = param_1 + 0xc;
  FUN_10828b104(param_1);
  return (int)param_1 == 0;
}



/* Entry: 1082c7074; end: 1082c70bb;  */

void FUN_1082c7074(void)

{
  return;
}



/* Entry: 1082c70bc; end: 1082c7127;  */

void FUN_1082c70bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a378a8;
  *(undefined4 *)((long)puVar1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c7128; end: 1082c717f;  */

void FUN_1082c7128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_FUN_110a37910;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c7180; end: 1082c71ff;  */

void FUN_1082c7180(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (2 < param_3) {
    uVar1 = param_4;
  }
  uStack_28 = *param_1;
  *param_1 = 0;
  uStack_30 = *param_2;
  *param_2 = 0;
  puVar2 = &uStack_28;
  FUN_1082c7200(puVar2,&uStack_30,param_3,uVar1);
  func_0x0001082c776c();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001082c7744();
  }
  func_0x0001082c7760();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001082c7744();
  }
  return;
}



/* Entry: 1082c7200; end: 1082c72bf;  */

void FUN_1082c7200(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x48;
  FUN_1082a37b0();
  *param_2 = 0;
  *param_3 = 0;
  lVar2 = lVar1;
  FUN_1082c73cc();
  *param_1 = lVar1;
  func_0x0001082c776c();
  if (lVar2 != 0) {
    func_0x0001082c7744();
  }
  func_0x0001082c7760();
  if (lVar2 != 0) {
    func_0x0001082c7744();
  }
  return;
}



/* Entry: 1082c72c0; end: 1082c72c3;  */

undefined8 * FUN_1082c72c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082c72c4; end: 1082c72d7;  */

void FUN_1082c72c4(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c72d8; end: 1082c72e3;  */

undefined * FUN_1082c72d8(void)

{
  return &DAT_10f484c08;
}



/* Entry: 1082c72e4; end: 1082c7363;  */

void FUN_1082c72e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((0 < *(int *)(param_5 + 0x20)) && (*(int *)(param_5 + 0x20) != 1)) {
    uVar1 = (*(undefined8 **)(param_5 + 0x18))[1];
    FUN_10828b624(**(undefined8 **)(param_5 + 0x18));
    uStack_40 = param_1;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    FUN_10828b624(uVar1,param_6);
    uStack_50 = param_1;
    uStack_4c = param_2;
    uStack_48 = param_3;
    uStack_44 = param_4;
    FUN_1083338fc(*(undefined4 *)(param_5 + 0x3c),&uStack_40,&uStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082c7364);
  (*pcVar2)();
}



/* Entry: 1082c7364; end: 1082c73b7;  */

void FUN_1082c7364(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1082d9f10(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001082c73b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,"unknown",7);
  return;
}



/* Entry: 1082c73b8; end: 1082c73cb;  */

bool FUN_1082c73b8(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c);
}



/* Entry: 1082c73cc; end: 1082c75c3;  */

undefined8 *
FUN_1082c73cc(undefined8 *param_1,long *param_2,long *param_3,int param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lStack_28;
  
  uVar4 = 0;
  lVar3 = *param_2;
  lVar2 = *param_3;
  switch(param_4) {
  case 1:
    if (lVar3 == 0) {
      uVar4 = 3;
    }
    else {
      uVar4 = *(uint *)(lVar3 + 0x30) & 3;
      if ((*(uint *)(lVar3 + 0x30) >> 2 & 1) == 0) goto LAB_1082c74ec;
    }
    goto joined_r0x0001082c74dc;
  case 2:
    uVar4 = 3;
    goto joined_r0x0001082c7480;
  case 3:
  case 4:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    if (lVar3 == 0) {
      uVar4 = 7;
      if (lVar2 != 0) goto code_r0x0001082c7420;
code_r0x0001082c7430:
      uVar5 = 7;
    }
    else {
      uVar4 = *(uint *)(lVar3 + 0x30);
      if (lVar2 == 0) goto code_r0x0001082c7430;
code_r0x0001082c7420:
      uVar5 = *(uint *)(lVar2 + 0x30);
    }
    uVar4 = (uVar5 | uVar4) & 2;
  default:
    if (0x18 < param_4) goto LAB_1082c74ec;
    break;
  case 5:
  case 6:
  case 0xd:
    if ((lVar3 == 0) || (lVar2 == 0)) {
      if (lVar3 == 0) {
        if (lVar2 == 0) {
          uVar4 = 0;
          break;
        }
        uVar4 = *(uint *)(lVar2 + 0x30);
      }
      else {
        uVar4 = *(uint *)(lVar3 + 0x30);
      }
      uVar4 = uVar4 & 3;
    }
    else {
      uVar4 = *(uint *)(lVar3 + 0x30) & *(uint *)(lVar2 + 0x30);
code_r0x0001082c7468:
      uVar4 = uVar4 & 2;
    }
    break;
  case 9:
    uVar4 = 2;
joined_r0x0001082c7480:
    if (lVar2 != 0) {
      uVar4 = *(uint *)(lVar2 + 0x30) & uVar4;
    }
    goto code_r0x0001082c74d0;
  case 10:
  case 0xe:
    if (lVar3 != 0) {
      uVar4 = *(uint *)(lVar3 + 0x30);
      goto code_r0x0001082c7468;
    }
    uVar4 = 2;
  }
  if (param_4 != 0x13 && param_4 != 0x15) {
code_r0x0001082c74d0:
    if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x30) >> 2 & 1) != 0)) {
joined_r0x0001082c74dc:
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x30) >> 2 & 1) != 0)) {
        uVar4 = uVar4 | 4;
      }
    }
  }
LAB_1082c74ec:
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a378a8;
  *(int *)((long)param_1 + 0x3c) = param_4;
  *(undefined1 *)(param_1 + 8) = param_5;
  *(uint *)(param_1 + 6) = uVar4 | 0x20;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  lStack_28 = *param_2;
  *param_2 = 0;
  puVar1 = param_1;
  func_0x0001082c7778(param_1,&lStack_28);
  func_0x0001082c7760();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001082c7744();
  }
  *param_3 = 0;
  func_0x0001082c7778();
  func_0x0001082c776c();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001082c7744();
  }
  return param_1;
}



/* Entry: 1082c75c4; end: 1082c75c7;  */

undefined8 * FUN_1082c75c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082c75c8; end: 1082c75db;  */

void FUN_1082c75c8(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c75dc; end: 1082c771f;  */

void FUN_1082c75dc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  plVar2 = (long *)*param_2;
  lVar3 = param_2[3];
  uVar1 = *(undefined4 *)(lVar3 + 0x3c);
  func_0x0001082c7750(&lStack_48,param_1,0);
  func_0x0001082c7750(&lStack_50,param_1,1);
  if (*(char *)(lVar3 + 0x40) == '\x01') {
    FUN_1082d9e58(auStack_68,param_2[3],param_2[1],param_1 + 0x20,lStack_48 + 8,lStack_50 + 8,uVar1)
    ;
    FUN_10828bae8((long)plVar2 + *(long *)(*plVar2 + -0x18),&UNK_10f481d01);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  else {
    lVar3 = *(long *)(*plVar2 + -0x18);
    FUN_10831fba4();
    FUN_10828bae8((long)plVar2 + lVar3,&UNK_10f484c0e);
  }
  FUN_1083a3ca0(lStack_50);
  FUN_1083a3ca0(lStack_48);
  return;
}



/* Entry: 1082c7720; end: 1082c778b;  */

void FUN_1082c7720(long param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 auStack_38 [8];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_3 + 0x40) == '\x01') {
    FUN_10831fbe8(auStack_38,*(undefined4 *)(param_3 + 0x3c),*(undefined4 *)(param_1 + 0x20));
    switch(uStack_28) {
    case 1:
      FUN_1082da030(*puStack_30);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8 + 0x20))(param_2);
      return;
    case 2:
      FUN_1082da030(*puStack_30,puStack_30[1]);
                    /* WARNING: Could not recover jumptable at 0x0001082da01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_02 + 0x40))(param_2);
      return;
    case 3:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x60))(param_2);
      return;
    case 4:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2],puStack_30[3]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_01 + 0x80))(param_2);
      return;
    default:
      return;
    }
  }
  return;
}



/* Entry: 1082c778c; end: 1082c78c3;  */

undefined8 * FUN_1082c778c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  long lStack_28;
  
  *(undefined4 *)(param_1 + 1) = 9;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a37958;
  uStack_38 = *param_3;
  *param_3 = 0;
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined2 *)((long)param_3 + 0xc);
  FUN_1082cdd5c(&lStack_28,&uStack_38,0,0x113254e20,0,0);
  FUN_108296280(param_1,&lStack_28,4);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001082c7c2c();
  }
  FUN_1082764bc(&uStack_38);
  lStack_40 = *param_2;
  *param_2 = 0;
  FUN_108296280(param_1,&lStack_40,1);
  lVar1 = lStack_40;
  lStack_40 = 0;
  if (lVar1 != 0) {
    func_0x0001082c7c2c();
  }
  return param_1;
}



/* Entry: 1082c78c4; end: 1082c790f;  */

void FUN_1082c78c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_DAT_110a379c0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c7910; end: 1082c7a2b;  */

void FUN_1082c7910(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  long lStack_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  FUN_1082b8344(&lStack_58,param_3,param_4,&UNK_10f484c21,0x14,0);
  lVar1 = lStack_58;
  lStack_58 = 0;
  lStack_40 = lVar1;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_1082764bc(&lStack_58);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    uVar2 = 0x40;
    FUN_1082a37b0();
    lStack_70 = lStack_40;
    lStack_60 = *param_2;
    *param_2 = 0;
    lStack_40 = 0;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    FUN_1082c778c();
    *param_1 = uVar2;
    FUN_1082764bc(&lStack_70);
    if (lStack_60 != 0) {
      func_0x0001082c7c2c();
    }
  }
  FUN_1082764bc(&lStack_40);
  return;
}



/* Entry: 1082c7a2c; end: 1082c7a2f;  */

undefined8 * FUN_1082c7a2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082c7a30; end: 1082c7a43;  */

void FUN_1082c7a30(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c7a44; end: 1082c7a4f;  */

undefined * FUN_1082c7a44(void)

{
  return &UNK_10f484c36;
}



/* Entry: 1082c7a50; end: 1082c7aab;  */

void FUN_1082c7a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a37958;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c7aac; end: 1082c7abb;  */

void FUN_1082c7aac(void)

{
  return;
}



/* Entry: 1082c7abc; end: 1082c7acf;  */

void FUN_1082c7abc(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c7ad0; end: 1082c7c17;  */

void FUN_1082c7ad0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)*param_2;
  FUN_10828bad0(&uStack_38,param_1,1,param_2,0,0);
  FUN_1082c7c18(&uStack_40);
  FUN_1082c7c18(&uStack_48);
  FUN_1082c7c18(&uStack_50);
  FUN_1082c7c18(&uStack_58);
  FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f484c97);
  FUN_1083a3ca0(uStack_58);
  FUN_1083a3ca0(uStack_50);
  FUN_1083a3ca0(uStack_48);
  FUN_1083a3ca0(uStack_40);
  FUN_1083a3ca0(uStack_38);
  return;
}



/* Entry: 1082c7c18; end: 1082c7c3f;  */

/* WARNING: Removing unreachable block (ram,0x000108297c18) */
/* WARNING: Removing unreachable block (ram,0x000108297ce0) */

undefined8 * FUN_1082c7c18(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  lVar2 = unaff_x19[4];
  if (0 < *(int *)(unaff_x19[3] + 0x20)) {
    lVar3 = **(long **)(unaff_x19[3] + 0x18);
    if (lVar3 == 0) {
      lVar3 = lVar2;
      func_0x0001083a3dfc(param_1);
      if (lVar3 != 0) {
        _strlen(lVar2);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar2);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    if (0 < *(int *)(unaff_x20 + 3)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar3 + 0x30) >> 5 & 1) != 0) {
        func_0x000108298c5c(unaff_x19[3]);
        func_0x000108298a30();
      }
      func_0x000108298c28(*unaff_x19);
      FUN_1082db500();
      if ((int)unaff_x20 != 0) {
        FUN_1083a3a90(param_1,&UNK_10f482cdf);
        unaff_x20 = param_1;
      }
      func_0x000108298b3c();
      return unaff_x20;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108297d08);
  (*pcVar1)();
}



/* Entry: 1082c7c40; end: 1082c7ff3;  */

void FUN_1082c7c40(undefined1 *param_1,long *param_2,uint param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_d0 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(*param_4 + 0xc3) == '\x01') &&
     (plVar3 = param_4, FUN_108376fcc(), ((ulong)plVar3 & 1) != 0)) {
    plVar3 = param_4;
    FUN_108376fe8();
    if ((int)plVar3 != 2) {
      lVar6 = 0;
      lVar7 = *param_4;
      uStack_150 = *(undefined8 *)(lVar7 + 0x28);
      lStack_148 = *(long *)(lVar7 + 0x40);
      lStack_140 = lStack_148 + *(int *)(lVar7 + 0x48);
      lStack_138 = 0;
      if (*(long *)(lVar7 + 0x58) != 0) {
        lStack_138 = *(long *)(lVar7 + 0x58) + -4;
      }
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 1;
code_r0x0001082c7d88:
      puVar9 = &uStack_150;
      FUN_108379cc8(&uStack_150,&fStack_f0);
      if (6 < (uint)puVar9) goto LAB_1082c7e38;
      uVar10 = (uint)lVar6;
      uVar5 = uVar10 * 3;
      switch((ulong)puVar9 & 0xffffffff) {
      case 0:
      case 5:
        goto code_r0x0001082c7d88;
      case 1:
        if (7 < uVar10) goto LAB_1082c7e38;
        bVar2 = false;
        if ((fStack_f0 == fStack_e8) && (bVar2 = false, !NAN(fStack_ec) && !NAN(fStack_e4))) {
          bVar2 = fStack_ec == fStack_e4;
        }
        if (!bVar2) {
          uStack_f8 = (undefined8 *)CONCAT44(fStack_e4 - fStack_ec,fStack_e8 - fStack_f0);
          func_0x000108384954(&uStack_f8);
          if ((int)plVar3 == 1) {
            afStack_d0[uVar5] = uStack_f8._4_4_;
            fVar12 = -(float)uStack_f8;
            fVar11 = uStack_f8._4_4_;
          }
          else {
            fVar11 = -uStack_f8._4_4_;
            afStack_d0[uVar5] = fVar11;
            fVar12 = (float)uStack_f8;
          }
          afStack_d0[uVar5 + 1] = fVar12;
          afStack_d0[uVar5 + 2] = -(fVar11 * fStack_e8) - fVar12 * fStack_e4;
          lVar6 = lVar6 + 1;
        }
        goto code_r0x0001082c7d88;
      default:
        goto LAB_1082c7e38;
      case 6:
        if ((*(byte *)((long)param_4 + 0xe) >> 1 & 1) != 0) {
          if (3 < param_3) goto code_r0x0001082c7f80;
          param_3 = *(uint *)(&UNK_10df15e90 + (ulong)param_3 * 4);
        }
        puVar9 = (undefined8 *)*param_2;
        *param_2 = 0;
        if (uVar10 - 9 < 0xfffffff8) {
          uVar4 = 0;
          puVar8 = puVar9;
        }
        else {
          puVar8 = (undefined8 *)0xa8;
          FUN_1082a37b0();
          if (puVar9 == (undefined8 *)0x0) {
            uVar5 = 1;
          }
          else {
            uVar5 = *(uint *)(puVar9 + 6) & 1;
          }
          *(undefined4 *)(puVar8 + 1) = 0x1b;
          puVar8[3] = puVar8 + 2;
          puVar8[4] = 0x200000000;
          puVar8[5] = 0;
          *(uint *)(puVar8 + 6) = uVar5;
          *(undefined4 *)((long)puVar8 + 0x34) = 0;
          *(undefined1 *)(puVar8 + 7) = 0;
          *puVar8 = &PTR_FUN_110a37a08;
          *(uint *)((long)puVar8 + 0x3c) = param_3;
          *(uint *)(puVar8 + 8) = uVar10;
          _memcpy((long)puVar8 + 0x44,afStack_d0,uVar10 * 0xc);
          lVar7 = 0x4c;
          for (; lVar6 != 0; lVar6 = lVar6 + -1) {
            *(float *)((long)puVar8 + lVar7) = *(float *)((long)puVar8 + lVar7) + 0.5;
            lVar7 = lVar7 + 0xc;
          }
          uStack_f8 = puVar9;
          FUN_108296280(puVar8,&uStack_f8,1);
          puVar9 = uStack_f8;
          uStack_f8 = (undefined8 *)0x0;
          if (puVar9 != (undefined8 *)0x0) {
            FUN_1082c8384();
          }
          uVar4 = 1;
        }
        goto LAB_1082c7f70;
      }
    }
    lVar6 = *param_2;
    *param_2 = 0;
    if ((param_3 & 0xfffffffe) == 2) {
      lStack_108 = lVar6;
      FUN_10829683c(&uStack_100,&lStack_108,&UNK_10df15e1c);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = uStack_100;
      uStack_100 = 0;
      lVar6 = lStack_108;
    }
    else {
      lStack_118 = lVar6;
      FUN_10829683c(&uStack_110,&lStack_118,&UNK_10df15e2c);
      *param_1 = 1;
      *(undefined8 *)(param_1 + 8) = uStack_110;
      uStack_110 = 0;
      lVar6 = lStack_118;
    }
    if (lVar6 != 0) {
      FUN_1082c8384();
    }
  }
  else {
    lVar6 = *param_2;
    *param_2 = 0;
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar6;
  }
LAB_1082c7d04:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x0001082c7f80:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c7f84);
  (*pcVar1)();
LAB_1082c7e38:
  uVar4 = 0;
  puVar8 = (undefined8 *)*param_2;
  *param_2 = 0;
LAB_1082c7f70:
  *param_1 = uVar4;
  *(undefined8 **)(param_1 + 8) = puVar8;
  goto LAB_1082c7d04;
}



/* Entry: 1082c7ff4; end: 1082c7ff7;  */

undefined8 * FUN_1082c7ff4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082c7ff8; end: 1082c800b;  */

void FUN_1082c7ff8(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c800c; end: 1082c8037;  */

void FUN_1082c800c(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c8034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,*(uint *)(param_1 + 0x3c) | *(int *)(param_1 + 0x40) << 3,"unknown",7);
  return;
}



/* Entry: 1082c8038; end: 1082c80af;  */

void FUN_1082c8038(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  puVar1[0x10] = 0;
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_DAT_110a37a70;
  puVar1[4] = 0x7fc00000ffffffff;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c80b0; end: 1082c8127;  */

void FUN_1082c80b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0xa8;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar3 = &PTR_FUN_110a37a08;
  iVar1 = *(int *)(param_2 + 0x40);
  *(undefined8 *)((long)puVar3 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    uVar2 = iVar1 * 3;
    _memmove((long)puVar3 + 0x44,param_2 + 0x44,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1082c8128; end: 1082c8177;  */

long FUN_1082c8128(long param_1,long param_2)

{
  long lVar1;
  undefined1 uStack_11;
  
  if ((*(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x3c)) &&
     (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40))) {
    lVar1 = param_2 + 0x44;
    func_0x0001073c7cf0(lVar1,lVar1 + (long)(*(int *)(param_2 + 0x40) * 3) * 4,param_1 + 0x44,
                        &uStack_11);
    return lVar1;
  }
  return 0;
}



/* Entry: 1082c8178; end: 1082c818b;  */

void FUN_1082c8178(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c818c; end: 1082c82eb;  */

void FUN_1082c818c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar3 = param_2[3];
  uVar2 = param_2[1];
  FUN_10828bb1c(uVar2,lVar3,2,0x16,&UNK_10f484d0a,*(undefined4 *)(lVar3 + 0x40),auStack_58);
  *(int *)(param_1 + 0x20) = (int)uVar2;
  plVar4 = (long *)*param_2;
  func_0x0001082c83a4();
  FUN_10829dbfc((long)plVar4 + extraout_x8,&UNK_10f484d14);
  iVar5 = 0;
  while( true ) {
    if (*(int *)(lVar3 + 0x40) <= iVar5) break;
    func_0x0001082c83a4();
    FUN_10828bae8((long)plVar4 + extraout_x8_00,&UNK_10f484d34);
    puVar1 = &UNK_10f484d7d;
    if ((*(uint *)(lVar3 + 0x3c) & 0xfffffffd) != 0) {
      puVar1 = &UNK_10f484d63;
    }
    FUN_10829dbfc((long)plVar4 + *(long *)(*plVar4 + -0x18),puVar1);
    iVar5 = iVar5 + 1;
  }
  if ((*(uint *)(lVar3 + 0x3c) & 0xfffffffe) == 2) {
    func_0x0001082c83a4();
    FUN_10829dbfc((long)plVar4 + extraout_x8_01,&UNK_10f484d98);
  }
  FUN_10828bad0(&uStack_60,param_1,0,param_2,0,0);
  func_0x0001082c83a4();
  FUN_10828bae8((long)plVar4 + extraout_x8_02,&UNK_10f484dae);
  FUN_1083a3ca0(uStack_60);
  return;
}



/* Entry: 1082c82ec; end: 1082c8383;  */

void FUN_1082c82ec(long param_1,long *param_2,long param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  
  iVar2 = *(int *)(param_3 + 0x40);
  uVar3 = iVar2 * 3;
  pfVar1 = (float *)(param_3 + 0x44);
  uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
  pfVar4 = (float *)(param_1 + 0x24);
  pfVar5 = pfVar1;
  while( true ) {
    if (uVar6 == 0) {
      return;
    }
    if (*pfVar4 != *pfVar5) break;
    uVar6 = uVar6 - 4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  (**(code **)(*param_2 + 0x68))(param_2,*(undefined4 *)(param_1 + 0x20),iVar2,pfVar1);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)((float *)(param_1 + 0x24),pfVar1,(long)(int)uVar3 << 2);
  return;
}



/* Entry: 1082c8384; end: 1082c83d7;  */

void FUN_1082c8384(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082c83d8; end: 1082c840b;  */

void FUN_1082c83d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_DAT_110a37c20;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c840c; end: 1082c844b;  */

void FUN_1082c840c(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x14) < 6) {
    uVar1 = (ulong)(*(uint *)(param_1 + 0x14) << 3);
    *(char *)(param_2 + 1) = (char)(0x10505010400 >> (uVar1 & 0x3f));
    *(char *)(param_2 + 2) = (char)(0x3030003 >> (uVar1 & 0x3f));
  }
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return;
}



/* Entry: 1082c844c; end: 1082c851b;  */

undefined ** FUN_1082c844c(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  switch(param_1) {
  case 0:
    ppuVar2 = &PTR_PTR_110a37b58;
    ppuVar3 = &PTR_PTR_110a37b48;
    break;
  case 1:
    ppuVar2 = &PTR_PTR_110a37af8;
    ppuVar3 = &PTR_PTR_110a37ae8;
    break;
  case 2:
    ppuVar2 = &PTR_PTR_110a37b18;
    ppuVar3 = &PTR_PTR_110a37b08;
    break;
  case 3:
    ppuVar2 = &PTR_PTR_110a37b38;
    ppuVar3 = &PTR_PTR_110a37b28;
    break;
  case 4:
    ppuVar2 = &PTR_PTR_110a37b78;
    ppuVar3 = &PTR_PTR_110a37b68;
    break;
  case 5:
    ppuVar2 = &PTR_PTR_110a37ad8;
    ppuVar3 = &PTR_PTR_110a37aa8;
    break;
  default:
    FUN_10841076c(&UNK_10f484dd8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c851c);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    ppuVar3 = ppuVar2;
  }
  return ppuVar3;
}



/* Entry: 1082c851c; end: 1082c8587;  */

void FUN_1082c851c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)0x20;
  FUN_1082a37b0();
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  puVar3[1] = 0x10000000a;
  *(undefined2 *)(puVar3 + 2) = 0;
  *puVar3 = &PTR_FUN_110a37b98;
  *(undefined4 *)((long)puVar3 + 0x14) = uVar1;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  uStack_28 = 0;
  *param_1 = puVar3;
  FUN_1082a3670(&uStack_28);
  return;
}



/* Entry: 1082c8588; end: 1082c85e7;  */

void FUN_1082c8588(void)

{
  return;
}



/* Entry: 1082c85e8; end: 1082c863b;  */

void FUN_1082c85e8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f484e76;
  if (*(char *)(param_2[3] + 0x18) == '\0') {
    puVar1 = &UNK_10f481e56;
  }
  FUN_10828bae8(*param_2 + *(long *)(*(long *)*param_2 + -0x18),puVar1);
  return;
}



/* Entry: 1082c863c; end: 1082c86cb;  */

void FUN_1082c863c(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  
  if (*(char *)(param_1 + 0x18) == '\x12') {
    func_0x0001082c8a28(*(undefined8 *)(*param_3 + 0x10));
    (*extraout_x8)();
    uVar1 = (ulong)*(uint *)(param_1 + 0x14);
    FUN_1082d9f10(uVar1);
  }
  else {
    func_0x0001082c8a28(*(undefined8 *)(*param_3 + 0x10));
    (*extraout_x8_00)();
    uVar1 = (ulong)*(uint *)(param_2 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001082c86c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,"unknown",7);
  return;
}



/* Entry: 1082c86cc; end: 1082c8707;  */

void FUN_1082c86cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110a37e00;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c8708; end: 1082c8763;  */

bool FUN_1082c8708(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    return *(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18);
  }
  return false;
}



/* Entry: 1082c8764; end: 1082c883f;  */

void FUN_1082c8764(undefined8 *param_1,long param_2,undefined8 param_3,int param_4,long param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  if ((param_4 == 2 || *(int *)(param_5 + 0x20) < 1) ||
     ((*(uint *)(param_5 + 0x24) >> (ulong)(*(byte *)(param_2 + 0xc) & 0x1f) & 1) != 0)) {
    puVar3 = (undefined8 *)0x20;
    FUN_1082a37b0();
    uVar1 = *(undefined4 *)(param_2 + 8);
    puVar3[1] = 0x10000000b;
    *(undefined1 *)(puVar3 + 2) = 1;
    *(bool *)((long)puVar3 + 0x11) = param_4 == 2;
    *puVar3 = &PTR_DAT_110a37d78;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar1;
    *(undefined1 *)(puVar3 + 3) = 0x12;
  }
  else {
    puVar3 = (undefined8 *)0x20;
    FUN_1082a37b0();
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined1 *)(param_2 + 0xc);
    puVar3[1] = 0x10000000b;
    *(undefined2 *)(puVar3 + 2) = 0;
    *puVar3 = &PTR_DAT_110a37d78;
    *(undefined4 *)((long)puVar3 + 0x14) = uVar1;
    *(undefined1 *)(puVar3 + 3) = uVar2;
  }
  uStack_38 = 0;
  *param_1 = puVar3;
  FUN_1082a3670(&uStack_38);
  return;
}



/* Entry: 1082c8840; end: 1082c88c7;  */

int FUN_1082c8840(long param_1,undefined8 param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_4 + 0x20);
  iVar2 = 3;
  if (*param_3 != 2 && 0 < iVar1) {
    if (iVar1 != 2) {
      iVar1 = 0x62;
    }
    iVar2 = iVar1;
    if ((1 << (ulong)(*(byte *)(param_1 + 0xc) & 0x1f) & *(uint *)(param_4 + 0x24)) != 0) {
      iVar2 = 3;
    }
  }
  return iVar2;
}



/* Entry: 1082c88c8; end: 1082c892f;  */

void FUN_1082c88c8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined1 *)(param_2[3] + 0x18));
  FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f484eb1);
  return;
}



/* Entry: 1082c8930; end: 1082c8a07;  */

void FUN_1082c8930(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined1 auStack_68 [24];
  
  FUN_1082d9e58(auStack_68,param_9,param_3,param_1 + 8,param_4,param_6,
                *(undefined4 *)(param_9 + 0x14));
  FUN_10828bae8((long)param_2 + *(long *)(*param_2 + -0x18),&UNK_10f481e56);
  FUN_1082b72c4(param_2,param_5,param_6,param_7,param_8,param_9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 1082c8a08; end: 1082c8a3b;  */

void FUN_1082c8a08(long param_1,undefined8 param_2,long param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 auStack_38 [8];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 8) != -1) {
    FUN_10831fbe8(auStack_38,*(undefined4 *)(param_3 + 0x14),*(int *)(param_1 + 8));
    switch(uStack_28) {
    case 1:
      FUN_1082da030(*puStack_30);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8 + 0x20))(param_2);
      return;
    case 2:
      FUN_1082da030(*puStack_30,puStack_30[1]);
                    /* WARNING: Could not recover jumptable at 0x0001082da01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_02 + 0x40))(param_2);
      return;
    case 3:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_00 + 0x60))(param_2);
      return;
    case 4:
      FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2],puStack_30[3]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(extraout_x8_01 + 0x80))(param_2);
      return;
    default:
      return;
    }
  }
  return;
}



/* Entry: 1082c8a3c; end: 1082c8af3;  */

void FUN_1082c8a3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_DAT_110a37f38;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c8af4; end: 1082c8b23;  */

void FUN_1082c8af4(void)

{
  return;
}



/* Entry: 1082c8b24; end: 1082c8b6f;  */

void FUN_1082c8b24(undefined8 param_1,long *param_2)

{
  if (*(char *)(param_2[2] + 0x66) == '\x01') {
    FUN_10828bae8(*param_2 + *(long *)(*(long *)*param_2 + -0x18),&UNK_10f484ecd);
  }
  return;
}



/* Entry: 1082c8b70; end: 1082c8b73;  */

void FUN_1082c8b70(void)

{
  return;
}



/* Entry: 1082c8b74; end: 1082c8ba7;  */

long * FUN_1082c8b74(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082a36a0(*param_1 + 0xc);
  }
  return param_1;
}



/* Entry: 1082c8ba8; end: 1082c8c7f;  */

void FUN_1082c8ba8(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_3;
  if (*(int *)(lVar3 + 8) == 0x24) {
    uVar1 = lVar3 + 0x3c;
    FUN_10828e338();
    if (((uVar1 & 1) != 0) || (uVar1 = param_2, FUN_10828e338(), (uVar1 & 1) == 0)) {
      FUN_108363e94(lVar3 + 0x3c,param_2);
      lVar3 = *param_3;
      *param_3 = 0;
      *param_1 = lVar3;
      return;
    }
  }
  lVar2 = 0x68;
  FUN_1082a37b0();
  *param_3 = 0;
  lVar3 = lVar2;
  FUN_1082c8db0();
  *param_1 = lVar2;
  func_0x0001082c9014();
  if (lVar3 != 0) {
    func_0x0001082c9000();
  }
  return;
}



/* Entry: 1082c8c80; end: 1082c8cd7;  */

void FUN_1082c8c80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_FUN_110a37ff8;
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c8cd8; end: 1082c8cdb;  */

void FUN_1082c8cd8(void)

{
  return;
}



/* Entry: 1082c8cdc; end: 1082c8cfb;  */

uint FUN_1082c8cdc(long param_1,long param_2)

{
  param_1 = param_1 + 0x3c;
  func_0x0001081421c8(param_1,param_2 + 0x3c);
  return (uint)param_1 ^ 1;
}



/* Entry: 1082c8cfc; end: 1082c8d6f;  */

void FUN_1082c8cfc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x68;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a37f90;
  uVar3 = *(undefined8 *)(param_2 + 0x44);
  uVar2 = *(undefined8 *)(param_2 + 0x3c);
  uVar5 = *(undefined8 *)(param_2 + 0x54);
  uVar4 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)((long)puVar1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)((long)puVar1 + 0x54) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x44) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c8d70; end: 1082c8d73;  */

undefined8 * FUN_1082c8d70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082c8d74; end: 1082c8d87;  */

void FUN_1082c8d74(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082c8d88; end: 1082c8daf;  */

undefined * FUN_1082c8d88(void)

{
  return &UNK_10f484edc;
}



/* Entry: 1082c8db0; end: 1082c8e97;  */

undefined8 * FUN_1082c8db0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_28;
  
  if (*param_3 == 0) {
    uVar2 = 7;
  }
  else {
    uVar2 = *(uint *)(*param_3 + 0x30) & 7;
  }
  *(undefined4 *)(param_1 + 1) = 0x24;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar2;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a37f90;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)((long)param_1 + 0x5c) = param_2[4];
  *(undefined8 *)((long)param_1 + 0x54) = uVar6;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x44) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  lStack_28 = *param_3;
  *param_3 = 0;
  FUN_10828e338();
  uVar3 = 0x100000002;
  if ((int)param_2 == 0) {
    uVar3 = 2;
  }
  puVar1 = param_1;
  FUN_108296280(param_1,&lStack_28,uVar3);
  func_0x0001082c9014();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001082c9000();
  }
  return param_1;
}



/* Entry: 1082c8e98; end: 1082c8e9b;  */

undefined8 * FUN_1082c8e98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082c8e9c; end: 1082c8eaf;  */

void FUN_1082c8e9c(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c8eb0; end: 1082c8f5f;  */

void FUN_1082c8eb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_38;
  
  uVar1 = param_2[1];
  func_0x00010828bb5c(uVar1,param_2[3],2,0x12,&DAT_10f638b90,0);
  *(int *)(param_1 + 0x20) = (int)uVar1;
  plVar2 = (long *)*param_2;
  lVar3 = *(long *)(*plVar2 + -0x18);
  FUN_108297d10(&uStack_38,param_1,0,0,0,param_2);
  FUN_10828bae8((long)plVar2 + lVar3,&UNK_10f484ee9);
  FUN_1083a3ca0(uStack_38);
  return;
}



/* Entry: 1082c8f60; end: 1082c8fff;  */

void FUN_1082c8f60(long param_1,long *param_2,long param_3,long param_4,ulong param_5,long param_6,
                  undefined8 *param_7,long param_8)

{
  undefined1 (*pauVar1) [16];
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_28 = (undefined4)unaff_x21;
  uStack_24 = (undefined4)((ulong)unaff_x21 >> 0x20);
  uStack_20 = (undefined4)unaff_x20;
  uStack_1c = (undefined4)((ulong)unaff_x20 >> 0x20);
  if (*(int *)(param_3 + 0x20) < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082c9000);
    (*pcVar2)();
  }
  if ((**(long **)(param_3 + 0x18) != 0) && (*(int *)(**(long **)(param_3 + 0x18) + 8) == 0x2d)) {
    FUN_1082ce0b8(auStack_58);
    FUN_108363e94(auStack_58,param_3 + 0x3c);
    FUN_1082dc2cc(param_2,*(undefined4 *)(param_1 + 0x20),auStack_58);
    return;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auVar9 = *(undefined1 (*) [16])(param_3 + 0x3c);
  pauVar1 = (undefined1 (*) [16])(param_3 + 0x4c);
  auVar12 = NEON_ext(*pauVar1,auVar9,4,1);
  auVar16._4_12_ = auVar12._4_12_;
  auVar16._0_4_ = auVar12._4_4_;
  auVar14._0_8_ = auVar16._0_8_;
  auVar14._8_4_ = auVar12._12_4_;
  auVar14._12_4_ = auVar12._12_4_;
  auVar13._8_8_ = auVar14._8_8_;
  auVar13._4_4_ = auVar9._4_4_;
  auVar13._0_4_ = auVar12._4_4_;
  auVar15._0_12_ = auVar13._0_12_;
  auVar15._12_4_ = auVar9._12_4_;
  auVar16 = NEON_ext(auVar15,auVar15,8,1);
  auVar9 = NEON_ext(auVar9,*pauVar1,4,1);
  auVar12._4_12_ = auVar9._4_12_;
  auVar12._0_4_ = auVar9._4_4_;
  auVar11._0_8_ = auVar12._0_8_;
  auVar11._8_4_ = auVar9._12_4_;
  auVar11._12_4_ = auVar9._12_4_;
  auVar10._8_8_ = auVar11._8_8_;
  auVar10._4_4_ = (int)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar10._0_4_ = auVar9._4_4_;
  auVar9._0_12_ = auVar10._0_12_;
  auVar9._12_4_ = (int)((ulong)*(undefined8 *)(param_3 + 0x54) >> 0x20);
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  uStack_24 = auVar9._8_4_;
  uStack_20 = auVar9._12_4_;
  uStack_2c = auVar9._0_4_;
  uStack_28 = auVar9._4_4_;
  uStack_34 = auVar16._8_4_;
  uStack_30 = auVar16._12_4_;
  uStack_3c = auVar16._0_8_;
  uStack_1c = *(undefined4 *)(param_3 + 0x5c);
  uVar3 = (ulong)*(uint *)(param_1 + 0x20);
  puVar4 = &uStack_3c;
  (**(code **)(*param_2 + 0x98))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1082dc350;
  puVar7 = (undefined8 *)0x0;
  uVar6 = 0;
  puVar8 = (undefined4 *)(uVar3 + 0x1c);
  puStack_50 = &stack0xfffffffffffffff0;
  do {
    if (puVar4 == puVar7) {
      return;
    }
    if (param_7 == (undefined8 *)0x0) {
LAB_1082dc3bc:
      if (param_5 <= uVar6) {
LAB_1082dc428:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
        (*pcVar2)();
      }
      uVar3 = uVar6 + 1;
      if ((uint)puVar8[-1] < 0xb) {
        (**(code **)(*param_2 + *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar8[-1] * 8)))
                  (param_2,*(undefined4 *)(param_4 + uVar6 * 4),*puVar8,
                   param_8 + *(long *)(puVar8 + -3));
      }
    }
    else {
      if (param_7 <= puVar7) goto LAB_1082dc428;
      uVar3 = uVar6;
      if ((*(byte *)(param_6 + (long)puVar7) & 1) == 0) goto LAB_1082dc3bc;
    }
    uVar6 = uVar3;
    puVar7 = (undefined8 *)((long)puVar7 + 1);
    puVar8 = puVar8 + 10;
  } while( true );
}



/* Entry: 1082c9000; end: 1082c901f;  */

void FUN_1082c9000(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c9008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082c9020; end: 1082c9183;  */

undefined8 *
FUN_1082c9020(undefined8 *param_1,uint param_2,long *param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  long lStack_40;
  long lStack_38;
  
  *(undefined4 *)(param_1 + 1) = 0x3c;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  param_1[6] = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a38040;
  *(uint *)((long)param_1 + 0x3c) = param_2;
  if ((param_2 >> 1 & 1) == 0) {
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar2 = *param_6;
    param_1[9] = param_6[1];
    param_1[8] = uVar2;
  }
  lStack_38 = *param_3;
  *param_3 = 0;
  FUN_108296280(param_1,&lStack_38,1);
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    FUN_1082c95c4();
  }
  uStack_50 = *param_4;
  *param_4 = 0;
  uStack_48 = *(undefined4 *)(param_4 + 1);
  uStack_44 = *(undefined2 *)((long)param_4 + 0xc);
  FUN_1082cdd5c(&lStack_40,&uStack_50,0,param_5,0,0);
  FUN_108296280(param_1,&lStack_40,4);
  lVar1 = lStack_40;
  lStack_40 = 0;
  if (lVar1 != 0) {
    FUN_1082c95c4();
  }
  FUN_1082764bc(&uStack_50);
  return param_1;
}



/* Entry: 1082c9184; end: 1082c91bf;  */

void FUN_1082c9184(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10828b420();
  *param_1 = &PTR_FUN_110a38040;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = uVar1;
  return;
}



/* Entry: 1082c91c0; end: 1082c91eb;  */

void FUN_1082c91c0(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001082c91e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,*(uint *)(param_1 + 0x3c) >> 1 & 1,"unknown",7);
  return;
}



/* Entry: 1082c91ec; end: 1082c9237;  */

void FUN_1082c91ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a380a8;
  puVar1[4] = 0xffffffffffffffff;
  puVar1[3] = 0x100000000;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c9238; end: 1082c923b;  */

undefined8 * FUN_1082c9238(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}


