/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104425354; end: 1044253f3; -[SCContextImage description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104425354(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130786b0);
  _objc_retain();
  _objc_retain(uVar1);
  func_0x000104426c2c(&uStack_88);
  _objc_release(param_1);
  FUN_104424548(uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,uStack_60,uStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044253f4; end: 10442546f; -[SCContextImage init] */

void FUN_1044253f4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextDataServices/SCContextImageWrapper.swift",0x31,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10442543c);
  (*pcVar1)();
}



/* Entry: 104425470; end: 10442547f; -[SCContextImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104425470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130786b0));
  return;
}



/* Entry: 104425480; end: 1044254ef;  */

undefined8 FUN_104425480(undefined8 param_1,undefined8 param_2)

{
  FUN_104424618(param_2,param_1);
  return param_2;
}



/* Entry: 1044254f0; end: 10442550f;  */

void FUN_1044254f0(void)

{
  _objc_opt_self(&PTR_PTR_1129b1bc0);
  return;
}



/* Entry: 104425510; end: 104425513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104425510(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  ppuVar8 = &puStack_c0;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar4 = (uint)((ulong)param_1[5] >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = uVar2;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      puStack_c0 = puVar6;
      puStack_b8 = param_1;
    }
    else if (uVar4 == 1) {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      ppuVar8 = &puStack_b0;
      puStack_b0 = puVar6;
      puStack_a8 = param_1;
    }
    else {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 2;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = uVar9;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      ppuVar8 = &puStack_a0;
      puStack_a0 = puVar6;
      puStack_98 = param_1;
    }
  }
  else {
    uVar10 = param_1[3];
    if (uVar4 == 3) {
      puVar6 = param_1;
      FUN_104427570();
      puVar7 = puVar6;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar7 + _DAT_1130786e8) = 3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078710);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078718);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar7 + _DAT_113078738) = 0;
      puVar5 = PTR_s_init_1125d9248;
      puStack_90 = puVar7;
      puStack_88 = puVar6;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar10);
      _objc_msgSendSuper2(&puStack_90,puVar5);
      FUN_104426e8c(param_1);
      return;
    }
    if (uVar4 == 4) {
      uVar11 = param_1[4];
      uVar12 = param_1[5] & 0xcfffffffffffffff;
      puVar6 = param_1;
      FUN_104427570();
      puVar7 = puVar6;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar7 + _DAT_1130786e8) = 4;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078720);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078728);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078730);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(undefined8 *)((long)puVar7 + _DAT_113078738) = 0;
      func_0x00010006c00c(uVar9,uVar10);
      func_0x00010006c00c(uVar11,uVar12);
      func_0x00010006c00c(uVar9,uVar10);
      func_0x00010006c00c(uVar11,uVar12);
      puVar5 = PTR_s_init_1125d9248;
      puStack_80 = puVar7;
      puStack_78 = puVar6;
      _swift_bridgeObjectRetain(uVar3);
      _objc_msgSendSuper2(&puStack_80,puVar5);
      FUN_104426e8c(param_1);
      func_0x00010006c090(uVar11,uVar12);
      func_0x00010006c090(uVar9,uVar10);
      return;
    }
    FUN_104427570();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 5;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    *(undefined8 *)((long)puVar6 + _DAT_113078738) = uVar2;
    ppuVar8 = &puStack_70;
    puStack_70 = puVar6;
    puStack_68 = param_1;
  }
  _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104425514; end: 104425813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104425514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130786e8));
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130786f0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130786f0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1130786f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130786f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113078700))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078700);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078708) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113078708);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113078710))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078710);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113078718))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078718);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113078720))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078720);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113078728))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078728);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113078730))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113078730);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113078738);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104425814; end: 104425d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104425814(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar3 = &lStack_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_1130786e8);
      if (bVar2 != *(byte *)(lStack_78 + _DAT_1130786e8)) goto LAB_104425b80;
      if (bVar2 < 3) {
        if (bVar2 == 0) {
          cVar1 = *(char *)((undefined8 *)(lStack_78 + _DAT_1130786f0) + 1);
          if (*(char *)((undefined8 *)(unaff_x20 + _DAT_1130786f0) + 1) == '\x01') {
            _objc_release();
            uVar13 = (uint)(cVar1 == '\x01');
            goto LAB_104425b88;
          }
          uVar14 = *(undefined8 *)(unaff_x20 + _DAT_1130786f0);
          uVar15 = *(undefined8 *)(lStack_78 + _DAT_1130786f0);
          _objc_release();
          if (cVar1 != '\x01') {
            uVar13 = (uint)((int)uVar14 == (int)uVar15);
            goto LAB_104425b88;
          }
          goto LAB_104425b84;
        }
        lVar8 = _DAT_1130786f8;
        if (bVar2 == 1) goto LAB_104425a60;
        uVar6 = ((ulong *)(unaff_x20 + _DAT_113078700))[1];
        uVar9 = ((ulong *)(lStack_78 + _DAT_113078700))[1];
        if (uVar6 == 0) {
          if (uVar9 == 0) goto LAB_104425b24;
        }
        else if ((uVar9 != 0) &&
                (((uVar10 = *(ulong *)(unaff_x20 + _DAT_113078700),
                  uVar10 == *(ulong *)(lStack_78 + _DAT_113078700) && (uVar6 == uVar9)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar10 & 1) != 0)))) {
LAB_104425b24:
          lVar7 = *(long *)(unaff_x20 + _DAT_113078708);
          lVar8 = ((long *)(unaff_x20 + _DAT_113078708))[1];
          lVar12 = *(long *)(lStack_78 + _DAT_113078708);
          cVar1 = (char)((long *)(lStack_78 + _DAT_113078708))[1];
          _objc_release();
          if ((char)lVar8 == '\x01') {
            uVar13 = (uint)(cVar1 == '\x01');
          }
          else {
            uVar13 = (uint)(cVar1 != '\x01' && lVar7 == lVar12);
          }
          goto LAB_104425b88;
        }
        goto LAB_104425b80;
      }
      if (bVar2 != 3) {
        if (bVar2 == 4) {
          uVar6 = ((ulong *)(unaff_x20 + _DAT_113078720))[1];
          uVar9 = ((ulong *)(lStack_78 + _DAT_113078720))[1];
          if (uVar6 == 0) {
            if (uVar9 == 0) goto LAB_104425ac4;
          }
          else if ((uVar9 != 0) &&
                  (((uVar10 = *(ulong *)(unaff_x20 + _DAT_113078720),
                    uVar10 == *(ulong *)(lStack_78 + _DAT_113078720) && (uVar6 == uVar9)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar10 & 1) != 0)))) {
LAB_104425ac4:
            uVar14 = *(undefined8 *)(lStack_78 + _DAT_113078728);
            uVar9 = ((undefined8 *)(lStack_78 + _DAT_113078728))[1];
            uVar6 = *(ulong *)(unaff_x20 + _DAT_113078728);
            uVar10 = ((ulong *)(unaff_x20 + _DAT_113078728))[1];
            if (uVar10 >> 0x3c < 0xf) {
              if (uVar9 >> 0x3c < 0xf) {
                func_0x000100de78a0(uVar14,uVar9);
                func_0x000100de78a0(uVar14,uVar9);
                func_0x000100de78a0(uVar6,uVar10);
                uVar4 = uVar6;
                func_0x000100e25fcc(uVar6,uVar10,uVar14,uVar9);
                func_0x0001000b44c0(uVar14,uVar9);
                func_0x0001000b44c0(uVar14,uVar9);
                func_0x0001000b44c0(uVar6,uVar10);
                if ((uVar4 & 1) != 0) goto LAB_104425c90;
                goto LAB_104425b80;
              }
            }
            else if (0xe < uVar9 >> 0x3c) {
              func_0x000100de78a0(uVar14,uVar9);
              func_0x000100de78a0(uVar6,uVar10);
              func_0x0001000b44c0(uVar6,uVar10);
LAB_104425c90:
              uVar14 = *(undefined8 *)(lStack_78 + _DAT_113078730);
              uVar6 = ((undefined8 *)(lStack_78 + _DAT_113078730))[1];
              uVar15 = *(undefined8 *)(unaff_x20 + _DAT_113078730);
              uVar9 = ((undefined8 *)(unaff_x20 + _DAT_113078730))[1];
              if (uVar9 >> 0x3c < 0xf) {
                func_0x000100de78a0(uVar14,uVar6);
                if (uVar6 >> 0x3c < 0xf) {
                  func_0x000100de78a0(uVar14,uVar6);
                  func_0x000100de78a0(uVar15,uVar9);
                  uVar5 = uVar15;
                  func_0x000100e25fcc(uVar15,uVar9,uVar14,uVar6);
                  uVar13 = (uint)uVar5;
                  func_0x0001000b44c0(uVar14,uVar6);
                  _objc_release(lStack_78);
                  func_0x0001000b44c0(uVar14,uVar6);
                  func_0x0001000b44c0(uVar15,uVar9);
                  goto LAB_104425b88;
                }
                func_0x000100de78a0(uVar15,uVar9);
                _objc_release(lStack_78);
              }
              else {
                func_0x000100de78a0(uVar14,uVar6);
                func_0x000100de78a0(uVar15,uVar9);
                _objc_release(lStack_78);
                if (0xe < uVar6 >> 0x3c) {
                  func_0x0001000b44c0(uVar15,uVar9);
                  uVar13 = 1;
                  goto LAB_104425b88;
                }
              }
              func_0x0001000b44c0(uVar15,uVar9);
              func_0x0001000b44c0(uVar14,uVar6);
              goto LAB_104425b84;
            }
            func_0x000100de78a0(uVar14,uVar9);
            func_0x000100de78a0(uVar6,uVar10);
            _objc_release(lStack_78);
            func_0x0001000b44c0(uVar6,uVar10);
            func_0x0001000b44c0(uVar14,uVar9);
            goto LAB_104425b84;
          }
          goto LAB_104425b80;
        }
        lVar8 = *(long *)(unaff_x20 + _DAT_113078738);
        if (lVar8 != 0) {
          func_0x00010c071ae0(lVar8);
          uVar13 = (uint)lVar8;
          _objc_release(lStack_78);
          goto LAB_104425b88;
        }
        lVar7 = *(long *)(lStack_78 + _DAT_113078738);
        lVar8 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_78);
        lStack_78 = lVar8;
        if (lVar7 != 0) goto LAB_104425b80;
LAB_104425ba8:
        uVar13 = 1;
        goto LAB_104425b88;
      }
      uVar6 = ((ulong *)(unaff_x20 + _DAT_113078710))[1];
      uVar9 = ((ulong *)(lStack_78 + _DAT_113078710))[1];
      lVar8 = _DAT_113078718;
      if (uVar6 == 0) {
        if (uVar9 == 0) goto LAB_104425a60;
      }
      else if ((uVar9 != 0) &&
              ((uVar10 = *(ulong *)(unaff_x20 + _DAT_113078710),
               uVar10 == *(ulong *)(lStack_78 + _DAT_113078710) && uVar6 == uVar9 ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), lVar8 = _DAT_113078718, (uVar10 & 1) != 0)))) {
LAB_104425a60:
        lVar7 = ((long *)(unaff_x20 + lVar8))[1];
        lVar12 = ((long *)(lStack_78 + lVar8))[1];
        if (lVar7 == 0) {
          _swift_bridgeObjectRetain(lVar12);
          _objc_release(lStack_78);
          if (lVar12 != 0) {
            _swift_bridgeObjectRelease(lVar12);
            goto LAB_104425b84;
          }
          goto LAB_104425ba8;
        }
        if (lVar12 != 0) {
          lVar11 = *(long *)(unaff_x20 + lVar8);
          lVar8 = *(long *)(lStack_78 + lVar8);
          if ((lVar11 == lVar8) && (lVar7 == lVar12)) {
            _objc_release();
            uVar13 = 1;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (lVar11,lVar7,lVar8,lVar12,0);
            uVar13 = (uint)lVar11;
            _objc_release(lStack_78);
          }
          goto LAB_104425b88;
        }
      }
LAB_104425b80:
      _objc_release(lStack_78);
    }
  }
LAB_104425b84:
  uVar13 = 0;
LAB_104425b88:
  return uVar13 & 1;
}



/* Entry: 104425d94; end: 104425e67;  */

void FUN_104425d94(void)

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



/* Entry: 104425e68; end: 104425e87;  */

void FUN_104425e68(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 104425e88; end: 104425ebf; -[SCContextImageContent description] */

void FUN_104425e88(void)

{
  undefined1 auStack_48 [56];
  
  _objc_retain();
  func_0x000104426c2c(auStack_48);
  FUN_104426e8c(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104425ec0; end: 104425f07; -[SCContextImageContent init] */

void FUN_104425ec0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCContextDataServices/SCContextImageContentWrapper.swift",0x38,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104425f08);
  (*pcVar1)();
}



/* Entry: 104425f08; end: 104425f3b; -[SCContextImageContent hash] */

undefined8 FUN_104425f08(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104425514();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104425f3c; end: 104425fbb; -[SCContextImageContent isEqual:] */

uint FUN_104425f3c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104425814(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104425fbc; end: 104425fc3; -[SCContextImageContent copyWithZone:] */

void FUN_104425fbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104425fc4; end: 104425fdb; +[SCContextImageContent localWithIcon:] */

void FUN_104425fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_104426ed0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104425fdc; end: 104426013; +[SCContextImageContent remoteWithContentURL:] */

void FUN_104425fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  FUN_104426fc8();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104426014; end: 104426053; +[SCContextImageContent boltWithId:contextType:] */

void FUN_104426014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x0001044270d8();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104426054; end: 1044260cb; +[SCContextImageContent bitmojiWithAvatarId:selfieId:] */

void FUN_104426054(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  FUN_1044271f0();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044260cc; end: 10442619f; +[SCContextImageContent encryptedMediaWithContentURL:encryptionKey:encryptionIV:] */

void FUN_1044260cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_4;
  uVar2 = param_2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_4);
  uVar3 = uVar2;
  _objc_release(uVar1);
  uVar1 = param_5;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_5);
  _objc_release(param_5);
  FUN_10442731c(param_3,param_2,param_4,uVar2,uVar1,uVar3);
  func_0x00010006c090(uVar1,uVar3);
  func_0x00010006c090(param_4,uVar2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044261a0; end: 10442637f; +[SCContextImageContent imageWithImage:] */

void FUN_1044261a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104427468();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104426380; end: 10442641b; -[SCContextImageContent matchLocal:remote:bolt:bitmoji:encryptedMedia:image:] */

void FUN_104426380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001044261d8(FUN_104427738,auStack_40,FUN_104427748,auStack_60,FUN_104427780,auStack_80,
                      FUN_1044277c8,auStack_a0,0x1044277d0,auStack_c0,0x1044277d8,auStack_e0);
  _objc_release(param_1);
  return;
}



/* Entry: 10442641c; end: 104426483;  */

void FUN_10442641c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104426484; end: 104426513;  */

void FUN_104426484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_5,param_6);
  (**(code **)(param_7 + 0x10))(param_7,param_1,param_3,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104426514; end: 104426547;  */

void FUN_104426514(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104426548; end: 1044265fb; -[SCContextImageContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104426548(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130786f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078700 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078710 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078718 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078720 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113078728),
                      ((undefined8 *)(param_1 + _DAT_113078728))[1]);
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113078730),
                      ((undefined8 *)(param_1 + _DAT_113078730))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113078738));
  return;
}



/* Entry: 1044265fc; end: 104426e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044265fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  ppuVar8 = &puStack_c0;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar4 = (uint)((ulong)param_1[5] >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = uVar2;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      puStack_c0 = puVar6;
      puStack_b8 = param_1;
    }
    else if (uVar4 == 1) {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      ppuVar8 = &puStack_b0;
      puStack_b0 = puVar6;
      puStack_a8 = param_1;
    }
    else {
      FUN_104427570();
      puVar6 = param_1;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 2;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
      *puVar1 = uVar9;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar6 + _DAT_113078738) = 0;
      ppuVar8 = &puStack_a0;
      puStack_a0 = puVar6;
      puStack_98 = param_1;
    }
  }
  else {
    uVar10 = param_1[3];
    if (uVar4 == 3) {
      puVar6 = param_1;
      FUN_104427570();
      puVar7 = puVar6;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar7 + _DAT_1130786e8) = 3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078710);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078718);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078720);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078728);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078730);
      puVar1[1] = 0xf000000000000000;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar7 + _DAT_113078738) = 0;
      puVar5 = PTR_s_init_1125d9248;
      puStack_90 = puVar7;
      puStack_88 = puVar6;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar10);
      _objc_msgSendSuper2(&puStack_90,puVar5);
      FUN_104426e8c(param_1);
      return;
    }
    if (uVar4 == 4) {
      uVar11 = param_1[4];
      uVar12 = param_1[5] & 0xcfffffffffffffff;
      puVar6 = param_1;
      FUN_104427570();
      puVar7 = puVar6;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar7 + _DAT_1130786e8) = 4;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f0);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_1130786f8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078700);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078708);
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078710);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078718);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078720);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078728);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)((long)puVar7 + _DAT_113078730);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(undefined8 *)((long)puVar7 + _DAT_113078738) = 0;
      func_0x00010006c00c(uVar9,uVar10);
      func_0x00010006c00c(uVar11,uVar12);
      func_0x00010006c00c(uVar9,uVar10);
      func_0x00010006c00c(uVar11,uVar12);
      puVar5 = PTR_s_init_1125d9248;
      puStack_80 = puVar7;
      puStack_78 = puVar6;
      _swift_bridgeObjectRetain(uVar3);
      _objc_msgSendSuper2(&puStack_80,puVar5);
      FUN_104426e8c(param_1);
      func_0x00010006c090(uVar11,uVar12);
      func_0x00010006c090(uVar9,uVar10);
      return;
    }
    FUN_104427570();
    puVar6 = param_1;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar6 + _DAT_1130786e8) = 5;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_1130786f8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078700);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078708);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078710);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078718);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078720);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078728);
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    puVar1 = (undefined8 *)((long)puVar6 + _DAT_113078730);
    puVar1[1] = 0xf000000000000000;
    *puVar1 = 0;
    *(undefined8 *)((long)puVar6 + _DAT_113078738) = uVar2;
    ppuVar8 = &puStack_70;
    puStack_70 = puVar6;
    puStack_68 = param_1;
  }
  _objc_msgSendSuper2(ppuVar8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104426e8c; end: 104426ebf;  */

undefined8 FUN_104426e8c(undefined8 param_1)

{
  FUN_104424b90();
  return param_1;
}



/* Entry: 104426ec0; end: 104426ecf;  */

ulong FUN_104426ec0(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 104426ed0; end: 104426fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104426ed0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104427570();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_1130786e8) = 0;
  plVar1 = (long *)(lVar4 + _DAT_1130786f0);
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_1130786f8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078700);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078708);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078710);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078718);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078720);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078728);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  puVar2 = (undefined8 *)(lVar4 + _DAT_113078730);
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  *(undefined8 *)(lVar4 + _DAT_113078738) = 0;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104426fc8; end: 1044271ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104426fc8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_104427570();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_1130786e8) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130786f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_1130786f8);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078700);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078708);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078710);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078718);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078720);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078728);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078730);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar5 + _DAT_113078738) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  return;
}



/* Entry: 1044271f0; end: 10442731b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044271f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  FUN_104427570();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar5 + _DAT_1130786e8) = 3;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130786f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1130786f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078700);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078708);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar2 = (long *)(lVar5 + _DAT_113078710);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078718);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078720);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078728);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113078730);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(undefined8 *)(lVar5 + _DAT_113078738) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar3);
  return;
}



/* Entry: 10442731c; end: 104427467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442731c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  FUN_104427570();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_1130786e8) = 4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130786f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130786f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078700);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078708);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078710);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078718);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar4 + _DAT_113078720);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078728);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078730);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar4 + _DAT_113078738) = 0;
  _swift_bridgeObjectRetain(param_2);
  func_0x00010006c00c(param_3,param_4);
  func_0x00010006c00c(param_5,param_6);
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104427468; end: 10442756f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104427468(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_104427570();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_1130786e8) = 5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130786f0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130786f8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078700);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078708);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078710);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078718);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078720);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078728);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_113078730);
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  *(long *)(lVar4 + _DAT_113078738) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 104427570; end: 10442758f;  */

void FUN_104427570(void)

{
  _objc_opt_self(&PTR_PTR_1129b1c90);
  return;
}



/* Entry: 104427590; end: 1044276f7;  */

int FUN_104427590(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10442760c;
        goto LAB_1044275f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044275f0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_10442760c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044276f8; end: 104427737;  */

void FUN_1044276f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcddc;
  _swift_getWitnessTable(&UNK_10dcfcddc,&UNK_11076d230);
  puRam0000000113078768 = puVar1;
  return;
}



/* Entry: 104427738; end: 104427747;  */

void FUN_104427738(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000104427744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 104427748; end: 10442777f;  */

void FUN_104427748(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104427780; end: 1044277c7;  */

void FUN_104427780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044277c8; end: 1044277db;  */

void FUN_1044277c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  uVar2 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar2 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1044277dc; end: 1044278df;  */

void FUN_1044277dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130787b0;
  func_0x0001000285a8(0x1130787b0,&UNK_10dcfce80);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1044278e0; end: 1044278e3;  */

void FUN_1044278e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfce90;
  _swift_getWitnessTable(&UNK_10dcfce90,&UNK_11076d398);
  puRam0000000113078800 = puVar1;
  return;
}



/* Entry: 1044278e4; end: 10442794f;  */

void FUN_1044278e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfce90;
  _swift_getWitnessTable(&UNK_10dcfce90,&UNK_11076d398);
  puRam0000000113078800 = puVar1;
  return;
}



/* Entry: 104427950; end: 104427953;  */

void FUN_104427950(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcf38;
  _swift_getWitnessTable(&UNK_10dcfcf38,&UNK_11076d428);
  puRam0000000113078818 = puVar1;
  return;
}



/* Entry: 104427954; end: 1044279bf;  */

void FUN_104427954(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcf38;
  _swift_getWitnessTable(&UNK_10dcfcf38,&UNK_11076d428);
  puRam0000000113078818 = puVar1;
  return;
}



/* Entry: 1044279c0; end: 104427a03;  */

void FUN_1044279c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104427a04; end: 104427a07;  */

void FUN_104427a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcfa8;
  _swift_getWitnessTable(&UNK_10dcfcfa8,&UNK_11076d428);
  puRam0000000113078830 = puVar1;
  return;
}



/* Entry: 104427a08; end: 104427a47;  */

void FUN_104427a08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcfa8;
  _swift_getWitnessTable(&UNK_10dcfcfa8,&UNK_11076d428);
  puRam0000000113078830 = puVar1;
  return;
}



/* Entry: 104427a48; end: 104427a4b;  */

void FUN_104427a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcf60;
  _swift_getWitnessTable(&UNK_10dcfcf60,&UNK_11076d428);
  puRam0000000113078838 = puVar1;
  return;
}



/* Entry: 104427a4c; end: 104427a8b;  */

void FUN_104427a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113078838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcfcf60;
  _swift_getWitnessTable(&UNK_10dcfcf60,&UNK_11076d428);
  puRam0000000113078838 = puVar1;
  return;
}



/* Entry: 104427a8c; end: 104427c33;  */

void FUN_104427a8c(void)

{
  return;
}



/* Entry: 104427c34; end: 104427c7f;  */

void FUN_104427c34(undefined8 param_1)

{
  func_0x0001000285a8(0x113078868,&UNK_10dcfd060);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_104427cec,param_1);
  return;
}



/* Entry: 104427c80; end: 104427ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104427c80(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104427f60();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113078870) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104427cec; end: 104427cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104427cec(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104427f60();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078870) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104427cf4; end: 104427d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104427cf4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113078870) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104427d40; end: 104427e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104427d40(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x113078798);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      _swift_release(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x000101443b04(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          func_0x000101443b04(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x14);
  return puVar5;
}



/* Entry: 104427e80; end: 104427edf; -[_TtC32SCDeepLinkHandlingProcedureScope41SCDeepLinkAuthProcessorPluginSaberService buildSaberPlugins] */

void FUN_104427e80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104427d40();
  _objc_release(param_1);
  uVar2 = 0x112d9f388;
  func_0x0001000285a8(0x112d9f388,&UNK_10d93faf0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104427ee0; end: 104427f3f; -[_TtC32SCDeepLinkHandlingProcedureScope41SCDeepLinkAuthProcessorPluginSaberService init] */

void FUN_104427ee0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDeepLinkHandlingProcedureScope.SCDeepLinkAuthProcessorPluginSaberService",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104427f0c);
  (*pcVar1)();
}



/* Entry: 104427f40; end: 104427f5f; -[_TtC32SCDeepLinkHandlingProcedureScope41SCDeepLinkAuthProcessorPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104427f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113078870));
  return;
}



/* Entry: 104427f60; end: 104427f7f;  */

void FUN_104427f60(void)

{
  _objc_opt_self(&PTR_PTR_1129b1da0);
  return;
}



/* Entry: 104427f80; end: 104428077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104427f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130788c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130788d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130788d8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  uVar3 = 0;
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  uStack_60 = uVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar4 = auStack_68;
  _objc_msgSendSuper2(puVar4,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar4;
}



/* Entry: 104428078; end: 10442813f; -[_TtC32SCDeepLinkHandlingProcedureScope45SCDeepLinkHandlingProcedureAuthenticatedScope initWithRequest:performer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130788c8,0);
  *(undefined8 *)(param_1 + _DAT_1130788d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130788d8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  uVar3 = 0;
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  uStack_60 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 104428140; end: 10442818f;  */

void FUN_104428140(void)

{
  func_0x000100350f54();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104428190; end: 1044281d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428190(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130788c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130788c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 1044281d4; end: 10442831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044281d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130788c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130788c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 104428320; end: 10442832f; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope request] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130788d0));
  return;
}



/* Entry: 104428330; end: 10442833f; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130788d8));
  return;
}



/* Entry: 104428340; end: 104428387; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428340(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130788c8;
  _swift_beginAccess(param_1 + _DAT_1130788c8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104428388; end: 1044283df; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104428388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130788c8;
  _swift_beginAccess(param_1 + _DAT_1130788c8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1044283e0; end: 1044284c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044283e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130788c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130788d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130788d8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar3 = auStack_68;
  _objc_msgSendSuper2(puVar3,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar3;
}



/* Entry: 1044284c4; end: 10442857b; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope initWithRequest:performer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044284c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130788c8,0);
  *(undefined8 *)(param_1 + _DAT_1130788d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130788d8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  _swift_unknownObjectWeakAssign(lVar2,param_5);
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 10442857c; end: 1044285d7; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope init] */

void FUN_10442857c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDeepLinkHandlingProcedureScope.SCDeepLinkHandlingProcedureScope",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044285a8);
  (*pcVar1)();
}



/* Entry: 1044285d8; end: 10442868f; -[_TtC32SCDeepLinkHandlingProcedureScope32SCDeepLinkHandlingProcedureScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044285d8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130788d0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130788d8));
  param_1 = param_1 + _DAT_1130788c8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 104428690; end: 104428793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104428690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  func_0x000100350f54();
  _objc_allocWithZone();
  lVar3 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(lVar2 + _DAT_1130788c8,0);
  *(undefined8 *)(lVar2 + _DAT_1130788d0) = param_1;
  *(undefined8 *)(lVar2 + _DAT_1130788d8) = param_2;
  _swift_beginAccess(lVar2 + lVar3,auStack_58,1,0);
  lVar3 = lVar2 + lVar3;
  _swift_unknownObjectWeakAssign(lVar3,param_3);
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar2;
  lStack_60 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar4 = &lStack_68;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_80[0] = plVar4;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar4;
}



/* Entry: 104428794; end: 10442882b; -[_TtC32SCDeepLinkHandlingProcedureScope53SCDeepLinkHandlingProcedureAuthenticatedScopeServices buildAuthenticatedWithRequest:performer:delegate:] */

void FUN_104428794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104428690(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10442882c; end: 10442888b; -[_TtC32SCDeepLinkHandlingProcedureScope53SCDeepLinkHandlingProcedureAuthenticatedScopeServices init] */

void FUN_10442882c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDeepLinkHandlingProcedureScope.SCDeepLinkHandlingProcedureAuthenticatedScopeServices"
             ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104428858);
  (*pcVar1)();
}



/* Entry: 10442888c; end: 1044288ab; -[_TtC32SCDeepLinkHandlingProcedureScope53SCDeepLinkHandlingProcedureAuthenticatedScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442888c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130788e8));
  return;
}



/* Entry: 1044288ac; end: 1044289a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044288ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130788c8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130788d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130788d8) = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_3);
  uVar3 = 0;
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  uStack_60 = uVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  puVar4 = auStack_68;
  _objc_msgSendSuper2(puVar4,puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  _swift_unknownObjectRelease(param_3);
  return puVar4;
}



/* Entry: 1044289a4; end: 104428a6b; -[_TtC32SCDeepLinkHandlingProcedureScope47SCDeepLinkHandlingProcedureUnauthenticatedScope initWithRequest:performer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044289a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_1130788c8;
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130788c8,0);
  *(undefined8 *)(param_1 + _DAT_1130788d0) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130788d8) = param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  uVar3 = 0;
  func_0x000104428170();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  uStack_60 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_68,puVar1);
  return;
}



/* Entry: 104428a6c; end: 104428abb;  */

void FUN_104428a6c(void)

{
  func_0x000104428a9c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104428abc; end: 104429563;  */

long * FUN_104428abc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar10 = *(long *)(lVar5 + -8);
    plVar6 = param_2;
    (**(code **)(lVar10 + 0x30))(param_2,1,lVar5);
    if ((int)plVar4 == 1) {
      if ((int)plVar6 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar5);
        (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
      }
      else {
        lVar5 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      lVar5 = 0x113078968;
      func_0x0001000285a8(0x113078968,&UNK_10dcfd228);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x40));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) = uVar9;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x50)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x50));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x60));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x70));
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar9);
      uVar7 = 1;
    }
    else {
      if ((int)plVar6 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar5);
        (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
      }
      else {
        lVar5 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
      }
      uVar7 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104429564; end: 10442960f;  */

void FUN_104429564(void)

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



/* Entry: 104429610; end: 10442964f;  */

void FUN_104429610(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104429650; end: 1044296c7; -[SCDeepLinkHandlingRequest description] */

void FUN_104429650(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000104429114();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1044296c8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001044290d8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044296c8; end: 104429a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044296c8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  byte abStack_b0 [8];
  undefined8 auStack_a8 [4];
  byte *pbStack_88;
  uint uStack_7c;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar11 = abStack_b0 + -extraout_x8;
  lVar9 = 0x113078a58;
  func_0x0001000285a8(0x113078a58,&UNK_10dcfd290);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar12 = (long)pbVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar12 - extraout_x12;
  lVar10 = 0;
  func_0x000104429114();
  lVar14 = *(long *)(lVar10 + -8);
  pcVar15 = *(code **)(lVar14 + 0x38);
  (*pcVar15)(lVar13,1,1,lVar10);
  lVar9 = _DAT_113078a20;
  if (*(char *)(param_2 + _DAT_113078a18) == '\x01') {
    func_0x000104429e40(param_2 + _DAT_113078a28,pbVar11,0x112d36580,&UNK_10d9016d0);
    uStack_7c = (uint)*(byte *)(param_2 + _DAT_113078a40);
    if (uStack_7c == 2) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x104429a10);
      (*pcVar15)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_113078a48) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x104429a14);
      (*pcVar15)();
    }
    pbStack_88 = pbVar11;
    pcStack_78 = pcVar15;
    lStack_70 = lVar14;
    uStack_68 = param_1;
    if (*(char *)((undefined8 *)(param_2 + _DAT_113078a50) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x104429a18);
      (*pcVar15)();
    }
    auStack_a8[2] = *(undefined8 *)(param_2 + _DAT_113078a30);
    uVar2 = ((undefined8 *)(param_2 + _DAT_113078a30))[1];
    auStack_a8[0] = *(undefined8 *)(param_2 + _DAT_113078a38);
    auStack_a8[3] = *(undefined8 *)(param_2 + _DAT_113078a48);
    auStack_a8[1] = *(undefined8 *)(param_2 + _DAT_113078a50);
    func_0x000104429e00(lVar13,0x113078a58,&UNK_10dcfd290);
    lVar9 = 0x113078968;
    func_0x0001000285a8(0x113078968,&UNK_10dcfd228);
    puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar9 + 0x30));
    iVar3 = *(int *)(lVar9 + 0x40);
    iVar4 = *(int *)(lVar9 + 0x50);
    iVar5 = *(int *)(lVar9 + 0x60);
    iVar6 = *(int *)(lVar9 + 0x70);
    func_0x0001001021cc(pbStack_88,lVar13);
    *puVar1 = auStack_a8[2];
    puVar1[1] = uVar2;
    uVar8 = auStack_a8[0];
    bVar7 = (byte)uStack_7c;
    *(undefined8 *)(lVar13 + iVar3) = auStack_a8[0];
    *(byte *)(lVar13 + iVar4) = bVar7 & 1;
    *(undefined8 *)(lVar13 + iVar5) = auStack_a8[3];
    *(undefined8 *)(lVar13 + iVar6) = auStack_a8[1];
    _swift_storeEnumTagMultiPayload(lVar13,lVar10,1);
    (*pcStack_78)(lVar13,0,1,lVar10);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar2);
    param_1 = uStack_68;
    lVar14 = lStack_70;
  }
  else {
    func_0x000104429e00(lVar13,0x113078a58,&UNK_10dcfd290);
    func_0x000104429e40(param_2 + lVar9,lVar13,0x112d36580,&UNK_10d9016d0);
    _swift_storeEnumTagMultiPayload(lVar13,lVar10,0);
    (*pcVar15)(lVar13,0,1,lVar10);
  }
  func_0x000104429e40(lVar13,lVar12,0x113078a58,&UNK_10dcfd290);
  lVar9 = lVar12;
  (**(code **)(lVar14 + 0x30))(lVar12,1,lVar10);
  if ((int)lVar9 != 1) {
    _objc_release(param_2);
    func_0x000104429e88(lVar12,param_1);
    func_0x000104429e00(lVar13,0x113078a58,&UNK_10dcfd290);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x104429a0c);
  (*pcVar15)();
}



/* Entry: 104429a18; end: 104429a5f; -[SCDeepLinkHandlingRequest init] */

void FUN_104429a18(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDeepLinkHandlingProcedureScope/SCDeepLinkHandlingRequestWrapper.swift",0x47,2,0x65,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104429a60);
  (*pcVar1)();
}



/* Entry: 104429a60; end: 104429a63; -[SCDeepLinkHandlingRequest copyWithZone:] */

void FUN_104429a60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104429a64; end: 104429b2f; +[SCDeepLinkHandlingRequest validateInternalDeepLinkURLWithUrl:] */

void FUN_104429a64(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffe0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  puVar2 = puVar3;
  FUN_10442a244(puVar3);
  FUN_104429e00(puVar3,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104429b30; end: 104429c9b; +[SCDeepLinkHandlingRequest handleOpenURLWithUrl:sourceApplication:additionalInfo:fromExternal:source:handlingId:] */

void FUN_104429b30(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  uVar3 = (ulong)(param_3 == 0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,uVar3,1);
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  if (param_5 != 0) {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  puVar2 = puVar4;
  FUN_10442a3c4(puVar4,param_4,uVar3,param_5,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(uVar3);
  FUN_104429e00(puVar4,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104429c9c; end: 104429dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104429c9c(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (*(char *)(unaff_x20 + _DAT_113078a18) == '\x01') {
    func_0x000104429e40(unaff_x20 + _DAT_113078a28,puVar3,0x112d36580,&UNK_10d9016d0);
    if (*(byte *)(unaff_x20 + _DAT_113078a40) == 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104429df8);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078a48) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104429dfc);
      (*pcVar1)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_113078a50) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104429e00);
      (*pcVar1)();
    }
    (*param_3)(puVar3,*(undefined8 *)(unaff_x20 + _DAT_113078a30),
               ((undefined8 *)(unaff_x20 + _DAT_113078a30))[1],
               *(undefined8 *)(unaff_x20 + _DAT_113078a38),*(byte *)(unaff_x20 + _DAT_113078a40) & 1
               ,*(undefined8 *)(unaff_x20 + _DAT_113078a48),
               *(undefined8 *)(unaff_x20 + _DAT_113078a50));
    func_0x000104429e00(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (*param_1)(unaff_x20 + _DAT_113078a20);
  }
  return;
}



/* Entry: 104429e00; end: 104429ecb;  */

undefined8 FUN_104429e00(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104429ecc; end: 104429f1f; -[SCDeepLinkHandlingRequest matchValidateInternalDeepLinkURL:handleOpenURL:] */

void FUN_104429ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104429c9c(FUN_10442a804,auStack_40,0x10442a80c,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 104429f20; end: 10442a00b;  */

void FUN_104429f20(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000104429e40(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_2 + 0x10))(param_2,puVar4);
  _objc_release(puVar4);
  return;
}



/* Entry: 10442a00c; end: 10442a18b;  */

void FUN_10442a00c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  uStack_68 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  func_0x000104429e40(param_1,puVar6,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = puVar6;
  (**(code **)(lVar3 + 0x30))(puVar6,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar3 + 8))(puVar6,lVar1);
    puVar4 = puVar2;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    uVar5 = param_2;
  }
  if (param_4 != 0) {
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  (**(code **)(param_8 + 0x10))(param_8,puVar4,uVar5,param_4,param_5 & 1,param_6,uStack_68);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 10442a18c; end: 10442a1bf;  */

void FUN_10442a18c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10442a1c0; end: 10442a243; -[SCDeepLinkHandlingRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10442a1c0(long param_1)

{
  FUN_104429e00(param_1 + _DAT_113078a20,0x112d36580,&UNK_10d9016d0);
  FUN_104429e00(param_1 + _DAT_113078a28,0x112d36580,&UNK_10d9016d0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113078a30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113078a38));
  return;
}



/* Entry: 10442a244; end: 10442a3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10442a244(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_10442a580();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113078a18) = 0;
  func_0x000104429e40(param_1,lVar2 + _DAT_113078a20,0x112d36580,&UNK_10d9016d0);
  func_0x000104429e40(lVar5,lVar2 + _DAT_113078a28,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_113078a30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113078a38) = 0;
  *(undefined1 *)(lVar2 + _DAT_113078a40) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113078a48);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113078a50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000104429e00(lVar5,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 10442a3c4; end: 10442a577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10442a3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 auStack_90 [12];
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  uStack_84 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_10442a580();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113078a18) = 1;
  func_0x000104429e40(puVar6,lVar3 + _DAT_113078a20,0x112d36580,&UNK_10d9016d0);
  func_0x000104429e40(param_1,lVar3 + _DAT_113078a28,0x112d36580,&UNK_10d9016d0);
  puVar1 = (undefined8 *)(lVar3 + _DAT_113078a30);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar3 + _DAT_113078a38) = param_4;
  *(char *)(lVar3 + _DAT_113078a40) = (char)uStack_84;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113078a48);
  *puVar1 = uStack_80;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113078a50);
  *puVar1 = uStack_78;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x000104429e00(puVar6,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 10442a578; end: 10442a57f;  */

void FUN_10442a578(void)

{
  if (lRam0000000113078a88 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e805bf8);
  return;
}


