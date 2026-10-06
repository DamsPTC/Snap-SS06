/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104592010; end: 104592047;  */

undefined8 FUN_104592010(undefined8 param_1)

{
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  return param_1;
}



/* Entry: 104592048; end: 10459211b;  */

void FUN_104592048(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_10459013c(param_2,lVar1,*(undefined8 *)(param_3 + 0x18));
  if (lVar1 != 0) {
    if (unaff_x20[1] == 0) {
      func_0x0001000bb420(param_1,&uStack_60);
    }
    else {
      uStack_60 = *unaff_x20;
      lStack_58 = unaff_x20[1];
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      __sSS6appendyySSF(param_2,lVar1);
      _swift_bridgeObjectRelease(lVar1);
      lVar1 = lStack_58;
      param_2 = uStack_60;
      func_0x0001000bb420(param_1,&uStack_60);
    }
    func_0x000100102934(&uStack_60,param_2,lVar1);
  }
  return;
}



/* Entry: 10459211c; end: 1045922bf;  */

/* WARNING: Removing unreachable block (ram,0x000104592234) */

void FUN_10459211c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  code *pcVar4;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar3 = *(long *)(param_3 + 0x10);
  FUN_10459013c(param_2,lVar3,*(undefined8 *)(param_3 + 0x18));
  if (lVar3 != 0) {
    if (unaff_x20[1] != 0) {
      uStack_70 = *unaff_x20;
      lStack_68 = unaff_x20[1];
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      __sSS6appendyySSF(param_2,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      lVar3 = lStack_68;
      param_2 = uStack_70;
    }
    lStack_58 = param_4;
    func_0x0001000a9d90(&uStack_70);
    (**(code **)(*(long *)(param_4 + -8) + 0x10))();
    _swift_bridgeObjectRetain_n(lVar3,2);
    func_0x000100102934(&uStack_70,param_2,lVar3);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
    pcVar4 = *(code **)(param_5 + 0x48);
    uVar2 = 0;
    uStack_70 = param_2;
    lStack_68 = lVar3;
    puStack_60 = puVar1;
    func_0x000104592004(0,param_4,param_5);
    (*pcVar4)(&uStack_70,uVar2,&PTR_DAT_110789ca8,param_4,param_5);
    puVar1 = puStack_60;
    _swift_bridgeObjectRetain(puStack_60);
    uVar2 = unaff_x20[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    auStack_80[0] = unaff_x20[2];
    FUN_104592a68(puVar1,&UNK_100216600,0,uVar2,auStack_80);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(puVar1);
    lVar3 = lStack_68;
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(lVar3);
    unaff_x20[2] = auStack_80[0];
  }
  return;
}



/* Entry: 1045922c0; end: 10459230f;  */

void FUN_1045922c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_40 [6];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSfN_11034ddf8;
  auStack_40[0] = param_1;
  FUN_104592048(auStack_40,param_2,param_3);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 104592310; end: 10459235f;  */

void FUN_104592310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_40 [3];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSdN_11034dd90;
  auStack_40[0] = param_1;
  FUN_104592048(auStack_40,param_2,param_3);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 104592360; end: 10459239b;  */

void FUN_104592360(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_40 [6];
  undefined8 uStack_28;
  
  auStack_40[0] = param_1;
  uStack_28 = param_4;
  FUN_104592048(auStack_40);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10459239c; end: 1045923d7;  */

void FUN_10459239c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  auStack_40[0] = param_1;
  uStack_28 = param_4;
  FUN_104592048(auStack_40);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 1045923d8; end: 10459241f;  */

void FUN_1045923d8(undefined1 param_1)

{
  undefined1 auStack_40 [24];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSbN_11034dd40;
  auStack_40[0] = param_1;
  FUN_104592048(auStack_40);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 104592420; end: 10459247f;  */

void FUN_104592420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_28;
  
  puStack_28 = PTR___sSSN_11034da80;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_104592048(&uStack_40,param_3,param_4);
  func_0x000100183ab8(&uStack_40);
  return;
}



/* Entry: 104592480; end: 1045924e3;  */

void FUN_104592480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  
  puStack_38 = PTR___s10Foundation4DataVN_110350ae0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010006c00c();
  FUN_104592048(&uStack_50,param_3,param_4);
  func_0x000100183ab8(&uStack_50);
  return;
}



/* Entry: 1045924e4; end: 10459255f;  */

void FUN_1045924e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = param_4;
  func_0x0001000a9d90(auStack_60);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  FUN_104592048(auStack_60,param_2,param_3);
  func_0x000100183ab8(auStack_60);
  return;
}



/* Entry: 104592560; end: 104592583;  */

void FUN_104592560(void)

{
  FUN_10459211c();
  return;
}



/* Entry: 104592584; end: 1045925f3;  */

void FUN_104592584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x0001000285a8(param_4,param_5);
  auStack_50[0] = param_1;
  uStack_38 = param_4;
  _swift_bridgeObjectRetain(param_1);
  FUN_104592048(auStack_50,param_2,param_3);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1045925f4; end: 104592663;  */

void FUN_1045925f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar1 = 0;
  __sSaMa(0,param_4);
  auStack_50[0] = param_1;
  uStack_38 = uVar1;
  _swift_bridgeObjectRetain(param_1);
  FUN_104592048(auStack_50,param_2,param_3);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104592664; end: 10459275f;  */

void FUN_104592664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar4,param_4,&UNK_10e814078,&UNK_10e814088);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_7 + 8),param_5,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar4,param_4,uVar1,&UNK_10e814078,&UNK_10e814080);
  uVar3 = 0;
  __sSDMa(0,uVar1,uVar2,uVar4);
  auStack_80[0] = param_1;
  uStack_68 = uVar3;
  _swift_bridgeObjectRetain(param_1);
  FUN_104592048(auStack_80,param_2,param_3);
  func_0x000100183ab8(auStack_80);
  return;
}



/* Entry: 104592760; end: 104592837;  */

void FUN_104592760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar1,&UNK_10e814078,&UNK_10e814080);
  uVar2 = 0;
  __sSDMa(0,uVar1,param_5,uVar3);
  auStack_70[0] = param_1;
  uStack_58 = uVar2;
  _swift_bridgeObjectRetain(param_1);
  FUN_104592048(auStack_70,param_2,param_3);
  func_0x000100183ab8(auStack_70);
  return;
}



/* Entry: 104592838; end: 10459290f;  */

void FUN_104592838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,param_4,&UNK_10e814078,&UNK_10e814088);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar1,&UNK_10e814078,&UNK_10e814080);
  uVar2 = 0;
  __sSDMa(0,uVar1,param_5,uVar3);
  auStack_70[0] = param_1;
  uStack_58 = uVar2;
  _swift_bridgeObjectRetain(param_1);
  FUN_104592048(auStack_70,param_2,param_3);
  func_0x000100183ab8(auStack_70);
  return;
}



/* Entry: 104592910; end: 104592a63;  */

void FUN_104592910(void)

{
  FUN_1045922c0();
  return;
}



/* Entry: 104592a64; end: 104592a67;  */

void FUN_104592a64(void)

{
  return;
}



/* Entry: 104592a68; end: 104592d9f;  */

void FUN_104592a68(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_104592d5c;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_104592d98:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104592d9c);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_104592b6c:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104592b7c);
      (*pcVar3)();
    }
LAB_104592b80:
    if ((uVar5 & 1) != 0) goto LAB_104592b84;
LAB_104592bdc:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_104592d9c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104592da0);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_104592b80;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_104592bdc;
LAB_104592b84:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    func_0x000100183ab8(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    func_0x000100183ab8(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_104592d98;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_104592b6c;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_104592d9c;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      func_0x000100183ab8(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      func_0x000100183ab8(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_104592d5c:
  func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  _swift_release(param_3);
  return;
}



/* Entry: 104592da0; end: 1045930bf;  */

void FUN_104592da0(void)

{
  func_0x000100dbb284();
  return;
}



/* Entry: 1045930c0; end: 1045930c7;  */

undefined8 * FUN_1045930c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 1045930c8; end: 1045930ef;  */

void FUN_1045930c8(void)

{
  func_0x000100dbb2f4();
  return;
}



/* Entry: 1045930f0; end: 104593123;  */

void FUN_1045930f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e81484c);
  return;
}



/* Entry: 104593124; end: 10459315f;  */

void FUN_104593124(void)

{
  return;
}



/* Entry: 104593160; end: 1045931a7;  */

void FUN_104593160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593704(param_5,param_3,&PTR_DAT_110786c80);
  return;
}



/* Entry: 1045931a8; end: 1045931e3;  */

void FUN_1045931a8(void)

{
  return;
}



/* Entry: 1045931e4; end: 10459324f;  */

void FUN_1045931e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593700(param_5,param_3,&PTR_DAT_110786c80);
  return;
}



/* Entry: 104593250; end: 104593283;  */

void FUN_104593250(void)

{
  return;
}



/* Entry: 104593284; end: 10459332b;  */

void FUN_104593284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593708(param_5,param_3,&PTR_DAT_110786c80);
  return;
}



/* Entry: 10459332c; end: 104593373;  */

void FUN_10459332c(void)

{
  return;
}



/* Entry: 104593374; end: 1045933bb;  */

void FUN_104593374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593704(param_5,param_3,&PTR_DAT_110787130);
  return;
}



/* Entry: 1045933bc; end: 1045933f7;  */

void FUN_1045933bc(void)

{
  return;
}



/* Entry: 1045933f8; end: 104593463;  */

void FUN_1045933f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593700(param_5,param_3,&PTR_DAT_110787130);
  return;
}



/* Entry: 104593464; end: 104593497;  */

void FUN_104593464(void)

{
  return;
}



/* Entry: 104593498; end: 10459353f;  */

void FUN_104593498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593708(param_5,param_3,&PTR_DAT_110787130);
  return;
}



/* Entry: 104593540; end: 10459354b;  */

void FUN_104593540(void)

{
  return;
}



/* Entry: 10459354c; end: 10459356f;  */

void FUN_10459354c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593714(param_5,param_3,&PTR_DAT_110789198);
  return;
}



/* Entry: 104593570; end: 1045935ab;  */

void FUN_104593570(void)

{
  return;
}



/* Entry: 1045935ac; end: 104593617;  */

void FUN_1045935ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593700(param_5,param_3,&PTR_DAT_110789198);
  return;
}



/* Entry: 104593618; end: 10459364b;  */

void FUN_104593618(void)

{
  return;
}



/* Entry: 10459364c; end: 1045936f3;  */

void FUN_10459364c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000104593708(param_5,param_3,&PTR_DAT_110789198);
  return;
}



/* Entry: 1045936f4; end: 104593733;  */

void FUN_1045936f4(void)

{
  return;
}



/* Entry: 104593734; end: 10459375b;  */

void FUN_104593734(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10459375c; end: 10459376f;  */

undefined8 FUN_10459375c(void)

{
  return 0x10459376c;
}



/* Entry: 104593770; end: 10459379f;  */

undefined8 FUN_104593770(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104595f2c();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Entry: 1045937a0; end: 104593807;  */

void FUN_1045937a0(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_104595fbc(param_1,auStack_58);
      func_0x000100dbb438(auStack_58,auStack_80);
      func_0x000104593fac(auStack_80);
      func_0x0001000834e4(auStack_80);
      param_1 = param_1 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 104593808; end: 10459389b;  */

undefined * FUN_104593808(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    lVar4 = 0x20;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      _swift_bridgeObjectRetain(uVar2);
      FUN_10459389c();
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar1;
}



/* Entry: 10459389c; end: 10459429b;  */

/* WARNING: Removing unreachable block (ram,0x000104593c28) */

void FUN_10459389c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x20;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined *apuStack_90 [5];
  undefined *puStack_68;
  
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  lVar4 = param_1;
  _swift_bridgeObjectRetain();
  lVar13 = 0;
  lVar1 = param_1;
  while( true ) {
    while (uVar14 != 0) {
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar8 = lVar13 << 9 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 3;
      uVar11 = *(ulong *)(*(long *)(lVar1 + 0x30) + uVar8);
      uVar15 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + uVar8);
      uVar8 = *unaff_x20;
      lVar1 = lVar4;
      if ((*(long *)(uVar8 + 0x10) == 0) ||
         (uVar18 = uVar11, func_0x00010035a314(), (param_2 & 1) == 0)) {
        _swift_bridgeObjectRetain(uVar15);
        uVar18 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = (undefined *)*unaff_x20;
        uVar8 = uVar11;
        apuStack_90[0] = puVar12;
        func_0x00010035a314();
        uVar10 = (ulong)~(uint)param_2 & 1;
        lVar16 = *(long *)(puVar12 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104593c24);
          (*pcVar2)();
        }
        if (*(long *)(puVar12 + 0x18) < lVar16) {
          func_0x000104595cc8(lVar16);
          uVar8 = uVar11;
          func_0x00010035a314();
          uVar10 = uVar18;
          puVar12 = apuStack_90[0];
          if (((uint)param_2 & 1) != ((uint)uVar18 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104593c54);
            (*pcVar2)();
          }
        }
        else {
          uVar10 = param_2;
          puVar12 = apuStack_90[0];
          if ((uVar18 & 1) == 0) {
            FUN_104594e04();
            puVar12 = apuStack_90[0];
          }
        }
        apuStack_90[0] = puVar12;
        if ((param_2 & 1) == 0) {
          *(ulong *)(puVar12 + (uVar8 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar12 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
          *(ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 8) = uVar11;
          *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar15;
          if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x104593c28);
            (*pcVar2)();
          }
          *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8);
          *(undefined8 *)(*(long *)(puVar12 + 0x38) + uVar8 * 8) = uVar15;
          _swift_bridgeObjectRelease(uVar7);
        }
        *unaff_x20 = (ulong)puVar12;
        param_2 = uVar10;
      }
      else {
        lVar16 = *(long *)(*(long *)(uVar8 + 0x38) + uVar18 * 8);
        uVar8 = *(ulong *)(lVar16 + 0x10);
        _swift_bridgeObjectRetain(uVar15);
        _swift_bridgeObjectRetain(lVar16);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar8 != 0) {
          uVar18 = 0;
          lVar17 = lVar16 + 0x20;
          do {
            if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104593c20);
              (*pcVar2)();
            }
            FUN_104595fbc(lVar17,apuStack_90);
            ppuVar5 = apuStack_90;
            FUN_10459429c(ppuVar5,uVar15);
            if (((ulong)ppuVar5 & 1) == 0) {
              func_0x0001000834e4(apuStack_90);
            }
            else {
              puVar6 = puVar12;
              _swift_isUniquelyReferenced_nonNull_native();
              puStack_68 = puVar12;
              if (((ulong)puVar6 & 1) == 0) {
                func_0x000104559784(0,*(long *)(puVar12 + 0x10) + 1,1);
              }
              uVar10 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar10) {
                func_0x000104559784(1 < *(ulong *)(puStack_68 + 0x18),uVar10 + 1,1);
              }
              puVar12 = puStack_68;
              *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
              func_0x000100dbb438(apuStack_90,puStack_68 + uVar10 * 0x28 + 0x20);
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0x28;
          } while (uVar8 != uVar18);
        }
        _swift_bridgeObjectRelease(lVar16);
        apuStack_90[0] = puVar12;
        FUN_10454133c(uVar15);
        puVar12 = apuStack_90[0];
        _swift_bridgeObjectRetain(apuStack_90[0]);
        uVar8 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native(uVar8);
        puStack_68 = (undefined *)*unaff_x20;
        func_0x000104568664(puVar12,uVar11,uVar8);
        _swift_bridgeObjectRelease(puVar12);
        *unaff_x20 = (ulong)puStack_68;
        param_2 = uVar11;
      }
    }
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) break;
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
      _swift_release(lVar1);
      return;
    }
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104593c1c);
  (*pcVar2)();
}



/* Entry: 10459429c; end: 104594387;  */

undefined8 FUN_10459429c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FUN_104595fbc(param_2,auStack_78);
      func_0x000100dbb438(auStack_78,auStack_a0);
      lVar2 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,lVar2);
      (**(code **)(lVar3 + 0x18))(lVar2,lVar3);
      lVar1 = lStack_80;
      lVar3 = lStack_88;
      func_0x0001000a8868(auStack_a0,lStack_88);
      (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
      if (lVar2 == lVar3) {
        func_0x0001000834e4(auStack_a0);
        return 0;
      }
      func_0x0001000834e4(auStack_a0);
      param_2 = param_2 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 104594388; end: 1045943c7;  */

undefined8 FUN_104594388(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  FUN_10459389c(param_1);
  return param_2;
}



/* Entry: 1045943c8; end: 1045943d7;  */

void FUN_1045943c8(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar4 = *unaff_x20;
  if ((*(long *)(lVar4 + 0x10) != 0) && (func_0x00010035a314(), (param_3 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + param_4 * 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(lVar4);
    if (uVar6 != 0) {
      uVar7 = 0;
      lVar5 = lVar4 + 0x20;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x104593d74);
          (*pcVar2)();
        }
        FUN_104595fbc(lVar5,auStack_88);
        func_0x000100dbb438(auStack_88,auStack_b0);
        lVar1 = lStack_90;
        lVar3 = lStack_98;
        func_0x0001000a8868(auStack_b0,lStack_98);
        (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
        if (param_2 == lVar3) {
          _swift_bridgeObjectRelease(lVar4);
          FUN_104595fbc(auStack_b0,param_1);
          func_0x0001000834e4(auStack_b0);
          return;
        }
        uVar7 = uVar7 + 1;
        func_0x0001000834e4(auStack_b0);
        lVar5 = lVar5 + 0x28;
      } while (uVar6 != uVar7);
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1045943d8; end: 104594413;  */

void FUN_1045943d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_104595f2c();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 104594414; end: 104594493;  */

void FUN_104594414(void)

{
  undefined8 uVar1;
  undefined *puStack_18;
  
  puStack_18 = &UNK_110789ee0;
  uVar1 = 0x1130874e0;
  func_0x0001000285a8(0x1130874e0,&UNK_10dd18f18);
  __sSS10reflectingSSx_tclufC(&puStack_18,uVar1);
  return;
}



/* Entry: 104594494; end: 10459458f;  */

void FUN_104594494(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x30);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  uVar4 = param_4[4];
  puVar3[5] = param_4[5];
  puVar3[4] = uVar4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045944f0);
  (*pcVar2)();
}



/* Entry: 104594590; end: 1045945f7;  */

void FUN_104594590(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  func_0x000100dbb438(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x28);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1045945f8);
  (*pcVar2)();
}



/* Entry: 1045945f8; end: 10459468b;  */

void FUN_1045945f8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x10);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104594648);
  (*pcVar3)();
}



/* Entry: 10459468c; end: 1045949df;  */

void FUN_10459468c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *unaff_x20;
  undefined8 uVar20;
  
  uVar11 = 0x113087508;
  func_0x0001000285a8(0x113087508,&UNK_10dd18fd0);
  lVar18 = *unaff_x20;
  lVar12 = lVar18;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ(lVar18,uVar11);
  if (*(long *)(lVar18 + 0x10) != 0) {
    lVar1 = lVar18 + 0x40;
    uVar13 = (1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar12 != lVar18 || lVar1 + uVar13 * 8 <= lVar12 + 0x40U) {
      _memmove(lVar12 + 0x40U,lVar1,uVar13 << 3);
    }
    lVar19 = 0;
    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
    uVar14 = 1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((*(byte *)(lVar18 + 0x20) & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(lVar18 + 0x40);
    if (uVar13 == 0) goto LAB_10459477c;
    do {
      uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      while( true ) {
        uVar15 = LZCOUNT(uVar15) | lVar19 << 6;
        lVar17 = uVar15 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x30) + lVar17);
        uVar6 = puVar2[1];
        lVar16 = uVar15 * 0x30;
        puVar3 = (undefined8 *)(*(long *)(lVar18 + 0x38) + lVar16);
        uVar11 = *puVar3;
        uVar7 = puVar3[1];
        uVar20 = puVar3[2];
        uVar5 = puVar3[4];
        uVar8 = puVar3[5];
        puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar17);
        uVar9 = *(undefined1 *)(puVar3 + 3);
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar16);
        *puVar2 = uVar11;
        puVar2[1] = uVar7;
        puVar2[2] = uVar20;
        *(undefined1 *)(puVar2 + 3) = uVar9;
        puVar2[4] = uVar5;
        puVar2[5] = uVar8;
        _swift_bridgeObjectRetain();
        FUN_1045670a0(uVar11,uVar7,uVar20,uVar9);
        func_0x00010006c00c(uVar5,uVar8);
        if (uVar13 != 0) break;
LAB_10459477c:
        do {
          lVar16 = lVar19 + 1;
          if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x104594860);
            (*pcVar10)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar16) goto LAB_10459482c;
          uVar13 = *(ulong *)(lVar1 + lVar16 * 8);
          lVar19 = lVar19 + 1;
        } while (uVar13 == 0);
        uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar19 = lVar16;
      }
    } while( true );
  }
LAB_10459482c:
  _swift_release(lVar18);
  *unaff_x20 = lVar12;
  return;
}



/* Entry: 1045949e0; end: 104594b47;  */

void FUN_1045949e0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x0001000285a8(0x113085d30,&UNK_10dd17e68);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      _memmove(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
    if (uVar7 == 0) goto LAB_104594abc;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar3 = puVar2[1];
        puVar4 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar10);
        uVar14 = puVar4[1];
        uVar13 = *puVar4;
        puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar4 = *puVar2;
        puVar4[1] = uVar3;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uVar14;
        *puVar2 = uVar13;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_104594abc:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x104594b48);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_104594b20;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_104594b20:
  _swift_release(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 104594b48; end: 104594e03;  */

void FUN_104594b48(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  
  func_0x0001000285a8(0x1130874f0,&UNK_10dd18fb8);
  lVar12 = *unaff_x20;
  lVar5 = lVar12;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar12 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      _memmove(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar12 + 0x40);
    lVar9 = lVar7;
    if (uVar6 == 0) goto LAB_104594c20;
    do {
      uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      while( true ) {
        uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar10 * 8);
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar10 * 0x10);
        uVar13 = *puVar2;
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar10 * 0x10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar13;
        *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar10 * 8) = uVar11;
        lVar9 = lVar7;
        if (uVar6 != 0) break;
LAB_104594c20:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104594c98);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_104594c78;
          uVar6 = *(ulong *)(lVar1 + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
      }
    } while( true );
  }
LAB_104594c78:
  _swift_release(lVar12);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 104594e04; end: 104594f5f;  */

void FUN_104594e04(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x113087500,&UNK_10dd18fc8);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_104594ee0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar6 != 0) break;
LAB_104594ee0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x104594f60);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_104594f38;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_104594f38:
  _swift_release(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 104594f60; end: 104595f2b;  */

void FUN_104594f60(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uStack_d8;
  undefined1 auStack_b0 [80];
  
  lVar23 = *unaff_x20;
  lVar1 = *(long *)(lVar23 + 0x18);
  if (*(long *)(lVar23 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x113087508,&UNK_10dd18fd0);
  lVar11 = lVar23;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar23,lVar1,param_2);
  if (*(long *)(lVar23 + 0x10) == 0) {
LAB_104595248:
    _swift_release(lVar23);
    *unaff_x20 = lVar11;
    return;
  }
  puVar17 = (ulong *)(lVar23 + 0x40);
  uVar18 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
  uStack_d8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar23 + 0x20) & 0x3f) < 6) {
    uStack_d8 = ~(-1L << (uVar18 & 0x3f));
  }
  uStack_d8 = uStack_d8 & *puVar17;
  lVar1 = lVar11 + 0x40;
  lVar14 = 0;
  do {
    if (uStack_d8 == 0) {
      do {
        lVar22 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x104595278);
          (*pcVar10)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
            if ((*(byte *)(lVar23 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(puVar17,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar23 + 0x10) = 0;
          }
          goto LAB_104595248;
        }
        uStack_d8 = puVar17[lVar22];
        lVar14 = lVar14 + 1;
      } while (uStack_d8 == 0);
      uVar13 = (uStack_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_d8 = uStack_d8 - 1 & uStack_d8;
    }
    else {
      uVar13 = (uStack_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_d8 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uStack_d8 = uStack_d8 - 1 & uStack_d8;
      lVar22 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar22 << 6;
    puVar15 = (undefined8 *)(*(long *)(lVar23 + 0x30) + uVar13 * 0x10);
    uVar2 = *puVar15;
    uVar5 = puVar15[1];
    puVar15 = (undefined8 *)(*(long *)(lVar23 + 0x38) + uVar13 * 0x30);
    uVar3 = *puVar15;
    uVar6 = puVar15[1];
    uVar21 = puVar15[2];
    uVar8 = *(undefined1 *)(puVar15 + 3);
    uVar4 = puVar15[4];
    uVar7 = puVar15[5];
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar5);
      FUN_1045670a0(uVar3,uVar6,uVar21,uVar8);
      func_0x00010006c00c(uVar4,uVar7);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_b0,*(undefined8 *)(lVar11 + 0x28));
    puVar12 = auStack_b0;
    __sSS4hash4intoys6HasherVz_tF(puVar12,uVar2,uVar5);
    __ss6HasherV9_finalizeSiyF();
    uVar20 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar19 = (ulong)puVar12 & (uVar20 ^ 0xffffffffffffffff);
    uVar16 = uVar19 >> 6;
    uVar13 = -1L << (uVar19 & 0x3f) & (*(ulong *)(lVar1 + uVar16 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar20 >> 6;
      do {
        uVar19 = uVar16 + 1;
        if ((uVar19 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10459527c);
          (*pcVar10)();
        }
        uVar16 = 0;
        if (uVar19 != uVar13) {
          uVar16 = uVar19;
        }
        bVar9 = (bool)(uVar19 == uVar13 | bVar9);
        uVar19 = *(ulong *)(lVar1 + uVar16 * 8);
      } while (uVar19 == 0xffffffffffffffff);
      uVar19 = ~uVar19;
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar19 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar13 * 0x10);
    *puVar15 = uVar2;
    puVar15[1] = uVar5;
    puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar13 * 0x30);
    *puVar15 = uVar3;
    puVar15[1] = uVar6;
    puVar15[2] = uVar21;
    *(undefined1 *)(puVar15 + 3) = uVar8;
    puVar15[4] = uVar4;
    puVar15[5] = uVar7;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar14 = lVar22;
  } while( true );
}



/* Entry: 104595f2c; end: 104595fab;  */

undefined * FUN_104595f2c(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined *puStack_38;
  
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_104595fbc(param_1,auStack_60);
      func_0x000100dbb438(auStack_60,auStack_88);
      func_0x000104593fac(auStack_88);
      func_0x0001000834e4(auStack_88);
      param_1 = param_1 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return puStack_38;
}



/* Entry: 104595fac; end: 104595fbb;  */

undefined1  [16] FUN_104595fac(void)

{
  return ZEXT816(0x110789ee0);
}



/* Entry: 104595fbc; end: 104595fff;  */

long FUN_104595fbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 104596000; end: 104596307;  */

void FUN_104596000(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_88 [32];
  uint uStack_68;
  byte bStack_64;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = 0;
  pbVar1 = param_1 + param_2;
  uStack_68 = 0;
  pbVar10 = param_1;
  do {
    bStack_64 = (byte)uVar5;
    do {
      while ((uVar5 & 0xff) != 0) {
        if ((uStack_68 >> 7 & 1) != 0) {
          pbVar9 = pbVar10;
          uVar7 = uStack_68;
          uVar6 = uVar5;
          if (pbVar10 != (byte *)0x0) goto LAB_104596118;
          goto LAB_104596234;
        }
        pbVar9 = param_1;
        FUN_10459631c();
        pcVar3 = (code *)auStack_88;
        puVar4 = (uint *)PTR___ss7UnicodeO4UTF8O13ForwardParserVN_11034f0d8;
        FUN_104596308(pcVar3,PTR___ss7UnicodeO4UTF8O13ForwardParserVN_11034f0d8,pbVar9);
        if ((char)puVar4[1] == '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104596308);
          (*pcVar3)();
        }
        *puVar4 = *puVar4 >> 8;
        *(char *)(puVar4 + 1) = (char)puVar4[1] + -8;
        (*pcVar3)(auStack_88,0);
        uVar5 = (uint)bStack_64;
      }
      if ((pbVar10 == (byte *)0x0) || (pbVar1 == pbVar10)) goto LAB_1045962b8;
      uVar5 = 0;
      pbVar9 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar9;
    } while (-1 < (char)bVar2);
    uVar7 = uStack_68 & 0xffffff00 | (uint)bVar2;
    uVar6 = 8;
LAB_104596118:
    pbVar10 = pbVar9;
    uVar5 = uVar6;
    if (pbVar9 != pbVar1) {
      pbVar10 = pbVar9 + 1;
      uVar7 = (uint)*pbVar9 << (ulong)(uVar6 & 0x1f) | (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7
      ;
      uVar5 = uVar6 + 8;
      if ((uVar5 & 0xff) < 0x20) {
        if (pbVar10 != pbVar1) {
          pbVar10 = pbVar9 + 2;
          uVar7 = (uint)pbVar9[1] << (ulong)(uVar5 & 0x1f) |
                  (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
          uVar5 = uVar6 + 0x10;
          if (0x1f < (uVar5 & 0xff)) goto LAB_104596234;
          if (pbVar10 != pbVar1) {
            pbVar10 = pbVar9 + 3;
            uVar7 = (uint)pbVar9[2] << (ulong)(uVar5 & 0x1f) |
                    (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
            uVar5 = uVar6 + 0x18;
            if (0x1f < (uVar5 & 0xff)) goto LAB_104596234;
            if (pbVar10 != pbVar1) {
              pbVar10 = pbVar9 + 4;
              uVar7 = (uint)pbVar9[3] << (ulong)(uVar5 & 0x1f) |
                      (-0xff << (ulong)(uVar5 & 0x1f)) - 1U & uVar7;
              uVar5 = uVar6 + 0x20;
              if ((uVar6 & 0xff) < 0xe0) goto LAB_104596234;
              if (pbVar10 != pbVar1) {
                pbVar10 = pbVar9 + 5;
                uVar7 = (uint)pbVar9[4] << (ulong)(uVar6 & 0x1f) |
                        (-0xff << (ulong)(uVar6 & 0x1f)) - 1U & uVar7;
                uVar5 = uVar6 + 0x28;
                if (0x1f < (uVar5 & 0xff)) goto LAB_104596234;
              }
            }
          }
        }
        if ((uVar5 & 0xff) == 0) {
LAB_1045962b8:
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          return;
        }
      }
    }
LAB_104596234:
    if ((uVar7 & 0xc0e0) == 0x80c0) {
      if ((uVar7 & 0x1e) == 0) goto LAB_1045962e8;
      iVar8 = 0x10;
    }
    else if ((uVar7 & 0xc0c0f0) == 0x8080e0) {
      if (((uVar7 & 0x200f) == 0) || ((uVar7 & 0x200f) == 0x200d)) goto LAB_1045962e8;
      iVar8 = 0x18;
    }
    else {
      if ((((uVar7 & 0xc0c0c0f8) != 0x808080f0) || ((uVar7 & 0x3007) == 0)) ||
         (0x400 < ((uVar7 & 0x3007) >> 8 | (uVar7 & 7) << 8))) {
LAB_1045962e8:
        __ss7UnicodeO4UTF8O13ForwardParserV14_invalidLengths5UInt8VyF
                  (CONCAT44(uVar5,uVar7) & 0xffffffffff);
        return;
      }
      iVar8 = 0x20;
    }
    uStack_68 = uVar7 >> iVar8;
    uVar5 = uVar5 - iVar8;
  } while( true );
}



/* Entry: 104596308; end: 10459631b;  */

undefined8 FUN_104596308(void)

{
  return 0x104596318;
}



/* Entry: 10459631c; end: 10459635b;  */

void FUN_10459631c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113087510 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___ss7UnicodeO4UTF8O13ForwardParserVs10_UTFParsersMc_11034f0e0;
  _swift_getWitnessTable
            (PTR___ss7UnicodeO4UTF8O13ForwardParserVs10_UTFParsersMc_11034f0e0,
             PTR___ss7UnicodeO4UTF8O13ForwardParserVN_11034f0d8);
  puRam0000000113087510 = puVar1;
  return;
}



/* Entry: 10459635c; end: 1045963cb;  */

undefined * FUN_10459635c(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1045963cc);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_2,PTR___ss5UInt8VN_11034eef8);
    *(undefined **)(puVar2 + 0x10) = param_2;
    _memset(puVar2 + 0x20,param_1,param_2);
  }
  return puVar2;
}



/* Entry: 1045963cc; end: 104596423;  */

void FUN_1045963cc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10459635c();
  *param_1 = param_2;
  return;
}



/* Entry: 104596424; end: 104596467;  */

void FUN_104596424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  __sSa15withUnsafeBytesyqd__qd__SWKXEKlF
            (param_1,param_2,*unaff_x20,PTR___ss5UInt8VN_11034eef8,param_3);
  return;
}



/* Entry: 104596468; end: 1045964bf;  */

void FUN_104596468(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  lVar2 = param_3;
  FUN_104596654();
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  *param_1 = uVar1;
  param_1[1] = lVar2;
  return;
}



/* Entry: 1045964c0; end: 104596517;  */

ulong FUN_1045964c0(void)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (1 < uVar2 >> 0x1e) {
    if (uVar5 != 2) {
      return 0;
    }
    if (!SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
      return *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104596514);
    (*pcVar3)();
  }
  if (uVar5 == 0) {
    return (ulong)unaff_x20[1] >> 0x30 & 0xff;
  }
  iVar4 = (int)((ulong)lVar1 >> 0x20);
  if (!SBORROW4(iVar4,(int)lVar1)) {
    return (long)(iVar4 - (int)lVar1);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x104596518);
  (*pcVar3)();
}



/* Entry: 104596518; end: 104596557;  */

void FUN_104596518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  __s10Foundation4DataV15withUnsafeBytesyxxSWKXEKlF(param_1,param_2,*unaff_x20,unaff_x20[1],param_3)
  ;
  return;
}



/* Entry: 104596558; end: 104596653;  */

void FUN_104596558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar4 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar2,PTR___sSiN_11034deb0,0,0);
  iVar1 = *(int *)(lVar3 + 0x30);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_5);
  lVar3 = param_1;
  __sST13_copyContents12initializing8IteratorQz_SitSry7ElementQzG_tFTj
            (param_1,param_2,param_3,param_5,param_6);
  *(long *)(param_1 + iVar1) = lVar3;
  return;
}



/* Entry: 104596654; end: 104596adf;  */

undefined1  [16] FUN_104596654(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long alStack_f0 [2];
  ulong auStack_e0 [2];
  char acStack_d0 [2];
  undefined4 uStack_ce;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined1 auStack_c2 [2];
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined6 uStack_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  ushort uStack_82;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,PTR___sSiN_11034deb0,0,0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)auStack_e0 - extraout_x8;
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar16 - extraout_x8_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 - 8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar12,param_1,param_2);
  uVar6 = 0x112d3ae30;
  func_0x0001000285a8(0x112d3ae30,&UNK_10d904770);
  puVar7 = &uStack_c0;
  _swift_dynamicCast(puVar7,lVar12,param_2,uVar6,6);
  if (((ulong)puVar7 & 1) != 0) {
    func_0x000100e37768(&uStack_c0,&uStack_90);
    uVar6 = uStack_70;
    uVar8 = uStack_78;
    func_0x0001000a8868(&uStack_90,uStack_78);
    __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
              (&uStack_c0,&SUB_1004497b8,0,PTR___s10Foundation4DataV15_RepresentationON_110350a40,
               uVar8,uVar6);
    func_0x0001000834e4(&uStack_90);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
    goto LAB_104596a70;
  }
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  func_0x000100e376f4(&uStack_c0);
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (&uStack_90,&UNK_100e36614,0,PTR___s10Foundation4DataV15_RepresentationON_110350a40,
             param_2,param_3);
  auStack_e0[0] = CONCAT26(uStack_8a,uStack_90);
  uVar8 = CONCAT26(uStack_82,uStack_88);
  uVar13 = auStack_e0[0];
  if (uStack_82 >> 0xc < 0xf) goto LAB_104596a70;
  uVar13 = param_2;
  uVar11 = param_3;
  __sST19underestimatedCountSivgTj();
  func_0x000100e370d8();
  uStack_c0 = uVar13;
  uStack_b8 = uVar11;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_1;
  __s10Foundation4DataV15_RepresentationO22withUnsafeMutableBytesyxxSwKXEKlF
            (lVar16,FUN_104596ae0,&uStack_90,lVar5);
  uVar13 = *(ulong *)(lVar16 + *(int *)(lVar5 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar14,lVar16,lVar4);
  uVar1 = (uint)(uStack_b8 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = uStack_b8 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)(uStack_c0 >> 0x20);
      if (SBORROW4(iVar10,(int)uStack_c0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104596adc);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)uStack_c0);
    }
    if (uVar13 == uVar11) goto LAB_104596914;
LAB_1045968f0:
    if (uVar9 == 2) {
      uVar8 = *(ulong *)(uStack_c0 + 0x18);
    }
    else if (uVar9 == 1) {
      uVar8 = (long)uStack_c0 >> 0x20;
    }
    else {
      uVar8 = uStack_b8 >> 0x30 & 0xff;
    }
LAB_104596a48:
    if ((long)uVar8 < (long)uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104596ad4);
      (*pcVar3)();
    }
    __s10Foundation4DataV15_RepresentationO15replaceSubrange_4with5countySnySiG_SVSgSitF
              (uVar13,uVar8,0,0);
LAB_104596a60:
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
  }
  else {
    if (uVar9 == 2) {
      if (SBORROW8(*(long *)(uStack_c0 + 0x18),*(long *)(uStack_c0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x104596ad8);
        (*pcVar3)();
      }
      if (uVar13 != *(long *)(uStack_c0 + 0x18) - *(long *)(uStack_c0 + 0x10)) goto LAB_1045968f0;
    }
    else if (uVar13 != 0) {
      uVar8 = 0;
      goto LAB_104596a48;
    }
LAB_104596914:
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar4,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    uStack_90 = 0;
    uStack_8a = 0;
    uStack_88 = 0;
    __sSt4next7ElementQzSgyFTj(acStack_d0,lVar4,param_3);
    if (acStack_d0[1] != '\x01') {
      uVar13 = 0;
      do {
        *(char *)((long)&uStack_90 + (uVar13 & 0xff)) = acStack_d0[0];
        uVar1 = ((uint)uVar13 & 0xff) + 1;
        uVar13 = (ulong)uVar1;
        if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x104596ad0);
          (*pcVar3)();
        }
        if ((uVar1 & 0xff) == 0xe) {
          acStack_d0[0] = (char)uStack_90;
          acStack_d0[1] = (char)((uint6)uStack_90 >> 8);
          uStack_ce = (undefined4)((uint6)uStack_90 >> 0x10);
          uStack_ca = uStack_8a;
          uStack_c8 = uStack_88;
          __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF(acStack_d0,auStack_c2);
          uVar13 = 0;
        }
        __sSt4next7ElementQzSgyFTj(acStack_d0,lVar4,param_3);
      } while (acStack_d0[1] != '\x01');
      if ((uVar13 & 0xff) != 0) {
        acStack_d0[0] = (char)uStack_90;
        acStack_d0[1] = (char)((uint6)uStack_90 >> 8);
        uStack_ce = (undefined4)((uint6)uStack_90 >> 0x10);
        uStack_ca = uStack_8a;
        uStack_c8 = uStack_88;
        __s10Foundation4DataV15_RepresentationO6append10contentsOfySW_tF
                  (acStack_d0,acStack_d0 + (uVar13 & 0xff));
        func_0x000100e37754(auStack_e0[0],uVar8);
        goto LAB_104596a60;
      }
    }
    (**(code **)(lVar15 + 8))(lVar14,lVar4);
    func_0x000100e37754(auStack_e0[0],uVar8);
    uVar13 = uStack_c0;
    uVar8 = uStack_b8;
  }
LAB_104596a70:
  uStack_b8 = uVar8;
  uStack_c0 = uVar13;
  uVar13 = uStack_b8;
  uVar8 = uStack_c0;
  auVar2._8_8_ = uStack_b8;
  auVar2._0_8_ = uStack_c0;
  func_0x00010006c00c(uStack_c0,uStack_b8);
  func_0x00010006c090(uVar8,uVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return auVar2;
  }
  ___stack_chk_fail();
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_104596ae0;
  func_0x000104596534();
  auVar17._8_8_ = uVar13;
  auVar17._0_8_ = uVar8;
  return auVar17;
}



/* Entry: 104596ae0; end: 104596afb;  */

void FUN_104596ae0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000104596534(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104596afc; end: 104596ec3;  */

long FUN_104596afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104597744();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 3;
  *(undefined8 *)(lVar1 + 0x18) = 0xd000000000000049;
  *(undefined8 *)(lVar1 + 0x20) = 0x800000010f207b70;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 104596ec4; end: 104596ecb;  */

long FUN_104596ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104597744();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0xd00000000000003c;
  *(undefined8 *)(lVar1 + 0x20) = 0x800000010f207ca0;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 104596ecc; end: 104596f6b;  */

long FUN_104596ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_104597744();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x18) = 0xd000000000000093;
  *(undefined8 *)(lVar1 + 0x20) = 0x800000010f207da0;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  *(undefined8 *)(lVar1 + 0x48) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  return lVar1;
}



/* Entry: 104596f6c; end: 104596fab;  */

void FUN_104596f6c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104596fac; end: 104596fb3;  */

undefined1 FUN_104596fac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 104596fb4; end: 10459707b;  */

void FUN_104596fb4(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  
  uVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar11 = *unaff_x20;
  uVar9 = uVar11;
  if ((uVar8 & 1) == 0) {
    uVar7 = *(undefined1 *)(uVar11 + 0x10);
    uVar1 = *(undefined8 *)(uVar11 + 0x18);
    uVar4 = *(undefined8 *)(uVar11 + 0x20);
    uVar2 = *(undefined8 *)(uVar11 + 0x28);
    uVar5 = *(undefined8 *)(uVar11 + 0x30);
    uVar3 = *(undefined8 *)(uVar11 + 0x38);
    uVar6 = *(undefined8 *)(uVar11 + 0x40);
    uVar10 = *(undefined8 *)(uVar11 + 0x48);
    uVar9 = 0;
    FUN_104597744();
    _swift_allocObject();
    *(undefined1 *)(uVar9 + 0x10) = uVar7;
    *(undefined8 *)(uVar9 + 0x18) = uVar1;
    *(undefined8 *)(uVar9 + 0x20) = uVar4;
    *(undefined8 *)(uVar9 + 0x28) = uVar2;
    *(undefined8 *)(uVar9 + 0x30) = uVar5;
    *(undefined8 *)(uVar9 + 0x38) = uVar3;
    *(undefined8 *)(uVar9 + 0x40) = uVar6;
    *(undefined8 *)(uVar9 + 0x48) = uVar10;
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_release(uVar11);
    *unaff_x20 = uVar9;
  }
  *(undefined1 *)(uVar9 + 0x10) = param_1;
  return;
}



/* Entry: 10459707c; end: 10459709b;  */

code * FUN_10459707c(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(*unaff_x20 + 0x10);
  return FUN_10459709c;
}



/* Entry: 10459709c; end: 104597177;  */

void FUN_10459709c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar12 = (ulong *)*param_1;
  uVar7 = *(undefined1 *)(param_1 + 1);
  if ((param_2 & 1) == 0) {
    uVar9 = *puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar13 = *puVar12;
    uVar10 = uVar13;
    if ((uVar9 & 1) == 0) {
      uVar8 = *(undefined1 *)(uVar13 + 0x10);
      uVar1 = *(undefined8 *)(uVar13 + 0x18);
      uVar4 = *(undefined8 *)(uVar13 + 0x20);
      uVar2 = *(undefined8 *)(uVar13 + 0x28);
      uVar5 = *(undefined8 *)(uVar13 + 0x30);
      uVar3 = *(undefined8 *)(uVar13 + 0x38);
      uVar6 = *(undefined8 *)(uVar13 + 0x40);
      uVar11 = *(undefined8 *)(uVar13 + 0x48);
      uVar10 = 0;
      FUN_104597744();
      _swift_allocObject();
      *(undefined1 *)(uVar10 + 0x10) = uVar8;
      *(undefined8 *)(uVar10 + 0x18) = uVar1;
      *(undefined8 *)(uVar10 + 0x20) = uVar4;
      *(undefined8 *)(uVar10 + 0x28) = uVar2;
      *(undefined8 *)(uVar10 + 0x30) = uVar5;
      *(undefined8 *)(uVar10 + 0x38) = uVar3;
      *(undefined8 *)(uVar10 + 0x40) = uVar6;
      *(undefined8 *)(uVar10 + 0x48) = uVar11;
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_release(uVar13);
      *puVar12 = uVar10;
    }
    *(undefined1 *)(uVar10 + 0x10) = uVar7;
  }
  else {
    FUN_104596fb4(uVar7);
  }
  return;
}



/* Entry: 104597178; end: 1045971a3;  */

undefined1  [16] FUN_104597178(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x20));
  return auVar1;
}



/* Entry: 1045971a4; end: 104597283;  */

void FUN_1045971a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  
  iVar7 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar10 = *unaff_x20;
  if (iVar7 == 0) {
    uVar6 = *(undefined1 *)(lVar10 + 0x10);
    uVar1 = *(undefined8 *)(lVar10 + 0x18);
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar4 = *(undefined8 *)(lVar10 + 0x30);
    uVar3 = *(undefined8 *)(lVar10 + 0x38);
    uVar5 = *(undefined8 *)(lVar10 + 0x40);
    uVar9 = *(undefined8 *)(lVar10 + 0x48);
    lVar8 = 0;
    FUN_104597744();
    _swift_allocObject();
    *(undefined1 *)(lVar8 + 0x10) = uVar6;
    *(undefined8 *)(lVar8 + 0x18) = uVar1;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    *(undefined8 *)(lVar8 + 0x28) = uVar2;
    *(undefined8 *)(lVar8 + 0x30) = uVar4;
    *(undefined8 *)(lVar8 + 0x38) = uVar3;
    *(undefined8 *)(lVar8 + 0x40) = uVar5;
    *(undefined8 *)(lVar8 + 0x48) = uVar9;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_release(lVar10);
    *unaff_x20 = lVar8;
  }
  else {
    uVar11 = *(undefined8 *)(lVar10 + 0x20);
    lVar8 = lVar10;
  }
  *(undefined8 *)(lVar8 + 0x18) = param_1;
  *(undefined8 *)(lVar8 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar11);
  return;
}



/* Entry: 104597284; end: 1045972c3;  */

undefined1  [16] FUN_104597284(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x18);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1045972c4;
  return auVar2;
}



/* Entry: 1045972c4; end: 1045973c3;  */

void FUN_1045972c4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  plVar12 = (long *)param_1[2];
  if ((param_2 & 1) == 0) {
    iVar9 = (int)*plVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar13 = *plVar12;
    if (iVar9 == 0) {
      uVar8 = *(undefined1 *)(lVar13 + 0x10);
      uVar2 = *(undefined8 *)(lVar13 + 0x18);
      uVar14 = *(undefined8 *)(lVar13 + 0x20);
      uVar3 = *(undefined8 *)(lVar13 + 0x28);
      uVar6 = *(undefined8 *)(lVar13 + 0x30);
      uVar4 = *(undefined8 *)(lVar13 + 0x38);
      uVar7 = *(undefined8 *)(lVar13 + 0x40);
      uVar11 = *(undefined8 *)(lVar13 + 0x48);
      lVar10 = 0;
      FUN_104597744();
      _swift_allocObject();
      *(undefined1 *)(lVar10 + 0x10) = uVar8;
      *(undefined8 *)(lVar10 + 0x18) = uVar2;
      *(undefined8 *)(lVar10 + 0x20) = uVar14;
      *(undefined8 *)(lVar10 + 0x28) = uVar3;
      *(undefined8 *)(lVar10 + 0x30) = uVar6;
      *(undefined8 *)(lVar10 + 0x38) = uVar4;
      *(undefined8 *)(lVar10 + 0x40) = uVar7;
      *(undefined8 *)(lVar10 + 0x48) = uVar11;
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_release(lVar13);
      *plVar12 = lVar10;
    }
    else {
      uVar14 = *(undefined8 *)(lVar13 + 0x20);
      lVar10 = lVar13;
    }
    *(undefined8 *)(lVar10 + 0x18) = uVar1;
    *(undefined8 *)(lVar10 + 0x20) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    FUN_1045971a4(uVar1,uVar5);
    uVar14 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar14);
  return;
}



/* Entry: 1045973c4; end: 104597423;  */

void FUN_1045973c4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_104597744();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  uVar2 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(lVar1 + 0x30) = param_4[1];
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = param_4[4];
  return;
}



/* Entry: 104597424; end: 104597533;  */

void FUN_104597424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104597534; end: 10459761f;  */

void FUN_104597534(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 104597620; end: 104597627;  */

undefined1  [16] FUN_104597620(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar3 = *unaff_x20;
  pcVar2 = "JSON encoding error";
  if (bVar3 != 2) {
    pcVar2 = "ssage+TextFormatAdditions.swift";
  }
  pcVar1 = "Stream decoding error";
  if (bVar3 != 0) {
    pcVar1 = "JSON decoding error";
  }
  uVar4 = 0xd000000000000013;
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar4 = 0xd000000000000015;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 104597628; end: 104597653;  */

undefined1  [16] FUN_104597628(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104597654; end: 104597687;  */

void FUN_104597654(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104597688; end: 10459769b;  */

undefined8 FUN_104597688(void)

{
  return 0x104597698;
}



/* Entry: 10459769c; end: 1045976c7;  */

undefined1  [16] FUN_10459769c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1045976c8; end: 1045976fb;  */

void FUN_1045976c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045976fc; end: 104597743;  */

undefined1  [16] FUN_1045976fc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10459770c;
  return auVar1;
}



/* Entry: 104597744; end: 104597763;  */

void FUN_104597744(void)

{
  _objc_opt_self(&PTR_PTR_113087568);
  return;
}


