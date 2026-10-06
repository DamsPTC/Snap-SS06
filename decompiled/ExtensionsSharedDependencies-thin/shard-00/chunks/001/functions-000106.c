/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001f3e64; end: 001f3ea3;  */

void FUN_001f3e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6a10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e85a4;
  _swift_getWitnessTable(&UNK_007e85a4,&UNK_009bba98);
  puRam0000000000af6a10 = puVar1;
  return;
}



/* Entry: 001f3ea4; end: 001f3ea7;  */

void FUN_001f3ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e85e4;
  _swift_getWitnessTable(&UNK_007e85e4,&UNK_009bba98);
  puRam0000000000af6a18 = puVar1;
  return;
}



/* Entry: 001f3ea8; end: 001f3ee7;  */

void FUN_001f3ea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e85e4;
  _swift_getWitnessTable(&UNK_007e85e4,&UNK_009bba98);
  puRam0000000000af6a18 = puVar1;
  return;
}



/* Entry: 001f3ee8; end: 001f4243;  */

int FUN_001f3ee8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f3f64;
        goto LAB_001f3f48;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f3f48:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_001f3f64:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f4244; end: 001f42ef;  */

void FUN_001f4244(void)

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



/* Entry: 001f42f0; end: 001f42f3;  */

void FUN_001f42f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8660;
  _swift_getWitnessTable(&UNK_007e8660,&UNK_009bbbc8);
  puRam0000000000af6b08 = puVar1;
  return;
}



/* Entry: 001f42f4; end: 001f4333;  */

void FUN_001f42f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8660;
  _swift_getWitnessTable(&UNK_007e8660,&UNK_009bbbc8);
  puRam0000000000af6b08 = puVar1;
  return;
}



/* Entry: 001f4334; end: 001f4343;  */

undefined8 FUN_001f4334(void)

{
  return 0;
}



/* Entry: 001f4344; end: 001f4367;  */

void FUN_001f4344(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f4368();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f4368; end: 001f43a7;  */

void FUN_001f4368(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8688;
  _swift_getWitnessTable(&UNK_007e8688,&UNK_009bbbc8);
  puRam0000000000af6b10 = puVar1;
  return;
}



/* Entry: 001f43a8; end: 001f450b;  */

int FUN_001f43a8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f4424;
        goto LAB_001f4408;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f4408:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_001f4424:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f450c; end: 001f45cf;  */

void FUN_001f450c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 & 0xff00) == 0x100) {
    if (param_1 == 2 && (param_2 & 0xff) == 0) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
    }
  }
  else if ((param_2 & 0xff) != 1) {
    lVar1 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_1;
    FUN_001da650();
    _swift_setDeallocating(lVar1);
  }
  return;
}



/* Entry: 001f45d0; end: 001f4763;  */

undefined1  [16] FUN_001f45d0(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (((uint)param_2 & 0xff00) != 0x100) {
    bVar1 = ((uint)param_2 & 0xff) == 1;
    uVar3 = 0x74694b65726f7453;
    if (bVar1) {
      uVar3 = 0xd00000000000001e;
    }
    uVar4 = 0xe800000000000000;
    if (bVar1) {
      uVar4 = 0x80000000008bc9e0;
    }
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  uVar2 = (long)(char)param_2 + (ulong)(param_1 >= 3);
  if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_1 < 3))) {
    uVar3 = 0x80000000008bc9c0;
    uVar4 = 0xd000000000000014;
    if (param_1 != 1 || (param_2 & 0xff) != 0) {
      uVar3 = 0xeb00000000736563;
      uVar4 = 0x6976726553746550;
    }
    uVar5 = 0xee0072657061706c;
    uVar6 = 0x6c615778696d6552;
    if (param_1 != 0 || (param_2 & 0xff) != 0) {
      uVar5 = uVar3;
      uVar6 = uVar4;
    }
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = uVar6;
    return auVar8;
  }
  uVar2 = (long)(char)param_2 + (ulong)(param_1 >= 5);
  if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_1 < 5))) {
    uVar2 = param_1 ^ 3 | param_2 & 0xff;
    uVar3 = 0xef676e6f53657461;
    uVar4 = 0x65724349416e6547;
    uVar5 = 0xe700000000000000;
    uVar6 = 0x73746e6f464941;
  }
  else {
    uVar2 = param_1 ^ 5 | param_2 & 0xff;
    uVar3 = 0xed00006970416574;
    uVar4 = 0x6f6d6552736e654c;
    uVar6 = 0xd000000000000012;
    uVar5 = 0x80000000008bc9a0;
  }
  if (uVar2 != 0) {
    uVar3 = uVar5;
    uVar4 = uVar6;
  }
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = uVar4;
  return auVar9;
}



/* Entry: 001f4764; end: 001f486f;  */

void FUN_001f4764(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f4870; end: 001f48af;  */

bool FUN_001f4870(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = (char)param_2[2] == '\x01' && (char)param_1[2] == '\x01';
  if ((char)param_1[2] != '\x01' && (char)param_2[2] != '\x01') {
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}



/* Entry: 001f48b0; end: 001f4917;  */

void FUN_001f48b0(undefined8 param_1,long param_2,uint param_3)

{
  if ((param_3 & 0xff00) == 0x100) {
    param_2 = param_2 + 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    if ((param_3 & 0xff) == 1) {
      param_2 = 1;
    }
    else {
      __ss6HasherV8_combineyySuF(0);
    }
  }
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 001f4918; end: 001f492f;  */

void FUN_001f4918(void)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  uVar1 = *(ushort *)(unaff_x20 + 1);
  if ((uVar1 & 0xff00) == 0x100) {
    if (lVar3 == 2 && (uVar1 & 0xff) == 0) {
      func_0x000115a8(0xaf4058,&UNK_007e5230);
      _swift_initStaticObject();
      FUN_001da650();
    }
  }
  else if ((uVar1 & 0xff) != 1) {
    lVar2 = 0xaf4058;
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(long *)(lVar2 + 0x20) = lVar3;
    FUN_001da650();
    _swift_setDeallocating(lVar2);
  }
  return;
}



/* Entry: 001f4930; end: 001f497b;  */

void FUN_001f4930(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined2 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_001f48b0(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f497c; end: 001f4987;  */

void FUN_001f497c(void)

{
  ushort uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  uVar1 = *(ushort *)(unaff_x20 + 1);
  if ((uVar1 & 0xff00) == 0x100) {
    lVar2 = lVar2 + 1;
  }
  else {
    __ss6HasherV8_combineyySuF(0);
    if ((uVar1 & 0xff) == 1) {
      lVar2 = 1;
    }
    else {
      __ss6HasherV8_combineyySuF(0);
    }
  }
  __ss6HasherV8_combineyySuF(lVar2);
  return;
}



/* Entry: 001f4988; end: 001f49cf;  */

void FUN_001f4988(void)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined2 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_001f48b0(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f49d0; end: 001f4b7f;  */

undefined8 FUN_001f49d0(ulong *param_1,ulong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  uVar1 = (ushort)param_1[1];
  uVar2 = (ushort)param_2[1];
  uVar4 = uVar2 >> 8;
  if ((uVar1 & 0xff00) == 0x100) {
    uVar3 = (long)(char)uVar1 + (ulong)(uVar6 >= 3);
    if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar6 < 3))) {
      if (uVar6 == 0 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 0 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if (uVar6 == 1 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 1 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if ((uVar4 == 1) && (uVar5 == 2 && (uVar2 & 0xff) == 0)) {
        return 1;
      }
    }
    else {
      uVar3 = (long)(char)uVar1 + (ulong)(uVar6 >= 5);
      if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uVar6 < 5))) {
        if (uVar6 == 3 && (uVar1 & 0xff) == 0) {
          if ((uVar4 == 1) && (uVar5 == 3 && (uVar2 & 0xff) == 0)) {
            return 1;
          }
        }
        else if ((uVar4 == 1) && (uVar5 == 4 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if (uVar6 == 5 && (uVar1 & 0xff) == 0) {
        if ((uVar4 == 1) && (uVar5 == 5 && (uVar2 & 0xff) == 0)) {
          return 1;
        }
      }
      else if ((uVar4 == 1) &&
              (!CARRY8(~(((ulong)uVar2 & 0xff) + (ulong)(uVar5 >= 6)),(ulong)(uVar5 < 6)))) {
        return 1;
      }
    }
  }
  else if (uVar4 != 1) {
    if ((uVar1 & 0xff) == 1) {
      if ((uVar2 & 0xff) == 1) {
        return 1;
      }
    }
    else if (((uVar2 & 0xff) != 1) && ((int)uVar6 == (int)uVar5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 001f4b80; end: 001f4bbf;  */

void FUN_001f4b80(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8748;
  _swift_getWitnessTable(&UNK_007e8748,&UNK_009bbcb8);
  puRam0000000000af6b48 = puVar1;
  return;
}



/* Entry: 001f4bc0; end: 001f4be3;  */

void FUN_001f4bc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f4be4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f4be4; end: 001f4c23;  */

void FUN_001f4be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e878c;
  _swift_getWitnessTable(&UNK_007e878c,&UNK_009bbd48);
  puRam0000000000af6b50 = puVar1;
  return;
}



/* Entry: 001f4c24; end: 001f4c27;  */

void FUN_001f4c24(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e87cc;
  _swift_getWitnessTable(&UNK_007e87cc,&UNK_009bbd48);
  puRam0000000000af6b58 = puVar1;
  return;
}



/* Entry: 001f4c28; end: 001f4c67;  */

void FUN_001f4c28(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e87cc;
  _swift_getWitnessTable(&UNK_007e87cc,&UNK_009bbd48);
  puRam0000000000af6b58 = puVar1;
  return;
}



/* Entry: 001f4c68; end: 001f4e63;  */

int FUN_001f4c68(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 001f4e64; end: 001f4f0f;  */

void FUN_001f4e64(void)

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



/* Entry: 001f4f10; end: 001f4f13;  */

void FUN_001f4f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8840;
  _swift_getWitnessTable(&UNK_007e8840,&UNK_009bbe38);
  puRam0000000000af6b60 = puVar1;
  return;
}



/* Entry: 001f4f14; end: 001f4f53;  */

void FUN_001f4f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8840;
  _swift_getWitnessTable(&UNK_007e8840,&UNK_009bbe38);
  puRam0000000000af6b60 = puVar1;
  return;
}



/* Entry: 001f4f54; end: 001f4f63;  */

undefined8 FUN_001f4f54(void)

{
  return 0;
}



/* Entry: 001f4f64; end: 001f4f87;  */

void FUN_001f4f64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f4f88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f4f88; end: 001f4fc7;  */

void FUN_001f4f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8868;
  _swift_getWitnessTable(&UNK_007e8868,&UNK_009bbe38);
  puRam0000000000af6b68 = puVar1;
  return;
}



/* Entry: 001f4fc8; end: 001f512b;  */

int FUN_001f4fc8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f5044;
        goto LAB_001f5028;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f5028:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_001f5044:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f512c; end: 001f51b7;  */

void FUN_001f512c(byte param_1)

{
  if (((param_1 < 2) || (param_1 == 2)) || (param_1 != 3)) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001f51b8; end: 001f5277;  */

undefined1  [16] FUN_001f51b8(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = 0x80000000008bbf60;
  uVar5 = 0xd00000000000001e;
  if (param_1 != 3) {
    uVar1 = 0xec00000079746976;
    uVar5 = 0x697463416576694c;
  }
  uVar2 = 0x80000000008bbf80;
  uVar4 = 0xd000000000000017;
  if (param_1 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar5 = 0xd000000000000015;
  pcVar3 = "SpotlightUsageDatabase";
  if (param_1 != 0) {
    uVar5 = 0xd000000000000016;
    pcVar3 = "MixedFeedViewController";
  }
  if (param_1 < 2) {
    uVar2 = (ulong)pcVar3 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 001f5278; end: 001f5323;  */

void FUN_001f5278(void)

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



/* Entry: 001f5324; end: 001f5337;  */

void FUN_001f5324(void)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (((bVar1 < 2) || (bVar1 == 2)) || (bVar1 != 3)) {
    func_0x000115a8(0xaf4058,&UNK_007e5230);
    _swift_initStaticObject();
    FUN_001da650();
  }
  return;
}



/* Entry: 001f5338; end: 001f5377;  */

void FUN_001f5338(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e88f8;
  _swift_getWitnessTable(&UNK_007e88f8,&UNK_009bbf28);
  puRam0000000000af6b70 = puVar1;
  return;
}



/* Entry: 001f5378; end: 001f539b;  */

void FUN_001f5378(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f539c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f539c; end: 001f53db;  */

void FUN_001f539c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8920;
  _swift_getWitnessTable(&UNK_007e8920,&UNK_009bbf28);
  puRam0000000000af6b78 = puVar1;
  return;
}



/* Entry: 001f53dc; end: 001f553f;  */

int FUN_001f53dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f5458;
        goto LAB_001f543c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f543c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_001f5458:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f5540; end: 001f55db;  */

void FUN_001f5540(undefined8 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  
  lVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  if (param_3 == '\0') {
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



/* Entry: 001f55dc; end: 001f5913;  */

undefined1  [16] FUN_001f55dc(long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_3 == '\0') {
    auVar7._8_8_ = 0xec000000676e6974;
    auVar7._0_8_ = 0x726f706552583247;
    return auVar7;
  }
  if (param_3 == '\x01') {
    lVar1 = 0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x18) = 4;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined8 *)(lVar1 + 0x20) = 0x4370757472617453;
    *(undefined8 *)(lVar1 + 0x28) = 0xee00646e616d6d6f;
    *(long *)(lVar1 + 0x30) = param_1;
    *(undefined8 *)(lVar1 + 0x38) = param_2;
    _swift_bridgeObjectRetain(param_2);
    uVar2 = 0xae6938;
    func_0x000115a8(0xae6938,&UNK_007cdb30);
    uVar3 = uVar2;
    func_0x0002f390();
    uVar4 = 0x23;
    uVar5 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar2,uVar3);
    _swift_release(lVar1);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x001f5708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_007e89a0)[param_1] * 4 + 0x1f570c))();
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 001f5914; end: 001f592b;  */

void FUN_001f5914(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 2);
  lVar2 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  if (cVar1 == '\0') {
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



/* Entry: 001f592c; end: 001f5983;  */

void FUN_001f592c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x001f583c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f5984; end: 001f598f;  */

void FUN_001f5984(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    __ss6HasherV8_combineyySuF(0);
    __ss6HasherV8_combineyySuF(lVar1);
    return;
  }
  if ((char)unaff_x20[2] == '\x01') {
    __ss6HasherV8_combineyySuF(1);
                    /* WARNING: Could not recover jumptable at 0x00778470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_0099af98)(param_1,lVar1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f58c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_007e89aa)[lVar1] * 4 + 0x1f58c4))();
  return;
}



/* Entry: 001f5990; end: 001f59e3;  */

void FUN_001f5990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x001f583c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f59e4; end: 001f5bb3;  */

ulong FUN_001f59e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if ((char)param_1[2] == '\0') {
    if ((char)param_2[2] == '\0') {
      return (ulong)((int)uVar2 == (int)uVar1);
    }
  }
  else {
    if ((char)param_1[2] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001f5a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007e89b4)[uVar2] * 4 + 0x1f5a5c))();
      return uVar2;
    }
    if ((char)param_2[2] == '\x01') {
      if ((uVar2 == uVar1) && (param_1[1] == param_2[1])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
      )(uVar2,param_1[1],uVar1,param_2[1],0);
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 001f5bb4; end: 001f5bd7;  */

void FUN_001f5bb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f5bd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f5bd8; end: 001f5c17;  */

void FUN_001f5bd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e89e4;
  _swift_getWitnessTable(&UNK_007e89e4,&UNK_009bc018);
  puRam0000000000af6b80 = puVar1;
  return;
}



/* Entry: 001f5c18; end: 001f5c1b;  */

void FUN_001f5c18(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8a24;
  _swift_getWitnessTable(&UNK_007e8a24,&UNK_009bc018);
  puRam0000000000af6b88 = puVar1;
  return;
}



/* Entry: 001f5c1c; end: 001f5c5b;  */

void FUN_001f5c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8a24;
  _swift_getWitnessTable(&UNK_007e8a24,&UNK_009bc018);
  puRam0000000000af6b88 = puVar1;
  return;
}



/* Entry: 001f5c5c; end: 001f5c6f;  */

undefined8 * FUN_001f5c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00089a44(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 001f5c70; end: 001f5d0b;  */

undefined8 * FUN_001f5c70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00089a44(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 001f5d0c; end: 001f5d4f;  */

undefined8 * FUN_001f5d0c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00089d04(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 001f5d50; end: 001f5ec7;  */

int FUN_001f5d50(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 001f5ec8; end: 001f5fe3;  */

void FUN_001f5ec8(void)

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



/* Entry: 001f5fe4; end: 001f5fef;  */

undefined1  [16] FUN_001f5fe4(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  pcVar1 = "ficationProcessors";
  uVar4 = 0xd000000000000016;
  if (bVar3 != 3) {
    pcVar1 = "RecentStoriesDatabase";
    uVar4 = 0xd000000000000022;
  }
  pcVar2 = "StoryServiceEntryPoint";
  uVar5 = 0xd00000000000001d;
  if (bVar3 != 2) {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  pcVar1 = "StoryCheetahStoriesRefresh";
  uVar4 = 0xd00000000000001d;
  if (bVar3 != 0) {
    pcVar1 = "StoryAppUserLifecycleObserver";
    uVar4 = 0xd00000000000001a;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  auVar6._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 001f5ff0; end: 001f602f;  */

void FUN_001f5ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8a68;
  _swift_getWitnessTable(&UNK_007e8a68,&UNK_009bc108);
  puRam0000000000af6bf8 = puVar1;
  return;
}



/* Entry: 001f6030; end: 001f6053;  */

void FUN_001f6030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f6054();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f6054; end: 001f6093;  */

void FUN_001f6054(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8a90;
  _swift_getWitnessTable(&UNK_007e8a90,&UNK_009bc108);
  puRam0000000000af6c00 = puVar1;
  return;
}



/* Entry: 001f6094; end: 001f6347;  */

int FUN_001f6094(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f6110;
        goto LAB_001f60f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f60f4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_001f6110:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f6348; end: 001f63f3;  */

void FUN_001f6348(void)

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



/* Entry: 001f63f4; end: 001f644b;  */

undefined8 FUN_001f63f4(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if ((1 << (ulong)(*unaff_x20 & 0x1f) & 0x1a5U) != 0) {
    return 0;
  }
  uVar1 = 0xaf4058;
  func_0x000115a8(0xaf4058,&UNK_007e5230);
  _swift_initStaticObject();
  FUN_001da650();
  return uVar1;
}



/* Entry: 001f644c; end: 001f6457;  */

undefined1  [16] FUN_001f644c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar4 = *unaff_x20;
  if (bVar4 < 4) {
    uVar1 = 0xd000000000000018;
    pcVar5 = "TalkCallCameraServices";
    if (bVar4 != 2) {
      uVar1 = 0xd000000000000016;
      pcVar5 = "TalkCallKitCallManager";
    }
    pcVar6 = "CallCameraController";
    uVar7 = 0xd000000000000019;
    if (bVar4 != 0) {
      pcVar6 = "TalkSoundServiceProvider";
      uVar7 = 0xd000000000000014;
    }
    if (bVar4 < 2) {
      pcVar5 = pcVar6;
      uVar1 = uVar7;
    }
    auVar9._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
    auVar9._0_8_ = uVar1;
    return auVar9;
  }
  pcVar5 = "TalkContactsAlert";
  uVar1 = 0xd000000000000017;
  if (bVar4 != 7) {
    pcVar5 = "ConvoSafetyPrompt";
    uVar1 = 0xd000000000000011;
  }
  pcVar6 = "TalkActiveConversations";
  uVar7 = 0xd000000000000013;
  if (bVar4 != 6) {
    pcVar6 = pcVar5;
    uVar7 = uVar1;
  }
  uVar2 = 0x80000000008bc2d0;
  uVar1 = 0xd000000000000016;
  if (bVar4 != 4) {
    uVar2 = 0xeb00000000676f4c;
    uVar1 = 0x6c6c61436b6c6154;
  }
  uVar3 = (ulong)pcVar6 | 0x8000000000000000;
  if (bVar4 < 6) {
    uVar3 = uVar2;
    uVar7 = uVar1;
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 001f6458; end: 001f6497;  */

void FUN_001f6458(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8b08;
  _swift_getWitnessTable(&UNK_007e8b08,&UNK_009bc1f8);
  puRam0000000000af6c08 = puVar1;
  return;
}



/* Entry: 001f6498; end: 001f64bb;  */

void FUN_001f6498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f64bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f64bc; end: 001f64fb;  */

void FUN_001f64bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8b30;
  _swift_getWitnessTable(&UNK_007e8b30,&UNK_009bc1f8);
  puRam0000000000af6c10 = puVar1;
  return;
}



/* Entry: 001f64fc; end: 001f665f;  */

int FUN_001f64fc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f6578;
        goto LAB_001f655c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f655c:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_001f6578:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f6660; end: 001f67ff;  */

undefined1  [16] FUN_001f6660(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1 == 6) {
    pcVar6 = "DelayedEntryPoint";
  }
  else {
    if (param_1 != 5) {
      lVar1 = 0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x18) = 4;
      *(undefined8 *)(lVar1 + 0x10) = 2;
      *(undefined **)(lVar1 + 0x20) = &UNK_0000534a;
      *(undefined8 *)(lVar1 + 0x28) = 0xe200000000000000;
      if (param_1 < 2) {
        uVar7 = 0xd00000000000001a;
        if (param_1 == 0) {
          pcVar6 = "exposeUserJobProviderScope";
        }
        else {
          pcVar6 = "registerSystemJobProviders";
        }
        uVar5 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
      }
      else if (param_1 == 2) {
        uVar5 = 0x80000000008bc7b0;
        uVar7 = 0xd000000000000023;
      }
      else if (param_1 == 3) {
        uVar5 = 0xea00000000007362;
        uVar7 = 0x6f4a74696d627573;
      }
      else {
        uVar5 = 0x80000000008bc790;
        uVar7 = 0xd000000000000015;
      }
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      *(ulong *)(lVar1 + 0x38) = uVar5;
      uVar7 = 0xae6938;
      func_0x000115a8(0xae6938,&UNK_007cdb30);
      uVar2 = uVar7;
      func_0x0002f390();
      uVar3 = 0x23;
      uVar4 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar7,uVar2);
      _swift_release(lVar1);
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = uVar3;
      return auVar9;
    }
    pcVar6 = "BackgroundCleanUp";
  }
  auVar8._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  auVar8._0_8_ = 0xd000000000000011;
  return auVar8;
}



/* Entry: 001f6800; end: 001f6813;  */

bool FUN_001f6800(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 001f6814; end: 001f683f;  */

void FUN_001f6814(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_001f6e54(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 001f6840; end: 001f68f3;  */

void FUN_001f6840(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0xea00000000007362;
  uVar6 = 0x6f4a74696d627573;
  if (bVar4 != 3) {
    uVar1 = 0x80000000008bc790;
    uVar6 = 0xd000000000000015;
  }
  uVar3 = 0x80000000008bc7b0;
  uVar2 = 0xd000000000000023;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar2 = uVar6;
  }
  pcVar5 = "registerSystemJobProviders";
  if (bVar4 != 0) {
    pcVar5 = "ticatedJobProviders";
  }
  if (bVar4 < 2) {
    uVar2 = 0xd00000000000001a;
    uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 001f68f4; end: 001f6de7;  */

void FUN_001f68f4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xea00000000007362;
  uVar6 = 0x6f4a74696d627573;
  if (bVar4 != 3) {
    uVar1 = 0x80000000008bc790;
    uVar6 = 0xd000000000000015;
  }
  uVar3 = 0x80000000008bc7b0;
  uVar2 = 0xd000000000000023;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar2 = uVar6;
  }
  pcVar5 = "registerSystemJobProviders";
  if (bVar4 != 0) {
    pcVar5 = "ticatedJobProviders";
  }
  if (bVar4 < 2) {
    uVar2 = 0xd00000000000001a;
    uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f6de8; end: 001f6e07;  */

undefined8 FUN_001f6de8(void)

{
  return 0;
}



/* Entry: 001f6e08; end: 001f6e47;  */

void FUN_001f6e08(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001f6ba8(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001f6e48; end: 001f6e53;  */

bool FUN_001f6e48(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if (bVar1 == 6) {
    if (uVar2 == 6) {
      return true;
    }
  }
  else if (bVar1 == 5) {
    if (uVar2 == 5) {
      return true;
    }
  }
  else if (1 < uVar2 - 5) {
    return bVar1 == uVar2;
  }
  return false;
}



/* Entry: 001f6e54; end: 001f6eb7;  */

ulong FUN_001f6e54(undefined8 param_1,undefined8 param_2)

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



/* Entry: 001f6eb8; end: 001f6f13;  */

bool FUN_001f6eb8(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 == 6) {
    if (param_2 == 6) {
      return true;
    }
  }
  else if (param_1 == 5) {
    if (param_2 == 5) {
      return true;
    }
  }
  else if (1 < param_2 - 5) {
    return param_1 == param_2;
  }
  return false;
}



/* Entry: 001f6f14; end: 001f6f53;  */

void FUN_001f6f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8bb0;
  _swift_getWitnessTable(&UNK_007e8bb0,&UNK_009bc2e8);
  puRam0000000000af6c48 = puVar1;
  return;
}



/* Entry: 001f6f54; end: 001f6f77;  */

void FUN_001f6f54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001f6f78();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001f6f78; end: 001f6fb7;  */

void FUN_001f6f78(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8c6c;
  _swift_getWitnessTable(&UNK_007e8c6c,&UNK_009bc378);
  puRam0000000000af6c50 = puVar1;
  return;
}



/* Entry: 001f6fb8; end: 001f6fbb;  */

void FUN_001f6fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8cac;
  _swift_getWitnessTable(&UNK_007e8cac,&UNK_009bc378);
  puRam0000000000af6c58 = puVar1;
  return;
}



/* Entry: 001f6fbc; end: 001f6ffb;  */

void FUN_001f6fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af6c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e8cac;
  _swift_getWitnessTable(&UNK_007e8cac,&UNK_009bc378);
  puRam0000000000af6c58 = puVar1;
  return;
}



/* Entry: 001f6ffc; end: 001f72eb;  */

int FUN_001f6ffc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_001f7078;
        goto LAB_001f705c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_001f705c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_001f7078:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 001f72ec; end: 001f7337; -[SCAttributedFeature featureName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f72ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00af6d00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00af6d00))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 001f7338; end: 001f734b; -[SCAttributedFeature jiraProject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001f7338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00af6d08);
}



/* Entry: 001f734c; end: 001f742b; -[SCAttributedFeature initWithFeatureName:jiraProject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f734c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_00af6d00);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00af6d08) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001f742c; end: 001f75b3; -[SCAttributedFeature hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_001f742c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_00af6d00);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00af6d00))[1];
  _objc_retain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x007843a0();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_00af6d08);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 001f75b4; end: 001f7633; -[SCAttributedFeature isEqual:] */

uint FUN_001f75b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x001f74d4(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 001f7634; end: 001f7637; -[SCAttributedFeature copyWithZone:] */

void FUN_001f7634(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 001f7638; end: 001f7653; -[SCAttributedFeature description] */

void FUN_001f7638(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 001f7654; end: 001f76cf; -[SCAttributedFeature init] */

void FUN_001f7654(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedFeatureWrapper.swift",0x2e,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1f769c);
  (*pcVar1)();
}



/* Entry: 001f76d0; end: 001f76e3; -[SCAttributedFeature .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f76d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00af6d00 + 8));
  return;
}



/* Entry: 001f76e4; end: 001f7703;  */

void FUN_001f76e4(void)

{
  _objc_opt_self(&PTR_PTR_00acb4b8);
  return;
}



/* Entry: 001f7704; end: 001f7707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f7704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00af6d00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00af6d08) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 001f7708; end: 001f77db;  */

void FUN_001f7708(void)

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



/* Entry: 001f77dc; end: 001f77fb;  */

void FUN_001f77dc(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 001f77fc; end: 001f781f; -[SCAttributedActivationTask description] */

void FUN_001f77fc(void)

{
  _objc_retain();
  FUN_001f7c40();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}


