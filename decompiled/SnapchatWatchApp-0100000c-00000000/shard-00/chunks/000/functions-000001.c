/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10000f190; end: 10000f1c7;  */

void FUN_10000f190(void)

{
  long in_x3;
  undefined8 in_x4;
  
  if (in_x3 != 0) {
    FUN_10000c75c();
    _swift_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(in_x3);
    return;
  }
  return;
}



/* Entry: 10000f1c8; end: 10000f20f;  */

undefined8 FUN_10000f1c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_10000c3c0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10000f210; end: 10000f24f;  */

void FUN_10000f210(void)

{
  undefined *puVar1;
  
  if (puRam000000010002d9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000219e4;
  _swift_getWitnessTable(&UNK_1000219e4,&UNK_100028f48);
  puRam000000010002d9a8 = puVar1;
  return;
}



/* Entry: 10000f250; end: 10000f28f;  */

undefined8 FUN_10000f250(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10000f290; end: 10000f2d3;  */

void FUN_10000f290(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10000c888(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10000f2d4; end: 10000f317;  */

void FUN_10000f2d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002da18 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI25CircularProgressViewStyleVMa(0xff);
  puVar2 = PTR___s7SwiftUI25CircularProgressViewStyleVAA0deF0AAMc_1000284e0;
  _swift_getWitnessTable(PTR___s7SwiftUI25CircularProgressViewStyleVAA0deF0AAMc_1000284e0,uVar1);
  puRam000000010002da18 = puVar2;
  return;
}



/* Entry: 10000f318; end: 10000f367;  */

undefined8 FUN_10000f318(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002d990;
  FUN_10000c3c0(0x10002d990,&UNK_1000218e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000f368; end: 10000f3a7;  */

undefined8 FUN_10000f368(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10000f3a8; end: 10000f3fb;  */

void FUN_10000f3a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x10002d928;
  FUN_10000c888(0x10002d928,&UNK_100021828);
  uVar2 = uVar1;
  FUN_10000ef60();
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  _swift_getOpaqueTypeConformance
            (&uStack_30,PTR___s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctFQOMQ_1000285f0
             ,1);
  return;
}



/* Entry: 10000f3fc; end: 10000f3ff;  */

undefined8 * FUN_10000f3fc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10000f400; end: 10000f427;  */

void FUN_10000f400(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(param_1[2]);
  return;
}



/* Entry: 10000f428; end: 10000f463;  */

undefined8 * FUN_10000f428(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10000f464; end: 10000f4c7;  */

undefined8 * FUN_10000f464(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10000f4c8; end: 10000f4db;  */

void FUN_10000f4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10000f4dc; end: 10000f51f;  */

undefined8 * FUN_10000f4dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10000f520; end: 10000f567;  */

int FUN_10000f520(ulong *param_1,int param_2)

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



/* Entry: 10000f568; end: 10000f5a7;  */

void FUN_10000f568(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10000f5a8; end: 10000f5b7;  */

undefined1  [16] FUN_10000f5a8(void)

{
  return ZEXT816(0x100028df0);
}



/* Entry: 10000f5b8; end: 10000f5c7;  */

void FUN_10000f5b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022f34,1);
  return;
}



/* Entry: 10000f5c8; end: 10000f76b;  */

void FUN_10000f5c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_58;
  undefined8 *puVar11;
  
  uVar4 = param_2;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = uVar4;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar5 = 0x10002da40;
  FUN_10000c3c0(0x10002da40,&UNK_1000219a8);
  iVar2 = *(int *)(lVar5 + 0x2c);
  puVar6 = &UNK_100028e18;
  uStack_58 = param_2;
  _swift_allocObject(&UNK_100028e18,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  _swift_bridgeObjectRetain_n(param_2,2);
  _swift_bridgeObjectRetain(param_4);
  uVar4 = 0x10002da48;
  FUN_10000c3c0(0x10002da48,&UNK_1000219b0);
  uVar7 = 0;
  FUN_10000de44(0);
  uVar8 = 0x10002da50;
  FUN_1000101dc(0x10002da50,0x10002da48,&UNK_1000219b0,PTR___sSayxGSksMc_100028808);
  uVar9 = 0x10002da58;
  FUN_10000fce0(0x10002da58,FUN_10000de44,&UNK_1000217d8);
  uVar10 = 0x10002da60;
  FUN_10000fce0(0x10002da60,FUN_10001a194,&UNK_100022248);
  puVar11 = &uStack_58;
  __s7SwiftUI7ForEachVAA7Element_2IDQZRs_AA4ViewR0_s12IdentifiableADRpzrlE_7contentACyxq_q0_Gx_q0_AIctcfC
            ((long)param_1 + (long)iVar2,puVar11,FUN_10000fcd4,puVar6,uVar4,PTR___sSSN_1000287b8,
             uVar7,uVar8,uVar9,uVar10);
  uVar3 = SUB81(puVar11,0);
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar5 = 0x10002da20;
  FUN_10000c3c0(0x10002da20,&UNK_100021998);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x28] = 1;
  return;
}



/* Entry: 10000f76c; end: 10000f89f;  */

void FUN_10000f76c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar3 = 0;
  FUN_10001a194();
  lVar8 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  FUN_10000fd20(param_2,param_1);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar3 + 0x20));
  uVar6 = *puVar1;
  uVar2 = *(undefined1 *)(puVar1 + 1);
  FUN_10000fd20(param_2,&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &UNK_100028e40;
  _swift_allocObject(&UNK_100028e40,uVar9 + lVar7,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  FUN_10000fe28(&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar4 + uVar9);
  lVar3 = 0;
  FUN_10000de44();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  *puVar1 = uVar6;
  *(undefined1 *)(puVar1 + 1) = uVar2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x18));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x1c));
  *puVar1 = FUN_10000fe6c;
  puVar1[1] = puVar4;
  _swift_bridgeObjectRetain_n(param_5,2);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Entry: 10000f8a0; end: 10000fb0b;  */

/* WARNING: Removing unreachable block (ram,0x00010000f978) */

void FUN_10000f8a0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_10000c410(param_1 + 0x20,&uStack_80);
    puVar4 = PTR___sypN_1000289c0;
    puVar3 = PTR___sSSN_1000287b8;
    puVar5 = &uStack_90;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_1000289c0 + 8,PTR___sSSN_1000287b8,6);
    if (((ulong)puVar5 & 1) != 0) {
      uVar1 = uStack_90 & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar1 = uStack_88 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(uStack_88);
      }
      else {
        uVar11 = *param_2;
        uVar2 = param_2[1];
        __s10Foundation11JSONEncoderCMa();
        _swift_allocObject();
        uVar6 = uVar2;
        _swift_bridgeObjectRetain(uVar2);
        __s10Foundation11JSONEncoderCACycfc();
        uStack_80 = uStack_90;
        uStack_78 = uStack_88;
        uVar7 = uVar6;
        uStack_70 = uVar11;
        uStack_68 = uVar2;
        FUN_1000100e8();
        puVar13 = &UNK_1000297f8;
        puVar5 = &uStack_80;
        __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar5,&UNK_1000297f8,uVar7);
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(uStack_88);
        _swift_release(uVar6);
        puVar8 = (undefined8 *)0x10002da70;
        FUN_10000c3c0(0x10002da70,&UNK_1000219b8);
        _swift_initStackObject();
        puVar8[3] = 4;
        puVar8[2] = 2;
        puVar9 = puVar8;
        FUN_10001a118();
        puVar10 = (undefined8 *)puVar9[1];
        puVar8[4] = *puVar9;
        puVar8[5] = puVar10;
        _swift_bridgeObjectRetain();
        FUN_10001a15c();
        uVar11 = *puVar10;
        puVar10 = (undefined8 *)puVar10[1];
        puVar8[9] = puVar3;
        puVar8[6] = uVar11;
        puVar8[7] = puVar10;
        _swift_bridgeObjectRetain();
        FUN_10001a124();
        uVar11 = puVar10[1];
        puVar8[10] = *puVar10;
        puVar8[0xb] = uVar11;
        puVar8[0xf] = PTR___s10Foundation4DataVN_100028100;
        puVar8[0xc] = puVar5;
        puVar8[0xd] = puVar13;
        _swift_bridgeObjectRetain();
        FUN_100010128(puVar5,puVar13);
        puVar10 = puVar8;
        FUN_1000164d8(puVar8);
        _swift_setDeallocating(puVar8);
        uVar11 = 0x10002da78;
        FUN_10000c3c0(0x10002da78,&UNK_1000219c0);
        _swift_arrayDestroy(puVar8 + 4,2,uVar11);
        puVar12 = PTR__OBJC_CLASS___WCSession_100028718;
        _objc_opt_self(PTR__OBJC_CLASS___WCSession_100028718);
        func_0x000100020be0();
        _objc_retainAutoreleasedReturnValue();
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar10,puVar3,puVar4 + 8,PTR___sSSSHsWP_1000287c0);
        _swift_bridgeObjectRelease(puVar10);
        func_0x000100020d60(puVar12);
        _objc_release_x22();
        _objc_release_x19();
        FUN_100010168(puVar5,puVar13);
      }
    }
  }
  return;
}



/* Entry: 10000fb0c; end: 10000fb73;  */

void FUN_10000fb0c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_2,PTR___sypN_1000289c0 + 8);
  }
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(param_2);
  return;
}



/* Entry: 10000fb74; end: 10000fb77;  */

void FUN_10000fb74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 10000fb78; end: 10000fb7b;  */

void FUN_10000fb78(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 10000fb7c; end: 10000fb7f;  */

void FUN_10000fb7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 10000fb80; end: 10000fc03;  */

void FUN_10000fb80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_40 = unaff_x20[2];
  __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar1 = 0x10002da20;
  FUN_10000c3c0(0x10002da20,&UNK_100021998);
  uVar2 = uVar1;
  FUN_10000fc10();
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (param_1,param_2,1,FUN_10000fc04,auStack_60,uVar1,uVar2);
  return;
}



/* Entry: 10000fc04; end: 10000fc0f;  */

void FUN_10000fc04(undefined8 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 *puVar10;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = uVar7;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = uVar4;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar5 = 0x10002da40;
  FUN_10000c3c0(0x10002da40,&UNK_1000219a8);
  iVar2 = *(int *)(lVar5 + 0x2c);
  puVar6 = &UNK_100028e18;
  uStack_58 = uVar7;
  _swift_allocObject(&UNK_100028e18,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x18) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  _swift_bridgeObjectRetain_n(uVar7,2);
  _swift_bridgeObjectRetain(uVar11);
  uVar7 = 0x10002da48;
  FUN_10000c3c0(0x10002da48,&UNK_1000219b0);
  uVar8 = 0;
  FUN_10000de44(0);
  uVar9 = 0x10002da50;
  FUN_1000101dc(0x10002da50,0x10002da48,&UNK_1000219b0,PTR___sSayxGSksMc_100028808);
  uVar4 = 0x10002da58;
  FUN_10000fce0(0x10002da58,FUN_10000de44,&UNK_1000217d8);
  uVar11 = 0x10002da60;
  FUN_10000fce0(0x10002da60,FUN_10001a194,&UNK_100022248);
  puVar10 = &uStack_58;
  __s7SwiftUI7ForEachVAA7Element_2IDQZRs_AA4ViewR0_s12IdentifiableADRpzrlE_7contentACyxq_q0_Gx_q0_AIctcfC
            ((long)param_1 + (long)iVar2,puVar10,FUN_10000fcd4,puVar6,uVar7,PTR___sSSN_1000287b8,
             uVar8,uVar9,uVar4,uVar11);
  uVar3 = SUB81(puVar10,0);
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lVar5 = 0x10002da20;
  FUN_10000c3c0(0x10002da20,&UNK_100021998);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x28] = 1;
  return;
}



/* Entry: 10000fc10; end: 10000fca7;  */

void FUN_10000fc10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam000000010002da28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002da20;
  FUN_10000c888(0x10002da20,&UNK_100021998);
  uVar2 = 0x10002da30;
  FUN_1000101dc(0x10002da30,0x10002da38,&UNK_1000219a0,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000286b8);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000283b8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002da28 = puVar3;
  return;
}



/* Entry: 10000fca8; end: 10000fcd3;  */

void FUN_10000fca8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 10000fcd4; end: 10000fcdf;  */

void FUN_10000fcd4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = 0;
  FUN_10001a194();
  lVar11 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  FUN_10000fd20(param_2,param_1);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar5 + 0x20));
  uVar9 = *puVar1;
  uVar4 = *(undefined1 *)(puVar1 + 1);
  FUN_10000fd20(param_2,&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0));
  uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  puVar6 = &UNK_100028e40;
  _swift_allocObject(&UNK_100028e40,uVar12 + lVar10,uVar8 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  FUN_10000fe28(&stack0xffffffffffffffa0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar12);
  lVar5 = 0;
  FUN_10000de44();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x14));
  *puVar1 = uVar9;
  *(undefined1 *)(puVar1 + 1) = uVar4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x18));
  *puVar1 = uVar3;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x1c));
  *puVar1 = FUN_10000fe6c;
  puVar1[1] = puVar6;
  _swift_bridgeObjectRetain_n(uVar7,2);
  _swift_bridgeObjectRetain(uVar2);
  return;
}



/* Entry: 10000fce0; end: 10000fd1f;  */

void FUN_10000fce0(long *param_1,code *param_2,long param_3)

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



/* Entry: 10000fd20; end: 10000fd63;  */

undefined8 FUN_10000fd20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001a194();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000fd64; end: 10000fe27;  */

void FUN_10000fd64(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar3 = 0;
  FUN_10001a194();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = lVar1 + iVar2;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(lVar1 + iVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 10000fe28; end: 10000fe6b;  */

undefined8 FUN_10000fe28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10001a194();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10000fe6c; end: 10000fe97;  */

void FUN_10000fe6c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = 0;
  FUN_10001a194();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = 0;
  FUN_10001a194();
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar1 = (long)&puStack_70 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___WKApplication_100028720;
  _objc_opt_self();
  func_0x000100020da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  if (puVar2 != (undefined *)0x0) {
    FUN_10000fd20(unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),lVar1);
    uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_100028e68;
    _swift_allocObject(&UNK_100028e68,uVar7 + lVar6,uVar5 | 7);
    FUN_10000fe28(lVar1,puVar3 + uVar7);
    pcStack_50 = FUN_100010090;
    puStack_70 = PTR___NSConcreteStackBlock_100028278;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10000fb0c;
    puStack_58 = &UNK_100028e80;
    ppuVar4 = &puStack_70;
    puStack_48 = puVar3;
    __Block_copy(ppuVar4);
    _swift_release(puStack_48);
    func_0x000100020ca0(puVar2);
    __Block_release(ppuVar4);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10000fe98; end: 10000ffdb;  */

void FUN_10000fe98(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = 0;
  FUN_10001a194();
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100028280)();
  lVar1 = (long)&puStack_70 - (lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___WKApplication_100028720;
  _objc_opt_self();
  func_0x000100020da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  if (puVar2 != (undefined *)0x0) {
    FUN_10000fd20(param_1,lVar1);
    uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar7 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_100028e68;
    _swift_allocObject(&UNK_100028e68,uVar7 + lVar6,uVar5 | 7);
    FUN_10000fe28(lVar1,puVar3 + uVar7);
    pcStack_50 = FUN_100010090;
    puStack_70 = PTR___NSConcreteStackBlock_100028278;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_10000fb0c;
    puStack_58 = &UNK_100028e80;
    ppuVar4 = &puStack_70;
    puStack_48 = puVar3;
    __Block_copy(ppuVar4);
    _swift_release(puStack_48);
    func_0x000100020ca0(puVar2);
    __Block_release(ppuVar4);
    _objc_release_x19();
  }
  return;
}



/* Entry: 10000ffdc; end: 10001008f;  */

void FUN_10000ffdc(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar3 = 0;
  FUN_10001a194();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = lVar1 + iVar2;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar4);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(lVar1 + iVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100010090; end: 1000100cb;  */

/* WARNING: Removing unreachable block (ram,0x00010000f978) */

void FUN_100010090(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = 0;
  FUN_10001a194();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar12 + -8) + 0x50);
  puVar7 = (undefined8 *)(unaff_x20 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_10000c410(param_1 + 0x20,&uStack_80);
    puVar3 = PTR___sypN_1000289c0;
    puVar2 = PTR___sSSN_1000287b8;
    puVar4 = &uStack_90;
    _swift_dynamicCast(puVar4,&uStack_80,PTR___sypN_1000289c0 + 8,PTR___sSSN_1000287b8,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar14 = uStack_90 & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar14 = uStack_88 >> 0x38 & 0xf;
      }
      if (uVar14 == 0) {
        _swift_bridgeObjectRelease(uStack_88);
      }
      else {
        uVar10 = *puVar7;
        uVar1 = puVar7[1];
        __s10Foundation11JSONEncoderCMa();
        _swift_allocObject();
        uVar5 = uVar1;
        _swift_bridgeObjectRetain(uVar1);
        __s10Foundation11JSONEncoderCACycfc();
        uStack_80 = uStack_90;
        uStack_78 = uStack_88;
        uVar6 = uVar5;
        uStack_70 = uVar10;
        uStack_68 = uVar1;
        FUN_1000100e8();
        puVar13 = &UNK_1000297f8;
        puVar4 = &uStack_80;
        __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar4,&UNK_1000297f8,uVar6);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uStack_88);
        _swift_release(uVar5);
        puVar7 = (undefined8 *)0x10002da70;
        FUN_10000c3c0(0x10002da70,&UNK_1000219b8);
        _swift_initStackObject();
        puVar7[3] = 4;
        puVar7[2] = 2;
        puVar8 = puVar7;
        FUN_10001a118();
        puVar9 = (undefined8 *)puVar8[1];
        puVar7[4] = *puVar8;
        puVar7[5] = puVar9;
        _swift_bridgeObjectRetain();
        FUN_10001a15c();
        uVar10 = *puVar9;
        puVar9 = (undefined8 *)puVar9[1];
        puVar7[9] = puVar2;
        puVar7[6] = uVar10;
        puVar7[7] = puVar9;
        _swift_bridgeObjectRetain();
        FUN_10001a124();
        uVar10 = puVar9[1];
        puVar7[10] = *puVar9;
        puVar7[0xb] = uVar10;
        puVar7[0xf] = PTR___s10Foundation4DataVN_100028100;
        puVar7[0xc] = puVar4;
        puVar7[0xd] = puVar13;
        _swift_bridgeObjectRetain();
        FUN_100010128(puVar4,puVar13);
        puVar9 = puVar7;
        FUN_1000164d8(puVar7);
        _swift_setDeallocating(puVar7);
        uVar10 = 0x10002da78;
        FUN_10000c3c0(0x10002da78,&UNK_1000219c0);
        _swift_arrayDestroy(puVar7 + 4,2,uVar10);
        puVar11 = PTR__OBJC_CLASS___WCSession_100028718;
        _objc_opt_self(PTR__OBJC_CLASS___WCSession_100028718);
        func_0x000100020be0();
        _objc_retainAutoreleasedReturnValue();
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (puVar9,puVar2,puVar3 + 8,PTR___sSSSHsWP_1000287c0);
        _swift_bridgeObjectRelease(puVar9);
        func_0x000100020d60(puVar11);
        _objc_release_x22();
        _objc_release_x19();
        FUN_100010168(puVar4,puVar13);
      }
    }
  }
  return;
}



/* Entry: 1000100cc; end: 1000100df;  */

void FUN_1000100cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100028ae8)(uVar1);
  return;
}



/* Entry: 1000100e0; end: 1000100e7;  */

void FUN_1000100e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000100e8; end: 100010127;  */

void FUN_1000100e8(void)

{
  undefined *puVar1;
  
  if (puRam000000010002da68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000224b0;
  _swift_getWitnessTable(&UNK_1000224b0,&UNK_1000297f8);
  puRam000000010002da68 = puVar1;
  return;
}



/* Entry: 100010128; end: 100010167;  */

void FUN_100010128(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
                    /* WARNING: Could not recover jumptable at 0x000100020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100028ae8)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 100010168; end: 1000101a7;  */

void FUN_100010168(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release();
  }
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1000101a8; end: 1000101db;  */

void FUN_1000101a8(void)

{
  FUN_1000101dc(0x10002da80,0x10002da88,&UNK_1000219c8,
                PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_100028318);
  return;
}



/* Entry: 1000101dc; end: 10001021f;  */

void FUN_1000101dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10000c888(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100010220; end: 100010223;  */

undefined8 * FUN_100010220(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100010224; end: 100010227;  */

undefined8 * FUN_100010224(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100010228; end: 100010253;  */

long FUN_100010228(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100010254; end: 10001027b;  */

void FUN_100010254(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10001027c; end: 1000102b7;  */

undefined8 * FUN_10001027c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 1000102b8; end: 100010323;  */

undefined8 * FUN_1000102b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100010324; end: 10001032f;  */

void FUN_100010324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Entry: 100010330; end: 100010373;  */

undefined8 * FUN_100010330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100010374; end: 1000103bb;  */

int FUN_100010374(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000103bc; end: 1000103fb;  */

void FUN_1000103bc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1000103fc; end: 10001040b;  */

undefined1  [16] FUN_1000103fc(void)

{
  return ZEXT816(0x100028f48);
}



/* Entry: 10001040c; end: 10001041b;  */

void FUN_10001040c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022f78,1);
  return;
}



/* Entry: 10001041c; end: 10001066f;  */

void FUN_10001041c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_2b0 [112];
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined1 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_100016a6c();
  uStack_e0 = param_2;
  puStack_d8 = (undefined8 *)param_3;
  FUN_10000c71c();
  puVar1 = &uStack_e0;
  puVar7 = PTR___sSSN_1000287b8;
  __s7SwiftUI4TextVyACxcSyRzlufC(puVar1,PTR___sSSN_1000287b8,param_2);
  puVar2 = puVar1;
  __s7SwiftUI4FontV8headlineACvgZ();
  puVar3 = puVar2;
  puVar8 = puVar1;
  puVar10 = puVar7;
  uVar5 = param_2;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(puVar2);
  FUN_10000c75c(puVar1,puVar7,param_2);
  _swift_bridgeObjectRelease();
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar4 = param_5;
  puVar2 = puVar3;
  puVar1 = puVar8;
  puVar7 = puVar10;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  _swift_release(param_5);
  FUN_10000c75c(puVar3,puVar8,puVar10);
  _swift_bridgeObjectRelease(uVar5);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar6 = 0x4046000000000000;
  uVar9 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_150,0x4046000000000000,0,0x4046000000000000,0,uVar5,puVar8);
  __s7SwiftUI5ColorV4grayACvgZ();
  uVar5 = uVar6;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_1e0 = SUB81(puVar1,0);
  uStack_1c8 = puStack_148;
  uStack_1d0 = uStack_150;
  uStack_1b8 = puStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_218 = puStack_148;
  uStack_220 = uStack_150;
  uStack_208 = puStack_138;
  uStack_210 = uStack_140;
  uStack_1f8 = uStack_128;
  uStack_200 = uStack_130;
  uStack_230 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_168 = puStack_138;
  uStack_170 = uStack_140;
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  uStack_178 = puStack_148;
  uStack_180 = uStack_150;
  uStack_240 = uVar4;
  puStack_238 = puVar2;
  puStack_228 = puVar7;
  uStack_1f0 = uVar4;
  puStack_1e8 = puVar2;
  puStack_1d8 = puVar7;
  uStack_1a0 = uVar4;
  puStack_198 = puVar2;
  uStack_190 = uStack_1e0;
  puStack_188 = puVar7;
  FUN_100010688(&uStack_1f0,&uStack_e0,0x10002da90,&UNK_100021a38);
  FUN_1000106d0(&uStack_1a0,0x10002da90,&UNK_100021a38);
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  puStack_148 = puStack_238;
  uStack_150 = uStack_240;
  puStack_138 = puStack_228;
  uStack_140 = uStack_230;
  uStack_f8 = 0x100;
  uStack_a8 = uStack_208;
  uStack_b0 = uStack_210;
  uStack_98 = uStack_1f8;
  uStack_a0 = uStack_200;
  puStack_d8 = puStack_238;
  uStack_e0 = uStack_240;
  puStack_c8 = puStack_228;
  uStack_d0 = uStack_230;
  uStack_b8 = uStack_218;
  uStack_c0 = uStack_220;
  uStack_88 = 0x100;
  uStack_100 = uVar6;
  uStack_f0 = uVar5;
  uStack_e8 = uVar9;
  uStack_90 = uVar6;
  uStack_80 = uVar5;
  uStack_78 = uVar9;
  FUN_100010688(&uStack_150,auStack_2b0,0x10002da98,&UNK_100021a40);
  FUN_1000106d0(&uStack_e0,0x10002da98,&UNK_100021a40);
  param_1[9] = uStack_108;
  param_1[8] = uStack_110;
  param_1[0xb] = CONCAT62(uStack_f6,uStack_f8);
  param_1[10] = uStack_100;
  param_1[0xd] = uStack_e8;
  param_1[0xc] = uStack_f0;
  param_1[1] = puStack_148;
  *param_1 = uStack_150;
  param_1[3] = puStack_138;
  param_1[2] = uStack_140;
  param_1[5] = uStack_128;
  param_1[4] = uStack_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  return;
}



/* Entry: 100010670; end: 100010673;  */

void FUN_100010670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 100010674; end: 100010677;  */

void FUN_100010674(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 100010678; end: 10001067b;  */

void FUN_100010678(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 10001067c; end: 100010687;  */

void FUN_10001067c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *unaff_x20;
  undefined1 auStack_2b0 [112];
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined1 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar6 = unaff_x20[3];
  FUN_100016a6c(uVar1,uVar5,unaff_x20[2]);
  uStack_e0 = uVar1;
  puStack_d8 = (undefined8 *)uVar5;
  FUN_10000c71c();
  puVar2 = &uStack_e0;
  puVar7 = PTR___sSSN_1000287b8;
  __s7SwiftUI4TextVyACxcSyRzlufC(puVar2,PTR___sSSN_1000287b8,uVar1);
  puVar3 = puVar2;
  __s7SwiftUI4FontV8headlineACvgZ();
  puVar4 = puVar3;
  puVar8 = puVar2;
  puVar10 = puVar7;
  uVar5 = uVar1;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(puVar3);
  FUN_10000c75c(puVar2,puVar7,uVar1);
  _swift_bridgeObjectRelease();
  __s7SwiftUI5ColorV5whiteACvgZ();
  uVar1 = uVar6;
  puVar3 = puVar4;
  puVar2 = puVar8;
  puVar7 = puVar10;
  __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF();
  _swift_release(uVar6);
  FUN_10000c75c(puVar4,puVar8,puVar10);
  _swift_bridgeObjectRelease(uVar5);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar6 = 0x4046000000000000;
  uVar9 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_150,0x4046000000000000,0,0x4046000000000000,0,uVar5,puVar8);
  __s7SwiftUI5ColorV4grayACvgZ();
  uVar5 = uVar6;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_1e0 = SUB81(puVar2,0);
  uStack_1c8 = puStack_148;
  uStack_1d0 = uStack_150;
  uStack_1b8 = puStack_138;
  uStack_1c0 = uStack_140;
  uStack_1a8 = uStack_128;
  uStack_1b0 = uStack_130;
  uStack_218 = puStack_148;
  uStack_220 = uStack_150;
  uStack_208 = puStack_138;
  uStack_210 = uStack_140;
  uStack_1f8 = uStack_128;
  uStack_200 = uStack_130;
  uStack_230 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_168 = puStack_138;
  uStack_170 = uStack_140;
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  uStack_178 = puStack_148;
  uStack_180 = uStack_150;
  uStack_240 = uVar1;
  puStack_238 = puVar3;
  puStack_228 = puVar7;
  uStack_1f0 = uVar1;
  puStack_1e8 = puVar3;
  puStack_1d8 = puVar7;
  uStack_1a0 = uVar1;
  puStack_198 = puVar3;
  uStack_190 = uStack_1e0;
  puStack_188 = puVar7;
  FUN_100010688(&uStack_1f0,&uStack_e0,0x10002da90,&UNK_100021a38);
  FUN_1000106d0(&uStack_1a0,0x10002da90,&UNK_100021a38);
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  uStack_108 = uStack_1f8;
  uStack_110 = uStack_200;
  puStack_148 = puStack_238;
  uStack_150 = uStack_240;
  puStack_138 = puStack_228;
  uStack_140 = uStack_230;
  uStack_f8 = 0x100;
  uStack_a8 = uStack_208;
  uStack_b0 = uStack_210;
  uStack_98 = uStack_1f8;
  uStack_a0 = uStack_200;
  puStack_d8 = puStack_238;
  uStack_e0 = uStack_240;
  puStack_c8 = puStack_228;
  uStack_d0 = uStack_230;
  uStack_b8 = uStack_218;
  uStack_c0 = uStack_220;
  uStack_88 = 0x100;
  uStack_100 = uVar6;
  uStack_f0 = uVar5;
  uStack_e8 = uVar9;
  uStack_90 = uVar6;
  uStack_80 = uVar5;
  uStack_78 = uVar9;
  FUN_100010688(&uStack_150,auStack_2b0,0x10002da98,&UNK_100021a40);
  FUN_1000106d0(&uStack_e0,0x10002da98,&UNK_100021a40);
  param_1[9] = uStack_108;
  param_1[8] = uStack_110;
  param_1[0xb] = CONCAT62(uStack_f6,uStack_f8);
  param_1[10] = uStack_100;
  param_1[0xd] = uStack_e8;
  param_1[0xc] = uStack_f0;
  param_1[1] = puStack_148;
  *param_1 = uStack_150;
  param_1[3] = puStack_138;
  param_1[2] = uStack_140;
  param_1[5] = uStack_128;
  param_1[4] = uStack_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  return;
}



/* Entry: 100010688; end: 1000106cf;  */

undefined8 FUN_100010688(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_10000c3c0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000106d0; end: 10001070f;  */

undefined8 FUN_1000106d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100010710; end: 100010713;  */

void FUN_100010710(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam000000010002daa0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002da98;
  FUN_10000c888(0x10002da98,&UNK_100021a40);
  uVar2 = uVar1;
  FUN_10001078c();
  uVar3 = uVar2;
  FUN_1000107fc();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002daa0 = puVar4;
  return;
}



/* Entry: 100010714; end: 10001078b;  */

void FUN_100010714(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam000000010002daa0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002da98;
  FUN_10000c888(0x10002da98,&UNK_100021a40);
  uVar2 = uVar1;
  FUN_10001078c();
  uVar3 = uVar2;
  FUN_1000107fc();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &uStack_30);
  puRam000000010002daa0 = puVar4;
  return;
}



/* Entry: 10001078c; end: 1000107fb;  */

void FUN_10001078c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam000000010002daa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002da90;
  FUN_10000c888(0x10002da90,&UNK_100021a38);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1000285a8;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_100028380;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000283d8,uVar1,
             &puStack_20);
  puRam000000010002daa8 = puVar2;
  return;
}



/* Entry: 1000107fc; end: 10001084b;  */

void FUN_1000107fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002dab0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002dab8;
  FUN_10000c888(0x10002dab8,&UNK_100021a48);
  puVar2 = PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000284a8;
  _swift_getWitnessTable(PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000284a8,uVar1);
  puRam000000010002dab0 = puVar2;
  return;
}



/* Entry: 10001084c; end: 100010877;  */

long FUN_10001084c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100010878; end: 1000108b7;  */

void FUN_100010878(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100020a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028ae0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1000108b8; end: 10001093f;  */

undefined8 * FUN_1000108b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  uVar3 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  _objc_retain_x8(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(uVar3);
  return param_1;
}



/* Entry: 100010940; end: 1000109ef;  */

undefined8 * FUN_100010940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  _objc_retain_x8();
  _objc_release_x21();
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 1000109f0; end: 100010a0b;  */

void FUN_1000109f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100010a0c; end: 100010a7f;  */

undefined8 * FUN_100010a0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _objc_release_x8(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 100010a80; end: 100010ac7;  */

int FUN_100010a80(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100010ac8; end: 100010b13;  */

void FUN_100010ac8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 100010b14; end: 100010b23;  */

undefined1  [16] FUN_100010b14(void)

{
  return ZEXT816(0x100029000);
}



/* Entry: 100010b24; end: 100010b33;  */

void FUN_100010b24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100020a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_100028a88)(param_1,&UNK_100022fbc,1);
  return;
}



/* Entry: 100010b34; end: 100010c3f;  */

void FUN_100010b34(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  uStack_50 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0x10002dad0;
  FUN_10000c3c0(0x10002dad0,&UNK_100021ad0);
  __s7SwiftUI5StateV12wrappedValuexvg(&lStack_70);
  lVar2 = lStack_70;
  if (lStack_70 != 0) {
    if (*(long *)(lStack_70 + 0x10) != 0) {
      uStack_48 = *(undefined8 *)(param_2 + 0x28);
      uStack_50 = *(undefined8 *)(param_2 + 0x20);
      uStack_40 = *(undefined8 *)(param_2 + 0x30);
      lVar1 = 0x10002dad8;
      FUN_10000c3c0(0x10002dad8,&UNK_100021ad8);
      __s7SwiftUI5StateV12wrappedValuexvg(&lStack_70);
      uStack_60 = lStack_68;
      lStack_68 = lStack_70;
      uStack_58 = 0;
      lStack_70 = lVar2;
      goto LAB_100010be4;
    }
    _swift_bridgeObjectRelease(lStack_70);
    lVar1 = lStack_70;
  }
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
LAB_100010be4:
  FUN_1000114e8();
  lVar2 = lVar1;
  FUN_100011528();
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&uStack_50,&lStack_70,&UNK_100028df0,&UNK_1000290b8,lVar1,lVar2);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  *(undefined1 *)(param_1 + 3) = uStack_38;
  return;
}



/* Entry: 100010c40; end: 100010ccb;  */

void FUN_100010c40(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___WCSession_100028718;
  _objc_opt_self(PTR__OBJC_CLASS___WCSession_100028718);
  func_0x000100020be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar1,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0);
  _objc_release_x21();
  FUN_100010ccc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(puVar1);
  return;
}



/* Entry: 100010ccc; end: 100011103;  */

/* WARNING: Removing unreachable block (ram,0x000100010f2c) */

void FUN_100010ccc(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (param_1[2] == 0) {
LAB_100010dac:
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x18);
    lStack_90 = *(long *)(unaff_x20 + 0x10);
    lStack_60 = 0;
    uVar4 = 0x10002dad0;
    FUN_10000c3c0(0x10002dad0,&UNK_100021ad0);
    __s7SwiftUI5StateV12wrappedValuexvs(&lStack_60,uVar4);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
    lStack_90 = *(long *)(unaff_x20 + 0x20);
    lStack_80 = *(long *)(unaff_x20 + 0x30);
    lStack_60 = 0xa5949ff0;
    uStack_58 = 0xa400000000000000;
    uVar4 = 0x10002dad8;
    FUN_10000c3c0(0x10002dad8,&UNK_100021ad8);
    plVar2 = &lStack_60;
    __s7SwiftUI5StateV12wrappedValuexvs(plVar2,uVar4);
  }
  else {
    plVar2 = param_1;
    FUN_10001a0e4();
    if (param_1[2] == 0) {
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
LAB_100010d94:
      FUN_1000114a8(&lStack_90,0x10002d770,&UNK_100021650);
      goto LAB_100010dac;
    }
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(param_1);
    uVar9 = uVar1;
    FUN_1000161c0(lVar3);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_100010d94;
    }
    FUN_10000c410(param_1[7] + lVar3 * 0x20,&lStack_90);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1);
    if (lStack_78 == 0) goto LAB_100010d94;
    plVar2 = &lStack_90;
    FUN_1000114a8(plVar2,0x10002d770,&UNK_100021650);
  }
  FUN_10001a0e4();
  if (param_1[2] == 0) {
    uStack_88 = 0;
    lStack_90 = 0;
    lStack_78 = 0;
    lStack_80 = 0;
  }
  else {
    lVar3 = *plVar2;
    plVar2 = (long *)plVar2[1];
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(plVar2);
    plVar10 = plVar2;
    FUN_1000161c0(lVar3);
    if (((ulong)plVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
    }
    else {
      FUN_10000c410(param_1[7] + lVar3 * 0x20,&lStack_90);
      _swift_bridgeObjectRelease(plVar2);
      plVar2 = param_1;
    }
    _swift_bridgeObjectRelease(plVar2);
    puVar11 = PTR___sypN_1000289c0;
    if (lStack_78 != 0) {
      plVar2 = &lStack_60;
      _swift_dynamicCast(plVar2,&lStack_90,PTR___sypN_1000289c0 + 8,
                         PTR___s10Foundation4DataVN_100028100,6);
      uVar4 = uStack_58;
      lVar3 = lStack_60;
      if (((ulong)plVar2 & 1) == 0) {
        return;
      }
      uVar5 = 0;
      __s10Foundation11JSONDecoderCMa();
      _swift_allocObject();
      __s10Foundation11JSONDecoderCACycfc();
      uVar6 = 0x10002da48;
      FUN_10000c3c0(0x10002da48,&UNK_1000219b0);
      uVar7 = uVar6;
      FUN_100011334();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (&lStack_90,uVar6,lVar3,uVar4,uVar6,uVar7);
      _swift_release(uVar5);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x18);
      lStack_60 = lStack_90;
      uVar6 = 0x10002dad0;
      lStack_90 = *(long *)(unaff_x20 + 0x10);
      FUN_10000c3c0(0x10002dad0,&UNK_100021ad0);
      plVar2 = &lStack_60;
      __s7SwiftUI5StateV12wrappedValuexvs(plVar2,uVar6);
      FUN_10001a0f0();
      if (param_1[2] == 0) {
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
LAB_100011040:
        FUN_1000114a8(&lStack_90,0x10002d770,&UNK_100021650);
LAB_100011058:
        uStack_58 = 0xa400000000000000;
        lStack_60 = 0xa5949ff0;
      }
      else {
        lVar8 = *plVar2;
        plVar2 = (long *)plVar2[1];
        _swift_bridgeObjectRetain(param_1);
        _swift_bridgeObjectRetain(plVar2);
        plVar10 = plVar2;
        FUN_1000161c0(lVar8);
        if (((ulong)plVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(param_1);
          uStack_88 = 0;
          lStack_90 = 0;
          lStack_78 = 0;
          lStack_80 = 0;
        }
        else {
          FUN_10000c410(param_1[7] + lVar8 * 0x20,&lStack_90);
          _swift_bridgeObjectRelease(plVar2);
          plVar2 = param_1;
        }
        _swift_bridgeObjectRelease(plVar2);
        if (lStack_78 == 0) goto LAB_100011040;
        plVar2 = &lStack_60;
        _swift_dynamicCast(plVar2,&lStack_90,puVar11 + 8,PTR___sSSN_1000287b8,6);
        if (((ulong)plVar2 & 1) == 0) goto LAB_100011058;
      }
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
      lStack_90 = *(long *)(unaff_x20 + 0x20);
      lStack_80 = *(long *)(unaff_x20 + 0x30);
      lStack_a8 = lStack_60;
      uStack_a0 = uStack_58;
      lStack_68 = lStack_80;
      lStack_60 = lStack_90;
      uStack_58 = uStack_88;
      FUN_1000113e8(&lStack_60,auStack_b8);
      FUN_100011424(&lStack_68,auStack_b8);
      uVar6 = 0x10002dad8;
      FUN_10000c3c0(0x10002dad8,&UNK_100021ad8);
      __s7SwiftUI5StateV12wrappedValuexvs(&lStack_a8,uVar6);
      FUN_100010168(lVar3,uVar4);
      FUN_100011474(&lStack_60);
      uVar4 = 0x10002daf0;
      puVar11 = &UNK_100021ae8;
      plVar2 = &lStack_68;
      goto LAB_1000110e4;
    }
  }
  uVar4 = 0x10002d770;
  puVar11 = &UNK_100021650;
  plVar2 = &lStack_90;
LAB_1000110e4:
  FUN_1000114a8(plVar2,uVar4,puVar11);
  return;
}



/* Entry: 100011104; end: 100011107;  */

void FUN_100011104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010002037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000285c8
  )();
  return;
}



/* Entry: 100011108; end: 10001110b;  */

void FUN_100011108(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100020388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_1000285d0
  )();
  return;
}



/* Entry: 10001110c; end: 10001110f;  */

void FUN_10001110c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000285f8)();
  return;
}



/* Entry: 100011110; end: 10001128b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011110(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_100010b34(&uStack_e0,&uStack_90);
  puVar2 = &UNK_100029030;
  _swift_allocObject(&UNK_100029030,0x48,7);
  *(long *)(puVar2 + 0x18) = lStack_88;
  *(undefined8 *)(puVar2 + 0x10) = uStack_90;
  *(undefined8 *)(puVar2 + 0x28) = uStack_78;
  *(undefined8 *)(puVar2 + 0x20) = uStack_80;
  *(undefined8 *)(puVar2 + 0x38) = uStack_68;
  *(undefined8 *)(puVar2 + 0x30) = uStack_70;
  *(undefined8 *)(puVar2 + 0x40) = uStack_60;
  _swift_beginAccess(lStack_88 + _DAT_10002dbd0,auStack_a8,0x21,0);
  lVar3 = 0x10002dac0;
  FUN_10000c3c0(0x10002dac0,&UNK_100021ab8);
  iVar1 = *(int *)(lVar3 + 0x34);
  FUN_100011298(&uStack_90,&uStack_e0);
  FUN_10000c3c0(0x10002dac8,&UNK_100021ac0);
  __s7Combine9PublishedV14projectedValueAC9PublisherVyx_Gvg((long)param_1 + (long)iVar1);
  _swift_endAccess(auStack_a8);
  puVar4 = &UNK_100029058;
  _swift_allocObject(&UNK_100029058,0x48,7);
  *(long *)(puVar4 + 0x18) = lStack_88;
  *(undefined8 *)(puVar4 + 0x10) = uStack_90;
  *(undefined8 *)(puVar4 + 0x28) = uStack_78;
  *(undefined8 *)(puVar4 + 0x20) = uStack_80;
  *(undefined8 *)(puVar4 + 0x38) = uStack_68;
  *(undefined8 *)(puVar4 + 0x30) = uStack_70;
  *(undefined8 *)(puVar4 + 0x40) = uStack_60;
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[2] = uStack_d0;
  *(undefined1 *)(param_1 + 3) = uStack_c8;
  param_1[4] = FUN_100011290;
  param_1[5] = puVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38));
  *param_1 = FUN_100011310;
  param_1[1] = puVar4;
  FUN_100011298(&uStack_90,&uStack_e0);
  return;
}



/* Entry: 10001128c; end: 10001128f;  */

void FUN_10001128c(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100011290; end: 100011297;  */

void FUN_100011290(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___WCSession_100028718;
  _objc_opt_self(PTR__OBJC_CLASS___WCSession_100028718);
  func_0x000100020be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100020cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar1,PTR___sSSN_1000287b8,PTR___sypN_1000289c0 + 8,PTR___sSSSHsWP_1000287c0);
  _objc_release_x21();
  FUN_100010ccc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100020970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100028a20)(puVar1);
  return;
}



/* Entry: 100011298; end: 1000112cb;  */

undefined8 FUN_100011298(undefined8 param_1,undefined8 param_2)

{
  FUN_1000108b8(param_2,param_1,&UNK_100029000);
  return param_2;
}



/* Entry: 1000112cc; end: 10001130f;  */

void FUN_1000112cc(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001000209a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028a40)();
  return;
}



/* Entry: 100011310; end: 100011333;  */

void FUN_100011310(undefined8 *param_1)

{
  FUN_100010ccc(*param_1);
  return;
}



/* Entry: 100011334; end: 1000113a3;  */

void FUN_100011334(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam000000010002dae0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002da48;
  FUN_10000c888(0x10002da48,&UNK_1000219b0);
  uVar2 = uVar1;
  FUN_1000113a4();
  puVar3 = PTR___sSayxGSesSeRzlMc_100028800;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_100028800,uVar1,&uStack_28);
  puRam000000010002dae0 = puVar3;
  return;
}



/* Entry: 1000113a4; end: 1000113e7;  */

void FUN_1000113a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002dae8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10001a194(0xff);
  puVar2 = &UNK_1000221f8;
  _swift_getWitnessTable(&UNK_1000221f8,uVar1);
  puRam000000010002dae8 = puVar2;
  return;
}



/* Entry: 1000113e8; end: 100011423;  */

undefined8 FUN_1000113e8(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___sSSN_1000287b8 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 100011424; end: 100011473;  */

undefined8 FUN_100011424(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x10002daf0;
  FUN_10000c3c0(0x10002daf0,&UNK_100021ae8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100011474; end: 1000114a7;  */

undefined8 FUN_100011474(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___sSSN_1000287b8 + -8) + 8))();
  return param_1;
}



/* Entry: 1000114a8; end: 1000114e7;  */

undefined8 FUN_1000114a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_10000c3c0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1000114e8; end: 100011527;  */

void FUN_1000114e8(void)

{
  undefined *puVar1;
  
  if (puRam000000010002daf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021948;
  _swift_getWitnessTable(&UNK_100021948,&UNK_100028df0);
  puRam000000010002daf8 = puVar1;
  return;
}



/* Entry: 100011528; end: 100011567;  */

void FUN_100011528(void)

{
  undefined *puVar1;
  
  if (puRam000000010002db00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021b08;
  _swift_getWitnessTable(&UNK_100021b08,&UNK_1000290b8);
  puRam000000010002db00 = puVar1;
  return;
}



/* Entry: 100011568; end: 10001156b;  */

void FUN_100011568(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000010002db08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x10002dac0;
  FUN_10000c888(0x10002dac0,&UNK_100021ab8);
  puVar2 = PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_1000283f0;
  _swift_getWitnessTable(PTR___s7SwiftUI16SubscriptionViewVyxq_GAA0D0AAMc_1000283f0,uVar1);
  puRam000000010002db08 = puVar2;
  return;
}


