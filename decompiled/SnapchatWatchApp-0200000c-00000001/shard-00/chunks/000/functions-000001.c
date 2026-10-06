/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00013464; end: 000134cf;  */

void FUN_00013464(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = __s7SwiftUI4TextV14TruncationModeOMa(0);
  iVar1 = *(int *)(*(int *)(iVar2 + -4) + 0x20);
  (**(code **)(*(int *)(iVar2 + -4) + 8))
            (&stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0),param_1,iVar2);
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovs
            (&stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0));
  return;
}



/* Entry: 000134d0; end: 000134d3;  */

void FUN_000134d0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = __s7SwiftUI4TextV14TruncationModeOMa(0);
  iVar1 = *(int *)(*(int *)(iVar2 + -4) + 0x20);
  (**(code **)(*(int *)(iVar2 + -4) + 8))
            (&stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0),param_1,iVar2);
  __s7SwiftUI17EnvironmentValuesV14truncationModeAA4TextV010TruncationF0Ovs
            (&stack0xffffffd0 + -(iVar1 + 0xfU & 0xfffffff0));
  return;
}



/* Entry: 000134d4; end: 0001350b;  */

void FUN_000134d4(void)

{
  int in_w3;
  undefined4 in_w4;
  
  if (in_w3 != 0) {
    FUN_000108e8();
    _swift_bridgeObjectRetain(in_w3);
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_00030574)(in_w4);
    return;
  }
  return;
}



/* Entry: 0001350c; end: 00013543;  */

void FUN_0001350c(void)

{
  int in_w3;
  undefined4 in_w4;
  
  if (in_w3 != 0) {
    FUN_000108d0();
    _swift_release(in_w4);
                    /* WARNING: Could not recover jumptable at 0x0002754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0003050c)(in_w3);
    return;
  }
  return;
}



/* Entry: 00013544; end: 0001358b;  */

undefined8 FUN_00013544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_3,param_4);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 0001358c; end: 000135cb;  */

void FUN_0001358c(void)

{
  if (iRam00034e90 != 0) {
    return;
  }
  iRam00034e90 = _swift_getWitnessTable(&UNK_000285a4,&UNK_000307b4);
  return;
}



/* Entry: 000135cc; end: 0001360b;  */

undefined8 FUN_000135cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 0001360c; end: 0001364f;  */

void FUN_0001360c(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = FUN_00010a14(param_2,param_3);
    iVar1 = _swift_getWitnessTable(param_4,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 00013650; end: 00013693;  */

void FUN_00013650(void)

{
  undefined8 uVar1;
  
  if (iRam00034ed8 != 0) {
    return;
  }
  uVar1 = __s7SwiftUI25CircularProgressViewStyleVMa(0xff);
  iRam00034ed8 = _swift_getWitnessTable
                           (PTR___s7SwiftUI25CircularProgressViewStyleVAA0deF0AAMc_00030264,uVar1);
  return;
}



/* Entry: 00013694; end: 000136e3;  */

undefined8 FUN_00013694(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00010468(0x34e80,&UNK_000284b0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 000136e4; end: 00013723;  */

undefined8 FUN_000136e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00013724; end: 00013777;  */

void FUN_00013724(void)

{
  undefined4 uVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_00010a14(0x34e20,&UNK_000283f8);
  uStack_24 = FUN_00013304();
  uStack_28 = uVar1;
  _swift_getOpaqueTypeConformance
            (&uStack_28,PTR___s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctFQOMQ_000302ec,
             1);
  return;
}



/* Entry: 00013778; end: 000137a3;  */

longlong FUN_00013778(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  _swift_retain((ulonglong)uVar1);
  return (ulonglong)uVar1 + 8;
}



/* Entry: 000137a4; end: 000137cf;  */

void FUN_000137a4(undefined4 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  if (*(byte *)(param_1 + 3) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(param_1[2]);
    return;
  }
  return;
}



/* Entry: 000137d0; end: 0001383b;  */

undefined4 * FUN_000137d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  uVar2 = *(undefined8 *)(param_2 + 1);
  FUN_000103b4(param_2[2],uVar1);
  *(undefined8 *)(param_1 + 1) = uVar2;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_2 + 0xd);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  return param_1;
}



/* Entry: 0001383c; end: 000138bf;  */

undefined4 * FUN_0001383c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[2];
  param_1[2] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_2 + 0xd);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  return param_1;
}



/* Entry: 000138c0; end: 000138cb;  */

void FUN_000138c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 000138cc; end: 0001392b;  */

undefined4 * FUN_000138cc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  uVar3 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar2;
  FUN_000103d0(param_1[2],uVar3);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_2 + 0xd);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  return param_1;
}



/* Entry: 0001392c; end: 0001396f;  */

int FUN_0001392c(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1000 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x1001;
  }
  uVar1 = *param_1;
  if (0xfff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00013970; end: 000139b3;  */

void FUN_00013970(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x1001) {
    if (0x1000 < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *(uint *)param_1 = param_2 - 1;
      return;
    }
  }
  else {
    *param_1 = (ulonglong)(param_2 - 0x1001);
    param_1[1] = 0;
    if (0x1000 < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Entry: 000139b4; end: 000139c3;  */

undefined1  [16] FUN_000139b4(void)

{
  return ZEXT816(0x30700);
}



/* Entry: 000139c4; end: 000139d3;  */

void FUN_000139c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029ab4,1);
  return;
}



/* Entry: 000139d4; end: 00013b97;  */

void FUN_000139d4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *in_w8;
  undefined4 uStack_64;
  
  uVar3 = __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *in_w8 = uVar3;
  in_w8[1] = 0x41a00000;
  *(undefined1 *)(in_w8 + 2) = 0;
  FUN_00010468(0x34ef8,&UNK_00028568);
  uStack_64 = (int)param_1;
  iVar4 = _swift_allocObject(&UNK_00030718,0x18,3);
  *(int *)(iVar4 + 8) = (int)param_1;
  *(undefined4 *)(iVar4 + 0xc) = param_2;
  *(int *)(iVar4 + 0x10) = (int)param_3;
  *(char *)(iVar4 + 0x14) = (char)param_4;
  *(char *)(iVar4 + 0x15) = (char)((ulonglong)param_4 >> 8);
  *(short *)(iVar4 + 0x16) = (short)((ulonglong)param_4 >> 0x10);
  _swift_bridgeObjectRetain_n(param_1,2);
  FUN_000103b4(param_3,param_4);
  uVar5 = FUN_00010468(0x34f00,&UNK_00028570);
  uVar6 = FUN_00012170(0);
  uVar7 = FUN_00014738(0x34f04,0x34f00,&UNK_00028570,PTR___sSayxGSksMc_000303f8);
  uVar8 = FUN_000141f4(0x34f08,FUN_00012170,&UNK_000283a8);
  FUN_000141f4(0x34f0c,FUN_00020340,&UNK_00028de8);
  __s7SwiftUI7ForEachVAA7Element_2IDQZRs_AA4ViewR0_s12IdentifiableADRpzrlE_7contentACyxq_q0_Gx_q0_AIctcfC
            (&uStack_64,FUN_000141e8,iVar4,uVar5,PTR___sSSN_000303d0,uVar6,uVar7,uVar8);
  uVar2 = __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  iVar4 = FUN_00010468(0x34ee0,&UNK_00028558);
  puVar1 = (undefined1 *)((int)in_w8 + *(int *)(iVar4 + 0x14));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[0x14] = 1;
  return;
}



/* Entry: 00013b98; end: 00013d03;  */

void FUN_00013b98(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_w8;
  undefined1 auStack_80 [8];
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  uint uStack_64;
  
  uStack_64 = (uint)param_5 >> 8;
  uStack_70 = param_2;
  iVar7 = FUN_00020340(0);
  iVar8 = *(int *)(iVar7 + -4);
  iVar9 = *(int *)(iVar8 + 0x20);
  FUN_00014234(param_1);
  puVar5 = (undefined4 *)(param_1 + *(int *)(iVar7 + 0x18));
  uStack_74 = *puVar5;
  uStack_78 = (uint)*(byte *)(puVar5 + 1);
  FUN_00014234(param_1,auStack_80 + -(iVar9 + 0xfU & 0xfffffff0));
  bVar2 = *(byte *)(iVar8 + 0x28);
  uVar1 = bVar2 + 0x18 & (bVar2 ^ 0xffffffff);
  iVar8 = _swift_allocObject(&UNK_0003072c,uVar1 + iVar9,bVar2 | 3);
  uVar6 = uStack_70;
  *(int *)(iVar8 + 8) = (int)uStack_70;
  *(undefined4 *)(iVar8 + 0xc) = param_3;
  *(int *)(iVar8 + 0x10) = (int)param_4;
  *(char *)(iVar8 + 0x14) = (char)param_5;
  uVar3 = (undefined1)uStack_64;
  *(undefined1 *)(iVar8 + 0x15) = uVar3;
  uVar4 = (undefined2)((ulonglong)param_5 >> 0x10);
  *(undefined2 *)(iVar8 + 0x16) = uVar4;
  FUN_0001434c(auStack_80 + -(iVar9 + 0xfU & 0xfffffff0),iVar8 + uVar1);
  iVar9 = FUN_00012170(0);
  puVar5 = (undefined4 *)(in_w8 + *(int *)(iVar9 + 0xc));
  *puVar5 = uStack_74;
  *(char *)(puVar5 + 1) = (char)uStack_78;
  puVar5 = (undefined4 *)(in_w8 + *(int *)(iVar9 + 0x10));
  *puVar5 = param_3;
  puVar5[1] = (int)param_4;
  *(char *)(puVar5 + 2) = (char)param_5;
  *(undefined1 *)((int)puVar5 + 9) = uVar3;
  *(undefined2 *)((int)puVar5 + 10) = uVar4;
  puVar5 = (undefined4 *)(in_w8 + *(int *)(iVar9 + 0x14));
  *puVar5 = FUN_00014390;
  puVar5[1] = iVar8;
  FUN_000103b4(param_4,param_5);
  FUN_000103b4(param_4,param_5);
  _swift_bridgeObjectRetain(uVar6);
  return;
}



/* Entry: 00013d04; end: 00014013;  */

/* WARNING: Removing unreachable block (ram,0x00013e24) */

void FUN_00013d04(int param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_cc [76];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  byte bStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_000104b4(param_1 + 0x10,&uStack_68);
    uVar14 = ZEXT48(PTR___sypN_000304dc);
    uVar9 = _swift_dynamicCast(&uStack_80,&uStack_68,uVar14 + 4,PTR___sSSN_000303d0,6);
    if ((uVar9 & 1) != 0) {
      uVar1 = (uint)uStack_80;
      if (((uint)uStack_78 & 0x2000) != 0) {
        uVar1 = uStack_78._1_1_ & 0xf;
      }
      if (uVar1 == 0) {
        FUN_000103d0();
      }
      else {
        uStack_53 = *(undefined1 *)((int)param_2 + 9);
        uStack_52 = *(undefined2 *)((int)param_2 + 10);
        uStack_68 = (uint)uStack_80;
        uStack_64 = uStack_80._4_4_;
        uStack_60 = (undefined1)uStack_78;
        bStack_5f = uStack_78._1_1_;
        uStack_5e = uStack_78._2_2_;
        uVar2 = *(undefined4 *)((int)param_2 + 4);
        uStack_5c = (undefined4)*param_2;
        uStack_58 = (undefined4)((ulonglong)*param_2 >> 0x20);
        uVar3 = *(undefined1 *)(param_2 + 1);
        uStack_54 = uVar3;
        iVar7 = __s10Foundation11JSONEncoderCMa(0);
        _swift_allocObject(iVar7,*(undefined4 *)(iVar7 + 0x1c),*(undefined2 *)(iVar7 + 0x20));
        FUN_000103b4(uVar2,uVar3);
        uVar10 = __s10Foundation11JSONEncoderCACycfc();
        uStack_78 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,uStack_60)));
        uStack_80 = CONCAT44(uStack_64,uStack_68);
        uStack_70 = CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,uStack_58)));
        uVar11 = FUN_00014608();
        auVar15 = __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(&uStack_80,&UNK_00030c08);
        _swift_release(uVar10);
        FUN_00014648(&uStack_68);
        uVar10 = FUN_00010468(0x34f18,&UNK_00028870);
        iVar7 = _swift_initStackObject(uVar10,auStack_cc);
        *(undefined8 *)(iVar7 + 8) = 0x400000002;
        puVar8 = (undefined8 *)FUN_000201a4();
        uVar3 = *(undefined1 *)((int)puVar8 + 9);
        uVar5 = *(undefined2 *)((int)puVar8 + 10);
        uVar2 = *(undefined4 *)((int)puVar8 + 4);
        uVar4 = *(undefined1 *)(puVar8 + 1);
        *(undefined8 *)(iVar7 + 0x10) = *puVar8;
        *(undefined1 *)(iVar7 + 0x18) = uVar4;
        *(undefined1 *)(iVar7 + 0x19) = uVar3;
        *(undefined2 *)(iVar7 + 0x1a) = uVar5;
        FUN_000103b4(uVar2);
        puVar8 = (undefined8 *)FUN_00020274();
        puVar6 = PTR___sSSN_000303d0;
        uVar3 = *(undefined1 *)((int)puVar8 + 9);
        uVar5 = *(undefined2 *)((int)puVar8 + 10);
        uVar2 = *(undefined4 *)((int)puVar8 + 4);
        uVar10 = *puVar8;
        uVar4 = *(undefined1 *)(puVar8 + 1);
        *(undefined **)(iVar7 + 0x28) = PTR___sSSN_000303d0;
        *(undefined8 *)(iVar7 + 0x1c) = uVar10;
        *(undefined1 *)(iVar7 + 0x24) = uVar4;
        *(undefined1 *)(iVar7 + 0x25) = uVar3;
        *(undefined2 *)(iVar7 + 0x26) = uVar5;
        FUN_000103b4(uVar2);
        puVar8 = (undefined8 *)FUN_000201b0();
        uVar3 = *(undefined1 *)((int)puVar8 + 9);
        uVar5 = *(undefined2 *)((int)puVar8 + 10);
        uVar2 = *(undefined4 *)((int)puVar8 + 4);
        uVar4 = *(undefined1 *)(puVar8 + 1);
        *(undefined8 *)(iVar7 + 0x2c) = *puVar8;
        *(undefined1 *)(iVar7 + 0x34) = uVar4;
        *(undefined1 *)(iVar7 + 0x35) = uVar3;
        *(undefined2 *)(iVar7 + 0x36) = uVar5;
        *(undefined **)(iVar7 + 0x44) = PTR___s10Foundation4DataVN_00030080;
        *(int *)(iVar7 + 0x38) = auVar15._0_4_;
        *(int *)(iVar7 + 0x3c) = auVar15._8_4_;
        *(char *)(iVar7 + 0x40) = (char)uVar11;
        FUN_000103b4(uVar2);
        FUN_0001467c(auVar15._0_8_,auVar15._8_8_,uVar11);
        uVar10 = FUN_0001ae68(iVar7);
        _swift_setDeallocating(iVar7);
        uVar12 = FUN_00010468(0x34f20,&UNK_00028580);
        _swift_arrayDestroy((undefined8 *)(iVar7 + 0x10),2,uVar12);
        _objc_opt_self(uRam0003483c);
        func_0x000277c0();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        uVar13 = __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                           (uVar10,puVar6,uVar14 + 4,PTR___sSSSHsWP_000303d4);
        _swift_bridgeObjectRelease(uVar10);
        func_0x00027940(uVar12,extraout_x1,uVar13,0,0);
        _objc_release_x23();
        _objc_release_x22();
        FUN_000146c0(auVar15._0_8_,auVar15._8_8_,uVar11);
      }
    }
  }
  return;
}



/* Entry: 00014014; end: 0001407b;  */

void FUN_00014014(int param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((int)param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                      (param_2,ZEXT48(PTR___sypN_000304dc) + 4);
  }
  _swift_retain(uVar2);
  (*pcVar1)(uVar3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0002754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0003050c)(uVar3 & 0xffffffff);
  return;
}



/* Entry: 0001407c; end: 0001407f;  */

void FUN_0001407c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 00014080; end: 00014083;  */

void FUN_00014080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 00014084; end: 00014087;  */

void FUN_00014084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00014088; end: 00014113;  */

void FUN_00014088(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *unaff_w20;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  uStack_48 = *unaff_w20;
  uStack_3c = unaff_w20[3];
  uStack_44 = *(undefined8 *)(unaff_w20 + 1);
  uVar1 = __s7SwiftUI4AxisO3SetV8verticalAEvgZ();
  uVar2 = FUN_00010468(0x34ee0,&UNK_00028558);
  uVar3 = FUN_00014120();
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (uVar1,1,FUN_00014114,auStack_50,uVar2,uVar3);
  return;
}



/* Entry: 00014114; end: 0001411f;  */

void FUN_00014114(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *in_w8;
  int unaff_w20;
  undefined4 uStack_64;
  
  uVar2 = *(undefined4 *)(unaff_w20 + 8);
  uVar4 = *(undefined4 *)(unaff_w20 + 0xc);
  uVar3 = *(undefined4 *)(unaff_w20 + 0x10);
  uVar5 = *(undefined4 *)(unaff_w20 + 0x14);
  uVar7 = __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *in_w8 = uVar7;
  in_w8[1] = 0x41a00000;
  *(undefined1 *)(in_w8 + 2) = 0;
  FUN_00010468(0x34ef8,&UNK_00028568);
  uStack_64 = uVar2;
  iVar8 = _swift_allocObject(&UNK_00030718,0x18,3);
  *(undefined4 *)(iVar8 + 8) = uVar2;
  *(undefined4 *)(iVar8 + 0xc) = uVar4;
  *(undefined4 *)(iVar8 + 0x10) = uVar3;
  *(char *)(iVar8 + 0x14) = (char)uVar5;
  *(char *)(iVar8 + 0x15) = (char)((uint)uVar5 >> 8);
  *(short *)(iVar8 + 0x16) = (short)((uint)uVar5 >> 0x10);
  _swift_bridgeObjectRetain_n(uVar2,2);
  FUN_000103b4(uVar3,uVar5);
  uVar9 = FUN_00010468(0x34f00,&UNK_00028570);
  uVar10 = FUN_00012170(0);
  uVar11 = FUN_00014738(0x34f04,0x34f00,&UNK_00028570,PTR___sSayxGSksMc_000303f8);
  uVar12 = FUN_000141f4(0x34f08,FUN_00012170,&UNK_000283a8);
  FUN_000141f4(0x34f0c,FUN_00020340,&UNK_00028de8);
  __s7SwiftUI7ForEachVAA7Element_2IDQZRs_AA4ViewR0_s12IdentifiableADRpzrlE_7contentACyxq_q0_Gx_q0_AIctcfC
            (&uStack_64,FUN_000141e8,iVar8,uVar9,PTR___sSSN_000303d0,uVar10,uVar11,uVar12);
  uVar6 = __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  iVar8 = FUN_00010468(0x34ee0,&UNK_00028558);
  puVar1 = (undefined1 *)((int)in_w8 + *(int *)(iVar8 + 0x14));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  puVar1[0x14] = 1;
  return;
}



/* Entry: 00014120; end: 000141b7;  */

void FUN_00014120(void)

{
  undefined8 uVar1;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  if (iRam00034ee4 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34ee0,&UNK_00028558);
  uStack_28 = FUN_00014738(0x34ee8,0x34ef0,&UNK_00028560,
                           PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_00030350);
  puStack_24 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_000301d0;
  iRam00034ee4 = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&uStack_28);
  return;
}



/* Entry: 000141b8; end: 000141e7;  */

void FUN_000141b8(void)

{
  int unaff_w20;
  
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 8));
  FUN_000103d0(*(undefined4 *)(unaff_w20 + 0x10),*(undefined1 *)(unaff_w20 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 000141e8; end: 000141f3;  */

void FUN_000141e8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_w8;
  int unaff_w20;
  undefined1 auStack_80 [8];
  uint uStack_78;
  undefined4 uStack_74;
  ulonglong uStack_70;
  uint uStack_64;
  
  uStack_70 = (ulonglong)*(uint *)(unaff_w20 + 8);
  uVar3 = *(undefined4 *)(unaff_w20 + 0xc);
  uVar2 = *(undefined4 *)(unaff_w20 + 0x10);
  uVar4 = *(uint *)(unaff_w20 + 0x14);
  uStack_64 = uVar4 >> 8;
  uVar8 = (undefined2)(uVar4 >> 0x10);
  iVar10 = FUN_00020340(0);
  iVar11 = *(int *)(iVar10 + -4);
  iVar12 = *(int *)(iVar11 + 0x20);
  FUN_00014234(param_1);
  puVar7 = (undefined4 *)(param_1 + *(int *)(iVar10 + 0x18));
  uStack_74 = *puVar7;
  uStack_78 = (uint)*(byte *)(puVar7 + 1);
  FUN_00014234(param_1,auStack_80 + -(iVar12 + 0xfU & 0xfffffff0));
  bVar5 = *(byte *)(iVar11 + 0x28);
  uVar1 = bVar5 + 0x18 & (bVar5 ^ 0xffffffff);
  iVar11 = _swift_allocObject(&UNK_0003072c,uVar1 + iVar12,bVar5 | 3);
  uVar9 = uStack_70;
  *(int *)(iVar11 + 8) = (int)uStack_70;
  *(undefined4 *)(iVar11 + 0xc) = uVar3;
  *(undefined4 *)(iVar11 + 0x10) = uVar2;
  *(char *)(iVar11 + 0x14) = (char)uVar4;
  uVar6 = (undefined1)uStack_64;
  *(undefined1 *)(iVar11 + 0x15) = uVar6;
  *(undefined2 *)(iVar11 + 0x16) = uVar8;
  FUN_0001434c(auStack_80 + -(iVar12 + 0xfU & 0xfffffff0),iVar11 + uVar1);
  iVar12 = FUN_00012170(0);
  puVar7 = (undefined4 *)(in_w8 + *(int *)(iVar12 + 0xc));
  *puVar7 = uStack_74;
  *(char *)(puVar7 + 1) = (char)uStack_78;
  puVar7 = (undefined4 *)(in_w8 + *(int *)(iVar12 + 0x10));
  *puVar7 = uVar3;
  puVar7[1] = uVar2;
  *(char *)(puVar7 + 2) = (char)uVar4;
  *(undefined1 *)((int)puVar7 + 9) = uVar6;
  *(undefined2 *)((int)puVar7 + 10) = uVar8;
  puVar7 = (undefined4 *)(in_w8 + *(int *)(iVar12 + 0x14));
  *puVar7 = FUN_00014390;
  puVar7[1] = iVar11;
  FUN_000103b4(uVar2,uVar4);
  FUN_000103b4(uVar2,uVar4);
  _swift_bridgeObjectRetain(uVar9);
  return;
}



/* Entry: 000141f4; end: 00014233;  */

void FUN_000141f4(int *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = (*param_2)(0xff);
    iVar1 = _swift_getWitnessTable(param_3,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 00014234; end: 00014277;  */

undefined8 FUN_00014234(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00020340(0);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00014278; end: 0001434b;  */

void FUN_00014278(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_w20;
  uint uVar6;
  
  iVar3 = FUN_00020340(0);
  uVar6 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 8));
  FUN_000103d0(*(undefined4 *)(unaff_w20 + 0x10),*(undefined1 *)(unaff_w20 + 0x14));
  iVar1 = unaff_w20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffff));
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x10),*(undefined1 *)(iVar1 + 0x14));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x1c),*(undefined1 *)(iVar1 + 0x20));
  iVar2 = *(int *)(iVar3 + 0x14);
  iVar4 = __s10Foundation3URLVMa(0);
  iVar3 = *(int *)(iVar4 + -4);
  iVar5 = (**(code **)(iVar3 + 0x18))(iVar1 + iVar2,1,iVar4);
  if (iVar5 == 0) {
    (**(code **)(iVar3 + 4))(iVar1 + iVar2,iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 0001434c; end: 0001438f;  */

undefined8 FUN_0001434c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00020340(0);
  (**(code **)(*(int *)(iVar1 + -4) + 0x10))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00014390; end: 000143bb;  */

void FUN_00014390(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  uint uVar7;
  longlong unaff_x20;
  undefined1 auStack_60 [4];
  undefined *puStack_5c;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_4c;
  code *pcStack_48;
  undefined4 uStack_44;
  
  iVar3 = FUN_00020340(0);
  uVar7 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar3 = FUN_00020340(0);
  iVar1 = *(int *)(iVar3 + -4);
  iVar3 = *(int *)(iVar1 + 0x20);
  _objc_opt_self(uRam00034838);
  func_0x00027980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00027a20();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  if ((int)uVar4 != 0) {
    FUN_00014234(unaff_x20 + (ulonglong)(uVar7 + 0x18 & (uVar7 ^ 0xffffffff)),
                 auStack_60 + -(iVar3 + 0xfU & 0xfffffff0));
    bVar2 = *(byte *)(iVar1 + 0x28);
    uVar7 = bVar2 + 8 & (bVar2 ^ 0xffffffff);
    lVar5 = _swift_allocObject(&UNK_00030740,uVar7 + iVar3,bVar2 | 3);
    FUN_0001434c(auStack_60 + -(iVar3 + 0xfU & 0xfffffff0),lVar5 + (ulonglong)uVar7);
    uStack_44 = (undefined4)lVar5;
    pcStack_48 = FUN_000145b0;
    puStack_5c = PTR___NSConcreteStackBlock_00030134;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_00014014;
    puStack_4c = &UNK_0003074c;
    uVar6 = __Block_copy(&puStack_5c);
    _swift_release(uStack_44);
    func_0x00027880(uVar4,extraout_x1,0,1,uVar6);
    __Block_release(uVar6);
    _objc_release_x19();
  }
  return;
}



/* Entry: 000143bc; end: 000144ef;  */

void FUN_000143bc(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined1 auStack_60 [4];
  undefined *puStack_5c;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_4c;
  code *pcStack_48;
  undefined4 uStack_44;
  
  iVar4 = FUN_00020340(0);
  iVar2 = *(int *)(iVar4 + -4);
  iVar4 = *(int *)(iVar2 + 0x20);
  _objc_opt_self(uRam00034838);
  func_0x00027980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00027a20();
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  if ((int)uVar5 != 0) {
    FUN_00014234(param_1,auStack_60 + -(iVar4 + 0xfU & 0xfffffff0));
    bVar3 = *(byte *)(iVar2 + 0x28);
    uVar1 = bVar3 + 8 & (bVar3 ^ 0xffffffff);
    lVar6 = _swift_allocObject(&UNK_00030740,uVar1 + iVar4,bVar3 | 3);
    FUN_0001434c(auStack_60 + -(iVar4 + 0xfU & 0xfffffff0),lVar6 + (ulonglong)uVar1);
    uStack_44 = (undefined4)lVar6;
    pcStack_48 = FUN_000145b0;
    puStack_5c = PTR___NSConcreteStackBlock_00030134;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_00014014;
    puStack_4c = &UNK_0003074c;
    uVar7 = __Block_copy(&puStack_5c);
    _swift_release(uStack_44);
    func_0x00027880(uVar5,extraout_x1,0,1,uVar7);
    __Block_release(uVar7);
    _objc_release_x19();
  }
  return;
}



/* Entry: 000144f0; end: 000145af;  */

void FUN_000144f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_w20;
  uint uVar6;
  
  iVar3 = FUN_00020340(0);
  uVar6 = (uint)*(byte *)(*(int *)(iVar3 + -4) + 0x28);
  iVar1 = unaff_w20 + (uVar6 + 8 & (uVar6 ^ 0xffffffff));
  FUN_000103d0(*(undefined4 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 8));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x10),*(undefined1 *)(iVar1 + 0x14));
  FUN_000103d0(*(undefined4 *)(iVar1 + 0x1c),*(undefined1 *)(iVar1 + 0x20));
  iVar2 = *(int *)(iVar3 + 0x14);
  iVar4 = __s10Foundation3URLVMa(0);
  iVar3 = *(int *)(iVar4 + -4);
  iVar5 = (**(code **)(iVar3 + 0x18))(iVar1 + iVar2,1,iVar4);
  if (iVar5 == 0) {
    (**(code **)(iVar3 + 4))(iVar1 + iVar2,iVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 000145b0; end: 000145eb;  */

/* WARNING: Removing unreachable block (ram,0x00013e24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000145b0(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  uint uVar13;
  int unaff_w20;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_cc [76];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  byte bStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  
  iVar7 = FUN_00020340(0);
  uVar13 = (uint)*(byte *)(*(int *)(iVar7 + -4) + 0x28);
  puVar6 = (undefined8 *)(unaff_w20 + (uVar13 + 8 & (uVar13 ^ 0xffffffff)));
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_000104b4(param_1 + 0x10,&uStack_68);
    uVar14 = ZEXT48(PTR___sypN_000304dc);
    uVar8 = _swift_dynamicCast(&uStack_80,&uStack_68,uVar14 + 4,PTR___sSSN_000303d0,6);
    if ((uVar8 & 1) != 0) {
      uVar13 = (uint)uStack_80;
      if (((uint)uStack_78 & 0x2000) != 0) {
        uVar13 = uStack_78._1_1_ & 0xf;
      }
      if (uVar13 == 0) {
        FUN_000103d0();
      }
      else {
        uStack_53 = *(undefined1 *)((int)puVar6 + 9);
        uStack_52 = *(undefined2 *)((int)puVar6 + 10);
        uStack_68 = (uint)uStack_80;
        uStack_64 = uStack_80._4_4_;
        uStack_60 = (undefined1)uStack_78;
        bStack_5f = uStack_78._1_1_;
        uStack_5e = uStack_78._2_2_;
        uVar1 = *(undefined4 *)((int)puVar6 + 4);
        uStack_5c = (undefined4)*puVar6;
        uStack_58 = (undefined4)((ulonglong)*puVar6 >> 0x20);
        uVar2 = *(undefined1 *)(puVar6 + 1);
        uStack_54 = uVar2;
        iVar7 = __s10Foundation11JSONEncoderCMa(0);
        _swift_allocObject(iVar7,*(undefined4 *)(iVar7 + 0x1c),*(undefined2 *)(iVar7 + 0x20));
        FUN_000103b4(uVar1,uVar2);
        uVar9 = __s10Foundation11JSONEncoderCACycfc();
        uStack_78 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,uStack_60)));
        uStack_80 = CONCAT44(uStack_64,uStack_68);
        uStack_70 = CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,uStack_58)));
        uVar10 = FUN_00014608();
        auVar15 = __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(&uStack_80,&UNK_00030c08);
        _swift_release(uVar9);
        FUN_00014648(&uStack_68);
        uVar9 = FUN_00010468(0x34f18,&UNK_00028870);
        iVar7 = _swift_initStackObject(uVar9,auStack_cc);
        *(undefined8 *)(iVar7 + 8) = 0x400000002;
        puVar6 = (undefined8 *)FUN_000201a4();
        uVar2 = *(undefined1 *)((int)puVar6 + 9);
        uVar4 = *(undefined2 *)((int)puVar6 + 10);
        uVar1 = *(undefined4 *)((int)puVar6 + 4);
        uVar3 = *(undefined1 *)(puVar6 + 1);
        *(undefined8 *)(iVar7 + 0x10) = *puVar6;
        *(undefined1 *)(iVar7 + 0x18) = uVar3;
        *(undefined1 *)(iVar7 + 0x19) = uVar2;
        *(undefined2 *)(iVar7 + 0x1a) = uVar4;
        FUN_000103b4(uVar1);
        puVar6 = (undefined8 *)FUN_00020274();
        puVar5 = PTR___sSSN_000303d0;
        uVar2 = *(undefined1 *)((int)puVar6 + 9);
        uVar4 = *(undefined2 *)((int)puVar6 + 10);
        uVar1 = *(undefined4 *)((int)puVar6 + 4);
        uVar9 = *puVar6;
        uVar3 = *(undefined1 *)(puVar6 + 1);
        *(undefined **)(iVar7 + 0x28) = PTR___sSSN_000303d0;
        *(undefined8 *)(iVar7 + 0x1c) = uVar9;
        *(undefined1 *)(iVar7 + 0x24) = uVar3;
        *(undefined1 *)(iVar7 + 0x25) = uVar2;
        *(undefined2 *)(iVar7 + 0x26) = uVar4;
        FUN_000103b4(uVar1);
        puVar6 = (undefined8 *)FUN_000201b0();
        uVar2 = *(undefined1 *)((int)puVar6 + 9);
        uVar4 = *(undefined2 *)((int)puVar6 + 10);
        uVar1 = *(undefined4 *)((int)puVar6 + 4);
        uVar3 = *(undefined1 *)(puVar6 + 1);
        *(undefined8 *)(iVar7 + 0x2c) = *puVar6;
        *(undefined1 *)(iVar7 + 0x34) = uVar3;
        *(undefined1 *)(iVar7 + 0x35) = uVar2;
        *(undefined2 *)(iVar7 + 0x36) = uVar4;
        *(undefined **)(iVar7 + 0x44) = PTR___s10Foundation4DataVN_00030080;
        *(int *)(iVar7 + 0x38) = auVar15._0_4_;
        *(int *)(iVar7 + 0x3c) = auVar15._8_4_;
        *(char *)(iVar7 + 0x40) = (char)uVar10;
        FUN_000103b4(uVar1);
        FUN_0001467c(auVar15._0_8_,auVar15._8_8_,uVar10);
        uVar9 = FUN_0001ae68(iVar7);
        _swift_setDeallocating(iVar7);
        uVar11 = FUN_00010468(0x34f20,&UNK_00028580);
        _swift_arrayDestroy((undefined8 *)(iVar7 + 0x10),2,uVar11);
        _objc_opt_self(uRam0003483c);
        func_0x000277c0();
        uVar11 = _objc_retainAutoreleasedReturnValue();
        uVar12 = __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                           (uVar9,puVar5,uVar14 + 4,PTR___sSSSHsWP_000303d4);
        _swift_bridgeObjectRelease(uVar9);
        func_0x00027940(uVar11,extraout_x1,uVar12,0,0);
        _objc_release_x23();
        _objc_release_x22();
        FUN_000146c0(auVar15._0_8_,auVar15._8_8_,uVar10);
      }
    }
  }
  return;
}



/* Entry: 000145ec; end: 000145ff;  */

void FUN_000145ec(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_00030574)(uVar1);
  return;
}



/* Entry: 00014600; end: 00014607;  */

void FUN_00014600(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*(undefined4 *)(param_1 + 0x18));
  return;
}



/* Entry: 00014608; end: 00014647;  */

void FUN_00014608(void)

{
  if (iRam00034f10 != 0) {
    return;
  }
  iRam00034f10 = _swift_getWitnessTable(&UNK_00029040,&UNK_00030c08);
  return;
}



/* Entry: 00014648; end: 0001467b;  */

undefined8 FUN_00014648(undefined8 param_1)

{
  FUN_000230bc();
  return param_1;
}



/* Entry: 0001467c; end: 000146bf;  */

void FUN_0001467c(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return;
    }
    _swift_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00027684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_00030574)(param_2);
  return;
}



/* Entry: 000146c0; end: 00014703;  */

void FUN_000146c0(undefined4 param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return;
    }
    _swift_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(param_2);
  return;
}



/* Entry: 00014704; end: 00014737;  */

void FUN_00014704(void)

{
  FUN_00014738(0x34f24,0x34f28,&UNK_00028588,PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_00030180);
  return;
}



/* Entry: 00014738; end: 0001477b;  */

void FUN_00014738(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = FUN_00010a14(param_2,param_3);
    iVar1 = _swift_getWitnessTable(param_4,uVar2);
    *param_1 = iVar1;
  }
  return;
}



/* Entry: 0001477c; end: 000147a7;  */

longlong FUN_0001477c(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  _swift_retain((ulonglong)uVar1);
  return (ulonglong)uVar1 + 8;
}



/* Entry: 000147a8; end: 000147d7;  */

void FUN_000147a8(int param_1)

{
  FUN_000103d0(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 8));
  if (*(byte *)(param_1 + 0x14) - 1 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000276e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_00030584)(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 000147d8; end: 00014863;  */

undefined8 * FUN_000147d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_000103b4(*(undefined4 *)((int)param_2 + 4),uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar2 = *(undefined8 *)((int)param_2 + 0xc);
  uVar1 = *(undefined1 *)((int)param_2 + 0x14);
  FUN_000103b4(*(undefined4 *)(param_2 + 2),uVar1);
  *(undefined8 *)((int)param_1 + 0xc) = uVar2;
  *(undefined1 *)((int)param_1 + 0x14) = uVar1;
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 00014864; end: 0001490f;  */

undefined4 * FUN_00014864(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[1];
  param_1[1] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[4];
  param_1[4] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 00014910; end: 00014923;  */

void FUN_00014910(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 00014924; end: 0001499f;  */

undefined8 * FUN_00014924(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_000103d0(*(undefined4 *)((int)param_1 + 4),uVar2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined2 *)((int)param_1 + 10) = *(undefined2 *)((int)param_2 + 10);
  uVar1 = *(undefined1 *)((int)param_2 + 0x14);
  *(undefined8 *)((int)param_1 + 0xc) = *(undefined8 *)((int)param_2 + 0xc);
  uVar2 = *(undefined1 *)((int)param_1 + 0x14);
  *(undefined1 *)((int)param_1 + 0x14) = uVar1;
  FUN_000103d0(*(undefined4 *)(param_1 + 2),uVar2);
  *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)param_2 + 0x15);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  return param_1;
}



/* Entry: 000149a0; end: 000149e7;  */

int FUN_000149a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000149e8; end: 00014a2b;  */

void FUN_000149e8(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulonglong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Entry: 00014a2c; end: 00014a3b;  */

undefined1  [16] FUN_00014a2c(void)

{
  return ZEXT816(0x307b4);
}



/* Entry: 00014a3c; end: 00014a4b;  */

void FUN_00014a3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029af8,1);
  return;
}



/* Entry: 00014a4c; end: 00014ca3;  */

void FUN_00014a4c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *in_w8;
  undefined4 *unaff_w20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1a8 [56];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar2 = unaff_w20[2];
  uVar9 = (ulonglong)(uint)unaff_w20[3];
  uVar1 = FUN_0001b424(*unaff_w20,unaff_w20[1],uVar2,uVar9,unaff_w20[4],unaff_w20[5]);
  uStack_b0 = CONCAT44(extraout_w1,uVar1);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar2);
  uVar4 = FUN_00010890();
  auVar11 = __s7SwiftUI4TextVyACxcSyRzlufC(&uStack_b0,PTR___sSSN_000303d0,uVar4);
  uVar6 = auVar11._8_8_;
  uVar5 = __s7SwiftUI4FontV8headlineACvgZ();
  uVar8 = uVar6;
  uVar10 = uVar4;
  auVar12 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar5,auVar11._0_8_,uVar6,uVar4,uVar9);
  uVar7 = auVar12._8_8_;
  _swift_release(uVar5);
  FUN_000108d0(auVar11._0_8_,uVar6,uVar4);
  _swift_bridgeObjectRelease(uVar9);
  uVar6 = __s7SwiftUI5ColorV5whiteACvgZ();
  uVar4 = uVar7;
  uVar5 = uVar8;
  uVar2 = __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF(uVar6,auVar12._0_8_,uVar7,uVar8,uVar10);
  _swift_release(uVar6);
  FUN_000108d0(auVar12._0_8_,uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar10);
  auVar11 = __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (0x42300000,0,0x42300000,0,auVar11._0_8_,auVar11._8_8_);
  uVar1 = __s7SwiftUI5ColorV4grayACvgZ();
  uVar3 = __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_138 = (undefined4)uVar4;
  uStack_134 = (undefined4)uVar5;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_120 = uStack_e0;
  uStack_150 = uStack_e0;
  uStack_168 = CONCAT44(uStack_134,uStack_138);
  uStack_170 = CONCAT44(extraout_w1_00,uVar2);
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  uStack_f8 = uStack_e0;
  uStack_100 = uStack_e8;
  uStack_108 = uStack_f0;
  uStack_140 = uVar2;
  uStack_13c = extraout_w1_00;
  uStack_118 = uVar2;
  uStack_114 = extraout_w1_00;
  uStack_110 = uStack_138;
  uStack_10c = uStack_134;
  FUN_00014cb4(&uStack_140,&uStack_b0,0x34f30,&UNK_000285f8);
  FUN_00014cfc(&uStack_118,0x34f30,&UNK_000285f8);
  uStack_e8 = uStack_168;
  uStack_f0 = uStack_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_d0 = uStack_150;
  uStack_c4 = 0x100;
  uStack_a8 = uStack_168;
  uStack_b0 = uStack_170;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_90 = uStack_150;
  uStack_84 = 0x100;
  uStack_c8 = uVar1;
  uStack_c0 = uVar3;
  uStack_bc = extraout_w1_01;
  uStack_88 = uVar1;
  uStack_80 = uVar3;
  uStack_7c = extraout_w1_01;
  FUN_00014cb4(&uStack_f0,auStack_1a8,0x34f38,&UNK_00028600);
  FUN_00014cfc(&uStack_b0,0x34f38,&UNK_00028600);
  in_w8[1] = uStack_e8;
  *in_w8 = uStack_f0;
  in_w8[3] = uStack_d8;
  in_w8[2] = uStack_e0;
  in_w8[5] = CONCAT26(uStack_c2,CONCAT24(uStack_c4,uStack_c8));
  in_w8[4] = uStack_d0;
  in_w8[6] = CONCAT44(uStack_bc,uStack_c0);
  return;
}



/* Entry: 00014ca4; end: 00014ca7;  */

void FUN_00014ca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 00014ca8; end: 00014cab;  */

void FUN_00014ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 00014cac; end: 00014caf;  */

void FUN_00014cac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 00014cb0; end: 00014cb3;  */

void FUN_00014cb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *in_w8;
  undefined4 *unaff_w20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_1a8 [56];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar2 = unaff_w20[2];
  uVar9 = (ulonglong)(uint)unaff_w20[3];
  uVar1 = FUN_0001b424(*unaff_w20,unaff_w20[1],uVar2,uVar9,unaff_w20[4],unaff_w20[5]);
  uStack_b0 = CONCAT44(extraout_w1,uVar1);
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar2);
  uVar4 = FUN_00010890();
  auVar11 = __s7SwiftUI4TextVyACxcSyRzlufC(&uStack_b0,PTR___sSSN_000303d0,uVar4);
  uVar6 = auVar11._8_8_;
  uVar5 = __s7SwiftUI4FontV8headlineACvgZ();
  uVar8 = uVar6;
  uVar10 = uVar4;
  auVar12 = __s7SwiftUI4TextV4fontyAcA4FontVSgF(uVar5,auVar11._0_8_,uVar6,uVar4,uVar9);
  uVar7 = auVar12._8_8_;
  _swift_release(uVar5);
  FUN_000108d0(auVar11._0_8_,uVar6,uVar4);
  _swift_bridgeObjectRelease(uVar9);
  uVar6 = __s7SwiftUI5ColorV5whiteACvgZ();
  uVar4 = uVar7;
  uVar5 = uVar8;
  uVar2 = __s7SwiftUI4TextV15foregroundColoryAcA0E0VSgF(uVar6,auVar12._0_8_,uVar7,uVar8,uVar10);
  _swift_release(uVar6);
  FUN_000108d0(auVar12._0_8_,uVar7,uVar8);
  _swift_bridgeObjectRelease(uVar10);
  auVar11 = __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (0x42300000,0,0x42300000,0,auVar11._0_8_,auVar11._8_8_);
  uVar1 = __s7SwiftUI5ColorV4grayACvgZ();
  uVar3 = __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_138 = (undefined4)uVar4;
  uStack_134 = (undefined4)uVar5;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_120 = uStack_e0;
  uStack_150 = uStack_e0;
  uStack_168 = CONCAT44(uStack_134,uStack_138);
  uStack_170 = CONCAT44(extraout_w1_00,uVar2);
  uStack_158 = uStack_e8;
  uStack_160 = uStack_f0;
  uStack_f8 = uStack_e0;
  uStack_100 = uStack_e8;
  uStack_108 = uStack_f0;
  uStack_140 = uVar2;
  uStack_13c = extraout_w1_00;
  uStack_118 = uVar2;
  uStack_114 = extraout_w1_00;
  uStack_110 = uStack_138;
  uStack_10c = uStack_134;
  FUN_00014cb4(&uStack_140,&uStack_b0,0x34f30,&UNK_000285f8);
  FUN_00014cfc(&uStack_118,0x34f30,&UNK_000285f8);
  uStack_e8 = uStack_168;
  uStack_f0 = uStack_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_d0 = uStack_150;
  uStack_c4 = 0x100;
  uStack_a8 = uStack_168;
  uStack_b0 = uStack_170;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  uStack_90 = uStack_150;
  uStack_84 = 0x100;
  uStack_c8 = uVar1;
  uStack_c0 = uVar3;
  uStack_bc = extraout_w1_01;
  uStack_88 = uVar1;
  uStack_80 = uVar3;
  uStack_7c = extraout_w1_01;
  FUN_00014cb4(&uStack_f0,auStack_1a8,0x34f38,&UNK_00028600);
  FUN_00014cfc(&uStack_b0,0x34f38,&UNK_00028600);
  in_w8[1] = uStack_e8;
  *in_w8 = uStack_f0;
  in_w8[3] = uStack_d8;
  in_w8[2] = uStack_e0;
  in_w8[5] = CONCAT26(uStack_c2,CONCAT24(uStack_c4,uStack_c8));
  in_w8[4] = uStack_d0;
  in_w8[6] = CONCAT44(uStack_bc,uStack_c0);
  return;
}



/* Entry: 00014cb4; end: 00014cfb;  */

undefined8 FUN_00014cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_3,param_4);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00014cfc; end: 00014d3b;  */

undefined8 FUN_00014cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}



/* Entry: 00014d3c; end: 00014d3f;  */

void FUN_00014d3c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (iRam00034f3c != 0) {
    return;
  }
  uVar2 = FUN_00010a14(0x34f38,&UNK_00028600);
  uVar1 = FUN_00014db8();
  uStack_24 = FUN_00014e28();
  uStack_28 = uVar1;
  iRam00034f3c = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar2,&uStack_28);
  return;
}



/* Entry: 00014d40; end: 00014db7;  */

void FUN_00014d40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (iRam00034f3c != 0) {
    return;
  }
  uVar2 = FUN_00010a14(0x34f38,&UNK_00028600);
  uVar1 = FUN_00014db8();
  uStack_24 = FUN_00014e28();
  uStack_28 = uVar1;
  iRam00034f3c = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar2,&uStack_28);
  return;
}



/* Entry: 00014db8; end: 00014e27;  */

void FUN_00014db8(void)

{
  undefined8 uVar1;
  undefined *puStack_18;
  undefined *puStack_14;
  
  if (iRam00034f40 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f30,&UNK_000285f8);
  puStack_18 = PTR___s7SwiftUI4TextVAA4ViewAAWP_000302c8;
  puStack_14 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_000301b4;
  iRam00034f40 = _swift_getWitnessTable
                           (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_000301e0
                            ,uVar1,&puStack_18);
  return;
}



/* Entry: 00014e28; end: 00014e77;  */

void FUN_00014e28(void)

{
  undefined8 uVar1;
  
  if (iRam00034f44 != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f48,&UNK_00028608);
  iRam00034f44 = _swift_getWitnessTable
                           (PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_00030248,uVar1);
  return;
}



/* Entry: 00014e78; end: 00014ea3;  */

longlong FUN_00014e78(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  _swift_retain((ulonglong)uVar1);
  return (ulonglong)uVar1 + 8;
}



/* Entry: 00014ea4; end: 00014ee7;  */

void FUN_00014ea4(int param_1)

{
  _objc_release_x8();
  _swift_bridgeObjectRelease(*(undefined4 *)(param_1 + 8));
  _swift_release(*(undefined4 *)(param_1 + 0xc));
  FUN_000103d0(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00027678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_00030570)(*(undefined4 *)(param_1 + 0x1c));
  return;
}



/* Entry: 00014ee8; end: 00014f7f;  */

undefined4 * FUN_00014ee8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar3 = *(undefined1 *)(param_2 + 6);
  _objc_retain_x9();
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 4);
  FUN_000103b4(param_2[5],uVar3);
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar3;
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  param_1[7] = param_2[7];
  _swift_retain();
  return param_1;
}



/* Entry: 00014f80; end: 0001504f;  */

undefined4 * FUN_00014f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
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
  uVar1 = param_2[5];
  uVar3 = *(undefined1 *)(param_2 + 6);
  FUN_000103b4(uVar1,uVar3);
  uVar2 = param_1[5];
  param_1[5] = uVar1;
  uVar4 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar3;
  FUN_000103d0(uVar2,uVar4);
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 00015050; end: 0001505b;  */

void FUN_00015050(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0001505c; end: 000150eb;  */

undefined4 * FUN_0001505c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  *param_1 = *param_2;
  _objc_release_x8();
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  uVar2 = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar2;
  FUN_000103d0(param_1[5],uVar3);
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 000150ec; end: 0001512f;  */

int FUN_000150ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1000 < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x1001;
  }
  uVar1 = param_1[1];
  if (0xfff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00015130; end: 00015177;  */

void FUN_00015130(ulonglong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x1001) {
    if (0x1000 < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(uint *)((int)param_1 + 4) = param_2 - 1;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulonglong)(param_2 - 0x1001);
    param_1[1] = 0;
    if (0x1000 < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Entry: 00015178; end: 00015187;  */

undefined1  [16] FUN_00015178(void)

{
  return ZEXT816(0x30818);
}



/* Entry: 00015188; end: 00015197;  */

void FUN_00015188(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000275e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_00030540)(param_1,&UNK_00029b3c,1);
  return;
}



/* Entry: 00015198; end: 0001534f;  */

void FUN_00015198(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *in_w8;
  undefined8 *unaff_w20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_cc [36];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  code *pcStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  code *pcStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  
  FUN_00015350();
  uVar2 = _swift_allocObject(&UNK_00030834,0x28,3);
  uVar7 = *unaff_w20;
  uVar6 = unaff_w20[3];
  uVar5 = unaff_w20[2];
  *(undefined8 *)(uVar2 + 0x10) = unaff_w20[1];
  *(undefined8 *)(uVar2 + 8) = uVar7;
  *(undefined8 *)(uVar2 + 0x20) = uVar6;
  *(undefined8 *)(uVar2 + 0x18) = uVar5;
  _swift_beginAccess((ulonglong)*(uint *)((int)unaff_w20 + 4) + (longlong)iRam00035000,&uStack_a8,
                     0x21,0);
  iVar3 = FUN_00010468(0x34f50,&UNK_00028678);
  FUN_000159e4();
  FUN_00010468(0x34f58,&UNK_00028680);
  __s7Combine9PublishedV14projectedValueAC9PublisherVyx_Gvg();
  _swift_endAccess(&uStack_a8);
  iVar4 = _swift_allocObject(&UNK_00030848,0x28,3);
  uVar5 = *unaff_w20;
  uVar7 = unaff_w20[3];
  uVar6 = unaff_w20[2];
  *(undefined8 *)(iVar4 + 0x10) = unaff_w20[1];
  *(undefined8 *)(iVar4 + 8) = uVar5;
  *(undefined8 *)(iVar4 + 0x20) = uVar7;
  *(undefined8 *)(iVar4 + 0x18) = uVar6;
  uStack_a8 = uStack_84;
  uStack_a4 = uStack_80;
  uStack_a0 = uStack_7c;
  uStack_9c = uStack_78;
  uStack_98 = CONCAT31(uStack_98._1_3_,uStack_74);
  pcStack_94 = FUN_000159dc;
  uStack_8c = 0;
  uStack_88 = 0;
  in_w8[1] = CONCAT44(uStack_78,uStack_7c);
  *in_w8 = CONCAT44(uStack_80,uStack_84);
  in_w8[3] = (ulonglong)uVar2;
  in_w8[2] = CONCAT44(FUN_000159dc,uStack_98);
  *(undefined4 *)(in_w8 + 4) = 0;
  puVar1 = (undefined4 *)((int)in_w8 + *(int *)(iVar3 + 0x20));
  *puVar1 = FUN_00015a60;
  puVar1[1] = iVar4;
  pcStack_70 = FUN_000159dc;
  uStack_68 = 0;
  uStack_90 = uVar2;
  uStack_6c = uVar2;
  FUN_000159e4();
  FUN_00015b74(&uStack_a8,auStack_cc,0x34f60,&UNK_00028688);
  FUN_00015bf0(&uStack_84,0x34f60,&UNK_00028688);
  return;
}



/* Entry: 00015350; end: 0001544f;  */

void FUN_00015350(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_w8;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_50 = *(undefined8 *)(param_1 + 8);
  FUN_00010468(0x34f68,&UNK_00028698);
  __s7SwiftUI5StateV12wrappedValuexvg();
  iVar1 = iStack_68;
  if (iStack_68 != 0) {
    if (*(int *)(iStack_68 + 8) != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x18);
      uStack_50 = *(undefined8 *)(param_1 + 0x10);
      FUN_00010468(0x34f70,&UNK_000286a0);
      __s7SwiftUI5StateV12wrappedValuexvg();
      uStack_5c = uStack_60;
      uStack_60 = iStack_64;
      iStack_64 = iStack_68;
      uStack_58 = 0;
      iStack_68 = iVar1;
      goto LAB_000153fc;
    }
    _swift_bridgeObjectRelease(iStack_68);
  }
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 1;
LAB_000153fc:
  uVar2 = FUN_00015c30();
  uVar3 = FUN_00015c70();
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (&iStack_68,&UNK_00030700,&UNK_00030878,uVar2,uVar3);
  in_w8[1] = uStack_48;
  *in_w8 = uStack_50;
  *(undefined1 *)(in_w8 + 2) = uStack_40;
  return;
}



/* Entry: 00015450; end: 000154db;  */

void FUN_00015450(void)

{
  undefined8 uVar1;
  
  _objc_opt_self(uRam0003483c);
  func_0x000277c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000278a0();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  uVar1 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (uVar1,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                     PTR___sSSSHsWP_000303d4);
  _objc_release_x21();
  FUN_000154dc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0002754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0003050c)(uVar1);
  return;
}



/* Entry: 000154dc; end: 0001599b;  */

/* WARNING: Removing unreachable block (ram,0x00015760) */

void FUN_000154dc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  ulonglong extraout_x1_01;
  undefined *puVar16;
  int unaff_w20;
  undefined1 auStack_ac [12];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_74 [4];
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if (*(int *)(param_1 + 8) == 0) {
LAB_000155cc:
    uStack_90 = *(ulonglong *)(unaff_w20 + 8);
    uStack_70 = uStack_70 & 0xffffffff00000000;
    uVar13 = FUN_00010468(0x34f68,&UNK_00028698);
    __s7SwiftUI5StateV12wrappedValuexvs(&uStack_70,uVar13);
    uStack_88 = *(undefined8 *)(unaff_w20 + 0x18);
    uStack_90 = *(ulonglong *)(unaff_w20 + 0x10);
    uStack_70 = 0xa5949ff0;
    uStack_68 = &UNK_0000a400;
    uVar13 = FUN_00010468(0x34f70,&UNK_000286a0);
    __s7SwiftUI5StateV12wrappedValuexvs(&uStack_70,uVar13);
  }
  else {
    puVar9 = (undefined4 *)FUN_0002007c();
    if (*(int *)(param_1 + 8) == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
LAB_000155b4:
      FUN_00015bf0(&uStack_90,0x34d10,&UNK_00028690);
      goto LAB_000155cc;
    }
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar4 = puVar9[2];
    FUN_000103b4(uVar2,uVar4);
    _swift_bridgeObjectRetain(param_1);
    iVar10 = FUN_0001aa38(uVar1,uVar2,uVar4);
    if ((extraout_x1 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_000103d0(uVar2,uVar4);
      goto LAB_000155b4;
    }
    FUN_000104b4((ulonglong)*(uint *)(param_1 + 0x20) + (longlong)iVar10 * 0x10,&uStack_90);
    _swift_bridgeObjectRelease(param_1);
    FUN_000103d0(uVar2,uVar4);
    if (uStack_88._4_4_ == 0) goto LAB_000155b4;
    FUN_00015bf0(&uStack_90,0x34d10,&UNK_00028690);
  }
  puVar9 = (undefined4 *)FUN_0002007c();
  if (*(int *)(param_1 + 8) == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    bVar5 = *(byte *)(puVar9 + 2);
    bVar6 = *(byte *)((int)puVar9 + 9);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar7 = *(ushort *)((int)puVar9 + 10);
    _swift_bridgeObjectRetain(param_1);
    FUN_000103b4(uVar2,bVar5);
    iVar10 = FUN_0001aa38(uVar1,uVar2,(uint)bVar5 | (uint)uVar7 << 0x10 | (uint)bVar6 << 8);
    if ((extraout_x1_00 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      uStack_90 = 0;
      uStack_88 = 0;
    }
    else {
      FUN_000104b4((ulonglong)*(uint *)(param_1 + 0x20) + (longlong)iVar10 * 0x10,&uStack_90);
      _swift_bridgeObjectRelease(param_1);
    }
    FUN_000103d0(uVar2,bVar5);
    if (uStack_88._4_4_ != 0) {
      uVar12 = _swift_dynamicCast(&uStack_70,&uStack_90,ZEXT48(PTR___sypN_000304dc) + 4,
                                  PTR___s10Foundation4DataVN_00030080,6);
      if ((uVar12 & 1) == 0) {
        return;
      }
      uVar1 = (undefined4)uStack_70;
      uVar2 = uStack_70._4_4_;
      uVar8 = (undefined1)uStack_68;
      iVar10 = __s10Foundation11JSONDecoderCMa(0);
      _swift_allocObject(iVar10,*(undefined4 *)(iVar10 + 0x1c),*(undefined2 *)(iVar10 + 0x20));
      uVar13 = __s10Foundation11JSONDecoderCACycfc();
      uVar14 = FUN_00010468(0x34f00,&UNK_00028570);
      uVar15 = FUN_00015a84();
      __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                (uVar14,uVar1,uVar2,uVar8,uVar14,uVar15);
      _swift_release(uVar13);
      uStack_70 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_90);
      uStack_90 = *(ulonglong *)(unaff_w20 + 8);
      uVar13 = FUN_00010468(0x34f68,&UNK_00028698);
      __s7SwiftUI5StateV12wrappedValuexvs(&uStack_70,uVar13);
      puVar9 = (undefined4 *)FUN_000200e8();
      if (*(int *)(param_1 + 8) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
LAB_000158a8:
        FUN_00015bf0(&uStack_90,0x34d10,&UNK_00028690);
LAB_000158c0:
        uStack_68._0_1_ = 0;
        uStack_68._2_2_ = 0;
        uStack_70 = 0xa5949ff0;
        uStack_68._1_1_ = 0xa4;
      }
      else {
        bVar5 = *(byte *)(puVar9 + 2);
        bVar6 = *(byte *)((int)puVar9 + 9);
        uVar4 = *puVar9;
        uVar3 = puVar9[1];
        uVar7 = *(ushort *)((int)puVar9 + 10);
        _swift_bridgeObjectRetain(param_1);
        FUN_000103b4(uVar3,bVar5);
        iVar10 = FUN_0001aa38(uVar4,uVar3,(uint)bVar5 | (uint)uVar7 << 0x10 | (uint)bVar6 << 8);
        if ((extraout_x1_01 & 1) == 0) {
          _swift_bridgeObjectRelease(param_1);
          uStack_90 = 0;
          uStack_88 = 0;
        }
        else {
          FUN_000104b4((ulonglong)*(uint *)(param_1 + 0x20) + (longlong)iVar10 * 0x10,&uStack_90);
          _swift_bridgeObjectRelease(param_1);
        }
        FUN_000103d0(uVar3,bVar5);
        if (uStack_88._4_4_ == 0) goto LAB_000158a8;
        uVar12 = _swift_dynamicCast(&uStack_70,&uStack_90,ZEXT48(PTR___sypN_000304dc) + 4,
                                    PTR___sSSN_000303d0,6);
        if ((uVar12 & 1) == 0) goto LAB_000158c0;
      }
      uStack_90 = *(ulonglong *)(unaff_w20 + 0x10);
      auStack_74 = *(undefined1 (*) [4])(unaff_w20 + 0x1c);
      uStack_88 = *(undefined8 *)(unaff_w20 + 0x18);
      uStack_a0 = uStack_70;
      uStack_98 = (undefined1)uStack_68;
      uStack_97 = uStack_68._1_1_;
      uStack_96 = uStack_68._2_2_;
      uStack_70 = uStack_90;
      uStack_68 = *(undefined **)(unaff_w20 + 0x18);
      FUN_00015b38(&uStack_70,auStack_ac);
      uVar13 = 0x34f88;
      puVar16 = &UNK_000286b0;
      FUN_00015b74(auStack_74,auStack_ac,0x34f88,&UNK_000286b0);
      uVar14 = FUN_00010468(0x34f70,&UNK_000286a0);
      __s7SwiftUI5StateV12wrappedValuexvs(&uStack_a0,uVar14);
      FUN_000146c0(uVar1,uVar2,uVar8);
      FUN_00015bbc(&uStack_70);
      puVar11 = (ulonglong *)auStack_74;
      goto LAB_00015978;
    }
  }
  uVar13 = 0x34d10;
  puVar16 = &UNK_00028690;
  puVar11 = &uStack_90;
LAB_00015978:
  FUN_00015bf0(puVar11,uVar13,puVar16);
  return;
}



/* Entry: 0001599c; end: 0001599f;  */

void FUN_0001599c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_000302d8
  )();
  return;
}



/* Entry: 000159a0; end: 000159a3;  */

void FUN_000159a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC4List4view6inputsAA01_cE7OutputsVAA11_GraphValueVyxG_AA01_cE6InputsVtFZ_000302dc
  )();
  return;
}



/* Entry: 000159a4; end: 000159a7;  */

void FUN_000159a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00026f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_000302f0)();
  return;
}



/* Entry: 000159a8; end: 000159d7;  */

void FUN_000159a8(void)

{
  FUN_00015198();
  return;
}



/* Entry: 000159d8; end: 000159db;  */

void FUN_000159d8(void)

{
  int unaff_w20;
  
  _objc_release_x8();
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 0x10));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x14));
  FUN_000103d0(*(undefined4 *)(unaff_w20 + 0x1c),*(undefined1 *)(unaff_w20 + 0x20));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 000159dc; end: 000159e3;  */

void FUN_000159dc(void)

{
  undefined8 uVar1;
  
  _objc_opt_self(uRam0003483c);
  func_0x000277c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000278a0();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  uVar1 = __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (uVar1,PTR___sSSN_000303d0,ZEXT48(PTR___sypN_000304dc) + 4,
                     PTR___sSSSHsWP_000303d4);
  _objc_release_x21();
  FUN_000154dc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0002754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0003050c)(uVar1);
  return;
}



/* Entry: 000159e4; end: 00015a17;  */

undefined8 FUN_000159e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00014ee8(param_2,param_1,&UNK_00030818);
  return param_2;
}



/* Entry: 00015a18; end: 00015a5f;  */

void FUN_00015a18(void)

{
  int unaff_w20;
  
  _objc_release_x8();
  _swift_bridgeObjectRelease(*(undefined4 *)(unaff_w20 + 0x10));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x14));
  FUN_000103d0(*(undefined4 *)(unaff_w20 + 0x1c),*(undefined1 *)(unaff_w20 + 0x20));
  _swift_release(*(undefined4 *)(unaff_w20 + 0x24));
                    /* WARNING: Could not recover jumptable at 0x0002757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0003051c)();
  return;
}



/* Entry: 00015a60; end: 00015a83;  */

void FUN_00015a60(undefined4 *param_1)

{
  FUN_000154dc(*param_1);
  return;
}



/* Entry: 00015a84; end: 00015af3;  */

void FUN_00015a84(void)

{
  undefined8 uVar1;
  undefined4 uStack_24;
  
  if (iRam00034f7c != 0) {
    return;
  }
  uVar1 = FUN_00010a14(0x34f00,&UNK_00028570);
  uStack_24 = FUN_00015af4();
  iRam00034f7c = _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_000303f4,uVar1,&uStack_24);
  return;
}



/* Entry: 00015af4; end: 00015b37;  */

void FUN_00015af4(void)

{
  undefined8 uVar1;
  
  if (iRam00034f80 != 0) {
    return;
  }
  uVar1 = FUN_00020340(0xff);
  iRam00034f80 = _swift_getWitnessTable(&UNK_00028d98,uVar1);
  return;
}



/* Entry: 00015b38; end: 00015b73;  */

undefined8 FUN_00015b38(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(int *)(PTR___sSSN_000303d0 + -4) + 8))(param_2,param_1);
  return param_2;
}



/* Entry: 00015b74; end: 00015bbb;  */

undefined8 FUN_00015b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_3,param_4);
  (**(code **)(*(int *)(iVar1 + -4) + 8))(param_2,param_1,iVar1);
  return param_2;
}



/* Entry: 00015bbc; end: 00015bef;  */

undefined8 FUN_00015bbc(undefined8 param_1)

{
  (**(code **)(*(int *)(PTR___sSSN_000303d0 + -4) + 4))();
  return param_1;
}



/* Entry: 00015bf0; end: 00015c2f;  */

undefined8 FUN_00015bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00010468(param_2,param_3);
  (**(code **)(*(int *)(iVar1 + -4) + 4))(param_1,iVar1);
  return param_1;
}


