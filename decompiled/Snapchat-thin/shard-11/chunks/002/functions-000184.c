/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10838149c; end: 10838153f;  */

void FUN_10838149c(ulong param_1,int param_2,ulong *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_10833b80c(param_1,0);
  if ((uVar3 & 1) != 0) {
    if (*param_3 < 0xffffff) {
      uVar3 = (ulong)(param_2 << 0x18 | (uint)*param_3);
    }
    else {
      FUN_10834261c(param_1 + 0xcf8,param_2 << 0x18 | 0xffffff);
      uVar3 = *param_3 + 1;
      *param_3 = uVar3;
    }
    puVar2 = (undefined4 *)(param_1 + 0xcf8);
    FUN_1082a2c70(puVar2,4);
    *puVar2 = (int)uVar3;
    return;
  }
  FUN_10841076c(&UNK_10f48135e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108381540);
  (*pcVar1)();
}



/* Entry: 108381540; end: 108381783;  */

undefined8 FUN_108381540(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar9;
  long lVar10;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int aiStack_b0 [8];
  undefined8 uStack_90;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  ulong uStack_58;
  
  func_0x00010838323c();
  aiStack_b0[0] = -*(int *)(param_1 + 0xd08);
  FUN_108265574(param_1 + 0xca8,aiStack_b0);
  uVar11 = unaff_x20[3];
  lVar3 = *unaff_x20;
  lVar4 = unaff_x20[1];
  uVar8 = 0x18;
  if (lVar3 == 0) {
    uVar8 = 8;
  }
  if (lVar4 != 0) {
    uVar8 = uVar8 | 4;
  }
  lVar10 = unaff_x20[4];
  uStack_58 = uVar8;
  if (lVar10 != 0) {
    func_0x00010838327c();
    uVar8 = extraout_x8;
  }
  bVar1 = (int)unaff_x20[7] != 0;
  if (bVar1) {
    func_0x00010838327c();
    uVar8 = extraout_x8_00;
  }
  bVar7 = *(float *)((long)unaff_x20 + 0x3c) != 1.0;
  if (bVar7) {
    func_0x00010838327c();
    uVar8 = extraout_x8_01;
  }
  bVar2 = (int)uVar11 != 0;
  if (bVar2) {
    func_0x00010838327c((uVar11 & 0xffffffff) * 4 + uVar8);
  }
  if ((int)unaff_x20[5] != 0) {
    func_0x00010838327c();
  }
  FUN_10838149c();
  func_0x0001083832d4(unaff_x19 + 0xcf8);
  if (lVar3 != 0) {
    FUN_108382f0c(unaff_x19 + 0xcf8,*unaff_x20);
  }
  if (lVar4 != 0) {
    func_0x00010838331c();
  }
  if (lVar10 != 0) {
    func_0x000108383358();
    uStack_74 = 0x3f800000;
    uStack_6c = 0x40800000;
    uStack_90 = 0;
    if (unaff_x20[4] != 0) {
      do {
        func_0x000108383248();
        uStack_90 = extraout_x8_02;
      } while (extraout_w11 != 0);
    }
    uStack_b8 = 0;
    FUN_10811e834(&uStack_b8);
    func_0x00010838331c();
    func_0x000108383288();
  }
  if (bVar1) {
    func_0x000108383178();
  }
  if (bVar7) {
    FUN_108382c0c(*(undefined4 *)((long)unaff_x20 + 0x3c),unaff_x19 + 0xcf8);
  }
  if (bVar2) {
    func_0x000108383234(unaff_x19 + 0xcf8);
    for (uVar8 = 0; uVar8 != (uVar11 & 0xffffffff); uVar8 = uVar8 + 1) {
      func_0x000108383358();
      uStack_74 = 0x3f800000;
      uStack_6c = 0x40800000;
      if ((ulong)unaff_x20[3] <= uVar8) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x108381764);
        (*pcVar6)();
      }
      if (*(long *)(unaff_x20[2] + uVar8 * 8) == 0) {
        uStack_90 = 0;
        uVar9 = 0;
      }
      else {
        do {
          func_0x000108383248();
          uVar9 = extraout_x8_03;
        } while (extraout_w11_00 != 0);
      }
      uStack_c0 = 0;
      uVar5 = uStack_90;
      uStack_90 = uVar9;
      FUN_108167bec(uVar5);
      FUN_10811e834(&uStack_c0);
      func_0x00010838331c();
      func_0x000108383288();
    }
  }
  if ((int)unaff_x20[5] != 0) {
    func_0x000108383178();
  }
  return 1;
}



/* Entry: 108381784; end: 10838180b;  */

undefined8 FUN_108381784(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  int iStack_34;
  
  func_0x000108383228();
  iStack_34 = -*(int *)(param_1 + 0xd08);
  FUN_108265574(param_1 + 0xca8,&iStack_34);
  FUN_10838149c();
  func_0x000108383234(unaff_x20 + 0xcf8);
  if (unaff_x19 != 0) {
    FUN_108382f0c(unaff_x20 + 0xcf8);
  }
  return 0;
}



/* Entry: 10838180c; end: 1083818b7;  */

void FUN_10838180c(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0xcd8);
    if (*(int *)(param_1 + 0xce0) < (int)(*(uint *)(param_1 + 0xce4) >> 1)) {
      FUN_108375f34(*plVar1 + (long)*(int *)(param_1 + 0xce0) * 0x50,param_2);
    }
    else {
      uVar5 = 1;
      plVar3 = plVar1;
      FUN_108380c74(0x3ff8000000000000,plVar1,1);
      FUN_108375f34(plVar3 + (long)*(int *)(param_1 + 0xce0) * 10,param_2);
      FUN_108380c28(plVar1,plVar3,uVar5);
    }
    iVar4 = *(int *)(param_1 + 0xce0) + 1;
    *(int *)(param_1 + 0xce0) = iVar4;
  }
  piVar2 = (int *)(param_1 + 0xcf8);
  FUN_1082a2c70(piVar2,4);
  *piVar2 = iVar4;
  return;
}



/* Entry: 1083818b8; end: 10838190b;  */

void FUN_1083818b8(long param_1)

{
  if (*(int *)(param_1 + 0xcbc) != 0) {
    FUN_10838190c(param_1,*(undefined4 *)(param_1 + 0xd08));
    func_0x000108383108(4);
    FUN_10838149c(param_1,0x1c);
    *(int *)(param_1 + 0xcbc) = *(int *)(param_1 + 0xcbc) + -1;
  }
  return;
}



/* Entry: 10838190c; end: 108381943;  */

void FUN_10838190c(long param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xcbc) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xcb0) + (long)*(int *)(param_1 + 0xcbc) * 4 + -4);
    while (uVar3 = (ulong)uVar1, 0 < (int)uVar1) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0xcf8) + uVar3);
      *(undefined4 *)(*(long *)(param_1 + 0xcf8) + uVar3) = param_2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108381944);
  (*pcVar2)();
}



/* Entry: 108381944; end: 1083819ab;  */

void FUN_108381944(undefined8 param_1)

{
  func_0x000108383228();
  func_0x000108383108(0x44);
  FUN_10838149c(param_1,0x44);
  func_0x000108383298();
  func_0x000108383344();
  return;
}



/* Entry: 1083819ac; end: 108381a3f;  */

void FUN_1083819ac(void)

{
  func_0x0001083831d8();
  return;
}



/* Entry: 108381a40; end: 108381a47;  */

void FUN_108381a40(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xd84);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  uVar2 = *(int *)(param_1 + 0xc60) - iVar1;
  for (uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU); uVar2 != 0; uVar2 = uVar2 - 1) {
    func_0x00010833c334(param_1);
  }
  return;
}



/* Entry: 108381a48; end: 108381a97;  */

void FUN_108381a48(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xcbc) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xd08);
    FUN_10834261c(param_1 + 0xcf8,
                  *(undefined4 *)
                   (*(long *)(param_1 + 0xcb0) + (long)*(int *)(param_1 + 0xcbc) * 4 + -4));
    if (*(int *)(param_1 + 0xcbc) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108381a98);
      (*pcVar1)();
    }
    *(int *)(*(long *)(param_1 + 0xcb0) + (long)*(int *)(param_1 + 0xcbc) * 4 + -4) = (int)uVar2;
  }
  return;
}



/* Entry: 108381a98; end: 108381b6b;  */

void FUN_108381a98(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long extraout_x8;
  int unaff_w19;
  long unaff_x22;
  
  func_0x0001083831b8();
  uVar1 = 0x18;
  if (*(int *)(param_1 + 0xcbc) != 0) {
    uVar1 = 0x1c;
  }
  func_0x000108383108(uVar1);
  FUN_10838149c();
  func_0x0001083832e4(unaff_x22 + 0xcf8);
  uVar2 = 0x10;
  if (unaff_w19 != 1) {
    uVar2 = 0;
  }
  func_0x0001083831ac(uVar2);
  func_0x0001083832dc();
  func_0x000108383198();
  func_0x000108341d28();
  (**(code **)(extraout_x8 + 0x38))();
  func_0x000108341dcc();
  return;
}



/* Entry: 108381b6c; end: 108381be7;  */

void FUN_108381b6c(void)

{
  undefined8 uVar1;
  long extraout_x8;
  int unaff_w19;
  long unaff_x22;
  undefined4 uVar2;
  
  func_0x0001083831b8();
  FUN_108381be8();
  uVar1 = 0xc;
  if (*(int *)(unaff_x22 + 0xcbc) != 0) {
    uVar1 = 0x10;
  }
  func_0x000108383108(uVar1);
  FUN_10838149c();
  func_0x000108383290(unaff_x22 + 0xcf8);
  uVar2 = 0x10;
  if (unaff_w19 != 1) {
    uVar2 = 0;
  }
  func_0x0001083831ac(uVar2);
  func_0x0001083832dc();
  func_0x000108383198();
  func_0x000108341d28();
  (**(code **)(extraout_x8 + 0x48))();
  func_0x000108341dcc();
  return;
}



/* Entry: 108381be8; end: 108381db3;  */

uint FUN_108381be8(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  undefined8 auStack_70 [2];
  undefined8 auStack_60 [2];
  uint uStack_50;
  long lStack_48;
  
  uVar5 = param_2;
  FUN_108382fa8();
  iVar8 = *(int *)(param_1 + 0xcec);
  uVar12 = iVar8 - 1U & (uint)uVar5;
  for (iVar11 = 0; iVar11 < iVar8; iVar11 = iVar11 + 1) {
    puVar1 = (uint *)(*(long *)(param_1 + 0xcf0) + (long)(int)uVar12 * 0x20);
    if (*puVar1 == 0) break;
    if ((uint)uVar5 == *puVar1) {
      uVar6 = param_2;
      func_0x000108376bec(param_2,puVar1 + 2);
      if ((uVar6 & 1) != 0) {
        return puVar1[6];
      }
      iVar8 = *(int *)(param_1 + 0xcec);
    }
    iVar2 = 0;
    if ((int)uVar12 < 1) {
      iVar2 = iVar8;
    }
    uVar12 = (uVar12 + iVar2) - 1;
  }
  uVar12 = *(int *)(param_1 + 0xce8) + 1;
  func_0x000108376b14(auStack_70,param_2);
  func_0x000108376b14(auStack_60,auStack_70);
  uVar3 = *(uint *)(param_1 + 0xcec);
  uStack_50 = uVar12;
  if ((int)(uVar3 * 3) <= *(int *)(param_1 + 0xce8) * 4) {
    uVar4 = uVar3 << 1;
    if ((int)uVar3 < 1) {
      uVar4 = 4;
    }
    *(undefined4 *)(param_1 + 0xce8) = 0;
    *(uint *)(param_1 + 0xcec) = uVar4;
    lStack_48 = *(long *)(param_1 + 0xcf0);
    *(undefined8 *)(param_1 + 0xcf0) = 0;
    puVar7 = (undefined8 *)(((ulong)(uVar4 >> 1) & 0x3fffffff) << 6 | 0x10);
    __Znam();
    *puVar7 = 0x20;
    puVar7[1] = (ulong)uVar4;
    if (uVar4 != 0) {
      lVar9 = (ulong)uVar4 << 5;
      puVar10 = puVar7 + 2;
      do {
        *(undefined4 *)puVar10 = 0;
        lVar9 = lVar9 + -0x20;
        puVar10 = puVar10 + 4;
      } while (lVar9 != 0);
    }
    *(undefined8 **)(param_1 + 0xcf0) = puVar7 + 2;
    for (lVar9 = 0; (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) << 5 != lVar9;
        lVar9 = lVar9 + 0x20) {
      if (*(int *)(lStack_48 + lVar9) != 0) {
        FUN_108382fc4(param_1 + 0xce8,lStack_48 + lVar9 + 8);
      }
    }
    func_0x00010837feac(&lStack_48);
  }
  FUN_108382fc4(param_1 + 0xce8,auStack_60);
  FUN_10837ca5c(auStack_60[0]);
  FUN_10837ca5c(auStack_70[0]);
  return uVar12;
}



/* Entry: 108381db4; end: 108381eab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108381db4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long alStack_98 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  uStack_4c = 0;
  uStack_50 = 0;
  alStack_98[6] = 0;
  alStack_98[5] = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  alStack_98[7] = 0;
  alStack_98[4] = 0;
  alStack_98[3] = 0;
  uStack_44 = 0x3f800000;
  uStack_3c = 0x40800000;
  uVar1 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108383248();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  alStack_98[2] = 0;
  alStack_98[4] = uVar1;
  FUN_108114eec(0);
  func_0x000106f47224(alStack_98 + 2);
  alStack_98[1] = 0xc;
  FUN_10838149c(param_1,0x45,alStack_98 + 1);
  FUN_10838180c(param_1,alStack_98 + 3);
  func_0x0001083832a4();
  alStack_98[0] = *param_2;
  *param_2 = 0;
  FUN_10833e74c(param_1,alStack_98,param_3);
  func_0x000106f47224(alStack_98);
  FUN_108375e94(alStack_98 + 3);
  return;
}



/* Entry: 108381eac; end: 108381f33;  */

void FUN_108381eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000108383160();
  lStack_38 = lVar1 + 8;
  if (*(int *)(param_1 + 0xcbc) != 0) {
    lStack_38 = lVar1 + 0xc;
  }
  FUN_10838149c(param_1,2,&lStack_38);
  func_0x000108383270();
  FUN_108382194();
  FUN_10834261c(param_1 + 0xcf8,param_3);
  FUN_108381a48(param_1);
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40),param_1,param_2,param_3);
  (**(code **)(extraout_x8 + 0x50))();
  func_0x000108341dcc();
  return;
}



/* Entry: 108381f34; end: 108381feb;  */

void FUN_108381f34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 0xcbc) != 0) {
    FUN_10838190c(param_1,0);
  }
  func_0x000108383108(4);
  FUN_10838149c(param_1,0x4c);
  lVar2 = *(long *)(*(long *)(param_1 + 0xc40) + 8);
  uStack_28 = *(undefined8 *)(lVar2 + 0x20);
  uStack_30 = 0;
  if ((-1 < *(int *)(param_1 + 0xc88)) && (lVar2 == *(long *)(param_1 + 0xc48))) {
    puVar1 = &uStack_30;
    func_0x00010821b838(puVar1,param_1 + 0xc78);
    if (((ulong)puVar1 & 1) == 0) {
      uStack_30 = 0;
      uStack_28 = 0;
    }
  }
  func_0x000108341edc(*(undefined8 *)(param_1 + 0xc40));
  (**(code **)(extraout_x8 + 0x58))();
  func_0x000108341dcc();
  return;
}



/* Entry: 108381fec; end: 10838206b;  */

void FUN_108381fec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3 * 8;
  func_0x000108383108(lVar1 + 0x10);
  FUN_10838149c();
  func_0x000108383140(param_1);
  func_0x0001083832d4(param_1 + 0xcf8);
  FUN_10834261c(param_1 + 0xcf8,param_3);
  FUN_1082a2c70(param_1 + 0xcf8,lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)();
    return;
  }
  return;
}



/* Entry: 10838206c; end: 1083820a3;  */

void FUN_10838206c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000108383114();
  func_0x000108383108(0x18);
  puVar1 = (undefined8 *)0xc;
  FUN_10838149c();
  func_0x0001083830fc();
  func_0x000108383270();
  FUN_1082a2c70();
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  return;
}



/* Entry: 1083820a4; end: 10838210f;  */

void FUN_1083820a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long unaff_x22;
  
  func_0x00010838336c();
  func_0x000108383108(0x24);
  FUN_10838149c();
  func_0x000108383140();
  func_0x0001083832e4(unaff_x22 + 0xcf8);
  func_0x0001083832ec();
  func_0x0001083832f8();
  puVar1 = (undefined4 *)(unaff_x22 + 0xcf8);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = param_3;
  return;
}



/* Entry: 108382110; end: 108382193;  */

void FUN_108382110(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000108383114();
  func_0x000108383108(0x18);
  puVar1 = (undefined8 *)0x15;
  FUN_10838149c();
  func_0x0001083830fc();
  func_0x000108383270();
  FUN_1082a2c70();
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  return;
}



/* Entry: 108382194; end: 1083821c7;  */

long FUN_108382194(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar3;
  undefined4 *puStack_28;
  
  func_0x000108383228();
  func_0x000108383160();
  FUN_1082a2c70();
  if (unaff_x20 != (undefined4 *)0x0) {
    lVar1 = unaff_x19[2];
    if (lVar1 == 0) {
      *unaff_x20 = 0;
      uVar3 = *unaff_x19;
      *(undefined8 *)(unaff_x20 + 3) = unaff_x19[1];
      *(undefined8 *)(unaff_x20 + 1) = uVar3;
      puVar2 = unaff_x20 + 5;
    }
    else if (lVar1 == -1) {
      puVar2 = unaff_x20 + 1;
      *unaff_x20 = 0xffffffff;
    }
    else {
      *unaff_x20 = *(undefined4 *)(lVar1 + 4);
      uVar3 = *unaff_x19;
      *(undefined8 *)(unaff_x20 + 3) = unaff_x19[1];
      *(undefined8 *)(unaff_x20 + 1) = uVar3;
      unaff_x20[5] = *(undefined4 *)(unaff_x19[2] + 8);
      unaff_x20[6] = *(undefined4 *)(unaff_x19[2] + 0xc);
      puVar2 = unaff_x20 + 7;
      puStack_28 = unaff_x20;
      FUN_10837f3cc(&puStack_28,unaff_x19[2] + 0x10,(long)*(int *)(unaff_x19[2] + 4) << 2);
      unaff_x20 = puStack_28;
    }
    return (long)puVar2 - (long)unaff_x20;
  }
  lVar1 = unaff_x19[2];
  if (lVar1 != -1) {
    if (lVar1 == 0) {
      return 0x14;
    }
    return (long)*(int *)(lVar1 + 4) * 4 + 0x1c;
  }
  return 4;
}



/* Entry: 1083821c8; end: 108382297;  */

void FUN_1083821c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000108383114();
  func_0x000108383108(0x38);
  puVar1 = (undefined8 *)0x16;
  FUN_10838149c();
  func_0x0001083830fc();
  func_0x000108383270();
  FUN_1082a2c70();
  uVar5 = puVar1[3];
  uVar4 = puVar1[2];
  uVar3 = puVar1[5];
  uVar2 = puVar1[4];
  uVar6 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  return;
}



/* Entry: 108382298; end: 1083822bf;  */

void FUN_108382298(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_108381be8();
  puVar1 = (undefined4 *)(param_1 + 0xcf8);
  FUN_1082a2c70(puVar1,4);
  *puVar1 = (int)lVar2;
  return;
}



/* Entry: 1083822c0; end: 10838233f;  */

void FUN_1083822c0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  long unaff_x22;
  int iVar3;
  
  piVar2 = param_3;
  func_0x00010838336c();
  uVar1 = 0x24;
  if (*piVar2 != 0) {
    uVar1 = 0x18;
  }
  func_0x000108383108(uVar1);
  FUN_10838149c();
  func_0x000108383140();
  FUN_108382340();
  func_0x0001083832ec();
  func_0x0001083832f8();
  piVar2 = (int *)(unaff_x22 + 0xcf8);
  FUN_10834261c(piVar2,*param_3);
  if (*param_3 != 0) {
    return;
  }
  func_0x000108382f34(piVar2,(char)param_3[1]);
  if ((char)param_3[1] == '\x01') {
    FUN_108382c0c(param_3[2],piVar2);
    iVar3 = param_3[3];
    FUN_1082a2c70(piVar2,4);
    *piVar2 = iVar3;
    return;
  }
  FUN_10834261c(piVar2,param_3[4]);
  iVar3 = param_3[5];
  FUN_1082a2c70(piVar2,4);
  *piVar2 = iVar3;
  return;
}



/* Entry: 108382340; end: 1083823eb;  */

void FUN_108382340(long param_1,long param_2)

{
  ulong uVar1;
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  for (uVar1 = 0;
      (*(uint *)(param_1 + 0xd28) & ((int)*(uint *)(param_1 + 0xd28) >> 0x1f ^ 0xffffffffU)) !=
      uVar1; uVar1 = uVar1 + 1) {
    if (*(int *)(*(long *)(*(long *)(param_1 + 0xd20) + uVar1 * 8) + 0x28) ==
        *(int *)(param_2 + 0x28)) goto LAB_1083823c0;
  }
  if (param_2 != 0) {
    do {
      func_0x000108383150();
    } while (extraout_w10 != 0);
  }
  uStack_30 = 0;
  lStack_28 = param_2;
  func_0x000108380f84(param_1 + 0xd20,&lStack_28);
  FUN_10829bb10(&lStack_28);
  func_0x000106f47184(&uStack_30);
  uVar1 = (ulong)(*(int *)(param_1 + 0xd28) - 1);
LAB_1083823c0:
  FUN_10834261c(param_1 + 0xcf8,uVar1);
  return;
}



/* Entry: 1083823ec; end: 108382517;  */

void FUN_1083823ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  func_0x000108383380();
  uVar1 = 0x40;
  if (*param_5 != 0) {
    uVar1 = 0x34;
  }
  func_0x000108383108(uVar1);
  FUN_10838149c();
  FUN_10838180c(param_1,param_6);
  FUN_108382340(param_1,param_2);
  FUN_108382f0c(param_1 + 0xcf8,param_3);
  FUN_108382f0c(param_1 + 0xcf8,param_4);
  func_0x0001083aa71c(param_1 + 0xcf8,param_5);
  puVar2 = (undefined4 *)(param_1 + 0xcf8);
  FUN_1082a2c70(puVar2,4);
  *puVar2 = param_7;
  return;
}



/* Entry: 108382518; end: 1083825ff;  */

void FUN_108382518(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  long unaff_x19;
  int *unaff_x20;
  undefined8 uStack_50;
  
  func_0x00010838323c();
  func_0x000108383108(0x14);
  FUN_10838149c();
  func_0x0001083831cc();
  func_0x000108383264(*(undefined8 *)(unaff_x19 + 0xd50));
  plVar3 = extraout_x8;
  lVar4 = extraout_x9;
  while (lVar4 != 0) {
    if (*(int *)(*plVar3 + 0x14) == unaff_x20[5]) goto LAB_1083825b8;
    func_0x000108383258(plVar3 + 1);
    plVar3 = extraout_x8_00;
    lVar4 = extraout_x9_00;
  }
  if (unaff_x20 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x20,0x10);
      if (bVar2) {
        *unaff_x20 = *unaff_x20 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_50 = 0;
  FUN_108380db0(unaff_x19 + 0xd50,&stack0xffffffffffffffb8);
  func_0x00010837fd20(&stack0xffffffffffffffb8);
  func_0x00010812fec0(&uStack_50);
LAB_1083825b8:
  func_0x000108383178();
  FUN_108382c0c(param_1,unaff_x19 + 0xcf8);
  FUN_108382c0c(param_2,unaff_x19 + 0xcf8);
  return;
}



/* Entry: 108382600; end: 1083826a3;  */

void FUN_108382600(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  
  func_0x00010838323c();
  func_0x000108383108(0xc);
  FUN_10838149c();
  func_0x0001083831cc();
  func_0x000108383264(*(undefined8 *)(unaff_x19 + 0xd70));
  lVar1 = extraout_x9;
  while (lVar1 != 0) {
    func_0x000108383330();
    if ((bool)in_ZR) goto LAB_108382684;
    func_0x000108383258();
    lVar1 = extraout_x9_00;
  }
  if (unaff_x20 != 0) {
    do {
      func_0x000108383150();
    } while (extraout_w10 != 0);
  }
  uStack_40 = 0;
  func_0x000108380e4c(unaff_x19 + 0xd70,&stack0xffffffffffffffc8);
  FUN_10837fbf4(&stack0xffffffffffffffc8);
  FUN_10827f8e8(&uStack_40);
LAB_108382684:
  func_0x000108383178();
  return;
}



/* Entry: 1083826a4; end: 10838278b;  */

void FUN_1083826a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  long extraout_x9;
  long lVar1;
  long extraout_x9_00;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  
  func_0x00010838323c();
  if (param_3 == 0 && param_4 == 0) {
    FUN_10838149c();
  }
  else {
    in_ZR = param_3 == 0;
    lVar1 = 0x113254e20;
    if (!(bool)in_ZR) {
      lVar1 = param_3;
    }
    func_0x000108383108(0x30);
    FUN_10838149c();
    func_0x0001083831cc();
    FUN_1083aa6e8(unaff_x19 + 0xcf8,lVar1);
  }
  func_0x000108383264(*(undefined8 *)(unaff_x19 + 0xd30));
  lVar1 = extraout_x9;
  while (lVar1 != 0) {
    func_0x000108383330();
    if ((bool)in_ZR) goto LAB_10838276c;
    func_0x000108383258();
    lVar1 = extraout_x9_00;
  }
  if (unaff_x20 != 0) {
    do {
      func_0x000108383150();
    } while (extraout_w10 != 0);
  }
  uStack_40 = 0;
  FUN_108380b04(unaff_x19 + 0xd30,&stack0xffffffffffffffc8);
  FUN_10837fe04(&stack0xffffffffffffffc8);
  func_0x00010811496c(&uStack_40);
LAB_10838276c:
  func_0x000108383178();
  return;
}



/* Entry: 10838278c; end: 108382857;  */

void FUN_10838278c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010838323c();
  if (param_3 == 0) {
    FUN_10838149c();
  }
  else {
    FUN_10838149c();
    FUN_1083aa6e8(unaff_x19 + 0xcf8,param_3);
  }
  func_0x000108383264(*(undefined8 *)(unaff_x19 + 0xd40));
  plVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != 0) {
    if (*plVar1 == unaff_x20) goto LAB_10838283c;
    func_0x000108383258(plVar1 + 1);
    plVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (unaff_x20 != 0) {
    do {
      func_0x000108383150();
    } while (extraout_w10 != 0);
  }
  func_0x000108381020(unaff_x19 + 0xd40,&stack0xffffffffffffffc8);
  FUN_10815b554(&stack0xffffffffffffffc8);
LAB_10838283c:
  func_0x000108383178();
  return;
}



/* Entry: 108382858; end: 10838292b;  */

void FUN_108382858(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long lVar4;
  long extraout_x9_00;
  undefined8 uStack_40;
  int *piStack_38;
  
  func_0x000108383108(0x14);
  FUN_10838149c();
  FUN_10838180c(param_1,param_4);
  func_0x000108383264(*(undefined8 *)(param_1 + 0xd60));
  plVar3 = extraout_x8;
  lVar4 = extraout_x9;
  while (lVar4 != 0) {
    if (*(int *)(*plVar3 + 4) == param_2[1]) goto LAB_1083828fc;
    func_0x000108383258(plVar3 + 1);
    plVar3 = extraout_x8_00;
    lVar4 = extraout_x9_00;
  }
  if (param_2 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = *param_2 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_40 = 0;
  piStack_38 = param_2;
  func_0x000108380ee8(param_1 + 0xd60,&piStack_38);
  func_0x00010837fc9c(&piStack_38);
  func_0x00010827f564(&uStack_40);
LAB_1083828fc:
  func_0x000108383220();
  FUN_10834261c(param_1 + 0xcf8,0);
  func_0x0001083832a4();
  return;
}



/* Entry: 10838292c; end: 108382a0b;  */

void FUN_10838292c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  int param_5,undefined8 param_6)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000108383380();
  lVar1 = 0x6c;
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = 0x7c;
  }
  uVar4 = 0;
  if (param_3 != (undefined8 *)0x0) {
    uVar4 = 2;
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar4 = uVar4 + 1;
    lVar1 = lVar1 + 0x20;
  }
  if (param_5 != 0xd) {
    uVar4 = uVar4 | 8;
    lVar1 = lVar1 + 4;
  }
  func_0x000108383108(lVar1);
  FUN_10838149c();
  FUN_10838180c(param_1,param_6);
  FUN_1082a2c70(param_1 + 0xcf8,0x60);
  _memcpy();
  puVar3 = (undefined8 *)(param_1 + 0xcf8);
  func_0x000108383290();
  if (param_3 != (undefined8 *)0x0) {
    func_0x00010838316c();
    uVar5 = *param_3;
    puVar3[1] = param_3[1];
    *puVar3 = uVar5;
  }
  if (param_4 != (undefined8 *)0x0) {
    func_0x0001083832b0();
    uVar7 = *param_4;
    uVar6 = param_4[3];
    uVar5 = param_4[2];
    puVar3[1] = param_4[1];
    *puVar3 = uVar7;
    puVar3[3] = uVar6;
    puVar3[2] = uVar5;
  }
  if (uVar4 < 8) {
    return;
  }
  piVar2 = (int *)(param_1 + 0xcf8);
  FUN_1082a2c70(piVar2,4);
  *piVar2 = param_5;
  return;
}



/* Entry: 108382a0c; end: 108382b4f;  */

void FUN_108382a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ulong param_6,undefined4 param_7,int *param_8,undefined8 *param_9)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  long lStack_68;
  
  uVar7 = (uint)param_6;
  uVar10 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (param_6 & 0xffffffff) << 4;
  lVar3 = 0x10;
  if (*param_8 != 0) {
    lVar3 = 4;
  }
  bVar4 = param_5 == 0;
  uVar9 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2;
  lVar1 = uVar9 + 4;
  if (bVar4) {
    lVar1 = 0;
  }
  lVar3 = lVar1 + (long)(int)uVar7 * 0x20 + lVar3;
  bVar8 = 2;
  if (!bVar4) {
    bVar8 = 3;
  }
  bVar2 = !bVar4;
  lStack_68 = lVar3 + 0x14;
  if (param_9 != (undefined8 *)0x0) {
    bVar2 = bVar8;
    lStack_68 = lVar3 + 0x24;
  }
  FUN_10838149c(param_1,0x30,&lStack_68);
  func_0x0001083832c8();
  FUN_108382340(param_1,param_2);
  FUN_10834261c(param_1 + 0xcf8,bVar2 | 4);
  FUN_10834261c(param_1 + 0xcf8,param_6);
  func_0x000108342640(param_1 + 0xcf8,param_3,uVar10);
  puVar6 = (undefined8 *)(param_1 + 0xcf8);
  func_0x000108342640(puVar6,param_4,uVar10);
  if (param_5 != 0) {
    func_0x000108342640(param_1 + 0xcf8,param_5,uVar9);
    puVar6 = (undefined8 *)(param_1 + 0xcf8);
    FUN_10834261c(puVar6,param_7);
  }
  if (param_9 != (undefined8 *)0x0) {
    func_0x00010838316c();
    uVar12 = *param_9;
    puVar6[1] = param_9[1];
    *puVar6 = uVar12;
  }
  piVar5 = (int *)(param_1 + 0xcf8);
  FUN_10834261c(piVar5,*param_8);
  if (*param_8 == 0) {
    func_0x000108382f34(piVar5,(char)param_8[1]);
    if ((char)param_8[1] != '\x01') {
      FUN_10834261c(piVar5,param_8[4]);
      iVar11 = param_8[5];
      FUN_1082a2c70(piVar5,4);
      *piVar5 = iVar11;
      return;
    }
    FUN_108382c0c(param_8[2],piVar5);
    iVar11 = param_8[3];
    FUN_1082a2c70(piVar5,4);
    *piVar5 = iVar11;
    return;
  }
  return;
}



/* Entry: 108382b50; end: 108382bdb;  */

void FUN_108382b50(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000108383114();
  func_0x000108383108(0x30);
  FUN_10838149c();
  FUN_108382298();
  FUN_108382bdc(unaff_x21 + 0xcf8);
  FUN_108382bdc(unaff_x21 + 0xcf8,unaff_x19 + 0xc);
  FUN_108382c0c(*(undefined4 *)(unaff_x19 + 0x18),unaff_x21 + 0xcf8);
  FUN_10834261c(unaff_x21 + 0xcf8,*(undefined4 *)(unaff_x19 + 0x1c));
  FUN_10834261c(unaff_x21 + 0xcf8,*(undefined4 *)(unaff_x19 + 0x20));
  uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
  puVar2 = (undefined4 *)(unaff_x21 + 0xcf8);
  FUN_1082a2c70(puVar2,4);
  *puVar2 = uVar1;
  return;
}



/* Entry: 108382bdc; end: 108382c0b;  */

void FUN_108382bdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  FUN_1082a2c70(param_1,0xc);
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 108382c0c; end: 108382c33;  */

void FUN_108382c0c(undefined4 param_1,undefined4 *param_2)

{
  FUN_1082a2c70(param_2,4);
  *param_2 = param_1;
  return;
}



/* Entry: 108382c34; end: 108382cf7;  */

void FUN_108382c34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = param_3;
  FUN_1083aa810(param_3,0xffffffffffffffff);
  if (param_4 == 0) {
    lVar2 = 4;
  }
  else {
    lVar2 = (*(long *)(param_4 + 0x20) + 3U & 0xfffffffffffffffc) + 4;
  }
  func_0x000108383108(lVar1 + lVar2 + 0x14);
  FUN_10838149c(param_1,0x35);
  FUN_108382f0c(param_1 + 0xcf8,param_2);
  FUN_1083aa7a0(param_1 + 0xcf8,param_3,0xffffffffffffffff);
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_4 + 0x20);
  }
  func_0x000108383234(param_1 + 0xcf8);
  if (param_4 != 0) {
    FUN_1082a2c38(param_1 + 0xcf8,iVar3);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 108382cf8; end: 108382d87;  */

void FUN_108382cf8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000108383380();
  uVar2 = 0x50;
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = 0x30;
  }
  func_0x000108383108(uVar2);
  FUN_10838149c();
  FUN_108382f0c(param_1 + 0xcf8,param_2);
  puVar1 = (undefined8 *)(param_1 + 0xcf8);
  func_0x000108383290();
  func_0x00010838316c();
  uVar2 = *param_5;
  puVar1[1] = param_5[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0xcf8);
  func_0x000108383234();
  func_0x0001083832bc();
  if (param_3 != (undefined8 *)0x0) {
    func_0x0001083832b0();
    uVar4 = *param_3;
    uVar3 = param_3[3];
    uVar2 = param_3[2];
    puVar1[1] = param_3[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  return;
}



/* Entry: 108382d88; end: 108382f03;  */

void FUN_108382d88(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  int *param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lStack_70;
  int iStack_68;
  int iStack_64;
  
  FUN_1083426b8(param_2,param_3,&iStack_64,&iStack_68);
  lVar3 = (long)iStack_64 * 8;
  lVar1 = 0x10;
  if (*param_6 != 0) {
    lVar1 = 4;
  }
  uVar4 = (uint)param_3;
  lStack_70 = lVar3 + (long)(int)uVar4 * 0x34 + (long)iStack_68 * 0x24 + lVar1 + 0x18;
  FUN_10838149c(param_1,0x4b,&lStack_70);
  FUN_10834261c(param_1 + 0xcf8,param_3);
  func_0x0001083832c8();
  func_0x0001083aa71c(param_1 + 0xcf8,param_6);
  func_0x0001083832bc();
  param_2 = param_2 + 0x34;
  for (uVar2 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_108382340(param_1,*(undefined8 *)(param_2 + -0x34));
    FUN_108382f0c(param_1 + 0xcf8,param_2 + -0x2c);
    FUN_108382f0c(param_1 + 0xcf8,param_2 + -0x1c);
    func_0x000108383220();
    FUN_108382c0c(*(undefined4 *)(param_2 + -8),param_1 + 0xcf8);
    func_0x000108383220();
    param_2 = param_2 + 0x38;
    func_0x000108383220();
  }
  FUN_10834261c(param_1 + 0xcf8,(long)iStack_64);
  func_0x000108342640(param_1 + 0xcf8,param_4,lVar3);
  func_0x0001083832d4(param_1 + 0xcf8);
  for (uVar2 = (long)iStack_68 & ((long)iStack_68 >> 0x3f ^ 0xffffffffffffffffU); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    func_0x0001083aa6e8(param_1 + 0xcf8,param_5);
    param_5 = param_5 + 0x28;
  }
  return;
}



/* Entry: 108382f04; end: 108382f0b;  */

void FUN_108382f04(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108382f0c; end: 108382f87;  */

void FUN_108382f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1082a2c70(param_1,0x10);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 108382f88; end: 108382f8b;  */

long FUN_108382f88(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  long alStack_38 [3];
  
  *param_1 = &PTR_FUN_110a3f0c8;
  FUN_10837fb94(param_1 + 0x1ae);
  FUN_10837fc3c(param_1 + 0x1ac);
  FUN_10837fcc0(param_1 + 0x1aa);
  FUN_10837fd44(param_1 + 0x1a8);
  FUN_10837fda4(param_1 + 0x1a6);
  FUN_10837fe4c(param_1 + 0x1a4);
  func_0x00010815277c(param_1 + 0x1a3);
  func_0x00010837feac(param_1 + 0x19e);
  FUN_10837ff68(param_1 + 0x19b);
  FUN_10840f118(param_1 + 0x198);
  FUN_10840f118(param_1 + 0x195);
  func_0x000108341ffc(param_1);
  FUN_10840ed0c(alStack_38,unaff_x19 + 0xc08,0);
  while( true ) {
    plVar1 = alStack_38;
    func_0x00010840ed64();
    if (plVar1 == (long *)0x0) break;
    if (*plVar1 != 0) {
      *(undefined1 *)(*plVar1 + 0x71) = 1;
    }
  }
  FUN_10833baf4(unaff_x19,1);
  FUN_10833c008(unaff_x19);
  func_0x000108342358();
  func_0x0001083422ac();
  FUN_10830c294(unaff_x19 + 0xc48);
  FUN_10840eaf0(unaff_x19 + 0xc08);
  return unaff_x19;
}



/* Entry: 108382f8c; end: 108382f9f;  */

void FUN_108382f8c(void)

{
  FUN_10837fb0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108382fa0; end: 108382fa7;  */

undefined8 FUN_108382fa0(void)

{
  return 0;
}



/* Entry: 108382fa8; end: 108382fc3;  */

uint FUN_108382fa8(uint param_1)

{
  func_0x0001083772e0();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 108382fc4; end: 108383097;  */

uint * FUN_108382fc4(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *unaff_x19;
  uint *unaff_x20;
  int iVar5;
  uint uVar6;
  
  func_0x00010838323c();
  FUN_108382fa8();
  iVar5 = 0;
  iVar4 = unaff_x19[1];
  uVar2 = (uint)param_2;
  uVar6 = iVar4 - 1U & uVar2;
  while( true ) {
    if (iVar4 <= iVar5) {
      return param_2;
    }
    puVar3 = (uint *)(*(long *)(unaff_x19 + 2) + (long)(int)uVar6 * 0x20);
    if (*puVar3 == 0) break;
    if (uVar2 == *puVar3) {
      param_2 = unaff_x20;
      func_0x000108376bec();
      if (((ulong)param_2 & 1) != 0) {
        FUN_10837ff38();
        func_0x000108376b14(puVar3 + 2);
        puVar3[6] = unaff_x20[4];
        *puVar3 = uVar2;
        return puVar3;
      }
      iVar4 = unaff_x19[1];
    }
    iVar1 = 0;
    if ((int)uVar6 < 1) {
      iVar1 = iVar4;
    }
    uVar6 = (uVar6 + iVar1) - 1;
    iVar5 = iVar5 + 1;
  }
  FUN_108383098(puVar3);
  *unaff_x19 = *unaff_x19 + 1;
  return puVar3;
}



/* Entry: 108383098; end: 1083830e3;  */

undefined4 * FUN_108383098(undefined4 *param_1,long param_2,undefined4 param_3)

{
  FUN_10837ff38();
  func_0x000108376b14(param_1 + 2,param_2);
  param_1[6] = *(undefined4 *)(param_2 + 0x10);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1083830e4; end: 108383397;  */

void FUN_1083830e4(undefined4 *param_1,undefined4 param_2)

{
  FUN_1082a2c70(param_1,4);
  *param_1 = param_2;
  return;
}



/* Entry: 108383398; end: 10838343b;  */

undefined1 * FUN_108383398(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_10838343c(&uStack_38,&uStack_40,&uStack_50);
  uVar1 = uStack_38;
  uStack_38 = 0;
  FUN_108383a48(param_1 + 0x20,uVar1);
  FUN_108383a28(&uStack_38);
  return param_1;
}



/* Entry: 10838343c; end: 10838348f;  */

void FUN_10838343c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xcc0;
  __Znwm();
  FUN_10838c830();
  *param_1 = uVar1;
  return;
}



/* Entry: 108383490; end: 1083834c3;  */

long FUN_108383490(long param_1)

{
  FUN_108383980(param_1 + 0x28);
  FUN_108383a28(param_1 + 0x20);
  func_0x00010813f820(param_1 + 0x18);
  return param_1;
}



/* Entry: 1083834c4; end: 108383587;  */

undefined8 FUN_1083834c4(undefined1 *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((param_2[2] <= *param_2) || (param_2[3] <= param_2[1])) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 2);
    uStack_40 = *(undefined8 *)param_2;
  }
  *(undefined8 *)(param_1 + 0xc) = uStack_38;
  *(undefined8 *)(param_1 + 4) = uStack_40;
  FUN_108383588(param_1 + 0x18,param_3);
  plVar3 = (long *)(param_1 + 0x28);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
    uVar1 = 0x48;
    __Znwm(0x48);
    FUN_1083838c0();
    FUN_1083835b4(plVar3,uVar1);
    lVar2 = *plVar3;
  }
  FUN_10838c8e8(*(undefined8 *)(param_1 + 0x20),lVar2,&uStack_40);
  *param_1 = 1;
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108383588; end: 1083835b3;  */

undefined8 FUN_108383588(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x00010813f870(param_1,uVar1);
  return param_1;
}



/* Entry: 1083835b4; end: 1083835c3;  */

void FUN_1083835b4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x0001083839cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083835c4; end: 10838362b;  */

undefined8 FUN_1083835c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  
  if (param_3 == (undefined8 *)0x0) {
    uStack_28 = 0;
  }
  else {
    (**(code **)*param_3)(&uStack_28,param_3);
  }
  FUN_1083834c4(param_1,param_2,&uStack_28);
  func_0x000108383c20();
  return param_2;
}



/* Entry: 10838362c; end: 108383847;  */

void FUN_10838362c(void)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  func_0x000108383bc4();
  if (*(int *)(*(long *)(unaff_x20 + 0x28) + 0xc) == 0) {
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_10837f79c();
    *puVar5 = &PTR_FUN_110a3f2b0;
    *unaff_x19 = puVar5;
  }
  else {
    func_0x00010838c3d4();
    plStack_50 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0xcb8);
    if (plStack_50 != (long *)0x0) {
      FUN_10838c760();
    }
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      FUN_108383848(&lStack_60,*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0xc));
      FUN_108383b38(&uStack_48,(long)*(int *)(*(long *)(unaff_x20 + 0x28) + 0xc));
      func_0x000108383be4();
      func_0x000108383bfc();
      func_0x000108383c14();
      plStack_70 = (long *)0x0;
      uStack_68 = 0;
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x28) + 0xc);
      lVar6 = lStack_60;
      lVar7 = lStack_58;
      for (uVar8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar8 != 0;
          uVar8 = uVar8 - 1) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1083837ec);
          (*pcVar3)();
        }
        func_0x00010838ed50(&plStack_70,lVar6);
        lVar7 = lVar7 + -1;
        lVar6 = lVar6 + 0x10;
      }
      *(undefined8 *)(unaff_x20 + 0xc) = uStack_68;
      *(long **)(unaff_x20 + 4) = plStack_70;
      func_0x000108383bf4();
      FUN_108383954(&lStack_60);
    }
    for (lVar6 = 0; (plVar2 = plStack_50, plStack_50 != (long *)0x0 && (lVar6 < (int)plStack_50[1]))
        ; lVar6 = lVar6 + 1) {
      (**(code **)(**(long **)(*plStack_50 + lVar6 * 8) + 0x30))();
    }
    uVar4 = 0x48;
    __Znwm();
    lStack_60 = *(long *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    plStack_70 = plVar2;
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    plStack_50 = (long *)0x0;
    FUN_1083300f4();
    func_0x00010813f820(&uStack_48);
    FUN_108383ae4(&plStack_70);
    FUN_108383980(&lStack_60);
    uStack_78 = 0;
    *unaff_x19 = uVar4;
    FUN_108383b70(&uStack_78);
    FUN_108383ae4(&plStack_50);
  }
  return;
}



/* Entry: 108383848; end: 1083838bf;  */

long * FUN_108383848(long *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < param_2) {
    param_1[1] = (long)param_2;
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (long)param_2 << 4;
      __Znam();
      _bzero();
    }
    *param_1 = lVar2;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083838ac);
  (*pcVar1)();
}



/* Entry: 1083838c0; end: 108383923;  */

undefined8 * FUN_1083838c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3f5e0;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  FUN_108186568(param_1 + 4,0x100);
  param_1[8] = 0;
  return param_1;
}



/* Entry: 108383924; end: 108383943;  */

void FUN_108383924(void)

{
  func_0x000108383c2c();
  FUN_108383944();
  return;
}



/* Entry: 108383944; end: 108383953;  */

void FUN_108383944(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 108383954; end: 10838397f;  */

long * FUN_108383954(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 108383980; end: 1083839a7;  */

undefined8 * FUN_108383980(undefined8 *param_1)

{
  FUN_1083839a8(*param_1);
  return param_1;
}



/* Entry: 1083839a8; end: 1083839d3;  */

void FUN_1083839a8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001083839cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1083839d4; end: 1083839f3;  */

void FUN_1083839d4(void)

{
  func_0x000108383c2c();
  FUN_1083839f4();
  return;
}



/* Entry: 1083839f4; end: 108383a0b;  */

void FUN_1083839f4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10838c6e8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108383a0c; end: 108383a27;  */

void FUN_108383a0c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10838c6e8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383a28; end: 108383a47;  */

void FUN_108383a28(void)

{
  func_0x000108383c2c();
  FUN_108383a48();
  return;
}



/* Entry: 108383a48; end: 108383a5f;  */

void FUN_108383a48(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108383a7c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108383a60; end: 108383a7b;  */

void FUN_108383a60(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108383a7c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383a7c; end: 108383aa3;  */

long FUN_108383a7c(long param_1)

{
  long *plVar1;
  long unaff_x19;
  long alStack_38 [3];
  
  FUN_1083839d4(param_1 + 0xcb8);
  func_0x000108341ffc(param_1);
  FUN_10840ed0c(alStack_38,unaff_x19 + 0xc08,0);
  while( true ) {
    plVar1 = alStack_38;
    func_0x00010840ed64();
    if (plVar1 == (long *)0x0) break;
    if (*plVar1 != 0) {
      *(undefined1 *)(*plVar1 + 0x71) = 1;
    }
  }
  FUN_10833baf4(unaff_x19,1);
  FUN_10833c008(unaff_x19);
  func_0x000108342358();
  func_0x0001083422ac();
  FUN_10830c294(unaff_x19 + 0xc48);
  FUN_10840eaf0(unaff_x19 + 0xc08);
  return unaff_x19;
}



/* Entry: 108383aa4; end: 108383aa7;  */

undefined8 * FUN_108383aa4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3f060;
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_108392418((ulong)*(uint *)((long)param_1 + 0xc) | 0x7069637400000000);
  }
  return param_1;
}



/* Entry: 108383aa8; end: 108383abb;  */

void FUN_108383aa8(void)

{
  FUN_10837f7d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383abc; end: 108383ae3;  */

void FUN_108383abc(void)

{
  return;
}



/* Entry: 108383ae4; end: 108383b03;  */

void FUN_108383ae4(void)

{
  func_0x000108383c2c();
  FUN_108383b04();
  return;
}



/* Entry: 108383b04; end: 108383b1b;  */

void FUN_108383b04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10833039c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108383b1c; end: 108383b37;  */

void FUN_108383b1c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10833039c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383b38; end: 108383b6f;  */

long * FUN_108383b38(long *param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    FUN_10840ffdc(param_2,1);
  }
  *param_1 = param_2;
  return param_1;
}



/* Entry: 108383b70; end: 108383bbb;  */

long * FUN_108383b70(long *param_1)

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



/* Entry: 108383bbc; end: 108383ca3;  */

void FUN_108383bbc(void)

{
  return;
}



/* Entry: 108383ca4; end: 108383cdf;  */

undefined8 * FUN_108383ca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3f318;
  FUN_108383ce0();
  FUN_108355184(param_1 + 6);
  return param_1;
}



/* Entry: 108383ce0; end: 108383d47;  */

void FUN_108383ce0(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
    func_0x000108355580(param_1 + 0x30);
    FUN_1083553e8(unaff_x19 + 0x18);
    func_0x000108355578();
    return;
  }
  FUN_108355370(param_1 + 0x30);
  pbVar1 = (byte *)(param_1 + 0x58);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    func_0x000108383d88();
    uVar5 = param_1 & 0xffffffff | 0x626d617000000000;
    if (uVar5 != 0) {
      uVar6 = uVar5;
      FUN_1083919e4();
      func_0x000108392b94(uVar6 + 0x18);
      for (lVar7 = 0; lVar7 < *(int *)(uVar6 + 0x14); lVar7 = lVar7 + 1) {
        FUN_108392a90(*(undefined8 *)(*(long *)(uVar6 + 8) + lVar7 * 8),uVar5);
      }
      func_0x000108392b78();
      return;
    }
    return;
  }
  return;
}



/* Entry: 108383d48; end: 108383d4b;  */

undefined8 * FUN_108383d48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3f318;
  FUN_108383ce0();
  FUN_108355184(param_1 + 6);
  return param_1;
}



/* Entry: 108383d4c; end: 108383d5f;  */

void FUN_108383d4c(void)

{
  FUN_108383ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383d60; end: 108383de3;  */

void FUN_108383d60(long param_1)

{
  FUN_108383ce0();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 108383de4; end: 108383e4b;  */

void FUN_108383de4(long param_1,long *param_2)

{
  long lStack_28;
  
  if ((*param_2 != 0) && ((*(uint *)(param_1 + 0x28) & 1) != 0)) {
    lStack_28 = *param_2;
    *param_2 = 0;
    FUN_1083551f8(param_1 + 0x30,&lStack_28);
    FUN_1082b91e4(&lStack_28);
  }
  return;
}



/* Entry: 108383e4c; end: 108383ef7;  */

void FUN_108383e4c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_68 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_54 = param_2;
  if (param_6 == 0) {
    FUN_108383ef8(param_1,&uStack_54,&uStack_58,&uStack_68,&uStack_60);
  }
  else {
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    func_0x000108383c58();
    *puVar1 = &PTR_FUN_110a3f360;
    puVar1[0xc] = param_6;
    puVar1[0xd] = param_7;
    *param_1 = puVar1;
  }
  return;
}



/* Entry: 108383ef8; end: 108383f53;  */

void FUN_108383ef8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  func_0x000108383c58();
  *param_1 = uVar1;
  return;
}



/* Entry: 108383f54; end: 108383f83;  */

undefined8 * FUN_108383f54(undefined8 *param_1)

{
  (*(code *)param_1[0xc])(param_1[3],param_1[0xd]);
  *param_1 = &PTR_FUN_110a3f318;
  FUN_108383ce0();
  FUN_108355184(param_1 + 6);
  return param_1;
}



/* Entry: 108383f84; end: 108383f97;  */

void FUN_108383f84(void)

{
  FUN_108383f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108383f98; end: 108383fcf;  */

void FUN_108383f98(undefined8 *param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001078bddd4(param_1 + 2,&uStack_38);
  func_0x000108384614();
  return;
}



/* Entry: 108383fd0; end: 10838404f;  */

bool FUN_108383fd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar2 = *(char *)((long)param_2 + 0x1c);
  if (cVar2 == '\x01') {
    uStack_28 = CONCAT44(*(int *)((long)param_2 + 0x14) - *(int *)((long)param_2 + 0xc),
                         *(int *)(param_2 + 2) - *(int *)(param_2 + 1));
    uStack_38 = 0;
    uStack_30 = 0x200000001;
    uVar1 = *(uint *)(param_2 + 3);
    *param_1 = *param_2;
    param_1[1] = (ulong)uVar1;
    func_0x000108152830(param_1 + 2,&uStack_38);
    func_0x000108384614();
  }
  else {
    FUN_108383f98();
  }
  return cVar2 == '\x01';
}



/* Entry: 108384050; end: 1083840a3;  */

void FUN_108384050(long param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  uStack_40 = 0;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001078bddd4(param_1 + 0x10,&uStack_38);
  func_0x000108384614();
  FUN_10810a400(&uStack_40);
  return;
}



/* Entry: 1083840a4; end: 10838417f;  */

undefined8 * FUN_1083840a4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = param_1[4];
  puVar4 = &uStack_50;
  FUN_10838ea90(puVar4,&uStack_40);
  if ((int)puVar4 != 0) {
    lVar6 = *param_1;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      iVar3 = (int)param_1 + 0x10;
      func_0x00010835c63c();
      lVar6 = lVar6 + param_1[1] * (long)uStack_50._4_4_ + (long)(int)uStack_50 * (long)iVar3;
    }
    uStack_58 = CONCAT44(uStack_48._4_4_ - uStack_50._4_4_,(int)uStack_48 - (int)uStack_50);
    piStack_68 = (int *)param_1[2];
    if (piStack_68 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_68,0x10);
        if (bVar2) {
          *piStack_68 = *piStack_68 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lStack_60 = param_1[3];
    lVar5 = param_1[1];
    *param_2 = lVar6;
    param_2[1] = lVar5;
    func_0x000108152830(param_2 + 2,&piStack_68);
    func_0x000108384614();
  }
  return puVar4;
}



/* Entry: 108384180; end: 1083842ab;  */

int ** FUN_108384180(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int **ppiVar6;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = param_2;
  func_0x0001083845c4();
  if ((int)puVar4 != 0) {
    iVar3 = (int)param_1 + 0x10;
    func_0x0001083845c4();
    if (iVar3 != 0) {
      piStack_60 = (int *)*param_2;
      if (piStack_60 != (int *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piStack_60,0x10);
          if (bVar2) {
            *piStack_60 = *piStack_60 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_50 = param_2[2];
      uStack_58 = param_2[1];
      puVar4 = &uStack_70;
      uStack_70 = param_3;
      uStack_68 = param_4;
      uStack_48 = param_5;
      uStack_44 = param_6;
      FUN_10838a794(puVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
      if (((ulong)puVar4 & 1) == 0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        lVar5 = param_1;
        FUN_108152238(param_1,uStack_48,uStack_44);
        piStack_88 = *(int **)(param_1 + 0x10);
        if (piStack_88 != (int *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
            if (bVar2) {
              *piStack_88 = *piStack_88 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_80 = *(undefined8 *)(param_1 + 0x18);
        uStack_78 = uStack_50;
        ppiVar6 = &piStack_60;
        FUN_108345950(ppiVar6,uStack_70,uStack_68,&piStack_88,lVar5,*(undefined8 *)(param_1 + 8));
        func_0x000108384614();
      }
      FUN_10810a400(&piStack_60);
      return ppiVar6;
    }
  }
  return (int **)0x0;
}



/* Entry: 1083842ac; end: 1083842f3;  */

void FUN_1083842ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_108343500(param_6);
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_1083842f4(param_5,&uStack_30,param_7);
  return;
}



/* Entry: 1083842f4; end: 1083844ff;  */

int ** FUN_1083842f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int **ppiVar7;
  int iVar8;
  long lVar9;
  int **ppiVar10;
  int iVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int *piStack_50;
  int *piStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_5 + 0x18) == 0) {
LAB_1083843f4:
    ppiVar10 = (int **)0x0;
  }
  else {
    uStack_58 = *(undefined8 *)(param_5 + 0x20);
    uStack_60 = 0;
    if (param_7 != 0) {
      puVar6 = &uStack_60;
      func_0x00010821b838(puVar6,param_7);
      if ((int)puVar6 == 0) goto LAB_1083843f4;
    }
    FUN_108384500(param_6);
    piStack_88 = *(int **)(param_5 + 0x10);
    uStack_80 = *(undefined8 *)(param_5 + 0x18);
    if (piStack_88 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_88,0x10);
        if (bVar2) {
          *piStack_88 = *piStack_88 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_90 = 0;
    uStack_78 = 0x100000001;
    uStack_70 = param_1;
    uStack_6c = param_2;
    uStack_68 = param_3;
    uStack_64 = param_4;
    FUN_10810a400(&uStack_90);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0x100000001;
    uStack_a0 = 0x200000012;
    FUN_10810a400(&uStack_b0);
    piStack_50 = (int *)0x0;
    piStack_48 = (int *)0x0;
    ppiVar10 = &piStack_88;
    FUN_108345950(ppiVar10,&piStack_50,0x10,&uStack_a8,&uStack_70,0x10);
    piVar4 = piStack_48;
    piVar3 = piStack_50;
    if (((ulong)ppiVar10 & 1) != 0) {
      lVar9 = 0;
      switch(*(undefined4 *)(param_5 + 0x18)) {
      case 0:
      case 1:
      case 0xe:
      case 0x1a:
        break;
      case 2:
      case 3:
      case 0x13:
      case 0x14:
      case 0x16:
        lVar9 = 1;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0x15:
      case 0x17:
      case 0x19:
        lVar9 = 2;
        break;
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x18:
        lVar9 = 3;
        break;
      case 0x12:
        ppiVar7 = ppiVar10;
        for (iVar11 = uStack_60._4_4_; iVar11 < uStack_58._4_4_; iVar11 = iVar11 + 1) {
          func_0x000108384624();
          iVar8 = (int)uStack_58 - (int)uStack_60;
          while (0 < iVar8) {
            ppiVar7[1] = piVar4;
            *ppiVar7 = piVar3;
            ppiVar7 = ppiVar7 + 2;
            iVar8 = iVar8 + -1;
          }
        }
        goto LAB_108384490;
      default:
        goto LAB_1083844d4;
      }
      pcVar5 = (code *)(&PTR_DAT_110a3f398)[lVar9];
      for (iVar11 = uStack_60._4_4_; iVar11 < uStack_58._4_4_; iVar11 = iVar11 + 1) {
        func_0x000108384624();
        (*pcVar5)();
      }
    }
LAB_108384490:
    FUN_10810a400(&uStack_a8);
    FUN_10810a400(&piStack_88);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppiVar10;
  }
  ___stack_chk_fail();
LAB_1083844d4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1083844d8);
  (*pcVar5)();
}



/* Entry: 108384500; end: 10838463b;  */

float FUN_108384500(float *param_1)

{
  return *param_1 * param_1[3];
}



/* Entry: 10838463c; end: 108384937;  */

undefined1 *
FUN_10838463c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined1 auStack_120 [8];
  undefined8 auStack_118 [2];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long alStack_f8 [2];
  undefined1 auStack_e8 [40];
  long alStack_c0 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [12];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_10814105c(auStack_58,param_5);
  FUN_10814105c(&uStack_80,param_6);
  if ((((iStack_38 < 1) || (iStack_34 < 1)) || (iStack_60 < 1)) || (iStack_5c < 1)) {
    puVar5 = (undefined1 *)0x0;
  }
  else if (iStack_38 == iStack_60 && iStack_34 == iStack_5c) {
    puVar5 = auStack_58;
    func_0x0001082a53c8(puVar5,&uStack_80);
  }
  else {
    if (iStack_3c == 3 && iStack_64 == 3) {
      FUN_10814bd9c(&uStack_170,auStack_48,2);
      func_0x000108384940();
      func_0x00010838494c();
      FUN_10814bd9c(&uStack_170,auStack_70,1);
      func_0x000108384940();
      func_0x00010838494c();
    }
    alStack_c0[6] = 0;
    uVar6 = 0;
    alStack_c0[3] = 0;
    alStack_c0[2] = 0;
    alStack_c0[5] = 0;
    alStack_c0[4] = 0;
    alStack_c0[1] = 0;
    alStack_c0[0] = 0;
    plVar4 = alStack_c0;
    FUN_108330c70(plVar4,auStack_58);
    if (((ulong)plVar4 & 1) == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      if (alStack_c0[0] != 0) {
        *(undefined1 *)(alStack_c0[0] + 0x59) = 2;
      }
      alStack_f8[0] = 0;
      FUN_10817500c(alStack_f8);
      uStack_170 = CONCAT44(param_2,uVar6);
      uStack_168 = CONCAT44(param_4,param_3);
      auStack_118[0] = 0;
      FUN_10817500c(auStack_118);
      uStack_108 = uVar6;
      uStack_104 = param_2;
      uStack_100 = param_3;
      uStack_fc = param_4;
      FUN_10814c9e0(auStack_e8,&uStack_170,&uStack_108,0);
      func_0x0001083b812c(auStack_120,alStack_c0);
      FUN_1083bb384(alStack_f8,auStack_120,0,0,param_7,auStack_e8,iStack_3c == 3 && iStack_64 == 3);
      func_0x000106f47184(auStack_120);
      FUN_1083b9a30(&uStack_108,auStack_70,uStack_80,uStack_78,0);
      bVar3 = CONCAT44(uStack_104,uStack_108) != 0;
      puVar5 = (undefined1 *)(ulong)(alStack_f8[0] != 0 && bVar3);
      if (alStack_f8[0] != 0 && bVar3) {
        uStack_13c = 0;
        uStack_140 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_134 = 0x3f800000;
        uStack_12c = 0x40800000;
        FUN_1083762f4(&uStack_170,1);
        lVar2 = alStack_f8[0];
        uVar1 = uStack_168;
        alStack_f8[0] = 0;
        uStack_178 = 0;
        uStack_168 = lVar2;
        FUN_108114eec(uVar1);
        func_0x000106f47224(&uStack_178);
        plVar4 = (long *)CONCAT44(uStack_104,uStack_108);
        FUN_1083b8df0();
        (**(code **)(*plVar4 + 0xa8))();
        FUN_108375e94(&uStack_170);
      }
      func_0x000106f471d4(&uStack_108);
      func_0x000106f47224(alStack_f8);
    }
    FUN_108330548(alStack_c0);
  }
  func_0x000108384938(&uStack_80);
  func_0x000108384938(auStack_58);
  return puVar5;
}



/* Entry: 108384938; end: 10838497b;  */

long * FUN_108384938(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001078bdee8();
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 10838497c; end: 1083849b3;  */

undefined4 FUN_10838497c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = (int)param_1;
  FUN_1083849b4(*param_1,param_1[1],0x3f800000,iVar1,&uStack_14);
  if (iVar1 == 0) {
    uStack_14 = 0;
  }
  return uStack_14;
}


