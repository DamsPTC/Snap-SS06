/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ed0c5c; end: 100ed0cdf; -[_TtC38PostRegistrationAgeVerificationFeature28PostRegAgeVerificationRouter ageVerificationScopeDidCompleteWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed0c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d48970);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_38 = 2;
  uStack_40 = param_3;
  (**(code **)(**(long **)(param_1 + _DAT_112d48958) + 0xb0))(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ed0ce0; end: 100ed0cef;  */

void FUN_100ed0ce0(ulong param_1)

{
  if (param_1 < 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100ed0cf0; end: 100ed0e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ed0cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar2 = param_4;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_100ecd8ac();
  lVar1 = _DAT_112d48840;
  ppuStack_48 = &PTR_DAT_110365670;
  uVar4 = 0x112d488a0;
  auStack_68[0] = param_1;
  uStack_50 = uVar3;
  func_0x0001000285a8(0x112d488a0,&UNK_10d90f710);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar1) = uVar4;
  lVar1 = _DAT_112d48848;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_4 + lVar1) = uVar4;
  *(undefined8 *)(param_4 + _DAT_112d48850) = 0;
  *(undefined8 *)(param_4 + _DAT_112d48858) = 0;
  *(undefined8 *)(param_4 + _DAT_112d48860) = 0;
  *(undefined8 *)(param_4 + _DAT_112d48868) = 0;
  *(undefined8 *)(param_4 + _DAT_112d48870) = 0;
  FUN_100ed1048(auStack_68,param_4 + _DAT_112d48828);
  *(undefined8 *)(param_4 + _DAT_112d48830) = param_2;
  *(undefined8 *)(param_4 + _DAT_112d48838) = param_3;
  plVar5 = &lStack_78;
  lStack_78 = param_4;
  lStack_70 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_68);
  return plVar5;
}



/* Entry: 100ed0e44; end: 100ed0e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed0e44(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  code *pcVar6;
  ulong uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  cVar3 = (char)param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  if (cVar3 == '\0') {
    plVar5 = *(long **)(lVar4 + _DAT_112d48958);
    uStack_60 = 1;
    uStack_68 = uVar1;
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 == '\x01') {
        uStack_60 = 0;
        pcVar6 = *(code **)(**(long **)(lVar4 + _DAT_112d48958) + 0xb0);
        uStack_68 = uVar1;
        func_0x000107c61174(uVar1);
        (*pcVar6)(&uStack_68);
        func_0x000100ecdb6c(uVar1,uVar2,1);
      }
      goto LAB_100ed0a90;
    }
    plVar5 = *(long **)(lVar4 + _DAT_112d48958);
    uStack_68 = 5;
    if ((uVar1 & 1) == 0) {
      uStack_68 = 0;
    }
    uStack_60 = 2;
  }
  (**(code **)(*plVar5 + 0xb0))(&uStack_68);
LAB_100ed0a90:
  func_0x000107c61170();
  return;
}



/* Entry: 100ed0e4c; end: 100ed1047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ed0e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar8;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar3 = 0;
  func_0x000100ecb314();
  ppuStack_58 = &PTR_DAT_110365398;
  lVar4 = 0;
  auStack_78[0] = param_1;
  lStack_60 = lVar3;
  FUN_100ecd31c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  lVar2 = _DAT_112d48660;
  alStack_b0[2] = *puVar8;
  ppuStack_80 = &PTR_DAT_110365398;
  lStack_88 = lVar3;
  func_0x000107c61614(lVar5 + _DAT_112d48660,0);
  lVar3 = _DAT_112d48668;
  uVar6 = 0x112d486c8;
  func_0x0001000285a8(0x112d486c8,&UNK_10d90f480);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar5 + lVar3) = uVar6;
  lVar3 = _DAT_112d48670;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar5 + lVar3) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_112d48678) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d48680) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d48688) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d48690) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d48698) = 0;
  FUN_100ed1048(alStack_b0 + 2,lVar5 + _DAT_112d48648);
  *(undefined8 *)(lVar5 + _DAT_112d48650) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112d48658) = param_3;
  func_0x000107c61604(lVar5 + lVar2,param_4);
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  alStack_b0[0] = lVar5;
  alStack_b0[1] = lVar4;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar7 = alStack_b0;
  func_0x000107c61154(plVar7,puVar1,0,0);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(auStack_78);
  return plVar7;
}



/* Entry: 100ed1048; end: 100ed108b;  */

long FUN_100ed1048(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ed108c; end: 100ed1093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed108c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  if (lVar4 < 2) {
    if (lVar4 == 0) goto LAB_100ed0610;
    if (lVar4 == 1) {
      FUN_100ed062c();
      goto LAB_100ed0610;
    }
  }
  else {
    if (lVar4 == 2) {
      FUN_100ed0870();
      goto LAB_100ed0610;
    }
    if (lVar4 == 3) {
      func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_112d48950));
      goto LAB_100ed0610;
    }
  }
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112d48950);
  func_0x000104064644(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar5);
  uVar2 = 0;
  func_0x0001040643bc(0,0,7,1);
  func_0x0001040640a4(0);
  func_0x000107c610f8();
  FUN_100ed0ce0(lVar4);
  lVar3 = lVar1;
  func_0x000107c61174();
  func_0x000104063d68(uVar5,lVar1,lVar4,0,0xf000000000000000,uVar2);
  func_0x000107c42c1c(*(undefined8 *)(lVar3 + _DAT_112d48970));
  func_0x000107c61170(uVar5);
LAB_100ed0610:
  func_0x000107c61170();
  return;
}



/* Entry: 100ed1094; end: 100ed1133;  */

uint FUN_100ed1094(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (uVar2 != 0) {
        return 0;
      }
      return 1;
    }
    if (lVar3 == 1) {
      if (uVar2 != 1) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (lVar3 == 2) {
      if (uVar2 != 2) {
        return 0;
      }
      return 1;
    }
    if (lVar3 == 3) {
      if (uVar2 != 3) {
        return 0;
      }
      return 1;
    }
  }
  if (uVar2 < 4) {
    return 0;
  }
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c60118(lVar3,uVar2,uVar1);
  return (uint)lVar3 & 1;
}



/* Entry: 100ed1134; end: 100ed1147;  */

bool FUN_100ed1134(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  iVar3 = (int)param_1[1];
  iVar4 = (int)param_2[1];
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      if (uVar2 == 0) {
LAB_100ed1670:
        return iVar3 == iVar4;
      }
    }
    else {
      if (uVar1 != 1) {
LAB_100ed167c:
        return ((iVar3 == iVar4 && uVar1 == uVar2) && 2 < uVar2) &&
               ((iVar3 != iVar4 || uVar1 != uVar2) || uVar2 != 3);
      }
      if (uVar2 == 1) goto LAB_100ed1670;
    }
  }
  else if (uVar1 == 2) {
    if (uVar2 == 2) goto LAB_100ed1670;
  }
  else {
    if (uVar1 != 3) goto LAB_100ed167c;
    if (uVar2 == 3) goto LAB_100ed1670;
  }
  return false;
}



/* Entry: 100ed1148; end: 100ed1163;  */

void FUN_100ed1148(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100ed1164; end: 100ed11af;  */

void FUN_100ed1164(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000103dbf870();
  lVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001000834e4(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x60,7);
  return;
}



/* Entry: 100ed11b0; end: 100ed125f;  */

void FUN_100ed11b0(undefined8 param_1)

{
  if (lRam0000000112d489f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e617d08);
  return;
}



/* Entry: 100ed1260; end: 100ed1293;  */

void FUN_100ed1260(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = (ulong)*(byte *)(param_2 + 1);
  FUN_100ed16a8(uVar2,uVar1,*(undefined8 *)(param_3 + 8));
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 100ed1294; end: 100ed12d7;  */

void FUN_100ed1294(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x0001000a8868(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100ed00c8(uVar2,uVar1);
  return;
}



/* Entry: 100ed12d8; end: 100ed1307;  */

void FUN_100ed12d8(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100ed1308; end: 100ed1357;  */

undefined8 * FUN_100ed1308(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_100ed12d8(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100ed12f8(uVar3,uVar2);
  return param_1;
}



/* Entry: 100ed1358; end: 100ed1393;  */

undefined8 * FUN_100ed1358(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000100ed12f8(uVar3,uVar2);
  return param_1;
}



/* Entry: 100ed1394; end: 100ed1477;  */

int FUN_100ed1394(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ed1478; end: 100ed157f;  */

ulong * FUN_100ed1478(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 4) {
    if (uVar1 < 4) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 4) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 100ed1580; end: 100ed16a7;  */

int FUN_100ed1580(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7ffffffc;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 4;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ed16a8; end: 100ed17f3;  */

undefined1  [16] FUN_100ed16a8(ulong param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  if (1 < param_2) {
    iVar1 = (int)param_1;
    uVar2 = 3;
    if (iVar1 != 5) {
      uVar2 = 1;
    }
    param_1 = 3;
    if (iVar1 != 0) {
      param_1 = uVar2;
    }
    if (param_2 != 2) {
      param_1 = 1;
    }
    goto LAB_100ed17dc;
  }
  if (param_2 == 0) {
    func_0x000107c61174();
    goto LAB_100ed17dc;
  }
  if (param_1 < 0xd) {
    if ((1L << (param_1 & 0x3f) & 0x1fd4U) == 0) {
      if (param_1 == 1) {
LAB_100ed17d8:
        param_1 = 2;
        goto LAB_100ed17dc;
      }
    }
    else {
      uVar2 = *(ulong *)(unaff_x20 + 0x58);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = 0xd00000000000002a;
        func_0x000107c5fadc(0xd00000000000002a,0x800000010ef10c00);
        uVar4 = uVar2;
        func_0x000107c4c270();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar4 == 0) {
          func_0x000107c615e8(uVar2);
        }
        else {
          uVar5 = uVar4;
          func_0x000107c5dc0c();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c3ebcc();
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar2);
          func_0x000107c615e8(uVar4);
          if ((uVar6 & 1) != 0) goto LAB_100ed17d8;
        }
      }
    }
  }
  param_1 = 3;
LAB_100ed17dc:
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 100ed17f4; end: 100ed180b;  */

void FUN_100ed17f4(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 100ed180c; end: 100ed1907;  */

ulong * FUN_100ed180c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 100ed1908; end: 100ed1a1b;  */

int FUN_100ed1908(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffc;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (4 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -3;
  }
  return iVar1;
}



/* Entry: 100ed1a1c; end: 100ed1e17;  */

undefined1  [16] FUN_100ed1a1c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef17e80);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef17df0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed1ae8);
  (*pcVar1)();
}



/* Entry: 100ed1e18; end: 100ed1e5b;  */

undefined1  [16] FUN_100ed1e18(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x626967696c656e69;
  func_0x000107c5fadc(0x626967696c656e69,0xef79646f625f656c);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef17df0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed1f0c);
  (*pcVar1)();
}



/* Entry: 100ed1e5c; end: 100ed1f0b;  */

undefined1  [16] FUN_100ed1e5c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef17df0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed1f0c);
  (*pcVar1)();
}



/* Entry: 100ed1f0c; end: 100ed1f17; -[SCPostRegAgeVerificationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b10;
  func_0x000107c61428(param_1 + _DAT_112d48b10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f18; end: 100ed1f23; -[SCPostRegAgeVerificationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b10;
  func_0x000107c61428(param_1 + _DAT_112d48b10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f24; end: 100ed1f2f; -[SCPostRegAgeVerificationEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b18;
  func_0x000107c61428(param_1 + _DAT_112d48b18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f30; end: 100ed1f3b; -[SCPostRegAgeVerificationEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b18;
  func_0x000107c61428(param_1 + _DAT_112d48b18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f3c; end: 100ed1f47; -[SCPostRegAgeVerificationEntryPoint logoutScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b20;
  func_0x000107c61428(param_1 + _DAT_112d48b20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f48; end: 100ed1f53; -[SCPostRegAgeVerificationEntryPoint setLogoutScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b20;
  func_0x000107c61428(param_1 + _DAT_112d48b20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f54; end: 100ed1f5f; -[SCPostRegAgeVerificationEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b28;
  func_0x000107c61428(param_1 + _DAT_112d48b28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f60; end: 100ed1f6b; -[SCPostRegAgeVerificationEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b28;
  func_0x000107c61428(param_1 + _DAT_112d48b28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f6c; end: 100ed1f77; -[SCPostRegAgeVerificationEntryPoint challengeProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b30;
  func_0x000107c61428(param_1 + _DAT_112d48b30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f78; end: 100ed1f83; -[SCPostRegAgeVerificationEntryPoint setChallengeProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b30;
  func_0x000107c61428(param_1 + _DAT_112d48b30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f84; end: 100ed1f8f; -[SCPostRegAgeVerificationEntryPoint experimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b38;
  func_0x000107c61428(param_1 + _DAT_112d48b38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1f90; end: 100ed1f9b; -[SCPostRegAgeVerificationEntryPoint setExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b38;
  func_0x000107c61428(param_1 + _DAT_112d48b38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1f9c; end: 100ed1fa7; -[SCPostRegAgeVerificationEntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1f9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b40;
  func_0x000107c61428(param_1 + _DAT_112d48b40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1fa8; end: 100ed1fb3; -[SCPostRegAgeVerificationEntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b40;
  func_0x000107c61428(param_1 + _DAT_112d48b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1fb4; end: 100ed1fbf; -[SCPostRegAgeVerificationEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1fb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b48;
  func_0x000107c61428(param_1 + _DAT_112d48b48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1fc0; end: 100ed1fcb; -[SCPostRegAgeVerificationEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b48;
  func_0x000107c61428(param_1 + _DAT_112d48b48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed1fcc; end: 100ed1fd7; -[SCPostRegAgeVerificationEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed1fcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b50;
  func_0x000107c61428(param_1 + _DAT_112d48b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed1fd8; end: 100ed201b;  */

void FUN_100ed1fd8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed201c; end: 100ed2027; -[SCPostRegAgeVerificationEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed201c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b50;
  func_0x000107c61428(param_1 + _DAT_112d48b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed2028; end: 100ed207b;  */

void FUN_100ed2028(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed207c; end: 100ed20c3; -[SCPostRegAgeVerificationEntryPoint declaredAgeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed207c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b58;
  func_0x000107c61428(param_1 + _DAT_112d48b58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ed20c4; end: 100ed20cf; -[SCPostRegAgeVerificationEntryPoint setDeclaredAgeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed20c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b58;
  func_0x000107c61428(param_1 + _DAT_112d48b58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ed20d0; end: 100ed2117; -[SCPostRegAgeVerificationEntryPoint ageVerificationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed20d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b60;
  func_0x000107c61428(param_1 + _DAT_112d48b60,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ed2118; end: 100ed2123; -[SCPostRegAgeVerificationEntryPoint setAgeVerificationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed2118(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b60;
  func_0x000107c61428(param_1 + _DAT_112d48b60,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ed2124; end: 100ed216b; -[SCPostRegAgeVerificationEntryPoint logoutScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed2124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48b68;
  func_0x000107c61428(param_1 + _DAT_112d48b68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100ed216c; end: 100ed2177; -[SCPostRegAgeVerificationEntryPoint setLogoutScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed216c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48b68;
  func_0x000107c61428(param_1 + _DAT_112d48b68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100ed2178; end: 100ed21d7;  */

void FUN_100ed2178(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100ed21d8; end: 100ed26f3;  */

/* WARNING: Possible PIC construction at 0x000100ed241c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed242c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed243c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed244c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed245c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed246c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed26a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed26b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed26c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed25f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed25b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed25c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed25d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed2504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed24e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed24d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed24e8) */
/* WARNING: Removing unreachable block (ram,0x000100ed2508) */
/* WARNING: Removing unreachable block (ram,0x000100ed2538) */
/* WARNING: Removing unreachable block (ram,0x000100ed2528) */
/* WARNING: Removing unreachable block (ram,0x000100ed2568) */
/* WARNING: Removing unreachable block (ram,0x000100ed2558) */
/* WARNING: Removing unreachable block (ram,0x000100ed2548) */
/* WARNING: Removing unreachable block (ram,0x000100ed2598) */
/* WARNING: Removing unreachable block (ram,0x000100ed2588) */
/* WARNING: Removing unreachable block (ram,0x000100ed2578) */
/* WARNING: Removing unreachable block (ram,0x000100ed25d8) */
/* WARNING: Removing unreachable block (ram,0x000100ed25c8) */
/* WARNING: Removing unreachable block (ram,0x000100ed25b8) */
/* WARNING: Removing unreachable block (ram,0x000100ed2628) */
/* WARNING: Removing unreachable block (ram,0x000100ed2618) */
/* WARNING: Removing unreachable block (ram,0x000100ed2608) */
/* WARNING: Removing unreachable block (ram,0x000100ed25f8) */
/* WARNING: Removing unreachable block (ram,0x000100ed2678) */
/* WARNING: Removing unreachable block (ram,0x000100ed2668) */
/* WARNING: Removing unreachable block (ram,0x000100ed2658) */
/* WARNING: Removing unreachable block (ram,0x000100ed2648) */
/* WARNING: Removing unreachable block (ram,0x000100ed2638) */
/* WARNING: Removing unreachable block (ram,0x000100ed26c8) */
/* WARNING: Removing unreachable block (ram,0x000100ed26b8) */
/* WARNING: Removing unreachable block (ram,0x000100ed26a8) */
/* WARNING: Removing unreachable block (ram,0x000100ed2698) */
/* WARNING: Removing unreachable block (ram,0x000100ed2688) */
/* WARNING: Removing unreachable block (ram,0x000100ed2470) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000100ed2460) */
/* WARNING: Removing unreachable block (ram,0x000100ed2450) */
/* WARNING: Removing unreachable block (ram,0x000100ed2440) */
/* WARNING: Removing unreachable block (ram,0x000100ed2430) */
/* WARNING: Removing unreachable block (ram,0x000100ed2420) */
/* WARNING: Removing unreachable block (ram,0x000100ed24d8) */

void FUN_100ed21d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c5da74();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4143c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3da38();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c4c084();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c4c08c();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c5d9b4();
            func_0x000107c61180();
            if (lVar7 != 0) {
              lVar8 = unaff_x20;
              func_0x000107c3f788();
              func_0x000107c61180();
              if (lVar8 != 0) {
                lVar9 = unaff_x20;
                func_0x000107c42bbc();
                func_0x000107c61180();
                if (lVar9 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar10 = unaff_x20;
                  func_0x000107c42eb0();
                  func_0x000107c61180();
                  if (lVar10 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar2;
                  }
                  else {
                    lVar11 = unaff_x20;
                    func_0x000107c3df78();
                    func_0x000107c61180();
                    if (lVar11 != 0) {
                      func_0x000107c5d900();
                      func_0x000107c61180();
                      if (unaff_x20 != 0) {
                        lVar12 = 0;
                        FUN_100ecb180();
                        func_0x000107c613fc();
                        func_0x0001000c6560();
                        func_0x000107c613fc();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        func_0x000107c61174();
                        lVar13 = unaff_x20;
                        func_0x0001000c6580();
                        *(long *)(lVar12 + 0x70) = lVar13;
                        *(undefined8 *)(lVar12 + 0x78) = 0;
                        *(long *)(lVar12 + 0x10) = lVar1;
                        *(long *)(lVar12 + 0x18) = lVar2;
                        *(long *)(lVar12 + 0x20) = lVar3;
                        *(long *)(lVar12 + 0x28) = lVar4;
                        *(long *)(lVar12 + 0x30) = lVar5;
                        *(long *)(lVar12 + 0x38) = lVar6;
                        *(long *)(lVar12 + 0x40) = lVar7;
                        *(long *)(lVar12 + 0x48) = lVar8;
                        *(long *)(lVar12 + 0x50) = lVar9;
                        *(long *)(lVar12 + 0x58) = lVar10;
                        *(long *)(lVar12 + 0x60) = lVar11;
                        *(long *)(lVar12 + 0x68) = unaff_x20;
                        func_0x000100eca844();
                        lVar1 = unaff_x20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100ed26f4; end: 100ed271b; -[SCPostRegAgeVerificationEntryPoint begin] */

void FUN_100ed26f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ed21d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ed271c; end: 100ed275f; -[SCPostRegAgeVerificationEntryPoint end] */

void FUN_100ed271c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed2760; end: 100ed2d0f;  */

void FUN_100ed2760(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_100ed27f0;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000013;
      if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef10eeb40)) ||
         (func_0x000107c605b8(0xd000000000000013,0x800000010ef114c0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56130();
        goto LAB_100ed27f0;
      }
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10f0480)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef0fb80,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c532ec();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ef210)) ||
               (func_0x000107c605b8(0xd000000000000012,0x800000010ef10df0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c54798();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ef230)) ||
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef10dd0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5491c();
              }
              else {
                uVar2 = 0xd000000000000025;
                if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10f0340)) ||
                   (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52844();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5a2fc();
                  }
                  else {
                    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ef180)) {
                      uVar2 = 0xd000000000000017;
                      func_0x000107c605b8(0xd000000000000017,0x800000010ef10e80,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = 0xd00000000000001b;
                        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10f0460))
                           || (func_0x000107c605b8(0xd00000000000001b,0x800000010ef0fba0,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c52594();
                        }
                        else {
                          if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10eeb20))
                          {
                            uVar2 = 0;
                            func_0x000107c605b8(0xd000000000000012,0x800000010ef114e0,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              func_0x000107c602fc(0x15);
                              func_0x000107c6142c(0xe000000000000000);
                              func_0x000107c5fb78(param_2,param_3);
                              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                  0x800000010ef0fc20,
                                                  "PostRegistrationAgeVerificationFeature/SCPostRegAgeVerificationEntryPoint.swift"
                                                  ,0x4f,2,0x5d,0);
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed2d10);
                              (*pcVar1)();
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c56128();
                        }
                        goto LAB_100ed27f0;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53eb4();
                  }
                }
              }
            }
          }
          goto LAB_100ed27f0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a368();
      goto LAB_100ed27f0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a3f8();
LAB_100ed27f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100ed2d10; end: 100ed2dbb; -[SCPostRegAgeVerificationEntryPoint setValue:forIvarName:] */

void FUN_100ed2d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100ed2760(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100ed2dbc; end: 100ed2edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed2dbc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d48b10,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b18,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d48b50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d48b58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48b60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48b68) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48b70) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100ed2ee0; end: 100ed2eff; -[SCPostRegAgeVerificationEntryPoint init] */

void FUN_100ed2ee0(void)

{
  FUN_100ed2dbc();
  return;
}



/* Entry: 100ed2f00; end: 100ed2f33;  */

void FUN_100ed2f00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ed2f34; end: 100ed301b; -[SCPostRegAgeVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed2f34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d48b10);
  func_0x000107c61610(param_1 + _DAT_112d48b18);
  func_0x000107c61610(param_1 + _DAT_112d48b20);
  func_0x000107c61610(param_1 + _DAT_112d48b28);
  func_0x000107c61610(param_1 + _DAT_112d48b30);
  func_0x000107c61610(param_1 + _DAT_112d48b38);
  func_0x000107c61610(param_1 + _DAT_112d48b40);
  func_0x000107c61610(param_1 + _DAT_112d48b48);
  func_0x000107c61610(param_1 + _DAT_112d48b50);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48b60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d48b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d48b70));
  return;
}



/* Entry: 100ed301c; end: 100ed303b;  */

void FUN_100ed301c(void)

{
  func_0x000107c61168(&PTR_PTR_11279e2e8);
  return;
}



/* Entry: 100ed303c; end: 100ed305b; -[PostRegAgeVerificationScope container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed303c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d48ba0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed305c; end: 100ed30a3; -[PostRegAgeVerificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed305c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d48ba8;
  func_0x000107c61428(param_1 + _DAT_112d48ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100ed30a4; end: 100ed30fb; -[PostRegAgeVerificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed30a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d48ba8;
  func_0x000107c61428(param_1 + _DAT_112d48ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100ed30fc; end: 100ed31b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100ed30fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d48ba8;
  func_0x000107c61614(unaff_x20 + _DAT_112d48ba8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d48ba0) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 100ed31b8; end: 100ed325b; -[PostRegAgeVerificationScope initWithContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed31b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112d48ba8;
  func_0x000107c61614(param_1 + _DAT_112d48ba8,0);
  *(undefined8 *)(param_1 + _DAT_112d48ba0) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 100ed325c; end: 100ed328f;  */

void FUN_100ed325c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100ed3290; end: 100ed32eb; -[PostRegAgeVerificationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ed3290(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d48ba0));
  param_1 = param_1 + _DAT_112d48ba8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ed32ec; end: 100ed330b;  */

void FUN_100ed32ec(void)

{
  func_0x000107c61168(&PTR_PTR_11279e400);
  return;
}



/* Entry: 100ed330c; end: 100ed33f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed330c(char param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed33b8);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar5;
        FUN_100ed9ad0(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed33b4);
        (*pcVar1)();
      }
      uVar6 = uVar5 + 1;
      if (*(char *)(uVar2 + _DAT_112d48d20) == param_1) {
        return;
      }
      func_0x000107c61170();
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}



/* Entry: 100ed33f8; end: 100ed4717;  */

void FUN_100ed33f8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar17;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar18;
  long extraout_x8_05;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar21;
  long unaff_x20;
  long lVar22;
  code *pcVar23;
  long lVar24;
  code *pcVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  
  lVar2 = 0;
  func_0x000107c5ef18();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ef64();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar20 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  lVar19 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12;
  lStack_d8 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - extraout_x12_00;
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar20 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_01;
  lStack_e8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = lVar20 - extraout_x12_02;
  lVar20 = 0x112d48c78;
  uStack_d0 = uVar17;
  func_0x0001000285a8(0x112d48c78,&UNK_10d90f8c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = uVar17 - extraout_x8_03;
  lVar20 = 0x112d48c80;
  uVar11 = 0xd910e50;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = lVar29 - extraout_x8_04;
  lVar20 = 0;
  func_0x000107c5ec74();
  lVar18 = *(long *)(lVar20 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar21 = lVar30 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_100ed330c();
  if (lVar5 == 0) {
LAB_100ed3674:
    lVar28 = 0;
  }
  else {
    lVar28 = lVar5;
    FUN_100edb670();
    uVar1 = uVar11 & 0xff;
    func_0x000107c61170(lVar5);
    if (uVar1 == 1) goto LAB_100ed3674;
  }
  lVar5 = 1;
  FUN_100ed330c();
  if (lVar5 == 0) {
LAB_100ed36a8:
    lVar26 = 0;
  }
  else {
    lVar26 = lVar5;
    FUN_100edb670();
    uVar1 = uVar11 & 0xff;
    func_0x000107c61170(lVar5);
    if (uVar1 == 1) goto LAB_100ed36a8;
  }
  lVar5 = 2;
  FUN_100ed330c();
  if (lVar5 == 0) {
LAB_100ed36e4:
    lVar22 = 0;
  }
  else {
    lVar22 = lVar5;
    FUN_100edb670();
    func_0x000107c61170(lVar5);
    if ((uVar11 & 0xff) == 1) goto LAB_100ed36e4;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar9 = puVar6;
  func_0x000106b90310(puVar6,puVar7,puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  if ((int)puVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ed392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar24 + 0x38))(param_1,1,1,lVar4);
    return;
  }
  (**(code **)(lVar15 + 0x38))(lVar30,1,1,lVar3);
  lVar5 = 0;
  func_0x000107c5efa8();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar29,1,1,lVar5);
  *(undefined1 *)(lVar21 + -8) = 1;
  *(undefined8 *)(lVar21 + -0x10) = 0;
  *(undefined1 *)(lVar21 + -0x18) = 1;
  *(undefined8 *)(lVar21 + -0x20) = 0;
  *(undefined1 *)(lVar21 + -0x28) = 1;
  *(undefined8 *)(lVar21 + -0x30) = 0;
  *(undefined1 *)(lVar21 + -0x38) = 1;
  *(undefined8 *)(lVar21 + -0x40) = 0;
  *(undefined1 *)(lVar21 + -0x48) = 1;
  *(undefined8 *)(lVar21 + -0x50) = 0;
  *(undefined1 *)(lVar21 + -0x58) = 1;
  *(undefined8 *)(lVar21 + -0x60) = 0;
  *(undefined1 *)(lVar21 + -0x68) = 1;
  *(undefined8 *)(lVar21 + -0x70) = 0;
  *(undefined1 *)(lVar21 + -0x78) = 1;
  *(undefined8 *)(lVar21 + -0x80) = 0;
  *(undefined1 *)(lVar21 + -0x88) = 1;
  *(undefined8 *)(lVar21 + -0x90) = 0;
  *(undefined1 *)(lVar21 + -0x98) = 1;
  *(undefined8 *)(lVar21 + -0xa0) = 0;
  *(undefined1 *)(lVar21 + -0xa8) = 1;
  *(undefined8 *)(lVar21 + -0xb0) = 0;
  func_0x000107c5ec70(lVar21,lVar30,lVar29,0,1,0,1,0,1);
  func_0x000107c5ec48(lVar28,0);
  func_0x000107c5ec60(lVar26,0);
  func_0x000107c5ec58(lVar22,0);
  (**(code **)(lVar13 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___s10Foundation8CalendarV10IdentifierO9gregorianyA2EmFWC_110350cc8,lVar2);
  func_0x000107c5ef1c(lVar16,lVar14);
  (**(code **)(lVar13 + 8))(lVar14,lVar2);
  func_0x000107c5ef48(lVar19,lVar21);
  (**(code **)(lVar15 + 8))(lVar16,lVar3);
  pcVar25 = *(code **)(lVar24 + 0x30);
  lVar2 = lVar19;
  (*pcVar25)(lVar19,1,lVar4);
  uVar17 = uStack_d0;
  if ((int)lVar2 == 1) {
    (**(code **)(lVar18 + 8))(lVar21,lVar20);
    func_0x0001000d1dcc(lVar19);
LAB_100ed38ec:
    pcVar25 = *(code **)(lVar24 + 0x38);
    uVar12 = 1;
  }
  else {
    pcVar23 = *(code **)(lVar24 + 0x20);
    (*pcVar23)(uStack_d0,lVar19,lVar4);
    lVar13 = 0;
    FUN_100ed4718();
    lVar3 = lStack_d8;
    func_0x0001009f0578(unaff_x20 + *(int *)(lVar13 + 0x14),lStack_d8);
    lVar5 = lVar3;
    (*pcVar25)(lVar3,1,lVar4);
    lVar2 = lStack_e8;
    if ((int)lVar5 == 1) {
      func_0x0001000d1dcc(lVar3);
    }
    else {
      (*pcVar23)(lStack_e8,lVar3,lVar4);
      uVar10 = uVar17;
      func_0x000107c5ee78(uVar17,lVar2);
      pcVar27 = *(code **)(lVar24 + 8);
      (*pcVar27)(lVar2,lVar4);
      if ((uVar10 & 1) != 0) {
        (*pcVar27)(uVar17,lVar4);
        (**(code **)(lVar18 + 8))(lVar21,lVar20);
        goto LAB_100ed38ec;
      }
    }
    lVar3 = lStack_e0;
    func_0x0001009f0578(unaff_x20 + *(int *)(lVar13 + 0x18),lStack_e0);
    lVar5 = lVar3;
    (*pcVar25)(lVar3,1,lVar4);
    lVar2 = lStack_f0;
    if ((int)lVar5 == 1) {
      (**(code **)(lVar18 + 8))(lVar21,lVar20);
      func_0x0001000d1dcc(lVar3);
    }
    else {
      (*pcVar23)(lStack_f0,lVar3,lVar4);
      uVar10 = uVar17;
      func_0x000107c5ee74(uVar17,lVar2);
      pcVar25 = *(code **)(lVar24 + 8);
      (*pcVar25)(lVar2,lVar4);
      (**(code **)(lVar18 + 8))(lVar21,lVar20);
      if ((uVar10 & 1) != 0) {
        (*pcVar25)(uVar17,lVar4);
        goto LAB_100ed38ec;
      }
    }
    (*pcVar23)(param_1,uVar17,lVar4);
    pcVar25 = *(code **)(lVar24 + 0x38);
    uVar12 = 0;
  }
  (*pcVar25)(param_1,uVar12,1,lVar4);
  return;
}



/* Entry: 100ed4718; end: 100ed474f;  */

void FUN_100ed4718(undefined8 param_1)

{
  if (lRam0000000112d48c30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e617e4c);
  return;
}



/* Entry: 100ed4750; end: 100ed48bb;  */

long * FUN_100ed4750(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar4 = *param_2;
  *param_1 = lVar4;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar7 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0;
    func_0x000107c5eea4();
    lVar5 = *(long *)(lVar2 + -8);
    pcVar6 = *(code **)(lVar5 + 0x30);
    func_0x000107c61434(lVar4);
    lVar4 = (long)param_2 + lVar7;
    (*pcVar6)(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
      (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
    }
    else {
      lVar4 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    lVar7 = (long)*(int *)(param_3 + 0x18);
    lVar4 = (long)param_2 + lVar7;
    (*pcVar6)(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar2);
      (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,lVar2);
    }
    else {
      lVar4 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  else {
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar4);
  }
  return param_1;
}



/* Entry: 100ed48bc; end: 100ed4967;  */

void FUN_100ed48bc(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  func_0x000107c6142c(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = (long)param_1 + (long)iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar3 = (long)param_1 + (long)iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ed4964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 100ed4968; end: 100ed4f87;  */

undefined8 * FUN_100ed4968(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  lVar6 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  func_0x000107c61434(uVar3);
  lVar2 = (long)param_2 + lVar6;
  (*pcVar5)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar6,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar2 = (long)param_2 + lVar6;
  (*pcVar5)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar6,0,1,lVar1);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 100ed4f88; end: 100ed4f9f;  */

void FUN_100ed4f88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 100ed4fa0; end: 100ed5017;  */

void FUN_100ed4fa0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 100ed5018; end: 100ed5143; -[SCNumpadPicker date] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5018(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_1137ff050;
  lVar4 = (long)puVar5 - extraout_x8_00;
  func_0x000107c61428(param_1 + _DAT_1137ff050,auStack_48,0,0);
  FUN_100ed5144(param_1 + lVar1,puVar5);
  FUN_100ed33f8(lVar4);
  func_0x000100ed5188(puVar5);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  lVar1 = lVar4;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar2);
  uVar3 = 0;
  if ((int)lVar1 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar6 + 8))(lVar4,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100ed5144; end: 100ed51c3;  */

undefined8 FUN_100ed5144(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100ed4718();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ed51c4; end: 100ed5293; -[SCNumpadPicker setDate:] */

void FUN_100ed51c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(puVar2,param_3);
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_3 == 0,1);
  func_0x000107c61174(param_1);
  FUN_100ed5294(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ed5294; end: 100ed5497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5294(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100edac8c(param_1,puVar5,0x112d373d8,&UNK_10d9014c0);
  puVar3 = puVar5;
  (**(code **)(lVar10 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x000100edac4c(puVar5,0x112d373d8,&UNK_10d9014c0);
    lVar2 = _DAT_1137ff050;
    func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_68,0,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed5498);
        (*pcVar1)();
      }
      func_0x000107c61434(uVar6);
      uVar9 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar6 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar9;
          FUN_100ed9ad0(uVar9,uVar6);
        }
        uVar9 = uVar9 + 1;
        func_0x000107c59c6c();
        func_0x000107c61170(uVar4);
      } while (uVar7 != uVar9);
      func_0x000107c6142c(uVar6);
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,puVar5,lVar2);
    func_0x000100ed5498(lVar8);
    (**(code **)(lVar10 + 8))(lVar8,lVar2);
  }
  func_0x000100ed59bc();
  func_0x000100edac4c(param_1,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 100ed5498; end: 100ed5d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5498(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  uStack_d0 = param_1;
  FUN_100ed4718();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ec74();
  lStack_b8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar11 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ef18();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5ef64();
  lStack_c8 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar13 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x68))
            (lVar15,*(undefined4 *)
                     PTR___s10Foundation8CalendarV10IdentifierO9gregorianyA2EmFWC_110350cc8,lVar3);
  func_0x000107c5ef1c(lVar13,lVar15);
  (**(code **)(lVar9 + 8))(lVar15,lVar3);
  lVar3 = 0x112d36588;
  func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
  lVar15 = 0;
  func_0x000107c5ef5c();
  lVar9 = *(long *)(lVar15 + -8);
  lVar12 = *(long *)(lVar9 + 0x48);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar16 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar3,uVar16 + lVar12 * 3,uVar8 | 7);
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  lVar4 = lVar3 + uVar16;
  pcVar10 = *(code **)(lVar9 + 0x68);
  (*pcVar10)(lVar4,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_110350d78,
             lVar15);
  (*pcVar10)(lVar4 + lVar12,
             *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90,lVar15)
  ;
  (*pcVar10)(lVar4 + lVar12 * 2,
             *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,lVar15);
  lVar9 = lVar3;
  FUN_100ddce0c();
  func_0x000107c61588(lVar3);
  func_0x000107c61408(lVar4,3,lVar15);
  func_0x000107c6145c(lVar3,0x20,7);
  uVar5 = uStack_d0;
  func_0x000107c5ef2c(lVar11,lVar9);
  uVar6 = (uint)uVar5;
  func_0x000107c6142c();
  func_0x000107c5ec44();
  lVar3 = _DAT_1137ff050;
  lVar4 = lVar9;
  if ((uVar6 & 0xff) != 1) {
    func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_a8,0,0);
    lVar4 = lVar14;
    FUN_100ed5144(unaff_x20 + lVar3);
    uVar6 = (uint)lVar4;
    lVar3 = 0;
    FUN_100ed330c();
    lVar4 = lVar14;
    func_0x000100ed5188();
    if (lVar3 != 0) {
      lVar15 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar1 = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar15 + 0x18) = 2;
      *(undefined8 *)(lVar15 + 0x10) = 1;
      puVar2 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar15 + 0x38) = puVar1;
      *(undefined **)(lVar15 + 0x40) = puVar2;
      *(long *)(lVar15 + 0x20) = lVar9;
      lVar4 = 0x64323025;
      uVar7 = 0xe400000000000000;
      func_0x000107c5fb00(0x64323025,0xe400000000000000,lVar15);
      uVar5 = uVar7;
      func_0x000107c5fadc();
      uVar6 = (uint)uVar5;
      func_0x000107c6142c(uVar7);
      func_0x000107c59c6c(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170();
    }
  }
  func_0x000107c5ec5c();
  lVar3 = _DAT_1137ff050;
  lVar9 = lVar4;
  if ((uVar6 & 0xff) != 1) {
    func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_90,0,0);
    lVar9 = lVar14;
    FUN_100ed5144(unaff_x20 + lVar3);
    uVar6 = (uint)lVar9;
    lVar3 = 1;
    FUN_100ed330c();
    lVar9 = lVar14;
    func_0x000100ed5188();
    if (lVar3 != 0) {
      lVar15 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      puVar1 = PTR___sSiN_11034deb0;
      *(undefined8 *)(lVar15 + 0x18) = 2;
      *(undefined8 *)(lVar15 + 0x10) = 1;
      puVar2 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar15 + 0x38) = puVar1;
      *(undefined **)(lVar15 + 0x40) = puVar2;
      *(long *)(lVar15 + 0x20) = lVar4;
      lVar9 = 0x64323025;
      uVar7 = 0xe400000000000000;
      func_0x000107c5fb00(0x64323025,0xe400000000000000,lVar15);
      uVar5 = uVar7;
      func_0x000107c5fadc();
      uVar6 = (uint)uVar5;
      func_0x000107c6142c(uVar7);
      func_0x000107c59c6c(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170();
    }
  }
  func_0x000107c5ec54();
  lVar3 = _DAT_1137ff050;
  if ((uVar6 & 0xff) != 1) {
    func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_78,0,0);
    FUN_100ed5144(unaff_x20 + lVar3,lVar14);
    lVar3 = 2;
    FUN_100ed330c();
    func_0x000100ed5188(lVar14);
    if (lVar3 != 0) {
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      puVar1 = PTR___sSis7CVarArgsWP_11034df08;
      *(undefined **)(lVar4 + 0x38) = PTR___sSiN_11034deb0;
      *(undefined **)(lVar4 + 0x40) = puVar1;
      *(long *)(lVar4 + 0x20) = lVar9;
      uVar5 = 0x64343025;
      uVar7 = 0xe400000000000000;
      func_0x000107c5fb00(0x64343025,0xe400000000000000,lVar4);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
      func_0x000107c59c6c(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar5);
    }
  }
  (**(code **)(lStack_b8 + 8))(lVar11,lStack_b0);
  (**(code **)(lStack_c8 + 8))(lVar13,lStack_c0);
  return;
}



/* Entry: 100ed5d20; end: 100ed5d2b; -[SCNumpadPicker minimumDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5d20(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_1137ff058;
  puVar4 = auStack_60 + -extraout_x8;
  func_0x000107c61428(param_1 + _DAT_1137ff058,auStack_58,0,0);
  func_0x000100edac8c(param_1 + lVar1,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100ed5d2c; end: 100ed5ec7; -[SCNumpadPicker setMinimumDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5d2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar4,param_3);
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar4,param_3 == 0,1);
  lVar1 = _DAT_1137ff058;
  func_0x000107c61428(param_1 + _DAT_1137ff058,auStack_68,0x21,0);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000100ed9c6c(lVar4,param_1 + lVar1);
  func_0x000107c614a8(auStack_68);
  func_0x000100edac4c(lVar4,0x112d373d8,&UNK_10d9014c0);
  func_0x000100edac8c(param_1 + lVar1,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar4 = lVar2 + _DAT_1137ff050;
  func_0x000107c61428(lVar4,auStack_68,0x21,0);
  lVar1 = 0;
  FUN_100ed4718();
  func_0x000100ed9cbc(puVar3,lVar4 + *(int *)(lVar1 + 0x14));
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100ed5ec8; end: 100ed5ed3; -[SCNumpadPicker maximumDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5ec8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_1137ff060;
  puVar4 = auStack_60 + -extraout_x8;
  func_0x000107c61428(param_1 + _DAT_1137ff060,auStack_58,0,0);
  func_0x000100edac8c(param_1 + lVar1,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100ed5ed4; end: 100ed5fcb;  */

void FUN_100ed5ed4(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar3 = *param_3;
  func_0x000107c61428(param_1 + lVar3,auStack_58,0,0);
  func_0x000100edac8c(param_1 + lVar3,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar3 + -8);
  puVar1 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar3);
  uVar2 = 0;
  if ((int)puVar1 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100ed5fcc; end: 100ed6167; -[SCNumpadPicker setMaximumDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed5fcc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  if (param_3 == 0) {
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar4,param_3);
    lVar1 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar4,param_3 == 0,1);
  lVar1 = _DAT_1137ff060;
  func_0x000107c61428(param_1 + _DAT_1137ff060,auStack_68,0x21,0);
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000100ed9c6c(lVar4,param_1 + lVar1);
  func_0x000107c614a8(auStack_68);
  func_0x000100edac4c(lVar4,0x112d373d8,&UNK_10d9014c0);
  func_0x000100edac8c(param_1 + lVar1,puVar3,0x112d373d8,&UNK_10d9014c0);
  lVar4 = lVar2 + _DAT_1137ff050;
  func_0x000107c61428(lVar4,auStack_68,0x21,0);
  lVar1 = 0;
  FUN_100ed4718();
  func_0x000100ed9cbc(puVar3,lVar4 + *(int *)(lVar1 + 0x18));
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100ed6168; end: 100ed616f; -[SCNumpadPicker datePickerType] */

undefined8 FUN_100ed6168(void)

{
  return 1;
}



/* Entry: 100ed6170; end: 100ed61a3; -[SCNumpadPicker isEditing] */

uint FUN_100ed6170(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ed61a4();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100ed61a4; end: 100ed62af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100ed61a4(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_1137ff050;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_68,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar1);
  uVar8 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar6);
  uVar3 = 0;
  do {
    uVar5 = uVar3;
    if (uVar7 == uVar5) break;
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed629c);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar5;
      FUN_100ed9ad0(uVar5,uVar6);
    }
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ed6268);
      (*pcVar2)();
    }
    uVar4 = uVar3;
    func_0x000107c49d98();
    func_0x000107c61170(uVar3);
    uVar3 = uVar5 + 1;
  } while ((int)uVar4 == 0);
  func_0x000107c6142c(uVar6);
  return uVar7 != uVar5;
}



/* Entry: 100ed62b0; end: 100ed63bb; -[SCNumpadPicker setDate:animated:] */

void FUN_100ed62b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ee94(lVar3,param_3);
  (**(code **)(lVar4 + 0x10))(puVar2,lVar3,lVar1);
  (**(code **)(lVar4 + 0x38))(puVar2,0,1,lVar1);
  func_0x000107c61174(param_1);
  FUN_100ed5294(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  return;
}



/* Entry: 100ed63bc; end: 100ed6597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100ed63bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  code *pcVar6;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar4 = _DAT_1137ff058;
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar6)(unaff_x20 + lVar4,1,1,lVar2);
  (*pcVar6)(unaff_x20 + _DAT_1137ff060,1,1,lVar2);
  (*pcVar6)(unaff_x20 + _DAT_112d48c88,1,1,lVar2);
  lVar4 = _DAT_112d48c90;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  lVar4 = _DAT_1137ff068;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff050);
  lVar4 = 0;
  FUN_100ed4718();
  (*pcVar6)((long)puVar1 + (long)*(int *)(lVar4 + 0x14),1,1,lVar2);
  (*pcVar6)((long)puVar1 + (long)*(int *)(lVar4 + 0x18),1,1,lVar2);
  *puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar5);
  func_0x000107c5c5e8(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar5);
  func_0x000107c61170(puVar3);
  FUN_100ed67a4();
  FUN_100ed6c70();
  FUN_100ed6ff0();
  FUN_100ed78e0();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 100ed6598; end: 100ed65b7; -[SCNumpadPicker initWithFrame:] */

void FUN_100ed6598(void)

{
  FUN_100ed63bc();
  return;
}



/* Entry: 100ed65b8; end: 100ed677b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100ed65b8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  code *pcVar7;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar4 = _DAT_1137ff058;
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar7)(unaff_x20 + lVar4,1,1,lVar2);
  (*pcVar7)(unaff_x20 + _DAT_1137ff060,1,1,lVar2);
  (*pcVar7)(unaff_x20 + _DAT_112d48c88,1,1,lVar2);
  lVar4 = _DAT_112d48c90;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  lVar4 = _DAT_1137ff068;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar4) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1137ff050);
  lVar4 = 0;
  FUN_100ed4718();
  (*pcVar7)((long)puVar1 + (long)*(int *)(lVar4 + 0x14),1,1,lVar2);
  (*pcVar7)((long)puVar1 + (long)*(int *)(lVar4 + 0x18),1,1,lVar2);
  *puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c5c5e8(puVar3);
    func_0x000107c61180();
    func_0x000107c52b50(puVar6);
    func_0x000107c61170(puVar3);
    FUN_100ed67a4();
    FUN_100ed6c70();
    FUN_100ed6ff0();
    FUN_100ed78e0();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(param_1);
  return puVar5;
}



/* Entry: 100ed677c; end: 100ed67a3; -[SCNumpadPicker initWithCoder:] */

void FUN_100ed677c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100ed65b8();
  return;
}



/* Entry: 100ed67a4; end: 100ed6c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed67a4(void)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined *apuStack_90 [4];
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar4 = 0;
  FUN_100ed4718();
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = (undefined8 *)((long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  func_0x000107c5ef14();
  lVar12 = *(long *)(lVar5 + -8);
  lVar4 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef04(lVar9);
  FUN_100edad14();
  (**(code **)(lVar12 + 8))(lVar9,lVar5);
  uVar15 = *(ulong *)(lVar4 + 0x10);
  if (uVar15 == 0) {
    func_0x000107c6142c(lVar4);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100ed9d0c(0,uVar15,0);
    uVar13 = 0;
    do {
      puVar10 = apuStack_90[0];
      if (*(ulong *)(lVar4 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100ed6c48);
        (*pcVar14)();
      }
      uStack_69 = *(undefined1 *)(lVar4 + uVar13 + 0x20);
      FUN_100ed7b84(&uStack_68,&uStack_69);
      uVar6 = uStack_68;
      uVar1 = *(ulong *)(puVar10 + 0x10);
      apuStack_90[0] = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        FUN_100ed9d0c(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      puVar10 = apuStack_90[0];
      uVar13 = uVar13 + 1;
      *(ulong *)(apuStack_90[0] + 0x10) = uVar1 + 1;
      *(undefined8 *)(apuStack_90[0] + uVar1 * 8 + 0x20) = uVar6;
    } while (uVar15 != uVar13);
    func_0x000107c6142c(lVar4);
  }
  puStack_a0 = puVar17;
  if ((ulong)puVar10 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      puVar11 = puVar10;
    }
    func_0x000107c60480();
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100ed6c64);
      (*pcVar14)();
    }
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)puVar10 & 0xc000000000000001) == 0) {
      func_0x000107c61604(*(long *)(puVar10 + 0x20) + _DAT_112d48d28,0);
      lVar4 = *(long *)(puVar10 + 0x20);
      if (puVar11 != (undefined *)0x1) {
        uVar6 = *(undefined8 *)(puVar10 + 0x28);
        func_0x000107c61174(uVar6);
        func_0x000107c61604(lVar4 + _DAT_112d48d30,uVar6);
        func_0x000107c61170(uVar6);
        puVar17 = (undefined8 *)(puVar10 + 0x30);
        puVar18 = (undefined *)0x1;
        do {
          lVar4 = _DAT_112d48d28;
          if (*(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) < puVar18) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100ed6c4c);
            (*pcVar14)();
          }
          uVar6 = puVar17[-2];
          lVar5 = puVar17[-1];
          func_0x000107c61174(uVar6);
          func_0x000107c61604(lVar5 + lVar4,uVar6);
          func_0x000107c61170(uVar6);
          lVar4 = puVar17[-1];
          if ((long)puVar18 < (long)(puVar11 + -1)) {
            uVar6 = *puVar17;
            func_0x000107c61174(uVar6);
          }
          else {
            uVar6 = 0;
          }
          puVar18 = puVar18 + 1;
          func_0x000107c61604(lVar4 + _DAT_112d48d30,uVar6);
          func_0x000107c61170(uVar6);
          puVar17 = puVar17 + 1;
        } while (puVar11 != puVar18);
        goto LAB_100ed69fc;
      }
      func_0x000107c61604(lVar4 + _DAT_112d48d30,0);
    }
    else {
      lVar4 = 0;
      FUN_100ed9ad0(0,puVar10);
      func_0x000107c61604(lVar4 + _DAT_112d48d28,0);
      func_0x000107c615e8(lVar4);
      lVar4 = 0;
      FUN_100ed9ad0(0,puVar10);
      if (puVar11 != (undefined *)0x1) {
        uVar6 = 1;
        FUN_100ed9ad0(1,puVar10);
        func_0x000107c61604(lVar4 + _DAT_112d48d30,uVar6);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar6);
        puVar18 = (undefined *)0x2;
        do {
          puVar16 = puVar18 + -1;
          puVar7 = puVar16;
          FUN_100ed9ad0(puVar16,puVar10);
          puVar8 = puVar18 + -2;
          FUN_100ed9ad0(puVar8,puVar10);
          func_0x000107c61604(puVar7 + _DAT_112d48d28,puVar8);
          func_0x000107c615e8(puVar7);
          func_0x000107c61170(puVar8);
          puVar7 = puVar16;
          FUN_100ed9ad0(puVar16,puVar10);
          if ((long)puVar16 < (long)(puVar11 + -1)) {
            puVar8 = puVar18;
            FUN_100ed9ad0(puVar18,puVar10);
          }
          else {
            puVar8 = (undefined *)0x0;
          }
          func_0x000107c61604(puVar7 + _DAT_112d48d30,puVar8);
          func_0x000107c615e8(puVar7);
          func_0x000107c61170(puVar8);
          bVar3 = puVar18 != puVar11;
          puVar18 = puVar18 + 1;
        } while (bVar3);
        goto LAB_100ed69fc;
      }
      func_0x000107c61604(lVar4 + _DAT_112d48d30,0);
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(0);
  }
LAB_100ed69fc:
  lVar4 = lStack_98;
  iVar2 = *(int *)(lStack_98 + 0x14);
  lVar5 = 0;
  func_0x000107c5eea4();
  puVar17 = puStack_a0;
  pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar14)((long)puStack_a0 + (long)iVar2,1,1,lVar5);
  (*pcVar14)((long)puVar17 + (long)*(int *)(lVar4 + 0x18),1,1,lVar5);
  lVar4 = _DAT_1137ff050;
  *puVar17 = puVar10;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,apuStack_90,0x21,0);
  FUN_100edabc8(puVar17,unaff_x20 + lVar4);
  func_0x000107c614a8(apuStack_90);
  return;
}



/* Entry: 100ed6c70; end: 100ed6fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed6c70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_98 [24];
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d48c90);
  func_0x000107c5a050(uVar9,param_6,0);
  func_0x000107c52b2c(uVar9);
  func_0x000107c52610(uVar9);
  func_0x000107c54280(uVar9);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c61170(puVar4);
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  uVar13 = 0x4020000000000000;
  if (320.0 < param_1) {
    uVar13 = 0x402e000000000000;
  }
  func_0x000107c59594(uVar13,uVar9);
  func_0x000107c3d89c();
  lVar2 = _DAT_1137ff050;
  func_0x000107c61428(unaff_x20 + _DAT_1137ff050,auStack_98,0,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar10 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar12 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ed6fd8);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar10 + uVar11 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar11;
        FUN_100ed9ad0(uVar11,uVar10);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ed6fd4);
        (*pcVar3)();
      }
      func_0x000107c3d5b4(uVar9);
      uVar8 = *(ulong *)(unaff_x20 + lVar2);
      if (uVar8 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        puVar4 = PTR_PTR_1126aea58;
      }
      else {
        uVar6 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar6 = uVar8;
        }
        func_0x000107c60480();
        puVar4 = PTR_PTR_1126aea58;
      }
      PTR_PTR_1126aea58 = puVar4;
      if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ed6f24);
        (*pcVar3)();
      }
      if ((long)uVar11 < (long)(uVar6 - 1)) {
        func_0x000107c610f8(puVar4);
        func_0x000107c453e4();
        func_0x000107c61180();
        uVar13 = 0x2f;
        func_0x000107c5fadc(0x2f,0xe100000000000000);
        func_0x000107c59c6c(puVar4);
        func_0x000107c61170(uVar13);
        func_0x000107c5a100(puVar4);
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        func_0x000107c59c78(puVar4);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar7);
        func_0x000107c55528(puVar4);
        func_0x000107c5381c(0x447a0000,puVar4);
        func_0x000107c3d5b4(uVar9);
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(uVar5);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar12);
  }
  func_0x000107c6142c(uVar10);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1137ff068);
  func_0x000107c5a050(uVar9);
  func_0x000107c5a100(uVar9);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c56ba8(uVar9);
  func_0x000107c550d8(uVar9);
  func_0x000107c3d89c(unaff_x20);
  return;
}


