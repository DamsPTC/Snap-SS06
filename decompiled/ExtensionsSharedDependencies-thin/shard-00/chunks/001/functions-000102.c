/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001e2ce0; end: 001e2d0b;  */

void FUN_001e2ce0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e3444(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e2d0c; end: 001e2d97;  */

void FUN_001e2d0c(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar4 = 0x6e49726567676f6c;
  uVar1 = 0xea00000000007469;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000013;
    uVar1 = 0x80000000008bd050;
  }
  uVar5 = 0xd000000000000010;
  pcVar3 = "backgroundExecution";
  if (bVar2 != 0) {
    uVar5 = 0xd000000000000013;
    pcVar3 = "loggerDebugViewInit";
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  return;
}



/* Entry: 001e2d98; end: 001e2fd3;  */

void FUN_001e2d98(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0x6e49726567676f6c;
  uVar1 = 0xea00000000007469;
  if (bVar2 != 2) {
    uVar4 = 0xd000000000000013;
    uVar1 = 0x80000000008bd050;
  }
  uVar5 = 0xd000000000000010;
  pcVar3 = "backgroundExecution";
  if (bVar2 != 0) {
    uVar5 = 0xd000000000000013;
    pcVar3 = "loggerDebugViewInit";
  }
  if (bVar2 < 2) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e2fd4; end: 001e308f;  */

undefined8 FUN_001e2fd4(void)

{
  return 1;
}



/* Entry: 001e3090; end: 001e30fb;  */

void FUN_001e3090(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 001e30fc; end: 001e313f;  */

void FUN_001e30fc(undefined8 *param_1)

{
  *param_1 = 0x49726f74696e6f6d;
  param_1[1] = 0xeb0000000074696e;
  return;
}



/* Entry: 001e3140; end: 001e318b;  */

void FUN_001e3140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e318c; end: 001e31cb;  */

void FUN_001e318c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0x49726f74696e6f6d,0xeb0000000074696e);
  return;
}



/* Entry: 001e31cc; end: 001e3343;  */

void FUN_001e31cc(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,in_x3,in_x4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e3344; end: 001e3353;  */

undefined8 FUN_001e3344(void)

{
  return 0;
}



/* Entry: 001e3354; end: 001e3397;  */

void FUN_001e3354(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001e3214(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e3398; end: 001e339f;  */

void FUN_001e3398(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 == 4) {
    __ss6HasherV8_combineyySuF(1);
    uVar4 = 0x4c63696d616e7964;
    uVar5 = 0xed0000656c61636f;
  }
  else {
    if (bVar2 != 5) {
      __ss6HasherV8_combineyySuF(0);
      uVar4 = 0x6e49726567676f6c;
      uVar1 = 0xea00000000007469;
      if (bVar2 != 2) {
        uVar4 = 0xd000000000000013;
        uVar1 = 0x80000000008bd050;
      }
      uVar5 = 0xd000000000000010;
      pcVar3 = "backgroundExecution";
      if (bVar2 != 0) {
        uVar5 = 0xd000000000000013;
        pcVar3 = "loggerDebugViewInit";
      }
      if (bVar2 < 2) {
        uVar1 = (ulong)pcVar3 | 0x8000000000000000;
        uVar4 = uVar5;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar1);
      return;
    }
    __ss6HasherV8_combineyySuF(2);
    uVar4 = 0x49726f74696e6f6d;
    uVar5 = 0xeb0000000074696e;
  }
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)(param_1,uVar4,uVar5);
  return;
}



/* Entry: 001e33a0; end: 001e33df;  */

void FUN_001e33a0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001e3214(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e33e0; end: 001e3443;  */

bool FUN_001e33e0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 == 4) {
    if (bVar1 == 4) {
      return true;
    }
  }
  else if (bVar2 == 5) {
    if (bVar1 == 5) {
      return true;
    }
  }
  else if ((bVar1 & 0xfe) != 4) {
    return bVar2 == bVar1;
  }
  return false;
}



/* Entry: 001e3444; end: 001e34a7;  */

ulong FUN_001e3444(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 001e34a8; end: 001e34ab;  */

void FUN_001e34a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5ee8;
  _swift_getWitnessTable(&UNK_007e5ee8,&UNK_009b9298);
  puRam0000000000af4ee0 = puVar1;
  return;
}



/* Entry: 001e34ac; end: 001e34eb;  */

void FUN_001e34ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5ee8;
  _swift_getWitnessTable(&UNK_007e5ee8,&UNK_009b9298);
  puRam0000000000af4ee0 = puVar1;
  return;
}



/* Entry: 001e34ec; end: 001e34ef;  */

void FUN_001e34ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5f88;
  _swift_getWitnessTable(&UNK_007e5f88,&UNK_009b9328);
  puRam0000000000af4ee8 = puVar1;
  return;
}



/* Entry: 001e34f0; end: 001e352f;  */

void FUN_001e34f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e5f88;
  _swift_getWitnessTable(&UNK_007e5f88,&UNK_009b9328);
  puRam0000000000af4ee8 = puVar1;
  return;
}



/* Entry: 001e3530; end: 001e3533;  */

void FUN_001e3530(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6028;
  _swift_getWitnessTable(&UNK_007e6028,&UNK_009b93b8);
  puRam0000000000af4ef0 = puVar1;
  return;
}



/* Entry: 001e3534; end: 001e3573;  */

void FUN_001e3534(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6028;
  _swift_getWitnessTable(&UNK_007e6028,&UNK_009b93b8);
  puRam0000000000af4ef0 = puVar1;
  return;
}



/* Entry: 001e3574; end: 001e3597;  */

void FUN_001e3574(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e3598();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e3598; end: 001e35d7;  */

void FUN_001e3598(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e60e4;
  _swift_getWitnessTable(&UNK_007e60e4,&UNK_009b9448);
  puRam0000000000af4ef8 = puVar1;
  return;
}



/* Entry: 001e35d8; end: 001e35db;  */

void FUN_001e35d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6124;
  _swift_getWitnessTable(&UNK_007e6124,&UNK_009b9448);
  puRam0000000000af4f00 = puVar1;
  return;
}



/* Entry: 001e35dc; end: 001e361b;  */

void FUN_001e35dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af4f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6124;
  _swift_getWitnessTable(&UNK_007e6124,&UNK_009b9448);
  puRam0000000000af4f00 = puVar1;
  return;
}



/* Entry: 001e361c; end: 001e3a43;  */

int FUN_001e361c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e3698;
        goto LAB_001e367c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e367c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_001e3698:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e3a44; end: 001e3aef;  */

void FUN_001e3a44(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e3af0; end: 001e3af3;  */

void FUN_001e3af0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e61d0;
  _swift_getWitnessTable(&UNK_007e61d0,&UNK_009b9558);
  puRam0000000000af5010 = puVar1;
  return;
}



/* Entry: 001e3af4; end: 001e3b33;  */

void FUN_001e3af4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e61d0;
  _swift_getWitnessTable(&UNK_007e61d0,&UNK_009b9558);
  puRam0000000000af5010 = puVar1;
  return;
}



/* Entry: 001e3b34; end: 001e3b87;  */

undefined8 FUN_001e3b34(void)

{
  return 0;
}



/* Entry: 001e3b88; end: 001e3bab;  */

void FUN_001e3b88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e3bac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e3bac; end: 001e3beb;  */

void FUN_001e3bac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e61f8;
  _swift_getWitnessTable(&UNK_007e61f8,&UNK_009b9558);
  puRam0000000000af5018 = puVar1;
  return;
}



/* Entry: 001e3bec; end: 001e3d4f;  */

int FUN_001e3bec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e3c68;
        goto LAB_001e3c4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e3c4c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_001e3c68:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e3d50; end: 001e3e07;  */

void FUN_001e3d50(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 6 & 3;
  if (uVar1 == 0) {
    if (((param_1 & 0xff) < 5) && (2 < (param_1 & 0xff))) {
      return;
    }
  }
  else if ((uVar1 != 1) && (-0x7e < (char)param_1)) {
    return;
  }
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001e3e08; end: 001e4153;  */

undefined1  [16] FUN_001e3e08(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_1 >> 6 & 3;
  if (uVar2 == 0) {
    lVar4 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    *(undefined8 *)(lVar4 + 0x20) = 0x736569726f7453;
    *(undefined8 *)(lVar4 + 0x28) = 0xe700000000000000;
    if (uVar1 < 4) {
      if (uVar1 < 2) {
        uVar8 = 0xd000000000000013;
        if (uVar1 == 0) {
          pcVar10 = "warmupFriendStories";
        }
        else {
          pcVar10 = "warmupCustomStories";
        }
        uVar9 = (ulong)(pcVar10 + -0x20) | 0x8000000000000000;
      }
      else if (uVar1 == 2) {
        uVar8 = 0x615779636167656c;
        uVar9 = 0xec00000070756d72;
      }
      else {
        uVar9 = 0x80000000008bbd40;
        uVar8 = 0xd000000000000016;
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 == 4) {
        uVar9 = 0x80000000008bbd20;
        uVar8 = 0xd00000000000001c;
      }
      else {
        uVar9 = 0xec00000073656972;
        uVar8 = 0x6f74536863746566;
      }
    }
    else if (uVar1 == 6) {
      uVar9 = 0x80000000008bbd00;
      uVar8 = 0xd000000000000010;
    }
    else if (uVar1 == 7) {
      uVar9 = 0xee00676e69676461;
      uVar8 = 0x42736569726f7473;
    }
    else {
      uVar9 = 0x80000000008bbce0;
      uVar8 = 0xd00000000000001a;
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(ulong *)(lVar4 + 0x38) = uVar9;
  }
  else {
    if (uVar2 != 1) {
      uVar8 = 0x80000000008bd0f0;
      uVar7 = 0xd000000000000011;
      if (uVar1 != 0x82) {
        uVar8 = 0xec00000070756e61;
        uVar7 = 0x656c4374736f6f42;
      }
      uVar5 = 0xef6e6f6974616369;
      uVar6 = 0x6669746f4e234644;
      if (uVar1 != 0x80) {
        uVar5 = 0x80000000008bd110;
        uVar6 = 0xd000000000000017;
      }
      if (uVar1 < 0x82) {
        uVar7 = uVar6;
        uVar8 = uVar5;
      }
      goto LAB_001e4138;
    }
    lVar4 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar4 + 0x28) = 0x80000000008bd0d0;
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    bVar3 = (param_1 & 0x3f) != 1;
    uVar8 = 0xd000000000000012;
    if (bVar3) {
      uVar8 = 0x6163696669746f6e;
    }
    uVar7 = 0x80000000008bcb40;
    if (bVar3) {
      uVar7 = 0xec0000006e6f6974;
    }
    *(undefined8 *)(lVar4 + 0x30) = uVar8;
    *(undefined8 *)(lVar4 + 0x38) = uVar7;
  }
  uVar5 = 0xae6938;
  func_0x000115a8(0xae6938,&UNK_007cdb30);
  uVar6 = uVar5;
  func_0x0002f390();
  uVar7 = 0x23;
  uVar8 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar6);
  _swift_release(lVar4);
LAB_001e4138:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar7;
  return auVar11;
}



/* Entry: 001e4154; end: 001e42af;  */

undefined1  [16] FUN_001e4154(uint param_1)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  param_1 = param_1 & 0xff;
  if (param_1 < 4) {
    uVar5 = 0xec00000070756d72;
    uVar7 = 0x615779636167656c;
    if (param_1 != 2) {
      uVar5 = 0x80000000008bbd40;
      uVar7 = 0xd000000000000016;
    }
    uVar6 = 0xd000000000000013;
    pcVar2 = "warmupCustomStories";
    if (param_1 != 0) {
      pcVar2 = "snapReadReceiptCleanup";
    }
    uVar8 = (ulong)pcVar2 | 0x8000000000000000;
    bVar3 = SBORROW4(param_1,1);
    iVar1 = param_1 - 1;
    bVar4 = param_1 == 1;
  }
  else {
    uVar8 = 0xee00676e69676461;
    uVar6 = 0x42736569726f7473;
    if (param_1 != 7) {
      uVar8 = 0x80000000008bbce0;
      uVar6 = 0xd00000000000001a;
    }
    uVar5 = 0x80000000008bbd00;
    uVar7 = 0xd000000000000010;
    if (param_1 != 6) {
      uVar5 = uVar8;
      uVar7 = uVar6;
    }
    uVar8 = 0x80000000008bbd20;
    uVar6 = 0xd00000000000001c;
    if (param_1 != 4) {
      uVar8 = 0xec00000073656972;
      uVar6 = 0x6f74536863746566;
    }
    bVar3 = SBORROW4(param_1,5);
    iVar1 = param_1 - 5;
    bVar4 = param_1 == 5;
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    uVar5 = uVar8;
    uVar7 = uVar6;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 001e42b0; end: 001e4303;  */

void FUN_001e42b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e471c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e4304; end: 001e4323;  */

void FUN_001e4304(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*(code *)0x1dbb1c)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e4324; end: 001e439b;  */

void FUN_001e4324(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 001e439c; end: 001e43e7;  */

void FUN_001e439c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000012;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6163696669746f6e;
  }
  uVar2 = 0x80000000008bcb40;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec0000006e6f6974;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 001e43e8; end: 001e4653;  */

void FUN_001e43e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000012;
  if (cVar3 != '\x01') {
    uVar1 = 0x6163696669746f6e;
  }
  uVar2 = 0x80000000008bcb40;
  if (cVar3 != '\x01') {
    uVar2 = 0xec0000006e6f6974;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e4654; end: 001e466f;  */

void FUN_001e4654(void)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 >> 6 == 0) {
    if ((bVar1 < 5) && (2 < bVar1)) {
      return;
    }
  }
  else if ((bVar1 >> 6 != 1) && (-0x7e < (char)bVar1)) {
    return;
  }
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return;
}



/* Entry: 001e4670; end: 001e46b7;  */

void FUN_001e4670(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*param_3)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e46b8; end: 001e46cb;  */

void FUN_001e46b8(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 >> 6 == 0) {
    __ss6HasherV8_combineyySuF(3);
    uVar8 = (uint)bVar2;
    uVar9 = (uint)bVar2;
    if (uVar8 < 4) {
      uVar7 = 0xec00000070756d72;
      uVar6 = 0x615779636167656c;
      if (uVar9 != 2) {
        uVar7 = 0x80000000008bbd40;
        uVar6 = 0xd000000000000016;
      }
      uVar10 = 0xd000000000000013;
      pcVar3 = "warmupCustomStories";
      if (uVar9 != 0) {
        pcVar3 = "snapReadReceiptCleanup";
      }
      uVar11 = (ulong)pcVar3 | 0x8000000000000000;
      bVar4 = SBORROW4(uVar9,1);
      iVar1 = uVar9 - 1;
      bVar5 = uVar9 == 1;
    }
    else {
      uVar11 = 0xee00676e69676461;
      uVar10 = 0x42736569726f7473;
      if (uVar8 != 7) {
        uVar11 = 0x80000000008bbce0;
        uVar10 = 0xd00000000000001a;
      }
      uVar7 = 0x80000000008bbd00;
      uVar6 = 0xd000000000000010;
      if (uVar8 != 6) {
        uVar7 = uVar11;
        uVar6 = uVar10;
      }
      uVar11 = 0x80000000008bbd20;
      uVar10 = 0xd00000000000001c;
      if (uVar8 != 4) {
        uVar11 = 0xec00000073656972;
        uVar10 = 0x6f74536863746566;
      }
      bVar4 = SBORROW4(uVar8,5);
      iVar1 = uVar9 - 5;
      bVar5 = uVar9 == 5;
    }
    if (bVar5 || iVar1 < 0 != bVar4) {
      uVar7 = uVar11;
      uVar6 = uVar10;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar7);
  }
  else {
    if (bVar2 >> 6 != 1) {
      if (bVar2 < 0x82) {
        if (bVar2 == 0x80) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
      }
      else if (bVar2 == 0x82) {
        uVar6 = 2;
      }
      else {
        uVar6 = 4;
      }
      __ss6HasherV8_combineyySuF(uVar6);
      return;
    }
    __ss6HasherV8_combineyySuF(5);
    bVar5 = (bVar2 & 0x3f) != 1;
    uVar6 = 0xd000000000000012;
    if (bVar5) {
      uVar6 = 0x6163696669746f6e;
    }
    uVar7 = 0x80000000008bcb40;
    if (bVar5) {
      uVar7 = 0xec0000006e6f6974;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar7);
  return;
}



/* Entry: 001e46cc; end: 001e470f;  */

void FUN_001e46cc(void)

{
  undefined1 uVar1;
  code *in_x3;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  (*in_x3)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e4710; end: 001e471b;  */

bool FUN_001e4710(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 >> 6 == 0) {
    if (bVar1 < 0x40) {
      return bVar2 == bVar1;
    }
  }
  else if (bVar2 >> 6 == 1) {
    if ((bVar1 & 0xc0) == 0x40) {
      return ((bVar1 ^ bVar2) & 0x3f) == 0;
    }
  }
  else if (bVar2 < 0x82) {
    if (bVar2 == 0x80) {
      if (bVar1 == 0x80) {
        return true;
      }
    }
    else if (bVar1 == 0x81) {
      return true;
    }
  }
  else if (bVar2 == 0x82) {
    if (bVar1 == 0x82) {
      return true;
    }
  }
  else if (bVar1 == 0x83) {
    return true;
  }
  return false;
}



/* Entry: 001e471c; end: 001e477f;  */

ulong FUN_001e471c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 001e4780; end: 001e482b;  */

bool FUN_001e4780(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_2 & 0xff;
  uVar3 = param_1 >> 6 & 3;
  if (uVar3 == 0) {
    if (uVar2 < 0x40) {
      return uVar1 == uVar2;
    }
  }
  else if (uVar3 == 1) {
    if ((param_2 & 0xc0) == 0x40) {
      return ((uVar2 ^ uVar1) & 0x3f) == 0;
    }
  }
  else if (uVar1 < 0x82) {
    if (uVar1 == 0x80) {
      if (uVar2 == 0x80) {
        return true;
      }
    }
    else if (uVar2 == 0x81) {
      return true;
    }
  }
  else if (uVar1 == 0x82) {
    if (uVar2 == 0x82) {
      return true;
    }
  }
  else if (uVar2 == 0x83) {
    return true;
  }
  return false;
}



/* Entry: 001e482c; end: 001e486b;  */

void FUN_001e482c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5078 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6280;
  _swift_getWitnessTable(&UNK_007e6280,&UNK_009b9648);
  puRam0000000000af5078 = puVar1;
  return;
}



/* Entry: 001e486c; end: 001e486f;  */

void FUN_001e486c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6320;
  _swift_getWitnessTable(&UNK_007e6320,&UNK_009b96d8);
  puRam0000000000af5080 = puVar1;
  return;
}



/* Entry: 001e4870; end: 001e48af;  */

void FUN_001e4870(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6320;
  _swift_getWitnessTable(&UNK_007e6320,&UNK_009b96d8);
  puRam0000000000af5080 = puVar1;
  return;
}



/* Entry: 001e48b0; end: 001e48d3;  */

void FUN_001e48b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e48d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e48d4; end: 001e4913;  */

void FUN_001e48d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e63dc;
  _swift_getWitnessTable(&UNK_007e63dc,&UNK_009b9768);
  puRam0000000000af5088 = puVar1;
  return;
}



/* Entry: 001e4914; end: 001e4917;  */

void FUN_001e4914(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e641c;
  _swift_getWitnessTable(&UNK_007e641c,&UNK_009b9768);
  puRam0000000000af5090 = puVar1;
  return;
}



/* Entry: 001e4918; end: 001e4957;  */

void FUN_001e4918(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e641c;
  _swift_getWitnessTable(&UNK_007e641c,&UNK_009b9768);
  puRam0000000000af5090 = puVar1;
  return;
}



/* Entry: 001e4958; end: 001e4e03;  */

int FUN_001e4958(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e49d4;
        goto LAB_001e49b8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e49b8:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_001e49d4:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e4e04; end: 001e4eaf;  */

void FUN_001e4e04(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e4eb0; end: 001e4ef7;  */

undefined8 FUN_001e4eb0(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 != '\0') {
    return 0;
  }
  uVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return uVar1;
}



/* Entry: 001e4ef8; end: 001e4f73;  */

undefined1  [16] FUN_001e4ef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0x80000000008bc900;
  uVar3 = 0xd000000000000018;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xef676e69646e6553;
    uVar3 = 0x70616e5374736f50;
  }
  uVar2 = 0xed00007364726143;
  uVar4 = 0x6c6576654c706f54;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 001e4f74; end: 001e4fb3;  */

void FUN_001e4f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af51e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e64b8;
  _swift_getWitnessTable(&UNK_007e64b8,&UNK_009b9878);
  puRam0000000000af51e8 = puVar1;
  return;
}



/* Entry: 001e4fb4; end: 001e4fd7;  */

void FUN_001e4fb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e4fd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e4fd8; end: 001e5017;  */

void FUN_001e4fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af51f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e64e0;
  _swift_getWitnessTable(&UNK_007e64e0,&UNK_009b9878);
  puRam0000000000af51f0 = puVar1;
  return;
}



/* Entry: 001e5018; end: 001e517b;  */

int FUN_001e5018(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e5094;
        goto LAB_001e5078;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e5078:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001e5094:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e517c; end: 001e5217;  */

/* WARNING: Removing unreachable block (ram,0x001e5558) */

undefined1  [16] FUN_001e517c(ulong param_1,undefined **param_2)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  char *pcVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined **unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
code_r0x001e517c:
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x19 = (undefined **)0xaf4ac8;
  pcVar7 = (char *)(param_1 & 0xff);
  ppuVar2 = (undefined **)0x0;
  puVar4 = &UNK_007e6560;
  UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar7[0x7e6560] * 4 + 0x1e51b4);
  ppuVar5 = param_2;
  switch(pcVar7) {
  case (char *)0x1:
  case "":
  case "":
  case "":
  case (char *)0x14:
  case "":
    break;
  default:
    unaff_x19 = &PTR__OBJC_METACLASS___NSObject_00af4000;
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
    unaff_x19 = unaff_x19 + 0x153;
    break;
  case "":
    unaff_x19 = (undefined **)0xaf49a0;
    break;
  case "":
  case "\x19":
    unaff_x19 = (undefined **)0xaf4968;
    break;
  case "":
  case "":
    unaff_x19 = (undefined **)0xaf4a50;
    break;
  case "E":
    unaff_x19 = (undefined **)0xaf4a00;
  case "\t":
    break;
  case "":
    ppuVar2 = (undefined **)0xd000000000000013;
    pcVar7 = "invalidateSessionContents";
  case "":
    auVar22._8_8_ = (ulong)(pcVar7 + 0x360) | 0x8000000000000000;
    auVar22._0_8_ = ppuVar2;
    return auVar22;
  case (char *)0x18:
  case "C":
  case "":
    pcVar7 = pcVar7 + 0x180;
  case "":
  case "":
  case "stubs":
    auVar11._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar11._0_8_ = 0xd00000000000001c;
    return auVar11;
  case (char *)0x1a:
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = 0x6552000000000000;
    return auVar14;
  case "__TEXT":
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
    ppuVar2 = (undefined **)0xd000000000000016;
  case "\x05":
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = ppuVar2;
    return auVar19;
  case "_TEXT":
  case "":
  case "":
    pcVar7 = pcVar7 + -0x20;
  case "":
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
  case "":
    pcVar7 = (char *)0xd000000000000013;
  case "\x02":
  case "_TEXT":
    ppuVar2 = (undefined **)(pcVar7 + 6);
  case "__TEXT":
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = ppuVar2;
    return auVar15;
  case "":
    goto FUN_001e5538;
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
    param_2 = (undefined **)((ulong)param_2 & 0xffffffffffff | 0xef64000000000000);
  case "":
    ppuVar2 = (undefined **)0x746f4e6563696f56;
    puVar4 = &UNK_007e6575;
    UNRECOVERED_JUMPTABLE = (code *)0x1e5258;
  case "":
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)puVar4[(long)pcVar7] * 4;
  case "__stubs":
                    /* WARNING: Could not recover jumptable at 0x001e5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(ppuVar2,param_2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = ppuVar2;
    return auVar9;
  case "":
  case "":
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  case "\x1c":
    uVar3 = (ulong)*unaff_x20;
    __ss6HasherV8_combineyySuF(0,uVar3);
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = uVar3;
    return auVar26;
  case "":
  case "":
  case "":
    goto code_r0x001e51c0;
  case "":
    uVar3 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + -0x18));
    __ss6HasherV8_combineyySuF(uVar3);
    __ss6HasherV9_finalizeSiyF();
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = uVar3;
    return auVar27;
  case (char *)0x52:
  case "":
  case "\x01":
  case "v":
  case "":
  case "":
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case "":
    auVar21._0_8_ = (ulong)pcVar7 | 4;
    auVar21._8_8_ = param_2;
    return auVar21;
  case "":
  case "EXT":
  case "":
  case "":
  case "":
  case "":
  case (char *)0xfb:
    if (puRam0000000000af5200 == (undefined *)0x0) {
      *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x30;
      puVar4 = &UNK_007e65c0;
      puVar6 = &UNK_009b9968;
      _swift_getWitnessTable(&UNK_007e65c0,&UNK_009b9968);
      puRam0000000000af5200 = puVar4;
      auVar30._8_8_ = puVar6;
      auVar30._0_8_ = puVar4;
      return auVar30;
    }
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = puRam0000000000af5200;
    return auVar29;
  case "":
  case "":
    pcVar7 = pcVar7 + -0x20;
  case "":
  case "_stubs":
    auVar23._8_8_ = (ulong)pcVar7 | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000014;
    return auVar23;
  case "":
  case "":
code_r0x001e51c4:
    param_2 = (undefined **)&UNK_007e5000;
  case "\b\t":
    ppuVar5 = param_2 + 0x46;
  case "":
  case "":
  case "":
  case "":
    param_2 = unaff_x19;
    func_0x000115a8(ppuVar2,ppuVar5);
  case (char *)0x90:
    _swift_initStaticObject();
  case "":
  case "":
  case "":
  case "":
    FUN_001da650();
  case (char *)0x0:
  case "":
  case "\x06":
  case "":
  case "":
  case "":
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = ppuVar2;
    return auVar8;
  case "":
  case "XT":
  case "":
  case "":
    __ss6HasherV5_seedABSi_tcfC();
    ppuVar2 = unaff_x19;
  case "":
    __ss6HasherV8_combineyySuF(ppuVar2);
    __ss6HasherV9_finalizeSiyF();
  case "\x02":
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = ppuVar2;
    return auVar25;
  case "__TEXT":
  case "":
    auVar24._1_7_ = 0;
    auVar24[0] = *(char *)param_2 == -0x31;
    auVar24._8_8_ = param_2;
    return auVar24;
  case "_TEXT":
    auVar20._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000026;
    return auVar20;
  case "TEXT":
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    return auVar1 << 0x40;
  case "":
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x30;
  case "\b\x04":
    ppuVar2 = (undefined **)&UNK_007e6598;
  case (char *)0x51:
  case "":
  case "":
    param_2 = &PTR_DAT_009b9000;
  case "tv":
  case "":
    param_2 = param_2 + 0x12d;
    _swift_getWitnessTable(ppuVar2,param_2);
    pcVar7 = (char *)0xaf51f8;
  case "\x04":
    *(undefined ***)pcVar7 = ppuVar2;
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = ppuVar2;
    return auVar28;
  case "\x04":
    ppuVar2 = (undefined **)0x73000000000000;
  case "":
  case "":
  case "":
  case "":
  case "T":
  case "":
  case "":
  case "":
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = ppuVar2;
    return auVar10;
  case "":
    param_2 = (undefined **)((ulong)(pcVar7 + -0x20) | 0x8000000000000000);
  case "TEXT":
    pcVar7 = (char *)0xd000000000000013;
  case "":
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = pcVar7 + 7;
    return auVar12;
  case "":
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
    pcVar7 = (char *)((long)&MACH_HEADER.ncmds + 3);
  case "":
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case "":
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = pcVar7 + 2;
    return auVar16;
  case "XT":
    pcVar7 = "invalidateSessionContents";
  case "EXT":
  case "":
    pcVar7 = pcVar7 + 0x310;
  case "":
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
  case "":
    pcVar7 = (char *)((long)&MACH_HEADER.ncmds + 3);
  case "":
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case "":
  case "":
  case "":
    ppuVar2 = (undefined **)(pcVar7 + 0x11);
  case "":
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = ppuVar2;
    return auVar17;
  case "T":
    param_2 = (undefined **)0xea00000000007070;
  case "":
    ppuVar2 = (undefined **)&UNK_00006157;
  case "":
    auVar18._0_8_ = (ulong)ppuVar2 | 0x41534f6863740000;
    auVar18._8_8_ = param_2;
    return auVar18;
  case "":
    pcVar7 = "invalidateSessionContents";
  case "":
  case "":
    pcVar7 = pcVar7 + 0x1c0;
  case "tC":
    param_2 = (undefined **)((ulong)(pcVar7 + -0x20) | 0x8000000000000000);
    pcVar7 = (char *)0xd000000000000013;
  case "":
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = pcVar7 + 10;
    return auVar13;
  }
  ppuVar2 = &PTR__OBJC_METACLASS___NSObject_00af4000;
code_r0x001e51c0:
  ppuVar2 = ppuVar2 + 0xb;
  goto code_r0x001e51c4;
FUN_001e5538:
  param_1 = (ulong)*unaff_x20;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  goto code_r0x001e517c;
}



/* Entry: 001e5218; end: 001e548b;  */

undefined1  [16] FUN_001e5218(ulong param_1)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  puVar4 = (undefined *)0xef64726f63655265;
  puVar2 = (undefined *)0x746f4e6563696f56;
  pcVar5 = (char *)(param_1 & 0xff);
  uVar7 = 0x7e6575;
  uVar8 = (uint)(byte)(&UNK_007e6575)[(long)pcVar5] * 4 + 0x1e5258;
  uVar6 = uVar7;
  switch(pcVar5) {
  default:
    puVar2 = (undefined *)0x13;
  case "":
  case (char *)0x41:
  case "":
  case "":
  case "":
  case "tw":
    puVar2 = (undefined *)((ulong)puVar2 & 0xffffffffffff | 0xd000000000000000);
  case "":
    pcVar5 = "invalidateSessionContents";
  case "":
  case "":
  case "tw":
    pcVar5 = pcVar5 + 0x380;
  case "":
  case "":
code_r0x001e544c:
    auVar23._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = puVar2;
    return auVar23;
  case (char *)0x1:
    puVar4 = (undefined *)0x80000000008bd310;
  case "EXT":
    auVar16._8_8_ = puVar4;
    auVar16._0_8_ = 0xd000000000000024;
    return auVar16;
  case (char *)0x2:
    pcVar5 = "FeedTableHeaderViewUpdate";
    goto code_r0x001e5334;
  case (char *)0x3:
  case "XT":
  case "tC":
  case "":
    pcVar5 = "invalidateSessionContents";
  case "":
  case "":
  case "":
  case "":
    pcVar5 = pcVar5 + 0x2f0;
code_r0x001e5334:
    puVar4 = (undefined *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    puVar2 = (undefined *)0xd000000000000019;
code_r0x001e5348:
    auVar14._8_8_ = puVar4;
    auVar14._0_8_ = puVar2;
    return auVar14;
  case "\f":
    puVar4 = (undefined *)0x80000000008bd2b0;
    puVar2 = (undefined *)0xd00000000000001a;
  case "\t":
  case "":
  case "":
  case "":
  case "_text":
  case "":
  case "_TEXT":
  case "":
  case "":
  case "T":
  case "C":
  case "":
    auVar11._8_8_ = puVar4;
    auVar11._0_8_ = puVar2;
    return auVar11;
  case "":
  case "":
    puVar4 = (undefined *)0x80000000008bd280;
  case "":
    pcVar5 = "";
    goto code_r0x001e53dc;
  case "":
  case "":
    pcVar5 = "invalidateSessionContents";
  case "":
    puVar4 = (undefined *)((ulong)(pcVar5 + 0x260) | 0x8000000000000000);
    pcVar5 = "";
    goto code_r0x001e53fc;
  case "\x01":
  case "":
    puVar4 = (undefined *)0x80000000008bd200;
  case (char *)0xab:
    pcVar5 = (char *)0xd000000000000013;
code_r0x001e5364:
    auVar15._8_8_ = puVar4;
    auVar15._0_8_ = pcVar5 + 2;
    return auVar15;
  case "":
    puVar2 = (undefined *)0xd000000000000013;
    pcVar5 = "PinnedConversations";
    goto code_r0x001e544c;
  case "":
    pcVar5 = "SnapChattersRepository";
  case "":
code_r0x001e53b0:
    auVar18._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = 0xd000000000000016;
    return auVar18;
  case "":
    pcVar5 = "invalidateSessionContents";
  case "":
    pcVar5 = pcVar5 + 0x1e0;
    break;
  case "":
    pcVar5 = "invalidateSessionContents";
  case "":
    pcVar5 = pcVar5 + 0x1c0;
code_r0x001e52d8:
    auVar12._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd00000000000001d;
    return auVar12;
  case "\x06":
    pcVar5 = "MessagingSystemSearchIndexing";
    goto code_r0x001e52d8;
  case "":
    puVar4 = (undefined *)0x80000000008bd160;
    puVar2 = (undefined *)0xd00000000000001c;
  case "E":
    auVar10._8_8_ = puVar4;
    auVar10._0_8_ = puVar2;
    return auVar10;
  case "":
    puVar4 = (undefined *)0xef737265646e696d;
    puVar2 = &UNK_00007453;
  case "":
    puVar2 = (undefined *)((ulong)puVar2 & 0xffffffff0000ffff | 0x65720000);
    goto code_r0x001e5320;
  case "":
    puVar4 = (undefined *)0xe700000000000000;
  case "_TEXT":
  case (char *)0x51:
  case "tv":
  case "":
  case "\x04":
    puVar2 = (undefined *)0x65727453;
    goto code_r0x001e5278;
  case "":
    auVar17._8_8_ = 0xea00000000007070;
    auVar17._0_8_ = 0x41534f6863746157;
    return auVar17;
  case "":
    puVar4 = (undefined *)0xe600000000000000;
    puVar2 = &UNK_00007544;
  case "":
    puVar2 = (undefined *)((ulong)puVar2 & 0xffffffff0000ffff | 0x6c700000);
code_r0x001e5414:
    auVar21._0_8_ = (ulong)puVar2 & 0xffff0000ffffffff | 0x786500000000;
    auVar21._8_8_ = puVar4;
    return auVar21;
  case "":
    puVar4 = (undefined *)0x80000000008bd340;
  case "":
    puVar2 = (undefined *)0xd000000000000014;
code_r0x001e5474:
    auVar24._8_8_ = puVar4;
    auVar24._0_8_ = puVar2;
    return auVar24;
  case (char *)0x14:
  case "stubs":
    pcVar5 = "CalendarEventDataFetch";
    goto code_r0x001e53b0;
  case "":
    uRam0000000000af5200 = 0x746f4e6563696f56;
    auVar30._8_8_ = 0xef64726f63655265;
    auVar30._0_8_ = 0x746f4e6563696f56;
    return auVar30;
  case "\b\t":
  case "":
  case "":
  case "\x1c":
  case "__text":
  case "":
  case "__TEXT":
  case "":
    goto code_r0x001e5324;
  case "":
  case "":
    goto code_r0x001e5578;
  case "__TEXT":
  case "":
  case (char *)0x90:
  case "":
  case "\b\x04":
    goto code_r0x001e527c;
  case "":
    auVar29._8_8_ = 0xef64726f63655265;
    auVar29._0_8_ = 0x746f4e6563696f56;
    return auVar29;
  case "":
  case "xt":
  case "":
    goto code_r0x001e5610;
  case "":
  case "t":
  case "":
  case "T":
  case "":
  case "":
  case "":
    uVar3 = (ulong)*unaff_x20;
    __ss6HasherV8_combineyySuF(0x746f4e6563696f56,uVar3);
    auVar25._8_8_ = puVar4;
    auVar25._0_8_ = uVar3;
    return auVar25;
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
  case "":
    goto code_r0x001e5654;
  case "":
  case "":
  case "ext":
  case "":
  case "":
    puVar2 = (undefined *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008);
code_r0x001e551c:
    __ss6HasherV8_combineyySuF(puVar2);
    __ss6HasherV9_finalizeSiyF();
    auVar26._8_8_ = puVar4;
    auVar26._0_8_ = puVar2;
    return auVar26;
  case "":
    goto code_r0x001e557c;
  case "":
  case "":
  case "":
  case "":
    puVar2 = puRam0000000000af51f8;
    if (puRam0000000000af51f8 != (undefined *)0x0) goto code_r0x001e5558;
    puVar2 = &UNK_007e6000;
  case "":
    puVar2 = puVar2 + 0x598;
    puVar4 = &UNK_009b9968;
    _swift_getWitnessTable(puVar2,&UNK_009b9968);
    goto code_r0x001e5578;
  case "":
  case "":
    goto code_r0x001e551c;
  case "":
    goto code_r0x001e5474;
  case "":
    goto code_r0x001e564c;
  case "":
    goto code_r0x001e55f8;
  case "EXT":
    goto code_r0x001e5278;
  case "XT":
  case "":
    goto code_r0x001e5614;
  case "":
code_r0x001e5558:
    auVar27._8_8_ = 0xef64726f63655265;
    auVar27._0_8_ = puVar2;
    return auVar27;
  case "":
    goto code_r0x001e5320;
  case "":
    goto code_r0x001e5438;
  case "":
  case "":
  case "":
    goto code_r0x001e5428;
  case "":
    goto code_r0x001e53fc;
  case "":
    goto code_r0x001e53e0;
  case "":
    goto code_r0x001e542c;
  case "":
    goto code_r0x001e5364;
  case "":
  case "_stubs":
    goto code_r0x001e5414;
  case "__stubs":
    goto code_r0x001e5430;
  case "tubs":
    goto code_r0x001e53dc;
  case "ubs":
    break;
  case "bs":
    goto code_r0x001e5404;
  case "":
    goto code_r0x001e5348;
  case "":
    goto code_r0x001e5608;
  case "":
    goto code_r0x001e5624;
  }
  pcVar5 = pcVar5 + -0x20;
code_r0x001e5428:
  puVar4 = (undefined *)((ulong)pcVar5 | 0x8000000000000000);
code_r0x001e542c:
  pcVar5 = "";
  goto code_r0x001e5430;
code_r0x001e5578:
  pcVar5 = (char *)0xaf5000;
code_r0x001e557c:
  *(undefined **)(pcVar5 + 0x1f8) = puVar2;
  auVar28._8_8_ = puVar4;
  auVar28._0_8_ = puVar2;
  return auVar28;
code_r0x001e5278:
  puVar2 = (undefined *)((ulong)puVar2 & 0xffff0000ffffffff | 0x6b6100000000);
code_r0x001e527c:
  auVar9._0_8_ = (ulong)puVar2 & 0xffffffffffff | 0x73000000000000;
  auVar9._8_8_ = puVar4;
  return auVar9;
code_r0x001e5320:
  puVar2 = (undefined *)((ulong)puVar2 & 0xffff0000ffffffff | 0x6b6100000000);
code_r0x001e5324:
  auVar13._0_8_ = (ulong)puVar2 & 0xffffffffffff | 0x6552000000000000;
  auVar13._8_8_ = puVar4;
  return auVar13;
code_r0x001e5430:
  puVar2 = (undefined *)((ulong)pcVar5 | 0xd000000000000004);
code_r0x001e5438:
  auVar22._8_8_ = puVar4;
  auVar22._0_8_ = puVar2;
  return auVar22;
code_r0x001e53fc:
  puVar2 = (undefined *)(((ulong)pcVar5 | 0xd000000000000000) - 2);
code_r0x001e5404:
  auVar20._8_8_ = puVar4;
  auVar20._0_8_ = puVar2;
  return auVar20;
code_r0x001e53dc:
  pcVar5 = (char *)((ulong)pcVar5 | 0xd000000000000000);
code_r0x001e53e0:
  auVar19._8_8_ = puVar4;
  auVar19._0_8_ = pcVar5 + 0x13;
  return auVar19;
code_r0x001e55f8:
  if (!(bool)in_CY) goto LAB_001e566c;
  pcVar5 = (char *)0x63655279;
  in_CY = 1;
code_r0x001e5608:
  uVar7 = 4;
  uVar8 = 2;
code_r0x001e5610:
  uVar6 = uVar8;
  if ((bool)in_CY) {
    uVar6 = uVar7;
  }
code_r0x001e5614:
  if ((uint)((ulong)pcVar5 >> 8) < 0xff) {
    uVar6 = 1;
  }
  pcVar5 = (char *)(ulong)uVar6;
  in_ZR = uVar6 == 4;
code_r0x001e5624:
  if ((bool)in_ZR) {
    pcVar5 = (char *)(ulong)uRam746f4e6563696f57;
code_r0x001e564c:
    if ((int)pcVar5 == 0) goto LAB_001e566c;
  }
  else if ((int)pcVar5 == 2) {
    pcVar5 = (char *)(ulong)(ushort)uRam746f4e6563696f57;
    if ((ushort)uRam746f4e6563696f57 == 0) {
LAB_001e566c:
      iVar1 = bRam746f4e6563696f56 - 0x15;
      if (bRam746f4e6563696f56 < 0x15) {
        iVar1 = -1;
      }
      auVar32._4_4_ = 0;
      auVar32._0_4_ = iVar1 + 1;
      auVar32._8_8_ = 0xef64726f63655265;
      return auVar32;
    }
  }
  else {
    pcVar5 = (char *)(ulong)(byte)uRam746f4e6563696f57;
    if ((byte)uRam746f4e6563696f57 == 0) goto LAB_001e566c;
  }
  uVar7 = (uint)bRam746f4e6563696f56;
code_r0x001e5654:
  auVar31._4_4_ = 0;
  auVar31._0_4_ = (uVar7 | (int)pcVar5 << 8) - 0x14;
  auVar31._8_8_ = 0xef64726f63655265;
  return auVar31;
}



/* Entry: 001e548c; end: 001e5537;  */

void FUN_001e548c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e5538; end: 001e554b;  */

/* WARNING: Removing unreachable block (ram,0x001e5558) */

undefined1  [16] FUN_001e5538(undefined8 param_1,undefined **param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined **unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar3 = (undefined1 *)register0x00000008;
code_r0x001e5538:
  puVar4 = puVar3;
  bVar1 = *unaff_x20;
  pcVar7 = (char *)(ulong)bVar1;
  *(byte **)(puVar4 + -0x20) = unaff_x20;
  *(undefined ***)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  unaff_x29 = puVar4 + -0x10;
  unaff_x19 = (undefined **)0xaf4ac8;
  ppuVar5 = (undefined **)0x0;
  puVar8 = &UNK_007e6560;
  UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar7[0x7e6560] * 4 + 0x1e51b4);
  puVar3 = puVar4 + -0x20;
  ppuVar9 = param_2;
  switch(bVar1) {
  case 1:
  case 6:
  case 10:
  case 0xd:
  case 0x14:
  case 0xae:
    break;
  default:
    unaff_x19 = &PTR__OBJC_METACLASS___NSObject_00af4000;
  case 0x48:
  case 0x56:
  case 0x96:
  case 0xb2:
  case 0xf0:
  case 0xfe:
    unaff_x19 = unaff_x19 + 0x153;
    break;
  case 8:
    unaff_x19 = (undefined **)0xaf49a0;
    break;
  case 0xe:
  case 0x20:
    unaff_x19 = (undefined **)0xaf4968;
    break;
  case 0xf:
  case 0x19:
    unaff_x19 = (undefined **)0xaf4a50;
    break;
  case 0x10:
    unaff_x19 = (undefined **)0xaf4a00;
  case 0x25:
    break;
  case 0x17:
    ppuVar5 = (undefined **)0xd000000000000013;
    pcVar7 = "invalidateSessionContents";
  case 0x23:
    auVar25._8_8_ = (ulong)(pcVar7 + 0x360) | 0x8000000000000000;
    auVar25._0_8_ = ppuVar5;
    return auVar25;
  case 0x18:
  case 0xe1:
  case 0xf5:
    pcVar7 = pcVar7 + 0x180;
  case 0x5e:
  case 0x9e:
  case 0xba:
    auVar14._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = 0xd00000000000001c;
    return auVar14;
  case 0x1a:
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = 0x6552000000000000;
    return auVar17;
  case 0x28:
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
    ppuVar5 = (undefined **)0xd000000000000016;
  case 0x5c:
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = ppuVar5;
    return auVar22;
  case 0x29:
  case 0xcf:
  case 0xa4:
    pcVar7 = pcVar7 + -0x20;
  case 0xd0:
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
  case 0xc5:
    pcVar7 = (char *)0xd000000000000013;
  case 0x1b:
  case 0xc9:
    ppuVar5 = (undefined **)(pcVar7 + 6);
  case 200:
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = ppuVar5;
    return auVar18;
  case 0x38:
    goto code_r0x001e5538;
  case 0x3a:
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0xa2:
  case 0xaa:
  case 0xe2:
  case 0xf6:
    param_2 = (undefined **)((ulong)param_2 & 0xffffffffffff | 0xef64000000000000);
  case 0x21:
    ppuVar5 = (undefined **)0x746f4e6563696f56;
    puVar8 = &UNK_007e6575;
    UNRECOVERED_JUMPTABLE = (code *)0x1e5258;
  case 0x1e:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)puVar8[(long)pcVar7] * 4;
  case 0xb8:
                    /* WARNING: Could not recover jumptable at 0x001e5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(ppuVar5,param_2);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = ppuVar5;
    return auVar12;
  case 0x3c:
  case 0x50:
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar4 + -8) = unaff_x30;
  case 0x60:
    uVar6 = (ulong)*unaff_x20;
    __ss6HasherV8_combineyySuF(0,uVar6);
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = uVar6;
    return auVar29;
  case 0x46:
  case 0x6e:
  case 0xee:
    goto code_r0x001e51c0;
  case 0x4c:
    uVar6 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(puVar4 + -0x18);
    __ss6HasherV8_combineyySuF(uVar6);
    __ss6HasherV9_finalizeSiyF();
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = uVar6;
    return auVar30;
  case 0x52:
  case 0x82:
  case 0x8a:
  case 0x92:
  case 0xb6:
  case 0xfa:
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case 100:
    auVar24._0_8_ = (ulong)pcVar7 | 4;
    auVar24._8_8_ = param_2;
    return auVar24;
  case 0x53:
  case 0x7b:
  case 0x83:
  case 0x8b:
  case 0x93:
  case 0xb7:
  case 0xfb:
    if (puRam0000000000af5200 == (undefined *)0x0) {
      *(undefined1 **)(puVar4 + -0x30) = unaff_x29;
      *(undefined8 *)(puVar4 + -0x28) = unaff_x30;
      puVar8 = &UNK_007e65c0;
      puVar10 = &UNK_009b9968;
      _swift_getWitnessTable(&UNK_007e65c0,&UNK_009b9968);
      puRam0000000000af5200 = puVar8;
      auVar33._8_8_ = puVar10;
      auVar33._0_8_ = puVar8;
      return auVar33;
    }
    auVar32._8_8_ = param_2;
    auVar32._0_8_ = puRam0000000000af5200;
    return auVar32;
  case 0x5d:
  case 0x9d:
    pcVar7 = pcVar7 + -0x20;
  case 0x80:
  case 0xb9:
    auVar26._8_8_ = (ulong)pcVar7 | 0x8000000000000000;
    auVar26._0_8_ = 0xd000000000000014;
    return auVar26;
  case 0x70:
  case 0xb0:
code_r0x001e51c4:
    param_2 = (undefined **)&UNK_007e5000;
  case 0x24:
    ppuVar9 = param_2 + 0x46;
  case 0x3e:
  case 0x66:
  case 0xa6:
  case 0xe6:
    param_2 = unaff_x19;
    func_0x000115a8(ppuVar5,ppuVar9);
  case 0x90:
    _swift_initStaticObject();
  case 0x3d:
  case 0x65:
  case 0xa5:
  case 0xe5:
    FUN_001da650();
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
  case 0x12:
  case 0x22:
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = ppuVar5;
    return auVar11;
  case 0x74:
  case 0x7c:
  case 0x84:
  case 0x8c:
    __ss6HasherV5_seedABSi_tcfC();
    ppuVar5 = unaff_x19;
  case 0xa8:
    __ss6HasherV8_combineyySuF(ppuVar5);
    __ss6HasherV9_finalizeSiyF();
  case 0x9c:
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = ppuVar5;
    return auVar28;
  case 0x78:
  case 0xa0:
    auVar27._1_7_ = 0;
    auVar27[0] = *(char *)param_2 == -0x31;
    auVar27._8_8_ = param_2;
    return auVar27;
  case 0x79:
    auVar23._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000026;
    return auVar23;
  case 0x7a:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  case 0x88:
    *(undefined1 **)(puVar4 + -0x30) = unaff_x29;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x30;
  case 0xf8:
    ppuVar5 = (undefined **)&UNK_007e6598;
  case 0x51:
  case 0x81:
  case 0x89:
    param_2 = &PTR_DAT_009b9000;
  case 0x91:
  case 0xb5:
    param_2 = param_2 + 0x12d;
    _swift_getWitnessTable(ppuVar5,param_2);
    pcVar7 = (char *)0xaf51f8;
  case 0xf9:
    *(undefined ***)pcVar7 = ppuVar5;
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = ppuVar5;
    return auVar31;
  case 0xa9:
    ppuVar5 = (undefined **)0x73000000000000;
  case 0x39:
  case 0x4d:
  case 0x61:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0xa1:
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = ppuVar5;
    return auVar13;
  case 0xc0:
    param_2 = (undefined **)((ulong)(pcVar7 + -0x20) | 0x8000000000000000);
  case 0xca:
    pcVar7 = (char *)0xd000000000000013;
  case 0x16:
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = pcVar7 + 7;
    return auVar15;
  case 0xc4:
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
    pcVar7 = (char *)((long)&MACH_HEADER.ncmds + 3);
  case 0xd2:
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case 0x27:
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = pcVar7 + 2;
    return auVar19;
  case 0xcc:
    pcVar7 = "invalidateSessionContents";
  case 0xcb:
  case 0xce:
    pcVar7 = pcVar7 + 0x310;
  case 0x1f:
    param_2 = (undefined **)((ulong)pcVar7 | 0x8000000000000000);
  case 0xc3:
    pcVar7 = (char *)((long)&MACH_HEADER.ncmds + 3);
  case 0xd1:
    pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  case 0xc1:
  case 0xc2:
  case 199:
    ppuVar5 = (undefined **)(pcVar7 + 0x11);
  case 0xc6:
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = ppuVar5;
    return auVar20;
  case 0xcd:
    param_2 = (undefined **)0xea00000000007070;
  case 0xb4:
    ppuVar5 = (undefined **)&UNK_00006157;
  case 0x1d:
    auVar21._0_8_ = (ulong)ppuVar5 | 0x41534f6863740000;
    auVar21._8_8_ = param_2;
    return auVar21;
  case 0xe4:
    pcVar7 = "invalidateSessionContents";
  case 0x1c:
  case 0xf4:
    pcVar7 = pcVar7 + 0x1c0;
  case 0xe0:
    param_2 = (undefined **)((ulong)(pcVar7 + -0x20) | 0x8000000000000000);
    pcVar7 = (char *)0xd000000000000013;
  case 0x26:
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = pcVar7 + 10;
    return auVar16;
  }
  ppuVar5 = &PTR__OBJC_METACLASS___NSObject_00af4000;
code_r0x001e51c0:
  ppuVar5 = ppuVar5 + 0xb;
  goto code_r0x001e51c4;
}



/* Entry: 001e554c; end: 001e558b;  */

void FUN_001e554c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af51f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6598;
  _swift_getWitnessTable(&UNK_007e6598,&UNK_009b9968);
  puRam0000000000af51f8 = puVar1;
  return;
}



/* Entry: 001e558c; end: 001e55af;  */

void FUN_001e558c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e55b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e55b0; end: 001e55ef;  */

void FUN_001e55b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af5200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e65c0;
  _swift_getWitnessTable(&UNK_007e65c0,&UNK_009b9968);
  puRam0000000000af5200 = puVar1;
  return;
}



/* Entry: 001e55f0; end: 001e5753;  */

int FUN_001e55f0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xeb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x14) {
      iVar2 = 4;
    }
    if (param_2 + 0x14 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001e566c;
        goto LAB_001e5650;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001e5650:
      return ((uint)*param_1 | uVar1 << 8) - 0x14;
    }
  }
LAB_001e566c:
  iVar2 = *param_1 - 0x15;
  if (*param_1 < 0x15) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001e5754; end: 001e580f;  */

void FUN_001e5754(undefined8 param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  if ((param_2 < 2) || ((param_2 != 2 && (param_2 == 3)))) {
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    FUN_001da650();
    _swift_setDeallocating(lVar1);
  }
  else {
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001e5810; end: 001e5a43;  */

void FUN_001e5810(byte param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (1 < param_2) {
    if (param_2 == 2) {
      lVar1 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x18) = 4;
      *(undefined8 *)(lVar1 + 0x10) = 2;
      *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar1 + 0x28) = 0x80000000008bd380;
      if (param_1 < 2) {
        if (param_1 == 0) {
          uVar2 = 0xe600000000000000;
          uVar3 = 0x65646f4d6961;
        }
        else {
          uVar2 = 0xe800000000000000;
          uVar3 = 0x736e6f6974706163;
        }
      }
      else if (param_1 == 2) {
        uVar3 = 0x7372656b63697473;
        uVar2 = 0xe800000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = 0xe900000000000072;
        uVar3 = 0x65766f6563696f76;
      }
      else {
        uVar2 = 0xeb00000000726573;
        uVar3 = 0x617245636967616d;
      }
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
      *(undefined8 *)(lVar1 + 0x38) = uVar2;
      uVar3 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar2 = uVar3;
      func_0x0002f390();
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
      _swift_release(lVar1);
    }
    else if (param_2 != 3) {
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_initStaticObject();
      uVar3 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar2 = uVar3;
      func_0x0002f390();
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
    }
  }
  return;
}



/* Entry: 001e5a44; end: 001e5a4b;  */

undefined8 FUN_001e5a44(void)

{
  return 1;
}



/* Entry: 001e5a4c; end: 001e5ab7;  */

void FUN_001e5a4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 001e5ab8; end: 001e5ad7;  */

void FUN_001e5ab8(undefined8 *param_1)

{
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x80000000008bd3c0;
  return;
}



/* Entry: 001e5ad8; end: 001e5b2b;  */

void FUN_001e5ad8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000013,0x80000000008bd3c0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e5b2c; end: 001e5b47;  */

void FUN_001e5b2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
            (param_1,0xd000000000000013,0x80000000008bd3c0);
  return;
}



/* Entry: 001e5b48; end: 001e5b97;  */

void FUN_001e5b48(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000013,0x80000000008bd3c0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e5b98; end: 001e5bab;  */

bool FUN_001e5b98(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001e5bac; end: 001e5bd7;  */

void FUN_001e5bac(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001e61c4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001e5bd8; end: 001e5c7f;  */

void FUN_001e5bd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar2 = 0xe900000000000072;
  uVar4 = 0x65766f6563696f76;
  if (bVar5 != 3) {
    uVar2 = 0xeb00000000726573;
    uVar4 = 0x617245636967616d;
  }
  uVar1 = 0x7372656b63697473;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x65646f4d6961;
  if (bVar5 != 0) {
    uVar2 = 0x736e6f6974706163;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 001e5c80; end: 001e6063;  */

void FUN_001e5c80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar2 = 0xe900000000000072;
  uVar4 = 0x65766f6563696f76;
  if (bVar5 != 3) {
    uVar2 = 0xeb00000000726573;
    uVar4 = 0x617245636967616d;
  }
  uVar1 = 0x7372656b63697473;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x65646f4d6961;
  if (bVar5 != 0) {
    uVar2 = 0x736e6f6974706163;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e6064; end: 001e607b;  */

void FUN_001e6064(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  lVar2 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  if ((bVar1 < 2) || ((bVar1 != 2 && (bVar1 == 3)))) {
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    FUN_001da650();
    _swift_setDeallocating(lVar2);
  }
  else {
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001e607c; end: 001e60c7;  */

void FUN_001e607c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x001e5f10(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e60c8; end: 001e60d3;  */

void FUN_001e60c8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  
  uVar8 = *unaff_x20;
  bVar5 = (byte)unaff_x20[1];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    if (bVar5 == 2) {
      __ss6HasherV8_combineyySuF(3);
      uVar1 = (uint)uVar8 & 0xff;
      uVar7 = 0xe900000000000072;
      uVar4 = 0x65766f6563696f76;
      if (uVar1 != 3) {
        uVar7 = 0xeb00000000726573;
        uVar4 = 0x617245636967616d;
      }
      uVar3 = 0x7372656b63697473;
      if (uVar1 != 2) {
        uVar3 = uVar4;
      }
      uVar4 = 0xe800000000000000;
      if (uVar1 != 2) {
        uVar4 = uVar7;
      }
      bVar6 = (uVar8 & 0xff) != 0;
      uVar7 = 0x65646f4d6961;
      if (bVar6) {
        uVar7 = 0x736e6f6974706163;
      }
      uVar2 = 0xe600000000000000;
      if (bVar6) {
        uVar2 = 0xe800000000000000;
      }
      if (uVar1 == 1 || (uVar8 & 0xff) == 0) {
        uVar3 = uVar7;
      }
      if (uVar1 == 1 || (uVar8 & 0xff) == 0) {
        uVar4 = uVar2;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar4);
      return;
    }
    if (bVar5 != 3) {
      __ss6HasherV8_combineyySuF(1);
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)
                (param_1,0xd000000000000013,0x80000000008bd3c0);
      return;
    }
    uVar7 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV8_combineyySuF(uVar8);
  return;
}



/* Entry: 001e60d4; end: 001e611b;  */

void FUN_001e60d4(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001e5f10(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e611c; end: 001e61c3;  */

bool FUN_001e611c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  uVar3 = (uint)*param_2;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
LAB_001e61b0:
        return (uint)*param_1 == uVar3;
      }
    }
    else if (cVar1 == '\x01') goto LAB_001e61b0;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
      return ((uVar3 ^ (uint)*param_1) & 0xff) == 0;
    }
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') goto LAB_001e61b0;
  }
  else if ((cVar1 == '\x04') && (*param_2 == 0)) {
    return true;
  }
  return false;
}



/* Entry: 001e61c4; end: 001e6227;  */

ulong FUN_001e61c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0xae6580;
  func_0x000115a8(0xae6580,&UNK_007cd4b0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 001e6228; end: 001e622b;  */

void FUN_001e6228(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6640;
  _swift_getWitnessTable(&UNK_007e6640,&UNK_009b9a58);
  puRam0000000000af52b8 = puVar1;
  return;
}



/* Entry: 001e622c; end: 001e626b;  */

void FUN_001e622c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e6640;
  _swift_getWitnessTable(&UNK_007e6640,&UNK_009b9a58);
  puRam0000000000af52b8 = puVar1;
  return;
}



/* Entry: 001e626c; end: 001e626f;  */

void FUN_001e626c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e66e0;
  _swift_getWitnessTable(&UNK_007e66e0,&UNK_009b9ae8);
  puRam0000000000af52c0 = puVar1;
  return;
}



/* Entry: 001e6270; end: 001e62af;  */

void FUN_001e6270(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e66e0;
  _swift_getWitnessTable(&UNK_007e66e0,&UNK_009b9ae8);
  puRam0000000000af52c0 = puVar1;
  return;
}



/* Entry: 001e62b0; end: 001e62d3;  */

void FUN_001e62b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001e62d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001e62d4; end: 001e6313;  */

void FUN_001e62d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e679c;
  _swift_getWitnessTable(&UNK_007e679c,&UNK_009b9b78);
  puRam0000000000af52c8 = puVar1;
  return;
}



/* Entry: 001e6314; end: 001e6317;  */

void FUN_001e6314(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e67dc;
  _swift_getWitnessTable(&UNK_007e67dc,&UNK_009b9b78);
  puRam0000000000af52d0 = puVar1;
  return;
}



/* Entry: 001e6318; end: 001e6357;  */

void FUN_001e6318(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af52d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e67dc;
  _swift_getWitnessTable(&UNK_007e67dc,&UNK_009b9b78);
  puRam0000000000af52d0 = puVar1;
  return;
}



/* Entry: 001e6358; end: 001e668b;  */

uint FUN_001e6358(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 001e668c; end: 001e6783;  */

void FUN_001e668c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001e6784; end: 001e67bf;  */

undefined1  [16] FUN_001e6784(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd00000000000001b;
  pcVar1 = "StoryEverywhereDFNotification";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd00000000000001c;
    pcVar1 = "ImpalaNotificationProcessor";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


