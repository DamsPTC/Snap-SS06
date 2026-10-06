/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1041dfc14; end: 1041dfcbf;  */

void FUN_1041dfc14(void)

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



/* Entry: 1041dfcc0; end: 1041dfccf;  */

undefined1  [16] FUN_1041dfcc0(void)

{
  return ZEXT816(0x1107500e0);
}



/* Entry: 1041dfcd0; end: 1041dfd5b;  */

code * FUN_1041dfcd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x1130685c0,&UNK_10dce0e58);
  func_0x00010c0efc00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  _objc_release(unaff_x20);
  uVar2 = 0;
  FUN_1041cdd44(0);
  pcVar3 = FUN_1041dfd5c;
  func_0x0001000bfde0(FUN_1041dfd5c,0,uVar2);
  _swift_release(uVar1);
  return pcVar3;
}



/* Entry: 1041dfd5c; end: 1041dfd83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041dfd5c(undefined8 *param_1,long *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *param_2;
  _objc_retain();
  uVar7 = *(undefined8 *)(lVar6 + _DAT_113068798);
  _objc_retain();
  FUN_1041e2254();
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 1) = param_3;
  lVar10 = *(long *)(lVar6 + _DAT_1130687a0);
  lVar8 = 0;
  FUN_1041cdd44();
  lVar1 = (long)param_1 + (long)*(int *)(lVar8 + 0x14);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113068838);
  _objc_retain();
  _objc_retain(uVar7);
  func_0x0001047b6fb0(lVar1);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113068840);
  lVar9 = 0;
  func_0x000100b91cc8();
  *(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x14)) = uVar7;
  *(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x18)) = *(undefined8 *)(lVar10 + _DAT_113068848);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113068850);
  iVar5 = *(int *)(lVar9 + 0x1c);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar7);
  func_0x0001041ed0c4(lVar1 + iVar5);
  *(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x20)) = *(undefined8 *)(lVar10 + _DAT_113068858);
  uVar7 = *(undefined8 *)(lVar10 + _DAT_113068860);
  uVar3 = ((undefined8 *)(lVar10 + _DAT_113068860))[1];
  _swift_bridgeObjectRetain(uVar3);
  _objc_release(lVar10);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar9 + 0x24));
  *puVar2 = uVar7;
  puVar2[1] = uVar3;
  uVar4 = *(undefined1 *)(lVar6 + _DAT_1130687a8);
  _objc_release(lVar6);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18)) = uVar4;
  return;
}



/* Entry: 1041dfd84; end: 1041dfd97;  */

bool FUN_1041dfd84(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1041dfd98; end: 1041dff07;  */

void FUN_1041dfd98(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar3 = 0x736961725f6e6f6e;
  if (cVar2 != '\x01') {
    uVar3 = 0xd000000000000010;
  }
  uVar1 = 0xea00000000006465;
  if (cVar2 != '\x01') {
    uVar1 = 0x800000010f1ef0b0;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041dff08; end: 1041dff7f;  */

void FUN_1041dff08(undefined1 *param_1,long param_2)

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



/* Entry: 1041dff80; end: 1041dffc7;  */

void FUN_1041dff80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0x736961725f6e6f6e;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000010;
  }
  uVar1 = 0xea00000000006465;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x800000010f1ef0b0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1041dffc8; end: 1041e004f;  */

void FUN_1041dffc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113068620;
  func_0x0001000285a8(0x113068620,&UNK_10dce0e68);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1041e0050; end: 1041e00eb;  */

undefined1  [16] FUN_1041e0050(long param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  _swift_beginAccess(unaff_x20 + 0x18,puVar2,0x20,0);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar5 = 0;
    uVar3 = 1;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    FUN_1041e0630();
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
    }
    uVar3 = (ulong)bVar1;
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_endAccess(auStack_48);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1041e00ec; end: 1041e0287;  */

void FUN_1041e00ec(undefined8 param_1,char param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = &uStack_58;
  _swift_beginAccess(unaff_x20 + 0x18,puVar2,0x21,0);
  if (param_2 == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    FUN_1041e0630(param_3);
    _swift_bridgeObjectRelease(uVar5);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = *(ulong *)(unaff_x20 + 0x18);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      if ((uVar1 & 1) == 0) {
        FUN_1041e07ec();
      }
      FUN_1041e0bf8(param_3,uVar5);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
    }
    _swift_endAccess(&uStack_58);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    FUN_1041e06d0(param_1,param_3,uVar5);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
    _swift_endAccess(&uStack_58);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = 0x736961725f6e6f6e;
    uVar3 = 0xea00000000006465;
    if (((uint)param_3 & 0xff) != 1) {
      uVar5 = 0xd000000000000010;
      uVar3 = 0x800000010f1ef0b0;
    }
    uStack_58 = 0xd000000000000030;
    uStack_50 = 0x800000010f1ef0d0;
    __sSS6appendyySSF(uVar5,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    uVar5 = uStack_50;
    uVar3 = uStack_58;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_58,uStack_50);
    _swift_bridgeObjectRelease(uVar5);
    func_0x00010c191020(param_1,uVar4);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 1041e0288; end: 1041e02b3;  */

void FUN_1041e0288(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1041e02b4; end: 1041e02e7; -[_TtC17SKOverlayServices17SKOverlayServices preloader] */

void FUN_1041e02b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041e02e8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e02e8; end: 1041e035b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1041e02e8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113068630;
  lVar2 = *(long *)(unaff_x20 + _DAT_113068630);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113068628));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 1041e035c; end: 1041e038f; -[_TtC17SKOverlayServices17SKOverlayServices setPreloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e035c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068630);
  *(undefined8 *)(param_1 + _DAT_113068630) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1041e0390; end: 1041e04c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041e0390(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar5 = auStack_60;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068630) = 0;
  lVar1 = _DAT_113068638;
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_opt_self();
  func_0x000107c5ba34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010040a830();
  _swift_allocObject();
  puVar3 = puVar2;
  func_0x00010040a934();
  _objc_release(puVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  puVar2 = &UNK_110750158;
  _swift_allocObject(&UNK_110750158,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x0001000285a8(0x113068640,&UNK_10dce0e70);
  _swift_allocObject();
  _swift_retain(param_2);
  pcVar4 = FUN_1041e0dd8;
  func_0x0001000bdd8c(FUN_1041e0dd8,puVar2);
  *(code **)(unaff_x20 + _DAT_113068628) = pcVar4;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  _swift_release(param_2);
  return puVar5;
}



/* Entry: 1041e04c8; end: 1041e0527; -[_TtC17SKOverlayServices17SKOverlayServices init] */

void FUN_1041e04c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SKOverlayServices.SKOverlayServices",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e04f4);
  (*pcVar1)();
}



/* Entry: 1041e0528; end: 1041e05bb; -[_TtC17SKOverlayServices17SKOverlayServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e0528(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113068628));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068630));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113068638));
  return;
}



/* Entry: 1041e05bc; end: 1041e062f;  */

void FUN_1041e05bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1041e0630; end: 1041e06cf;  */

void FUN_1041e0630(char param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar3 = 0x736961725f6e6f6e;
  if (param_1 != '\x01') {
    uVar3 = 0xd000000000000010;
  }
  uVar1 = 0xea00000000006465;
  if (param_1 != '\x01') {
    uVar1 = 0x800000010f1ef0b0;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar3,uVar1);
  _swift_bridgeObjectRelease();
  __ss6HasherV9_finalizeSiyF();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(char *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
        return;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
    return;
  }
  return;
}



/* Entry: 1041e06d0; end: 1041e07eb;  */

void FUN_1041e06d0(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_3;
  FUN_1041e0630();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e077c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    uVar3 = (uint)param_3 & 1;
    FUN_1041e0938(lVar6);
    uVar2 = param_2;
    FUN_1041e0630();
    if (((uint)uVar4 & 1) != (uVar3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_1107501f0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e0760);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1041e07ec();
    lVar6 = *unaff_x20;
    goto joined_r0x0001041e0790;
  }
  lVar6 = *unaff_x20;
joined_r0x0001041e0790:
  if ((uVar4 & 1) == 0) {
    lVar5 = lVar6 + (uVar2 >> 6) * 8;
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
    *(char *)(*(long *)(lVar6 + 0x30) + uVar2) = (char)param_2;
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e07ec);
      (*pcVar1)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 8) = param_1;
  }
  return;
}



/* Entry: 1041e07ec; end: 1041e0937;  */

void FUN_1041e07ec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  func_0x0001000285a8(0x113068508,&UNK_10dce0ca8);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      _memmove(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_1041e08c4;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar10;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_1041e08c4:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1041e0938);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1041e0918;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_1041e0918:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1041e0938; end: 1041e0bf7;  */

void FUN_1041e0938(long param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uStack_c0;
  undefined1 auStack_b8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar10 = 0x113068508;
  func_0x0001000285a8(0x113068508,&UNK_10dce0ca8);
  lVar5 = lVar13;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar13,lVar1,param_2,uVar10);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1041e0bc0:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  uStack_c0 = 0x800000010f1ef0b0;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1041e0bf4);
          (*pcVar4)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar15 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_1041e0bc0;
        }
        uVar14 = puVar15[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar16 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar16 << 6;
    cVar2 = *(char *)(*(long *)(lVar13 + 0x30) + uVar6);
    uVar17 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_b8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = 0x736961725f6e6f6e;
    if (cVar2 != '\x01') {
      uVar10 = 0xd000000000000010;
    }
    uVar6 = 0xea00000000006465;
    if (cVar2 != '\x01') {
      uVar6 = uStack_c0;
    }
    __sSS4hash4intoys6HasherVz_tF(auStack_b8,uVar10,uVar6);
    _swift_bridgeObjectRelease();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar6 >> 6;
    uVar12 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar12 = uVar8 + 1;
        if ((uVar12 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1041e0bf8);
          (*pcVar4)();
        }
        uVar8 = 0;
        if (uVar12 != uVar6) {
          uVar8 = uVar12;
        }
        bVar3 = (bool)(uVar12 == uVar6 | bVar3);
        uVar12 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    *(char *)(*(long *)(lVar5 + 0x30) + uVar6) = cVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar17;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 1041e0bf8; end: 1041e0dd7;  */

void FUN_1041e0bf8(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1 + 1 & (uVar9 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar9 = ~uVar9;
    uVar12 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar9);
    uVar12 = uVar12 + 1 & uVar9;
    do {
      cVar7 = *(char *)(*(long *)(param_2 + 0x30) + uVar11);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      uVar10 = 0xea00000000006465;
      uVar6 = 0x736961725f6e6f6e;
      if (cVar7 != '\x01') {
        uVar6 = 0xd000000000000010;
        uVar10 = 0x800000010f1ef0b0;
      }
      __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar6,uVar10);
      _swift_bridgeObjectRelease();
      __ss6HasherV9_finalizeSiyF();
      uVar10 = uVar10 & uVar9;
      if ((long)param_1 < (long)uVar12) {
        if (uVar10 < uVar12) {
LAB_1041e0d14:
          if ((long)param_1 < (long)uVar10) goto LAB_1041e0c9c;
        }
        puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) + param_1);
        puVar3 = (undefined1 *)(*(long *)(param_2 + 0x30) + uVar11);
        if ((((long)param_1 < (long)uVar11) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar11)) {
          *puVar2 = *puVar3;
        }
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar5 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 8);
        if ((((long)param_1 < (long)uVar11) || (puVar5 + 1 <= puVar4)) || (param_1 != uVar11)) {
          *puVar4 = *puVar5;
          param_1 = uVar11;
        }
      }
      else if (uVar12 <= uVar10) goto LAB_1041e0d14;
LAB_1041e0c9c:
      uVar11 = uVar11 + 1 & uVar9;
    } while ((*(ulong *)(lVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar9 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1041e0dd8);
  (*pcVar8)();
}



/* Entry: 1041e0dd8; end: 1041e0dff;  */

void FUN_1041e0dd8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1041e0e00; end: 1041e0e03;  */

void FUN_1041e0e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce0e80;
  _swift_getWitnessTable(&UNK_10dce0e80,&UNK_1107501f0);
  puRam0000000113068650 = puVar1;
  return;
}



/* Entry: 1041e0e04; end: 1041e0e43;  */

void FUN_1041e0e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce0e80;
  _swift_getWitnessTable(&UNK_10dce0e80,&UNK_1107501f0);
  puRam0000000113068650 = puVar1;
  return;
}



/* Entry: 1041e0e44; end: 1041e0e47;  */

void FUN_1041e0e44(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068658 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113068660;
  func_0x00010002969c(0x113068660,&UNK_10dce0f20);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113068658 = puVar2;
  return;
}



/* Entry: 1041e0e48; end: 1041e0e97;  */

void FUN_1041e0e48(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113068658 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113068660;
  func_0x00010002969c(0x113068660,&UNK_10dce0f20);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113068658 = puVar2;
  return;
}



/* Entry: 1041e0e98; end: 1041e0ffb;  */

int FUN_1041e0e98(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041e0f14;
        goto LAB_1041e0ef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041e0ef8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1041e0f14:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041e0ffc; end: 1041e101b;  */

void FUN_1041e0ffc(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1041e101c; end: 1041e101f;  */

void FUN_1041e101c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1041e1020; end: 1041e1187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1020(undefined8 *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_113068798);
  _objc_retain();
  FUN_1041e2254();
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = param_3;
  lVar9 = *(long *)(param_2 + _DAT_1130687a0);
  lVar7 = 0;
  FUN_1041cdd44();
  lVar1 = (long)param_1 + (long)*(int *)(lVar7 + 0x14);
  uVar6 = *(undefined8 *)(lVar9 + _DAT_113068838);
  _objc_retain();
  _objc_retain(uVar6);
  func_0x0001047b6fb0(lVar1);
  uVar6 = *(undefined8 *)(lVar9 + _DAT_113068840);
  lVar8 = 0;
  func_0x000100b91cc8();
  *(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x14)) = uVar6;
  *(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x18)) = *(undefined8 *)(lVar9 + _DAT_113068848);
  uVar6 = *(undefined8 *)(lVar9 + _DAT_113068850);
  iVar5 = *(int *)(lVar8 + 0x1c);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar6);
  func_0x0001041ed0c4(lVar1 + iVar5);
  *(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x20)) = *(undefined8 *)(lVar9 + _DAT_113068858);
  uVar6 = *(undefined8 *)(lVar9 + _DAT_113068860);
  uVar3 = ((undefined8 *)(lVar9 + _DAT_113068860))[1];
  _swift_bridgeObjectRetain(uVar3);
  _objc_release(lVar9);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar8 + 0x24));
  *puVar2 = uVar6;
  puVar2[1] = uVar3;
  uVar4 = *(undefined1 *)(param_2 + _DAT_1130687a8);
  _objc_release(param_2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) = uVar4;
  return;
}



/* Entry: 1041e1188; end: 1041e1197; -[SCSKOverlayEvent lifecycleEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068798));
  return;
}



/* Entry: 1041e1198; end: 1041e11a7; -[SCSKOverlayEvent overlayParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130687a0));
  return;
}



/* Entry: 1041e11a8; end: 1041e11b7; -[SCSKOverlayEvent isPreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1041e11a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130687a8);
}



/* Entry: 1041e11b8; end: 1041e122b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e11b8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068798) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130687a0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_1130687a8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041e122c; end: 1041e12b3; -[SCSKOverlayEvent initWithLifecycleEvent:overlayParams:isPreload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e122c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113068798) = param_3;
  *(undefined8 *)(param_1 + _DAT_1130687a0) = param_4;
  *(undefined1 *)(param_1 + _DAT_1130687a8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1041e12b4; end: 1041e13d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1041e12b4(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  
  lVar2 = 0;
  func_0x000100b91cc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_1041cdd04(uVar4,uVar1);
  FUN_1041e23bc(uVar4,uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_113068798) = uVar4;
  lVar2 = 0;
  FUN_1041cdd44();
  FUN_1041cdd7c((long)param_1 + (long)*(int *)(lVar2 + 0x14),puVar3);
  uVar4 = 0;
  FUN_1041e36e8(0);
  _objc_allocWithZone();
  func_0x0001041e31b8(puVar3,uVar4);
  *(undefined1 **)(unaff_x20 + _DAT_1130687a0) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_1130687a8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18));
  puVar3 = auStack_50;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  func_0x0001041e18b0(param_1);
  return puVar3;
}



/* Entry: 1041e13d4; end: 1041e147f; -[SCSKOverlayEvent hash] */

undefined8 FUN_1041e13d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001041e1408();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041e1480; end: 1041e15b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041e1480(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_113068798);
      uVar5 = 0;
      FUN_1041e28b0();
      auStack_60[0] = uVar9;
      lStack_48 = uVar5;
      _objc_retain(uVar9);
      uVar6 = 0;
      func_0x0001041e1a88();
      func_0x00010006e7f4(auStack_60);
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_1130687a0);
      uVar5 = 0;
      FUN_1041e36e8();
      auStack_60[0] = uVar9;
      lStack_48 = uVar5;
      _objc_retain(uVar9);
      puVar7 = auStack_60;
      FUN_1041e2c04(puVar7);
      func_0x00010006e7f4(auStack_60);
      bVar1 = *(byte *)(unaff_x20 + _DAT_1130687a8);
      bVar2 = *(byte *)(lStack_68 + _DAT_1130687a8);
      _objc_release(lStack_68);
      if ((uVar6 & 1) != 0) {
        uVar8 = (uint)puVar7 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_1041e1598;
      }
    }
  }
  uVar8 = 0;
LAB_1041e1598:
  return uVar8 & 1;
}



/* Entry: 1041e15b4; end: 1041e1633; -[SCSKOverlayEvent isEqual:] */

uint FUN_1041e15b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041e1480(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041e1634; end: 1041e1637; -[SCSKOverlayEvent copyWithZone:] */

void FUN_1041e1634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041e1638; end: 1041e167f; -[SCSKOverlayEvent description] */

void FUN_1041e1638(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1041e1680();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1680; end: 1041e17fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041e1680(undefined8 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar4 = 0;
  FUN_1041cdd44();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar6);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113068798);
  _objc_retain();
  FUN_1041e2254();
  *puVar7 = uVar5;
  (&stack0xffffffffffffffb8)[lVar6] = param_2;
  lVar8 = *(long *)(unaff_x20 + _DAT_1130687a0);
  puVar1 = (undefined1 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x14));
  _objc_retain(*(undefined8 *)(lVar8 + _DAT_113068838));
  func_0x0001047b6fb0(puVar1);
  uVar5 = *(undefined8 *)(lVar8 + _DAT_113068840);
  lVar6 = 0;
  func_0x000100b91cc8();
  *(undefined8 *)(puVar1 + *(int *)(lVar6 + 0x14)) = uVar5;
  *(undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18)) = *(undefined8 *)(lVar8 + _DAT_113068848);
  uVar5 = *(undefined8 *)(lVar8 + _DAT_113068850);
  iVar3 = *(int *)(lVar6 + 0x1c);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar5);
  func_0x0001041ed0c4(puVar1 + iVar3);
  *(undefined8 *)(puVar1 + *(int *)(lVar6 + 0x20)) = *(undefined8 *)(lVar8 + _DAT_113068858);
  puVar2 = (undefined8 *)(lVar8 + _DAT_113068860);
  iVar3 = *(int *)(lVar6 + 0x24);
  uVar5 = puVar2[1];
  uVar9 = *puVar2;
  *(undefined8 *)((long)(puVar1 + iVar3) + 8) = puVar2[1];
  *(undefined8 *)(puVar1 + iVar3) = uVar9;
  *(undefined1 *)((long)puVar7 + (long)*(int *)(lVar4 + 0x18)) =
       *(undefined1 *)(unaff_x20 + _DAT_1130687a8);
  _swift_bridgeObjectRetain(uVar5);
  func_0x0001041e18b0(puVar7);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1041e17fc; end: 1041e1877; -[SCSKOverlayEvent init] */

void FUN_1041e17fc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SKOverlayServices/SKOverlayEventWrapper.swift",0x2d,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e1844);
  (*pcVar1)();
}



/* Entry: 1041e1878; end: 1041e18eb; -[SCSKOverlayEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1878(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068798));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130687a0));
  return;
}



/* Entry: 1041e18ec; end: 1041e190b;  */

void FUN_1041e18ec(void)

{
  _objc_opt_self(&PTR_PTR_11298f9e0);
  return;
}



/* Entry: 1041e190c; end: 1041e1c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e190c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130687d8));
  lVar1 = *(long *)(unaff_x20 + _DAT_1130687e0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130687e8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130687f0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_1130687f8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113068800);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041e1c40; end: 1041e1d13;  */

void FUN_1041e1c40(void)

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



/* Entry: 1041e1d14; end: 1041e1d33;  */

void FUN_1041e1d14(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1041e1d34; end: 1041e1d5b; -[SCSKOverlayLifecycleEvent description] */

void FUN_1041e1d34(void)

{
  _objc_retain();
  FUN_1041e2254();
  FUN_1041cfa10();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e1d5c; end: 1041e1da3; -[SCSKOverlayLifecycleEvent init] */

void FUN_1041e1d5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SKOverlayServices/SKOverlayLifecycleEventWrapper.swift",0x36,2,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e1da4);
  (*pcVar1)();
}



/* Entry: 1041e1da4; end: 1041e1dd7; -[SCSKOverlayLifecycleEvent hash] */

undefined8 FUN_1041e1da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041e190c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041e1dd8; end: 1041e1e57; -[SCSKOverlayLifecycleEvent isEqual:] */

uint FUN_1041e1dd8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x0001041e1a88(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041e1e58; end: 1041e1e5b; -[SCSKOverlayLifecycleEvent copyWithZone:] */

void FUN_1041e1e58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041e1e5c; end: 1041e1e63; +[SCSKOverlayLifecycleEvent didRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1e5c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130687d8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_113068800) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e1e64; end: 1041e1e9b; +[SCSKOverlayLifecycleEvent didFailToLoadWithError:] */

void FUN_1041e1e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1041e25a4();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1e9c; end: 1041e1ea7; +[SCSKOverlayLifecycleEvent willStartPresentationWithTransitionContext:] */

void FUN_1041e1e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  (*(code *)0x1041e2640)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1ea8; end: 1041e1eb3; +[SCSKOverlayLifecycleEvent didFinishPresentationWithTransitionContext:] */

void FUN_1041e1ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  (*(code *)0x1041e26dc)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1eb4; end: 1041e1ebf; +[SCSKOverlayLifecycleEvent willStartDismissalWithTransitionContext:] */

void FUN_1041e1eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  (*(code *)0x1041e2778)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1ec0; end: 1041e1ecb; +[SCSKOverlayLifecycleEvent didFinishDismissalWithTransitionContext:] */

void FUN_1041e1ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  (*(code *)0x1041e2814)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1ecc; end: 1041e1f0b;  */

void FUN_1041e1ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  (*param_4)(param_3);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e1f0c; end: 1041e1f13; +[SCSKOverlayLifecycleEvent preloadRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1f0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130687d8) = 6;
  *(undefined8 *)(lVar1 + _DAT_1130687e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_113068800) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e1f14; end: 1041e1f1b; +[SCSKOverlayLifecycleEvent presentationRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1f14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130687d8) = 7;
  *(undefined8 *)(lVar1 + _DAT_1130687e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_113068800) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e1f1c; end: 1041e1f23; +[SCSKOverlayLifecycleEvent dismissalRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1f1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130687d8) = 8;
  *(undefined8 *)(lVar1 + _DAT_1130687e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_113068800) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e1f24; end: 1041e20d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e1f24(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130687d8) = param_3;
  *(undefined8 *)(lVar1 + _DAT_1130687e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar1 + _DAT_113068800) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1041e20d8; end: 1041e21b7; -[SCSKOverlayLifecycleEvent matchDidRequest:didFailToLoad:willStartPresentation:didFinishPresentation:willStartDismissal:didFinishDismissal:preloadRequested:presentationRequested:dismissalRequested:] */

void FUN_1041e20d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
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
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001041e1fb0(FUN_1041e2a78,auStack_40,0x1041e2a94,auStack_60,0x1041e2a84,auStack_80,
                      0x1041e2a98,auStack_a0,0x1041e2a9c,auStack_c0,0x1041e2aa0,auStack_e0,
                      0x1041e2aa4,auStack_100,0x1041e2aa8,auStack_120,0x1041e2aac,auStack_140);
  _objc_release(param_1);
  return;
}



/* Entry: 1041e21b8; end: 1041e21eb;  */

void FUN_1041e21b8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1041e21ec; end: 1041e2253; -[SCSKOverlayLifecycleEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e21ec(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130687e0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130687e8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130687f0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130687f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113068800));
  return;
}



/* Entry: 1041e2254; end: 1041e23bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041e2254(long param_1)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  bVar2 = *(byte *)(param_1 + _DAT_1130687d8);
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar5 = 5;
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + _DAT_1130687e0);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1041e23b0);
          (*pcVar3)();
        }
        _objc_retain(lVar4);
        uVar5 = 0;
      }
    }
    else if (bVar2 == 2) {
      lVar4 = *(long *)(param_1 + _DAT_1130687e8);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041e23ac);
        (*pcVar3)();
      }
      _swift_unknownObjectRetain(lVar4);
      uVar5 = 1;
    }
    else {
      lVar4 = *(long *)(param_1 + _DAT_1130687f0);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041e23b4);
        (*pcVar3)();
      }
      _swift_unknownObjectRetain(lVar4);
      uVar5 = 2;
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 == 4) {
      lVar4 = *(long *)(param_1 + _DAT_1130687f8);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041e23b8);
        (*pcVar3)();
      }
      _swift_unknownObjectRetain(lVar4);
      uVar5 = 3;
    }
    else {
      lVar4 = *(long *)(param_1 + _DAT_113068800);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1041e23bc);
        (*pcVar3)();
      }
      _swift_unknownObjectRetain(lVar4);
      uVar5 = 4;
    }
  }
  else {
    lVar1 = 2;
    if (bVar2 != 7) {
      lVar1 = 3;
    }
    lVar4 = 1;
    if (bVar2 != 6) {
      lVar4 = lVar1;
    }
    uVar5 = 5;
  }
  _objc_release(param_1);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 1041e23bc; end: 1041e2593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e23bc(ulong param_1,byte param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong auStack_e0 [2];
  ulong auStack_d0 [2];
  ulong auStack_c0 [2];
  ulong auStack_b0 [2];
  ulong auStack_a0 [2];
  ulong auStack_90 [2];
  ulong auStack_80 [2];
  ulong auStack_70 [2];
  ulong auStack_60 [2];
  
  uVar7 = param_1;
  if (param_2 < 3) {
    uVar4 = (ulong)param_2;
    uVar5 = 2;
    uVar3 = param_1;
    if (param_2 != 1) {
      uVar5 = 3;
      uVar3 = 0;
    }
    puVar1 = auStack_c0;
    uVar2 = 0;
    if (param_2 != 1) {
      puVar1 = auStack_b0;
      uVar2 = param_1;
    }
    puVar6 = auStack_d0;
    uVar8 = uVar4;
    uVar9 = uVar4;
    uVar10 = uVar4;
    uVar11 = 1;
    if (param_2 != 0) {
      uVar7 = 0;
      uVar4 = 0;
      puVar6 = puVar1;
      uVar8 = uVar3;
      uVar9 = uVar2;
      uVar10 = uVar4;
      uVar11 = uVar5;
    }
  }
  else {
    uVar10 = param_1;
    if (param_2 == 3) {
      uVar4 = 0;
      puVar6 = auStack_a0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar11 = 4;
    }
    else {
      uVar4 = param_1;
      if (param_2 == 4) {
        puVar6 = auStack_90;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 5;
      }
      else if ((long)param_1 < 2) {
        puVar6 = auStack_e0;
        uVar8 = param_1;
        uVar9 = param_1;
        uVar11 = 0;
        if (param_1 != 0) {
          uVar4 = 0;
          puVar6 = auStack_80;
          uVar7 = uVar4;
          uVar8 = uVar4;
          uVar9 = uVar4;
          uVar10 = uVar4;
          uVar11 = 6;
        }
      }
      else if (param_1 == 2) {
        uVar4 = 0;
        puVar6 = auStack_70;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 7;
      }
      else {
        uVar4 = 0;
        puVar6 = auStack_60;
        uVar7 = 0;
        uVar8 = 0;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 8;
      }
    }
  }
  FUN_1041e28b0();
  uVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(uVar3 + _DAT_1130687d8) = uVar11;
  *(ulong *)(uVar3 + _DAT_1130687e0) = uVar7;
  *(ulong *)(uVar3 + _DAT_1130687e8) = uVar8;
  *(ulong *)(uVar3 + _DAT_1130687f0) = uVar9;
  *(ulong *)(uVar3 + _DAT_1130687f8) = uVar10;
  *(ulong *)(uVar3 + _DAT_113068800) = uVar4;
  *puVar6 = uVar3;
  puVar6[1] = param_1;
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041e2594; end: 1041e25a3;  */

ulong FUN_1041e2594(ulong param_1)

{
  if (8 < param_1) {
    param_1 = 9;
  }
  return param_1;
}



/* Entry: 1041e25a4; end: 1041e28af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e25a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_1041e28b0();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130687d8) = 1;
  *(long *)(lVar3 + _DAT_1130687e0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_1130687e8) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130687f0) = 0;
  *(undefined8 *)(lVar3 + _DAT_1130687f8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113068800) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1041e28b0; end: 1041e28cf;  */

void FUN_1041e28b0(void)

{
  _objc_opt_self(&PTR_PTR_11298fab8);
  return;
}



/* Entry: 1041e28d0; end: 1041e2a37;  */

int FUN_1041e28d0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1041e294c;
        goto LAB_1041e2930;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1041e2930:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1041e294c:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1041e2a38; end: 1041e2a77;  */

void FUN_1041e2a38(void)

{
  undefined *puVar1;
  
  if (puRam0000000113068830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce1040;
  _swift_getWitnessTable(&UNK_10dce1040,&UNK_110750348);
  puRam0000000113068830 = puVar1;
  return;
}



/* Entry: 1041e2a78; end: 1041e2aaf;  */

void FUN_1041e2a78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001041e2a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1041e2ab0; end: 1041e2adf;  */

void FUN_1041e2ab0(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001041e31b8(param_1);
  return;
}



/* Entry: 1041e2ae0; end: 1041e2c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2ae0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  func_0x00010bfde980(*(undefined8 *)(unaff_x20 + _DAT_113068838));
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113068840));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068848);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1041ec650();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113068858));
  if (((undefined8 *)(unaff_x20 + _DAT_113068860))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113068860);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1041e2c04; end: 1041e2e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1041e2c04(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  puVar4 = PTR___sypN_11034f1a8;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
    return 0;
  }
  plVar5 = &lStack_88;
  _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar11,6);
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113068838);
  func_0x00010c071ae0(uVar6);
  lVar16 = *(long *)(unaff_x20 + _DAT_113068840);
  lVar17 = *(long *)(lStack_88 + _DAT_113068840);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113068848);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar7,PTR___sSSN_11034da80,puVar4 + 8,PTR___sSSSHsWP_11034da90);
  uVar15 = *(undefined8 *)(lStack_88 + _DAT_113068848);
  uVar8 = uVar15;
  _swift_bridgeObjectRetain(uVar15);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar15);
  uVar15 = uVar7;
  func_0x00010c071ae0(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar8);
  uVar7 = *(undefined8 *)(lStack_88 + _DAT_113068850);
  uVar8 = 0;
  FUN_1041ed328();
  auStack_80[0] = uVar7;
  lStack_68 = uVar8;
  _objc_retain(uVar7);
  puVar9 = auStack_80;
  FUN_1041ec768(puVar9);
  func_0x00010006e7f4(auStack_80);
  iVar2 = *(int *)(unaff_x20 + _DAT_113068858);
  iVar3 = *(int *)(lStack_88 + _DAT_113068858);
  lVar11 = ((long *)(unaff_x20 + _DAT_113068860))[1];
  lVar14 = ((long *)(lStack_88 + _DAT_113068860))[1];
  if (lVar11 == 0) {
    _swift_bridgeObjectRetain(lVar14);
    _objc_release(lStack_88);
    if (lVar14 != 0) {
      _swift_bridgeObjectRelease(lVar14);
      uVar13 = 0;
      goto LAB_1041e2dfc;
    }
LAB_1041e2ddc:
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
    if (lVar14 != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_113068860);
      if ((lVar10 == *(long *)(lStack_88 + _DAT_113068860)) && (lVar11 == lVar14)) {
        _objc_release(lStack_88);
        goto LAB_1041e2ddc;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar13 = (uint)lVar10;
    }
    _objc_release(lStack_88);
  }
LAB_1041e2dfc:
  uVar12 = 0;
  if (lVar16 == lVar17) {
    uVar12 = (uint)uVar6;
  }
  uVar1 = 0;
  if (iVar2 == iVar3) {
    uVar1 = uVar12 & (uint)uVar15 & (uint)puVar9;
  }
  return uVar1 & uVar13;
}



/* Entry: 1041e2e38; end: 1041e2e47; -[SCSKOverlayParams adResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068838));
  return;
}



/* Entry: 1041e2e48; end: 1041e2e57; -[SCSKOverlayParams snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041e2e48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068840);
}



/* Entry: 1041e2e58; end: 1041e2eb3; -[SCSKOverlayParams productParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2e58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113068848);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e2eb4; end: 1041e2ec3; -[SCSKOverlayParams appInstallParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113068850));
  return;
}



/* Entry: 1041e2ec4; end: 1041e2ed3; -[SCSKOverlayParams position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1041e2ec4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113068858);
}



/* Entry: 1041e2ed4; end: 1041e2f2f; -[SCSKOverlayParams pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2ed4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113068860))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113068860);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1041e2f30; end: 1041e30a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113068838) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113068840) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113068848) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113068850) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113068858) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068860);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1041e30a8; end: 1041e3383; -[SCSKOverlayParams initWithAdResponse:snapIndex:productParameters:appInstallParameters:position:pageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e30a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar3 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  if (param_8 == 0) {
    param_8 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_113068838) = param_3;
  *(undefined8 *)(param_1 + _DAT_113068840) = param_4;
  *(undefined8 *)(param_1 + _DAT_113068848) = param_5;
  *(undefined8 *)(param_1 + _DAT_113068850) = param_6;
  *(undefined8 *)(param_1 + _DAT_113068858) = param_7;
  plVar1 = (long *)(param_1 + _DAT_113068860);
  *plVar1 = param_8;
  plVar1[1] = (long)puVar3;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 1041e3384; end: 1041e3403;  */

undefined8 FUN_1041e3384(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1041e3404; end: 1041e3437; -[SCSKOverlayParams hash] */

undefined8 FUN_1041e3404(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1041e2ae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1041e3438; end: 1041e34b7; -[SCSKOverlayParams isEqual:] */

uint FUN_1041e3438(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1041e2c04(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1041e34b8; end: 1041e34bb; -[SCSKOverlayParams copyWithZone:] */

void FUN_1041e34b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1041e34bc; end: 1041e3503; -[SCSKOverlayParams description] */

void FUN_1041e34bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  FUN_1041e3504();
  _objc_release(param_1);
  uVar1 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1041e3504; end: 1041e360f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1041e3504(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  func_0x000100b91cc8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _objc_retain(*(undefined8 *)(unaff_x20 + _DAT_113068838));
  func_0x0001047b6fb0(puVar4);
  *(undefined8 *)(puVar4 + *(int *)(lVar3 + 0x14)) = *(undefined8 *)(unaff_x20 + _DAT_113068840);
  *(undefined8 *)(puVar4 + *(int *)(lVar3 + 0x18)) = *(undefined8 *)(unaff_x20 + _DAT_113068848);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113068850);
  iVar2 = *(int *)(lVar3 + 0x1c);
  _swift_bridgeObjectRetain();
  _objc_retain(uVar5);
  func_0x0001041ed0c4(puVar4 + iVar2);
  *(undefined8 *)(puVar4 + *(int *)(lVar3 + 0x20)) = *(undefined8 *)(unaff_x20 + _DAT_113068858);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113068860);
  iVar2 = *(int *)(lVar3 + 0x24);
  uVar5 = puVar1[1];
  uVar6 = *puVar1;
  *(undefined8 *)((long)(puVar4 + iVar2) + 8) = puVar1[1];
  *(undefined8 *)(puVar4 + iVar2) = uVar6;
  _swift_bridgeObjectRetain(uVar5);
  func_0x0001041e33c8(puVar4);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 1041e3610; end: 1041e368b; -[SCSKOverlayParams init] */

void FUN_1041e3610(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SKOverlayServices/SKOverlayParamsWrapper.swift",0x2e,2,0x57,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041e3658);
  (*pcVar1)();
}



/* Entry: 1041e368c; end: 1041e36e7; -[SCSKOverlayParams .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1041e368c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068838));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113068848));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113068850));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113068860 + 8))
  ;
  return;
}



/* Entry: 1041e36e8; end: 1041e3707;  */

void FUN_1041e36e8(void)

{
  _objc_opt_self(&PTR_PTR_11298fba0);
  return;
}



/* Entry: 1041e3708; end: 1041e3843;  */

void FUN_1041e3708(double param_1,double param_2,undefined8 param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (param_1 != 0.0) {
    dVar2 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  if (param_5 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar1 = 0;
    if ((param_4 & 0x7fffffffffffffff) != 0) {
      uVar1 = param_4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar1);
  }
  dVar2 = 0.0;
  if (param_2 != 0.0) {
    dVar2 = param_2;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  return;
}



/* Entry: 1041e3844; end: 1041e386b;  */

void FUN_1041e3844(void)

{
  char cVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [72];
  
  dVar4 = *unaff_x20;
  dVar2 = unaff_x20[1];
  dVar5 = unaff_x20[3];
  cVar1 = *(char *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  dVar3 = 0.0;
  if (dVar4 != 0.0) {
    dVar3 = dVar4;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  if (cVar1 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    dVar3 = 0.0;
    if (ABS(dVar2) != 0.0) {
      dVar3 = dVar2;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar3);
  }
  dVar3 = 0.0;
  if (dVar5 != 0.0) {
    dVar3 = dVar5;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}


