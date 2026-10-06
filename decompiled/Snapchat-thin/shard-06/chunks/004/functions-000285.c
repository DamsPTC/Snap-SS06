/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10489d2e8; end: 10489d35f;  */

undefined1  [16] FUN_10489d2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010007b560();
  _objc_release(param_1);
  uVar2 = uVar1;
  uVar3 = param_2;
  func_0x00010007c170(uVar1,param_2,param_3);
  func_0x00010007d980(uVar1,param_2,param_3);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10489d360; end: 10489d39b; -[_TtC15SnapAttribution24AttributedTaskObjcHelper init] */

void FUN_10489d360(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010489d3cc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10489d39c; end: 10489d3eb;  */

void FUN_10489d39c(void)

{
  func_0x00010489d3cc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10489d3ec; end: 10489d487;  */

undefined8 * FUN_10489d3ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001000ab9d4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10489d488; end: 10489d4cb;  */

undefined8 * FUN_10489d488(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x00010007d980(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10489d4cc; end: 10489d65b;  */

int FUN_10489d4cc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x19 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x1a;
  }
  uVar1 = (*(byte *)(param_1 + 4) ^ 0xfc) >> 2;
  if (*(byte *)(param_1 + 4) < 0x9c) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10489d65c; end: 10489d707;  */

void FUN_10489d65c(void)

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



/* Entry: 10489d708; end: 10489d70b;  */

void FUN_10489d708(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e750;
  _swift_getWitnessTable(&UNK_10dd3e750,&UNK_1107ae558);
  puRam00000001130988a8 = puVar1;
  return;
}



/* Entry: 10489d70c; end: 10489d74b;  */

void FUN_10489d70c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e750;
  _swift_getWitnessTable(&UNK_10dd3e750,&UNK_1107ae558);
  puRam00000001130988a8 = puVar1;
  return;
}



/* Entry: 10489d74c; end: 10489d75b;  */

undefined8 FUN_10489d74c(void)

{
  return 0;
}



/* Entry: 10489d75c; end: 10489d77f;  */

void FUN_10489d75c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489d780();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489d780; end: 10489d7bf;  */

void FUN_10489d780(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e778;
  _swift_getWitnessTable(&UNK_10dd3e778,&UNK_1107ae558);
  puRam00000001130988b0 = puVar1;
  return;
}



/* Entry: 10489d7c0; end: 10489d923;  */

int FUN_10489d7c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489d83c;
        goto LAB_10489d820;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489d820:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10489d83c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489d924; end: 10489db07;  */

undefined1  [16] FUN_10489d924(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 5) {
    if (param_1 == 3) {
      auVar8._8_8_ = 0x800000010f2160c0;
      auVar8._0_8_ = 0xd000000000000018;
      return auVar8;
    }
    if (param_1 == 4) {
      auVar6._8_8_ = 0xeb00000000796475;
      auVar6._0_8_ = 0x74537972616e6143;
      return auVar6;
    }
  }
  else {
    if (param_1 == 5) {
      auVar9._8_8_ = 0xee00797265766f63;
      auVar9._0_8_ = 0x65526769666e6f43;
      return auVar9;
    }
    if (param_1 == 6) {
      auVar7._8_8_ = 0x800000010f216060;
      auVar7._0_8_ = 0xd000000000000013;
      return auVar7;
    }
  }
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar5 = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f216080;
  if (param_1 == 0) {
    uVar4 = 0xec000000656d7573;
    uVar5 = 0x65526e4f74696e69;
  }
  else if (param_1 == 1) {
    uVar4 = 0xeb000000006e6967;
    uVar5 = 0x6f4c6e4f74696e69;
  }
  else {
    uVar4 = 0x800000010f2160a0;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar4;
  uVar5 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar5;
  func_0x00010011d734();
  uVar2 = 0x23;
  uVar3 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar5,uVar4);
  _swift_release(lVar1);
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = uVar2;
  return auVar10;
}



/* Entry: 10489db08; end: 10489db1b;  */

bool FUN_10489db08(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10489db1c; end: 10489db47;  */

void FUN_10489db1c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10489e034(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10489db48; end: 10489dbbb;  */

void FUN_10489db48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x6f4c6e4f74696e69;
  uVar1 = 0xeb000000006e6967;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xd000000000000010;
    uVar1 = 0x800000010f2160a0;
  }
  uVar2 = 0xec000000656d7573;
  uVar3 = 0x65526e4f74696e69;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10489dbbc; end: 10489dfc7;  */

void FUN_10489dbbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6f4c6e4f74696e69;
  uVar1 = 0xeb000000006e6967;
  if (cVar3 != '\x01') {
    uVar5 = 0xd000000000000010;
    uVar1 = 0x800000010f2160a0;
  }
  uVar2 = 0xec000000656d7573;
  uVar4 = 0x65526e4f74696e69;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489dfc8; end: 10489dfe7;  */

undefined8 FUN_10489dfc8(void)

{
  return 0;
}



/* Entry: 10489dfe8; end: 10489e027;  */

void FUN_10489dfe8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x00010489ddb0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489e028; end: 10489e033;  */

bool FUN_10489e028(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  if (*param_1 < 5) {
    if (uVar2 == 3) {
      if (uVar1 != 3) {
        return false;
      }
      return true;
    }
    if (uVar2 == 4) {
      if (uVar1 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 5) {
      if (uVar1 != 5) {
        return false;
      }
      return true;
    }
    if (uVar2 == 6) {
      if (uVar1 != 6) {
        return false;
      }
      return true;
    }
  }
  if (uVar1 - 3 < 4) {
    return false;
  }
  return uVar2 == uVar1;
}



/* Entry: 10489e034; end: 10489e097;  */

ulong FUN_10489e034(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10489e098; end: 10489e12b;  */

bool FUN_10489e098(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 < 5) {
    if (param_1 == 3) {
      if (param_2 != 3) {
        return false;
      }
      return true;
    }
    if (param_1 == 4) {
      if (param_2 != 4) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 5) {
      if (param_2 != 5) {
        return false;
      }
      return true;
    }
    if (param_1 == 6) {
      if (param_2 != 6) {
        return false;
      }
      return true;
    }
  }
  if (param_2 - 3 < 4) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 10489e12c; end: 10489e16b;  */

void FUN_10489e12c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e800;
  _swift_getWitnessTable(&UNK_10dd3e800,&UNK_1107ae648);
  puRam00000001130988b8 = puVar1;
  return;
}



/* Entry: 10489e16c; end: 10489e18f;  */

void FUN_10489e16c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489e190();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489e190; end: 10489e1cf;  */

void FUN_10489e190(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e8bc;
  _swift_getWitnessTable(&UNK_10dd3e8bc,&UNK_1107ae6d8);
  puRam00000001130988c0 = puVar1;
  return;
}



/* Entry: 10489e1d0; end: 10489e1d3;  */

void FUN_10489e1d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e8fc;
  _swift_getWitnessTable(&UNK_10dd3e8fc,&UNK_1107ae6d8);
  puRam00000001130988c8 = puVar1;
  return;
}



/* Entry: 10489e1d4; end: 10489e213;  */

void FUN_10489e1d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130988c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e8fc;
  _swift_getWitnessTable(&UNK_10dd3e8fc,&UNK_1107ae6d8);
  puRam00000001130988c8 = puVar1;
  return;
}



/* Entry: 10489e214; end: 10489e54f;  */

int FUN_10489e214(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489e290;
        goto LAB_10489e274;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489e274:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10489e290:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489e550; end: 10489e69b;  */

void FUN_10489e550(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000019;
  pcVar2 = "LockedCameraCapture";
  if (cVar3 != '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar2 = "invalidateSessionContents";
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489e69c; end: 10489e6a7;  */

void FUN_10489e69c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
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



/* Entry: 10489e6a8; end: 10489e71f;  */

void FUN_10489e6a8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
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



/* Entry: 10489e720; end: 10489e76b;  */

void FUN_10489e720(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000010;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6573624f6c6c6163;
  }
  uVar2 = 0x800000010f216480;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec00000072657672;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10489e76c; end: 10489e913;  */

void FUN_10489e76c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000010;
  if (cVar3 != '\x01') {
    uVar1 = 0x6573624f6c6c6163;
  }
  uVar2 = 0x800000010f216480;
  if (cVar3 != '\x01') {
    uVar2 = 0xec00000072657672;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489e914; end: 10489e9db;  */

void FUN_10489e914(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar1 = 0xed00007261657070;
  uVar4 = 0x4164694477656976;
  if (bVar3 != 3) {
    uVar1 = 0xee00686374656665;
    uVar4 = 0x725064616f6c7075;
  }
  uVar2 = 0x800000010f2162e0;
  uVar5 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xed000074696e4972;
  uVar4 = 0x65746c69466f6567;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f216300;
    uVar4 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10489e9dc; end: 10489eccb;  */

void FUN_10489e9dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xed00007261657070;
  uVar4 = 0x4164694477656976;
  if (bVar3 != 3) {
    uVar1 = 0xee00686374656665;
    uVar4 = 0x725064616f6c7075;
  }
  uVar2 = 0x800000010f2162e0;
  uVar5 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0xed000074696e4972;
  uVar4 = 0x65746c69466f6567;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f216300;
    uVar4 = 0xd000000000000017;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489eccc; end: 10489ecd3;  */

undefined8 FUN_10489eccc(void)

{
  return 1;
}



/* Entry: 10489ecd4; end: 10489ed3f;  */

void FUN_10489ecd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 10489ed40; end: 10489ed5f;  */

void FUN_10489ed40(undefined8 *param_1)

{
  *param_1 = 0xd000000000000012;
  param_1[1] = 0x800000010f2162a0;
  return;
}



/* Entry: 10489ed60; end: 10489edb3;  */

void FUN_10489ed60(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x800000010f2162a0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489edb4; end: 10489edcf;  */

void FUN_10489edb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000012,0x800000010f2162a0);
  return;
}



/* Entry: 10489edd0; end: 10489eecf;  */

void FUN_10489edd0(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000012,0x800000010f2162a0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489eed0; end: 10489eed7;  */

void FUN_10489eed0(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  bVar3 = bVar2 >> 5;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      lVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000013;
      *(undefined8 *)(lVar5 + 0x28) = 0x800000010f216620;
      pcVar1 = "LockedCameraCapture";
      uVar6 = 0xd000000000000019;
      if (bVar2 != 1) {
        pcVar1 = "invalidateSessionContents";
        uVar6 = 0xd000000000000012;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(ulong *)(lVar5 + 0x38) = (ulong)pcVar1 | 0x8000000000000000;
    }
    else if (bVar3 == 1) {
      lVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = 0x6669746f4e63694d;
      *(undefined8 *)(lVar5 + 0x28) = 0xef6e6f6974616369;
      bVar4 = (bVar2 & 0x1f) != 1;
      uVar6 = 0xd000000000000010;
      if (bVar4) {
        uVar6 = 0x6573624f6c6c6163;
      }
      uVar7 = 0x800000010f216480;
      if (bVar4) {
        uVar7 = 0xec00000072657672;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    else {
      bVar3 = bVar2 & 0x1f;
      lVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      uVar6 = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x20) = 0xd000000000000011;
      *(undefined8 *)(lVar5 + 0x28) = 0x800000010f2162c0;
      if (bVar3 < 2) {
        if ((bVar2 & 0x1f) == 0) {
          uVar7 = 0xed000074696e4972;
          uVar6 = 0x65746c69466f6567;
        }
        else {
          uVar7 = 0x800000010f216300;
          uVar6 = 0xd000000000000017;
        }
      }
      else if (bVar3 == 2) {
        uVar7 = 0x800000010f2162e0;
      }
      else if (bVar3 == 3) {
        uVar7 = 0xed00007261657070;
        uVar6 = 0x4164694477656976;
      }
      else {
        uVar7 = 0xee00686374656665;
        uVar6 = 0x725064616f6c7075;
      }
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
    }
    uVar7 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar7;
    func_0x00010011d734();
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar7,uVar6);
    func_0x000107c61574(lVar5);
  }
  else if ((((4 < bVar3) && (bVar3 == 5)) && (0xa3 < bVar2)) && ((0xa5 < bVar2 && (bVar2 != 0xa6))))
  {
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uVar6 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = uVar6;
    func_0x00010011d734();
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar6,uVar7);
  }
  return;
}



/* Entry: 10489eed8; end: 10489ef1b;  */

void FUN_10489eed8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001000aed64(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489ef1c; end: 10489ef23;  */

/* WARNING: Possible PIC construction at 0x0001000aef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aee7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000aef60) */
/* WARNING: Removing unreachable block (ram,0x0001000aee80) */
/* WARNING: Removing unreachable block (ram,0x0001000aef64) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10489ef1c(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  bVar5 = bVar4 >> 5;
  if (bVar5 < 3) {
    if (bVar5 == 0) {
      func_0x000107c60690(5);
      uVar7 = 0xd000000000000019;
      pcVar2 = "LockedCameraCapture";
      if (bVar4 != 1) {
        uVar7 = 0xd000000000000012;
        pcVar2 = "invalidateSessionContents";
      }
      uVar8 = (ulong)pcVar2 | 0x8000000000000000;
    }
    else {
      bVar1 = bVar4 & 0x1f;
      if (bVar5 == 1) {
        func_0x000107c60690(0xc);
        uVar7 = 0xd000000000000010;
        if (bVar1 != 1) {
          uVar7 = 0x6573624f6c6c6163;
        }
        uVar8 = 0x800000010f216480;
        if (bVar1 != 1) {
          uVar8 = 0xec00000072657672;
        }
      }
      else {
        func_0x000107c60690(0x19);
        uVar3 = 0xed00007261657070;
        uVar6 = 0x4164694477656976;
        if (bVar1 != 3) {
          uVar3 = 0xee00686374656665;
          uVar6 = 0x725064616f6c7075;
        }
        uVar8 = 0x800000010f2162e0;
        uVar7 = 0xd000000000000011;
        if (bVar1 != 2) {
          uVar8 = uVar3;
          uVar7 = uVar6;
        }
        uVar3 = 0xed000074696e4972;
        uVar6 = 0x65746c69466f6567;
        if ((bVar4 & 0x1f) != 0) {
          uVar3 = 0x800000010f216300;
          uVar6 = 0xd000000000000017;
        }
        if (bVar1 < 2) {
          uVar7 = uVar6;
          uVar8 = uVar3;
        }
      }
    }
code_r0x000107c5fb58:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar7,uVar8);
    return;
  }
  if (bVar5 < 5) {
    if (bVar5 == 3) {
      if (bVar4 < 100) {
        if (bVar4 < 0x62) {
          if (bVar4 == 0x60) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
        else if (bVar4 == 0x62) {
          uVar7 = 2;
        }
        else {
          uVar7 = 3;
        }
      }
      else if (bVar4 < 0x66) {
        if (bVar4 == 100) {
          uVar7 = 4;
        }
        else {
          uVar7 = 6;
        }
      }
      else if (bVar4 == 0x66) {
        uVar7 = 7;
      }
      else {
        uVar7 = 8;
      }
    }
    else if (bVar4 < 0x84) {
      if (bVar4 < 0x82) {
        if (bVar4 == 0x80) {
          uVar7 = 9;
        }
        else {
          uVar7 = 10;
        }
      }
      else if (bVar4 == 0x82) {
        uVar7 = 0xb;
      }
      else {
        uVar7 = 0xd;
      }
    }
    else if (bVar4 < 0x86) {
      if (bVar4 == 0x84) {
        uVar7 = 0xe;
      }
      else {
        uVar7 = 0xf;
      }
    }
    else if (bVar4 == 0x86) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x11;
    }
  }
  else if (bVar5 == 5) {
    if (bVar4 < 0xa4) {
      if (bVar4 < 0xa2) {
        if (bVar4 == 0xa0) {
          uVar7 = 0x12;
        }
        else {
          uVar7 = 0x13;
        }
      }
      else if (bVar4 == 0xa2) {
        uVar7 = 0x14;
      }
      else {
        uVar7 = 0x15;
      }
    }
    else if (bVar4 < 0xa6) {
      if (bVar4 == 0xa4) {
        uVar7 = 0x16;
      }
      else {
        uVar7 = 0x17;
      }
    }
    else {
      if (bVar4 != 0xa6) {
        func_0x000107c60690(0x1a);
        uVar7 = 0xd000000000000012;
        uVar8 = 0x800000010f2162a0;
        goto code_r0x000107c5fb58;
      }
      uVar7 = 0x18;
    }
  }
  else if (bVar4 < 0xc2) {
    if (bVar4 == 0xc0) {
      uVar7 = 0x1b;
    }
    else {
      uVar7 = 0x1c;
    }
  }
  else if (bVar4 == 0xc2) {
    uVar7 = 0x1d;
  }
  else if (bVar4 == 0xc3) {
    uVar7 = 0x1e;
  }
  else {
    uVar7 = 0x1f;
  }
  func_0x000107c60690(uVar7);
  return;
}



/* Entry: 10489ef24; end: 10489ef63;  */

void FUN_10489ef24(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001000aed64(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489ef64; end: 10489ef6f;  */

bool FUN_10489ef64(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 5;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      if (bVar1 < 0x20) {
        return bVar2 == bVar1;
      }
    }
    else if (bVar3 == 1) {
      if ((bVar1 & 0xe0) == 0x20) {
code_r0x0001000b9f14:
        return ((bVar1 ^ bVar2) & 0x1f) == 0;
      }
    }
    else if ((bVar1 & 0xe0) == 0x40) goto code_r0x0001000b9f14;
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (bVar2 < 100) {
        if (bVar2 < 0x62) {
          if (bVar2 == 0x60) {
            if (bVar1 == 0x60) {
              return true;
            }
          }
          else if (bVar1 == 0x61) {
            return true;
          }
        }
        else if (bVar2 == 0x62) {
          if (bVar1 == 0x62) {
            return true;
          }
        }
        else if (bVar1 == 99) {
          return true;
        }
      }
      else if (bVar2 < 0x66) {
        if (bVar2 == 100) {
          if (bVar1 == 100) {
            return true;
          }
        }
        else if (bVar1 == 0x65) {
          return true;
        }
      }
      else if (bVar2 == 0x66) {
        if (bVar1 == 0x66) {
          return true;
        }
      }
      else if (bVar1 == 0x67) {
        return true;
      }
    }
    else if (bVar2 < 0x84) {
      if (bVar2 < 0x82) {
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
    }
    else if (bVar2 < 0x86) {
      if (bVar2 == 0x84) {
        if (bVar1 == 0x84) {
          return true;
        }
      }
      else if (bVar1 == 0x85) {
        return true;
      }
    }
    else if (bVar2 == 0x86) {
      if (bVar1 == 0x86) {
        return true;
      }
    }
    else if (bVar1 == 0x87) {
      return true;
    }
  }
  else if (bVar3 == 5) {
    if (bVar2 < 0xa4) {
      if (bVar2 < 0xa2) {
        if (bVar2 == 0xa0) {
          if (bVar1 == 0xa0) {
            return true;
          }
        }
        else if (bVar1 == 0xa1) {
          return true;
        }
      }
      else if (bVar2 == 0xa2) {
        if (bVar1 == 0xa2) {
          return true;
        }
      }
      else if (bVar1 == 0xa3) {
        return true;
      }
    }
    else if (bVar2 < 0xa6) {
      if (bVar2 == 0xa4) {
        if (bVar1 == 0xa4) {
          return true;
        }
      }
      else if (bVar1 == 0xa5) {
        return true;
      }
    }
    else if (bVar2 == 0xa6) {
      if (bVar1 == 0xa6) {
        return true;
      }
    }
    else if (bVar1 == 0xa7) {
      return true;
    }
  }
  else if (bVar2 < 0xc2) {
    if (bVar2 == 0xc0) {
      if (bVar1 == 0xc0) {
        return true;
      }
    }
    else if (bVar1 == 0xc1) {
      return true;
    }
  }
  else if (bVar2 == 0xc2) {
    if (bVar1 == 0xc2) {
      return true;
    }
  }
  else if (bVar2 == 0xc3) {
    if (bVar1 == 0xc3) {
      return true;
    }
  }
  else if (bVar1 == 0xc4) {
    return true;
  }
  return false;
}



/* Entry: 10489ef70; end: 10489efd3;  */

ulong FUN_10489ef70(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 10489efd4; end: 10489efd7;  */

void FUN_10489efd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e980;
  _swift_getWitnessTable(&UNK_10dd3e980,&UNK_1107ae7e8);
  puRam0000000113098ac8 = puVar1;
  return;
}



/* Entry: 10489efd8; end: 10489f017;  */

void FUN_10489efd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e980;
  _swift_getWitnessTable(&UNK_10dd3e980,&UNK_1107ae7e8);
  puRam0000000113098ac8 = puVar1;
  return;
}



/* Entry: 10489f018; end: 10489f01b;  */

void FUN_10489f018(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ea20;
  _swift_getWitnessTable(&UNK_10dd3ea20,&UNK_1107ae878);
  puRam0000000113098ad0 = puVar1;
  return;
}



/* Entry: 10489f01c; end: 10489f05b;  */

void FUN_10489f01c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ea20;
  _swift_getWitnessTable(&UNK_10dd3ea20,&UNK_1107ae878);
  puRam0000000113098ad0 = puVar1;
  return;
}



/* Entry: 10489f05c; end: 10489f05f;  */

void FUN_10489f05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3eac0;
  _swift_getWitnessTable(&UNK_10dd3eac0,&UNK_1107ae908);
  puRam0000000113098ad8 = puVar1;
  return;
}



/* Entry: 10489f060; end: 10489f09f;  */

void FUN_10489f060(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3eac0;
  _swift_getWitnessTable(&UNK_10dd3eac0,&UNK_1107ae908);
  puRam0000000113098ad8 = puVar1;
  return;
}



/* Entry: 10489f0a0; end: 10489f0a3;  */

void FUN_10489f0a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3eb60;
  _swift_getWitnessTable(&UNK_10dd3eb60,&UNK_1107ae998);
  puRam0000000113098ae0 = puVar1;
  return;
}



/* Entry: 10489f0a4; end: 10489f0e3;  */

void FUN_10489f0a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3eb60;
  _swift_getWitnessTable(&UNK_10dd3eb60,&UNK_1107ae998);
  puRam0000000113098ae0 = puVar1;
  return;
}



/* Entry: 10489f0e4; end: 10489f107;  */

void FUN_10489f0e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489f108();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489f108; end: 10489f147;  */

void FUN_10489f108(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ec1c;
  _swift_getWitnessTable(&UNK_10dd3ec1c,&UNK_1107aea28);
  puRam0000000113098ae8 = puVar1;
  return;
}



/* Entry: 10489f148; end: 10489f14b;  */

void FUN_10489f148(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ec5c;
  _swift_getWitnessTable(&UNK_10dd3ec5c,&UNK_1107aea28);
  puRam0000000113098af0 = puVar1;
  return;
}



/* Entry: 10489f14c; end: 10489f18b;  */

void FUN_10489f14c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ec5c;
  _swift_getWitnessTable(&UNK_10dd3ec5c,&UNK_1107aea28);
  puRam0000000113098af0 = puVar1;
  return;
}



/* Entry: 10489f18c; end: 10489f747;  */

void FUN_10489f18c(void)

{
  return;
}



/* Entry: 10489f748; end: 10489f773;  */

void FUN_10489f748(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10489fd7c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10489f774; end: 10489f7ff;  */

void FUN_10489f774(undefined8 *param_1)

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
    uVar1 = 0x800000010f2166b0;
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



/* Entry: 10489f800; end: 10489fa3b;  */

void FUN_10489f800(void)

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
    uVar1 = 0x800000010f2166b0;
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



/* Entry: 10489fa3c; end: 10489faf7;  */

undefined8 FUN_10489fa3c(void)

{
  return 1;
}



/* Entry: 10489faf8; end: 10489fb63;  */

void FUN_10489faf8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 10489fb64; end: 10489fba7;  */

void FUN_10489fb64(undefined8 *param_1)

{
  *param_1 = 0x49726f74696e6f6d;
  param_1[1] = 0xeb0000000074696e;
  return;
}



/* Entry: 10489fba8; end: 10489fbf3;  */

void FUN_10489fba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489fbf4; end: 10489fc33;  */

void FUN_10489fbf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x49726f74696e6f6d,0xeb0000000074696e);
  return;
}



/* Entry: 10489fc34; end: 10489fc7b;  */

void FUN_10489fc34(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,in_x3,in_x4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489fc7c; end: 10489fc8b;  */

undefined8 FUN_10489fc7c(void)

{
  return 0;
}



/* Entry: 10489fc8c; end: 10489fccf;  */

void FUN_10489fc8c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x000100674cb0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489fcd0; end: 10489fcd7;  */

/* WARNING: Possible PIC construction at 0x000100674dcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100674dd0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10489fcd0(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 == 4) {
    func_0x000107c60690(1);
    uVar3 = 0x4c63696d616e7964;
    uVar4 = 0xed0000656c61636f;
  }
  else if (bVar1 == 5) {
    func_0x000107c60690(2);
    uVar3 = 0x49726f74696e6f6d;
    uVar4 = 0xeb0000000074696e;
  }
  else {
    func_0x000107c60690(0);
    uVar3 = 0x6e49726567676f6c;
    uVar4 = 0xea00000000007469;
    if (bVar1 != 2) {
      uVar3 = 0xd000000000000013;
      uVar4 = 0x800000010f2166b0;
    }
    uVar5 = 0xd000000000000010;
    pcVar2 = "backgroundExecution";
    if (bVar1 != 0) {
      uVar5 = 0xd000000000000013;
      pcVar2 = "loggerDebugViewInit";
    }
    if (bVar1 < 2) {
      uVar3 = uVar5;
      uVar4 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar3,uVar4);
  return;
}



/* Entry: 10489fcd8; end: 10489fd17;  */

void FUN_10489fcd8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x000100674cb0(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489fd18; end: 10489fd7b;  */

bool FUN_10489fd18(byte *param_1,byte *param_2)

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



/* Entry: 10489fd7c; end: 10489fddf;  */

ulong FUN_10489fd7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10489fde0; end: 10489fde3;  */

void FUN_10489fde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ed58;
  _swift_getWitnessTable(&UNK_10dd3ed58,&UNK_1107aeb38);
  puRam0000000113098c68 = puVar1;
  return;
}



/* Entry: 10489fde4; end: 10489fe23;  */

void FUN_10489fde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ed58;
  _swift_getWitnessTable(&UNK_10dd3ed58,&UNK_1107aeb38);
  puRam0000000113098c68 = puVar1;
  return;
}



/* Entry: 10489fe24; end: 10489fe27;  */

void FUN_10489fe24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3edf8;
  _swift_getWitnessTable(&UNK_10dd3edf8,&UNK_1107aebc8);
  puRam0000000113098c70 = puVar1;
  return;
}



/* Entry: 10489fe28; end: 10489fe67;  */

void FUN_10489fe28(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3edf8;
  _swift_getWitnessTable(&UNK_10dd3edf8,&UNK_1107aebc8);
  puRam0000000113098c70 = puVar1;
  return;
}



/* Entry: 10489fe68; end: 10489fe6b;  */

void FUN_10489fe68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ee98;
  _swift_getWitnessTable(&UNK_10dd3ee98,&UNK_1107aec58);
  puRam0000000113098c78 = puVar1;
  return;
}



/* Entry: 10489fe6c; end: 10489feab;  */

void FUN_10489fe6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ee98;
  _swift_getWitnessTable(&UNK_10dd3ee98,&UNK_1107aec58);
  puRam0000000113098c78 = puVar1;
  return;
}



/* Entry: 10489feac; end: 10489fecf;  */

void FUN_10489feac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489fed0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489fed0; end: 10489ff0f;  */

void FUN_10489fed0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ef54;
  _swift_getWitnessTable(&UNK_10dd3ef54,&UNK_1107aece8);
  puRam0000000113098c80 = puVar1;
  return;
}



/* Entry: 10489ff10; end: 10489ff13;  */

void FUN_10489ff10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ef94;
  _swift_getWitnessTable(&UNK_10dd3ef94,&UNK_1107aece8);
  puRam0000000113098c88 = puVar1;
  return;
}



/* Entry: 10489ff14; end: 10489ff53;  */

void FUN_10489ff14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3ef94;
  _swift_getWitnessTable(&UNK_10dd3ef94,&UNK_1107aece8);
  puRam0000000113098c88 = puVar1;
  return;
}



/* Entry: 10489ff54; end: 1048a0373;  */

int FUN_10489ff54(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489ffd0;
        goto LAB_10489ffb4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489ffb4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10489ffd0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a0374; end: 1048a041f;  */

void FUN_1048a0374(void)

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



/* Entry: 1048a0420; end: 1048a0423;  */

void FUN_1048a0420(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f040;
  _swift_getWitnessTable(&UNK_10dd3f040,&UNK_1107aedf8);
  puRam0000000113098d98 = puVar1;
  return;
}



/* Entry: 1048a0424; end: 1048a0463;  */

void FUN_1048a0424(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f040;
  _swift_getWitnessTable(&UNK_10dd3f040,&UNK_1107aedf8);
  puRam0000000113098d98 = puVar1;
  return;
}



/* Entry: 1048a0464; end: 1048a04b7;  */

undefined8 FUN_1048a0464(void)

{
  return 0;
}



/* Entry: 1048a04b8; end: 1048a04db;  */

void FUN_1048a04b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a04dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a04dc; end: 1048a051b;  */

void FUN_1048a04dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f068;
  _swift_getWitnessTable(&UNK_10dd3f068,&UNK_1107aedf8);
  puRam0000000113098da0 = puVar1;
  return;
}



/* Entry: 1048a051c; end: 1048a067f;  */

int FUN_1048a051c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a0598;
        goto LAB_1048a057c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a057c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048a0598:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a0680; end: 1048a0737;  */

void FUN_1048a0680(uint param_1)

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
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a0738; end: 1048a087f;  */

undefined1  [16] FUN_1048a0738(uint param_1)

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
      uVar5 = 0x800000010f2153e0;
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
      uVar8 = 0x800000010f215380;
      uVar6 = 0xd00000000000001a;
    }
    uVar5 = 0x800000010f2153a0;
    uVar7 = 0xd000000000000010;
    if (param_1 != 6) {
      uVar5 = uVar8;
      uVar7 = uVar6;
    }
    uVar8 = 0x800000010f2153c0;
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



/* Entry: 1048a0880; end: 1048a08d3;  */

void FUN_1048a0880(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048a0cec(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048a08d4; end: 1048a08f3;  */

void FUN_1048a08d4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*(code *)&LAB_1006e8370)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a08f4; end: 1048a096b;  */

void FUN_1048a08f4(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
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



/* Entry: 1048a096c; end: 1048a09b7;  */

void FUN_1048a096c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0xd000000000000012;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6163696669746f6e;
  }
  uVar2 = 0x800000010f2161a0;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xec0000006e6f6974;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


