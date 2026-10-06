/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c15a34; end: 103c15a67;  */

void FUN_103c15a34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c15a68; end: 103c15a8b; -[_TtC20PresenceServicesImpl21GameEventListenerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c15a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff8140));
  return;
}



/* Entry: 103c15a8c; end: 103c15aab;  */

void FUN_103c15a8c(void)

{
  func_0x000107c61168(&PTR_PTR_112946570);
  return;
}



/* Entry: 103c15aac; end: 103c15b2b;  */

undefined8 FUN_103c15aac(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c15b2c; end: 103c15b43;  */

void FUN_103c15b2c(undefined8 param_1)

{
  if (lRam0000000112ff81d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b9e64);
  return;
}



/* Entry: 103c15b44; end: 103c15cf7;  */

void FUN_103c15b44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,*unaff_x20,unaff_x20[1]);
  func_0x000107c606a0(unaff_x20[2]);
  uVar1 = 0;
  func_0x000107c5eec8(0);
  uVar2 = 0x112d6c668;
  FUN_103c160f8(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                PTR___s10Foundation4UUIDVSHAAMc_110350c48);
  func_0x000107c5fa50(auStack_78,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c15cf8; end: 103c15cfb;  */

undefined8 FUN_103c15cf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong auStack_70 [2];
  
  uVar2 = 0;
  auStack_70[1] = param_2;
  FUN_103c15b2c();
  auStack_70[0] = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar2 - 8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (ulong *)((long)auStack_70 + lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (ulong *)((long)puVar8 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (ulong *)((long)puVar7 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (ulong *)((long)puVar10 - extraout_x12_01);
  lVar3 = 0;
  FUN_103c16714();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar6 - extraout_x12_02;
  lVar4 = 0x112ff82b8;
  func_0x0001000285a8(0x112ff82b8,&UNK_10dc66f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar12 - extraout_x8_01;
  lVar11 = (long)*(int *)(lVar4 + 0x30);
  FUN_103c15984(param_1,lVar5);
  FUN_103c15984(auStack_70[1],lVar5 + lVar11);
  lVar4 = lVar5;
  func_0x000107c614c4(lVar5,lVar3);
  if ((int)lVar4 == 1) {
    FUN_103c15984(lVar5,lVar6);
    lVar4 = lVar5 + lVar11;
    func_0x000107c614c4(lVar4,lVar3);
    if ((int)lVar4 == 1) {
      func_0x000101b643b8(lVar6,puVar7);
      func_0x000101b643b8(lVar5 + lVar11,puVar8);
      uVar2 = *puVar7;
      puVar9 = puVar7;
      if (((uVar2 == *puVar8 && puVar7[1] == *(ulong *)((long)auStack_70 + lVar1 + 8)) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
         (puVar7[2] == *(ulong *)(&stack0xffffffffffffffa0 + lVar1))) {
        uVar2 = (long)puVar7 + (long)*(int *)(auStack_70[0] + 0x18);
        func_0x000107c5eeb4(uVar2,(long)puVar8 + (long)*(int *)(auStack_70[0] + 0x18));
        if ((uVar2 & 1) != 0) {
          func_0x000103c16934(puVar8,FUN_103c15b2c);
LAB_103c1601c:
          func_0x000103c16934(puVar9,FUN_103c15b2c);
          func_0x000103c16934(lVar5,FUN_103c16714);
          return 1;
        }
      }
      func_0x000103c16934(puVar8,FUN_103c15b2c);
LAB_103c16090:
      func_0x000103c16934(puVar9,FUN_103c15b2c);
      func_0x000103c16934(lVar5,FUN_103c16714);
      return 0;
    }
  }
  else {
    FUN_103c15984(lVar5,lVar12);
    lVar4 = lVar5 + lVar11;
    func_0x000107c614c4(lVar4,lVar3);
    lVar6 = lVar12;
    if ((int)lVar4 != 1) {
      func_0x000101b643b8(lVar12,puVar9);
      func_0x000101b643b8(lVar5 + lVar11,puVar10);
      uVar2 = *puVar9;
      if (((uVar2 == *puVar10 && puVar9[1] == puVar10[1]) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (puVar9[2] == puVar10[2])) {
        uVar2 = (long)puVar9 + (long)*(int *)(auStack_70[0] + 0x18);
        func_0x000107c5eeb4(uVar2,(long)puVar10 + (long)*(int *)(auStack_70[0] + 0x18));
        if ((uVar2 & 1) != 0) {
          func_0x000103c16934(puVar10,FUN_103c15b2c);
          goto LAB_103c1601c;
        }
      }
      func_0x000103c16934(puVar10,FUN_103c15b2c);
      goto LAB_103c16090;
    }
  }
  func_0x000103c16934(lVar6,FUN_103c15b2c);
  func_0x000103c16970(lVar5);
  return 0;
}



/* Entry: 103c15cfc; end: 103c15d73;  */

long FUN_103c15cfc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    lVar2 = 0;
    FUN_103c15b2c();
    lVar3 = (long)param_1 + (long)*(int *)(lVar2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdb524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4UUIDV2eeoiySbAC_ACtFZ_110350c10)
              (lVar3,(long)param_2 + (long)*(int *)(lVar2 + 0x18));
    return lVar3;
  }
  return 0;
}



/* Entry: 103c15d74; end: 103c160cb;  */

undefined8 FUN_103c15d74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong auStack_70 [2];
  
  uVar2 = 0;
  auStack_70[1] = param_2;
  FUN_103c15b2c();
  auStack_70[0] = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar2 - 8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (ulong *)((long)auStack_70 + lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = (ulong *)((long)puVar8 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar10 = (ulong *)((long)puVar7 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (ulong *)((long)puVar10 - extraout_x12_01);
  lVar3 = 0;
  FUN_103c16714();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar6 - extraout_x12_02;
  lVar4 = 0x112ff82b8;
  func_0x0001000285a8(0x112ff82b8,&UNK_10dc66f20);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar12 - extraout_x8_01;
  lVar11 = (long)*(int *)(lVar4 + 0x30);
  FUN_103c15984(param_1,lVar5);
  FUN_103c15984(auStack_70[1],lVar5 + lVar11);
  lVar4 = lVar5;
  func_0x000107c614c4(lVar5,lVar3);
  if ((int)lVar4 == 1) {
    FUN_103c15984(lVar5,lVar6);
    lVar4 = lVar5 + lVar11;
    func_0x000107c614c4(lVar4,lVar3);
    if ((int)lVar4 == 1) {
      func_0x000101b643b8(lVar6,puVar7);
      func_0x000101b643b8(lVar5 + lVar11,puVar8);
      uVar2 = *puVar7;
      puVar9 = puVar7;
      if (((uVar2 == *puVar8 && puVar7[1] == *(ulong *)((long)auStack_70 + lVar1 + 8)) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
         (puVar7[2] == *(ulong *)(&stack0xffffffffffffffa0 + lVar1))) {
        uVar2 = (long)puVar7 + (long)*(int *)(auStack_70[0] + 0x18);
        func_0x000107c5eeb4(uVar2,(long)puVar8 + (long)*(int *)(auStack_70[0] + 0x18));
        if ((uVar2 & 1) != 0) {
          func_0x000103c16934(puVar8,FUN_103c15b2c);
LAB_103c1601c:
          func_0x000103c16934(puVar9,FUN_103c15b2c);
          func_0x000103c16934(lVar5,FUN_103c16714);
          return 1;
        }
      }
      func_0x000103c16934(puVar8,FUN_103c15b2c);
LAB_103c16090:
      func_0x000103c16934(puVar9,FUN_103c15b2c);
      func_0x000103c16934(lVar5,FUN_103c16714);
      return 0;
    }
  }
  else {
    FUN_103c15984(lVar5,lVar12);
    lVar4 = lVar5 + lVar11;
    func_0x000107c614c4(lVar4,lVar3);
    lVar6 = lVar12;
    if ((int)lVar4 != 1) {
      func_0x000101b643b8(lVar12,puVar9);
      func_0x000101b643b8(lVar5 + lVar11,puVar10);
      uVar2 = *puVar9;
      if (((uVar2 == *puVar10 && puVar9[1] == puVar10[1]) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (puVar9[2] == puVar10[2])) {
        uVar2 = (long)puVar9 + (long)*(int *)(auStack_70[0] + 0x18);
        func_0x000107c5eeb4(uVar2,(long)puVar10 + (long)*(int *)(auStack_70[0] + 0x18));
        if ((uVar2 & 1) != 0) {
          func_0x000103c16934(puVar10,FUN_103c15b2c);
          goto LAB_103c1601c;
        }
      }
      func_0x000103c16934(puVar10,FUN_103c15b2c);
      goto LAB_103c16090;
    }
  }
  func_0x000103c16934(lVar6,FUN_103c15b2c);
  func_0x000103c16970(lVar5);
  return 0;
}



/* Entry: 103c160cc; end: 103c160f7;  */

void FUN_103c160cc(void)

{
  FUN_103c160f8(0x112ff8170,FUN_103c15b2c,&UNK_10dc66e30);
  return;
}



/* Entry: 103c160f8; end: 103c16137;  */

void FUN_103c160f8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c16138; end: 103c161d7;  */

long * FUN_103c16138(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    param_1[2] = param_2[2];
    iVar2 = *(int *)(param_3 + 0x18);
    lVar3 = 0;
    func_0x000107c5eec8();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c161d8; end: 103c1621b;  */

void FUN_103c161d8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000103c16218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103c1621c; end: 103c1628f;  */

undefined8 * FUN_103c1621c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eec8();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar4)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 103c16290; end: 103c163d7;  */

undefined8 * FUN_103c16290(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 103c163d8; end: 103c163ef;  */

void FUN_103c163d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103c163f0; end: 103c1646f;  */

void FUN_103c163f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dc66ef8;
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103c16470; end: 103c16553;  */

long * FUN_103c16470(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    param_1[2] = param_2[2];
    lVar4 = 0;
    FUN_103c15b2c();
    iVar2 = *(int *)(lVar4 + 0x18);
    lVar4 = 0;
    func_0x000107c5eec8();
    pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
    func_0x000107c61434(lVar5);
    (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
    func_0x000107c6159c(param_1,param_3,(int)plVar3 == 1);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c16554; end: 103c1659b;  */

void FUN_103c16554(long param_1)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  lVar2 = 0;
  FUN_103c15b2c();
  iVar1 = *(int *)(lVar2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000103c16598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103c1659c; end: 103c16713;  */

undefined8 * FUN_103c1659c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  lVar4 = 0;
  FUN_103c15b2c();
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar4 = 0;
  func_0x000107c5eec8();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar5)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar4);
  func_0x000107c6159c(param_1,param_3,(int)puVar3 == 1);
  return param_1;
}



/* Entry: 103c16714; end: 103c16727;  */

void FUN_103c16714(undefined8 param_1)

{
  if (lRam0000000112ff8280 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b9e8c);
  return;
}



/* Entry: 103c16728; end: 103c16757;  */

void FUN_103c16728(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 103c16758; end: 103c1689f;  */

undefined8 * FUN_103c16758(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  lVar3 = 0;
  FUN_103c15b2c();
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  func_0x000107c6159c(param_1,param_3,(int)puVar2 == 1);
  return param_1;
}



/* Entry: 103c168a0; end: 103c168cf;  */

void FUN_103c168a0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103c168a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103c168d0; end: 103c169b7;  */

void FUN_103c168d0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_103c15b2c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = lStack_30;
    func_0x000107c61528(param_1,0x100,2,&lStack_30);
  }
  return;
}



/* Entry: 103c169b8; end: 103c169d7; -[SCActiveUserScopedValdiRuntimeServices valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c169b8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff82c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c169d8; end: 103c16a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c169d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff82c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c16a24; end: 103c16a57;  */

void FUN_103c16a24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c16a58; end: 103c16a67; -[SCActiveUserScopedValdiRuntimeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c16a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff82c0));
  return;
}



/* Entry: 103c16a68; end: 103c16ae3; -[SCDeviceLockStateProvider isDeviceUnlocked] */

uint FUN_103c16a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4a28c();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___LAContext_1126a7db8;
  func_0x000107c610f8(PTR__OBJC_CLASS___LAContext_1126a7db8);
  func_0x000107c453e4();
  puVar3 = puVar1;
  func_0x000107c3f3bc();
  func_0x000107c61170(puVar1);
  return (uint)puVar3 & (uint)puVar2;
}



/* Entry: 103c16ae4; end: 103c16b1f; -[SCDeviceLockStateProvider init] */

void FUN_103c16ae4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c16b20; end: 103c16b73;  */

void FUN_103c16b20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c16b74; end: 103c16b87;  */

bool FUN_103c16b74(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c16b88; end: 103c16dbf;  */

void FUN_103c16b88(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0xef64656b636f6c6e;
  uVar3 = 0x755f656369766564;
  if (cVar2 != '\x01') {
    uVar5 = 0xea00000000006465;
    uVar3 = 0x646e655f6c6c6163;
  }
  uVar1 = 0xef68637461775f64;
  uVar4 = 0x65726961705f6f6e;
  if (cVar2 != '\0') {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c16dc0; end: 103c16e4b;  */

void FUN_103c16dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xef64656b636f6c6e;
  uVar2 = 0x755f656369766564;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xea00000000006465;
    uVar2 = 0x646e655f6c6c6163;
  }
  uVar1 = 0xef68637461775f64;
  uVar3 = 0x65726961705f6f6e;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 103c16e4c; end: 103c16f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c16e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined **)(unaff_x20 + _DAT_112ff8318) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112ff8320;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8328) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8330) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8338) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8340) = param_4;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c16f24; end: 103c1702b; -[SCWatchCallNotificationScheduler initWithWatchDetector:deviceLockStateProvider:localNotificationScheduler:grapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c16f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined **)(param_1 + _DAT_112ff8318) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112ff8320;
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_6;
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_112ff8328) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff8330) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff8338) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff8340) = param_6;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1702c; end: 103c173b3;  */

void FUN_103c1702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uStack_f0 = param_2;
  uStack_e8 = param_3;
  uStack_e0 = param_5;
  func_0x000107c614f0();
  lVar2 = 0;
  uStack_f8 = unaff_x20;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar2 = 0;
  puStack_d8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_c8 = *(long *)(lVar2 + -8);
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar11 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_100 = lVar11;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c31808();
  func_0x0001000295c4(0);
  (**(code **)(lVar14 + 0x68))
            (lVar17,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar4);
  lVar2 = lVar17;
  func_0x000107c5fff0();
  lStack_108 = lVar2;
  (**(code **)(lVar14 + 8))(lVar17,lVar4);
  puVar5 = &UNK_1106ea730;
  func_0x000107c613fc(&UNK_1106ea730,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  (**(code **)(lVar13 + 0x10))(lVar11,param_4,lVar3);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar18 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_1106ea758;
  func_0x000107c613fc(&UNK_1106ea758,uVar16 + 0x28,uVar12 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar15,lVar11,lVar3);
  uVar9 = uStack_e0;
  uVar8 = uStack_e8;
  *(undefined8 *)(puVar6 + uVar16) = uStack_f0;
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uStack_e8;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uStack_e0;
  *(undefined8 *)(puVar6 + uVar16 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + uVar16 + 0x20) = uStack_f8;
  pcStack_88 = FUN_103c17600;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000b0c7c;
  puStack_90 = &UNK_1106ea770;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  func_0x000107c61434(uVar8);
  func_0x000107c61174(uVar9);
  lVar3 = lStack_100;
  func_0x000107c5f808(lStack_100);
  puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  FUN_103c1887c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar9 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar10 = uVar9;
  func_0x0001001c7f30();
  lVar4 = lStack_d0;
  puVar1 = puStack_d8;
  func_0x000107c60264(puStack_d8,&puStack_b0,uVar9,uVar10,lStack_d0,uVar8);
  lVar2 = lStack_108;
  func_0x000107c5ffe8(0,lVar3,puVar1,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_b8 + 8))(puVar1,lVar4);
  (**(code **)(lStack_c8 + 8))(lVar3,lStack_c0);
  puVar6 = puStack_80;
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 103c173b4; end: 103c175ff;  */

/* WARNING: Removing unreachable block (ram,0x000103c17424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c173b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  char acStack_81 [9];
  undefined1 auStack_78 [24];
  
  ppuVar4 = &puStack_c0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103c1766c();
    uVar5 = *(undefined8 *)(param_2 + _DAT_112ff8320);
    puStack_b0 = (undefined *)param_2;
    puStack_a8 = (undefined *)param_3;
    func_0x000107c6157c(uVar5);
    func_0x000100087bd4(acStack_81,0x103c188fc,&puStack_c0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar5);
    if (acStack_81[0] == '\x01') {
      FUN_103c17768(2);
      param_4 = param_2;
    }
    else {
      FUN_103c18b04(param_4,param_5,param_3,param_6);
      lVar1 = *(long *)(param_2 + _DAT_112ff8338);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        puVar2 = &UNK_1106ea730;
        func_0x000107c613fc(&UNK_1106ea730,0x18,7);
        func_0x000107c61614(puVar2 + 0x10,param_2);
        puVar3 = &UNK_1106ea7f8;
        func_0x000107c613fc(&UNK_1106ea7f8,0x28,7);
        *(undefined **)(puVar3 + 0x10) = puVar2;
        *(undefined8 *)(puVar3 + 0x18) = param_1;
        *(undefined8 *)(puVar3 + 0x20) = param_7;
        pcStack_a0 = FUN_103c18f14;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ff4e14;
        puStack_a8 = &UNK_1106ea810;
        puStack_98 = puVar3;
        func_0x000107c60bc4(&puStack_c0);
        func_0x000107c61574(puStack_98);
        func_0x000107c518e4(lVar1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(lVar1);
        return;
      }
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 103c17600; end: 103c1766b;  */

/* WARNING: Removing unreachable block (ram,0x000103c17424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c17600(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  char acStack_81 [9];
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  func_0x000107c5eec8();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar11 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar10 + 0x10);
  lVar2 = *(long *)(unaff_x20 + uVar10);
  lVar1 = ((long *)(unaff_x20 + uVar10))[1];
  uVar13 = *(undefined8 *)(unaff_x20 + uVar10 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + (uVar10 + 0x27 & 0xffffffffffffff8));
  lVar3 = unaff_x20 + uVar11;
  ppuVar6 = &puStack_c0;
  func_0x000107c61428(lVar7 + 0x10,auStack_78,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    FUN_103c1766c();
    uVar12 = *(undefined8 *)(lVar7 + _DAT_112ff8320);
    puStack_b0 = (undefined *)lVar7;
    puStack_a8 = (undefined *)lVar3;
    func_0x000107c6157c(uVar12);
    func_0x000100087bd4(acStack_81,0x103c188fc,&puStack_c0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar12);
    if (acStack_81[0] == '\x01') {
      FUN_103c17768(2);
      lVar2 = lVar7;
    }
    else {
      FUN_103c18b04(lVar2,lVar1,lVar3,uVar8);
      lVar3 = *(long *)(lVar7 + _DAT_112ff8338);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar4 = &UNK_1106ea730;
        func_0x000107c613fc(&UNK_1106ea730,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar7);
        puVar5 = &UNK_1106ea7f8;
        func_0x000107c613fc(&UNK_1106ea7f8,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined8 *)(puVar5 + 0x18) = uVar13;
        *(undefined8 *)(puVar5 + 0x20) = uVar9;
        pcStack_a0 = FUN_103c18f14;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ff4e14;
        puStack_a8 = &UNK_1106ea810;
        puStack_98 = puVar5;
        func_0x000107c60bc4(&puStack_c0);
        func_0x000107c61574(puStack_98);
        func_0x000107c518e4(lVar3);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar2);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar3);
        return;
      }
      func_0x000107c61170(lVar7);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103c1766c; end: 103c17767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1766c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff8328);
  func_0x000107c507e8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4a734();
    if ((int)lVar3 != 0) {
      iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112ff8330);
      func_0x000107c49c64();
      if (iVar1 != 0) {
        uStack_22 = 1;
        uVar4 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar4 != 0) {
          FUN_103c188bc();
          func_0x000107c61658(&uStack_22,&UNK_1106ea8b8,uVar4);
        }
        func_0x000107c61170(lVar2);
        return;
      }
      func_0x000107c61170(lVar2);
      return;
    }
    func_0x000107c61170(lVar2);
  }
  uStack_21 = 0;
  uVar4 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar4 != 0) {
    FUN_103c188bc();
    func_0x000107c61658(&uStack_21,&UNK_1106ea8b8,uVar4);
  }
  return;
}



/* Entry: 103c17768; end: 103c178eb;  */

/* WARNING: Possible PIC construction at 0x000103c17868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c17878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c178b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c178c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1787c) */
/* WARNING: Removing unreachable block (ram,0x000103c178cc) */
/* WARNING: Removing unreachable block (ram,0x000103c17898) */
/* WARNING: Removing unreachable block (ram,0x000103c1786c) */
/* WARNING: Removing unreachable block (ram,0x000103c178b4) */
/* WARNING: Removing unreachable block (ram,0x000103c178e8) */
/* WARNING: Removing unreachable block (ram,0x000103c178b8) */

void FUN_103c17768(char param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126cf818;
  func_0x000107c61168();
  func_0x000107c5e13c();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5fadc(0x6165725f70696b73,0xeb000000006e6f73);
    if (param_1 == '\0') {
      uVar4 = 0xef68637461775f64;
      uVar3 = 0x65726961705f6f6e;
    }
    else {
      uVar4 = 0xef64656b636f6c6e;
      uVar3 = 0x755f656369766564;
      if (param_1 != '\x01') {
        uVar4 = 0xea00000000006465;
        uVar3 = 0x646e655f6c6c6163;
      }
    }
    func_0x000107c5fadc(uVar3,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c178e8);
  (*pcVar1)();
}



/* Entry: 103c178ec; end: 103c17a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c178ec(byte *param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112ff8318;
  func_0x000107c61428(param_2 + _DAT_112ff8318,auStack_68,0,0);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  func_0x000107c61434(uVar3);
  uVar2 = param_3;
  func_0x00010125e030(param_3,uVar3);
  func_0x000107c6142c(uVar3);
  if ((uVar2 & 1) != 0) {
    func_0x000107c61428(param_2 + lVar1,auStack_80,0x21,0);
    func_0x000101274b5c(auStack_80 + -extraout_x8,param_3);
    func_0x000107c614a8(auStack_80);
    FUN_103c18f34(auStack_80 + -extraout_x8,0x112d3bc20,&UNK_10d904ef0);
  }
  *param_1 = (byte)uVar2 & 1;
  return;
}



/* Entry: 103c17a04; end: 103c17cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c17a04(double param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  if (param_2 == 0) {
    dVar6 = param_1;
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    lVar2 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126cf818;
      func_0x000107c61168();
      func_0x000107c5e138();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb0);
        (*pcVar1)();
      }
      lVar4 = *(long *)(lVar2 + _DAT_112ff8340);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c3d748();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb8);
          (*pcVar1)();
        }
        func_0x000107c45314(lVar5);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c31808();
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126cf818;
    func_0x000107c61168();
    func_0x000107c5e130();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb4);
      (*pcVar1)();
    }
    dVar6 = dVar6 - param_1;
    if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17c9c);
      (*pcVar1)();
    }
    if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca4);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_3 + _DAT_112ff8340);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c3d748();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cbc);
        (*pcVar1)();
      }
      func_0x000107c3d8d8(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126cf818;
    func_0x000107c61168();
    func_0x000107c614b0(param_2);
    func_0x000107c5e134();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca8);
      (*pcVar1)();
    }
    lVar2 = *(long *)(param_3 + _DAT_112ff8340);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c614ac(param_2);
    }
    else {
      lVar4 = lVar2;
      func_0x000107c3d748();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cac);
        (*pcVar1)();
      }
      func_0x000107c45314(lVar4);
      func_0x000107c614ac(param_2);
      func_0x000107c61170(lVar4);
    }
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103c17cbc; end: 103c17cd7;  */

void FUN_103c17cbc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c17cd8; end: 103c17dc3; -[SCWatchCallNotificationScheduler scheduleForCallerName:callUUID:conversation:] */

void FUN_103c17cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_3);
  func_0x000107c5eeb8(puVar2,param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103c1702c(param_3,param_2,puVar2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103c17dc4; end: 103c182ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c17dc4(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_b8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar2 = 0;
  puStack_d8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_c8 = *(long *)(lVar2 + -8);
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar12 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e0 = lVar12;
  func_0x000107c5eec8();
  lVar17 = *(long *)(lVar2 + -8);
  lStack_e8 = *(long *)(lVar17 + 0x40);
  lStack_110 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_f0 = lVar12;
  func_0x000107c5f83c();
  pcStack_f8 = *(code **)(lVar2 + -8);
  lStack_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_f8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  lStack_108 = lVar12 - extraout_x12_00;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = (lVar12 - extraout_x12_00) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112ff8348;
  func_0x0001000285a8(0x112ff8348,&UNK_10dc66fc8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100087bd4(lVar16 - extraout_x8_03,FUN_103c1839c,&puStack_a0,lVar2);
  lVar10 = lStack_110;
  (**(code **)(lVar17 + 8))((lVar16 - extraout_x8_03) + (long)*(int *)(lVar2 + 0x30),lStack_110);
  func_0x0001000295c4(0);
  (**(code **)(lVar14 + 0x68))
            (lVar16,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar3
            );
  lVar4 = lVar16;
  func_0x000107c5fff0(lVar16);
  (**(code **)(lVar14 + 8))(lVar16,lVar3);
  func_0x000107c5f830(lVar12);
  lVar2 = lStack_108;
  func_0x000107c5f85c(lStack_108,0x4024000000000000,lVar12);
  lVar3 = lStack_100;
  pcStack_f8 = *(code **)((long)pcStack_f8 + 8);
  (*pcStack_f8)(lVar12,lStack_100);
  puVar5 = &UNK_1106ea730;
  func_0x000107c613fc(&UNK_1106ea730,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,unaff_x20);
  lVar12 = lStack_f0;
  uStack_118 = param_1;
  (**(code **)(lVar17 + 0x10))(lStack_f0,param_1,lVar10);
  uVar13 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar15 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1106ea7a8;
  func_0x000107c613fc(&UNK_1106ea7a8,uVar15 + lStack_e8,uVar13 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  (**(code **)(lVar17 + 0x20))(puVar6 + uVar15,lVar12,lVar10);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c6157c(puVar5);
  lVar10 = lStack_e0;
  func_0x000107c5f808(lStack_e0);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0x112d4af88;
  FUN_103c1887c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar8 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar9 = uVar8;
  func_0x0001001c7f30();
  lVar12 = lStack_d0;
  puVar1 = puStack_d8;
  func_0x000107c60264(puStack_d8,&puStack_a8,uVar8,uVar9,lStack_d0,uVar11);
  func_0x000107c5ffc8(lVar2,lVar10,puVar1,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar4);
  (**(code **)(lStack_b8 + 8))(puVar1,lVar12);
  (**(code **)(lStack_c8 + 8))(lVar10,lStack_c0);
  (*pcStack_f8)(lVar2,lVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ff8338);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar10 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar11 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar10 + 0x18) = 2;
    *(undefined8 *)(lVar10 + 0x10) = 1;
    lVar3 = lVar10;
    func_0x000107c5eeac();
    *(long *)(lVar10 + 0x20) = lVar3;
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    lVar3 = lVar10;
    func_0x000107c5fc48(lVar10,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar10);
    func_0x000107c4fef8(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103c182ac; end: 103c1839b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c182ac(byte *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = 0x112ff8348;
  func_0x0001000285a8(0x112ff8348,&UNK_10dc66fc8);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(lVar5 + 0x10))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,lVar2)
  ;
  func_0x000107c61428(param_2 + _DAT_112ff8318,auStack_68,0x21,0);
  pbVar4 = param_1 + iVar1;
  func_0x00010125e704(pbVar4,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c614a8(auStack_68);
  *param_1 = (byte)pbVar4 & 1;
  return;
}



/* Entry: 103c1839c; end: 103c183b3;  */

void FUN_103c1839c(void)

{
  long unaff_x20;
  
  FUN_103c182ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c183b4; end: 103c184d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c183b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_90 + -extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,1,1,lVar2);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ff8320);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    lStack_70 = param_1;
    uStack_68 = param_2;
    func_0x000100087bd4(puVar3,0x103c18864,auStack_80,lVar1);
    func_0x000107c61574(uVar4);
  }
  FUN_103c18f34(puVar3,0x112d3bc20,&UNK_10d904ef0);
  return;
}



/* Entry: 103c184d4; end: 103c18503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c184d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x000107c5eec8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar1 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,1,1,lVar1);
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112ff8320);
    func_0x000107c6157c(uVar6);
    func_0x000107c61170(lVar1);
    lStack_70 = lVar3;
    lStack_68 = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
    func_0x000100087bd4(puVar5,0x103c18864,auStack_80,lVar2);
    func_0x000107c61574(uVar6);
  }
  FUN_103c18f34(puVar5,0x112d3bc20,&UNK_10d904ef0);
  return;
}



/* Entry: 103c18504; end: 103c185cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c18504(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c5eec8();
    (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
  }
  else {
    func_0x000107c61428(param_2 + _DAT_112ff8318,auStack_70,0x21,0);
    func_0x000101274b5c(param_1,param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103c185cc; end: 103c1866f; -[SCWatchCallNotificationScheduler removeForCallUUID:] */

void FUN_103c185cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eeb8(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_103c17dc4(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103c18670; end: 103c186ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c18670(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0fcf8;
  lVar2 = param_2;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e0fcf8);
  uStack_50 = *(undefined8 *)(param_2 + _DAT_11307bf50);
  uStack_48 = ((undefined8 *)(param_2 + _DAT_11307bf50))[1];
  puStack_38 = PTR___sSSN_11034da80;
  func_0x000107c61434();
  func_0x000100102934(&uStack_50,ppuVar1,lVar2);
  return;
}



/* Entry: 103c186f0; end: 103c1876b;  */

void FUN_103c186f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f9e8b8;
  uVar2 = param_2;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9e8b8);
  puStack_48 = PTR___sSSN_11034da80;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c61434(param_2);
  func_0x000100102934(&uStack_60,ppuVar1,uVar2);
  return;
}



/* Entry: 103c1876c; end: 103c187cb; -[SCWatchCallNotificationScheduler init] */

void FUN_103c1876c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WatchCallNotificationServicesImpl.WatchCallNotificationScheduler",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c18798);
  (*pcVar1)();
}



/* Entry: 103c187cc; end: 103c18843; -[SCWatchCallNotificationScheduler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c18828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c1882c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c187cc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff8328));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff8330));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff8318));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff8320));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8338));
  return;
}



/* Entry: 103c18844; end: 103c1887b;  */

void FUN_103c18844(void)

{
  func_0x000107c61168(&PTR_PTR_1129467a0);
  return;
}



/* Entry: 103c1887c; end: 103c188bb;  */

void FUN_103c1887c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c188bc; end: 103c18913;  */

void FUN_103c188bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc670a4;
  func_0x000107c61520(&UNK_10dc670a4,&UNK_1106ea8b8);
  puRam0000000112ff8378 = puVar1;
  return;
}



/* Entry: 103c18914; end: 103c18977;  */

ulong FUN_103c18914(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 103c18978; end: 103c18b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c18978(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_120 [16];
  long *plStack_110;
  undefined1 auStack_100 [16];
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar7 = auStack_d8;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad058;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = ppuVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar7;
  *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f1af860;
  ppuVar3 = &PTR____CFConstantStringClassReference_110e12eb8;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x50) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x58) = puVar7;
  lVar4 = 3;
  func_0x000107fcbeb0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    *(undefined **)(lVar2 + 0x78) = puVar1;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
    *(undefined **)(lVar2 + 0x78) = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      *(long *)(lVar2 + 0x60) = lVar5;
      goto LAB_103c18a6c;
    }
  }
  *(undefined8 *)(lVar2 + 0x60) = 0;
  puVar7 = (undefined1 *)0xe000000000000000;
LAB_103c18a6c:
  *(undefined1 **)(lVar2 + 0x68) = puVar7;
  lVar4 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar6);
  plStack_110 = &lStack_58;
  plStack_f0 = plStack_110;
  uStack_e8 = param_1;
  lStack_58 = lVar4;
  func_0x00010446dcb4(0x103c18f24,auStack_100,0x103c18f2c,auStack_120);
  return lStack_58;
}



/* Entry: 103c18b04; end: 103c18f13;  */

undefined *
FUN_103c18b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  func_0x000107c610f8(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  func_0x000107c453e4();
  lVar3 = -0x2fffffffffffffdc;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f1af7e0);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1af810);
  lVar5 = lVar3;
  uVar10 = uVar4;
  func_0x0001000f6108(lVar3,uVar4,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c18f10);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c5faec(lVar5);
  func_0x000107c61170(lVar5);
  lVar3 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  lVar5 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  puVar11 = PTR___sSSN_11034da80;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  lVar7 = lVar5;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x40) = lVar7;
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar4 = uVar10;
  func_0x000107c5fb00(lVar6,uVar10,lVar5);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fadc(lVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(lVar6);
  lVar5 = -0x2fffffffffffffdd;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1af830);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1af810);
  lVar6 = lVar5;
  uVar10 = uVar4;
  func_0x0001000f6108(lVar5,uVar4,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  if (lVar6 != 0) {
    lVar5 = lVar6;
    func_0x000107c5faec(lVar6);
    func_0x000107c61170(lVar6);
    uVar4 = 0x48;
    func_0x000107c613fc(lVar3,0x48,7);
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar8 = PTR_PTR_1126b2930;
    func_0x000107c61168();
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c41924();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar8 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    *(undefined **)(lVar3 + 0x38) = puVar11;
    *(long *)(lVar3 + 0x40) = lVar7;
    *(undefined **)(lVar3 + 0x20) = puVar8;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    uVar4 = uVar10;
    func_0x000107c5fb00(lVar5,uVar10,lVar3);
    func_0x000107c6142c(uVar10);
    func_0x000107c5fadc(lVar5,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c52dcc(puVar2);
    func_0x000107c61170(lVar5);
    uVar10 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010ef85c90);
    puVar11 = PTR__OBJC_CLASS___UNNotificationSound_1126d8b80;
    func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationSound_1126d8b80);
    func_0x000107c5b5f8();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c59534(puVar2);
    func_0x000107c61170(puVar11);
    FUN_103c18978(param_4);
    uVar10 = param_4;
    func_0x00010018cc3c();
    func_0x000107c6142c(param_4);
    uVar4 = uVar10;
    puVar11 = PTR___ss11AnyHashableVN_11034e448;
    func_0x000107c5f9dc(uVar10,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(uVar10);
    func_0x000107c5a360(puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c5eeac();
    func_0x000107c61174(puVar2);
    func_0x000107c5fadc(uVar4,puVar11);
    func_0x000107c6142c(puVar11);
    puVar11 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
    func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationRequest_1126bc390);
    func_0x000107c50454();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar4);
    return puVar11;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c18f14);
  (*pcVar1)();
}



/* Entry: 103c18f14; end: 103c18f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c18f14(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  dVar7 = *(double *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    dVar8 = dVar7;
    func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
    lVar2 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126cf818;
      func_0x000107c61168();
      func_0x000107c5e138();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb0);
        (*pcVar1)();
      }
      lVar4 = *(long *)(lVar2 + _DAT_112ff8340);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c3d748();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb8);
          (*pcVar1)();
        }
        func_0x000107c45314(lVar5);
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c31808();
    func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126cf818;
    func_0x000107c61168();
    func_0x000107c5e130();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cb4);
      (*pcVar1)();
    }
    dVar8 = dVar8 - dVar7;
    if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17c9c);
      (*pcVar1)();
    }
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca4);
      (*pcVar1)();
    }
    lVar2 = *(long *)(lVar6 + _DAT_112ff8340);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c3d748();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cbc);
        (*pcVar1)();
      }
      func_0x000107c3d8d8(lVar4);
      func_0x000107c61170(lVar4);
    }
  }
  else {
    func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126cf818;
    func_0x000107c61168();
    func_0x000107c614b0(param_1);
    func_0x000107c5e134();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17ca8);
      (*pcVar1)();
    }
    lVar2 = *(long *)(lVar6 + _DAT_112ff8340);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c614ac(param_1);
    }
    else {
      lVar4 = lVar2;
      func_0x000107c3d748();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c17cac);
        (*pcVar1)();
      }
      func_0x000107c45314(lVar4);
      func_0x000107c614ac(param_1);
      func_0x000107c61170(lVar4);
    }
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 103c18f34; end: 103c18f73;  */

undefined8 FUN_103c18f34(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c18f74; end: 103c190db;  */

int FUN_103c18f74(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c18ff0;
        goto LAB_103c18fd4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c18fd4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103c18ff0:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c190dc; end: 103c1911b;  */

void FUN_103c190dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6707c;
  func_0x000107c61520(&UNK_10dc6707c,&UNK_1106ea8b8);
  puRam0000000112ff8380 = puVar1;
  return;
}



/* Entry: 103c1911c; end: 103c1912b;  */

void FUN_103c1911c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c1912c; end: 103c19197;  */

undefined8 FUN_103c1912c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48af4(unaff_x20);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 103c19198; end: 103c192f3;  */

ulong FUN_103c19198(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c44fc8();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5ee30();
  func_0x000107c61170();
  uVar9 = (uint)((ulong)param_2 >> 0x20);
  uVar7 = uVar9 >> 0x1e;
  if (uVar9 >> 0x1e < 2) {
    if (uVar7 != 0) {
      lVar10 = (long)(int)lVar2;
      if (lVar2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c192e8);
        (*pcVar1)();
      }
      func_0x000107c5ec30();
      if (unaff_x20 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c192f0);
          (*pcVar1)();
        }
        unaff_x20 = (lVar10 - lVar4) + unaff_x20;
      }
      goto LAB_103c1926c;
    }
    uVar9 = (uint)(ushort)((ulong)lVar2 >> 0x30);
  }
  else {
    if (uVar7 != 2) {
      func_0x00010006c090(lVar2,param_2);
      uVar5 = 0xffffffffffffffff;
      goto LAB_103c192b4;
    }
    lVar10 = *(long *)(lVar2 + 0x10);
    lVar4 = *(long *)(lVar2 + 0x18);
    func_0x000107c5ec30();
    if (unaff_x20 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5ec3c();
      if (SBORROW8(lVar10,lVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c192ec);
        (*pcVar1)();
      }
      unaff_x20 = (lVar10 - lVar3) + unaff_x20;
    }
    if (SBORROW8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1923c);
      (*pcVar1)();
    }
LAB_103c1926c:
    func_0x000107c5ec38();
    uVar9 = (uint)*(byte *)(unaff_x20 + 6);
  }
  func_0x00010006c090(lVar2,param_2);
  uVar5 = 0xffffffffffffffff;
  if ((uVar9 - 0x10 & 0xff) < 0x50) {
    uVar5 = (ulong)((uVar9 - 0x10 >> 4 & 0xf) + 1);
  }
LAB_103c192b4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    func_0x000107c60e78(uVar5);
    func_0x000107c61174();
    uVar6 = uVar5;
    FUN_103c19198();
    func_0x000107c61170(uVar5);
    return uVar6;
  }
  return uVar5;
}



/* Entry: 103c192f4; end: 103c19327; -[SCNMessagingUUID version] */

undefined8 FUN_103c192f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c19198();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103c19328; end: 103c19337; -[_TtC27CallSuperResolutionServices27CallSuperResolutionServices callSuperResolutionSessionFactoryObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c19328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8400));
  return;
}



/* Entry: 103c19338; end: 103c1943f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c19338(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff83f8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8400) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103c19440; end: 103c1949f; -[_TtC27CallSuperResolutionServices27CallSuperResolutionServices init] */

void FUN_103c19440(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallSuperResolutionServices.CallSuperResolutionServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1946c);
  (*pcVar1)();
}



/* Entry: 103c194a0; end: 103c194d7; -[_TtC27CallSuperResolutionServices27CallSuperResolutionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c194a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff83f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8400));
  return;
}



/* Entry: 103c194d8; end: 103c194ef;  */

bool FUN_103c194d8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c194f0; end: 103c1952f;  */

void FUN_103c194f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc67110;
  func_0x000107c61520(&UNK_10dc67110,&UNK_1106eab20);
  puRam0000000112ff8430 = puVar1;
  return;
}



/* Entry: 103c19530; end: 103c195db;  */

void FUN_103c19530(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c195dc; end: 103c19627;  */

void FUN_103c195dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103c19628; end: 103c196ff;  */

void FUN_103c19628(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c19700; end: 103c1970b;  */

void FUN_103c19700(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103c1970c; end: 103c1973f; +[SCCustomRingtoneMapping customRingtoneIdFromRawValue:] */

long FUN_103c1970c(undefined8 param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5d388(param_3);
  }
  FUN_103c19880();
  lVar1 = 0;
  if ((param_2 & 0xff) != 1) {
    lVar1 = param_3;
  }
  return lVar1;
}



/* Entry: 103c19740; end: 103c19787; +[SCCustomRingtoneMapping soundFileNameForId:isBestFriend:] */

void FUN_103c19740(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_103c19890(param_3);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c19788; end: 103c197cb; +[SCCustomRingtoneMapping localizedNameForId:] */

void FUN_103c19788(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_103c19a58(param_3);
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c197cc; end: 103c1980f; +[SCCustomRingtoneMapping customRingtoneIdsList] */

void FUN_103c197cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103c19c1c();
  uVar1 = 0;
  func_0x0001002ed07c(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c19810; end: 103c1984b; -[SCCustomRingtoneMapping init] */

void FUN_103c19810(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c1984c; end: 103c1987f;  */

void FUN_103c1984c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c19880; end: 103c1988f;  */

undefined1  [16] FUN_103c19880(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xb) {
    uVar1 = param_1;
  }
  auVar2[8] = 10 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103c19890; end: 103c19a57;  */

undefined1  [16] FUN_103c19890(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xec00000061346d2e;
  uVar2 = 0x676e697669727261;
  switch(param_1) {
  case 0:
    pcVar4 = "door_number_four.m4a";
    uVar2 = 0xd000000000000011;
    if ((param_2 & 1) != 0) {
      pcVar4 = "ringtone_full.m4a";
      uVar2 = 0xd000000000000010;
    }
    uVar3 = (ulong)pcVar4 | 0x8000000000000000;
  case 1:
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar2;
    return auVar5;
  case 2:
    auVar8._8_8_ = 0x800000010f1afad0;
    auVar8._0_8_ = 0xd000000000000014;
    return auVar8;
  case 3:
    pcVar4 = "friends_indeed.m4a";
    break;
  case 4:
    auVar6._8_8_ = 0x800000010f1afa90;
    auVar6._0_8_ = 0xd000000000000011;
    return auVar6;
  case 5:
    auVar10._8_8_ = 0x800000010f1afa70;
    auVar10._0_8_ = 0xd000000000000017;
    return auVar10;
  case 6:
    auVar11._8_8_ = 0xee0061346d2e6863;
    auVar11._0_8_ = 0x7469645f7473616c;
    return auVar11;
  case 7:
    auVar9._8_8_ = 0xeb0000000061346d;
    auVar9._0_8_ = 0x2e79707061726373;
    return auVar9;
  case 8:
    auVar13._8_8_ = 0xed000061346d2e65;
    auVar13._0_8_ = 0x756c625f776f6c73;
    return auVar13;
  case 9:
    auVar7._8_8_ = 0xed000061346d2e79;
    auVar7._0_8_ = 0x63616e756c5f7473;
    return auVar7;
  case 10:
    pcVar4 = "the_gilded_age.m4a";
    break;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_1106eac18,&uStack_18,&UNK_1106eac18,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c19a58);
    (*pcVar1)();
  }
  auVar12._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar12._0_8_ = 0xd000000000000012;
  return auVar12;
}



/* Entry: 103c19a58; end: 103c19c1b;  */

undefined1  [16] FUN_103c19a58(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_38;
  
  pcVar5 = "arriving_ringtone_name";
  lVar2 = -0x2fffffffffffffeb;
  switch(param_1) {
  case 0:
    break;
  case 1:
    pcVar5 = "door_number_four_ringtone_name";
    lVar2 = -0x2fffffffffffffea;
    break;
  case 2:
    pcVar5 = "friends_indeed_ringtone_name";
    lVar2 = -0x2fffffffffffffe2;
    break;
  case 3:
    pcVar5 = "friends_indeed_ringtone_name";
    goto code_r0x000103c19b3c;
  case 4:
    pcVar5 = "tar_ringtone_name";
    lVar2 = -0x2fffffffffffffe5;
    break;
  case 5:
    pcVar5 = "last_ditch_ringtone_name";
    lVar2 = -0x2fffffffffffffdf;
    break;
  case 6:
    pcVar5 = "scrappy_ringtone_name";
    lVar2 = -0x2fffffffffffffe8;
    break;
  case 7:
    pcVar5 = "slow_blue_ringtone_name";
    break;
  case 8:
    pcVar5 = "slow_blue_ringtone_name";
    goto code_r0x000103c19b50;
  case 9:
    pcVar5 = "st_lunacy_ringtone_name";
code_r0x000103c19b50:
    pcVar5 = pcVar5 + -0x20;
    lVar2 = -0x2fffffffffffffe9;
    break;
  case 10:
    pcVar5 = "the_gilded_age_ringtone_name";
code_r0x000103c19b3c:
    pcVar5 = pcVar5 + -0x20;
    lVar2 = -0x2fffffffffffffe4;
    break;
  default:
    uStack_38 = param_1;
    func_0x000107c60614(&UNK_1106eac18,&uStack_38,&UNK_1106eac18,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c19c1c);
    (*pcVar1)();
  }
  func_0x000107c5fadc(lVar2,(ulong)pcVar5 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar5 | 0x8000000000000000);
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010dc67280);
  lVar4 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,0);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 == 0) {
    lVar2 = 0;
    uVar6 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = lVar2;
  return auVar7;
}



/* Entry: 103c19c1c; end: 103c19cfb;  */

undefined * FUN_103c19c1c(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001002ecff4(0,0xb,0);
  lVar4 = 0x28;
  do {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    uVar1 = *(ulong *)(puVar2 + 0x10);
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      func_0x0001002ecff4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar2 + uVar1 * 8 + 0x20) = puVar3;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x80);
  return puVar2;
}



/* Entry: 103c19cfc; end: 103c19cff;  */

void FUN_103c19cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc671fc;
  func_0x000107c61520(&UNK_10dc671fc,&UNK_1106eac18);
  puRam0000000112ff8438 = puVar1;
  return;
}



/* Entry: 103c19d00; end: 103c19d3f;  */

void FUN_103c19d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff8438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc671fc;
  func_0x000107c61520(&UNK_10dc671fc,&UNK_1106eac18);
  puRam0000000112ff8438 = puVar1;
  return;
}



/* Entry: 103c19d40; end: 103c19d4f;  */

undefined1  [16] FUN_103c19d40(void)

{
  return ZEXT816(0x1106eac18);
}



/* Entry: 103c19d50; end: 103c19d6f;  */

void FUN_103c19d50(void)

{
  func_0x000107c61168(&PTR_PTR_112946950);
  return;
}



/* Entry: 103c19d70; end: 103c19da3; -[SCFeatureSettingsService customRingtoneId] */

undefined8 FUN_103c19d70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c19da4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103c19da4; end: 103c19e97;  */

undefined8 FUN_103c19da4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1afb30);
  func_0x000107c5dc18();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_78;
      func_0x000107c5d388(uStack_78);
      func_0x000107c61170(uStack_78);
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 103c19e98; end: 103c19f1f; -[SCFeatureSettingsService setCustomRingtoneId:] */

/* WARNING: Possible PIC construction at 0x000103c19f00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c19f04) */

void FUN_103c19e98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1afb30);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c490d4();
  func_0x000107c54908(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c19f20; end: 103c1a01f; -[SCAppNotification isShownAsModularCall] */

uint FUN_103c19f20(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103c19f54();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103c1a020; end: 103c1a187; -[SCAppNotification setIsShownAsModularCall:] */

void FUN_103c1a020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61174();
  func_0x000107c5fca0(param_3);
  func_0x000107c61428(0x112ff84e8,auStack_48,0x20,0);
  func_0x000107c61188(param_1,0x112ff84e8,param_3,1);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}


