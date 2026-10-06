/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104608ec4; end: 10460903b;  */

void FUN_104608ec4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0x100;
  pcVar8 = *(code **)(param_4 + 0x188);
  FUN_10460d5b8();
  (*pcVar8)(&uStack_70,&UNK_11078f588,param_1,param_3,param_4);
  uVar5 = uStack_70;
  if ((unaff_x21 == 0) && (uStack_68._1_1_ != '\x01')) {
    uVar7 = (ulong)(byte)uStack_68;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    cVar3 = *(char *)(param_2 + 3);
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_1045670a0(uVar1,uVar2,uVar9,0xff);
      FUN_104567140(uVar1,uVar2,uVar9,0xff);
    }
    else {
      FUN_1045670a0(uVar1,uVar2,uVar9,cVar3);
      FUN_104567140(uVar1,uVar2,uVar9,cVar3);
      FUN_104567140(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    *param_2 = uVar5;
    param_2[1] = uVar7;
    param_2[2] = 0;
    uVar4 = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_104567140(uVar1,uVar2,uVar6,uVar4);
  }
  return;
}



/* Entry: 10460903c; end: 104609197;  */

void FUN_10460903c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x21;
  ulong uVar7;
  undefined8 uStack_70;
  char cStack_68;
  
  uStack_70 = 0;
  cStack_68 = '\x01';
  (**(code **)(param_4 + 0x38))(&uStack_70,param_3,param_4);
  uVar5 = uStack_70;
  if ((unaff_x21 == 0) && (cStack_68 != '\x01')) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar7 = param_2[2];
    cVar3 = *(char *)(param_2 + 3);
    if ((((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_1045670a0(uVar1,uVar2,uVar7,0xff);
      FUN_104567140(uVar1,uVar2,uVar7,0xff);
    }
    else {
      FUN_1045670a0(uVar1,uVar2,uVar7,cVar3);
      FUN_104567140(uVar1,uVar2,uVar7,cVar3);
      FUN_104567140(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    *param_2 = uVar5;
    param_2[2] = 0x1000000000000000;
    param_2[1] = 0;
    uVar4 = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_104567140(uVar1,uVar2,uVar6,uVar4);
  }
  return;
}



/* Entry: 104609198; end: 10460930b;  */

void FUN_104609198(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  ulong uVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar6 = lStack_68;
  uVar5 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar8 = param_2[2];
      cVar3 = *(char *)(param_2 + 3);
      if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
        FUN_1045670a0(uVar1,uVar2,uVar8,0xff);
        FUN_104567140(uVar1,uVar2,uVar8,0xff);
      }
      else {
        _swift_bridgeObjectRetain(lStack_68);
        FUN_1045670a0(uVar1,uVar2,uVar8,cVar3);
        FUN_104567140(uVar1,uVar2,uVar8,cVar3);
        FUN_104567140(0,0,0x3000000000000000,0xff);
        (**(code **)(param_4 + 8))(param_3,param_4);
        _swift_bridgeObjectRelease(lVar6);
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar7 = param_2[2];
      *param_2 = uVar5;
      param_2[1] = lVar6;
      param_2[2] = 0x2000000000000000;
      uVar4 = *(undefined1 *)(param_2 + 3);
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_104567140(uVar1,uVar2,uVar7,uVar4);
    }
  }
  else {
    _swift_bridgeObjectRelease(lStack_68);
  }
  return;
}



/* Entry: 10460930c; end: 10460945b;  */

void FUN_10460930c(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  byte bStack_51;
  
  bStack_51 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_51,param_3,param_4);
  if ((unaff_x21 == 0) && (uVar4 = (ulong)bStack_51, bStack_51 != 2)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    cVar3 = (char)param_2[3];
    if ((((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_1045670a0(uVar1,uVar2,uVar5,0xff);
      FUN_104567140(uVar1,uVar2,uVar5,0xff);
    }
    else {
      FUN_1045670a0(uVar1,uVar2,uVar5,cVar3);
      FUN_104567140(uVar1,uVar2,uVar5,cVar3);
      FUN_104567140(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    *param_2 = uVar4 & 1;
    param_2[2] = 0x3000000000000000;
    param_2[1] = 0;
    uVar4 = param_2[3];
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_104567140(uVar1,uVar2,uVar5,(char)uVar4);
  }
  return;
}



/* Entry: 10460945c; end: 1046095eb;  */

/* WARNING: Removing unreachable block (ram,0x000104609594) */

void FUN_10460945c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  ulong uVar9;
  code *pcVar10;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  bVar5 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)*(byte *)(param_1 + 3);
  plVar6 = param_1;
  if ((!bVar5 || uVar8 != 0xff) && ((uint)(uVar9 >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 4)
  {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_1045670c4(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    FUN_10460d5f8(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x0001045623dc();
  (*pcVar10)(&lStack_78,&UNK_11078f600,plVar6,param_3,param_4);
  uVar9 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (bVar5 && uVar8 == 0xff) {
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar9);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar9);
      (*pcVar10)(param_3,param_4);
    }
    FUN_10460d5f8(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar9;
    lVar1 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_104567140(lVar2,lVar4,lVar7,(char)lVar1);
  }
  else {
    FUN_10460d5f8(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 1046095ec; end: 10460977f;  */

/* WARNING: Removing unreachable block (ram,0x000104609724) */

void FUN_1046095ec(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x21;
  code *pcVar10;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar7 = param_1[2];
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar9 = (uint)*(byte *)(param_1 + 3);
  plVar6 = param_1;
  if ((!bVar5 || uVar9 != 0xff) && ((uint)(uVar7 >> 0x3c) & 0xfffffc03 | (uVar9 & 0x3f) << 2) == 5)
  {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_1045670c4(lVar1,lVar3);
    plVar6 = (long *)0x0;
    FUN_10460d5f8(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar7 & 0xcfffffffffffffff;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x00010456239c();
  (*pcVar10)(&lStack_78,&UNK_11078f790,plVar6,param_3,param_4);
  uVar7 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (bVar5 && uVar9 == 0xff) {
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar7);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(lVar3,uVar7);
      (*pcVar10)(param_3,param_4);
    }
    FUN_10460d5f8(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar7 | 0x1000000000000000;
    lVar1 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_104567140(lVar2,lVar4,lVar8,(char)lVar1);
  }
  else {
    FUN_10460d5f8(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 104609780; end: 1046099ab;  */

void FUN_104609780(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  bVar3 = (byte)unaff_x20[3];
  if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar3 != 0xff)) {
    uVar4 = (uint)(uVar8 >> 0x3c) & 0xfffffc03 | (bVar3 & 0x3f) << 2;
    if (uVar4 < 3) {
      if (uVar4 == 0) {
        FUN_104567140(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(1);
        uVar8 = 0;
        if ((uVar2 & 0xff) != 1) {
          uVar8 = uVar1;
        }
        __ss6HasherV8_combineyySuF(uVar8);
      }
      else if (uVar4 == 1) {
        FUN_104567140(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(2);
        uVar2 = 0;
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar1;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      }
    }
    else if (uVar4 == 3) {
      FUN_104567140(uVar1,uVar2,uVar8,bVar3);
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
    }
    else if (uVar4 == 4) {
      FUN_104613584();
      if (unaff_x21 != 0) {
        return;
      }
    }
    else {
      __ss6HasherV8_combineyySuF(6);
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_60 = param_1[8];
      uStack_98 = param_1[1];
      uStack_a0 = *param_1;
      uStack_88 = param_1[3];
      uStack_90 = param_1[2];
      FUN_1045670c4(uVar1,uVar2,uVar8,bVar3);
      FUN_10460a490(&uStack_a0,uVar1,uVar2,uVar8 & 0xcfffffffffffffff);
      if (unaff_x21 != 0) {
        _swift_errorRelease();
      }
      FUN_104567140(uVar1,uVar2,uVar8,bVar3);
      param_1[5] = uStack_78;
      param_1[4] = uStack_80;
      param_1[7] = uStack_68;
      param_1[6] = uStack_70;
      param_1[8] = uStack_60;
      param_1[1] = uStack_98;
      *param_1 = uStack_a0;
      param_1[3] = uStack_88;
      param_1[2] = uStack_90;
    }
  }
  uVar1 = unaff_x20[4];
  uVar4 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_104609880;
    }
    lVar6 = (long)(int)uVar1;
    lVar7 = (long)uVar1 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar1 + 0x10);
    lVar7 = *(long *)(uVar1 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_104609880:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1046099ac; end: 104609a8f;  */

void FUN_1046099ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(unaff_x20 + 0x18) != 0xff)) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3c) & 0xfffffc03 |
            (*(byte *)(unaff_x20 + 0x18) & 0x3f) << 2;
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        FUN_104609a90();
      }
      else if (uVar1 == 1) {
        FUN_104609b38();
      }
      else {
        FUN_104609ba0();
      }
    }
    else if (uVar1 == 3) {
      FUN_104609c0c();
    }
    else if (uVar1 == 4) {
      FUN_104609c70();
    }
    else {
      FUN_104609d20();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      param_2,param_3);
  return;
}



/* Entry: 104609a90; end: 104609b37;  */

void FUN_104609a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_50 = *param_1;
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03) == 0 && (*(byte *)(param_1 + 3) & 0x3f) == 0)
     ) {
    uStack_48 = (undefined1)param_1[1];
    pcVar1 = *(code **)(param_4 + 0x80);
    FUN_10460d5b8();
    (*pcVar1)(&uStack_50,1,&UNK_11078f588,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609b38);
  (*pcVar1)();
}



/* Entry: 104609b38; end: 104609b9f;  */

void FUN_104609b38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 1))
  {
    (**(code **)(param_4 + 0x10))(*param_1,2,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609ba0);
  (*pcVar1)();
}



/* Entry: 104609ba0; end: 104609c0b;  */

void FUN_104609ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 2))
  {
    (**(code **)(param_4 + 0x70))(*param_1,param_1[1],3,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609c0c);
  (*pcVar1)();
}



/* Entry: 104609c0c; end: 104609c6f;  */

void FUN_104609c0c(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (param_1[0x18] != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x10) >> 0x3c) & 0xfffffc03 | (param_1[0x18] & 0x3f) << 2) == 3))
  {
    (**(code **)(param_4 + 0x68))(*param_1 & 1,4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609c70);
  (*pcVar1)();
}



/* Entry: 104609c70; end: 104609d1f;  */

void FUN_104609c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)(uStack_50 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 4)) {
    uStack_50 = uStack_50 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001045623dc();
    (*pcVar1)(&uStack_60,5,&UNK_11078f600,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609d20);
  (*pcVar1)();
}



/* Entry: 104609d20; end: 104609dcf;  */

void FUN_104609d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)(uStack_50 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 5)) {
    uStack_50 = uStack_50 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010456239c();
    (*pcVar1)(&uStack_60,6,&UNK_11078f790,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104609dd0);
  (*pcVar1)();
}



/* Entry: 104609dd0; end: 104609dd3;  */

uint FUN_104609dd0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *param_1;
  uStack_78 = (undefined1)param_1[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar11 = *param_2;
  uStack_98 = (undefined1)param_2[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_2 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
      FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
      FUN_104567140(uVar10,uVar2,uVar3,0xff);
LAB_10460c874:
      uVar9 = param_1[4];
      func_0x000100e25fcc(uVar9,param_1[5],param_2[4],param_2[5]);
      uVar7 = (uint)uVar9;
      goto LAB_10460c880;
    }
LAB_10460c77c:
    FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_10460c77c;
    FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    uVar8 = uVar10;
    FUN_10460c4a8(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_10460c874;
  }
  uVar7 = 0;
LAB_10460c880:
  return uVar7 & 1;
}



/* Entry: 104609dd4; end: 104609e63;  */

/* WARNING: Removing unreachable block (ram,0x000104609e24) */

void FUN_104609dd4(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_104609780(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104609e64; end: 104609ea3;  */

void FUN_104609e64(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 3) = 0xff;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 104609ea4; end: 104609ed3;  */

undefined1  [16] FUN_104609ea4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 104609ed4; end: 104609f07;  */

void FUN_104609ed4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 104609f08; end: 104609f1b;  */

undefined1  [16] FUN_104609f08(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x104609f18;
  return auVar1;
}



/* Entry: 104609f1c; end: 104609f2f;  */

void FUN_104609f1c(void)

{
  FUN_104608d88();
  return;
}



/* Entry: 104609f30; end: 104609f67;  */

void FUN_104609f30(void)

{
  FUN_1046099ac();
  return;
}



/* Entry: 104609f68; end: 10460a007;  */

void FUN_104609f68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898e0 != -1) {
    _swift_once(0x1130898e0,FUN_104608c28);
  }
  uVar5 = uRam0000000113814ad8;
  uVar4 = uRam0000000113814ad0;
  uVar3 = uRam0000000113814ac8;
  uVar2 = uRam0000000113814ac0;
  uVar1 = uRam0000000113814ab8;
  *param_1 = uRam0000000113814ab0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10460a008; end: 10460a043;  */

void FUN_10460a008(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089960;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089960,&UNK_10dd1f4a0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10460a044; end: 10460a20f;  */

/* WARNING: Removing unreachable block (ram,0x00010460a0a8) */

void FUN_10460a044(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_104609780(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460a210; end: 10460a253;  */

uint FUN_10460a210(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10460c6a0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10460a254; end: 10460a27b;  */

undefined * FUN_10460a254(void)

{
  return &UNK_11078f308;
}



/* Entry: 10460a27c; end: 10460a33b;  */

void FUN_10460a27c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1f4b0,9,&uStack_48,&lStack_40);
  puRam0000000113814ae8 = puStack_38;
  lRam0000000113814ae0 = lStack_40;
  puRam0000000113814af8 = puStack_28;
  puRam0000000113814af0 = puStack_30;
  puRam0000000113814b08 = puStack_18;
  puRam0000000113814b00 = puStack_20;
  return;
}



/* Entry: 10460a33c; end: 10460a3db;  */

void FUN_10460a33c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898e8 != -1) {
    _swift_once(0x1130898e8,FUN_10460a27c);
  }
  uVar5 = uRam0000000113814b08;
  uVar4 = uRam0000000113814b00;
  uVar3 = uRam0000000113814af8;
  uVar2 = uRam0000000113814af0;
  uVar1 = uRam0000000113814ae8;
  *param_1 = uRam0000000113814ae0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10460a3dc; end: 10460a48f;  */

/* WARNING: Removing unreachable block (ram,0x00010460a48c) */

void FUN_10460a3dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00010456241c();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10460a490; end: 10460a527;  */

void FUN_10460a490(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_104611e60(param_2,1), unaff_x21 != 0)) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_10460a500;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_10460a500:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 10460a528; end: 10460a5c3;  */

void FUN_10460a528(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x00010456241c();
    (*pcVar2)(param_2,1,&UNK_11078f680,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10460a5c4; end: 10460a66b;  */

/* WARNING: Removing unreachable block (ram,0x00010460a62c) */

void FUN_10460a5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_10460a490(&uStack_d0,param_1,param_2,param_3);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460a66c; end: 10460a6b7;  */

void FUN_10460a66c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 10460a6b8; end: 10460a6ef;  */

void FUN_10460a6b8(void)

{
  FUN_10460a3dc();
  return;
}



/* Entry: 10460a6f0; end: 10460a78f;  */

void FUN_10460a6f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898e8 != -1) {
    _swift_once(0x1130898e8,FUN_10460a27c);
  }
  uVar5 = uRam0000000113814b08;
  uVar4 = uRam0000000113814b00;
  uVar3 = uRam0000000113814af8;
  uVar2 = uRam0000000113814af0;
  uVar1 = uRam0000000113814ae8;
  *param_1 = uRam0000000113814ae0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10460a790; end: 10460a7a3;  */

void FUN_10460a790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089958;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089958,&UNK_10dd1f498);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10460a7a4; end: 10460a7d7;  */

void FUN_10460a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 10460a7d8; end: 10460a997;  */

/* WARNING: Removing unreachable block (ram,0x00010460a83c) */

void FUN_10460a7d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_10460a490(&uStack_d0,uVar1,uVar2,uVar3);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460a998; end: 10460a9a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10460a998(ulong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  byte *pbVar23;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  uVar18 = *param_1;
  pbVar9 = (byte *)param_1[1];
  pbVar23 = (byte *)param_1[2];
  lVar22 = param_2[1];
  uVar24 = param_2[2];
  FUN_1045b863c(uVar18,*param_2);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar24 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10460a9a4; end: 10460aa07;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10460a9a4(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    code *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  byte *pbVar23;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  uVar18 = *param_1;
  pbVar9 = (byte *)param_1[1];
  pbVar23 = (byte *)param_1[2];
  lVar22 = param_2[1];
  uVar24 = param_2[2];
  (*param_5)(uVar18,*param_2);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar24 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10460aa08; end: 10460c34f;  */

undefined * FUN_10460aa08(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint uVar21;
  undefined1 uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  code *pcVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  long lVar34;
  double dVar35;
  double dVar36;
  undefined *puVar37;
  undefined *puVar38;
  byte *pbVar39;
  long lVar40;
  double dVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  double *pdVar46;
  ulong uVar47;
  undefined8 *puVar48;
  int iVar49;
  ulong uVar50;
  int iVar51;
  int iVar52;
  undefined8 *puVar53;
  byte bVar54;
  byte bVar55;
  uint uVar56;
  long lVar57;
  undefined *puVar58;
  undefined8 uVar59;
  int iVar60;
  double dVar61;
  double dVar62;
  ulong uStack_128;
  uint uStack_114;
  byte bStack_d9;
  byte abStack_d8 [24];
  byte abStack_c0 [14];
  undefined2 uStack_b2;
  double dStack_b0;
  byte bStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  byte bStack_88;
  long lStack_80;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == param_2) {
    puVar37 = (undefined *)0x1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar50 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uStack_128 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uStack_128 = ~(-1L << (uVar50 & 0x3f));
      }
      uStack_128 = uStack_128 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar40 = 0;
LAB_10460aabc:
      do {
        if (uStack_128 == 0) {
          do {
            lVar57 = lVar40 + 1;
            if (SCARRY8(lVar40,1)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460be2c);
              (*pcVar30)();
            }
            if ((long)(uVar50 + 0x3f >> 6) <= lVar57) goto LAB_10460bc98;
            uStack_128 = ((ulong *)(param_1 + 0x40))[lVar57];
            lVar40 = lVar40 + 1;
          } while (uStack_128 == 0);
          uVar44 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
          uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
          uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
          uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
          uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
          uStack_128 = uStack_128 - 1 & uStack_128;
        }
        else {
          uVar44 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
          uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
          uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
          uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
          uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
          uStack_128 = uStack_128 - 1 & uStack_128;
          lVar57 = lVar40;
        }
        uVar45 = LZCOUNT(uVar44) | lVar57 << 6;
        plVar2 = (long *)(*(long *)(param_1 + 0x30) + uVar45 * 0x10);
        lVar40 = *plVar2;
        uVar44 = plVar2[1];
        pdVar46 = (double *)(*(long *)(param_1 + 0x38) + uVar45 * 0x30);
        dVar4 = *pdVar46;
        dVar9 = pdVar46[1];
        dVar62 = pdVar46[2];
        bVar55 = *(byte *)(pdVar46 + 3);
        dVar5 = pdVar46[4];
        dVar10 = pdVar46[5];
        _swift_bridgeObjectRetain(uVar44);
        FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
        func_0x00010006c00c(dVar5,dVar10);
        if (uVar44 == 0) {
LAB_10460bc98:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          puVar37 = (undefined *)0x1;
          goto LAB_10460c1b0;
        }
        uVar45 = uVar44;
        func_0x000100029284();
        _swift_bridgeObjectRelease(uVar44);
        if ((uVar45 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_104567140(dVar4,dVar9,dVar62,bVar55);
          func_0x00010006c090(dVar5,dVar10);
          goto LAB_10460c1ac;
        }
        pdVar46 = (double *)(*(long *)(param_2 + 0x38) + lVar40 * 0x30);
        dVar6 = *pdVar46;
        dVar11 = pdVar46[1];
        dVar61 = pdVar46[2];
        bVar14 = *(byte *)(pdVar46 + 3);
        dVar35 = pdVar46[4];
        dVar41 = pdVar46[5];
        abStack_c0[0] = SUB81(dVar6,0);
        abStack_c0[1] = (byte)((ulong)dVar6 >> 8);
        abStack_c0[2] = (byte)((ulong)dVar6 >> 0x10);
        abStack_c0[3] = (byte)((ulong)dVar6 >> 0x18);
        abStack_c0[4] = (byte)((ulong)dVar6 >> 0x20);
        abStack_c0[5] = (byte)((ulong)dVar6 >> 0x28);
        abStack_c0[6] = (byte)((ulong)dVar6 >> 0x30);
        abStack_c0[7] = (byte)((ulong)dVar6 >> 0x38);
        abStack_c0[8] = SUB81(dVar11,0);
        bVar24 = abStack_c0[8];
        abStack_c0[9] = (byte)((ulong)dVar11 >> 8);
        bVar25 = abStack_c0[9];
        abStack_c0[10] = (byte)((ulong)dVar11 >> 0x10);
        bVar26 = abStack_c0[10];
        abStack_c0[0xb] = (byte)((ulong)dVar11 >> 0x18);
        bVar27 = abStack_c0[0xb];
        abStack_c0[0xc] = (byte)((ulong)dVar11 >> 0x20);
        bVar28 = abStack_c0[0xc];
        abStack_c0[0xd] = (byte)((ulong)dVar11 >> 0x28);
        bVar29 = abStack_c0[0xd];
        uStack_b2 = (undefined2)((ulong)dVar11 >> 0x30);
        bVar31 = (((ulong)dVar62 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        dStack_b0 = dVar61;
        bStack_a8 = bVar14;
        dStack_a0 = dVar4;
        dStack_98 = dVar9;
        dStack_90 = dVar62;
        bStack_88 = bVar55;
        if (((((ulong)dVar61 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar14 == 0xff))
        {
          if (bVar31 && bVar55 == 0xff) {
            FUN_1045670a0(dVar6,dVar11,dVar61,0xff);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,0xff);
            FUN_1045670a0(dVar4,dVar9,dVar62,0xff);
            uStack_114 = 0xff;
            bVar54 = 0xff;
            goto LAB_10460b7e4;
          }
LAB_10460bd48:
          FUN_1045670a0(dVar6,dVar11,dVar61);
          FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
          FUN_104567140(dVar4,dVar9,dVar62,bVar55);
          func_0x00010006c090(dVar5,dVar10);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          func_0x00010460d62c(abStack_c0);
          goto LAB_10460c1ac;
        }
        if (bVar31 && bVar55 == 0xff) {
          bVar55 = 0xff;
          goto LAB_10460bd48;
        }
        uVar21 = (uint)((ulong)dVar61 >> 0x20);
        uVar43 = uVar21 >> 0x1c & 0xfffffc03 | (bVar14 & 0x3f) << 2;
        uStack_114 = (uint)bVar55;
        uVar56 = (uint)bVar55;
        uVar23 = (uint)((ulong)dVar62 >> 0x20);
        bVar54 = bVar14;
        if (2 < uVar43) {
          if (uVar43 == 3) {
            if ((uVar23 >> 0x1c & 0xfffffc03 | (uStack_114 & 0x3f) << 2) == 3) {
              FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
              func_0x00010006c00c(dVar35,dVar41);
              FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
              FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
              if (((SUB84(dVar6,0) ^ SUB84(dVar4,0)) & 1) == 0) goto LAB_10460b7e4;
              goto LAB_10460c12c;
            }
            FUN_1045670a0(dVar6,dVar11,dVar61);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
            FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
LAB_10460c01c:
            FUN_104567140(dVar4,dVar9,dVar62,bVar55);
            goto LAB_10460c12c;
          }
          uVar56 = uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2;
          uVar15 = (undefined1)((ulong)dVar61 >> 8);
          uVar16 = (undefined1)((ulong)dVar61 >> 0x10);
          uVar17 = (undefined1)((ulong)dVar61 >> 0x18);
          uVar18 = (undefined1)((ulong)dVar61 >> 0x20);
          uVar19 = (undefined1)((ulong)dVar61 >> 0x28);
          bVar1 = (byte)((ulong)dVar61 >> 0x30);
          uVar20 = (undefined1)((ulong)dVar11 >> 0x30);
          uVar22 = (undefined1)((ulong)dVar11 >> 0x38);
          iVar51 = SUB84(dVar11,0);
          iVar60 = (int)((ulong)dVar11 >> 0x20);
          iVar52 = SUB84(dVar9,0);
          iVar49 = (int)((ulong)dVar9 >> 0x20);
          lVar40 = (long)dVar11 >> 0x20;
          if (uVar43 != 4) {
            if (uVar56 == 5) {
              FUN_1045670a0(dVar6,dVar11,dVar61);
              func_0x00010006c00c(dVar35,dVar41);
              FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
              FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
              dVar32 = dVar6;
              FUN_1045b863c(dVar6,dVar4);
              if (((ulong)dVar32 & 1) == 0) {
                FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                func_0x00010006c090(dVar5,dVar10);
                FUN_104567140(dVar6,dVar11,dVar61,bVar14);
                func_0x00010006c090(dVar35,dVar41);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
LAB_10460c264:
                FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
              }
              else {
                uVar43 = uVar21 >> 0x1e;
                if ((ulong)dVar61 >> 0x3e == 3) {
                  uVar44 = 0;
                  if ((((dVar11 != 0.0 || ((ulong)dVar61 & 0xcfffffffffffffff) != 0xc000000000000000
                        ) || (ulong)dVar62 >> 0x3e < 3) || (dVar9 != 0.0)) ||
                     (dVar33 = 0.0, ((ulong)dVar62 & 0xcfffffffffffffff) != 0xc000000000000000))
                  goto LAB_10460b374;
LAB_10460b45c:
                  FUN_104567140(dVar4,dVar33,dVar62,uStack_114);
                  goto LAB_10460b7e4;
                }
                if (uVar21 >> 0x1e < 2) {
                  if (uVar43 == 0) {
                    uVar44 = (ulong)dVar61 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar60,iVar51)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c320);
                      (*pcVar30)();
                    }
                    uVar44 = (ulong)(iVar60 - iVar51);
                  }
                }
                else if (uVar43 == 2) {
                  uVar44 = *(long *)((long)dVar11 + 0x18) - *(long *)((long)dVar11 + 0x10);
                  if (SBORROW8(*(long *)((long)dVar11 + 0x18),*(long *)((long)dVar11 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c32c);
                    (*pcVar30)();
                  }
                }
                else {
                  uVar44 = 0;
                }
LAB_10460b374:
                dVar33 = dVar9;
                if (1 < uVar23 >> 0x1e) {
                  if (uVar23 >> 0x1e == 2) {
                    uVar45 = *(long *)((long)dVar9 + 0x18) - *(long *)((long)dVar9 + 0x10);
                    if (SBORROW8(*(long *)((long)dVar9 + 0x18),*(long *)((long)dVar9 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c31c);
                      (*pcVar30)();
                    }
                    goto LAB_10460b3b0;
                  }
                  if (uVar44 == 0) goto LAB_10460b45c;
LAB_10460c1ec:
                  FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                  func_0x00010006c090(dVar5,dVar10);
                  FUN_104567140(dVar6,dVar11,dVar61,bVar14);
                  func_0x00010006c090(dVar35,dVar41);
                  _swift_bridgeObjectRelease(param_2);
                  _swift_bridgeObjectRelease_n(param_1,2);
                  goto LAB_10460c264;
                }
                if (uVar23 >> 0x1e == 0) {
                  uVar45 = (ulong)dVar62 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar49,iVar52)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c318);
                    (*pcVar30)();
                  }
                  uVar45 = (ulong)(iVar49 - iVar52);
                }
LAB_10460b3b0:
                if (uVar44 != uVar45) goto LAB_10460c1ec;
                if ((long)uVar44 < 1) goto LAB_10460b45c;
                if (uVar43 < 2) {
                  if (uVar43 != 0) {
                    lVar42 = (long)iVar51;
                    if (lVar40 < lVar42) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c334);
                      (*pcVar30)();
                    }
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (dVar32 == 0.0) {
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      lVar34 = 0;
                    }
                    else {
                      dVar33 = dVar32;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar42,(long)dVar33)) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c34c);
                        (*pcVar30)();
                      }
                      lVar34 = (lVar42 - (long)dVar33) + (long)dVar32;
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if (lVar34 != 0) {
                        if (lVar40 - lVar42 <= (long)dVar33) {
                          dVar33 = (double)(lVar40 - lVar42);
                        }
                        lVar40 = (long)dVar33 + lVar34;
                        goto LAB_10460b738;
                      }
                    }
                    lVar40 = 0;
                    goto LAB_10460b738;
                  }
                  pbVar39 = abStack_d8 + bVar1;
                  abStack_d8[0] = bVar24;
                  abStack_d8[1] = bVar25;
                  abStack_d8[2] = bVar26;
                  abStack_d8[3] = bVar27;
                  abStack_d8[4] = bVar28;
                  abStack_d8[5] = bVar29;
                  abStack_d8[6] = uVar20;
                  abStack_d8[7] = uVar22;
                  abStack_d8[8] = SUB81(dVar61,0);
                  abStack_d8[9] = uVar15;
                  abStack_d8[10] = uVar16;
                  abStack_d8[0xb] = uVar17;
                  abStack_d8[0xc] = uVar18;
                  abStack_d8[0xd] = uVar19;
LAB_10460b5ec:
                  func_0x000100e25bdc(&bStack_d9,abStack_d8,pbVar39,dVar9);
                  FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = bStack_d9;
                }
                else {
                  if (uVar43 != 2) {
                    abStack_d8[8] = 0;
                    abStack_d8[9] = 0;
                    abStack_d8[10] = 0;
                    abStack_d8[0xb] = 0;
                    abStack_d8[0xc] = 0;
                    abStack_d8[0xd] = 0;
                    abStack_d8[0] = 0;
                    abStack_d8[1] = 0;
                    abStack_d8[2] = 0;
                    abStack_d8[3] = 0;
                    abStack_d8[4] = 0;
                    abStack_d8[5] = 0;
                    abStack_d8[6] = 0;
                    abStack_d8[7] = 0;
                    pbVar39 = abStack_d8;
                    goto LAB_10460b5ec;
                  }
                  lVar40 = *(long *)((long)dVar11 + 0x10);
                  lVar42 = *(long *)((long)dVar11 + 0x18);
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (dVar32 == 0.0) {
                    lVar34 = 0;
                  }
                  else {
                    dVar33 = dVar32;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar40,(long)dVar33)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c344);
                      (*pcVar30)();
                    }
                    lVar34 = (lVar40 - (long)dVar33) + (long)dVar32;
                    dVar32 = dVar33;
                  }
                  dVar33 = (double)(lVar42 - lVar40);
                  if (SBORROW8(lVar42,lVar40)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c338);
                    (*pcVar30)();
                  }
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if (lVar34 == 0) {
                    lVar40 = 0;
                  }
                  else {
                    if ((long)dVar33 <= (long)dVar32) {
                      dVar32 = dVar33;
                    }
                    lVar40 = (long)dVar32 + lVar34;
                  }
LAB_10460b738:
                  func_0x000100e25bdc(abStack_d8,lVar34,lVar40,dVar9,
                                      (ulong)dVar62 & 0xcfffffffffffffff);
                  FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = abStack_d8[0];
                }
                if ((bVar55 & 1) != 0) goto LAB_10460b7e4;
                FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                func_0x00010006c090(dVar5,dVar10);
                FUN_104567140(dVar6,dVar11,dVar61,bVar14);
                func_0x00010006c090(dVar35,dVar41);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
              }
              FUN_104567140(dVar6,dVar11,dVar61,bVar14);
            }
            else {
              FUN_1045670a0(dVar6,dVar11,dVar61);
              FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
              FUN_104567140(dVar4,dVar9,dVar62,bVar55);
              func_0x00010006c090(dVar5,dVar10);
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease_n(param_1,2);
              FUN_104567140(dVar4,dVar9,dVar62,bVar55);
              FUN_104567140(dVar6,dVar11,dVar61,bVar14);
            }
            goto LAB_10460c1ac;
          }
          if (uVar56 != 4) {
            FUN_1045670a0(dVar6,dVar11,dVar61);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
            FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
            goto LAB_10460c01c;
          }
          FUN_1045670a0(dVar6,dVar11,dVar61);
          func_0x00010006c00c(dVar35,dVar41);
          FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
          FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
          dVar32 = dVar6;
          FUN_10460aa08(dVar6,dVar4);
          if (((ulong)dVar32 & 1) == 0) {
            FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
            goto LAB_10460c12c;
          }
          uVar43 = uVar21 >> 0x1e;
          if ((ulong)dVar61 >> 0x3e == 3) {
            uVar44 = 0;
            if ((((dVar11 != 0.0 || dVar61 != -2.0) || (ulong)dVar62 >> 0x3e < 3) || (dVar9 != 0.0))
               || (dVar62 != -2.0)) goto LAB_10460b1e8;
            dVar33 = 0.0;
            dVar36 = -2.0;
LAB_10460b314:
            FUN_104567140(dVar4,dVar33,dVar36,uStack_114);
            goto LAB_10460b7e4;
          }
          if (uVar21 >> 0x1e < 2) {
            if (uVar43 == 0) {
              uVar44 = (ulong)dVar61 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar60,iVar51)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c328);
                (*pcVar30)();
              }
              uVar44 = (ulong)(iVar60 - iVar51);
            }
          }
          else if (uVar43 == 2) {
            uVar44 = *(long *)((long)dVar11 + 0x18) - *(long *)((long)dVar11 + 0x10);
            if (SBORROW8(*(long *)((long)dVar11 + 0x18),*(long *)((long)dVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c324);
              (*pcVar30)();
            }
          }
          else {
            uVar44 = 0;
          }
LAB_10460b1e8:
          dVar33 = dVar9;
          dVar36 = dVar62;
          if (uVar23 >> 0x1e < 2) {
            if (uVar23 >> 0x1e == 0) {
              uVar45 = (ulong)dVar62 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar49,iVar52)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c314);
                (*pcVar30)();
              }
              uVar45 = (ulong)(iVar49 - iVar52);
            }
LAB_10460b228:
            if (uVar44 == uVar45) {
              if ((long)uVar44 < 1) goto LAB_10460b314;
              if (uVar43 < 2) {
                if (uVar43 == 0) {
                  abStack_d8[0] = bVar24;
                  abStack_d8[1] = bVar25;
                  abStack_d8[2] = bVar26;
                  abStack_d8[3] = bVar27;
                  abStack_d8[4] = bVar28;
                  abStack_d8[5] = bVar29;
                  abStack_d8[6] = uVar20;
                  abStack_d8[7] = uVar22;
                  abStack_d8[8] = SUB81(dVar61,0);
                  abStack_d8[9] = uVar15;
                  abStack_d8[10] = uVar16;
                  abStack_d8[0xb] = uVar17;
                  abStack_d8[0xc] = uVar18;
                  abStack_d8[0xd] = uVar19;
                  func_0x000100e25bdc(&bStack_d9,abStack_d8,abStack_d8 + bVar1,dVar9,dVar62);
                  FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = bStack_d9;
                }
                else {
                  lVar42 = (long)iVar51;
                  if (lVar40 < lVar42) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c330);
                    (*pcVar30)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (dVar32 == 0.0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar34 = 0;
LAB_10460b77c:
                    lVar40 = 0;
                  }
                  else {
                    dVar33 = dVar32;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar42,(long)dVar33)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c348);
                      (*pcVar30)();
                    }
                    lVar34 = (lVar42 - (long)dVar33) + (long)dVar32;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar34 == 0) goto LAB_10460b77c;
                    if (lVar40 - lVar42 <= (long)dVar33) {
                      dVar33 = (double)(lVar40 - lVar42);
                    }
                    lVar40 = (long)dVar33 + lVar34;
                  }
                  func_0x000100e25bdc(abStack_d8,lVar34,lVar40,dVar9,dVar62);
                  FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = abStack_d8[0];
                }
              }
              else if (uVar43 == 2) {
                lVar40 = *(long *)((long)dVar11 + 0x10);
                lVar42 = *(long *)((long)dVar11 + 0x18);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (dVar32 == 0.0) {
                  lVar34 = 0;
                }
                else {
                  dVar33 = dVar32;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar40,(long)dVar33)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c340);
                    (*pcVar30)();
                  }
                  lVar34 = (lVar40 - (long)dVar33) + (long)dVar32;
                  dVar32 = dVar33;
                }
                dVar33 = (double)(lVar42 - lVar40);
                if (SBORROW8(lVar42,lVar40)) {
                    /* WARNING: Does not return */
                  pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c33c);
                  (*pcVar30)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar34 == 0) {
                  lVar40 = 0;
                }
                else {
                  if ((long)dVar33 <= (long)dVar32) {
                    dVar32 = dVar33;
                  }
                  lVar40 = (long)dVar32 + lVar34;
                }
                func_0x000100e25bdc(abStack_d8,lVar34,lVar40,dVar9,dVar62);
                FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                bVar55 = abStack_d8[0];
              }
              else {
                abStack_d8[8] = 0;
                abStack_d8[9] = 0;
                abStack_d8[10] = 0;
                abStack_d8[0xb] = 0;
                abStack_d8[0xc] = 0;
                abStack_d8[0xd] = 0;
                abStack_d8[0] = 0;
                abStack_d8[1] = 0;
                abStack_d8[2] = 0;
                abStack_d8[3] = 0;
                abStack_d8[4] = 0;
                abStack_d8[5] = 0;
                abStack_d8[6] = 0;
                abStack_d8[7] = 0;
                func_0x000100e25bdc(&bStack_d9,abStack_d8,abStack_d8,dVar9,dVar62);
                FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
                bVar55 = bStack_d9;
              }
              if ((bVar55 & 1) != 0) goto LAB_10460b7e4;
              goto LAB_10460c12c;
            }
          }
          else {
            if (uVar23 >> 0x1e == 2) {
              uVar45 = *(long *)((long)dVar9 + 0x18) - *(long *)((long)dVar9 + 0x10);
              if (SBORROW8(*(long *)((long)dVar9 + 0x18),*(long *)((long)dVar9 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c310);
                (*pcVar30)();
              }
              goto LAB_10460b228;
            }
            if (uVar44 == 0) goto LAB_10460b314;
          }
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
LAB_10460c12c:
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          func_0x00010006c090(dVar5,dVar10);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          func_0x00010006c090(dVar35,dVar41);
          break;
        }
        if (uVar43 == 0) {
          if ((uVar23 >> 0x1c & 0xfffffc03) != 0 || (bVar55 & 0x3f) != 0) {
LAB_10460bdb0:
            FUN_1045670a0(dVar6,dVar11,dVar61);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
            FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
            goto LAB_10460c01c;
          }
          dVar32 = 0.0;
          if (((ulong)dVar11 & 0xff) != 1) {
            dVar32 = dVar6;
          }
          if (((ulong)dVar9 & 0xff) == 1) {
            if (dVar32 == 0.0) {
LAB_10460b070:
              FUN_1045670a0(dVar6,dVar11,dVar61);
              func_0x00010006c00c(dVar35,dVar41);
              FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
              FUN_1045670a0(dVar4,dVar9,dVar62,uStack_114);
              goto LAB_10460b7e4;
            }
          }
          else if (dVar32 == dVar4) goto LAB_10460b070;
          FUN_1045670a0(dVar6,dVar11,dVar61);
          func_0x00010006c00c(dVar35,dVar41);
          FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
          FUN_1045670a0(dVar4,dVar9,dVar62,uStack_114);
          goto LAB_10460c12c;
        }
        if (uVar43 == 1) {
          if ((uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2) == 1) {
            FUN_1045670a0(dVar6,dVar11,dVar61);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
            FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
            if (dVar6 == dVar4) goto LAB_10460b7e4;
          }
          else {
            FUN_1045670a0(dVar6,dVar11,dVar61);
            func_0x00010006c00c(dVar35,dVar41);
            FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
            FUN_1045670a0(dVar4,dVar9,dVar62,bVar55);
            FUN_104567140(dVar4,dVar9,dVar62,bVar55);
          }
          goto LAB_10460c12c;
        }
        if ((uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2) != 2) goto LAB_10460bdb0;
        if (dVar6 == dVar4 && dVar11 == dVar9) {
          FUN_1045670a0(dVar4,dVar9,dVar61);
          func_0x00010006c00c(dVar35,dVar41);
          FUN_1045670a0(dVar4,dVar9,dVar61,bVar14);
          FUN_1045670a0(dVar4,dVar9,dVar62,uStack_114);
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
        }
        else {
          dVar32 = dVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (dVar6,dVar11,dVar4,dVar9,0);
          FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
          func_0x00010006c00c(dVar35,dVar41);
          FUN_1045670a0(dVar6,dVar11,dVar61,bVar14);
          FUN_1045670a0(dVar4,dVar9,dVar62,uStack_114);
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          if (((ulong)dVar32 & 1) == 0) goto LAB_10460c12c;
        }
LAB_10460b7e4:
        dVar32 = dVar6;
        FUN_104567140(dVar6,dVar11,dVar61,bVar54);
        uVar21 = (uint)((ulong)dVar41 >> 0x20);
        uVar43 = uVar21 >> 0x1e;
        uVar23 = (uint)((ulong)dVar10 >> 0x20);
        uVar56 = uVar23 >> 0x1e;
        iVar60 = SUB84(dVar35,0);
        lVar40 = lVar57;
        if ((ulong)dVar41 >> 0x3e == 3) {
          uVar44 = 0;
          if ((((dVar35 != 0.0 || dVar41 != -2.0) || (ulong)dVar10 >> 0x3e < 3) || (dVar5 != 0.0))
             || (dVar10 != -2.0)) goto joined_r0x00010460b880;
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          func_0x00010006c090(0,0xc000000000000000);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          dVar35 = 0.0;
          dVar41 = -2.0;
LAB_10460ba04:
          func_0x00010006c090(dVar35,dVar41);
          goto LAB_10460aabc;
        }
        if (uVar21 >> 0x1e < 2) {
          if (uVar43 == 0) {
            uVar44 = (ulong)dVar41 >> 0x30 & 0xff;
          }
          else {
            iVar49 = (int)((ulong)dVar35 >> 0x20);
            if (SBORROW4(iVar49,iVar60)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c2f8);
              (*pcVar30)();
            }
            uVar44 = (ulong)(iVar49 - iVar60);
          }
joined_r0x00010460b880:
          if (uVar23 >> 0x1e < 2) goto LAB_10460b8b8;
LAB_10460b884:
          if (uVar56 == 2) {
            uVar45 = *(long *)((long)dVar5 + 0x18) - *(long *)((long)dVar5 + 0x10);
            if (SBORROW8(*(long *)((long)dVar5 + 0x18),*(long *)((long)dVar5 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c2f4);
              (*pcVar30)();
            }
            goto LAB_10460b8dc;
          }
          if (uVar44 == 0) goto LAB_10460b9c8;
LAB_10460bcec:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          func_0x00010006c090(dVar5,dVar10);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          func_0x00010006c090(dVar35,dVar41);
          goto LAB_10460c1ac;
        }
        if (uVar43 == 2) {
          uVar44 = *(long *)((long)dVar35 + 0x18) - *(long *)((long)dVar35 + 0x10);
          if (SBORROW8(*(long *)((long)dVar35 + 0x18),*(long *)((long)dVar35 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c2fc);
            (*pcVar30)();
          }
          goto joined_r0x00010460b880;
        }
        uVar44 = 0;
        if (1 < uVar56) goto LAB_10460b884;
LAB_10460b8b8:
        if (uVar56 == 0) {
          uVar45 = (ulong)dVar10 >> 0x30 & 0xff;
        }
        else {
          iVar49 = (int)((ulong)dVar5 >> 0x20);
          if (SBORROW4(iVar49,SUB84(dVar5,0))) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c2f0);
            (*pcVar30)();
          }
          uVar45 = (ulong)(iVar49 - SUB84(dVar5,0));
        }
LAB_10460b8dc:
        if (uVar44 != uVar45) goto LAB_10460bcec;
        if ((long)uVar44 < 1) {
LAB_10460b9c8:
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          func_0x00010006c090(dVar5,dVar10);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          goto LAB_10460ba04;
        }
        if (uVar43 < 2) {
          if (uVar43 == 0) {
            abStack_c0[0] = SUB81(dVar35,0);
            abStack_c0[1] = (byte)((ulong)dVar35 >> 8);
            abStack_c0[2] = (byte)((ulong)dVar35 >> 0x10);
            abStack_c0[3] = (byte)((ulong)dVar35 >> 0x18);
            abStack_c0[4] = (byte)((ulong)dVar35 >> 0x20);
            abStack_c0[5] = (byte)((ulong)dVar35 >> 0x28);
            abStack_c0[6] = (byte)((ulong)dVar35 >> 0x30);
            abStack_c0[7] = (byte)((ulong)dVar35 >> 0x38);
            abStack_c0[8] = SUB81(dVar41,0);
            abStack_c0[9] = (byte)((ulong)dVar41 >> 8);
            abStack_c0[10] = (byte)((ulong)dVar41 >> 0x10);
            abStack_c0[0xb] = (byte)((ulong)dVar41 >> 0x18);
            abStack_c0[0xc] = (byte)((ulong)dVar41 >> 0x20);
            abStack_c0[0xd] = (byte)((ulong)dVar41 >> 0x28);
            func_0x000100e25bdc(abStack_d8,abStack_c0,abStack_c0 + ((ulong)dVar41 >> 0x30 & 0xff),
                                dVar5,dVar10);
            FUN_104567140(dVar6,dVar11,dVar61,bVar14);
            func_0x00010006c090(dVar35,dVar41);
            goto LAB_10460bb74;
          }
          lVar57 = (long)iVar60;
          dVar33 = (double)(((long)dVar35 >> 0x20) - lVar57);
          if ((long)dVar35 >> 0x20 < lVar57) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c300);
            (*pcVar30)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (dVar32 == 0.0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            lVar57 = 0;
            lVar42 = 0;
          }
          else {
            dVar36 = dVar32;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar57,(long)dVar36)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c30c);
              (*pcVar30)();
            }
            lVar57 = (lVar57 - (long)dVar36) + (long)dVar32;
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (lVar57 == 0) {
              lVar42 = 0;
            }
            else {
              if ((long)dVar33 <= (long)dVar36) {
                dVar36 = dVar33;
              }
              lVar42 = (long)dVar36 + lVar57;
            }
          }
          func_0x000100e25bdc(abStack_c0,lVar57,lVar42,dVar5,dVar10);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          func_0x00010006c090(dVar35,dVar41);
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
LAB_10460bc7c:
          func_0x00010006c090(dVar5,dVar10);
          bVar55 = abStack_c0[0];
        }
        else {
          if (uVar43 == 2) {
            lVar57 = *(long *)((long)dVar35 + 0x10);
            lVar42 = *(long *)((long)dVar35 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            dVar33 = dVar32;
            if (dVar32 != 0.0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar57,(long)dVar33)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c308);
                (*pcVar30)();
              }
              dVar32 = (double)((lVar57 - (long)dVar33) + (long)dVar32);
            }
            dVar36 = (double)(lVar42 - lVar57);
            if (SBORROW8(lVar42,lVar57)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c304);
              (*pcVar30)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (dVar32 == 0.0) {
              lVar57 = 0;
            }
            else {
              if ((long)dVar36 <= (long)dVar33) {
                dVar33 = dVar36;
              }
              lVar57 = (long)dVar33 + (long)dVar32;
            }
            func_0x000100e25bdc(abStack_c0,dVar32,lVar57,dVar5,dVar10);
            FUN_104567140(dVar6,dVar11,dVar61,bVar14);
            func_0x00010006c090(dVar35,dVar41);
            FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
            goto LAB_10460bc7c;
          }
          abStack_c0[8] = 0;
          abStack_c0[9] = 0;
          abStack_c0[10] = 0;
          abStack_c0[0xb] = 0;
          abStack_c0[0xc] = 0;
          abStack_c0[0xd] = 0;
          abStack_c0[0] = 0;
          abStack_c0[1] = 0;
          abStack_c0[2] = 0;
          abStack_c0[3] = 0;
          abStack_c0[4] = 0;
          abStack_c0[5] = 0;
          abStack_c0[6] = 0;
          abStack_c0[7] = 0;
          func_0x000100e25bdc(abStack_d8,abStack_c0,abStack_c0,dVar5,dVar10);
          FUN_104567140(dVar6,dVar11,dVar61,bVar14);
          func_0x00010006c090(dVar35,dVar41);
LAB_10460bb74:
          FUN_104567140(dVar4,dVar9,dVar62,uStack_114);
          func_0x00010006c090(dVar5,dVar10);
          bVar55 = abStack_d8[0];
        }
      } while ((bVar55 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_10460c1ac:
    puVar37 = (undefined *)0x0;
  }
LAB_10460c1b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar37;
  }
  ___stack_chk_fail();
  puVar58 = *(undefined **)(puVar37 + 0x10);
  puVar38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar58 != (undefined *)0x0) {
    func_0x0001000285a8(0x113087508,&UNK_10dd18fd0);
    puVar38 = puVar58;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar53 = (undefined8 *)(puVar37 + 0x30);
    do {
      uVar50 = puVar53[-2];
      uVar44 = puVar53[-1];
      uVar7 = *puVar53;
      uVar12 = puVar53[1];
      uVar59 = puVar53[2];
      uVar15 = *(undefined1 *)(puVar53 + 3);
      uVar8 = puVar53[4];
      uVar13 = puVar53[5];
      _swift_bridgeObjectRetain(uVar44);
      FUN_1045670a0(uVar7,uVar12,uVar59,uVar15);
      func_0x00010006c00c(uVar8,uVar13);
      uVar45 = uVar50;
      uVar47 = uVar44;
      func_0x000100029284();
      if ((uVar47 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c4a4);
        (*pcVar30)();
      }
      uVar47 = uVar45 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar38 + uVar47 + 0x40) =
           *(ulong *)(puVar38 + uVar47 + 0x40) | 1L << (uVar45 & 0x3f);
      puVar3 = (ulong *)(*(long *)(puVar38 + 0x30) + uVar45 * 0x10);
      *puVar3 = uVar50;
      puVar3[1] = uVar44;
      puVar48 = (undefined8 *)(*(long *)(puVar38 + 0x38) + uVar45 * 0x30);
      *puVar48 = uVar7;
      puVar48[1] = uVar12;
      puVar48[2] = uVar59;
      *(undefined1 *)(puVar48 + 3) = uVar15;
      puVar48[4] = uVar8;
      puVar48[5] = uVar13;
      if (SCARRY8(*(long *)(puVar38 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x10460c4a8);
        (*pcVar30)();
      }
      puVar53 = puVar53 + 8;
      *(long *)(puVar38 + 0x10) = *(long *)(puVar38 + 0x10) + 1;
      puVar58 = puVar58 + -1;
    } while (puVar58 != (undefined *)0x0);
    _swift_release(puVar38);
  }
  return puVar38;
}



/* Entry: 10460c350; end: 10460c4a7;  */

undefined * FUN_10460c350(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar15 != (undefined *)0x0) {
    func_0x0001000285a8(0x113087508,&UNK_10dd18fd0);
    puVar10 = puVar15;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar14 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar14[-2];
      uVar5 = puVar14[-1];
      uVar3 = *puVar14;
      uVar6 = puVar14[1];
      uVar16 = puVar14[2];
      uVar8 = *(undefined1 *)(puVar14 + 3);
      uVar4 = puVar14[4];
      uVar7 = puVar14[5];
      _swift_bridgeObjectRetain(uVar5);
      FUN_1045670a0(uVar3,uVar6,uVar16,uVar8);
      func_0x00010006c00c(uVar4,uVar7);
      uVar11 = uVar2;
      uVar12 = uVar5;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10460c4a4);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x30);
      *puVar13 = uVar3;
      puVar13[1] = uVar6;
      puVar13[2] = uVar16;
      *(undefined1 *)(puVar13 + 3) = uVar8;
      puVar13[4] = uVar4;
      puVar13[5] = uVar7;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10460c4a8);
        (*pcVar9)();
      }
      puVar14 = puVar14 + 8;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar15 = puVar15 + -1;
    } while (puVar15 != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}



/* Entry: 10460c4a8; end: 10460c65f;  */

double FUN_10460c4a8(double param_1,ulong param_2,ulong param_3,uint param_4,double param_5,
                    ulong param_6,ulong param_7,uint param_8)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  uVar2 = (uint)(param_7 >> 0x20);
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      if ((uVar2 >> 0x1c & 3) == 0 && (param_8 & 0x3f) == 0) {
        dVar1 = 0.0;
        if ((param_2 & 0xff) != 1) {
          dVar1 = param_1;
        }
        if ((param_6 & 0xff) == 1) {
          if (dVar1 != 0.0) goto LAB_10460c648;
        }
        else if (dVar1 != param_5) goto LAB_10460c648;
LAB_10460c638:
        uVar3 = 1;
        goto LAB_10460c64c;
      }
    }
    else {
      if (uVar3 == 1) {
        uVar3 = (uint)(param_1 == param_5);
        if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) != 1) {
          uVar3 = 0;
        }
        goto LAB_10460c64c;
      }
      if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 2) {
        if ((param_1 != param_5) || (param_2 != param_6)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(param_1,param_2,param_5,param_6,0);
          return param_1;
        }
        goto LAB_10460c638;
      }
    }
  }
  else {
    if (uVar3 == 3) {
      uVar3 = SUB84(param_5,0) ^ SUB84(param_1,0) ^ 1;
      if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) != 3) {
        uVar3 = 0;
      }
      goto LAB_10460c64c;
    }
    if (uVar3 == 4) {
      if (((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 4) &&
         (FUN_10460aa08(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
        func_0x000100e25fcc(param_2,param_3,param_6,param_7);
joined_r0x00010460c634:
        if ((param_2 & 1) != 0) goto LAB_10460c638;
      }
    }
    else if (((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 5) &&
            (FUN_1045b863c(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
      func_0x000100e25fcc(param_2,param_3 & 0xcfffffffffffffff,param_6,param_7 & 0xcfffffffffffffff)
      ;
      goto joined_r0x00010460c634;
    }
  }
LAB_10460c648:
  uVar3 = 0;
LAB_10460c64c:
  return (double)(ulong)(uVar3 & 1);
}



/* Entry: 10460c660; end: 10460c69f;  */

void FUN_10460c660(void)

{
  undefined *puVar1;
  
  if (puRam00000001130898d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f2b8;
  _swift_getWitnessTable(&UNK_10dd1f2b8,&UNK_11078f680);
  puRam00000001130898d8 = puVar1;
  return;
}



/* Entry: 10460c6a0; end: 10460c8a3;  */

uint FUN_10460c6a0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *param_1;
  uStack_78 = (undefined1)param_1[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar11 = *param_2;
  uStack_98 = (undefined1)param_2[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_2 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
      FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
      FUN_104567140(uVar10,uVar2,uVar3,0xff);
LAB_10460c874:
      uVar9 = param_1[4];
      func_0x000100e25fcc(uVar9,param_1[5],param_2[4],param_2[5]);
      uVar7 = (uint)uVar9;
      goto LAB_10460c880;
    }
LAB_10460c77c:
    FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_10460c77c;
    FUN_10460d850(&uStack_80,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    FUN_10460d850(&uStack_a0,auStack_c0,0x113086ff0,&UNK_10dd1f4c0);
    uVar8 = uVar10;
    FUN_10460c4a8(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_10460c874;
  }
  uVar7 = 0;
LAB_10460c880:
  return uVar7 & 1;
}



/* Entry: 10460c8a4; end: 10460c8b7;  */

void FUN_10460c8a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460c8b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10460c8f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460c8b8; end: 10460c937;  */

void FUN_10460c8b8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130898f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f0d0;
  _swift_getWitnessTable(&UNK_10dd1f0d0,&UNK_11078f588);
  puRam00000001130898f0 = puVar1;
  return;
}



/* Entry: 10460c938; end: 10460c93b;  */

void FUN_10460c938(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113089900 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113089908;
  func_0x00010002969c(0x113089908,&UNK_10dd1f058);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113089900 = puVar2;
  return;
}



/* Entry: 10460c93c; end: 10460c98b;  */

void FUN_10460c93c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113089900 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113089908;
  func_0x00010002969c(0x113089908,&UNK_10dd1f058);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113089900 = puVar2;
  return;
}



/* Entry: 10460c98c; end: 10460c98f;  */

void FUN_10460c98c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f110;
  _swift_getWitnessTable(&UNK_10dd1f110,&UNK_11078f588);
  puRam0000000113089910 = puVar1;
  return;
}



/* Entry: 10460c990; end: 10460c9cf;  */

void FUN_10460c990(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f110;
  _swift_getWitnessTable(&UNK_10dd1f110,&UNK_11078f588);
  puRam0000000113089910 = puVar1;
  return;
}



/* Entry: 10460c9d0; end: 10460c9f3;  */

void FUN_10460c9d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460c9f4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10460c9f4; end: 10460ca33;  */

void FUN_10460c9f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f1b8;
  _swift_getWitnessTable(&UNK_10dd1f1b8,&UNK_11078f600);
  puRam0000000113089918 = puVar1;
  return;
}



/* Entry: 10460ca34; end: 10460ca47;  */

void FUN_10460ca34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460ca48();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045623dc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460ca48; end: 10460ca87;  */

void FUN_10460ca48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f1e0;
  _swift_getWitnessTable(&UNK_10dd1f1e0,&UNK_11078f600);
  puRam0000000113089920 = puVar1;
  return;
}



/* Entry: 10460ca88; end: 10460ca8b;  */

void FUN_10460ca88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f220;
  _swift_getWitnessTable(&UNK_10dd1f220,&UNK_11078f600);
  puRam0000000113089928 = puVar1;
  return;
}



/* Entry: 10460ca8c; end: 10460cacb;  */

void FUN_10460ca8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f220;
  _swift_getWitnessTable(&UNK_10dd1f220,&UNK_11078f600);
  puRam0000000113089928 = puVar1;
  return;
}



/* Entry: 10460cacc; end: 10460caef;  */

void FUN_10460cacc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460caf0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10460caf0; end: 10460cb2f;  */

void FUN_10460caf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f290;
  _swift_getWitnessTable(&UNK_10dd1f290,&UNK_11078f680);
  puRam0000000113089930 = puVar1;
  return;
}



/* Entry: 10460cb30; end: 10460cb47;  */

void FUN_10460cb30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460c660();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10456241c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460cb48; end: 10460cb87;  */

void FUN_10460cb48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f2f8;
  _swift_getWitnessTable(&UNK_10dd1f2f8,&UNK_11078f680);
  puRam0000000113089938 = puVar1;
  return;
}



/* Entry: 10460cb88; end: 10460cbab;  */

void FUN_10460cb88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460cbac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10460cbac; end: 10460cbeb;  */

void FUN_10460cbac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f368;
  _swift_getWitnessTable(&UNK_10dd1f368,&UNK_11078f790);
  puRam0000000113089940 = puVar1;
  return;
}



/* Entry: 10460cbec; end: 10460cbff;  */

void FUN_10460cbec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460cc30();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10456239c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460cc00; end: 10460cc2f;  */

void FUN_10460cc00(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460cc30; end: 10460cc6f;  */

void FUN_10460cc30(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f390;
  _swift_getWitnessTable(&UNK_10dd1f390,&UNK_11078f790);
  puRam0000000113089948 = puVar1;
  return;
}



/* Entry: 10460cc70; end: 10460cc73;  */

void FUN_10460cc70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f3d0;
  _swift_getWitnessTable(&UNK_10dd1f3d0,&UNK_11078f790);
  puRam0000000113089950 = puVar1;
  return;
}



/* Entry: 10460cc74; end: 10460ccb3;  */

void FUN_10460cc74(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f3d0;
  _swift_getWitnessTable(&UNK_10dd1f3d0,&UNK_11078f790);
  puRam0000000113089950 = puVar1;
  return;
}



/* Entry: 10460ccb4; end: 10460cd63;  */

int FUN_10460ccb4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10460cd64; end: 10460cda7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460cd64(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 3) != -1)) {
    FUN_104567164(*param_1,param_1[1]);
  }
  uVar1 = param_1[4];
  uVar2 = (uint)((ulong)param_1[5] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[5] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10460cda8; end: 10460cf5b;  */

undefined8 * FUN_10460cda8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  cVar2 = *(char *)(param_2 + 3);
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar2 == -1)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    uVar4 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar4;
  }
  else {
    uVar4 = *param_2;
    uVar1 = param_2[1];
    FUN_1045670c4(uVar4,uVar1,uVar3,cVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    *(char *)(param_1 + 3) = cVar2;
  }
  uVar4 = param_2[4];
  uVar1 = param_2[5];
  func_0x00010006c00c(uVar4,uVar1);
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 10460cf5c; end: 10460d027;  */

undefined8 * FUN_10460cf5c(undefined8 *param_1)

{
  FUN_104567164(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return param_1;
}



/* Entry: 10460d028; end: 10460d107;  */

int FUN_10460d028(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f9 < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x3fa;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 6) << 2;
  iVar2 = 0x3fe - uVar1;
  if (0x3f9 < (uVar1 ^ 0x3fe)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10460d108; end: 10460d1cf;  */

undefined8 * FUN_10460d108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1045670c4(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10460d1d0; end: 10460d21b;  */

undefined8 * FUN_10460d1d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_104567164(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10460d21c; end: 10460d31b;  */

int FUN_10460d21c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fa < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x3fb;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 6) << 2) ^ 0x3ff;
  if (0x3f9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10460d31c; end: 10460d343;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460d31c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10460d344; end: 10460d3eb;  */

undefined8 * FUN_10460d344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10460d3ec; end: 10460d42f;  */

undefined8 * FUN_10460d3ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10460d430; end: 10460d4c7;  */

int FUN_10460d430(ulong *param_1,int param_2)

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



/* Entry: 10460d4c8; end: 10460d5b7;  */

undefined * FUN_10460d4c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar7 = 0;
    func_0x0001000285a8(0x113087668);
    puVar5 = puVar10;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar11 = (undefined1 *)(param_1 + 0x38);
    do {
      uVar1 = *(ulong *)(puVar11 + -0x18);
      uVar2 = *(undefined8 *)(puVar11 + -0x10);
      uVar12 = *(undefined8 *)(puVar11 + -8);
      uVar3 = *puVar11;
      uVar6 = uVar1;
      func_0x00010035a314();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10460d5b4);
        (*pcVar4)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 8) = uVar1;
      puVar9 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x18);
      *puVar9 = uVar2;
      puVar9[1] = uVar12;
      *(undefined1 *)(puVar9 + 2) = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10460d5b8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar10 = puVar10 + -1;
      puVar11 = puVar11 + 0x20;
    } while (puVar10 != (undefined *)0x0);
  }
  return puVar5;
}



/* Entry: 10460d5b8; end: 10460d5f7;  */

void FUN_10460d5b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1f038;
  _swift_getWitnessTable(&DAT_10dd1f038,&UNK_11078f588);
  puRam0000000113089970 = puVar1;
  return;
}



/* Entry: 10460d5f8; end: 10460d673;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460d5f8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  _swift_bridgeObjectRelease();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 10460d674; end: 10460d76f;  */

undefined * FUN_10460d674(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  puVar12 = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar12 != (undefined *)0x0) {
    uVar9 = 0;
    func_0x0001000285a8(0x1130874f8);
    puVar7 = puVar12;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar13 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      uVar14 = puVar13[1];
      uVar5 = *(undefined1 *)(puVar13 + 2);
      uVar2 = puVar13[3];
      uVar4 = puVar13[4];
      uVar8 = uVar1;
      func_0x00010035a314();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10460d76c);
        (*pcVar6)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      *(ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 8) = uVar1;
      puVar11 = (undefined8 *)(*(long *)(puVar7 + 0x38) + uVar8 * 0x28);
      *puVar11 = uVar3;
      puVar11[1] = uVar14;
      *(undefined1 *)(puVar11 + 2) = uVar5;
      puVar11[3] = uVar2;
      puVar11[4] = uVar4;
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10460d770);
        (*pcVar6)();
      }
      puVar13 = puVar13 + 6;
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      puVar12 = puVar12 + -1;
    } while (puVar12 != (undefined *)0x0);
  }
  return puVar7;
}



/* Entry: 10460d770; end: 10460d84f;  */

undefined * FUN_10460d770(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x1130874f0,&UNK_10dd18fb8);
    puVar5 = puVar8;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_104559588();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10460d84c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10460d850);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar5;
}



/* Entry: 10460d850; end: 10460d897;  */

undefined8 FUN_10460d850(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10460d898; end: 10460d94f;  */

undefined1  [16] FUN_10460d898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 10460d950; end: 10460d983;  */

undefined1  [16]
FUN_10460d950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10460d984; end: 10460d9b7;  */

void FUN_10460d984(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10460d9b8; end: 10460d9f3;  */

undefined1  [16] FUN_10460d9b8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10460d9c8;
  return auVar1;
}



/* Entry: 10460d9f4; end: 10460dab3;  */

void FUN_10460d9f4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1f660,0x11,&uStack_48,&lStack_40);
  puRam0000000113814b18 = puStack_38;
  lRam0000000113814b10 = lStack_40;
  puRam0000000113814b28 = puStack_28;
  puRam0000000113814b20 = puStack_30;
  puRam0000000113814b38 = puStack_18;
  puRam0000000113814b30 = puStack_20;
  return;
}



/* Entry: 10460dab4; end: 10460db53;  */

void FUN_10460dab4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089978 != -1) {
    _swift_once(0x113089978,FUN_10460d9f4);
  }
  uVar5 = uRam0000000113814b38;
  uVar4 = uRam0000000113814b30;
  uVar3 = uRam0000000113814b28;
  uVar2 = uRam0000000113814b20;
  uVar1 = uRam0000000113814b18;
  *param_1 = uRam0000000113814b10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10460db54; end: 10460dbeb;  */

void FUN_10460db54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10460dba8:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010460dbc4;
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_10460db90;
code_r0x00010460dbc4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_10460db90:
    (*pcVar3)();
  }
  goto LAB_10460dba8;
}



/* Entry: 10460dbec; end: 10460dc83;  */

void FUN_10460dbec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x20))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && (((int)param_3 == 0 ||
         ((**(code **)(param_7 + 0x18))(param_3,2,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10460dc84; end: 10460dcaf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10460dc84(long param_1,int param_2,byte *param_3,byte *param_4,long param_5,int param_6,
                    long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if ((param_1 != param_5) || (param_2 != param_6)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar11 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
          (param_8 >> 0x3e < 3)) || ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_8 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
        if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
          if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_4;
          if (param_3 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_3 = (byte *)0x0;
          }
          else {
            pbVar11 = param_3;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_3;
            if (param_3 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_3;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_3 + 0x10);
          unaff_x24 = *(byte **)(param_3 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_3;
          if (param_3 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_3 = param_3 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_3;
          unaff_x25 = param_4;
          if (param_3 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_3;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_3 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_3;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
           (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_4 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_4 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_7 = *(long *)(pbVar11 + 8);
    param_8 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10460dcb0; end: 10460dd13;  */

void FUN_10460dcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046048d8(auStack_78,param_1,param_2,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460dd14; end: 10460dd47;  */

void FUN_10460dd14(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 10460dd48; end: 10460dd77;  */

undefined1  [16] FUN_10460dd48(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10460dd78; end: 10460ddab;  */

void FUN_10460dd78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}


