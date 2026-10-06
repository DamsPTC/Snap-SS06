/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f2e3c0; end: 103f2e3df;  */

void FUN_103f2e3c0(void)

{
  _objc_opt_self(&PTR_PTR_112967ef8);
  return;
}



/* Entry: 103f2e3e0; end: 103f2e607;  */

long FUN_103f2e3e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f2e608; end: 103f2e61b;  */

bool FUN_103f2e608(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f2e61c; end: 103f2e6c7;  */

void FUN_103f2e61c(void)

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



/* Entry: 103f2e6c8; end: 103f2e6cb;  */

void FUN_103f2e6c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f1f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac590;
  _swift_getWitnessTable(&UNK_10dcac590,&UNK_110723840);
  puRam000000011302f1f8 = puVar1;
  return;
}



/* Entry: 103f2e6cc; end: 103f2e70b;  */

void FUN_103f2e6cc(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f1f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac590;
  _swift_getWitnessTable(&UNK_10dcac590,&UNK_110723840);
  puRam000000011302f1f8 = puVar1;
  return;
}



/* Entry: 103f2e70c; end: 103f2e877;  */

int FUN_103f2e70c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f2e788;
        goto LAB_103f2e76c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f2e76c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103f2e788:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f2e878; end: 103f2e8ef;  */

undefined1 * FUN_103f2e878(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103f2e8f0; end: 103f2e9db;  */

int FUN_103f2e8f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103f2e9dc; end: 103f2eaa7;  */

undefined8 * FUN_103f2e9dc(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  char cVar2;
  uint5 uVar3;
  uint5 uVar4;
  uint5 uVar5;
  uint5 uVar6;
  uint5 uVar7;
  ulong uVar8;
  
  fVar1 = *(float *)(param_1 + 4);
  cVar2 = *(char *)((long)param_1 + 0x24);
  uVar3 = *(uint5 *)(param_1 + 5);
  uVar4 = *(uint5 *)(param_1 + 6);
  uVar5 = *(uint5 *)(param_2 + 4);
  uVar6 = *(uint5 *)(param_2 + 5);
  uVar7 = *(uint5 *)(param_2 + 6);
  _CGRectEqualToRect(*param_1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                     param_2[3]);
  if ((int)param_1 == 0) {
    return param_1;
  }
  uVar8 = (ulong)uVar5 & 0xff00000000;
  if (cVar2 == '\x01') {
    if (uVar8 != 0x100000000) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (uVar8 == 0x100000000) {
      return (undefined8 *)0x0;
    }
    if (fVar1 != (float)uVar5) {
      return (undefined8 *)0x0;
    }
  }
  uVar8 = (ulong)uVar6 & 0xff00000000;
  if (((ulong)uVar3 & 0xff00000000) == 0x100000000) {
    if (uVar8 != 0x100000000) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (uVar8 == 0x100000000) {
      return (undefined8 *)0x0;
    }
    if ((float)uVar3 != (float)uVar6) {
      return (undefined8 *)0x0;
    }
  }
  uVar8 = (ulong)uVar7 & 0xff00000000;
  if (((ulong)uVar4 & 0xff00000000) == 0x100000000) {
    if (uVar8 == 0x100000000) {
      return (undefined8 *)0x1;
    }
  }
  else if ((uVar8 != 0x100000000) && ((float)uVar4 == (float)uVar7)) {
    return (undefined8 *)0x1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 103f2eaa8; end: 103f2eb5b;  */

undefined8 * FUN_103f2eaa8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = param_1[4];
  uVar4 = param_1[5];
  uVar1 = param_1[6];
  uVar2 = param_2[4];
  uVar5 = param_2[5];
  uVar3 = param_2[6];
  uVar6 = param_2[7];
  uVar8 = (uint)((ulong)param_1[7] >> 0x3e);
  if (uVar8 == 0) {
    if (uVar6 >> 0x3e == 0) {
LAB_103f2eb04:
      _CGRectEqualToRect(*param_1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                         param_2[3]);
      if ((int)param_1 == 0) {
        return param_1;
      }
      uVar6 = uVar2 & 0xff00000000;
      if ((uVar7 & 0xff00000000) == 0x100000000) {
        if (uVar6 != 0x100000000) {
          return (undefined8 *)0x0;
        }
      }
      else {
        if (uVar6 == 0x100000000) {
          return (undefined8 *)0x0;
        }
        if ((float)uVar7 != (float)uVar2) {
          return (undefined8 *)0x0;
        }
      }
      uVar7 = uVar5 & 0xff00000000;
      if ((uVar4 & 0xff00000000) == 0x100000000) {
        if (uVar7 != 0x100000000) {
          return (undefined8 *)0x0;
        }
      }
      else {
        if (uVar7 == 0x100000000) {
          return (undefined8 *)0x0;
        }
        if ((float)uVar4 != (float)uVar5) {
          return (undefined8 *)0x0;
        }
      }
      uVar7 = uVar3 & 0xff00000000;
      if ((uVar1 & 0xff00000000) == 0x100000000) {
        if (uVar7 == 0x100000000) {
          return (undefined8 *)0x1;
        }
      }
      else if ((uVar7 != 0x100000000) && ((float)uVar1 == (float)uVar3)) {
        return (undefined8 *)0x1;
      }
      return (undefined8 *)0x0;
    }
  }
  else if (uVar8 == 1) {
    if (uVar6 >> 0x3e == 1) goto LAB_103f2eb04;
  }
  else if ((long)uVar6 < 0) {
    return (undefined8 *)0x1;
  }
  return (undefined8 *)0x0;
}



/* Entry: 103f2eb5c; end: 103f2ed53;  */

undefined8
FUN_103f2eb5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = (char)((ulong)param_6 >> 0x20);
  cVar2 = (char)((ulong)param_5 >> 0x20);
  cVar1 = (char)((ulong)param_4 >> 0x20);
  if ((param_1 & 0xff00000000) == 0x100000000) {
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      return 0;
    }
    if ((float)param_1 != (float)param_4) {
      return 0;
    }
  }
  if ((char)((ulong)param_2 >> 0x20) == '\x01') {
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    if (cVar2 == '\x01') {
      return 0;
    }
    if ((float)param_2 != (float)param_5) {
      return 0;
    }
  }
  if ((char)((ulong)param_3 >> 0x20) == '\x01') {
    if (cVar3 == '\x01') {
      return 1;
    }
  }
  else if ((cVar3 != '\x01') && ((float)param_3 == (float)param_6)) {
    return 1;
  }
  return 0;
}



/* Entry: 103f2ed54; end: 103f2ee6f;  */

undefined8 * FUN_103f2ed54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  func_0x000103f2ed0c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  return param_1;
}



/* Entry: 103f2ee70; end: 103f2eebb;  */

undefined8 * FUN_103f2ee70(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  func_0x000103f2ed3c(uVar7,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return param_1;
}



/* Entry: 103f2eebc; end: 103f2f02b;  */

int FUN_103f2eebc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 10) >> 2) & 0x80000000 |
          (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x21);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 103f2f02c; end: 103f2f06b;  */

void FUN_103f2f02c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac750;
  _swift_getWitnessTable(&UNK_10dcac750,&UNK_110723ac0);
  puRam000000011302f200 = puVar1;
  return;
}



/* Entry: 103f2f06c; end: 103f2f117;  */

void FUN_103f2f06c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f2f118; end: 103f2f163;  */

void FUN_103f2f118(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f2f164; end: 103f2f20f;  */

void FUN_103f2f164(void)

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



/* Entry: 103f2f210; end: 103f2f213;  */

void FUN_103f2f210(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac850;
  _swift_getWitnessTable(&UNK_10dcac850,&UNK_110723c30);
  puRam000000011302f208 = puVar1;
  return;
}



/* Entry: 103f2f214; end: 103f2f253;  */

void FUN_103f2f214(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac850;
  _swift_getWitnessTable(&UNK_10dcac850,&UNK_110723c30);
  puRam000000011302f208 = puVar1;
  return;
}



/* Entry: 103f2f254; end: 103f2f2eb;  */

long FUN_103f2f254(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f2f2ec; end: 103f2f357;  */

undefined1 * FUN_103f2f2ec(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _objc_retain();
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103f2f358; end: 103f2f3a3;  */

undefined1 * FUN_103f2f358(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 103f2f3a4; end: 103f2f5db;  */

int FUN_103f2f3a4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103f2f5dc; end: 103f2f6b3;  */

void FUN_103f2f5dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f2f6b4; end: 103f2f6bf;  */

void FUN_103f2f6b4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f2f6c0; end: 103f2f6cf; -[SCSelfieOnboardingCameraResult image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2f6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302f210));
  return;
}



/* Entry: 103f2f6d0; end: 103f2f767; -[SCSelfieOnboardingCameraResult imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2f6d0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113812768,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103f2f768; end: 103f2f777; -[SCSelfieOnboardingCameraResult stageIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2f768(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113812770);
}



/* Entry: 103f2f778; end: 103f2f8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f2f778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302f210) = param_1;
  lVar1 = _DAT_113812768;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_2,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_113812770) = param_3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_2,lVar2);
  return puVar3;
}



/* Entry: 103f2f8f8; end: 103f2f9f7; -[SCSelfieOnboardingCameraResult initWithImage:imageURL:stageIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f2f8f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_4);
  *(undefined8 *)(param_1 + _DAT_11302f210) = param_3;
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_113812768,lVar5,lVar3);
  *(undefined8 *)(param_1 + _DAT_113812770) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  plVar4 = &lStack_60;
  _objc_msgSendSuper2(plVar4,puVar1);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 103f2f9f8; end: 103f2fa23; -[SCSelfieOnboardingCameraResult init] */

void FUN_103f2f9f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SelfieOnboardingServices.SelfieOnboardingCameraResult",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2fa24);
  (*pcVar1)();
}



/* Entry: 103f2fa24; end: 103f2fa6f; -[SCSelfieOnboardingCameraResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2fa24(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302f210));
  lVar1 = _DAT_113812768;
  lVar2 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000103f2fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103f2fa70; end: 103f2fa8f; -[SCSelfieOnboardingCameraScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2fa70(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f218));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2fa90; end: 103f2fad7; -[SCSelfieOnboardingCameraScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2fa90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f220;
  _swift_beginAccess(param_1 + _DAT_11302f220,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2fad8; end: 103f2fb2f; -[SCSelfieOnboardingCameraScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2fad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f220;
  _swift_beginAccess(param_1 + _DAT_11302f220,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f2fb30; end: 103f2fb3f; -[SCSelfieOnboardingCameraScope isTapAnywhereToTakeSelfieEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f2fb30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302f228);
}



/* Entry: 103f2fb40; end: 103f2fcd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103f2fb40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_11302f220;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302f220,0);
  *(undefined8 *)(unaff_x20 + _DAT_11302f218) = param_1;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_2);
  *(undefined1 *)(unaff_x20 + _DAT_11302f228) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_2);
  return puVar3;
}



/* Entry: 103f2fcd8; end: 103f2fd8b; -[SCSelfieOnboardingCameraScope initWithUiContainer:delegate:isTapAnywhereToTakeSelfieEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2fcd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_11302f220;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302f220,0);
  *(undefined8 *)(param_1 + _DAT_11302f218) = param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_4);
  *(undefined1 *)(param_1 + _DAT_11302f228) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 103f2fd8c; end: 103f2fdb7; -[SCSelfieOnboardingCameraScope init] */

void FUN_103f2fd8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SelfieOnboardingServices.SCSelfieOnboardingCameraScope",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f2fdb8);
  (*pcVar1)();
}



/* Entry: 103f2fdb8; end: 103f2fdbb;  */

void FUN_103f2fdb8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f2fdbc; end: 103f2fdef;  */

void FUN_103f2fdbc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f2fdf0; end: 103f2fe27; -[SCSelfieOnboardingCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f2fdf0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f218));
  param_1 = param_1 + _DAT_11302f220;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f2fe28; end: 103f2fe37;  */

undefined1  [16] FUN_103f2fe28(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103f2fe38; end: 103f2fe5b;  */

undefined8 FUN_103f2fe38(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f2fe5c; end: 103f2fe5f;  */

void FUN_103f2fe5c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac980;
  _swift_getWitnessTable(&UNK_10dcac980,&UNK_110723c88);
  puRam000000011302f230 = puVar1;
  return;
}



/* Entry: 103f2fe60; end: 103f2fe9f;  */

void FUN_103f2fe60(void)

{
  undefined *puVar1;
  
  if (puRam000000011302f230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcac980;
  _swift_getWitnessTable(&UNK_10dcac980,&UNK_110723c88);
  puRam000000011302f230 = puVar1;
  return;
}



/* Entry: 103f2fea0; end: 103f2feb7;  */

undefined1  [16] FUN_103f2fea0(void)

{
  return ZEXT816(0x110723c88);
}



/* Entry: 103f2feb8; end: 103f2feef;  */

void FUN_103f2feb8(undefined8 param_1)

{
  if (lRam000000011302f260 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d60e8);
  return;
}



/* Entry: 103f2fef0; end: 103f2ff77;  */

void FUN_103f2fef0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 103f2ff78; end: 103f2ff97;  */

void FUN_103f2ff78(void)

{
  _objc_opt_self(&PTR_PTR_112968098);
  return;
}



/* Entry: 103f2ff98; end: 103f2ff9b;  */

void FUN_103f2ff98(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f2ff9c; end: 103f2ffbb; -[SCSelfieOnboardingSettingsScope navigationBasedUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2ff9c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f2ffbc; end: 103f30003; -[SCSelfieOnboardingSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2ffbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2a0;
  _swift_beginAccess(param_1 + _DAT_11302f2a0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f30004; end: 103f30133; -[SCSelfieOnboardingSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f2a0;
  _swift_beginAccess(param_1 + _DAT_11302f2a0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f30134; end: 103f301ab; -[SCSelfieOnboardingSettingsScope initWithNavigationBasedUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302f2a0,0);
  *(undefined8 *)(param_1 + _DAT_11302f298) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f301ac; end: 103f3020b; -[SCSelfieOnboardingSettingsScope init] */

void FUN_103f301ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SelfieOnboardingServices.SCSelfieOnboardingSettingsScope",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f301d8);
  (*pcVar1)();
}



/* Entry: 103f3020c; end: 103f30267; -[SCSelfieOnboardingSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f3020c(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f298));
  param_1 = param_1 + _DAT_11302f2a0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f30268; end: 103f30287;  */

void FUN_103f30268(void)

{
  _objc_opt_self(&PTR_PTR_112968168);
  return;
}



/* Entry: 103f30288; end: 103f302a7; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30288(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11302f2d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f302a8; end: 103f302b7; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope isGenAIFastTrack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f302a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302f2d8);
}



/* Entry: 103f302b8; end: 103f302ff; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f302b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302f2e0;
  _swift_beginAccess(param_1 + _DAT_11302f2e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f30300; end: 103f3044f; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302f2e0;
  _swift_beginAccess(param_1 + _DAT_11302f2e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f30450; end: 103f304d7; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope initWithUiContainer:isGenAIFastTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30450(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302f2e0,0);
  *(undefined8 *)(param_1 + _DAT_11302f2d0) = param_3;
  *(undefined1 *)(param_1 + _DAT_11302f2d8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103f304d8; end: 103f30537; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope init] */

void FUN_103f304d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SelfieOnboardingServices.SCSelfieOnboardingUnifiedPrivacyPolicyScope",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30504);
  (*pcVar1)();
}



/* Entry: 103f30538; end: 103f30593; -[SCSelfieOnboardingUnifiedPrivacyPolicyScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f30538(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302f2d0));
  param_1 = param_1 + _DAT_11302f2e0;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f30594; end: 103f305b3;  */

void FUN_103f30594(void)

{
  _objc_opt_self(&PTR_PTR_112968230);
  return;
}



/* Entry: 103f305b4; end: 103f305c3; -[_TtC20CTPCustomojiServices20CTPCustomojiServices customojiService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f305b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302f310));
  return;
}



/* Entry: 103f305c4; end: 103f3060f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f305c4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302f310) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f30610; end: 103f30667; -[_TtC20CTPCustomojiServices20CTPCustomojiServices initWithCustomojiService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f30610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302f310) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f30668; end: 103f306c7; -[_TtC20CTPCustomojiServices20CTPCustomojiServices init] */

void FUN_103f30668(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CTPCustomojiServices.CTPCustomojiServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30694);
  (*pcVar1)();
}



/* Entry: 103f306c8; end: 103f306d7; -[_TtC20CTPCustomojiServices20CTPCustomojiServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f306c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302f310));
  return;
}



/* Entry: 103f306d8; end: 103f30767;  */

long FUN_103f306d8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c4a764();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30764);
    (*pcVar1)();
  }
  lVar3 = param_1;
  func_0x000107c42924();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf1c2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c44814(lVar2);
      _objc_release(lVar2);
    }
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30768);
  (*pcVar1)();
}



/* Entry: 103f30768; end: 103f30813; +[_TtC20CTPCustomojiServices17CTPCustomojiUtils isCustomoji:] */

long FUN_103f30768(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_3;
  func_0x000107c4a764();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30810);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c42924();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x00010bf1c2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x000107c44814(lVar2);
      _objc_release(lVar2);
    }
    _objc_release(param_3);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f30814);
  (*pcVar1)();
}



/* Entry: 103f30814; end: 103f3084b; +[_TtC20CTPCustomojiServices17CTPCustomojiUtils isCustomojiItem:] */

uint FUN_103f30814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103f30acc();
  _objc_release(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 103f3084c; end: 103f3093b;  */

undefined1  [16]
FUN_103f3084c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  uVar2 = 0x11302f398;
  func_0x0001000285a8(0x11302f398,&UNK_10dcacb08);
  uVar3 = 0x11302f3a0;
  uStack_70 = uVar2;
  func_0x000103f31318(0x11302f3a0,0x11302f398,&UNK_10dcacb08,
                      PTR___ss10ArraySliceVyxG10Foundation15ContiguousBytesADs5UInt8VRszlMc_110351328
                     );
  puVar4 = &UNK_110723d88;
  uStack_68 = uVar3;
  _swift_allocObject(&UNK_110723d88,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  ppuVar5 = apuStack_88;
  apuStack_88[0] = puVar4;
  func_0x0001000a8868(ppuVar5,uVar2);
  puVar4 = ppuVar5[2];
  if (!SBORROW8((ulong)ppuVar5[3] >> 1,(long)puVar4)) {
    func_0x0001004497b8(auStack_60,ppuVar5[1] + (long)puVar4,
                        ppuVar5[1] + (long)puVar4 + (((ulong)ppuVar5[3] >> 1) - (long)puVar4));
    func_0x0001000834e4(apuStack_88);
    return auStack_60;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f3093c);
  (*pcVar1)();
}



/* Entry: 103f3093c; end: 103f309ef; +[_TtC20CTPCustomojiServices17CTPCustomojiUtils computeExternalIdWithComicId:rendererId:text:] */

void FUN_103f3093c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar2 = uVar1;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar3 = param_2;
  FUN_103f30bbc(param_3,param_2,param_4,uVar1,param_5,uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,uVar3);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f309f0; end: 103f30a57; +[_TtC20CTPCustomojiServices17CTPCustomojiUtils computeExternalIdFrom:] */

void FUN_103f309f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_103f31188();
  _objc_release(param_3);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f30a58; end: 103f30a93; -[_TtC20CTPCustomojiServices17CTPCustomojiUtils init] */

void FUN_103f30a58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f30a94; end: 103f30ac7;  */

void FUN_103f30a94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f30ac8; end: 103f30acb; -[_TtC20CTPCustomojiServices17CTPCustomojiUtils .cxx_destruct] */

void FUN_103f30ac8(void)

{
  return;
}



/* Entry: 103f30acc; end: 103f30bbb;  */

undefined8 FUN_103f30acc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c42934();
  if (lVar1 == 2) {
    func_0x000107c42924();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60);
      _swift_unknownObjectRelease(param_1);
    }
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    lStack_28 = lStack_48;
    uStack_30 = uStack_50;
    if (lStack_48 == 0) {
      func_0x000103f3135c(&uStack_40,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar2 = 0;
      FUN_103f3139c(0);
      plVar3 = &lStack_68;
      _swift_dynamicCast(plVar3,&uStack_40,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)plVar3 & 1) != 0) {
        lVar1 = lStack_68;
        func_0x000107c411b8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_68);
        if (lVar1 != 0) {
          _objc_release(lVar1);
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 103f30bbc; end: 103f31187;  */

undefined1  [16]
FUN_103f30bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x12;
  undefined1 auVar16 [16];
  undefined8 auStack_130 [4];
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  lVar3 = 0;
  uStack_108 = param_6;
  uStack_100 = param_5;
  __s9CryptoKit6SHA256VMa();
  lStack_e0 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar15 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_f8 = lVar15;
  __s9CryptoKit12SHA256DigestVMa();
  lStack_c8 = *(long *)(lVar3 + -8);
  lStack_d0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lStack_d8 = lVar15;
  _swift_bridgeObjectRetain(param_2);
  func_0x000100e35e30(param_1,param_2);
  uVar4 = 0;
  uVar9 = param_1;
  __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
            (0,param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  uStack_88 = 0x3d;
  uStack_80 = 0xe100000000000000;
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  puStack_78 = (undefined8 *)uVar4;
  puStack_70 = (undefined8 *)uVar9;
  func_0x000100e8b654();
  puVar1 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar15 + -0x10) = param_1;
  *(undefined8 *)(lVar15 + -8) = param_1;
  *(undefined **)(lVar15 + -0x20) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar15 + -0x18) = param_1;
  puVar5 = &uStack_88;
  puVar11 = &uStack_98;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar5,puVar11,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  puStack_110 = puVar5;
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRetain(param_4);
  func_0x000100e35e30(param_3,param_4);
  uVar4 = 0;
  uVar9 = param_3;
  __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
            (0,param_3,param_4);
  func_0x00010006c090(param_3,param_4);
  uStack_90 = 0xe000000000000000;
  uStack_88 = 0x3d;
  uStack_80 = 0xe100000000000000;
  uStack_98 = 0;
  puStack_78 = (undefined8 *)uVar4;
  puStack_70 = (undefined8 *)uVar9;
  *(undefined8 *)(lVar15 + -0x10) = param_1;
  *(undefined8 *)(lVar15 + -8) = param_1;
  puVar6 = &uStack_88;
  puVar12 = &uStack_98;
  *(undefined **)(lVar15 + -0x20) = puVar1;
  *(undefined8 *)(lVar15 + -0x18) = param_1;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar6,puVar12,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = uStack_108;
  _swift_bridgeObjectRetain(uStack_108);
  uVar4 = uStack_100;
  func_0x000100e35e30(uStack_100,uVar9);
  uVar7 = 0;
  uVar13 = uVar4;
  __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
            (0,uVar4,uVar9);
  func_0x00010006c090(uVar4,uVar9);
  uStack_88 = 0x3d;
  uStack_80 = 0xe100000000000000;
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  puStack_78 = (undefined8 *)uVar7;
  puStack_70 = (undefined8 *)uVar13;
  *(undefined8 *)(lVar15 + -0x10) = param_1;
  *(undefined8 *)(lVar15 + -8) = param_1;
  puVar8 = &uStack_88;
  puVar14 = &uStack_98;
  *(undefined **)(lVar15 + -0x20) = puVar1;
  *(undefined8 *)(lVar15 + -0x18) = param_1;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar14,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(uVar13);
  puStack_78 = puStack_110;
  puStack_70 = puVar11;
  _swift_bridgeObjectRetain(puVar11);
  __sSS6appendyySSF(0x7e,0xe100000000000000);
  _swift_bridgeObjectRelease(puVar11);
  puVar5 = puStack_70;
  _swift_bridgeObjectRetain(puStack_70);
  __sSS6appendyySSF(puVar6,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = puStack_70;
  _swift_bridgeObjectRetain(puStack_70);
  __sSS6appendyySSF(0x7e,0xe100000000000000);
  _swift_bridgeObjectRelease(puVar5);
  puVar5 = puStack_70;
  _swift_bridgeObjectRetain(puStack_70);
  __sSS6appendyySSF(puVar8,puVar14);
  _swift_bridgeObjectRelease(puVar14);
  _swift_bridgeObjectRelease(puVar5);
  puVar6 = puStack_70;
  puVar5 = puStack_78;
  uVar9 = 0x4a4f4d4f54535543;
  uVar4 = 0xe900000000000049;
  func_0x000100e35e30();
  puStack_78 = (undefined8 *)uVar9;
  puStack_70 = (undefined8 *)uVar4;
  func_0x000100e35e30(puVar5,puVar6);
  __s10Foundation4DataV6appendyyACF();
  func_0x00010006c090(puVar5,puVar6);
  puVar6 = puStack_70;
  puVar5 = puStack_78;
  uVar9 = 0x112df70e8;
  FUN_103f312d8(0x112df70e8,PTR___s9CryptoKit6SHA256VMa_11034b128,
                PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
  lVar10 = lStack_f0;
  lVar3 = lStack_f8;
  __s9CryptoKit12HashFunctionPxycfCTj(lStack_f8,lStack_f0,uVar9);
  func_0x00010006c00c(puVar5,puVar6);
  func_0x000101aae4e4(puVar5,puVar6,lVar3);
  func_0x00010006c090(puVar5,puVar6);
  lVar2 = lStack_d8;
  __s9CryptoKit12HashFunctionP8finalize6DigestQzyFTj(lStack_d8,lVar10,uVar9);
  (**(code **)(lStack_e0 + 8))(lVar3,lVar10);
  lVar10 = lStack_d0;
  (**(code **)(lStack_c8 + 0x10))(lStack_e8,lVar2,lStack_d0);
  uVar9 = 0x112df70f0;
  FUN_103f312d8(0x112df70f0,PTR___s9CryptoKit12SHA256DigestVMa_11034b0f8,
                PTR___s9CryptoKit12SHA256DigestVSTAAMc_11034b100);
  __sST22_copyToContiguousArrays0cD0Vy7ElementQzGyFTj(lVar10,uVar9);
  lVar3 = lVar10 + 0x20;
  FUN_103f3084c();
  uVar9 = 0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  uVar4 = 0x11302f370;
  _swift_initStaticObject();
  func_0x0001004496cc();
  uStack_88 = uVar9;
  uStack_80 = uVar4;
  __s10Foundation4DataV6appendyyACF(lVar10,lVar3);
  uVar4 = uStack_80;
  uVar9 = uStack_88;
  uVar7 = 0;
  uVar13 = uStack_88;
  __s10Foundation4DataV19base64EncodedString7optionsSSSo27NSDataBase64EncodingOptionsV_tF
            (0,uStack_88,uStack_80);
  uStack_b0 = 0x3d;
  uStack_a8 = 0xe100000000000000;
  uStack_c0 = 0;
  uStack_b8 = 0xe000000000000000;
  uStack_98 = uVar7;
  uStack_90 = uVar13;
  *(undefined8 *)(lVar15 + -0x10) = param_1;
  *(undefined8 *)(lVar15 + -8) = param_1;
  puVar8 = &uStack_b0;
  puVar11 = &uStack_c0;
  *(undefined **)(lVar15 + -0x20) = puVar1;
  *(undefined8 *)(lVar15 + -0x18) = param_1;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar11,0,0,0,1,puVar1,puVar1);
  func_0x00010006c090(lVar10,lVar3);
  _swift_bridgeObjectRelease(uVar13);
  (**(code **)(lStack_c8 + 8))(lStack_d8,lStack_d0);
  func_0x00010006c090(puVar5,puVar6);
  func_0x00010006c090(uVar9,uVar4);
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = puVar8;
  return auVar16;
}



/* Entry: 103f31188; end: 103f312b7;  */

undefined1  [16] FUN_103f31188(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar2 = param_1;
  func_0x000107c411b8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar8 = 0;
    uVar9 = 0;
  }
  else {
    func_0x000107c3fe0c();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f312b0);
      (*pcVar1)();
    }
    lVar8 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar6 = param_2;
    _objc_release(param_1);
    lVar3 = lVar2;
    func_0x000107c50110();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f312b4);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar7 = uVar6;
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x000107c5c82c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f312b8);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
    uVar9 = param_2;
    FUN_103f30bbc(lVar8,param_2,lVar4,uVar6,lVar5,uVar7);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = lVar8;
  return auVar10;
}



/* Entry: 103f312b8; end: 103f312d7;  */

void FUN_103f312b8(void)

{
  _objc_opt_self(&PTR_PTR_1129683c0);
  return;
}



/* Entry: 103f312d8; end: 103f3139b;  */

void FUN_103f312d8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103f3139c; end: 103f313df;  */

void FUN_103f3139c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f000 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ba800;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000112d4f000 = puVar1;
  return;
}



/* Entry: 103f313e0; end: 103f3142b; -[SCEmoji text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f313e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302f3a8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302f3a8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f3142c; end: 103f31433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f3142c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f3a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f31434; end: 103f314eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f31434(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f3a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f314ec; end: 103f3154f; -[SCEmoji initWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f314ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11302f3a8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f31550; end: 103f315b7; -[SCEmoji unicodeName] */

void FUN_103f31550(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f315b8();
  _objc_release(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f315b8; end: 103f3177b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_103f315b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long extraout_x8;
  undefined8 uVar8;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  uVar8 = *(undefined8 *)PTR__NSStringTransformToUnicodeName_11034aad8;
  func_0x000100e8b654();
  lVar5 = 0;
  __sSy10FoundationE17applyingTransform_7reverseSSSgSo08NSStringC0a_SbtF
            (uVar8,0,PTR___sSSN_11034da80,lVar2);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uStack_60 = 0xd000000000000010;
    uStack_58 = 0x800000010f1d0400;
    lVar3 = 0;
    uStack_50 = uVar8;
    lStack_48 = lVar5;
    __s10Foundation6LocaleVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)&uStack_60 + lVar1,1,1,lVar3);
    *(long *)((long)alStack_70 + lVar1) = lVar2;
    *(long *)((long)alStack_70 + lVar1 + 8) = lVar2;
    puVar4 = &uStack_60;
    uVar6 = 0x400;
    uVar7 = 0;
    __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
              ();
    func_0x000100eca640((long)&uStack_60 + lVar1);
    if (((uVar7 & 0xff) == 1) || (((ulong)puVar4 ^ uVar6) < 0x4000)) {
      _swift_bridgeObjectRelease(lVar5);
      puVar4 = (undefined8 *)0x0;
    }
    else {
      lVar2 = lVar5;
      __sSSySsSnySS5IndexVGcig(puVar4,uVar6,uVar8,lVar5);
      _swift_bridgeObjectRelease(lVar5);
      __sSS14_fromSubstringySSSshFZ(puVar4,uVar6,uVar8,lVar2);
      _swift_bridgeObjectRelease(lVar2);
    }
  }
  return puVar4;
}



/* Entry: 103f3177c; end: 103f317db; -[SCEmoji init] */

void FUN_103f3177c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCEmoji.Emoji",0xd,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f317a8);
  (*pcVar1)();
}



/* Entry: 103f317dc; end: 103f317f3; -[SCEmoji .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f317dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302f3a8 + 8))
  ;
  return;
}



/* Entry: 103f317f4; end: 103f31853;  */

void FUN_103f317f4(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (puRam000000011302f3b0 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)puRam000000011302f3b0;
  func_0x000103f31834();
  puVar2 = &UNK_10dcacb58;
  _swift_getWitnessTable(&UNK_10dcacb58,lVar1);
  puRam000000011302f3b0 = puVar2;
  return;
}



/* Entry: 103f31854; end: 103f3186b;  */

undefined * FUN_103f31854(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_11034dae8;
}



/* Entry: 103f3186c; end: 103f318cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f3186c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302f3a8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar4;
  return;
}



/* Entry: 103f318cc; end: 103f31917;  */

int FUN_103f318cc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}


