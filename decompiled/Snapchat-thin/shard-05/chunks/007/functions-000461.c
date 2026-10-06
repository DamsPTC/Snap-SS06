/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104027500; end: 1040275ab;  */

void FUN_104027500(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x40,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  _swift_getObjectType();
  pcVar3 = *(code **)(param_5 + 8);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar3)(param_4,param_5);
  bVar1 = (byte)param_4;
  func_0x0001000f66f0();
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(uVar2);
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 1040275ac; end: 104027897;  */

void FUN_1040275ac(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d36580;
  uStack_88 = param_8;
  uStack_80 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_a0 - extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar4 = (undefined *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (puVar4 != (undefined *)0x0) {
    bVar1 = (byte)((uint)param_4 >> 8) & 1;
    lStack_90 = param_6;
    func_0x000100029394(param_1,lVar13);
    lVar5 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,lVar3);
    if ((int)lVar5 == 1) {
      func_0x0001000293e4(lVar13);
      puVar8 = puVar4;
      if ((param_3 & 1) != 0) {
        uVar6 = param_5;
        _swift_getObjectType(param_5);
        puVar9 = &UNK_110736cd8;
        _swift_allocObject(&UNK_110736cd8,0x18,7);
        _swift_weakInit(puVar9 + 0x10,puVar4);
        puVar8 = &UNK_110736de0;
        _swift_allocObject(&UNK_110736de0,0x40,7);
        uVar2 = uStack_80;
        uVar7 = uStack_88;
        lVar3 = lStack_90;
        *(undefined **)(puVar8 + 0x10) = puVar9;
        *(undefined8 *)(puVar8 + 0x18) = uStack_88;
        puVar8[0x20] = (char)param_4;
        puVar8[0x21] = bVar1;
        *(undefined8 *)(puVar8 + 0x28) = param_5;
        *(long *)(puVar8 + 0x30) = lStack_90;
        *(undefined8 *)(puVar8 + 0x38) = uStack_80;
        pcVar10 = *(code **)(lStack_90 + 0x10);
        _swift_unknownObjectRetain(param_5);
        _swift_retain(uVar7);
        _swift_retain(puVar9);
        _objc_retain(uVar2);
        (*pcVar10)(0x104028818,puVar8,uVar6,lVar3);
        _swift_release(puVar4);
        _swift_release(puVar9);
      }
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar12,lVar13,lVar3);
      uVar7 = param_5;
      _swift_getObjectType();
      lVar13 = lStack_90;
      lVar5 = lStack_90;
      (**(code **)(lStack_90 + 8))();
      puVar8 = &UNK_110736cd8;
      lStack_a0 = lVar5;
      uStack_98 = uVar7;
      _swift_allocObject(&UNK_110736cd8,0x18,7);
      _swift_weakInit(puVar8 + 0x10,puVar4);
      puVar9 = &UNK_110736e08;
      _swift_allocObject(&UNK_110736e08,0x38,7);
      uVar7 = uStack_88;
      *(undefined **)(puVar9 + 0x10) = puVar8;
      puVar9[0x18] = (char)param_4;
      puVar9[0x19] = bVar1;
      *(undefined8 *)(puVar9 + 0x20) = param_5;
      *(long *)(puVar9 + 0x28) = lVar13;
      *(undefined8 *)(puVar9 + 0x30) = uStack_88;
      _swift_retain(puVar8);
      _swift_unknownObjectRetain(param_5);
      _swift_retain(uVar7);
      lVar13 = lStack_a0;
      func_0x00010402e854(lVar12,uStack_98,lStack_a0,0x10402881c,puVar9);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(lVar13);
      _swift_release(puVar9);
      (**(code **)(lVar11 + 8))(lVar12,lVar3);
    }
    _swift_release(puVar8);
  }
  return;
}



/* Entry: 104027898; end: 1040279db;  */

void FUN_104027898(ulong param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong auStack_a0 [2];
  long lStack_90;
  undefined1 uStack_88;
  byte bStack_87;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uStack_88 = (undefined1)param_3;
    bStack_87 = (byte)((uint)param_3 >> 8) & 1;
    lStack_90 = param_2;
    uStack_80 = param_4;
    lStack_78 = param_5;
    uStack_70 = param_6;
    _swift_retain(uVar2);
    func_0x000100087bd4(FUN_104028844,auStack_a0,PTR___sytN_11034f1b0 + 8);
    _swift_release(uVar2);
    if (2 < param_1) {
      auStack_a0[0] = param_1;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110737450,auStack_a0,&UNK_110737450,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1040279dc);
      (*pcVar1)();
    }
    _swift_getObjectType(param_4);
    (**(code **)(param_5 + 8))();
    FUN_104025650(0x30105 >> (ulong)((uint)((param_1 & 0x1fffff) << 3) & 0x1f),param_6,param_4,
                  param_5);
    _swift_release(param_2);
    _swift_bridgeObjectRelease(param_5);
  }
  return;
}



/* Entry: 1040279dc; end: 104027b6b;  */

void FUN_1040279dc(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  pcVar8 = *(code **)(param_4 + 8);
  lVar5 = param_3;
  uVar6 = param_4;
  (*pcVar8)();
  _swift_beginAccess(param_1 + 0x20,auStack_78,0x20,0);
  uVar9 = *(ulong *)(param_1 + 0x20);
  if (*(long *)(uVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(uVar9);
    uVar7 = uVar6;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      plVar1 = (long *)(*(long *)(uVar9 + 0x38) + lVar5 * 0x20);
      lVar5 = *plVar1;
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      lVar4 = plVar1[3];
      _swift_unknownObjectRetain(lVar2);
      _swift_retain_n(lVar5,2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(uVar6);
      _swift_bridgeObjectRelease(uVar9);
      FUN_104028584(lVar5,lVar3,lVar2,lVar4);
      _swift_release(lVar5);
      if (lVar5 != param_5) {
        return;
      }
      (*pcVar8)(param_3,param_4);
      _swift_beginAccess(param_1 + 0x40,auStack_78,0x21,0);
      func_0x000100403b00(auStack_88,param_3,param_4);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(uStack_80);
      return;
    }
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uVar9;
  }
  _swift_bridgeObjectRelease(uVar6);
  _swift_endAccess(auStack_78);
  return;
}



/* Entry: 104027b6c; end: 104027c1f;  */

void FUN_104027b6c(undefined1 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x38,auStack_58,0x20,0);
  lVar1 = *(long *)(param_2 + 0x38);
  if (*(long *)(lVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      uVar2 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_3);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_104027c00;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_endAccess(auStack_58);
  uVar2 = 0;
LAB_104027c00:
  *param_1 = uVar2;
  return;
}



/* Entry: 104027c20; end: 104027f23;  */

void FUN_104027c20(undefined1 *param_1,long param_2,long param_3,ulong param_4,long param_5,
                  byte *param_6,byte *param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long unaff_x21;
  uint uVar10;
  byte bVar11;
  undefined8 uStack_88;
  ulong uStack_80;
  byte abStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x20,abStack_78,0x20,0);
  lVar9 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_104027d1c:
    _swift_endAccess(abStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    lVar5 = param_3;
    uVar7 = param_4;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar9);
      goto LAB_104027d1c;
    }
    plVar1 = (long *)(*(long *)(lVar9 + 0x38) + lVar5 * 0x20);
    lVar5 = *plVar1;
    lVar3 = plVar1[1];
    lVar2 = plVar1[2];
    lVar4 = plVar1[3];
    _swift_unknownObjectRetain(lVar2);
    _swift_retain_n(lVar5,2);
    _swift_endAccess(abStack_78);
    _swift_bridgeObjectRelease(lVar9);
    FUN_104028584(lVar5,lVar3,lVar2,lVar4);
    _swift_release(lVar5);
    if (lVar5 != param_5) {
      uVar8 = 0;
      goto LAB_104027d28;
    }
    _swift_beginAccess(param_2 + 0x50,abStack_78,0x20,0);
    lVar9 = *(long *)(param_2 + 0x50);
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_104027dbc:
      _swift_endAccess(abStack_78);
      func_0x000104886d18(abStack_78);
      if (unaff_x21 == 0) goto LAB_104027df4;
      _swift_errorRelease();
      bVar11 = *param_6;
LAB_104027e4c:
      _swift_beginAccess(param_2 + 0x50,abStack_78,0x21,0);
      uVar6 = *(undefined8 *)(param_2 + 0x50);
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uStack_88 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x50) = 0x8000000000000000;
      FUN_10402be74(bVar11,param_3,param_4,uVar6);
      *(undefined8 *)(param_2 + 0x50) = uStack_88;
      _swift_endAccess(abStack_78);
      if ((*param_6 | 4) == 5) {
        _swift_beginAccess(param_2 + 0x58,abStack_78,0x21,0);
        func_0x0001010af1e4(param_3,param_4);
        _swift_endAccess(abStack_78);
        uStack_80 = param_4;
      }
      else {
        _swift_beginAccess(param_2 + 0x58,abStack_78,0x21,0);
        _swift_bridgeObjectRetain(param_4);
        func_0x000100403b00(&uStack_88,param_3,param_4);
        _swift_endAccess(abStack_78);
      }
      _swift_bridgeObjectRelease(uStack_80);
      uVar8 = 1;
      goto LAB_104027d28;
    }
    _swift_bridgeObjectRetain(lVar9);
    lVar5 = param_3;
    uVar7 = param_4;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar9);
      goto LAB_104027dbc;
    }
    bVar11 = *(byte *)(*(long *)(lVar9 + 0x38) + lVar5);
    _swift_endAccess(abStack_78);
    _swift_bridgeObjectRelease(lVar9);
    abStack_78[0] = bVar11;
LAB_104027df4:
    bVar11 = *param_6;
    uVar10 = (uint)abStack_78[0];
    if (bVar11 == 4) {
      uVar8 = 0;
      if ((6 < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x51U) == 0)) goto LAB_104027d28;
      bVar11 = 4;
      goto LAB_104027e4c;
    }
    if ((((uVar10 != 3) || ((*param_7 & 1) != 0)) || (bVar11 == 5)) || (bVar11 == 3))
    goto LAB_104027e4c;
  }
  uVar8 = 0;
LAB_104027d28:
  *param_1 = uVar8;
  return;
}



/* Entry: 104027f24; end: 10402812b;  */

/* WARNING: Removing unreachable block (ram,0x000104027fa0) */

void FUN_104027f24(void)

{
  char cVar1;
  undefined8 uVar2;
  char acStack_b0 [16];
  char acStack_71 [16];
  char cStack_61;
  
  func_0x000100087bd4(&cStack_61,0x104028a0c,acStack_b0,PTR___sSbN_11034dd40);
  if (cStack_61 == '\x01') {
    func_0x000104886d18(acStack_b0);
    cStack_61 = acStack_b0[0];
    uVar2 = 0x113049b38;
    func_0x0001000285a8(0x113049b38,&UNK_10dcc4dd0);
    func_0x000100087bd4(acStack_71,0x104028a28,acStack_b0,uVar2);
    if (acStack_71[0] != '\x06') {
      do {
        cVar1 = acStack_71[0];
        acStack_b0[0] = acStack_71[0];
        func_0x0001007d6d78(acStack_b0);
        uVar2 = 0x113049b38;
        cStack_61 = cVar1;
        func_0x0001000285a8(0x113049b38,&UNK_10dcc4dd0);
        func_0x000100087bd4(acStack_71,0x104028a28,acStack_b0,uVar2);
      } while (acStack_71[0] != '\x06');
      if (lRam0000000113049fe0 != -1) {
        _swift_once(0x113049fe0,0x104032b98);
      }
      uVar2 = uRam0000000113049fd8;
      _swift_retain(uRam0000000113049fd8);
      func_0x000100075034(acStack_b0,FUN_104032bf0,0,PTR___sSiN_11034deb0);
      _swift_release(uVar2);
      uVar2 = acStack_b0._0_8_;
      if (lRam0000000113049fc0 != -1) {
        _swift_once(0x113049fc0,FUN_104032b40);
      }
      acStack_b0._0_8_ = uVar2;
      func_0x0001007d6d78(acStack_b0);
    }
  }
  return;
}



/* Entry: 10402812c; end: 10402820b;  */

void FUN_10402812c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x60,auStack_68,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRetain(uVar3);
  uVar2 = param_3;
  func_0x0001000f66f0(param_3,param_4,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    _swift_beginAccess(param_2 + 0x60,auStack_90,0x21,0);
    _swift_bridgeObjectRetain(param_4);
    func_0x000100403b00(auStack_78,param_3,param_4);
    _swift_endAccess(auStack_90);
    _swift_bridgeObjectRelease(uStack_70);
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 10402820c; end: 1040283c7;  */

void FUN_10402820c(char *param_1,long param_2,long param_3,ulong param_4,long param_5,char *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_78,0x20,0);
  lVar8 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_10402835c:
    _swift_endAccess(auStack_78);
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    lVar5 = param_3;
    uVar6 = param_4;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
LAB_104028354:
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_10402835c;
    }
    plVar1 = (long *)(*(long *)(lVar8 + 0x38) + lVar5 * 0x20);
    lVar5 = *plVar1;
    lVar3 = plVar1[1];
    lVar2 = plVar1[2];
    lVar4 = plVar1[3];
    _swift_unknownObjectRetain(lVar2);
    _swift_retain_n(lVar5,2);
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(lVar8);
    FUN_104028584(lVar5,lVar3,lVar2,lVar4);
    _swift_release(lVar5);
    if (lVar5 == param_5) {
      _swift_beginAccess(param_2 + 0x50,auStack_78,0x20,0);
      lVar8 = *(long *)(param_2 + 0x50);
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_10402835c;
      _swift_bridgeObjectRetain(lVar8);
      lVar5 = param_3;
      uVar6 = param_4;
      func_0x000100029284();
      if ((uVar6 & 1) == 0) goto LAB_104028354;
      cVar7 = *(char *)(*(long *)(lVar8 + 0x38) + lVar5);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar8);
      if ((*param_6 == '\x06') || (cVar7 != *param_6)) goto LAB_1040283a0;
    }
  }
  _swift_beginAccess(param_2 + 0x60,auStack_78,0x21,0);
  func_0x0001010af1e4(param_3,param_4);
  _swift_endAccess(auStack_78);
  _swift_bridgeObjectRelease(param_4);
  cVar7 = '\x06';
LAB_1040283a0:
  *param_1 = cVar7;
  return;
}



/* Entry: 1040283c8; end: 10402844b;  */

void FUN_1040283c8(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10402844c; end: 104028467;  */

ulong FUN_10402844c(uint param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_60;
  byte bStack_58;
  byte bStack_57;
  
  uVar1 = param_2;
  _swift_getObjectType();
  uVar3 = param_3;
  (**(code **)(param_3 + 8))();
  uVar2 = 0x113049a28;
  func_0x0001000285a8(0x113049a28,&UNK_10dcc4d10);
  func_0x000100087bd4(&uStack_60,0x104028468,auStack_b0,uVar2);
  if ((param_1 & 0x1ff) >> 8 != 0) {
    FUN_104025650(5,uStack_60,uVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    goto LAB_104024cdc;
  }
  if ((bStack_58 & 1) == 0) {
    if ((bStack_57 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = (ulong)(param_1 & 0xff);
      func_0x000104025b00(uVar3,param_2,param_3,uStack_60);
      goto LAB_104024cdc;
    }
LAB_104024c80:
    FUN_104025650(0,uStack_60,uVar1,uVar3);
  }
  else if (bStack_57 != 0) goto LAB_104024c80;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = (ulong)(param_1 & 0xff);
  FUN_1040257f0(uVar3,param_2,param_3,uStack_60);
LAB_104024cdc:
  func_0x0001040284a4();
  func_0x0001000c2068();
  _swift_release(uStack_60);
  return uVar3;
}



/* Entry: 104028468; end: 104028583;  */

void FUN_104028468(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x31) == '\0') {
    uVar1 = 0;
  }
  FUN_104024d14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                uVar1 | *(byte *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 104028584; end: 1040285af;  */

void FUN_104028584(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
    return;
  }
  return;
}



/* Entry: 1040285b0; end: 1040285ef;  */

void FUN_1040285b0(void)

{
  long unaff_x20;
  
  FUN_104026968(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1040285f0; end: 1040285f3;  */

void FUN_1040285f0(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  bVar5 = *(char *)(unaff_x20 + 0x21) != '\0';
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_a0 - extraout_x8;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar13 + 0x10,auStack_78,0,0);
  puVar7 = (undefined *)(lVar13 + 0x10);
  _swift_weakLoadStrong();
  if (puVar7 != (undefined *)0x0) {
    lStack_90 = lVar8;
    func_0x000100029394(param_1,lVar17);
    lVar8 = lVar17;
    (**(code **)(lVar15 + 0x30))(lVar17,1,lVar6);
    if ((int)lVar8 == 1) {
      func_0x0001000293e4(lVar17);
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar1;
        _swift_getObjectType(uVar1);
        puVar11 = &UNK_110736cd8;
        _swift_allocObject(&UNK_110736cd8,0x18,7);
        _swift_weakInit(puVar11 + 0x10,puVar7);
        puVar12 = &UNK_110736de0;
        _swift_allocObject(&UNK_110736de0,0x40,7);
        uVar4 = uStack_80;
        uVar10 = uStack_88;
        lVar6 = lStack_90;
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(undefined8 *)(puVar12 + 0x18) = uStack_88;
        puVar12[0x20] = uVar3;
        puVar12[0x21] = bVar5;
        *(undefined8 *)(puVar12 + 0x28) = uVar1;
        *(long *)(puVar12 + 0x30) = lStack_90;
        *(undefined8 *)(puVar12 + 0x38) = uStack_80;
        pcVar14 = *(code **)(lStack_90 + 0x10);
        _swift_unknownObjectRetain(uVar1);
        _swift_retain(uVar10);
        _swift_retain(puVar11);
        _objc_retain(uVar4);
        (*pcVar14)(0x104028818,puVar12,uVar9,lVar6);
        _swift_release(puVar7);
        _swift_release(puVar11);
        puVar7 = puVar12;
      }
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar16,lVar17,lVar6);
      uVar10 = uVar1;
      _swift_getObjectType();
      lVar8 = lStack_90;
      lVar13 = lStack_90;
      (**(code **)(lStack_90 + 8))();
      puVar11 = &UNK_110736cd8;
      lStack_a0 = lVar13;
      uStack_98 = uVar10;
      _swift_allocObject(&UNK_110736cd8,0x18,7);
      _swift_weakInit(puVar11 + 0x10,puVar7);
      puVar12 = &UNK_110736e08;
      _swift_allocObject(&UNK_110736e08,0x38,7);
      uVar10 = uStack_88;
      *(undefined **)(puVar12 + 0x10) = puVar11;
      puVar12[0x18] = uVar3;
      puVar12[0x19] = bVar5;
      *(undefined8 *)(puVar12 + 0x20) = uVar1;
      *(long *)(puVar12 + 0x28) = lVar8;
      *(undefined8 *)(puVar12 + 0x30) = uStack_88;
      _swift_retain(puVar11);
      _swift_unknownObjectRetain(uVar1);
      _swift_retain(uVar10);
      lVar8 = lStack_a0;
      func_0x00010402e854(lVar16,uStack_98,lStack_a0,0x10402881c,puVar12);
      _swift_release(puVar7);
      _swift_bridgeObjectRelease(lVar8);
      _swift_release(puVar12);
      (**(code **)(lVar15 + 8))(lVar16,lVar6);
      puVar7 = puVar11;
    }
    _swift_release(puVar7);
  }
  return;
}



/* Entry: 1040285f4; end: 104028613;  */

void FUN_1040285f4(void)

{
  _objc_opt_self(&PTR_PTR_113049a88);
  return;
}



/* Entry: 104028614; end: 1040286bb;  */

long FUN_104028614(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040286bc; end: 10402872b;  */

undefined8 * FUN_1040286bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  uVar2 = param_2[3];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10402872c; end: 10402877f;  */

undefined8 * FUN_10402872c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  _swift_unknownObjectRelease(param_1[2]);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 104028780; end: 104028843;  */

int FUN_104028780(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104028844; end: 10402887b;  */

void FUN_104028844(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar1 = 0;
  }
  FUN_1040279dc(*(undefined8 *)(unaff_x20 + 0x10),uVar1 | *(byte *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10402887c; end: 1040288a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402887c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  long alStack_b0 [2];
  long lStack_a0;
  byte bStack_98;
  undefined1 uStack_97;
  undefined8 uStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  bVar5 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar12 = 0x100;
  if (*(char *)(unaff_x20 + 0x19) == '\0') {
    uVar12 = 0;
  }
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = (ulong)(uVar12 | bVar5);
  _swift_beginAccess(lVar9 + 0x10,auStack_78,0,0);
  lVar9 = lVar9 + 0x10;
  _swift_weakLoadStrong();
  if (lVar9 != 0) {
    uVar13 = *(undefined8 *)(lVar9 + 0x18);
    uStack_97 = (undefined1)(uVar12 >> 8);
    lStack_a0 = lVar9;
    bStack_98 = bVar5;
    uStack_90 = uVar1;
    lStack_88 = lVar8;
    _swift_retain(uVar13);
    func_0x000100087bd4(&cStack_79,FUN_104028ae4,alStack_b0,PTR___sSbN_11034dd40);
    _swift_release(uVar13);
    if (cStack_79 != '\x01') {
      uVar13 = uVar1;
      _swift_getObjectType(uVar1);
      pcVar11 = *(code **)(lVar8 + 8);
      uVar6 = uVar13;
      lVar7 = lVar8;
      (*pcVar11)();
      lVar14 = *(long *)(lVar2 + _DAT_113049de0);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      func_0x000107c4d9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _swift_bridgeObjectRelease(lVar7);
      if ((lVar14 == 0) ||
         (cVar4 = *(char *)(lVar14 + 0x18), _swift_release(lVar14), cVar4 != '\x01')) {
        if (param_1 == 0) {
          uVar10 = 5;
        }
        else if (param_1 == 2) {
          uVar10 = 3;
        }
        else {
          if (param_1 != 1) {
            alStack_b0[0] = param_1;
            __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                      (&UNK_110737450,alStack_b0,&UNK_110737450,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x104027500);
            (*pcVar11)();
          }
          FUN_104026f98(uVar10,uVar1,lVar8,lVar2);
        }
        (*pcVar11)(uVar13,lVar8);
        FUN_104025650(uVar10,uVar3,uVar13,lVar8);
        _swift_release(lVar9);
        _swift_bridgeObjectRelease(lVar8);
        return;
      }
    }
    _swift_release(lVar9);
  }
  return;
}



/* Entry: 1040288a4; end: 10402893f;  */

void FUN_1040288a4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000104032080(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104028940; end: 104028967;  */

void FUN_104028940(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  code *pcVar12;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  cVar3 = *(char *)(unaff_x20 + 0x21);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_beginAccess(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  _swift_weakLoadStrong();
  if (lVar4 != 0) {
    if (param_1 == 0) {
      _swift_getObjectType();
      (**(code **)(lVar10 + 8))();
      FUN_104025650(4,uVar1,uVar8,lVar10);
      _swift_release(lVar4);
      _swift_bridgeObjectRelease(lVar10);
    }
    else {
      uVar5 = uVar8;
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar10 + 8);
      _objc_retain(param_1);
      lVar9 = lVar10;
      (*pcVar12)(uVar5,lVar10);
      puVar6 = &UNK_110736cd8;
      _swift_allocObject(&UNK_110736cd8,0x18,7);
      _swift_weakInit(puVar6 + 0x10,lVar4);
      puVar7 = &UNK_110736e30;
      _swift_allocObject(&UNK_110736e30,0x40,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      puVar7[0x18] = uVar2;
      puVar7[0x19] = cVar3 != '\0';
      *(undefined8 *)(puVar7 + 0x20) = uVar8;
      *(long *)(puVar7 + 0x28) = lVar10;
      *(undefined8 *)(puVar7 + 0x30) = uVar11;
      *(undefined8 *)(puVar7 + 0x38) = uVar1;
      _swift_retain(puVar6);
      _swift_unknownObjectRetain(uVar8);
      _objc_retain(uVar11);
      _swift_retain(uVar1);
      FUN_10402e2b4(param_1,uVar5,lVar9,FUN_10402887c,puVar7);
      _swift_release(lVar4);
      _objc_release(param_1);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(lVar9);
      _swift_release(puVar7);
    }
  }
  return;
}



/* Entry: 104028968; end: 1040289a3;  */

void FUN_104028968(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1040289a4; end: 1040289cf;  */

void FUN_1040289a4(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  bVar5 = *(char *)(unaff_x20 + 0x21) != '\0';
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_a0 - extraout_x8;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar13 + 0x10,auStack_78,0,0);
  puVar7 = (undefined *)(lVar13 + 0x10);
  _swift_weakLoadStrong();
  if (puVar7 != (undefined *)0x0) {
    lStack_90 = lVar8;
    func_0x000100029394(param_1,lVar17);
    lVar8 = lVar17;
    (**(code **)(lVar15 + 0x30))(lVar17,1,lVar6);
    if ((int)lVar8 == 1) {
      func_0x0001000293e4(lVar17);
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar1;
        _swift_getObjectType(uVar1);
        puVar11 = &UNK_110736cd8;
        _swift_allocObject(&UNK_110736cd8,0x18,7);
        _swift_weakInit(puVar11 + 0x10,puVar7);
        puVar12 = &UNK_110736de0;
        _swift_allocObject(&UNK_110736de0,0x40,7);
        uVar4 = uStack_80;
        uVar10 = uStack_88;
        lVar6 = lStack_90;
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(undefined8 *)(puVar12 + 0x18) = uStack_88;
        puVar12[0x20] = uVar3;
        puVar12[0x21] = bVar5;
        *(undefined8 *)(puVar12 + 0x28) = uVar1;
        *(long *)(puVar12 + 0x30) = lStack_90;
        *(undefined8 *)(puVar12 + 0x38) = uStack_80;
        pcVar14 = *(code **)(lStack_90 + 0x10);
        _swift_unknownObjectRetain(uVar1);
        _swift_retain(uVar10);
        _swift_retain(puVar11);
        _objc_retain(uVar4);
        (*pcVar14)(0x104028818,puVar12,uVar9,lVar6);
        _swift_release(puVar7);
        _swift_release(puVar11);
        puVar7 = puVar12;
      }
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar16,lVar17,lVar6);
      uVar10 = uVar1;
      _swift_getObjectType();
      lVar8 = lStack_90;
      lVar13 = lStack_90;
      (**(code **)(lStack_90 + 8))();
      puVar11 = &UNK_110736cd8;
      lStack_a0 = lVar13;
      uStack_98 = uVar10;
      _swift_allocObject(&UNK_110736cd8,0x18,7);
      _swift_weakInit(puVar11 + 0x10,puVar7);
      puVar12 = &UNK_110736e08;
      _swift_allocObject(&UNK_110736e08,0x38,7);
      uVar10 = uStack_88;
      *(undefined **)(puVar12 + 0x10) = puVar11;
      puVar12[0x18] = uVar3;
      puVar12[0x19] = bVar5;
      *(undefined8 *)(puVar12 + 0x20) = uVar1;
      *(long *)(puVar12 + 0x28) = lVar8;
      *(undefined8 *)(puVar12 + 0x30) = uStack_88;
      _swift_retain(puVar11);
      _swift_unknownObjectRetain(uVar1);
      _swift_retain(uVar10);
      lVar8 = lStack_a0;
      func_0x00010402e854(lVar16,uStack_98,lStack_a0,0x10402881c,puVar12);
      _swift_release(puVar7);
      _swift_bridgeObjectRelease(lVar8);
      _swift_release(puVar12);
      (**(code **)(lVar15 + 8))(lVar16,lVar6);
      puVar7 = puVar11;
    }
    _swift_release(puVar7);
  }
  return;
}



/* Entry: 1040289d0; end: 104028ad7;  */

void FUN_1040289d0(void)

{
  long unaff_x20;
  
  FUN_104027b6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104028ad8; end: 104028ae3;  */

void FUN_104028ad8(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  bVar5 = *(char *)(unaff_x20 + 0x21) != '\0';
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_a0 - extraout_x8;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(lVar13 + 0x10,auStack_78,0,0);
  puVar7 = (undefined *)(lVar13 + 0x10);
  _swift_weakLoadStrong();
  if (puVar7 != (undefined *)0x0) {
    lStack_90 = lVar8;
    func_0x000100029394(param_1,lVar17);
    lVar8 = lVar17;
    (**(code **)(lVar15 + 0x30))(lVar17,1,lVar6);
    if ((int)lVar8 == 1) {
      func_0x0001000293e4(lVar17);
      if ((bVar2 & 1) != 0) {
        uVar9 = uVar1;
        _swift_getObjectType(uVar1);
        puVar11 = &UNK_110736cd8;
        _swift_allocObject(&UNK_110736cd8,0x18,7);
        _swift_weakInit(puVar11 + 0x10,puVar7);
        puVar12 = &UNK_110736de0;
        _swift_allocObject(&UNK_110736de0,0x40,7);
        uVar4 = uStack_80;
        uVar10 = uStack_88;
        lVar6 = lStack_90;
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(undefined8 *)(puVar12 + 0x18) = uStack_88;
        puVar12[0x20] = uVar3;
        puVar12[0x21] = bVar5;
        *(undefined8 *)(puVar12 + 0x28) = uVar1;
        *(long *)(puVar12 + 0x30) = lStack_90;
        *(undefined8 *)(puVar12 + 0x38) = uStack_80;
        pcVar14 = *(code **)(lStack_90 + 0x10);
        _swift_unknownObjectRetain(uVar1);
        _swift_retain(uVar10);
        _swift_retain(puVar11);
        _objc_retain(uVar4);
        (*pcVar14)(0x104028818,puVar12,uVar9,lVar6);
        _swift_release(puVar7);
        _swift_release(puVar11);
        puVar7 = puVar12;
      }
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar16,lVar17,lVar6);
      uVar10 = uVar1;
      _swift_getObjectType();
      lVar8 = lStack_90;
      lVar13 = lStack_90;
      (**(code **)(lStack_90 + 8))();
      puVar11 = &UNK_110736cd8;
      lStack_a0 = lVar13;
      uStack_98 = uVar10;
      _swift_allocObject(&UNK_110736cd8,0x18,7);
      _swift_weakInit(puVar11 + 0x10,puVar7);
      puVar12 = &UNK_110736e08;
      _swift_allocObject(&UNK_110736e08,0x38,7);
      uVar10 = uStack_88;
      *(undefined **)(puVar12 + 0x10) = puVar11;
      puVar12[0x18] = uVar3;
      puVar12[0x19] = bVar5;
      *(undefined8 *)(puVar12 + 0x20) = uVar1;
      *(long *)(puVar12 + 0x28) = lVar8;
      *(undefined8 *)(puVar12 + 0x30) = uStack_88;
      _swift_retain(puVar11);
      _swift_unknownObjectRetain(uVar1);
      _swift_retain(uVar10);
      lVar8 = lStack_a0;
      func_0x00010402e854(lVar16,uStack_98,lStack_a0,0x10402881c,puVar12);
      _swift_release(puVar7);
      _swift_bridgeObjectRelease(lVar8);
      _swift_release(puVar12);
      (**(code **)(lVar15 + 8))(lVar16,lVar6);
      puVar7 = puVar11;
    }
    _swift_release(puVar7);
  }
  return;
}



/* Entry: 104028ae4; end: 104028af7;  */

void FUN_104028ae4(void)

{
  func_0x0001040288bc();
  return;
}



/* Entry: 104028af8; end: 104028b27;  */

void FUN_104028af8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 104028b28; end: 104028b83;  */

void FUN_104028b28(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000104028b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 104028b84; end: 104028ba3;  */

void FUN_104028b84(void)

{
  _objc_opt_self(&PTR_PTR_113049b88);
  return;
}



/* Entry: 104028ba4; end: 104028ba7;  */

void FUN_104028ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104028ba8; end: 104028c17;  */

void FUN_104028ba8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&lStack_28,param_1 + 0x58);
  }
  return;
}



/* Entry: 104028c18; end: 104028c4f;  */

void FUN_104028c18(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104028c50; end: 104028c73;  */

void FUN_104028c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7e4c44);
  return;
}



/* Entry: 104028c74; end: 104028d23;  */

void FUN_104028c74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_104028d24;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,1);
  uVar3 = 0x113049c68;
  func_0x0001000285a8(0x113049c68,&UNK_10dcc4e68);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_104028e04;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110736fa8;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x00010bf02860(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 104028d24; end: 104028d7b;  */

void FUN_104028d24(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_104028d7c;
  }
  else {
    pcVar1 = FUN_104028dc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104028d7c; end: 104028dc3;  */

void FUN_104028d7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = uVar2;
  func_0x000107c4a3c4(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104028dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 104028dc4; end: 104028e03;  */

void FUN_104028dc4(void)

{
  long unaff_x22;
  
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000104028e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 104028e04; end: 104028eaf;  */

void FUN_104028e04(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    _swift_allocError();
    *plVar2 = param_3;
    _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104028eb0);
  (*pcVar1)();
}



/* Entry: 104028eb0; end: 104028edf;  */

long FUN_104028eb0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 104028ee0; end: 104028f37;  */

void FUN_104028ee0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  __sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05videoE09forFileAtAbCE05VideoE7HandlerC10Foundation3URLV_tF
            ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05VideoE7HandlerC03hascD0So0aE0CyYaKFTu_11034ce18
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104028f38;
                    /* WARNING: Could not recover jumptable at 0x00010bdb88f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05VideoE7HandlerC03hascD0So0aE0CyYaKF_11034ce10
  )();
  return;
}



/* Entry: 104028f38; end: 104028fa3;  */

void FUN_104028f38(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_104028fa4;
  }
  else {
    pcVar1 = FUN_10402921c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104028fa4; end: 104028fff;  */

void FUN_104028fa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = uVar3;
  func_0x000107c4a3c4(uVar3);
  _objc_release(uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000104028ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 104029000; end: 104029007;  */

void FUN_104029000(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf024b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_analysisPolicy_11259e2d0);
  return;
}



/* Entry: 104029008; end: 104029057;  */

void FUN_104029008(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_104029058;
  plVar1[0x13] = param_1;
  plVar1[0x14] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104028c74,0,0);
  return;
}



/* Entry: 104029058; end: 1040290a7;  */

void FUN_104029058(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040290a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1040290a8; end: 1040290c3;  */

void FUN_1040290a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1040290c4,0,0);
  return;
}



/* Entry: 1040290c4; end: 10402911b;  */

void FUN_1040290c4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  __sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05videoE09forFileAtAbCE05VideoE7HandlerC10Foundation3URLV_tF
            ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05VideoE7HandlerC03hascD0So0aE0CyYaKFTu_11034ce18
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10402911c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb88f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___sSo21SCSensitivityAnalyzerC24SensitiveContentAnalysisE05VideoE7HandlerC03hascD0So0aE0CyYaKF_11034ce10
  )();
  return;
}



/* Entry: 10402911c; end: 104029187;  */

void FUN_10402911c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_1;
    pcVar1 = FUN_104029188;
  }
  else {
    pcVar1 = FUN_1040291e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104029188; end: 1040291e3;  */

void FUN_104029188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = uVar3;
  func_0x000107c4a3c4(uVar3);
  _objc_release(uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001040291e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 1040291e4; end: 10402921b;  */

void FUN_1040291e4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000104029218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10402921c; end: 10402927b;  */

void FUN_10402921c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000104029218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10402927c; end: 104029327;  */

void FUN_10402927c(void)

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



/* Entry: 104029328; end: 104029387;  */

void FUN_104029328(void)

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
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104029388; end: 1040293bb;  */

void FUN_104029388(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 2);
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 1040293bc; end: 104029417;  */

void FUN_1040293bc(void)

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
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104029418; end: 104029473;  */

bool FUN_104029418(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return false;
  }
  return (char)uVar1 == (char)uVar2;
}



/* Entry: 104029474; end: 10402951f;  */

undefined8 FUN_104029474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_10402d498(param_1,param_2,param_3);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Entry: 104029520; end: 10402955f;  */

bool FUN_104029520(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x98) == '\x01') {
    return *(long *)(unaff_x20 + 0xa0) != 0;
  }
  return false;
}



/* Entry: 104029560; end: 104029b93;  */

void FUN_104029560(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar14 = *(long *)(unaff_x22 + 0x1c0);
  if ((*(char *)(lVar14 + 0x98) == '\x01') && (*(long *)(lVar14 + 0xa0) != 0)) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar7 = *(long *)(lVar14 + 0xd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,*(undefined8 *)(unaff_x22 + 0x1b8));
    func_0x000107c4d9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    lVar13 = *(long *)(unaff_x22 + 0x1c0);
    if (lVar7 != 0) {
      FUN_10402d6c4(lVar13 + 0xa8,unaff_x22 + 0x150);
      lVar14 = *(long *)(unaff_x22 + 0x168);
      if (lVar14 == 0) {
        FUN_10402dc84(unaff_x22 + 0x150,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x170);
        func_0x0001000a8868(unaff_x22 + 0x150,lVar14);
        (**(code **)(lVar13 + 0x18))(0,1,lVar14,lVar13);
        func_0x0001000834e4(unaff_x22 + 0x150);
      }
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      uVar3 = *(undefined1 *)(lVar7 + 0x18);
      _swift_release(lVar7);
      goto LAB_10402977c;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
    _swift_beginAccess(lVar13 + 0xd0,unaff_x22 + 0x178,0,0);
    lVar7 = *(long *)(lVar13 + 0xd0);
    lVar9 = *(long *)(lVar7 + 0x10);
    _swift_bridgeObjectRetain(uVar8);
    if (lVar9 == 0) {
LAB_104029880:
      lVar9 = *(long *)(unaff_x22 + 0x1c0);
      lVar7 = *(long *)(unaff_x22 + 0x1a8);
      FUN_10402b75c();
      *(long *)(unaff_x22 + 0x1f8) = lVar7;
      if (lVar7 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1b8));
        FUN_10402d6c4(lVar9 + 0xa8,unaff_x22 + 0x38);
        lVar14 = *(long *)(unaff_x22 + 0x50);
        if (lVar14 == 0) {
          FUN_10402dc84(unaff_x22 + 0x38,0x113049c70,&UNK_10dcc50b0);
        }
        else {
          lVar7 = *(long *)(unaff_x22 + 0x58);
          func_0x0001000a8868(unaff_x22 + 0x38,lVar14);
          (**(code **)(lVar7 + 0x18))(0,4,lVar14,lVar7);
          func_0x0001000834e4(unaff_x22 + 0x38);
        }
        FUN_10402d6c4(lVar9 + 0xa8,unaff_x22 + 0x60);
        lVar14 = *(long *)(unaff_x22 + 0x78);
        if (lVar14 == 0) {
          FUN_10402dc84(unaff_x22 + 0x60,0x113049c70,&UNK_10dcc50b0);
          uVar8 = 1;
        }
        else {
          lVar7 = *(long *)(unaff_x22 + 0x80);
          func_0x0001000a8868(unaff_x22 + 0x60,lVar14);
          (**(code **)(lVar7 + 0x28))(lVar14,lVar7);
          func_0x0001000834e4(unaff_x22 + 0x60);
          uVar8 = 1;
        }
        goto LAB_104029684;
      }
      FUN_10402d6c4(lVar9 + 0xa8,unaff_x22 + 0x88);
      lVar10 = *(long *)(unaff_x22 + 0xa0);
      if (lVar10 == 0) {
        FUN_10402dc84(unaff_x22 + 0x88,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        lVar11 = *(long *)(unaff_x22 + 0xa8);
        func_0x0001000a8868(unaff_x22 + 0x88,lVar10);
        (**(code **)(lVar11 + 0x18))(0,3,lVar10,lVar11);
        func_0x0001000834e4(unaff_x22 + 0x88);
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar15 = *(undefined8 *)(lVar14 + 0xa0);
      func_0x00010402d714(*(long *)(unaff_x22 + 0x1c0) + 0x70,unaff_x22 + 0xb0);
      FUN_10402d6c4(lVar9 + 0xa8,unaff_x22 + 0xd8);
      puVar2 = &UNK_110737008;
      _swift_allocObject(&UNK_110737008,0x80,7);
      FUN_10402d758(unaff_x22 + 0xb0,puVar2 + 0x10);
      *(long *)(puVar2 + 0x38) = lVar7;
      uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
      *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)(unaff_x22 + 0xe0);
      *(undefined8 *)(puVar2 + 0x40) = uVar5;
      *(undefined8 *)(puVar2 + 0x58) = uVar17;
      *(undefined8 *)(puVar2 + 0x50) = uVar16;
      *(undefined8 *)(puVar2 + 0x60) = *(undefined8 *)(unaff_x22 + 0xf8);
      *(undefined8 *)(puVar2 + 0x68) = uVar12;
      *(undefined8 *)(puVar2 + 0x70) = uVar8;
      *(undefined8 *)(puVar2 + 0x78) = uVar15;
      _swift_bridgeObjectRetain(uVar8);
      _objc_retain(lVar7);
      lVar14 = 8;
      func_0x000100859150(8,0,0x5c,4,0,0,&UNK_10dcc4ec8,puVar2,&UNK_1107370c8);
      *(long *)(unaff_x22 + 0x200) = lVar14;
      _swift_release(puVar2);
      _swift_beginAccess(lVar13 + 0xd0,unaff_x22 + 400,0x21,0);
      _swift_retain(lVar14);
      uVar15 = *(undefined8 *)(lVar13 + 0xd0);
      _swift_isUniquelyReferenced_nonNull_native(uVar15);
      uVar5 = *(undefined8 *)(lVar13 + 0xd0);
      *(undefined8 *)(lVar13 + 0xd0) = 0x8000000000000000;
      func_0x00010402bfbc(lVar14,uVar12,uVar8,0,uVar15);
      _swift_bridgeObjectRelease(uVar8);
      *(undefined8 *)(lVar13 + 0xd0) = uVar5;
      _swift_endAccess(unaff_x22 + 400);
      plVar1 = (long *)0xe0;
      _swift_task_alloc();
      pcVar6 = (code *)0x104029cb4;
      *(long **)(unaff_x22 + 0x208) = plVar1;
    }
    else {
      lVar9 = *(long *)(unaff_x22 + 0x1b0);
      uVar4 = *(ulong *)(unaff_x22 + 0x1b8);
      _swift_bridgeObjectRetain(lVar7);
      FUN_10402b868(lVar9,uVar4,0);
      if ((uVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar7);
        lVar7 = *(long *)(lVar13 + 0xd0);
        if (*(long *)(lVar7 + 0x10) != 0) {
          lVar9 = *(long *)(unaff_x22 + 0x1b0);
          uVar4 = *(ulong *)(unaff_x22 + 0x1b8);
          _swift_bridgeObjectRetain(lVar7);
          FUN_10402b868(lVar9,uVar4,1);
          if ((uVar4 & 1) != 0) {
            uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
            lVar13 = *(long *)(unaff_x22 + 0x1c0);
            lVar14 = *(long *)(*(long *)(lVar7 + 0x38) + lVar9 * 8);
            *(long *)(unaff_x22 + 0x1e0) = lVar14;
            _swift_retain(lVar14);
            _swift_bridgeObjectRelease(lVar7);
            _swift_bridgeObjectRelease(uVar8);
            FUN_10402d6c4(lVar13 + 0xa8,unaff_x22 + 0x100);
            lVar7 = *(long *)(unaff_x22 + 0x118);
            if (lVar7 == 0) {
              FUN_10402dc84(unaff_x22 + 0x100,0x113049c70,&UNK_10dcc50b0);
            }
            else {
              lVar13 = *(long *)(unaff_x22 + 0x120);
              func_0x0001000a8868(unaff_x22 + 0x100,lVar7);
              (**(code **)(lVar13 + 0x18))(0,2,lVar7,lVar13);
              func_0x0001000834e4(unaff_x22 + 0x100);
            }
            plVar1 = (long *)0xe0;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x1e8) = plVar1;
            *plVar1 = unaff_x22;
            plVar1[1] = 0x104029c24;
            lVar7 = *(long *)(unaff_x22 + 0x1b8);
            lVar13 = *(long *)(unaff_x22 + 0x1c0);
            lVar9 = *(long *)(unaff_x22 + 0x1b0);
            uVar3 = 1;
            goto LAB_104029aa8;
          }
          _swift_bridgeObjectRelease(lVar7);
        }
        goto LAB_104029880;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
      lVar13 = *(long *)(unaff_x22 + 0x1c0);
      lVar14 = *(long *)(*(long *)(lVar7 + 0x38) + lVar9 * 8);
      *(long *)(unaff_x22 + 0x1c8) = lVar14;
      _swift_retain(lVar14);
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(uVar8);
      FUN_10402d6c4(lVar13 + 0xa8,unaff_x22 + 0x128);
      lVar7 = *(long *)(unaff_x22 + 0x140);
      if (lVar7 == 0) {
        FUN_10402dc84(unaff_x22 + 0x128,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x148);
        func_0x0001000a8868(unaff_x22 + 0x128,lVar7);
        (**(code **)(lVar13 + 0x18))(0,2,lVar7,lVar13);
        func_0x0001000834e4(unaff_x22 + 0x128);
      }
      plVar1 = (long *)0xe0;
      _swift_task_alloc();
      pcVar6 = FUN_104029b94;
      *(long **)(unaff_x22 + 0x1d0) = plVar1;
    }
    *plVar1 = unaff_x22;
    plVar1[1] = (long)pcVar6;
    lVar7 = *(long *)(unaff_x22 + 0x1b8);
    lVar13 = *(long *)(unaff_x22 + 0x1c0);
    lVar9 = *(long *)(unaff_x22 + 0x1b0);
    uVar3 = 0;
LAB_104029aa8:
    *(undefined1 *)((long)plVar1 + 0x62) = uVar3;
    *(undefined1 *)((long)plVar1 + 0x61) = 1;
    plVar1[0x12] = lVar7;
    plVar1[0x13] = lVar13;
    plVar1[0x10] = lVar14;
    plVar1[0x11] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10402b088,lVar13,0);
    return;
  }
  FUN_10402d6c4(lVar14 + 0xa8,unaff_x22 + 0x10);
  lVar14 = *(long *)(unaff_x22 + 0x28);
  if (lVar14 == 0) {
    FUN_10402dc84(unaff_x22 + 0x10,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,lVar14);
    (**(code **)(lVar7 + 0x18))(0,0,lVar14,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
  uVar8 = 0;
LAB_104029684:
  uVar3 = 1;
LAB_10402977c:
                    /* WARNING: Could not recover jumptable at 0x000104029798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8,uVar3);
  return;
}



/* Entry: 104029b94; end: 104029de7;  */

void FUN_104029b94(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x1c0);
  *(undefined8 *)(lVar1 + 0x1d8) = param_1;
  *(undefined1 *)(lVar1 + 0x218) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x104029bec,uVar2,0);
  return;
}



/* Entry: 104029de8; end: 104029ebb;  */

/* WARNING: Removing unreachable block (ram,0x000104029e10) */

void FUN_104029de8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  lVar6 = *(long *)(unaff_x22 + 0x98);
  __s10Foundation4DateVACycfC(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar3 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104029ebc;
                    /* WARNING: Could not recover jumptable at 0x000104029eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xa0),uVar2,lVar3);
  return;
}



/* Entry: 104029ebc; end: 104029f1f;  */

void FUN_104029ebc(undefined1 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x100) = param_1;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104029f20;
  }
  else {
    pcVar1 = FUN_10402a090;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104029f20; end: 10402a08f;  */

void FUN_104029f20(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  FUN_10402d6c4(*(undefined8 *)(unaff_x22 + 0xa8),unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  if (lVar5 == 0) {
    FUN_10402dc84(unaff_x22 + 0x60,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    lVar9 = *(long *)(unaff_x22 + 0x80);
    func_0x0001000a8868(unaff_x22 + 0x60,lVar5);
    __s10Foundation4DateVACycfC(uVar3);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar1);
    (**(code **)(lVar8 + 8))(uVar3,uVar7);
    (**(code **)(lVar9 + 0x20))(param_1,0,0,lVar5,lVar9);
    func_0x0001000834e4(unaff_x22 + 0x60);
  }
  lVar8 = *(long *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  (**(code **)(lVar5 + 8))(uVar7,uVar3);
  if (lVar8 == 0) {
    bVar2 = *(byte *)(unaff_x22 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    if (bVar2 == 0) {
      uVar3 = 1;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x90);
    *puVar4 = uVar3;
    *(byte *)(puVar4 + 1) = bVar2 ^ 1;
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010402a08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10402a090; end: 10402a387;  */

void FUN_10402a090(undefined8 param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_errorRetain();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  _swift_dynamicCast(uVar3,(undefined8 *)(unaff_x22 + 0x88),uVar5,uVar7,0);
  if ((int)uVar3 == 0) {
    lVar4 = unaff_x22 + 0x10;
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x88));
    FUN_10402d6c4(uVar5,lVar4);
    lVar8 = *(long *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0xd8) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xd0));
      _swift_errorRelease(uVar5);
      func_0x00010402dc84(lVar4,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      lVar1 = *(long *)(unaff_x22 + 0xd8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
      lVar10 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(lVar4,lVar8);
      __s10Foundation4DateVACycfC(uVar7);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar3);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar6);
      (**(code **)(lVar10 + 0x20))(param_1,0,1,lVar8,lVar10);
      _swift_errorRelease(uVar5);
      (*UNRECOVERED_JUMPTABLE)(uVar3,uVar6);
      func_0x0001000834e4(lVar4);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar4 = unaff_x22 + 0x38;
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xf8));
    FUN_10402d6c4(uVar5,lVar4);
    lVar8 = *(long *)(unaff_x22 + 0x50);
    if (lVar8 == 0) {
      func_0x00010402dc84(lVar4,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
      lVar1 = *(long *)(unaff_x22 + 0xd8);
      lVar10 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(lVar4,lVar8);
      __s10Foundation4DateVACycfC(uVar5);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar7);
      (**(code **)(lVar1 + 8))(uVar5,uVar3);
      (**(code **)(lVar10 + 0x20))(param_1,0,2,lVar8,lVar10);
      func_0x0001000834e4(lVar4);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = 0x112d4e4a0;
    func_0x00010402dcc4(0x112d4e4a0,0xff,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    _swift_allocError(uVar9,uVar5,0,0);
    __sS2cEycfC(uVar5);
    _swift_willThrow();
    (**(code **)(lVar8 + 8))(uVar6,uVar3);
    (**(code **)(lVar4 + 8))(uVar7,uVar9);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x88));
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010402a384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10402a388; end: 10402a3ef;  */

void FUN_10402a388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = param_3;
  *(undefined8 *)(unaff_x22 + 0x148) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  *(undefined8 *)(unaff_x22 + 0x138) = param_2;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  *(long *)(unaff_x22 + 0x150) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x158) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x160) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402a3f0);
  return;
}



/* Entry: 10402a3f0; end: 10402a8e7;  */

void FUN_10402a3f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar15 = *(long *)(unaff_x22 + 0x148);
  if ((*(char *)(lVar15 + 0x98) != '\x01') || (*(long *)(lVar15 + 0xa0) == 0)) {
    FUN_10402d6c4(lVar15 + 0xa8,unaff_x22 + 0x10);
    lVar15 = *(long *)(unaff_x22 + 0x28);
    if (lVar15 == 0) {
      FUN_10402dc84(unaff_x22 + 0x10,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      lVar9 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,lVar15);
      (**(code **)(lVar9 + 0x18))(1,0,lVar15,lVar9);
      func_0x0001000834e4(unaff_x22 + 0x10);
    }
    uVar10 = 0;
    uVar11 = 1;
LAB_10402a528:
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010402a558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar10,uVar11);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar9 = *(long *)(lVar15 + 0xd8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c4d9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x19) == '\x01') {
      FUN_10402d6c4(*(long *)(unaff_x22 + 0x148) + 0xa8,unaff_x22 + 0xd8);
      lVar15 = *(long *)(unaff_x22 + 0xf0);
      if (lVar15 == 0) {
        FUN_10402dc84(unaff_x22 + 0xd8,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        lVar14 = *(long *)(unaff_x22 + 0xf8);
        func_0x0001000a8868(unaff_x22 + 0xd8,lVar15);
        (**(code **)(lVar14 + 0x18))(1,1,lVar15,lVar14);
        func_0x0001000834e4(unaff_x22 + 0xd8);
      }
      uVar10 = *(undefined8 *)(lVar9 + 0x10);
      uVar11 = *(undefined1 *)(lVar9 + 0x18);
      _swift_release(lVar9);
      goto LAB_10402a528;
    }
    _swift_release(lVar9);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar9 = *(long *)(unaff_x22 + 0x148);
  _swift_beginAccess(lVar9 + 0xd0,unaff_x22 + 0x100,0,0);
  lVar14 = *(long *)(lVar9 + 0xd0);
  lVar12 = *(long *)(lVar14 + 0x10);
  _swift_bridgeObjectRetain(uVar10);
  if (lVar12 != 0) {
    lVar12 = *(long *)(unaff_x22 + 0x138);
    uVar6 = *(ulong *)(unaff_x22 + 0x140);
    _swift_bridgeObjectRetain(lVar14);
    FUN_10402b868(lVar12,uVar6,1);
    if ((uVar6 & 1) != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x140);
      lVar15 = *(long *)(unaff_x22 + 0x148);
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + lVar12 * 8);
      *(long *)(unaff_x22 + 0x170) = lVar12;
      _swift_retain(lVar12);
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(uVar10);
      FUN_10402d6c4(lVar15 + 0xa8,unaff_x22 + 0xb0);
      lVar15 = *(long *)(unaff_x22 + 200);
      if (lVar15 == 0) {
        FUN_10402dc84(unaff_x22 + 0xb0,0x113049c70,&UNK_10dcc50b0);
      }
      else {
        lVar9 = *(long *)(unaff_x22 + 0xd0);
        func_0x0001000a8868(unaff_x22 + 0xb0,lVar15);
        (**(code **)(lVar9 + 0x18))(1,2,lVar15,lVar9);
        func_0x0001000834e4(unaff_x22 + 0xb0);
      }
      plVar5 = (long *)0xe0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x178) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_10402a8e8;
      lVar15 = *(long *)(unaff_x22 + 0x140);
      lVar9 = *(long *)(unaff_x22 + 0x148);
      lVar14 = *(long *)(unaff_x22 + 0x138);
      goto LAB_10402a8c0;
    }
    _swift_bridgeObjectRelease(lVar14);
  }
  lVar12 = *(long *)(unaff_x22 + 0x148);
  FUN_10402d6c4(lVar12 + 0xa8,unaff_x22 + 0x38);
  lVar14 = *(long *)(unaff_x22 + 0x50);
  if (lVar14 == 0) {
    FUN_10402dc84(unaff_x22 + 0x38,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,lVar14);
    (**(code **)(lVar13 + 0x18))(1,3,lVar14,lVar13);
    func_0x0001000834e4(unaff_x22 + 0x38);
  }
  lVar14 = *(long *)(unaff_x22 + 0x160);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar13 = *(long *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(lVar15 + 0xa0);
  func_0x00010402d714(*(long *)(unaff_x22 + 0x148) + 0x70,unaff_x22 + 0x60);
  (**(code **)(lVar13 + 0x10))(uVar18,uVar7,uVar10);
  FUN_10402d6c4(lVar12 + 0xa8,unaff_x22 + 0x88);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar16 = uVar6 + 0x38 & (uVar6 ^ 0xffffffffffffffff);
  uVar17 = lVar14 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110737030;
  _swift_allocObject(&UNK_110737030,uVar17 + 0x40,uVar6 | 7);
  FUN_10402d758(unaff_x22 + 0x60,puVar4 + 0x10);
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar16,uVar18,uVar10);
  puVar1 = (undefined8 *)(puVar4 + uVar17);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x90);
  *puVar1 = uVar10;
  puVar1[3] = uVar18;
  puVar1[2] = uVar7;
  puVar1[4] = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(puVar4 + uVar17 + 0x28) = uVar3;
  *(undefined8 *)((long)(puVar4 + uVar17 + 0x28) + 8) = uVar2;
  *(undefined8 *)(puVar4 + uVar17 + 0x38) = uVar8;
  _swift_bridgeObjectRetain();
  lVar12 = 8;
  func_0x000100859150(8,0,0x5c,4,0,0,&UNK_10dcc4ee8,puVar4,&UNK_1107370c8);
  *(long *)(unaff_x22 + 0x188) = lVar12;
  _swift_release(puVar4);
  _swift_beginAccess(lVar9 + 0xd0,unaff_x22 + 0x118,0x21,0);
  _swift_retain(lVar12);
  uVar10 = *(undefined8 *)(lVar9 + 0xd0);
  _swift_isUniquelyReferenced_nonNull_native(uVar10);
  uVar7 = *(undefined8 *)(lVar9 + 0xd0);
  *(undefined8 *)(lVar9 + 0xd0) = 0x8000000000000000;
  func_0x00010402bfbc(lVar12,uVar3,uVar2,1,uVar10);
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(lVar9 + 0xd0) = uVar7;
  _swift_endAccess(unaff_x22 + 0x118);
  plVar5 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10402a988;
  lVar15 = *(long *)(unaff_x22 + 0x140);
  lVar9 = *(long *)(unaff_x22 + 0x148);
  lVar14 = *(long *)(unaff_x22 + 0x138);
LAB_10402a8c0:
  *(undefined1 *)((long)plVar5 + 0x62) = 1;
  *(undefined1 *)((long)plVar5 + 0x61) = 1;
  plVar5[0x12] = lVar15;
  plVar5[0x13] = lVar9;
  plVar5[0x10] = lVar12;
  plVar5[0x11] = lVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402b088,lVar9,0);
  return;
}



/* Entry: 10402a8e8; end: 10402a93f;  */

void FUN_10402a8e8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(lVar1 + 0x180) = param_1;
  *(undefined1 *)(lVar1 + 0x1a0) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402a940,uVar2,0);
  return;
}



/* Entry: 10402a940; end: 10402a987;  */

void FUN_10402a940(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x1a0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010402a984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 10402a988; end: 10402a9df;  */

void FUN_10402a988(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  *(undefined8 *)(lVar1 + 0x198) = param_1;
  *(undefined1 *)(lVar1 + 0x1a1) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402a9e0,uVar2,0);
  return;
}



/* Entry: 10402a9e0; end: 10402aa27;  */

void FUN_10402a9e0(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x188));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x1a1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x168));
                    /* WARNING: Could not recover jumptable at 0x00010402aa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 10402aa28; end: 10402aac3;  */

void FUN_10402aa28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  lVar1 = 0;
  __sScEMa();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402aac4,0,0);
  return;
}



/* Entry: 10402aac4; end: 10402ab97;  */

/* WARNING: Removing unreachable block (ram,0x00010402aaec) */

void FUN_10402aac4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  lVar6 = *(long *)(unaff_x22 + 0x98);
  __s10Foundation4DateVACycfC(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar2 = *(undefined8 *)(lVar6 + 0x18);
  lVar3 = *(long *)(lVar6 + 0x20);
  func_0x0001000a8868(lVar6,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10402ab98;
                    /* WARNING: Could not recover jumptable at 0x00010402ab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xa0),uVar2,lVar3);
  return;
}



/* Entry: 10402ab98; end: 10402abfb;  */

void FUN_10402ab98(undefined1 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x100) = param_1;
  *(long *)(lVar2 + 0xf8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xf0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10402abfc;
  }
  else {
    pcVar1 = FUN_10402ad6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10402abfc; end: 10402ad6b;  */

void FUN_10402abfc(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  FUN_10402d6c4(*(undefined8 *)(unaff_x22 + 0xa8),unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x78);
  if (lVar5 == 0) {
    FUN_10402dc84(unaff_x22 + 0x60,0x113049c70,&UNK_10dcc50b0);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    lVar9 = *(long *)(unaff_x22 + 0x80);
    func_0x0001000a8868(unaff_x22 + 0x60,lVar5);
    __s10Foundation4DateVACycfC(uVar3);
    __s10Foundation4DateV17timeIntervalSinceySdACF(uVar1);
    (**(code **)(lVar8 + 8))(uVar3,uVar7);
    (**(code **)(lVar9 + 0x20))(param_1,1,0,lVar5,lVar9);
    func_0x0001000834e4(unaff_x22 + 0x60);
  }
  lVar8 = *(long *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar5 = *(long *)(unaff_x22 + 0xd8);
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  (**(code **)(lVar5 + 8))(uVar7,uVar3);
  if (lVar8 == 0) {
    bVar2 = *(byte *)(unaff_x22 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    if (bVar2 == 0) {
      uVar3 = 1;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 200);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x90);
    *puVar4 = uVar3;
    *(byte *)(puVar4 + 1) = bVar2 ^ 1;
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010402ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10402ad6c; end: 10402b063;  */

void FUN_10402ad6c(undefined8 param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_errorRetain();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  _swift_dynamicCast(uVar3,(undefined8 *)(unaff_x22 + 0x88),uVar5,uVar7,0);
  if ((int)uVar3 == 0) {
    lVar4 = unaff_x22 + 0x10;
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x88));
    FUN_10402d6c4(uVar5,lVar4);
    lVar8 = *(long *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0xd8) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xd0));
      _swift_errorRelease(uVar5);
      func_0x00010402dc84(lVar4,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      lVar1 = *(long *)(unaff_x22 + 0xd8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
      lVar10 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(lVar4,lVar8);
      __s10Foundation4DateVACycfC(uVar7);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar3);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar6);
      (**(code **)(lVar10 + 0x20))(param_1,1,1,lVar8,lVar10);
      _swift_errorRelease(uVar5);
      (*UNRECOVERED_JUMPTABLE)(uVar3,uVar6);
      func_0x0001000834e4(lVar4);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 1;
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar4 = unaff_x22 + 0x38;
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xf8));
    FUN_10402d6c4(uVar5,lVar4);
    lVar8 = *(long *)(unaff_x22 + 0x50);
    if (lVar8 == 0) {
      func_0x00010402dc84(lVar4,0x113049c70,&UNK_10dcc50b0);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
      lVar1 = *(long *)(unaff_x22 + 0xd8);
      lVar10 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(lVar4,lVar8);
      __s10Foundation4DateVACycfC(uVar5);
      __s10Foundation4DateV17timeIntervalSinceySdACF(uVar7);
      (**(code **)(lVar1 + 8))(uVar5,uVar3);
      (**(code **)(lVar10 + 0x20))(param_1,1,2,lVar8,lVar10);
      func_0x0001000834e4(lVar4);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar8 = *(long *)(unaff_x22 + 0xd8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = 0x112d4e4a0;
    func_0x00010402dcc4(0x112d4e4a0,0xff,PTR___sScEMa_11034fba8,PTR___sScEs5ErrorsMc_11034fbb0);
    _swift_allocError(uVar9,uVar5,0,0);
    __sS2cEycfC(uVar5);
    _swift_willThrow();
    (**(code **)(lVar8 + 8))(uVar6,uVar3);
    (**(code **)(lVar4 + 8))(uVar7,uVar9);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x88));
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010402b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10402b064; end: 10402b087;  */

void FUN_10402b064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x62) = param_5;
  *(undefined1 *)(unaff_x22 + 0x61) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402b088);
  return;
}



/* Entry: 10402b088; end: 10402b187;  */

void FUN_10402b088(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar3 = 0x113049db8;
  func_0x00010402dcc4(0x113049db8,param_2,FUN_10402d8f4,&UNK_10dcc4f18);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10402b188;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar2,unaff_x22 + 0x58,&UNK_10dcc5020,*(undefined8 *)(unaff_x22 + 0x80),FUN_10402dc48,
      *(undefined8 *)(unaff_x22 + 0x80),uVar4,uVar3,&UNK_1107370c8);
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x98);
  if (lVar5 == 0) {
    lVar5 = 0;
    uVar3 = 0;
  }
  else {
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
  }
  *(long *)(unaff_x22 + 0xa8) = lVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402b1f8,lVar5);
  return;
}



/* Entry: 10402b188; end: 10402b1f7;  */

void FUN_10402b188(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0x58);
    *(undefined1 *)(lVar3 + 99) = *(undefined1 *)(lVar3 + 0x60);
    uVar2 = *(undefined8 *)(lVar3 + 0x98);
    pcVar1 = FUN_10402b370;
  }
  else {
    *(long *)(lVar3 + 0xd8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x98);
    pcVar1 = FUN_10402b4fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 10402b1f8; end: 10402b287;  */

void FUN_10402b1f8(void)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  pcVar1 = FUN_10402dc48;
  _swift_task_addCancellationHandler(FUN_10402dc48,*(undefined8 *)(unaff_x22 + 0x80));
  *(code **)(unaff_x22 + 0xb8) = pcVar1;
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar2;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10402b288;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x68,*(undefined8 *)(unaff_x22 + 0x80),&UNK_1107370c8,uVar3,
             PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 10402b288; end: 10402b2df;  */

void FUN_10402b288(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10402b2e0;
  }
  else {
    pcVar1 = (code *)0x10402b32c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xa8),*(undefined8 *)(lVar2 + 0xb0));
  return;
}



/* Entry: 10402b2e0; end: 10402b36f;  */

void FUN_10402b2e0(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0xb8));
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined1 *)(unaff_x22 + 99) = *(undefined1 *)(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10402b370,*(undefined8 *)(unaff_x22 + 0x98),0);
  return;
}



/* Entry: 10402b370; end: 10402b4fb;  */

void FUN_10402b370(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined1 *)(unaff_x22 + 99);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  cVar2 = *(char *)(unaff_x22 + 0x61);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x62);
  _swift_beginAccess(lVar6 + 0xd0,unaff_x22 + 0x40,0x21,0);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10402bc24(uVar8,uVar1,uVar3);
  _swift_endAccess(unaff_x22 + 0x40);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar8);
  lVar6 = *(long *)(lVar6 + 0xa0);
  if (lVar6 == 0) {
    uVar9 = 0;
    uVar5 = 1;
  }
  if (lVar6 != 0 && cVar2 != '\0') {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0xd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,*(undefined8 *)(unaff_x22 + 0x90));
    lVar6 = lVar7;
    func_0x000107c4d9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    cVar2 = *(char *)(unaff_x22 + 0x62);
    if ((lVar6 == 0) || (lVar4 = lVar6, *(char *)(lVar6 + 0x19) != '\x01' || cVar2 != '\0')) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar5 = *(undefined1 *)(unaff_x22 + 99);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar4 = 0x113049dc0;
      func_0x0001000285a8(0x113049dc0,&UNK_10dcc5028);
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = uVar8;
      *(undefined1 *)(lVar4 + 0x18) = uVar5;
      *(char *)(lVar4 + 0x19) = cVar2;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar9,uVar1);
      func_0x000107c56bcc(lVar7);
      _swift_release(lVar6);
      _objc_release(uVar9);
    }
    _swift_release(lVar4);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar5 = *(undefined1 *)(unaff_x22 + 99);
  }
                    /* WARNING: Could not recover jumptable at 0x00010402b4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar5);
  return;
}



/* Entry: 10402b4fc; end: 10402b693;  */

void FUN_10402b4fc(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
  lVar3 = 0;
  __sScEMa();
  lVar9 = *(long *)(lVar3 + -8);
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  _swift_errorRetain(uVar6);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar5 = uVar4;
  _swift_dynamicCast(uVar4,(undefined8 *)(unaff_x22 + 0x78),uVar6,lVar3,0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x62);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  if ((uVar5 & 1) == 0) {
    _swift_task_dealloc(uVar4);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x78));
    _swift_beginAccess(lVar1 + 0xd0,unaff_x22 + 0x10,0x21,0);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10402bc24(uVar8,uVar6,uVar2);
    _swift_endAccess(unaff_x22 + 0x10);
    _swift_bridgeObjectRelease(uVar6);
    _swift_release(uVar8);
  }
  else {
    _swift_errorRelease(uVar7);
    _swift_beginAccess(lVar1 + 0xd0,unaff_x22 + 0x28,0x21,0);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10402bc24(uVar8,uVar6,uVar2);
    _swift_endAccess(unaff_x22 + 0x28);
    _swift_bridgeObjectRelease(uVar6);
    _swift_release(uVar8);
    (**(code **)(lVar9 + 8))(uVar4,lVar3);
    _swift_task_dealloc(uVar4);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  }
  _swift_errorRelease(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010402b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1,1);
  return;
}



/* Entry: 10402b694; end: 10402b71f;  */

void FUN_10402b694(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10402b720;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (param_1,param_2,&UNK_1107370c8,uVar2,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 10402b720; end: 10402b75b;  */

void FUN_10402b720(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010402b758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10402b75c; end: 10402b807;  */

void FUN_10402b75c(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdc1020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bdc10e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar1 = *(long *)PTR__kCGColorSpaceSRGB_110347640;
      _CGColorSpaceCreateWithName();
      if (lVar1 == 0) {
        _CGColorSpaceCreateDeviceRGB();
      }
      uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
      func_0x00010bf9de20(param_1);
      func_0x00010bf54e20(uVar2,param_2,param_1,*(undefined4 *)PTR__kCIFormatRGBA8_11034ad48,lVar1);
      _objc_release(param_1);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 10402b808; end: 10402b85b;  */

void FUN_10402b808(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x70);
  FUN_10402dc84(unaff_x20 + 0xa8,0x113049c70,&UNK_10dcc50b0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  _objc_release(*(undefined8 *)(unaff_x20 + 0xd8));
  _objc_release(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_defaultActor_destroy();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10402b85c; end: 10402b867;  */

void FUN_10402b85c(void)

{
  return;
}



/* Entry: 10402b868; end: 10402b8e7;  */

undefined1  [16] FUN_10402b868(ulong param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [40];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  uVar2 = (ulong)param_3;
  __ss6HasherV8_combineyySuF();
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar6 = (ulong *)(lVar7 + uVar2 * 0x18);
      uVar3 = *puVar6;
      uVar1 = puVar6[2];
      if (((uVar3 == param_1 && puVar6[1] == param_2) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar3,puVar6[1],param_1,param_2,0), (uVar3 & 1) != 0)) &&
         ((byte)uVar1 == param_3)) {
        uVar4 = 1;
        goto LAB_10402b9a0;
      }
      uVar2 = uVar2 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_10402b9a0:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 10402b8e8; end: 10402b9bf;  */

undefined1  [16] FUN_10402b8e8(ulong param_1,ulong param_2,char param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar5 = (ulong *)(lVar6 + param_4 * 0x18);
      uVar2 = *puVar5;
      uVar1 = puVar5[2];
      if (((uVar2 == param_1 && puVar5[1] == param_2) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar2,puVar5[1],param_1,param_2,0), (uVar2 & 1) != 0)) &&
         ((char)uVar1 == param_3)) {
        uVar3 = 1;
        goto LAB_10402b9a0;
      }
      param_4 = param_4 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar3 = 0;
LAB_10402b9a0:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Entry: 10402b9c0; end: 10402bb37;  */

undefined1 FUN_10402b9c0(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 6;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x00010402c120();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar2 = *(undefined1 *)(*(long *)(lVar3 + 0x38) + param_1);
    func_0x00010402cdbc(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10402bb38; end: 10402bc23;  */

undefined8 FUN_10402bb38(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  func_0x000100029284();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10402c288();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x20);
    func_0x00010402d11c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 10402bc24; end: 10402bcf3;  */

undefined8 FUN_10402bc24(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_10402b868(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10402c424();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x18 + 8));
    uVar2 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    func_0x00010402d2cc(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar2;
}



/* Entry: 10402bcf4; end: 10402be73;  */

void FUN_10402bcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  
  lVar11 = *unaff_x20;
  uVar4 = param_5;
  uVar6 = param_6;
  func_0x000100029284();
  lVar7 = *(long *)(lVar11 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10402bdf0);
    (*pcVar3)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar8) {
    func_0x00010402c834(lVar8,param_7 & 1);
    uVar4 = param_5;
    uVar9 = param_6;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10402bda4);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_10402c288();
    lVar8 = *unaff_x20;
    goto joined_r0x00010402be04;
  }
  lVar8 = *unaff_x20;
joined_r0x00010402be04:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
    uVar5 = *puVar1;
    uVar10 = puVar1[2];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar10);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10402be74);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 10402be74; end: 10402c287;  */

void FUN_10402be74(undefined1 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10402bf44);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_10402c5a0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10402bf14);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010402c120();
    lVar6 = *unaff_x20;
    goto joined_r0x00010402bf58;
  }
  lVar6 = *unaff_x20;
joined_r0x00010402bf58:
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar3) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(*(long *)(lVar6 + 0x38) + uVar3) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10402bfbc);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 10402c288; end: 10402c423;  */

void FUN_10402c288(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x0001000285a8(0x113049a20,&UNK_10dcc4d08);
  lVar15 = *unaff_x20;
  lVar9 = lVar15;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar15 + 0x10) != 0) {
    lVar1 = lVar15 + 0x40;
    uVar10 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar15 || lVar1 + uVar10 * 8 <= lVar9 + 0x40U) {
      _memmove(lVar9 + 0x40U,lVar1,uVar10 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
    uVar11 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(lVar15 + 0x40);
    if (uVar10 == 0) goto LAB_10402c368;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar17 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar14);
        uVar6 = puVar2[1];
        lVar13 = uVar12 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar13);
        uVar16 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar14);
        uVar5 = puVar3[2];
        uVar7 = puVar3[3];
        uVar19 = puVar3[2];
        uVar18 = puVar3[1];
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar13);
        *puVar2 = uVar16;
        puVar2[2] = uVar19;
        puVar2[1] = uVar18;
        puVar2[3] = uVar7;
        _swift_unknownObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        _swift_retain(uVar16);
        if (uVar10 != 0) break;
LAB_10402c368:
        do {
          lVar13 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10402c424);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_10402c3f8;
          uVar10 = *(ulong *)(lVar1 + lVar13 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar17 = lVar13;
      }
    } while( true );
  }
LAB_10402c3f8:
  _swift_release(lVar15);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 10402c424; end: 10402c59f;  */

void FUN_10402c424(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  func_0x0001000285a8(0x113049a10,&UNK_10dcc4cf8);
  lVar12 = *unaff_x20;
  lVar8 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar12 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      _memmove(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar12 + 0x40);
    if (uVar9 == 0) goto LAB_10402c500;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar6 = *(undefined1 *)(puVar3 + 2);
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 8) = uVar13;
        _swift_bridgeObjectRetain();
        _swift_retain(uVar13);
        if (uVar9 != 0) break;
LAB_10402c500:
        do {
          lVar2 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10402c5a0);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_10402c578;
          uVar9 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar2;
      }
    } while( true );
  }
LAB_10402c578:
  _swift_release(lVar12);
  *unaff_x20 = lVar8;
  return;
}


