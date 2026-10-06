/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4de70c; end: 10b4de74f;  */

bool FUN_10b4de70c(undefined1 param_1,long param_2,long param_3)

{
  undefined1 uStack_21;
  
  param_3 = param_2 + param_3;
  uStack_21 = param_1;
  func_0x000107c28364(param_2,param_3,&uStack_21);
  return param_3 != param_2;
}



/* Entry: 10b4de750; end: 10b4de767;  */

bool FUN_10b4de750(char *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == param_2) {
    return false;
  }
  param_1 = param_1 + 1;
  pcVar2 = param_3;
  _strlen();
  if (param_1 == param_2) {
    bVar1 = false;
  }
  else {
    pcVar3 = pcVar2;
    pcVar4 = param_1;
    do {
      if (pcVar3 == (char *)0x0) {
        return true;
      }
      pcVar5 = pcVar4 + 1;
      if (*pcVar4 != *param_3) {
        return pcVar3 == (char *)0x0;
      }
      pcVar3 = pcVar3 + -1;
      param_3 = param_3 + 1;
      pcVar4 = pcVar5;
    } while (pcVar5 != param_2);
    bVar1 = param_2 + -(long)param_1 == pcVar2;
  }
  return bVar1;
}



/* Entry: 10b4de768; end: 10b4de77f;  */

ulong FUN_10b4de768(ulong param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uVar3 = param_1;
    func_0x00010b4e0cc8();
    if ((param_2 == 0x23) || ((*(byte *)(uVar3 + 200) & 1) == 0)) {
      func_0x00010b4e0cc8();
      bVar1 = *(byte *)(uVar3 + 200);
      func_0x00010b4e0cc8();
      if ((param_2 == 0x23) && ((bVar1 & 1) != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0x108,uVar3);
        func_0x00010b4e0cc8();
        func_0x00010b4e0c34();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c90();
        func_0x00010b4e0e0c();
        func_0x00010b4e0d24();
        func_0x00010b4e0d1c();
        uVar4 = 1;
        *(undefined1 *)(param_1 + 0x1d0) = 1;
        *(undefined4 *)(param_1 + 0x1d8) = 0x14;
        uVar3 = 0x100000000;
      }
      else {
        func_0x00010b4e0d64();
        func_0x000107c27cf4();
        if ((uVar3 & 1) == 0) {
          uVar2 = 5;
        }
        else {
          uVar2 = 0xd;
        }
        *(undefined4 *)(param_1 + 0x1d8) = uVar2;
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
        uVar3 = 0x100000000;
        uVar4 = 2;
      }
      goto LAB_10b4de7c4;
    }
  }
  func_0x00010b4e0e68();
  uVar4 = 3;
  uVar3 = extraout_x8;
LAB_10b4de7c4:
  return uVar3 | uVar4;
}



/* Entry: 10b4de780; end: 10b4de86b;  */

ulong FUN_10b4de780(ulong param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    uVar3 = param_1;
    func_0x00010b4e0cc8();
    if ((param_2 == 0x23) || ((*(byte *)(uVar3 + 200) & 1) == 0)) {
      func_0x00010b4e0cc8();
      bVar1 = *(byte *)(uVar3 + 200);
      func_0x00010b4e0cc8();
      if ((param_2 == 0x23) && ((bVar1 & 1) != 0)) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_1 + 0x108,uVar3);
        func_0x00010b4e0cc8();
        func_0x00010b4e0c34();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c90();
        func_0x00010b4e0e0c();
        func_0x00010b4e0d24();
        func_0x00010b4e0d1c();
        uVar4 = 1;
        *(undefined1 *)(param_1 + 0x1d0) = 1;
        *(undefined4 *)(param_1 + 0x1d8) = 0x14;
        uVar3 = 0x100000000;
      }
      else {
        func_0x00010b4e0d64();
        func_0x000107c27cf4();
        if ((uVar3 & 1) == 0) {
          uVar2 = 5;
        }
        else {
          uVar2 = 0xd;
        }
        *(undefined4 *)(param_1 + 0x1d8) = uVar2;
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
        uVar3 = 0x100000000;
        uVar4 = 2;
      }
      goto LAB_10b4de7c4;
    }
  }
  func_0x00010b4e0e68();
  uVar4 = 3;
  uVar3 = extraout_x8;
LAB_10b4de7c4:
  return uVar3 | uVar4;
}



/* Entry: 10b4de86c; end: 10b4de8bf;  */

undefined8 FUN_10b4de86c(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0x2f) && (lVar1 = param_1, func_0x00010b4e0cb0(), (int)lVar1 != 0)) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    uVar2 = 8;
  }
  else {
    func_0x00010b4e0d40();
    func_0x00010b4e0d80(*(undefined8 *)(param_1 + 0x28));
    uVar2 = 5;
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  return 0x100000001;
}



/* Entry: 10b4de8c0; end: 10b4dea4f;  */

undefined8 FUN_10b4de8c0(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long extraout_x8;
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010b4e0db4();
  param_1 = param_1 + 0x30;
  FUN_10b4de768(param_1);
  lVar2 = unaff_x19 + 0x108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar2,param_1);
  iVar1 = (int)lVar2;
  func_0x00010b4e0c5c();
  if ((bool)in_ZR) {
    func_0x00010b4e0cc8();
    func_0x00010b4e0c80();
    func_0x00010b4e0cc8();
    func_0x00010b4e0c70();
    func_0x00010b4e0cc8();
    func_0x00010b4e0c24();
    func_0x00010b4e0cc8();
    func_0x00010b4e0c44();
    func_0x00010b4e0c34();
    func_0x00010b4e0cc8();
    func_0x00010b4e0c90();
  }
  else {
    if (unaff_w20 == 0x23) {
      func_0x00010b4e0cc8();
      func_0x00010b4e0c80();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c70();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c24();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c44();
      func_0x00010b4e0c34();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c90();
      func_0x00010b4e0e0c();
      func_0x00010b4e0d24();
      func_0x00010b4e0d1c();
      uVar3 = 0x14;
    }
    else if (unaff_w20 == 0x3f) {
      func_0x00010b4e0cc8();
      func_0x00010b4e0c80();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c70();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c24();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c44();
      func_0x00010b4e0c34();
      func_0x00010b4e0e0c();
      func_0x00010b4e0d5c(unaff_x19 + 400);
      func_0x00010b4e0d1c();
      uVar3 = 0x13;
    }
    else {
      if (unaff_w20 != 0x2f) {
        func_0x00010b4e0cfc();
        if ((unaff_w20 != 0x5c) || (iVar1 == 0)) {
          func_0x00010b4e0cc8();
          func_0x00010b4e0c80();
          func_0x00010b4e0cc8();
          func_0x00010b4e0c70();
          func_0x00010b4e0cc8();
          func_0x00010b4e0c24();
          func_0x00010b4e0cc8();
          func_0x00010b4e0c44();
          func_0x00010b4e0c34();
          if (*(long *)(unaff_x19 + 0x178) != *(long *)(unaff_x19 + 0x180)) {
            func_0x000107c30408(unaff_x19 + 0x178);
          }
          func_0x00010b4e0d70();
          if (extraout_x8 != *(long *)(unaff_x19 + 0x18)) {
            func_0x00010b4e0d80();
            return 0x100000001;
          }
          return 0x100000002;
        }
        func_0x00010b4e0d40();
      }
      uVar3 = 6;
    }
    *(undefined4 *)(unaff_x19 + 0x1d8) = uVar3;
  }
  return 0x100000001;
}



/* Entry: 10b4dea50; end: 10b4deb2b;  */

undefined8 FUN_10b4dea50(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010b4e0db4();
  param_1 = param_1 + 0x108;
  func_0x00010b4e0f48();
  if ((int)param_1 == 0) {
    if (unaff_w20 != 0x2f) {
LAB_10b4dea9c:
      func_0x00010b4e0cc8();
      func_0x00010b4e0c80();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c70();
      func_0x00010b4e0cc8();
      func_0x00010b4e0c24();
      func_0x00010b4e0cc8();
      uVar1 = *(undefined2 *)(param_1 + 0x68);
      *(undefined1 *)(unaff_x19 + 0x172) = *(undefined1 *)(param_1 + 0x6a);
      *(undefined2 *)(unaff_x19 + 0x170) = uVar1;
      func_0x00010b4e0d70();
      func_0x00010b4e0d80();
      return 0x100000001;
    }
    uVar2 = 9;
  }
  else {
    if (unaff_w20 != 0x2f) {
      if (unaff_w20 != 0x5c) goto LAB_10b4dea9c;
      func_0x00010b4e0d40();
    }
    uVar2 = 8;
  }
  *(undefined4 *)(unaff_x19 + 0x1d8) = uVar2;
  return 0x100000001;
}



/* Entry: 10b4deb2c; end: 10b4deb63;  */

undefined8 FUN_10b4deb2c(long param_1,int param_2)

{
  if ((param_2 == 0x2f) || (param_2 == 0x5c)) {
    *(undefined1 *)(param_1 + 0x1d1) = 1;
  }
  else {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    *(undefined4 *)(param_1 + 0x1d8) = 9;
  }
  return 0x100000001;
}



/* Entry: 10b4deb64; end: 10b4ded0f;  */

ulong FUN_10b4deb64(long param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  bVar3 = param_2 == 0x40;
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x1d1) = 1;
    if (*(char *)(param_1 + 0x200) == '\x01') {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f774a36,param_1 + 0x1e8);
      func_0x000107c27b9c(param_1 + 0x1e8,auStack_58);
      func_0x00010b4e0d04();
    }
    *(undefined1 *)(param_1 + 0x200) = 1;
    pcVar1 = (char *)(param_1 + 0x1e8);
    lVar7 = (long)*(char *)(param_1 + 0x1ff);
    if (lVar7 < 0) {
      pcVar1 = *(char **)(param_1 + 0x1e8);
      lVar7 = *(long *)(param_1 + 0x1f0);
    }
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      if ((*pcVar1 == ':') && ((*(byte *)(param_1 + 0x202) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x202) = 1;
      }
      else {
        FUN_10b4dc078(auStack_58,(long)*pcVar1,FUN_10b4dc0c0);
        if (*(char *)(param_1 + 0x202) == '\x01') {
          func_0x00010b4e0cd0();
          func_0x00010b4e0dd8(param_1 + 0x138);
        }
        else {
          func_0x00010b4e0cd0();
          func_0x00010b4e0dd8(param_1 + 0x120);
        }
        func_0x00010b4e0d14();
        func_0x00010b4e0d04();
      }
      pcVar1 = pcVar1 + 1;
    }
LAB_10b4decb0:
    func_0x000107c27fa8(param_1 + 0x1e8);
  }
  else {
    lVar7 = param_1;
    func_0x00010b4e0c5c();
    iVar4 = (int)lVar7;
    if (((bVar3) || ((bVar3 = param_2 == 0x3f, param_2 < 0x40 && (func_0x00010b4e0e3c(), !bVar3))))
       || ((func_0x00010b4e0cfc(), param_2 == 0x5c && (iVar4 != 0)))) {
      bVar2 = *(byte *)(param_1 + 0x1ff);
      uVar5 = (ulong)bVar2;
      if (*(char *)(param_1 + 0x200) == '\x01') {
        uVar6 = uVar5;
        if ((char)bVar2 < '\0') {
          uVar6 = *(ulong *)(param_1 + 0x1f0);
        }
        if (uVar6 == 0) {
          func_0x00010b4e0e68();
          uVar6 = 5;
          uVar5 = extraout_x8;
          goto LAB_10b4decbc;
        }
      }
      if ((char)bVar2 < '\0') {
        uVar5 = *(ulong *)(param_1 + 0x1f0);
      }
      *(ulong *)(param_1 + 0x28) = ~uVar5 + *(long *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x1d8) = 10;
      goto LAB_10b4decb0;
    }
    func_0x00010b4e0d94();
  }
  uVar5 = 0x100000000;
  uVar6 = 1;
LAB_10b4decbc:
  return uVar5 | uVar6;
}



/* Entry: 10b4ded10; end: 10b4def7f;  */

ulong FUN_10b4ded10(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x19;
  uint uVar5;
  ulong unaff_x20;
  ulong uVar6;
  bool bVar7;
  uint uStack_50;
  byte bStack_38;
  
  func_0x00010b4e0db4();
  if ((*(char *)(param_1 + 0x1e0) == '\x01') && (func_0x00010b4e0d30(), (int)param_1 != 0)) {
    *(undefined4 *)(unaff_x19 + 0x1d8) = 0xf;
    if (*(long *)(unaff_x19 + 0x28) == *(long *)(unaff_x19 + 0x18)) {
LAB_10b4deeb0:
      uVar6 = 0x100000000;
      unaff_x19 = 2;
      goto LAB_10b4def34;
    }
    func_0x00010b4e0d80();
  }
  else {
    iVar1 = (int)param_1;
    uVar5 = (uint)unaff_x20;
    if ((uVar5 == 0x3a) && ((*(byte *)(unaff_x19 + 0x201) & 1) == 0)) {
      if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
        if (*(long *)(unaff_x19 + 0x1f0) != 0) goto LAB_10b4dedec;
      }
      else if (*(char *)(unaff_x19 + 0x1ff) != '\0') {
LAB_10b4dedec:
        func_0x00010b4e0cfc();
        func_0x00010b4e0da0();
        FUN_10b4def80();
        if ((bStack_38 & 1) != 0) {
          func_0x00010b4e0df4();
          func_0x00010b4e0dcc();
          func_0x00010b4e0eec();
          *(undefined4 *)(unaff_x19 + 0x1d8) = 0xc;
          if ((*(char *)(unaff_x19 + 0x1e0) == '\x01') && (*(int *)(unaff_x19 + 0x1dc) == 0xb))
          goto LAB_10b4def08;
          goto LAB_10b4dee30;
        }
        goto LAB_10b4def18;
      }
LAB_10b4dee7c:
      uVar6 = 0;
      func_0x00010b4e0d40();
      unaff_x19 = 5;
      goto LAB_10b4def34;
    }
    lVar3 = *(long *)(unaff_x19 + 0x28);
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if ((lVar3 != lVar4 + *(long *)(unaff_x19 + 0x20)) &&
       ((0x3f < uVar5 || ((1L << (unaff_x20 & 0x3f) & 0x8000800800000000U) == 0)))) {
      func_0x00010b4e0cfc();
      if ((uVar5 != 0x5c) || (iVar1 == 0)) {
        if (uVar5 == 0x5b) {
          uVar2 = 1;
LAB_10b4def64:
          *(undefined1 *)(unaff_x19 + 0x201) = uVar2;
        }
        else if (uVar5 == 0x5d) {
          uVar2 = 0;
          goto LAB_10b4def64;
        }
        func_0x00010b4e0d94();
        goto LAB_10b4def2c;
      }
      lVar3 = *(long *)(unaff_x19 + 0x28);
      lVar4 = *(long *)(unaff_x19 + 0x18);
    }
    if (lVar3 == lVar4) goto LAB_10b4deeb0;
    func_0x00010b4e0d80();
    func_0x00010b4e0cfc();
    if (iVar1 != 0) {
      if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
        if (*(long *)(unaff_x19 + 0x1f0) == 0) goto LAB_10b4dee7c;
      }
      else if (*(char *)(unaff_x19 + 0x1ff) == '\0') goto LAB_10b4dee7c;
    }
    if (*(char *)(unaff_x19 + 0x1e0) == '\x01') {
      if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
        if (*(long *)(unaff_x19 + 0x1f0) == 0) goto LAB_10b4dee94;
      }
      else if (*(char *)(unaff_x19 + 0x1ff) == '\0') {
LAB_10b4dee94:
        uVar6 = unaff_x19 + 0x108;
        func_0x00010b4e0f5c();
        if (((uVar6 & 1) != 0) || (*(char *)(unaff_x19 + 0x172) == '\x01')) {
          func_0x00010b4e0d40();
          goto LAB_10b4deeb0;
        }
      }
    }
    func_0x00010b4e0cfc();
    func_0x00010b4e0da0();
    FUN_10b4def80();
    if ((bStack_38 & 1) == 0) {
LAB_10b4def18:
      uVar6 = 0;
      bVar7 = false;
      unaff_x19 = (ulong)uStack_50;
    }
    else {
      func_0x00010b4e0df4();
      func_0x00010b4e0dcc();
      func_0x000107c27fa8(unaff_x19 + 0x1e8);
      func_0x00010b4e0f08();
      if (*(char *)(unaff_x19 + 0x1e0) == '\x01') {
LAB_10b4def08:
        unaff_x19 = 0;
        bVar7 = false;
        uVar6 = 0x100000000;
      }
      else {
LAB_10b4dee30:
        uVar6 = 0;
        bVar7 = true;
      }
    }
    func_0x00010b4e0e04();
    if (!bVar7) goto LAB_10b4def34;
  }
LAB_10b4def2c:
  uVar6 = 0x100000000;
  unaff_x19 = 1;
LAB_10b4def34:
  return uVar6 | unaff_x19 & 0xffffffff;
}



/* Entry: 10b4def80; end: 10b4df3df;  */

void FUN_10b4def80(undefined8 *param_1,char *param_2,long param_3,int param_4)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  char *extraout_x10;
  char *extraout_x10_00;
  char *extraout_x10_01;
  char *extraout_x10_02;
  undefined8 extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  undefined8 extraout_x11_02;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  byte bStack_98;
  char acStack_88 [16];
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  int aiStack_58 [2];
  undefined **ppuStack_50;
  byte bStack_48;
  
  if ((param_3 != 0) && (*param_2 == '[')) {
    if (param_2[param_3 + -1] == ']') {
      FUN_10b4dabe0(&uStack_b0,param_2 + 1,param_3 + -2);
      if ((char)uStack_a0 == '\x01') {
        FUN_10b4da82c(&uStack_70,&uStack_b0);
        func_0x000107c27f54(aiStack_58,&DAT_10f62a9e8,&uStack_70);
        func_0x000107c27fac(&uStack_d0,aiStack_58,&DAT_10f62a9ea);
        param_1[1] = uStack_c8;
        *param_1 = uStack_d0;
        param_1[2] = uStack_c0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_d0 = 0;
        func_0x00010b4e0f28();
        func_0x00010b4e0d14();
        func_0x00010b4e0e58();
        puVar4 = &uStack_70;
        goto LAB_10b4df0e0;
      }
    }
    uVar8 = 7;
LAB_10b4df288:
    *(undefined4 *)param_1 = uVar8;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  lVar9 = param_3;
  pcVar13 = param_2;
  if (param_4 != 0) {
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      uVar3 = (ulong)*pcVar13;
      if ((*pcVar13 != '%') && (FUN_10b4e095c(), (uVar3 & 1) != 0)) {
        uVar8 = 8;
        goto LAB_10b4df288;
      }
      pcVar13 = pcVar13 + 1;
    }
    uStack_b0 = 0;
    ppuStack_a8 = (undefined **)0x0;
    uStack_a0 = 0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_10b4e08e0(&uStack_d0,(long)*param_2,FUN_10b4e0924);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (aiStack_58,&uStack_d0);
      func_0x000107c27fc4(&uStack_b0,aiStack_58);
      func_0x00010b4e0e58();
      func_0x00010b4e0d14();
      param_2 = param_2 + 1;
    }
    param_1[1] = ppuStack_a8;
    *param_1 = uStack_b0;
    param_1[2] = uStack_a0;
    ppuStack_a8 = (undefined **)0x0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    func_0x00010b4e0f28();
    puVar4 = &uStack_b0;
LAB_10b4df0e0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    return;
  }
  pcVar13 = param_2 + param_3;
  uStack_70 = 0;
  ppuStack_68 = (undefined **)0x0;
  uVar12 = 1;
  uStack_60 = 0;
  do {
    cVar2 = *param_2;
    if (*param_2 == '%') {
      lVar9 = (long)pcVar13 - (long)param_2;
      cVar1 = SBORROW8(lVar9,3);
      cVar2 = lVar9 + -3 < 0;
      if (2 < lVar9) {
        FUN_10b4e09a0(&uStack_d0,(long)param_2[1]);
        FUN_10b4e09a0(aiStack_58,(long)param_2[2]);
        uVar7 = (uint)(byte)uStack_c0;
        cVar1 = SBORROW4(uVar7,1);
        cVar2 = (int)(uVar7 - 1) < 0;
        if ((uVar7 == 1) && ((bStack_48 & 1) != 0)) {
          pcVar10 = (char *)&uStack_d0;
          FUN_10b4d9f58();
          cVar2 = *pcVar10;
          piVar5 = aiStack_58;
          FUN_10b4d9f58();
          cVar2 = (char)*piVar5 + cVar2 * '\x10';
          goto LAB_10b4df164;
        }
        uVar12 = 0;
      }
      ppuStack_a8 = &PTR_PTR_110cf13f0;
      bStack_98 = 0;
      uStack_b0 = uVar12;
      goto LAB_10b4df1f4;
    }
LAB_10b4df164:
    acStack_88[0] = cVar2;
    uStack_78 = 1;
    pcVar10 = acStack_88;
    FUN_10b4d9f58();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_70,(long)*pcVar10);
    pcVar10 = param_2 + 3;
    if (*param_2 != '%') {
      pcVar10 = param_2 + 1;
    }
    cVar1 = SBORROW8((long)pcVar10,(long)pcVar13);
    cVar2 = (long)pcVar10 - (long)pcVar13 < 0;
    param_2 = pcVar10;
  } while (pcVar10 != pcVar13);
  ppuStack_a8 = ppuStack_68;
  uStack_b0 = uStack_70;
  uStack_a0 = uStack_60;
  ppuStack_68 = (undefined **)0x0;
  uStack_60 = 0;
  uStack_70 = 0;
  bStack_98 = 1;
LAB_10b4df1f4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  if ((bStack_98 & 1) == 0) {
    *(undefined4 *)param_1 = 9;
    *(undefined1 *)(param_1 + 3) = 0;
    goto LAB_10b4df2c8;
  }
  pcVar13 = (char *)&uStack_b0;
  func_0x00010792d3e0();
  func_0x00010b4e0ce8();
  uVar12 = extraout_x11;
  pcVar10 = extraout_x10;
  if (cVar2 == cVar1) {
    uVar12 = extraout_x8;
    pcVar10 = pcVar13;
  }
  FUN_10b4d8768(&uStack_d0,pcVar10,uVar12,1);
  if ((bStack_b8 & 1) == 0) {
LAB_10b4df2b4:
    uVar8 = 10;
LAB_10b4df2b8:
    *(undefined4 *)param_1 = uVar8;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x00010b4e0dfc();
    cVar2 = pcVar10[0x17];
    pcVar13 = *(char **)pcVar10;
    pcVar6 = pcVar10;
    func_0x00010b4e0dfc();
    cVar2 = cVar2 < '\0';
    cVar1 = '\0';
    if (!(bool)cVar2) {
      pcVar13 = pcVar10;
    }
    func_0x00010b4e0ce8();
    lVar9 = extraout_x11_00;
    pcVar10 = extraout_x10_00;
    if (cVar2 == cVar1) {
      lVar9 = extraout_x8_00;
      pcVar10 = pcVar6;
    }
    pcVar10 = pcVar10 + lVar9;
    while( true ) {
      cVar1 = SBORROW8((long)pcVar13,(long)pcVar10);
      cVar2 = (long)pcVar13 - (long)pcVar10 < 0;
      pcVar11 = pcVar10;
      if (pcVar13 == pcVar10) break;
      pcVar6 = (char *)(long)*pcVar13;
      FUN_10b4e095c();
      pcVar11 = pcVar13;
      if (((ulong)pcVar6 & 1) != 0) break;
      pcVar13 = pcVar13 + 1;
    }
    func_0x00010b4e0dfc();
    func_0x00010b4e0ce8();
    lVar9 = extraout_x11_01;
    pcVar13 = extraout_x10_01;
    if (cVar2 == cVar1) {
      lVar9 = extraout_x8_01;
      pcVar13 = pcVar6;
    }
    pcVar13 = pcVar13 + lVar9;
    cVar1 = SBORROW8((long)pcVar13,(long)pcVar11);
    cVar2 = (long)pcVar13 - (long)pcVar11 < 0;
    if (pcVar13 != pcVar11) goto LAB_10b4df2b4;
    func_0x00010b4e0dfc();
    func_0x00010b4e0ce8();
    uVar12 = extraout_x11_02;
    pcVar13 = extraout_x10_02;
    if (cVar2 == cVar1) {
      uVar12 = extraout_x8_02;
      pcVar13 = pcVar6;
    }
    FUN_10b4da1f8(aiStack_58,pcVar13,uVar12);
    if ((bStack_48 & 1) == 0) {
      if (ppuStack_50 != &PTR_PTR_110cf12d8 || aiStack_58[0] != 3) {
        func_0x00010b4e0dfc();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,pcVar13);
        func_0x00010b4e0f28();
        goto LAB_10b4df2c0;
      }
      uVar8 = 6;
      goto LAB_10b4df2b8;
    }
    FUN_10b4da128(&uStack_70,aiStack_58);
    param_1[1] = ppuStack_68;
    *param_1 = uStack_70;
    param_1[2] = uStack_60;
    ppuStack_68 = (undefined **)0x0;
    uStack_60 = 0;
    uStack_70 = 0;
    func_0x00010b4e0f28();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  }
LAB_10b4df2c0:
  func_0x00010792d540(&uStack_d0);
LAB_10b4df2c8:
  func_0x00010792d540(&uStack_b0);
  return;
}



/* Entry: 10b4df3e0; end: 10b4df437;  */

void FUN_10b4df3e0(undefined4 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_30;
  undefined4 uStack_28;
  
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    return;
  }
  uStack_28 = *param_1;
  ppuStack_30 = &PTR_FUN_110cf1f90;
  FUN_10b4ddd9c(&ppuStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4df42c);
  (*pcVar1)();
}



/* Entry: 10b4df438; end: 10b4df5ab;  */

ulong FUN_10b4df438(ulong param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong extraout_x8;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  uint unaff_w20;
  ulong *puVar7;
  long lVar8;
  ulong *puStack_48;
  
  func_0x00010b4e0db4();
  __ZNSt3__16locale7classicEv();
  func_0x00010b4e0e78();
  func_0x00010b4db0a4();
  if ((int)param_1 == 0) {
    func_0x00010b4e0c5c();
    if ((((!(bool)in_ZR) &&
         ((bVar1 = unaff_w20 == 0x3f, 0x3f < unaff_w20 || (func_0x00010b4e0e3c(), bVar1)))) &&
        ((func_0x00010b4e0cfc(), unaff_w20 != 0x5c || ((param_1 & 1) == 0)))) &&
       (*(char *)(unaff_x19 + 0x1e0) != '\x01')) {
LAB_10b4df4d0:
      func_0x00010b4e0e68();
      uVar6 = 0xd;
      uVar5 = extraout_x8;
      goto LAB_10b4df594;
    }
    puVar3 = (ulong *)(unaff_x19 + 0x1e8);
    if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
      if (*(long *)(unaff_x19 + 0x1f0) != 0) {
        puVar7 = (ulong *)*puVar3;
        goto LAB_10b4df4a8;
      }
    }
    else {
      puVar7 = puVar3;
      if (*(char *)(unaff_x19 + 0x1ff) != '\0') {
LAB_10b4df4a8:
        puStack_48 = (ulong *)0x0;
        puVar2 = puVar7;
        _strtoul(puVar7,&puStack_48,10);
        if (puStack_48 == puVar7 || (ulong *)0xfffe < puVar2) goto LAB_10b4df4d0;
        lVar8 = (long)*(char *)(unaff_x19 + 0x11f);
        if (lVar8 < 0) {
          lVar4 = *(long *)(unaff_x19 + 0x108);
          lVar8 = *(long *)(unaff_x19 + 0x110);
        }
        else {
          lVar4 = unaff_x19 + 0x108;
        }
        if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
          puVar3 = (ulong *)*puVar3;
        }
        puStack_48 = (ulong *)0x0;
        _strtol(puVar3,&puStack_48,10);
        FUN_10b4e1244(lVar4,lVar8,(uint)puVar3 & 0xffff);
        if ((int)lVar4 == 0) {
          *(short *)(unaff_x19 + 0x170) = (short)puVar3;
          *(undefined1 *)(unaff_x19 + 0x172) = 1;
        }
        else if (*(char *)(unaff_x19 + 0x172) == '\x01') {
          *(undefined1 *)(unaff_x19 + 0x172) = 0;
        }
        func_0x00010b4e0eec();
      }
    }
    if ((*(byte *)(unaff_x19 + 0x1e0) & 1) != 0) {
      uVar6 = 0;
      uVar5 = 0x100000000;
      goto LAB_10b4df594;
    }
    func_0x00010b4e0d80(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x00010b4e0f08();
  }
  else {
    func_0x00010b4e0d94();
  }
  uVar5 = 0x100000000;
  uVar6 = 1;
LAB_10b4df594:
  return uVar5 | uVar6;
}



/* Entry: 10b4df5ac; end: 10b4df717;  */

undefined8 FUN_10b4df5ac(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  ulong uVar4;
  
  uVar4 = param_1 + 0x108;
  func_0x00010b4e0d64();
  uVar1 = uVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  if (param_2 != 0x2f) {
    if (param_2 != 0x5c) {
      if (*(char *)(param_1 + 0x100) != '\x01') {
LAB_10b4df6e4:
        func_0x00010b4e0d70();
        if (extraout_x8_00 != *(long *)(param_1 + 0x18)) {
          func_0x00010b4e0d80();
          return 0x100000001;
        }
        return 0x100000002;
      }
      func_0x00010b4e0cc8();
      func_0x00010b4e0d64();
      func_0x000107c27cf4();
      if ((int)uVar1 == 0) goto LAB_10b4df6e4;
      func_0x00010b4e0e18();
      if (uVar1 == extraout_x8 + extraout_x9) {
        func_0x00010b4e0cc8();
        func_0x00010b4e0c24();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c34();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c90();
        return 0x100000001;
      }
      if (param_2 == 0x23) {
        func_0x00010b4e0cc8();
        func_0x00010b4e0c24();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c34();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c90();
        func_0x00010b4e0e0c();
        func_0x00010b4e0d24();
        func_0x00010b4e0d1c();
        uVar3 = 0x14;
      }
      else {
        if (param_2 != 0x3f) {
          FUN_10b4df718();
          if ((uVar1 & 1) == 0) {
            func_0x00010b4e0cc8();
            func_0x00010b4e0c24();
            func_0x00010b4e0cc8();
            func_0x00010b4e0c34();
            lVar2 = (long)*(char *)(param_1 + 0x11f);
            if (lVar2 < 0) {
              uVar4 = *(ulong *)(param_1 + 0x108);
              lVar2 = *(long *)(param_1 + 0x110);
            }
            FUN_10b4df7b8(uVar4,lVar2,param_1 + 0x178);
          }
          else {
            func_0x00010b4e0d40();
          }
          goto LAB_10b4df6e4;
        }
        func_0x00010b4e0cc8();
        func_0x00010b4e0c24();
        func_0x00010b4e0cc8();
        func_0x00010b4e0c34();
        func_0x00010b4e0e0c();
        func_0x00010b4e0d5c(param_1 + 400);
        func_0x00010b4e0d1c();
        uVar3 = 0x13;
      }
      goto LAB_10b4df5f0;
    }
    func_0x00010b4e0d40();
  }
  uVar3 = 0xe;
LAB_10b4df5f0:
  *(undefined4 *)(param_1 + 0x1d8) = uVar3;
  return 0x100000001;
}



/* Entry: 10b4df718; end: 10b4df7b7;  */

uint FUN_10b4df718(char *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  
  if (1 < (long)param_2 - (long)param_1) {
    lVar5 = (long)*param_1;
    pcVar3 = param_1;
    __ZNSt3__16locale7classicEv();
    func_0x00010b4de4d0(lVar5,pcVar3);
    if ((int)lVar5 != 0) {
      cVar1 = param_1[1];
      uVar4 = (uint)(cVar1 == ':');
      if (cVar1 == '|') {
        uVar4 = 1;
      }
      else if (cVar1 != ':') goto LAB_10b4df7a8;
      if ((byte *)(param_1 + 2) != param_2) {
        uVar2 = (byte)param_1[2] - 0x23;
        uVar4 = 0;
        if (uVar2 < 0x3a) {
          uVar4 = (uint)(0x200000010001001 >> ((ulong)uVar2 & 0x3f));
        }
      }
      goto LAB_10b4df7a8;
    }
  }
  uVar4 = 0;
LAB_10b4df7a8:
  return uVar4 & 1;
}



/* Entry: 10b4df7b8; end: 10b4df8e7;  */

void FUN_10b4df7b8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  
  if (*param_3 == param_3[1]) {
    return;
  }
  func_0x000107c27944(param_1,param_2,&UNK_10f774a2f,4);
  if (((int)param_1 != 0) && (puVar2 = (ulong *)*param_3, param_3[1] - (long)puVar2 == 0x18)) {
    uVar3 = (ulong)*(char *)((long)puVar2 + 0x17);
    if ((long)uVar3 < 0) {
      uVar3 = puVar2[1];
      puVar2 = (ulong *)*puVar2;
    }
    FUN_10b4df8e8(puVar2,uVar3);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
  }
  func_0x00010002b82c(param_3,param_3[1] + -0x18);
  lVar1 = param_3[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c60ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4df8e8; end: 10b4df8ef;  */

uint FUN_10b4df8e8(char *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  
  if (1 < (long)(param_1 + param_2) - (long)param_1) {
    lVar5 = (long)*param_1;
    pcVar3 = param_1;
    __ZNSt3__16locale7classicEv();
    func_0x00010b4de4d0(lVar5,pcVar3);
    if ((int)lVar5 != 0) {
      cVar1 = param_1[1];
      uVar4 = (uint)(cVar1 == ':');
      if (cVar1 == '|') {
        uVar4 = 1;
      }
      else if (cVar1 != ':') goto LAB_10b4df7a8;
      if (param_1 + 2 != param_1 + param_2) {
        uVar2 = (byte)param_1[2] - 0x23;
        uVar4 = 0;
        if (uVar2 < 0x3a) {
          uVar4 = (uint)(0x200000010001001 >> ((ulong)uVar2 & 0x3f));
        }
      }
      goto LAB_10b4df7a8;
    }
  }
  uVar4 = 0;
LAB_10b4df7a8:
  return uVar4 & 1;
}



/* Entry: 10b4df8f0; end: 10b4dfa83;  */

ulong FUN_10b4df8f0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_50 [3];
  byte bStack_38;
  
  iVar1 = (int)auStack_50;
  if ((*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x20)) ||
     ((param_2 - 0x23U < 0x3a &&
      ((1L << ((ulong)(param_2 - 0x23U) & 0x3f) & 0x200000010001001U) != 0)))) {
    if (*(long *)(param_1 + 0x28) != *(long *)(param_1 + 0x18)) {
      func_0x00010b4e0d80();
    }
    if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
      lVar3 = (long)*(char *)(param_1 + 0x1ff);
      if (lVar3 < 0) {
        lVar2 = *(long *)(param_1 + 0x1e8);
        lVar3 = *(long *)(param_1 + 0x1f0);
      }
      else {
        lVar2 = param_1 + 0x1e8;
      }
      FUN_10b4df8e8(lVar2,lVar3);
      if ((int)lVar2 == 0) goto LAB_10b4df988;
      uVar5 = 1;
      *(undefined1 *)(param_1 + 0x1d1) = 1;
      *(undefined4 *)(param_1 + 0x1d8) = 0x11;
LAB_10b4dfa28:
      uVar4 = 0x100000000;
      goto LAB_10b4dfa64;
    }
LAB_10b4df988:
    if (*(char *)(param_1 + 0x1ff) < '\0') {
      if (*(long *)(param_1 + 0x1f0) == 0) goto LAB_10b4dfa04;
    }
    else if (*(char *)(param_1 + 0x1ff) == '\0') {
LAB_10b4dfa04:
      auStack_50[0] = 0;
      auStack_50[1] = 0;
      auStack_50[2] = 0;
      func_0x000107c27b94(param_1 + 0x150,auStack_50);
      func_0x00010b4e0d14();
      if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
        func_0x00010b4e0f08();
        goto LAB_10b4dfa5c;
      }
      uVar5 = 0;
      goto LAB_10b4dfa28;
    }
    func_0x00010b4e0cfc();
    func_0x00010b4e0da0();
    FUN_10b4def80();
    if ((bStack_38 & 1) == 0) {
      uVar4 = 0;
      uVar5 = auStack_50[0] & 0xffffffff;
    }
    else {
      func_0x00010b4e0df4();
      func_0x000107c27cf4(auStack_50,&DAT_10f3df6e2);
      if (iVar1 != 0) {
        func_0x00010b4e0df4();
        func_0x000107c27fa8(auStack_50);
      }
      func_0x00010b4e0df4();
      func_0x00010b4e0dcc();
      if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
        func_0x00010b4e0eec();
        func_0x00010b4e0f08();
        func_0x00010b4e0e04();
        goto LAB_10b4dfa5c;
      }
      uVar5 = 0;
      uVar4 = 0x100000000;
    }
    func_0x00010b4e0e04();
  }
  else {
    func_0x00010b4e0edc();
LAB_10b4dfa5c:
    uVar4 = 0x100000000;
    uVar5 = 1;
  }
LAB_10b4dfa64:
  return uVar4 | uVar5;
}



/* Entry: 10b4dfa84; end: 10b4dfb97;  */

ulong FUN_10b4dfa84(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long lVar5;
  long lVar6;
  
  func_0x00010b4e0db4();
  lVar5 = *(long *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x18);
  iVar1 = (int)param_1 + 0x108;
  func_0x00010b4e0f48();
  if (iVar1 == 0) {
    if ((unaff_w20 == 0x3f) && ((*(byte *)(unaff_x19 + 0x1e0) & 1) == 0)) {
      func_0x00010b4e0e0c();
      func_0x00010b4e0d5c(unaff_x19 + 400);
      func_0x00010b4e0d1c();
      uVar2 = 0x13;
    }
    else {
      if ((unaff_w20 != 0x23) || ((*(byte *)(unaff_x19 + 0x1e0) & 1) != 0)) {
        lVar4 = *(long *)(unaff_x19 + 0x28);
        if (lVar4 != *(long *)(unaff_x19 + 0x18) + *(long *)(unaff_x19 + 0x20)) {
          *(undefined4 *)(unaff_x19 + 0x1d8) = 0x11;
          uVar3 = 1;
          if (unaff_w20 != 0x2f) {
            uVar3 = 2;
          }
          if (unaff_w20 == 0x2f || lVar5 == lVar6) goto LAB_10b4dfb7c;
          goto LAB_10b4dfb74;
        }
        goto LAB_10b4dfb78;
      }
      func_0x00010b4e0e0c();
      func_0x00010b4e0d24();
      func_0x00010b4e0d1c();
      uVar2 = 0x14;
    }
    *(undefined4 *)(unaff_x19 + 0x1d8) = uVar2;
  }
  else {
    if (unaff_w20 == 0x5c) {
      uVar3 = 1;
      *(undefined1 *)(unaff_x19 + 0x1d1) = 1;
      *(undefined4 *)(unaff_x19 + 0x1d8) = 0x11;
      goto LAB_10b4dfb7c;
    }
    *(undefined4 *)(unaff_x19 + 0x1d8) = 0x11;
    uVar3 = 1;
    if (unaff_w20 != 0x2f) {
      uVar3 = 2;
    }
    if (unaff_w20 == 0x2f || lVar5 == lVar6) goto LAB_10b4dfb7c;
    lVar4 = *(long *)(unaff_x19 + 0x28);
LAB_10b4dfb74:
    *(long *)(unaff_x19 + 0x28) = lVar4 + -1;
  }
LAB_10b4dfb78:
  uVar3 = 1;
LAB_10b4dfb7c:
  return uVar3 | 0x100000000;
}



/* Entry: 10b4dfb98; end: 10b4e04a3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10b4dfb98(ulong *******param_1,int param_2)

{
  long lVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  undefined4 uVar11;
  ulong *****pppppuVar12;
  long extraout_x8;
  long unaff_x19;
  int iVar13;
  ulong unaff_x20;
  ulong *******pppppppuVar14;
  ulong uVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  ulong uVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuStack_f0;
  ulong *******pppppppuStack_e8;
  undefined8 uStack_e0;
  ulong *******pppppppuStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  ulong *******pppppppuStack_78;
  ulong *******pppppppuStack_70;
  
  func_0x00010b4e0db4();
  iVar13 = (int)unaff_x20;
  if (((param_2 != 0x2f && param_1[5] != (ulong ******)((long)param_1[3] + (long)param_1[4])) &&
      ((func_0x00010b4e0cfc(), iVar13 != 0x5c || (((ulong)param_1 & 1) == 0)))) &&
     (((*(byte *)(unaff_x19 + 0x1e0) & 1) != 0 || ((iVar13 != 0x3f && (iVar13 != 0x23)))))) {
    FUN_10b4e055c();
    if ((iVar13 != 0x25) && ((unaff_x20 & 1) == 0)) {
      func_0x00010b4e0d40();
    }
    FUN_10b4dc078(&pppppppuStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pppppppuStack_90,&pppppppuStack_f0);
    func_0x000107c27fc4(unaff_x19 + 0x1e8,&pppppppuStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
    func_0x00010b4e0d54();
    return 0x100000001;
  }
  uVar18 = unaff_x19 + 0x108;
  func_0x00010b4e0ee4();
  if ((iVar13 == 0x5c) && ((int)param_1 != 0)) {
    func_0x00010b4e0d40();
  }
  pppppppuVar7 = (ulong *******)(unaff_x19 + 0x1e8);
  pppppppuStack_88 = (ulong *******)(long)*(char *)(unaff_x19 + 0x1ff);
  pppppppuStack_90 = pppppppuVar7;
  if ((long)pppppppuStack_88 < 0) {
    pppppppuStack_88 = *(ulong ********)(unaff_x19 + 0x1f0);
    pppppppuStack_90 = *(ulong ********)(unaff_x19 + 0x1e8);
  }
  pppppppuVar14 = (ulong *******)&pppppppuStack_f0;
  func_0x00010b4e0e84();
  func_0x000107c27958();
  pppppppuVar19 = pppppppuStack_f0;
  if (-1 < (long)uStack_e0._7_1_) {
    pppppppuVar19 = pppppppuVar14;
  }
  pppppppuVar8 = pppppppuStack_e8;
  if (-1 < (long)uStack_e0) {
    pppppppuVar8 = (ulong *******)(long)uStack_e0._7_1_;
  }
  for (; pppppppuVar8 != (ulong *******)0x0; pppppppuVar8 = (ulong *******)((long)pppppppuVar8 + -1)
      ) {
    pppppppuVar14 = (ulong *******)(long)*(char *)pppppppuVar19;
    __ZNSt3__16locale7classicEv();
    pppppppuVar6 = pppppppuVar14;
    func_0x00010530d5e8(pppppppuVar14,param_1);
    *(char *)pppppppuVar19 = (char)pppppppuVar6;
    pppppppuVar19 = (ulong *******)((long)pppppppuVar19 + 1);
    param_1 = pppppppuVar6;
  }
  func_0x00010b4e0e60();
  if (((((ulong)param_1 & 1) == 0) && (func_0x00010b4e0e60(), ((ulong)param_1 & 1) == 0)) &&
     (func_0x00010b4e0e60(), ((ulong)param_1 & 1) == 0)) {
    func_0x00010b4e0e60();
    func_0x00010b4e0d54();
    if (((ulong)param_1 & 1) != 0) goto LAB_10b4dfc94;
    pppppppuVar14 = (ulong *******)(long)*(char *)(unaff_x19 + 0x1ff);
    pppppppuVar8 = pppppppuVar7;
    if ((long)pppppppuVar14 < 0) {
      pppppppuVar14 = *(ulong ********)(unaff_x19 + 0x1f0);
      pppppppuVar8 = *(ulong ********)(unaff_x19 + 0x1e8);
    }
    FUN_10b4e04a4();
    uVar4 = iVar13 == 0x2f;
    if (((!(bool)uVar4) && ((int)pppppppuVar8 != 0)) &&
       ((func_0x00010b4e0ee4(), iVar13 != 0x5c || (uVar4 = true, ((ulong)pppppppuVar8 & 1) == 0))))
    goto LAB_10b4dfcc8;
    pppppppuVar14 = (ulong *******)(long)*(char *)(unaff_x19 + 0x1ff);
    pppppppuVar8 = pppppppuVar7;
    if ((long)pppppppuVar14 < 0) {
      pppppppuVar14 = *(ulong ********)(unaff_x19 + 0x1f0);
      pppppppuVar8 = *(ulong ********)(unaff_x19 + 0x1e8);
    }
    FUN_10b4e04a4();
    if (((ulong)pppppppuVar8 & 1) == 0) {
      func_0x00010b4e0d64();
      uVar15 = uVar18;
      func_0x000107c27cf4();
      if (((int)uVar15 != 0) &&
         (uVar4 = *(long *)(unaff_x19 + 0x178) == *(long *)(unaff_x19 + 0x180), (bool)uVar4)) {
        lVar17 = (long)*(char *)(unaff_x19 + 0x1ff);
        pppppppuVar14 = pppppppuVar7;
        if (lVar17 < 0) {
          lVar17 = *(long *)(unaff_x19 + 0x1f0);
          pppppppuVar14 = *(ulong ********)(unaff_x19 + 0x1e8);
        }
        FUN_10b4df8e8(pppppppuVar14,lVar17);
        if ((int)pppppppuVar14 != 0) {
          uVar4 = *(char *)(unaff_x19 + 0x168) == '\x01';
          if ((bool)uVar4) {
            func_0x0001072e787c(unaff_x19 + 0x150);
            func_0x00010b4e0ea8();
            if (extraout_x8 != 0) goto LAB_10b4e0384;
          }
          else {
LAB_10b4e0384:
            func_0x00010b4e0d40();
            pppppppuStack_f0 = (ulong *******)0x0;
            pppppppuStack_e8 = (ulong *******)0x0;
            uStack_e0 = (ulong *******)0x0;
            func_0x00010b4e0ec8(unaff_x19 + 0x150);
            func_0x00010b4e0d54();
          }
          pppppppuVar14 = pppppppuVar7;
          if (*(char *)(unaff_x19 + 0x1ff) < '\0') {
            pppppppuVar14 = (ulong *******)*pppppppuVar7;
          }
          *(undefined1 *)((long)pppppppuVar14 + 1) = 0x3a;
        }
      }
      pppppppuVar14 = pppppppuVar7;
      func_0x000107c281e8(unaff_x19 + 0x178);
    }
  }
  else {
    func_0x00010b4e0d54();
    param_1 = pppppppuVar14;
LAB_10b4dfc94:
    pppppppuVar14 = (ulong *******)(long)*(char *)(unaff_x19 + 0x11f);
    uVar15 = uVar18;
    if ((long)pppppppuVar14 < 0) {
      pppppppuVar14 = *(ulong ********)(unaff_x19 + 0x110);
      uVar15 = *(ulong *)(unaff_x19 + 0x108);
    }
    FUN_10b4df7b8(uVar15,pppppppuVar14,unaff_x19 + 0x178);
    uVar4 = iVar13 == 0x2f;
    if ((!(bool)uVar4) &&
       ((func_0x00010b4e0ee4(), iVar13 != 0x5c || (uVar4 = 1, (uVar15 & 1) == 0)))) {
LAB_10b4dfcc8:
      uVar4 = iVar13 == 0x5c;
      func_0x000107c2d138(unaff_x19 + 0x178);
    }
  }
  func_0x000107c27fa8(pppppppuVar7);
  func_0x00010b4e0d64();
  func_0x000107c27cf4();
  if ((int)uVar18 == 0) goto LAB_10b4e02b8;
  func_0x00010b4e0c5c();
  if (((!(bool)uVar4) && (iVar13 != 0x3f)) && (iVar13 != 0x23)) {
    return 0x100000001;
  }
  pppppppuVar8 = *(ulong ********)(unaff_x19 + 0x178);
  lVar17 = *(long *)(unaff_x19 + 0x180);
  pppppppuStack_e8 = (ulong *******)0x0;
  pppppppuStack_f0 = (ulong *******)0x0;
  pppppppuStack_d8 = (ulong *******)0x0;
  uStack_e0 = (ulong *******)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  pppppppuVar7 = (ulong *******)&pppppppuStack_f0;
  func_0x00010b203bac();
  pppppppuVar6 = (ulong *******)((lVar17 - (long)pppppppuVar8) / 0x18);
  uVar18 = (long)pppppppuVar6 - (long)pppppppuVar7;
  if (pppppppuVar7 <= pppppppuVar6 && uVar18 != 0) {
    if ((long)uStack_e0 - (long)pppppppuStack_e8 == 0) {
      uVar18 = uVar18 + 1;
    }
    pppppppuVar19 = (ulong *******)(uVar18 / 0xaa);
    bVar5 = uVar18 % 0xaa != 0;
    uVar18 = (ulong)bVar5;
    pppppppuVar9 = pppppppuVar19;
    if (bVar5) {
      pppppppuVar9 = (ulong *******)((long)pppppppuVar19 + 1);
    }
    pppppppuVar10 = (ulong *******)(uStack_d0 / 0xaa);
    pppppppuVar16 = pppppppuVar9;
    if (pppppppuVar10 <= pppppppuVar9) {
      pppppppuVar16 = pppppppuVar10;
    }
    if (pppppppuVar10 < pppppppuVar9) {
      uVar15 = (long)pppppppuVar9 - (long)pppppppuVar16;
      lVar17 = (long)uStack_e0 - (long)pppppppuStack_e8 >> 3;
      if ((ulong)(((long)pppppppuStack_d8 - (long)pppppppuStack_f0 >> 3) - lVar17) < uVar15) {
        pppppppuVar7 = (ulong *******)&pppppppuStack_d8;
        pppppppuVar14 = (ulong *******)((long)pppppppuStack_d8 - (long)pppppppuStack_f0 >> 2);
        if (pppppppuVar14 <= (ulong *******)(uVar15 + lVar17)) {
          pppppppuVar14 = (ulong *******)(uVar15 + lVar17);
        }
        pppppppuStack_a0 = pppppppuVar7;
        if (pppppppuVar14 == (ulong *******)0x0) {
          pppppppuStack_c0 = (ulong *******)0x0;
        }
        else {
          FUN_10b203c2c();
          pppppppuStack_c0 = pppppppuVar7;
        }
        pppppppuVar19 = (ulong *******)((long)pppppppuVar16 * -0xaa);
        pppppppuStack_b8 = pppppppuStack_c0 + (lVar17 - (long)pppppppuVar16);
        pppppppuStack_a8 = pppppppuStack_c0 + (long)pppppppuVar14;
        pppppppuStack_b0 = pppppppuStack_b8;
        pppppppuVar7 = pppppppuStack_c0;
        for (; pppppppuVar9 = pppppppuStack_e8, param_1 = uStack_e0,
            pppppppuVar10 = pppppppuStack_a0, uVar15 != 0; uVar15 = uVar15 - 1) {
          func_0x00010b4e0ec0();
          pppppppuVar9 = (ulong *******)&pppppppuStack_c0;
          pppppppuVar14 = (ulong *******)&pppppppuStack_90;
          pppppppuStack_90 = pppppppuVar7;
          func_0x00010a5bafac();
          pppppppuVar7 = pppppppuVar9;
        }
        for (; pppppppuStack_e8 = pppppppuVar9, uStack_e0 = param_1,
            pppppppuStack_a0 = pppppppuVar10, pppppppuVar16 != (ulong *******)0x0;
            pppppppuVar16 = (ulong *******)((long)pppppppuVar16 + -1)) {
          if (pppppppuStack_b0 == pppppppuStack_a8) {
            if (pppppppuStack_b8 < pppppppuStack_c0 ||
                (long)pppppppuStack_b8 - (long)pppppppuStack_c0 == 0) {
              uVar18 = (long)pppppppuStack_b0 - (long)pppppppuStack_c0 >> 2;
              if ((long)pppppppuStack_b0 - (long)pppppppuStack_c0 == 0) {
                uVar18 = 1;
              }
              uVar15 = uVar18;
              pppppppuStack_70 = pppppppuVar10;
              FUN_10b203c2c();
              pppppppuStack_88 = pppppppuVar10 + (uVar18 >> 2);
              pppppppuStack_78 = pppppppuVar10 + uVar15;
              pppppppuVar14 = pppppppuStack_b8;
              pppppppuStack_90 = pppppppuVar10;
              pppppppuStack_80 = pppppppuStack_88;
              func_0x00010b203bf8(&pppppppuStack_90,pppppppuStack_b8,pppppppuStack_b0);
              pppppppuVar3 = pppppppuStack_a8;
              pppppppuVar2 = pppppppuStack_b0;
              pppppppuVar10 = pppppppuStack_b8;
              pppppppuVar7 = pppppppuStack_c0;
              pppppppuStack_b8 = pppppppuStack_88;
              pppppppuStack_c0 = pppppppuStack_90;
              pppppppuStack_a8 = pppppppuStack_78;
              pppppppuStack_b0 = pppppppuStack_80;
              pppppppuStack_88 = pppppppuVar10;
              pppppppuStack_90 = pppppppuVar7;
              pppppppuStack_78 = pppppppuVar3;
              pppppppuStack_80 = pppppppuVar2;
              FUN_10b203c6c(&pppppppuStack_90);
            }
            else {
              lVar17 = (((long)pppppppuStack_b8 - (long)pppppppuStack_c0 >> 3) + 1) / -2;
              pppppppuVar7 = pppppppuStack_b8 + lVar17;
              lVar1 = (long)pppppppuStack_b0 - (long)pppppppuStack_b8;
              if (lVar1 != 0) {
                _memmove(pppppppuVar7,pppppppuStack_b8,lVar1);
              }
              pppppppuStack_b0 = (ulong *******)((long)pppppppuVar7 + lVar1);
              pppppppuVar14 = pppppppuStack_b8;
              pppppppuStack_b8 = pppppppuStack_b8 + lVar17;
            }
          }
          *pppppppuStack_b0 = *pppppppuVar9;
          pppppppuVar9 = pppppppuStack_e8 + 1;
          param_1 = uStack_e0;
          pppppppuStack_b0 = pppppppuStack_b0 + 1;
          pppppppuVar10 = pppppppuStack_a0;
        }
        while (pppppppuVar10 = pppppppuStack_b8, pppppppuVar16 = pppppppuStack_c0,
              pppppppuVar9 = pppppppuStack_d8, pppppppuVar7 = uStack_e0, param_1 != pppppppuStack_e8
              ) {
          param_1 = param_1 + -1;
          pppppppuVar14 = param_1;
          func_0x000104c39f10(&pppppppuStack_c0);
        }
        pppppppuStack_c0 = pppppppuStack_f0;
        pppppppuStack_b8 = pppppppuStack_e8;
        pppppppuStack_e8 = pppppppuVar10;
        pppppppuStack_f0 = pppppppuVar16;
        pppppppuStack_d8 = pppppppuStack_a8;
        uStack_e0 = pppppppuStack_b0;
        pppppppuStack_a8 = pppppppuVar9;
        pppppppuStack_b0 = pppppppuVar7;
        uStack_d0 = uStack_d0 + (long)pppppppuVar19;
        FUN_10b203c6c(&pppppppuStack_c0);
      }
      else {
        lVar17 = uVar18 - (long)pppppppuVar16;
        for (; lVar17 + (long)pppppppuVar19 != 0;
            pppppppuVar19 = (ulong *******)((long)pppppppuVar19 + -1)) {
          if (pppppppuStack_d8 == uStack_e0) {
            pppppppuVar16 = (ulong *******)(uVar18 + (long)pppppppuVar19);
            break;
          }
          func_0x00010b4e0ec0();
          pppppppuStack_90 = pppppppuVar7;
          func_0x00010b4e0e84();
          func_0x000104c39c0c();
        }
        lVar17 = lVar17 + (long)pppppppuVar19;
        pppppppuVar19 = (ulong *******)0xa9;
        while (lVar17 != 0) {
          func_0x00010b4e0ec0();
          pppppppuStack_90 = pppppppuVar7;
          func_0x00010b4e0e84();
          func_0x000104c39d88();
          lVar17 = lVar17 + -1;
          lVar1 = 0xa9;
          if ((long)uStack_e0 - (long)pppppppuStack_e8 != 8) {
            lVar1 = 0xaa;
          }
          uStack_d0 = lVar1 + uStack_d0;
        }
        uStack_d0 = uStack_d0 + (long)pppppppuVar16 * -0xaa;
        param_1 = (ulong *******)0x0;
        for (; pppppppuVar16 != (ulong *******)0x0;
            pppppppuVar16 = (ulong *******)((long)pppppppuVar16 + -1)) {
          func_0x00010b4e0f14();
          func_0x00010b4e0e84();
          func_0x000104c39a90();
        }
      }
    }
    else {
      uStack_d0 = uStack_d0 + (long)pppppppuVar16 * -0xaa;
      for (; pppppppuVar16 != (ulong *******)0x0;
          pppppppuVar16 = (ulong *******)((long)pppppppuVar16 + -1)) {
        func_0x00010b4e0f14();
        func_0x00010b4e0e84();
        func_0x000104c39a90();
      }
    }
  }
  pppppppuVar7 = (ulong *******)&pppppppuStack_f0;
  func_0x00010b203a94();
  func_0x00010b4e0e2c();
  pppppppuStack_90 = pppppppuVar7;
  pppppppuStack_88 = pppppppuVar14;
  FUN_10b4e0ae0(&pppppppuStack_90);
  pppppppuVar14 = pppppppuStack_88;
  pppppppuVar7 = pppppppuStack_90;
  while (pppppppuVar9 = pppppppuVar19, param_1 != pppppppuVar14) {
    pppppppuVar19 = param_1;
    pppppppuVar16 = pppppppuVar14;
    if (pppppppuVar9 != pppppppuVar7) {
      pppppppuVar16 = (ulong *******)(*pppppppuVar9 + 0x1fe);
    }
    for (; pppppppuVar19 != pppppppuVar16; pppppppuVar19 = pppppppuVar19 + 3) {
      pppppppuVar6 = pppppppuVar8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      pppppppuVar8 = pppppppuVar8 + 3;
    }
    uStack_c8 = uStack_c8 + ((long)pppppppuVar16 - (long)param_1) / 0x18;
    param_1 = pppppppuVar14;
    pppppppuVar19 = pppppppuVar7;
    if (pppppppuVar9 != pppppppuVar7) {
      param_1 = (ulong *******)pppppppuVar9[1];
      pppppppuVar19 = pppppppuVar9 + 1;
    }
  }
  while (1 < uStack_c8) {
    pppppuVar12 = (ulong *****)
                  (long)*(char *)((long)pppppppuStack_e8[uStack_d0 / 0xaa] +
                                 (uStack_d0 % 0xaa) * 0x18 + 0x17);
    if ((long)pppppuVar12 < 0) {
      pppppuVar12 = pppppppuStack_e8[uStack_d0 / 0xaa][(uStack_d0 % 0xaa) * 3 + 1];
    }
    if (pppppuVar12 != (ulong *****)0x0) break;
    *(undefined1 *)(unaff_x19 + 0x1d1) = 1;
    func_0x00010a5c9344(&pppppppuStack_f0);
  }
  pppppppuVar7 = (ulong *******)&pppppppuStack_f0;
  func_0x00010b203a6c();
  func_0x00010b4e0e2c();
  if (pppppppuVar6 == (ulong *******)0x1) {
    uVar18 = 0;
  }
  else {
    uVar18 = ((long)pppppppuVar6 - (long)*pppppppuVar7) / 0x18 +
             ((long)pppppppuVar7 - (long)pppppppuVar9 >> 3) * 0xaa +
             (1 - (long)*pppppppuVar9) / -0x18;
  }
  lVar17 = *(long *)(unaff_x19 + 0x178);
  if ((ulong)((*(long *)(unaff_x19 + 0x188) - lVar17) / 0x18) < uVar18) {
    func_0x000107c3193c(unaff_x19 + 0x178);
    lVar17 = unaff_x19 + 0x178;
    func_0x000107c2794c(lVar17,uVar18);
    func_0x000107c27964(unaff_x19 + 0x178,lVar17);
LAB_10b4e0284:
    func_0x00010b4e0f34(unaff_x19 + 0x178);
    FUN_10b4e0a14();
  }
  else {
    if ((ulong)((*(long *)(unaff_x19 + 0x180) - lVar17) / 0x18) < uVar18) {
      pppppppuStack_88 = (ulong *******)0x1;
      pppppppuStack_90 = pppppppuVar9;
      FUN_10b4e0ae0(&pppppppuStack_90);
      FUN_10b4e0b58(&pppppppuStack_90,pppppppuVar9,1,pppppppuStack_90,pppppppuStack_88,lVar17);
      goto LAB_10b4e0284;
    }
    func_0x00010b4e0f34(&pppppppuStack_90);
    FUN_10b4e0b58();
    func_0x000107c278b4(unaff_x19 + 0x178,pppppppuStack_80);
  }
  func_0x000104c394e8(&pppppppuStack_f0);
LAB_10b4e02b8:
  if (iVar13 == 0x23) {
    pppppppuStack_f0 = (ulong *******)0x0;
    pppppppuStack_e8 = (ulong *******)0x0;
    uStack_e0 = (ulong *******)0x0;
    func_0x00010b4e0ec8(unaff_x19 + 0x1b0);
    func_0x00010b4e0d54();
    uVar11 = 0x14;
  }
  else {
    if (iVar13 != 0x3f) {
      return 0x100000001;
    }
    pppppppuStack_f0 = (ulong *******)0x0;
    pppppppuStack_e8 = (ulong *******)0x0;
    uStack_e0 = (ulong *******)0x0;
    func_0x00010b4e0ec8(unaff_x19 + 400);
    func_0x00010b4e0d54();
    uVar11 = 0x13;
  }
  *(undefined4 *)(unaff_x19 + 0x1d8) = uVar11;
  return 0x100000001;
}



/* Entry: 10b4e04a4; end: 10b4e055b;  */

char **** FUN_10b4e04a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char ****ppppcVar2;
  char ****ppppcVar3;
  char ***pppcStack_58;
  long lStack_50;
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppppcVar3 = &pppcStack_58;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c27958(ppppcVar3,&uStack_40);
  if (-1 < (long)cStack_41) {
    pppcStack_58 = (char ***)&pppcStack_58;
  }
  lVar1 = lStack_50;
  if (-1 < cStack_41) {
    lVar1 = (long)cStack_41;
  }
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    ppppcVar2 = (char ****)(long)*(char *)pppcStack_58;
    __ZNSt3__16locale7classicEv();
    func_0x00010530d5e8(ppppcVar2,ppppcVar3);
    *(char *)pppcStack_58 = (char)ppppcVar2;
    pppcStack_58 = (char ***)((long)pppcStack_58 + 1);
    ppppcVar3 = ppppcVar2;
  }
  ppppcVar3 = &pppcStack_58;
  func_0x000107c27cf4(ppppcVar3,&DAT_10f62a9de);
  if (((ulong)ppppcVar3 & 1) == 0) {
    ppppcVar3 = &pppcStack_58;
    func_0x000107c27cf4(ppppcVar3,&DAT_10f3a8abf);
  }
  else {
    ppppcVar3 = (char ****)0x1;
  }
  func_0x00010b4e0d1c();
  return ppppcVar3;
}



/* Entry: 10b4e055c; end: 10b4e05ab;  */

bool FUN_10b4e055c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uStack_21;
  
  uVar2 = param_1;
  __ZNSt3__16locale7classicEv();
  uVar3 = param_1;
  func_0x000108367ab0(param_1,uVar2);
  if ((uVar3 & 1) != 0) {
    return true;
  }
  puVar1 = &UNK_10f774a54;
  uStack_21 = (undefined1)param_1;
  func_0x000107c28364(&UNK_10f774a54,&UNK_10f774a67,&uStack_21);
  return puVar1 != &UNK_10f774a67;
}



/* Entry: 10b4e05ac; end: 10b4e06a7;  */

undefined8 FUN_10b4e05ac(ulong param_1,ulong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar4 = (int)param_2;
  if (iVar4 == 0x23) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010b4e0ed0();
    func_0x00010b4e0d04();
    uVar5 = 0x14;
LAB_10b4e0608:
    *(undefined4 *)(param_1 + 0x1d8) = uVar5;
    return 0x100000001;
  }
  bVar1 = iVar4 == 0x3f;
  if (bVar1) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27b94(param_1 + 400,&uStack_38);
    func_0x00010b4e0d04();
    uVar5 = 0x13;
    goto LAB_10b4e0608;
  }
  uVar3 = param_1;
  func_0x00010b4e0c5c();
  if (((bVar1) || (uVar3 = param_2, FUN_10b4e055c(), iVar4 == 0x25)) || (uVar2 = 0, (int)uVar3 != 0)
     ) {
    uVar2 = iVar4 == 0x25;
    if (!(bool)uVar2) goto LAB_10b4e064c;
    func_0x00010b4e0e18();
    FUN_10b4e06a8();
    if ((uVar3 & 1) != 0) goto LAB_10b4e064c;
  }
  func_0x00010b4e0d40();
LAB_10b4e064c:
  func_0x00010b4e0c5c();
  if ((bool)uVar2) {
    return 0x100000001;
  }
  FUN_10b4e08e0(&uStack_38,param_2,FUN_10b4e0924);
  func_0x00010b4e0cd0();
  func_0x00010b4e0dd8(*(undefined8 *)(param_1 + 0x178));
  func_0x00010b4e0d14();
  func_0x00010b4e0d04();
  return 0x100000001;
}



/* Entry: 10b4e06a8; end: 10b4e0727;  */

undefined8 FUN_10b4e06a8(char *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  
  if ((param_2 != 0) && (*param_1 == '%' && param_2 != 1)) {
    lVar4 = (long)param_1[1];
    pcVar2 = param_1;
    __ZNSt3__16locale7classicEv();
    FUN_10b4db070(lVar4,pcVar2);
    iVar1 = 0;
    if (param_2 != 2) {
      iVar1 = (int)lVar4;
    }
    if (iVar1 == 1) {
      uVar3 = (ulong)param_1[2];
      __ZNSt3__16locale7classicEv();
      FUN_10b4db070(uVar3,lVar4);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10b4e0728; end: 10b4e080f;  */

undefined8 FUN_10b4e0728(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long unaff_x19;
  int iVar3;
  ulong unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b4e0db4();
  bVar1 = param_2 == 0x23;
  if ((bVar1) && ((*(byte *)(unaff_x19 + 0x1e0) & 1) == 0)) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010b4e0ed0();
    func_0x00010b4e0d04();
    *(undefined4 *)(unaff_x19 + 0x1d8) = 0x14;
  }
  else {
    func_0x00010b4e0c5c();
    if (!bVar1) {
      iVar3 = (int)unaff_x20;
      if (0xa1 < (iVar3 - 0x7fU & 0xff)) {
        FUN_10b4de70c();
        iVar2 = (int)unaff_x20;
        if (((unaff_x20 & 1) == 0) && ((iVar3 != 0x27 || (func_0x00010b4e0cfc(), iVar2 == 0)))) {
          func_0x0001072e787c(unaff_x19 + 400);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
          return 0x100000001;
        }
      }
      FUN_10b4dc078(&uStack_38);
      func_0x00010b4e0cd0();
      func_0x0001072e787c(unaff_x19 + 400);
      func_0x00010b4e0dd8();
      func_0x00010b4e0d14();
      func_0x00010b4e0d04();
    }
  }
  return 0x100000001;
}



/* Entry: 10b4e0810; end: 10b4e0883;  */

undefined8 FUN_10b4e0810(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  if ((int)param_2 == 0) {
    func_0x00010b4e0d40();
  }
  else {
    FUN_10b4dc078(auStack_38,param_2,FUN_10b4dc258);
    func_0x00010b4e0cd0();
    func_0x0001072e787c(param_1 + 0x1b0);
    func_0x00010b4e0dd8();
    func_0x00010b4e0d14();
    func_0x00010b4e0d04();
  }
  return 0x100000001;
}



/* Entry: 10b4e0884; end: 10b4e08df;  */

uint FUN_10b4e0884(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = param_1;
  __ZNSt3__16locale7classicEv();
  func_0x000107c27f78();
  iVar3 = (int)param_1;
  if ((iVar3 < 0) || ((*(uint *)(*(long *)(lVar2 + 0x10) + (long)iVar3 * 4) >> 9 & 1) == 0)) {
    __ZNSt3__16locale7classicEv();
    func_0x000107c27f78();
    if (iVar3 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + (long)iVar3 * 4) >> 0xe & 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b4e08e0; end: 10b4e0923;  */

void FUN_10b4e08e0(undefined8 param_1,int param_2,code *param_3)

{
  (*param_3)();
  if (param_2 == 0) {
    func_0x000107527bd0(param_1,&stack0xffffffffffffffef,1);
  }
  else {
    func_0x000107527bd0(param_1,&stack0xffffffffffffffed,3);
  }
  return;
}



/* Entry: 10b4e0924; end: 10b4e0937;  */

bool FUN_10b4e0924(uint param_1)

{
  return (param_1 & 0xff) - 0x7f < 0xffffffa1;
}



/* Entry: 10b4e0938; end: 10b4e095b;  */

int FUN_10b4e0938(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_10b4dc258();
  if (param_1 == 0x27) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Entry: 10b4e095c; end: 10b4e099f;  */

bool FUN_10b4e095c(undefined1 param_1)

{
  undefined *puVar1;
  undefined1 uStack_11;
  
  puVar1 = &UNK_10e5b7434;
  uStack_11 = param_1;
  func_0x000107c28364(&UNK_10e5b7434,&DAT_10e5b7443,&uStack_11);
  return puVar1 != &DAT_10e5b7443;
}



/* Entry: 10b4e09a0; end: 10b4e09f3;  */

void FUN_10b4e09a0(undefined8 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_2 - 0x30;
  if (9 < uVar2) {
    if (param_2 - 0x61U < 6) {
      uVar2 = param_2 - 0x57;
    }
    else {
      if (5 < param_2 - 0x41U) {
        uVar1 = 0;
        *param_1 = 0;
        param_1[1] = &PTR_PTR_110cf13f0;
        goto LAB_10b4e09d8;
      }
      uVar2 = param_2 - 0x37;
    }
  }
  *(char *)param_1 = (char)uVar2;
  uVar1 = 1;
LAB_10b4e09d8:
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 10b4e09f4; end: 10b4e0a13;  */

void FUN_10b4e09f4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b4e0a14; end: 10b4e0adf;  */

void FUN_10b4e0a14(long param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  while (lStack_48 = lVar1, param_3 != param_5) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1,param_3);
    param_3 = param_3 + 0x18;
    if (param_3 - *param_2 == 0xff0) {
      param_2 = param_2 + 1;
      param_3 = *param_2;
    }
    lVar1 = lStack_48 + 0x18;
  }
  uStack_58 = 1;
  func_0x000107c2796c(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b4e0ae0; end: 10b4e0b57;  */

void FUN_10b4e0ae0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 != 0) {
    plVar3 = (long *)*param_1;
    uVar1 = (param_1[1] - *plVar3) / 0x18 + param_2;
    if ((long)uVar1 < 1) {
      uVar2 = (0xa9 - uVar1) / 0xaa;
      plVar3 = plVar3 + -uVar2;
      lVar4 = *plVar3 + (uVar2 * 0xaa - (0xa9 - uVar1)) * 0x18 + 0xfd8;
    }
    else {
      plVar3 = plVar3 + uVar1 / 0xaa;
      lVar4 = *plVar3 + (uVar1 % 0xaa) * 0x18;
    }
    *param_1 = (long)plVar3;
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 10b4e0b58; end: 10b4e0be7;  */

void FUN_10b4e0b58(undefined8 *param_1,long *param_2,long param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  puStack_38 = (undefined1 *)&uStack_40;
  lVar2 = param_3;
  uStack_40 = param_6;
  puVar1 = &uStack_40;
  if (param_2 != param_4) {
    lVar2 = *param_2;
    do {
      FUN_10b4e0be8(&puStack_38,param_3,lVar2 + 0xff0);
      param_2 = param_2 + 1;
      lVar2 = *param_2;
      param_3 = lVar2;
      puVar1 = (undefined8 *)puStack_38;
    } while (param_2 != param_4);
  }
  puStack_38 = (undefined1 *)puVar1;
  FUN_10b4e0be8(&puStack_38,lVar2,param_5);
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = uStack_40;
  return;
}



/* Entry: 10b4e0be8; end: 10b4e0c23;  */

void FUN_10b4e0be8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000104c352c0(param_2,param_3,*(undefined8 *)*param_1);
  *(undefined8 *)*param_1 = param_3;
  return;
}



/* Entry: 10b4e0c24; end: 10b4e0f8f;  */

void FUN_10b4e0c24(long param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = unaff_x19 + 0x150;
  cVar1 = *(char *)(unaff_x19 + 0x168);
  if (cVar1 != *(char *)(param_1 + 0x60)) {
    if (cVar1 != '\0') {
      if (*(char *)(unaff_x19 + 0x168) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        *(undefined1 *)(lVar2 + 0x18) = 0;
      }
      return;
    }
    func_0x000107c60c94();
    func_0x00010028b5dc();
    return;
  }
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )();
    return;
  }
  return;
}



/* Entry: 10b4e0f90; end: 10b4e1127;  */

ulong FUN_10b4e0f90(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011383d988 & 1) == 0) {
    param_1 = 0x11383d988;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      uStack_11c = 0x15;
      func_0x00010b4e1270(auStack_118,&UNK_10f774a68,&uStack_11c);
      FUN_10b4e128c(auStack_f8,&UNK_10f774a6c,&UNK_10dd62ad6);
      uStack_120 = 0x46;
      FUN_10b4e12a8(auStack_d8,&UNK_10f774a71,&uStack_120);
      uStack_124 = 0x50;
      func_0x00010b4e12c4(auStack_b8,&UNK_10f774a78,&uStack_124);
      uStack_128 = 0x1bb;
      func_0x00010b4e12e0(auStack_98,&UNK_10f774a7d,&uStack_128);
      uStack_12c = 0x50;
      func_0x00010b4e12fc(auStack_78,&UNK_10f774a83,&uStack_12c);
      uStack_130 = 0x1bb;
      func_0x00010b4e1270(auStack_58,&UNK_10f774a86,&uStack_130);
      param_2 = auStack_118;
      func_0x00010b4e1318(0x11383d970,param_2,7);
      lVar4 = 0xc0;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118 + lVar4);
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != -0x20);
      param_1 = 0x11383d988;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return 0x11383d970;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uStack_170 = param_1;
  puStack_168 = param_2;
  FUN_10b4e0f90();
  func_0x00010b4e15c8(&lStack_188,param_1);
  do {
    if (lStack_188 == lStack_180) {
      uVar3 = 0;
      uVar6 = 0;
      uVar2 = 0;
      uVar5 = 0;
LAB_10b4e11a0:
      FUN_10b4e16e4(&lStack_188);
      return (ulong)(uVar6 | uVar3 | uVar2 | uVar5);
    }
    func_0x00010b4e17bc();
    iVar1 = (int)&uStack_170;
    func_0x000107c27978();
    if (iVar1 == 0) {
      uVar6 = *(uint *)(lStack_188 + 0x18);
      uVar2 = uVar6 & 0xff000000;
      uVar3 = uVar6 & 0xff0000;
      uVar5 = uVar6 & 0xff00;
      uVar6 = uVar6 & 0xff;
      goto LAB_10b4e11a0;
    }
    lStack_188 = lStack_188 + 0x20;
  } while( true );
}



/* Entry: 10b4e1128; end: 10b4e11cb;  */

uint FUN_10b4e1128(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_2;
  FUN_10b4e0f90();
  func_0x00010b4e15c8(&lStack_58,param_1);
  do {
    if (lStack_58 == lStack_50) {
      uVar3 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar4 = 0;
LAB_10b4e11a0:
      FUN_10b4e16e4(&lStack_58);
      return uVar5 | uVar3 | uVar2 | uVar4;
    }
    func_0x00010b4e17bc();
    iVar1 = (int)&uStack_40;
    func_0x000107c27978();
    if (iVar1 == 0) {
      uVar5 = *(uint *)(lStack_58 + 0x18);
      uVar2 = uVar5 & 0xff000000;
      uVar3 = uVar5 & 0xff0000;
      uVar4 = uVar5 & 0xff00;
      uVar5 = uVar5 & 0xff;
      goto LAB_10b4e11a0;
    }
    lStack_58 = lStack_58 + 0x20;
  } while( true );
}



/* Entry: 10b4e11cc; end: 10b4e1243;  */

bool FUN_10b4e11cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10b4e0f90();
  func_0x00010b4e15c8(&lStack_48,param_1);
  for (; lVar2 = lStack_40, lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x20) {
    func_0x00010b4e17bc();
    iVar1 = (int)&uStack_30;
    func_0x000107c27978();
    lVar2 = lStack_48;
    if (iVar1 == 0) break;
  }
  FUN_10b4e16e4(&lStack_48);
  return lVar2 != lStack_40;
}



/* Entry: 10b4e1244; end: 10b4e128b;  */

uint FUN_10b4e1244(uint param_1,undefined8 param_2,uint param_3)

{
  FUN_10b4e1128();
  return (uint)(param_3 == (param_1 & 0xffff)) & param_1 >> 0x10;
}



/* Entry: 10b4e128c; end: 10b4e12a7;  */

void FUN_10b4e128c(long param_1)

{
  func_0x000107c278b8();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



/* Entry: 10b4e12a8; end: 10b4e1347;  */

void FUN_10b4e12a8(void)

{
  func_0x00010b4e1774();
  func_0x00010b4e1718();
  return;
}



/* Entry: 10b4e1348; end: 10b4e1393;  */

void FUN_10b4e1348(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010b4e1734();
    func_0x00010b4e17f4();
    FUN_10b4e13cc();
  }
  func_0x00010b4e17b4();
  return;
}



/* Entry: 10b4e1394; end: 10b4e13cb;  */

void FUN_10b4e1394(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1 + 2;
    FUN_10b4e1414();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
  }
  else {
    FUN_10b4e1400();
    plVar1 = param_1 + 2;
    func_0x00010b4e1454();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10b4e13cc; end: 10b4e13ff;  */

void FUN_10b4e13cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010b4e1454();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b4e1400; end: 10b4e1413;  */

void FUN_10b4e1400(void)

{
  func_0x000104bd47e8(&UNK_10f774a8a);
  FUN_10b4e1438();
  return;
}



/* Entry: 10b4e1414; end: 10b4e1437;  */

void FUN_10b4e1414(void)

{
  FUN_10b4e1438();
  return;
}



/* Entry: 10b4e1438; end: 10b4e1467;  */

void FUN_10b4e1438(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_10b4e1468();
  return;
}



/* Entry: 10b4e1468; end: 10b4e14b7;  */

void FUN_10b4e1468(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b4e174c();
  while (unaff_x21 != unaff_x19) {
    func_0x00010b4e17d4();
    func_0x00010b4e17e0();
  }
  func_0x00010b4e17ac();
  return;
}



/* Entry: 10b4e14b8; end: 10b4e1587;  */

void FUN_10b4e14b8(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b4e1588; end: 10b4e158f;  */

void FUN_10b4e1588(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b4e1590; end: 10b4e15ff;  */

void FUN_10b4e1590(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b4e1600; end: 10b4e164b;  */

void FUN_10b4e1600(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010b4e1734();
    func_0x00010b4e17f4();
    FUN_10b4e164c();
  }
  func_0x00010b4e17b4();
  return;
}



/* Entry: 10b4e164c; end: 10b4e167f;  */

void FUN_10b4e164c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b4e1680();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b4e1680; end: 10b4e1693;  */

void FUN_10b4e1680(void)

{
  FUN_10b4e1694();
  return;
}



/* Entry: 10b4e1694; end: 10b4e16e3;  */

void FUN_10b4e1694(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b4e174c();
  while (unaff_x21 != unaff_x19) {
    func_0x00010b4e17d4();
    func_0x00010b4e17e0();
  }
  func_0x00010b4e17ac();
  return;
}



/* Entry: 10b4e16e4; end: 10b4e1717;  */

undefined8 FUN_10b4e16e4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b4e154c(&uStack_28);
  return param_1;
}



/* Entry: 10b4e1718; end: 10b4e1807;  */

void FUN_10b4e1718(long param_1)

{
  undefined4 *unaff_x19;
  
  *(short *)(param_1 + 0x18) = (short)*unaff_x19;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}



/* Entry: 10b4e1808; end: 10b4e18b7;  */

void FUN_10b4e1808(undefined8 param_1,char *param_2,long param_3)

{
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  char cStack_48;
  
  if ((param_3 != 0) && (*param_2 == '?')) {
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  FUN_10b4e1bbc(&lStack_70,param_2,param_3);
  uStack_88 = uStack_68;
  lStack_90 = lStack_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  do {
    if ((char)uStack_88 == cStack_48 && (char)uStack_88 != '\0') {
      if (lStack_90 == lStack_50) {
        return;
      }
    }
    else if ((char)uStack_88 == cStack_48) {
      return;
    }
    FUN_10b4e1a24(auStack_b0,&lStack_90);
    FUN_10b4e1924(param_1,auStack_b0,auStack_a0);
    FUN_10b4e1cc4(&lStack_90);
  } while( true );
}



/* Entry: 10b4e18b8; end: 10b4e1923;  */

undefined8 * FUN_10b4e18b8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    puVar3 = (undefined8 *)(param_2 + 0x88);
    func_0x00010549026c();
    uVar1 = puVar3[1];
    puVar2 = (undefined8 *)*puVar3;
    if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
      puVar2 = puVar3;
    }
    FUN_10b4e1808(param_1,puVar2,uVar1);
  }
  return param_1;
}



/* Entry: 10b4e1924; end: 10b4e19b3;  */

long FUN_10b4e1924(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b4e1a90();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_10b4e1ac4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 10b4e19b4; end: 10b4e1a23;  */

undefined8 * FUN_10b4e19b4(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  while( true ) {
    if (param_1 == param_2) {
      return param_2;
    }
    uVar1 = param_1[1];
    puVar2 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar2 = param_1;
    }
    uVar3 = param_3;
    func_0x000107c27944(param_3,param_4,puVar2,uVar1);
    if ((uVar3 & 1) != 0) break;
    param_1 = param_1 + 6;
  }
  return param_1;
}



/* Entry: 10b4e1a24; end: 10b4e1a8f;  */

void FUN_10b4e1a24(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2;
  FUN_10b4e1c08();
  FUN_10b4e1c08();
  param_2 = param_2 + param_3;
  lVar3 = lVar2;
  FUN_10b4e1c70(lVar2,param_2);
  lVar4 = lVar3 - lVar2;
  if (lVar3 != param_2) {
    lVar3 = lVar3 + 1;
  }
  param_2 = param_2 - lVar3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = lVar3;
  }
  *param_1 = lVar2;
  param_1[1] = lVar4;
  lVar3 = 0;
  if (param_2 != 0) {
    lVar3 = param_2;
  }
  param_1[2] = lVar1;
  param_1[3] = lVar3;
  return;
}



/* Entry: 10b4e1a90; end: 10b4e1ac3;  */

void FUN_10b4e1a90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10b4e1b78(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 10b4e1ac4; end: 10b4e1b77;  */

long FUN_10b4e1ac4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000107c280e0(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  func_0x000107c280e4(auStack_58,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_10b4e1b78(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x30;
  func_0x000107c31954(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000107c31958(auStack_58);
  return lVar2;
}



/* Entry: 10b4e1b78; end: 10b4e1bbb;  */

long FUN_10b4e1b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27958();
  func_0x000107c27958(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10b4e1bbc; end: 10b4e1bd7;  */

void FUN_10b4e1bbc(long param_1)

{
  FUN_10b4e1bd8();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10b4e1bd8; end: 10b4e1c07;  */

void FUN_10b4e1bd8(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    *param_1 = param_2;
    param_1[2] = param_2 + param_3;
  }
  bVar1 = param_3 != 0;
  *(bool *)(param_1 + 1) = bVar1;
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 10b4e1c08; end: 10b4e1c6f;  */

undefined1  [16] FUN_10b4e1c08(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar2 = *plVar1;
  plVar1 = param_1 + 2;
  FUN_10b4d9c74();
  func_0x00010b4e1c98(lVar2,*plVar1);
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar3 = *plVar1;
  FUN_10b4d9c74();
  auVar4._8_8_ = lVar2 - *param_1;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 10b4e1c70; end: 10b4e1cc3;  */

char * FUN_10b4e1c70(char *param_1,char *param_2)

{
  char *pcVar1;
  
  for (; (pcVar1 = param_2, param_1 != param_2 && (pcVar1 = param_1, *param_1 != '='));
      param_1 = param_1 + 1) {
  }
  return pcVar1;
}



/* Entry: 10b4e1cc4; end: 10b4e1d33;  */

void FUN_10b4e1cc4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10b4d9e0c();
  lVar2 = *plVar1;
  plVar1 = param_1 + 2;
  FUN_10b4d9e0c();
  FUN_10b4e1d34(lVar2,*plVar1);
  *param_1 = lVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  if (((char)param_1[3] == '\0') || (lVar2 != param_1[2])) {
    FUN_10b4d9e0c();
    *param_1 = *param_1 + 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 10b4e1d34; end: 10b4e1d6f;  */

char * FUN_10b4e1d34(char *param_1,char *param_2)

{
  char *pcVar1;
  
  for (; ((pcVar1 = param_2, param_1 != param_2 && (pcVar1 = param_1, *param_1 != '&')) &&
         (*param_1 != ';')); param_1 = param_1 + 1) {
  }
  return pcVar1;
}



/* Entry: 10b4e1d70; end: 10b4e1f4b;  */

void FUN_10b4e1d70(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c27d14(param_2,&UNK_10f774a91);
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10b4e1f4c();
    lVar3 = param_2;
    func_0x00010b4e0f5c();
    if ((int)lVar3 != 0) {
      func_0x00010b4e1f54();
      uVar1 = *(ulong *)(param_2 + 0x38);
      if (-1 < (char)*(byte *)(param_2 + 0x47)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x47);
      }
      if (uVar1 != 0) {
        FUN_10b4e1f4c();
        func_0x00010b4e1f54();
      }
      FUN_10b4e1f4c();
    }
    func_0x00010549026c(param_2 + 0x48);
    func_0x00010b4e1f54();
    if (*(char *)(param_2 + 0x6a) == '\x01') {
      FUN_10b4e1f4c();
      puVar2 = (undefined2 *)(param_2 + 0x68);
      FUN_10b4dbd40();
      __ZNSt3__19to_stringEi(auStack_58,*puVar2);
      func_0x00010b4e1f54();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
  }
  else {
    lVar3 = param_2;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
              (param_2,&UNK_10f774a98);
    if ((int)lVar3 == 0) {
      FUN_10b4e1f4c();
    }
  }
  lVar3 = *(long *)(param_2 + 0x70);
  if (*(char *)(param_2 + 200) == '\x01') {
    func_0x00010b4e1f5c();
  }
  else {
    lVar4 = *(long *)(param_2 + 0x78);
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x18) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f774a9d);
      func_0x00010b4e1f5c();
    }
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_10b4e1f4c();
    func_0x00010549026c(param_2 + 0x88);
    func_0x00010b4e1f54();
  }
  if (((param_3 & 1) == 0) && (*(char *)(param_2 + 0xc0) == '\x01')) {
    FUN_10b4e1f4c();
    func_0x00010549026c(param_2 + 0xa8);
    func_0x00010b4e1f54();
  }
  return;
}



/* Entry: 10b4e1f4c; end: 10b4e1f67;  */

void FUN_10b4e1f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc_110346290)();
  return;
}



/* Entry: 10b4e1f68; end: 10b4e1f93;  */

long FUN_10b4e1f68(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e1f94; end: 10b4e1f97;  */

long FUN_10b4e1f94(long param_1)

{
  func_0x00010b4e44ac();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4e1f98; end: 10b4e1fab;  */

void FUN_10b4e1f98(void)

{
  FUN_10b4e1f68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e1fac; end: 10b4e1fb7;  */

undefined ** FUN_10b4e1fac(void)

{
  return &PTR_DAT_110cf2278;
}



/* Entry: 10b4e1fb8; end: 10b4e1fe7;  */

void FUN_10b4e1fb8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4e4510();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4e1fe8; end: 10b4e208b;  */

long * FUN_10b4e1fe8(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  int iVar2;
  long unaff_x22;
  long *plVar3;
  int iVar4;
  
  lVar1 = param_1[3];
  plVar3 = param_3;
  if (lVar1 != 0) {
    param_2 = param_1;
    func_0x00010b4e4664();
  }
  func_0x00010b4e44a0(param_1[2]);
  if (lVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e2054;
  }
  else if ((int)lVar1 == 0) goto LAB_10b4e2054;
  func_0x00010b4e4450();
  param_2 = param_3;
  func_0x00010b4e4428(param_3,2);
LAB_10b4e2054:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b4e44bc();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar4;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar2);
  }
  _memcpy(param_2,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar3);
}



/* Entry: 10b4e208c; end: 10b4e20fb;  */

void FUN_10b4e208c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b4e45e4();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}



/* Entry: 10b4e20fc; end: 10b4e20ff;  */

void FUN_10b4e20fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e2100; end: 10b4e215b;  */

void FUN_10b4e2100(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4e46b8();
  func_0x00010b4e4488(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b4e447c();
    }
    func_0x00010b4e4670();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e45c4();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e215c; end: 10b4e218f;  */

void FUN_10b4e215c(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b4e2190; end: 10b4e21b3;  */

undefined8 FUN_10b4e2190(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e21b4; end: 10b4e21b7;  */

undefined8 FUN_10b4e21b4(undefined8 param_1)

{
  func_0x00010b4e44ac();
  return param_1;
}



/* Entry: 10b4e21b8; end: 10b4e21cb;  */

void FUN_10b4e21b8(void)

{
  FUN_10b4e2190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e21cc; end: 10b4e21ef;  */

undefined ** FUN_10b4e21cc(void)

{
  return &PTR_DAT_110cf22b8;
}



/* Entry: 10b4e21f0; end: 10b4e2273;  */

long * FUN_10b4e21f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b4e4500();
  if (param_1[2] != 0) {
    func_0x00010b4e4534();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b4e4534();
    func_0x000107c282cc();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b4e4534();
    func_0x00010599ccb0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44bc();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b4e2274; end: 10b4e22f3;  */

ulong FUN_10b4e2274(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b4e22f4; end: 10b4e231f;  */

undefined8 FUN_10b4e22f4(undefined8 param_1)

{
  func_0x00010b4e44ac();
  FUN_10b4e2320(param_1);
  return param_1;
}



/* Entry: 10b4e2320; end: 10b4e234f;  */

/* WARNING: Possible PIC construction at 0x00010b4e2334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4e2338) */

void FUN_10b4e2320(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b4e2350; end: 10b4e2353;  */

undefined8 FUN_10b4e2350(undefined8 param_1)

{
  func_0x00010b4e44ac();
  FUN_10b4e2320(param_1);
  return param_1;
}



/* Entry: 10b4e2354; end: 10b4e2367;  */

void FUN_10b4e2354(void)

{
  FUN_10b4e22f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4e2368; end: 10b4e2373;  */

undefined ** FUN_10b4e2368(void)

{
  return &PTR_DAT_110cf22f8;
}



/* Entry: 10b4e2374; end: 10b4e23b7;  */

void FUN_10b4e2374(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b4e4510();
  func_0x000107c3025c(unaff_x19 + 0x18);
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b4e23b8; end: 10b4e2543;  */

long * FUN_10b4e23b8(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x00010b4e45d4();
  func_0x00010b4e44a0(param_1[2]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e23f0;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e23f0:
    func_0x00010b4e4450();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b4e43cc();
    unaff_x21 = param_1;
  }
  func_0x00010b4e44a0(*(undefined8 *)(unaff_x20 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4e2430;
  }
  else if ((int)param_2 != 0) {
LAB_10b4e2430:
    func_0x00010b4e4450();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x00010b4e43cc();
    unaff_x21 = param_1;
  }
  func_0x00010b4e44a0(*(undefined8 *)(unaff_x20 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4e248c;
  }
  else if ((int)param_2 == 0) goto LAB_10b4e248c;
  func_0x00010b4e4450();
  param_1 = unaff_x19;
  func_0x00010b4e43cc();
  unaff_x21 = param_1;
LAB_10b4e248c:
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x00010b4e43c0();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b4e43d8();
    unaff_x21 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    func_0x00010b4e43c0();
    unaff_x21 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b4e43d8();
  }
  plVar2 = unaff_x21;
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    plVar2 = unaff_x19;
    func_0x0001089f53c8();
    param_3 = unaff_x21;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    plVar3 = unaff_x19;
    func_0x00010598f468();
    param_3 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b4e44bc();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar3 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)plVar3) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        plVar3 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar5);
    }
    _memcpy(plVar3,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)param_3);
  }
  return plVar3;
}



/* Entry: 10b4e2544; end: 10b4e2627;  */

void FUN_10b4e2544(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  func_0x00010b4e4494(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b4e4444();
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x28) * 2 + (uint)*(byte *)(param_1 + 0x29) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b4e4548();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  return;
}


