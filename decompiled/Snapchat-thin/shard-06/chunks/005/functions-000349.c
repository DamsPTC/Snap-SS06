/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049d6d7c; end: 1049d6dcb; -[FBSDKProfile encodeWithCoder:] */

void FUN_1049d6d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1049d6570(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049d6dcc; end: 1049d6dd3;  */

ulong FUN_1049d6dcc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss30_findStringSwitchCaseWithCache5cases6string5cacheSiSays06StaticB0VG_SSs07_OpaquebcF0VztF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (0x10 < uVar2) {
    uVar2 = 0x11;
  }
  return uVar2;
}



/* Entry: 1049d6dd4; end: 1049d6faf;  */

undefined8 FUN_1049d6dd4(void)

{
  return 0x11;
}



/* Entry: 1049d6fb0; end: 1049d7033;  */

uint FUN_1049d6fb0(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  func_0x0001049d6de8();
  pbVar3 = param_2;
  func_0x0001049d6de8();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049d7034; end: 1049d7183;  */

void FUN_1049d7034(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001049d6de8(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049d7184; end: 1049d718b;  */

/* WARNING: Possible PIC construction at 0x0001049d70a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001049d6fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001049d70ac) */
/* WARNING: Removing unreachable block (ram,0x0001049d6fcc) */
/* WARNING: Removing unreachable block (ram,0x0001049d6fe4) */
/* WARNING: Removing unreachable block (ram,0x0001049d6fe8) */
/* WARNING: Removing unreachable block (ram,0x0001049d700c) */
/* WARNING: Removing unreachable block (ram,0x0001049d6fec) */
/* WARNING: Removing unreachable block (ram,0x0001049d7010) */

undefined1  [16] FUN_1049d7184(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  pbVar3 = (byte *)(ulong)*unaff_x20;
code_r0x0001049d7188:
  do {
    pbVar4 = (byte *)0xe600000000000000;
    pbVar2 = (byte *)0x444972657375;
    pbVar6 = (byte *)((ulong)pbVar3 & 0xff);
    puVar1 = (undefined1 *)register0x00000008;
    pbVar3 = pbVar2;
    pbVar5 = param_3;
    switch(pbVar6) {
    default:
      pbVar6 = (byte *)0x64;
    case (byte *)0x33:
    case (byte *)0x44:
    case (byte *)0x52:
    case (byte *)0x92:
    case (byte *)0xca:
      pbVar6 = (byte *)((ulong)pbVar6 | 0xe900000000000000);
    case (byte *)0x37:
    case (byte *)0x4b:
    case (byte *)0x5f:
    case (byte *)0x73:
    case (byte *)0x7b:
    case (byte *)0x83:
    case (byte *)0x8b:
    case (byte *)0x9f:
    case (byte *)0xb3:
    case (byte *)0xbb:
    case (byte *)0xc3:
    case (byte *)0xd7:
    case (byte *)0xeb:
    case (byte *)0xf3:
    case (byte *)0xfb:
      pbVar4 = (byte *)((ulong)pbVar6 | 1);
    case (byte *)0x42:
    case (byte *)0x6a:
    case (byte *)0xaa:
    case (byte *)0xac:
    case (byte *)0xe2:
      pbVar2 = (byte *)0x6966;
    case (byte *)0x2c:
    case (byte *)0x6c:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x73720000);
    case (byte *)0x1b:
    case (byte *)0x5b:
    case (byte *)0x9b:
    case (byte *)0xd3:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x4e7400000000);
    case (byte *)0xe4:
      auVar7._0_8_ = (ulong)pbVar2 | 0x6d61000000000000;
      auVar7._8_8_ = pbVar4;
      return auVar7;
    case (byte *)0x2:
      auVar14._8_8_ = 0xea0000000000656d;
      auVar14._0_8_ = 0x614e656c6464696d;
      return auVar14;
    case (byte *)0x3:
      auVar16._8_8_ = 0xe800000000000000;
      auVar16._0_8_ = 0x656d614e7473616c;
      return auVar16;
    case (byte *)0x4:
      pbVar4 = (byte *)0xe400000000000000;
    case (byte *)0xd4:
      auVar11._8_8_ = pbVar4;
      auVar11._0_8_ = 0x656d616e;
      return auVar11;
    case (byte *)0x5:
    case (byte *)0x19:
    case (byte *)0x59:
      pbVar4 = (byte *)0xe700000000000000;
    case (byte *)0x99:
    case (byte *)0xd1:
      pbVar2 = (byte *)0x6b6e696c;
    case (byte *)0xd0:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x525500000000);
    case (byte *)0xb4:
      auVar18._0_8_ = (ulong)pbVar2 | 0x4c000000000000;
      auVar18._8_8_ = pbVar4;
      return auVar18;
    case (byte *)0x6:
      auVar20._8_8_ = 0xeb00000000657461;
      auVar20._0_8_ = 0x4468736572666572;
      return auVar20;
    case (byte *)0x7:
      pbVar4 = (byte *)0xe800000000000000;
      pbVar2 = (byte *)0x6d69;
    case (byte *)0x70:
    case (byte *)0x78:
    case (byte *)0x80:
    case (byte *)0x88:
      auVar17._0_8_ = (ulong)pbVar2 & 0xffff00000000ffff | 0x4c52556567610000;
      auVar17._8_8_ = pbVar4;
      return auVar17;
    case (byte *)0x8:
      auVar22._8_8_ = 0xe500000000000000;
      auVar22._0_8_ = 0x6c69616d65;
      return auVar22;
    case (byte *)0x9:
      pbVar6 = (byte *)0x64;
    case (byte *)0xec:
    case (byte *)0xf4:
      pbVar4 = (byte *)(((ulong)pbVar6 | 0xe900000000000000) + 0xf);
    case (byte *)0xb0:
    case (byte *)0xb8:
    case (byte *)0xc0:
      pbVar2 = (byte *)0x65697266;
    case (byte *)0x24:
      auVar13._0_8_ = (ulong)pbVar2 & 0xffff0000ffffffff | 0x4449646e00000000;
      auVar13._8_8_ = pbVar4;
      return auVar13;
    case (byte *)0xa:
    case (byte *)0x48:
      auVar21._8_8_ = 0xe900000000000064;
      auVar21._0_8_ = 0x6574696d694c7369;
      return auVar21;
    case (byte *)0xb:
      auVar10._8_8_ = 0xe800000000000000;
      auVar10._0_8_ = 0x7961646874726962;
      return auVar10;
    case (byte *)0xc:
    case (byte *)0x38:
      auVar12._8_8_ = 0xe800000000000000;
      auVar12._0_8_ = 0x65676e6152656761;
      return auVar12;
    case (byte *)0xd:
      pbVar4 = (byte *)0xe800000000000000;
      pbVar2 = (byte *)0x6f68;
    case (byte *)0x5c:
      auVar19._0_8_ = (ulong)pbVar2 & 0xffff00000000ffff | 0x6e776f74656d0000;
      auVar19._8_8_ = pbVar4;
      return auVar19;
    case (byte *)0xe:
    case (byte *)0x7c:
      pbVar4 = (byte *)0xe800000000000000;
    case (byte *)0xe8:
    case (byte *)0xf0:
    case (byte *)0xf8:
      auVar9._8_8_ = pbVar4;
      auVar9._0_8_ = 0x6e6f697461636f6c;
      return auVar9;
    case (byte *)0xf:
    case (byte *)0x9c:
      auVar15._8_8_ = 0xe600000000000000;
      auVar15._0_8_ = 0x7265646e6567;
      return auVar15;
    case (byte *)0x10:
    case (byte *)0x30:
      pbVar4 = (byte *)0xeb00000000736e6f;
      pbVar2 = (byte *)0x697373696d726570;
    case (byte *)0x0:
    case (byte *)0x35:
    case (byte *)0x49:
    case (byte *)0x5d:
    case (byte *)0x71:
    case (byte *)0x79:
    case (byte *)0x81:
    case (byte *)0x89:
    case (byte *)0x9d:
    case (byte *)0xb1:
    case (byte *)0xb9:
    case (byte *)0xc1:
    case (byte *)0xd5:
    case (byte *)0xe9:
    case (byte *)0xf1:
    case (byte *)0xf9:
      auVar8._8_8_ = pbVar4;
      auVar8._0_8_ = pbVar2;
      return auVar8;
    case (byte *)0x18:
    case (byte *)0xc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(unaff_x19,0x444972657375);
      auVar29._8_8_ = pbVar2;
      auVar29._0_8_ = unaff_x19;
      return auVar29;
    case (byte *)0x20:
      unaff_x19 = pbVar6;
    case (byte *)0xfc:
      FUN_1049d7688();
      *unaff_x19 = (byte)pbVar2;
      auVar27._8_8_ = pbVar4;
      auVar27._0_8_ = pbVar2;
      return auVar27;
    case (byte *)0x2f:
    case (byte *)0x32:
    case (byte *)0xd8:
      _swift_bridgeObjectRelease();
      auVar23._4_4_ = 0;
      auVar23._0_4_ = (uint)unaff_x21 & 1;
      auVar23._8_8_ = pbVar4;
      return auVar23;
    case (byte *)0x34:
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    case (byte *)0x84:
      unaff_x29 = puVar1 + 0x20;
      pbVar3 = (byte *)(ulong)bRam0000444972657375;
      unaff_x20 = (byte *)(ulong)bRame600000000000000;
      unaff_x30 = 0x1049d6fcc;
      register0x00000008 = (BADSPACEBASE *)puVar1;
      break;
    case (byte *)0x36:
    case (byte *)0x4a:
    case (byte *)0x5e:
    case (byte *)0x72:
    case (byte *)0x7a:
    case (byte *)0x82:
    case (byte *)0x8a:
    case (byte *)0x9e:
    case (byte *)0xb2:
    case (byte *)0xba:
    case (byte *)0xc2:
    case (byte *)0xd6:
    case (byte *)0xea:
    case (byte *)0xf2:
    case (byte *)0xfa:
      __sSS4hash4intoys6HasherVz_tF(0x444972657375,param_3,unaff_x20);
      pbVar2 = unaff_x20;
      pbVar4 = param_3;
    case (byte *)0x3a:
    case (byte *)0x62:
    case (byte *)0xa2:
    case (byte *)0xda:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pbVar2);
      auVar30._8_8_ = pbVar4;
      auVar30._0_8_ = pbVar2;
      return auVar30;
    case (byte *)0x4f:
    case (byte *)0x7f:
    case (byte *)0x87:
    case (byte *)0x8f:
    case (byte *)0xbf:
    case (byte *)0xc7:
    case (byte *)0xff:
      *(undefined1 **)((long)register0x00000008 + 0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    case (byte *)0x60:
      pbVar3 = pbVar2;
      func_0x0001049d7934();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)(0x444972657375,pbVar3);
      auVar28._8_8_ = pbVar3;
      auVar28._0_8_ = pbVar2;
      return auVar28;
    case (byte *)0x61:
    case (byte *)0xa0:
    case (byte *)0xa1:
    case (byte *)0xd9:
      unaff_x19 = (byte *)0xe600000000000000;
    case (byte *)0x39:
      pbVar2 = (byte *)((long)register0x00000008 + 8);
    case (byte *)0x4d:
      pbVar4 = param_3;
    case (byte *)0x7d:
    case (byte *)0x85:
    case (byte *)0x8d:
    case (byte *)0xbd:
    case (byte *)0xc5:
    case (byte *)0xfd:
      param_3 = unaff_x19;
      pbVar3 = pbVar2;
      unaff_x19 = param_3;
    case (byte *)0x4c:
      pbVar2 = unaff_x19;
      __sSS4hash4intoys6HasherVz_tF(pbVar3,pbVar4,param_3);
      _swift_bridgeObjectRelease(pbVar2);
    case (byte *)0x58:
      __ss6HasherV9_finalizeSiyF();
      auVar25._8_8_ = pbVar4;
      auVar25._0_8_ = pbVar2;
      return auVar25;
    case (byte *)0x74:
      pbVar3 = (byte *)((long)register0x00000008 + 8);
      pbVar5 = (byte *)0xe600000000000000;
      pbVar4 = param_3;
      unaff_x19 = (byte *)0xe600000000000000;
    case (byte *)0x1a:
    case (byte *)0x5a:
    case (byte *)0x9a:
    case (byte *)0xd2:
      pbVar2 = unaff_x19;
      __sSS4hash4intoys6HasherVz_tF(pbVar3,pbVar4,pbVar5);
      _swift_bridgeObjectRelease(pbVar2);
    case (byte *)0x25:
      __ss6HasherV9_finalizeSiyF();
      auVar24._8_8_ = pbVar4;
      auVar24._0_8_ = pbVar2;
      return auVar24;
    case (byte *)0x8c:
      unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x10);
      unaff_x19 = pbVar2;
    case (byte *)0x21:
    case (byte *)0x75:
    case (byte *)0xed:
    case (byte *)0xf5:
      pbVar3 = (byte *)(ulong)*unaff_x20;
      unaff_x30 = 0x1049d70ac;
      break;
    case (byte *)0xb5:
      goto code_r0x0001049d7188;
    case (byte *)0xb6:
    case (byte *)0x4e:
    case (byte *)0x7e:
    case (byte *)0x86:
    case (byte *)0x8e:
    case (byte *)0xbe:
    case (byte *)0xc6:
    case (byte *)0xfe:
      pbVar2 = (byte *)CONCAT71(uRam0000444972657376,bRam0000444972657375);
      pbVar4 = pbRam000044497265737d;
      FUN_1049d7688(pbVar2,pbRam000044497265737d);
      unaff_x19 = pbVar6;
    case (byte *)0x22:
    case (byte *)0x26:
    case (byte *)0x76:
    case (byte *)0xbc:
    case (byte *)0xee:
    case (byte *)0xf6:
      *unaff_x19 = (byte)pbVar2;
      auVar26._8_8_ = pbVar4;
      auVar26._0_8_ = pbVar2;
      return auVar26;
    }
  } while( true );
}



/* Entry: 1049d718c; end: 1049d71af;  */

void FUN_1049d718c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1049d7688();
  *param_1 = param_2;
  return;
}



/* Entry: 1049d71b0; end: 1049d71c7;  */

undefined1  [16] FUN_1049d71b0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1049d71c8; end: 1049d729b;  */

void FUN_1049d71c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001049d7934();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1049d729c; end: 1049d7647;  */

void FUN_1049d729c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_98 [3];
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
LAB_1049d73b0:
    _swift_beginAccess(0x1138158e0,auStack_80,0,0);
    uVar3 = uRam0000000113815908;
    uVar2 = uRam0000000113815900;
    uVar1 = uRam00000001138158f8;
    uVar4 = uRam00000001138158f0;
    uVar7 = uRam00000001138158e8;
    lVar9 = lRam00000001138158e0;
    uVar8 = uRam00000001138158e8;
    uVar12 = uRam00000001138158f0;
    uVar13 = uRam00000001138158f8;
    uVar14 = uRam0000000113815900;
    uVar15 = uRam0000000113815908;
    if (lRam00000001138158e0 == 0) {
      plVar10 = alStack_98;
      plVar11 = (long *)0x0;
      _swift_beginAccess(0x113815910,plVar10,0,0);
      uVar15 = uRam0000000113815938;
      uVar14 = uRam0000000113815930;
      uVar13 = uRam0000000113815928;
      uVar12 = uRam0000000113815920;
      uVar8 = uRam0000000113815918;
      if (lRam0000000113815910 == 0) goto LAB_1049d75f4;
      _swift_unknownObjectRetain(uRam0000000113815918);
      _swift_unknownObjectRetain(uVar12);
      _swift_unknownObjectRetain(uVar13);
      _swift_unknownObjectRetain(uVar14);
      _swift_unknownObjectRetain(uVar15);
    }
    func_0x0001049d3cc0(lVar9,uVar7,uVar4,uVar1,uVar2,uVar3);
    _swift_unknownObjectRelease(uVar15);
    _swift_unknownObjectRelease(uVar14);
    _swift_unknownObjectRelease(uVar13);
    _swift_unknownObjectRelease(uVar12);
    plVar5 = (long *)0xd00000000000002c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f227c20);
    plVar10 = (long *)PTR_s_fb_removeObjectForKey__1125c5f70;
    plVar11 = plVar5;
    _objc_msgSend(uVar8);
    _objc_release(plVar5);
  }
  else {
    plVar11 = (long *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    _swift_getInitializedObjCClass();
    auStack_80[0] = 0;
    _objc_retain();
    plVar10 = (long *)PTR_s_archivedDataWithRootObject_requi_11259ff88;
    _objc_msgSend(plVar11,PTR_s_archivedDataWithRootObject_requi_11259ff88,param_1,0,auStack_80);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = auStack_80[0];
    _objc_retain();
    if (plVar11 == (long *)0x0) {
      uVar4 = uVar7;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(uVar7);
      _swift_willThrow();
      _objc_release(param_1);
      _swift_errorRelease(uVar4);
      goto LAB_1049d73b0;
    }
    plVar5 = plVar11;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(plVar11);
    _swift_beginAccess(0x1138158e0,auStack_80,0,0);
    uVar3 = uRam0000000113815908;
    uVar2 = uRam0000000113815900;
    uVar1 = uRam00000001138158f8;
    uVar4 = uRam00000001138158f0;
    uVar7 = uRam00000001138158e8;
    lVar9 = lRam00000001138158e0;
    uVar8 = uRam00000001138158e8;
    uVar12 = uRam00000001138158f0;
    uVar13 = uRam00000001138158f8;
    uVar14 = uRam0000000113815900;
    uVar15 = uRam0000000113815908;
    if (lRam00000001138158e0 == 0) {
      plVar11 = (long *)0x0;
      _swift_beginAccess(0x113815910,alStack_98,0,0);
      uVar15 = uRam0000000113815938;
      uVar14 = uRam0000000113815930;
      uVar13 = uRam0000000113815928;
      uVar12 = uRam0000000113815920;
      uVar8 = uRam0000000113815918;
      if (lRam0000000113815910 == 0) {
        func_0x00010006c090(plVar5);
        _objc_release(param_1);
        goto LAB_1049d75f4;
      }
      _swift_unknownObjectRetain(uRam0000000113815918);
      _swift_unknownObjectRetain(uVar12);
      _swift_unknownObjectRetain(uVar13);
      _swift_unknownObjectRetain(uVar14);
      _swift_unknownObjectRetain(uVar15);
    }
    func_0x0001049d3cc0(lVar9,uVar7,uVar4,uVar1,uVar2,uVar3);
    _swift_unknownObjectRelease(uVar15);
    _swift_unknownObjectRelease(uVar14);
    _swift_unknownObjectRelease(uVar13);
    _swift_unknownObjectRelease(uVar12);
    plVar6 = plVar5;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(plVar5,plVar10);
    uVar7 = 0xd00000000000002c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002c,0x800000010f227c20);
    plVar11 = plVar6;
    _objc_msgSend(uVar8,PTR_s_fb_setObject_forKey__1125c5f88,plVar6,uVar7);
    _objc_release(param_1);
    func_0x00010006c090(plVar5);
    _objc_release(plVar6);
    _objc_release(uVar7);
  }
  _swift_unknownObjectRelease(uVar8);
LAB_1049d75f4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*plVar10 == 0) {
    lVar9 = *plVar11;
    _swift_getInitializedObjCClass();
    _swift_getObjCClassMetadata();
    *plVar10 = lVar9;
    return;
  }
  return;
}



/* Entry: 1049d7648; end: 1049d7687;  */

void FUN_1049d7648(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _swift_getInitializedObjCClass();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1049d7688; end: 1049d7703;  */

ulong FUN_1049d7688(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss30_findStringSwitchCaseWithCache5cases6string5cacheSiSays06StaticB0VG_SSs07_OpaquebcF0VztF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (0x10 < uVar2) {
    uVar2 = 0x11;
  }
  return uVar2;
}



/* Entry: 1049d7704; end: 1049d7a37;  */

void FUN_1049d7704(void)

{
  undefined *puVar1;
  
  if (puRam00000001130a3908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4b4dc;
  _swift_getWitnessTable(&UNK_10dd4b4dc,&UNK_1107bc430);
  puRam00000001130a3908 = puVar1;
  return;
}



/* Entry: 1049d7a38; end: 1049d7ac7;  */

void FUN_1049d7a38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_6;
  _swift_getObjectType(param_6);
  FUN_1049dad1c(&uStack_80,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  return;
}



/* Entry: 1049d7ac8; end: 1049d7fcb;  */

undefined8
FUN_1049d7ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
             long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,long param_15,long param_16,undefined8 param_17,undefined8 param_18
             ,undefined8 param_19,undefined8 param_20,undefined8 param_21,long param_22,
             long param_23)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long alStack_160 [9];
  undefined1 auStack_118 [8];
  long alStack_110 [2];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  lVar11 = 0x11309c628;
  lStack_78 = param_5;
  uStack_70 = param_7;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puStack_b8 = auStack_100 + -uVar10;
  lVar15 = (long)puStack_b8 - uVar10;
  lVar11 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar15 - uVar10;
  lVar11 = lVar14 - uVar10;
  _objc_allocWithZone();
  uStack_a0 = unaff_x20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uStack_88 = param_1;
  _swift_bridgeObjectRelease(param_2);
  if (param_4 == 0) {
    uStack_98 = 0;
    lVar7 = lStack_78;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uStack_98 = param_3;
    _swift_bridgeObjectRelease(param_4);
    lVar7 = lStack_78;
  }
  lStack_78 = lVar7;
  if (param_6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = uStack_70;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,param_6);
    uStack_a8 = lVar7;
    _swift_bridgeObjectRelease(param_6);
    uStack_b0 = uStack_70;
  }
  uStack_70 = uStack_b0;
  if (param_8 == 0) {
    uStack_b0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,param_8);
    _swift_bridgeObjectRelease(param_8);
  }
  if (param_10 == 0) {
    uStack_c0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_9,param_10);
    uStack_c0 = param_9;
    _swift_bridgeObjectRelease(param_10);
  }
  uStack_70 = param_13;
  uStack_80 = param_11;
  FUN_1049dad2c(param_11,lVar11,0x11309c5e0);
  lVar8 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar8 + -8);
  pcVar13 = *(code **)(lVar17 + 0x30);
  lVar7 = lVar11;
  (*pcVar13)(lVar11,1,lVar8);
  lStack_c8 = 0;
  if ((int)lVar7 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar17 + 8))(lVar11,lVar8);
    lStack_c8 = lVar7;
  }
  uStack_90 = param_12;
  FUN_1049dad2c(param_12,lVar15,0x11309c628);
  lVar9 = 0;
  __s10Foundation4DateVMa();
  lVar16 = *(long *)(lVar9 + -8);
  pcVar18 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar15;
  (*pcVar18)(lVar15,1,lVar9);
  lStack_d0 = 0;
  if ((int)lVar7 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar16 + 8))(lVar15,lVar9);
    lStack_d0 = lVar7;
  }
  FUN_1049dad2c(uStack_70,lVar14,0x11309c5e0);
  lVar15 = lVar14;
  (*pcVar13)(lVar14,1,lVar8);
  if ((int)lVar15 == 1) {
    lStack_78 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    lStack_78 = lVar15;
    (**(code **)(lVar17 + 8))(lVar14,lVar8);
  }
  puVar2 = puStack_b8;
  if (param_15 == 0) {
    param_14 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_14,param_15);
    _swift_bridgeObjectRelease(param_15);
  }
  if (param_16 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_16;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_16,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(param_16);
  }
  FUN_1049dad2c(param_17,puVar2,0x11309c628);
  puVar12 = puVar2;
  (*pcVar18)(puVar2,1,lVar9);
  if ((int)puVar12 == 1) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar16 + 8))(puVar2,lVar9);
  }
  puStack_b8 = (undefined1 *)param_17;
  if (param_22 == 0) {
    param_21 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_21,param_22);
    _swift_bridgeObjectRelease(param_22);
  }
  if (param_23 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_23;
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
              (param_23,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_23);
  }
  lStack_d8 = lVar15;
  *(long *)(lVar11 + -0x10) = lVar15;
  *(undefined1 *)(lVar11 + -0x18) = 0;
  *(undefined8 *)(lVar11 + -0x28) = param_20;
  *(undefined8 *)(lVar11 + -0x20) = param_21;
  *(undefined8 *)(lVar11 + -0x38) = param_18;
  *(undefined8 *)(lVar11 + -0x30) = param_19;
  *(long *)(lVar11 + -0x48) = lVar14;
  *(undefined1 **)(lVar11 + -0x40) = puVar12;
  *(undefined8 *)(lVar11 + -0x50) = param_14;
  *(long *)(lVar11 + -0x58) = lStack_78;
  lVar15 = lStack_d0;
  *(long *)(lVar11 + -0x60) = lStack_d0;
  uVar6 = uStack_88;
  uVar5 = uStack_98;
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  uVar1 = uStack_c0;
  lVar11 = lStack_c8;
  uStack_f8 = param_14;
  lStack_f0 = lVar14;
  puStack_e8 = puVar12;
  uStack_e0 = param_21;
  _objc_msgSend(uStack_a0,PTR_s_initWithUserID_firstName_middleN_1125254a8,uStack_88,uStack_98,
                uStack_a8,uStack_b0,uStack_c0,lStack_c8);
  _objc_release(param_18);
  _objc_release(param_19);
  _objc_release(param_20);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(lVar11);
  _objc_release(lVar15);
  _objc_release(lStack_78);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  _objc_release(puStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  func_0x0001049db6dc(puStack_b8,0x11309c628);
  func_0x0001049db6dc(uStack_70,0x11309c5e0);
  func_0x0001049db6dc(uStack_90,0x11309c628);
  func_0x0001049db6dc(uStack_80,0x11309c5e0);
  return uStack_a0;
}



/* Entry: 1049d7fcc; end: 1049d7fd7;  */

undefined8 FUN_1049d7fcc(void)

{
  return 0x1138158c0;
}



/* Entry: 1049d7fd8; end: 1049d8023; -[FBSDKProfile userID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d7fd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3940);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130a3940))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d8024; end: 1049d805b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d8024(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3940);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3940) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d805c; end: 1049d8067; -[FBSDKProfile firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d805c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a3948))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3948);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d8068; end: 1049d809f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d8068(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3948);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3948) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d80a0; end: 1049d80ab; -[FBSDKProfile middleName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d80a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a3950))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3950);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d80ac; end: 1049d80e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d80ac(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3950);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3950) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d80e4; end: 1049d80ef; -[FBSDKProfile lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d80e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a3958))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3958);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d80f0; end: 1049d8127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d80f0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3958);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3958) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d8128; end: 1049d8133; -[FBSDKProfile name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d8128(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a3960))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3960);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d8134; end: 1049d816b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d8134(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3960);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3960) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d816c; end: 1049d818f; -[FBSDKProfile linkURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d816c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = PTR___s10Foundation3URLVMa_110350988;
  puVar1 = PTR___s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF_110350908;
  lVar3 = 0x11309c5e0;
  func_0x0001048db364();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049dad2c(param_1 + _DAT_1130a3968,puVar6,0x11309c5e0);
  lVar3 = 0;
  (*(code *)puVar2)();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  uVar5 = 0;
  if ((int)puVar4 != 1) {
    (*(code *)puVar1)(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1049d8190; end: 1049d81bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d8190(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049dad2c(unaff_x20 + _DAT_1130a3968,param_1,0x11309c5e0);
  return;
}



/* Entry: 1049d81bc; end: 1049d828b; -[FBSDKProfile refreshDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d81bc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = &stack0xffffffffffffffd0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1130a3970,lVar1);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1049d828c; end: 1049d82af; -[FBSDKProfile imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d828c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = PTR___s10Foundation3URLVMa_110350988;
  puVar1 = PTR___s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF_110350908;
  lVar3 = 0x11309c5e0;
  func_0x0001048db364();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049dad2c(param_1 + _DAT_1130a3978,puVar6,0x11309c5e0);
  lVar3 = 0;
  (*(code *)puVar2)();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  uVar5 = 0;
  if ((int)puVar4 != 1) {
    (*(code *)puVar1)(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1049d82b0; end: 1049d8377;  */

void FUN_1049d82b0(long param_1,undefined8 param_2,long param_3,long *param_4,code *param_5,
                  code *param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = param_3;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049dad2c(param_1 + *param_4,puVar4,param_3);
  lVar1 = 0;
  (*param_5)();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    (*param_6)(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049d8378; end: 1049d83a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d8378(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049dad2c(unaff_x20 + _DAT_1130a3978,param_1,0x11309c5e0);
  return;
}



/* Entry: 1049d83a4; end: 1049d83af; -[FBSDKProfile email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d83a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a3980))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a3980);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d83b0; end: 1049d83e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d83b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3980);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a3980) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d83e8; end: 1049d843b; -[FBSDKProfile friendIDs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d83e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130a3988);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049d843c; end: 1049d844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d843c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a3988));
  return;
}



/* Entry: 1049d844c; end: 1049d846f; -[FBSDKProfile birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d844c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = PTR___s10Foundation4DateVMa_110350bb8;
  puVar1 = PTR___s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF_110350b50;
  lVar3 = 0x11309c628;
  func_0x0001048db364();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049dad2c(param_1 + _DAT_1130a3990,puVar6,0x11309c628);
  lVar3 = 0;
  (*(code *)puVar2)();
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  uVar5 = 0;
  if ((int)puVar4 != 1) {
    (*(code *)puVar1)(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1049d8470; end: 1049d849b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d8470(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1049dad2c(unaff_x20 + _DAT_1130a3990,param_1,0x11309c628);
  return;
}



/* Entry: 1049d849c; end: 1049d84ab; -[FBSDKProfile ageRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d849c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a3998));
  return;
}



/* Entry: 1049d84ac; end: 1049d84db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049d84ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a3998);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1049d84dc; end: 1049d84eb; -[FBSDKProfile hometown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d84dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a39a0));
  return;
}



/* Entry: 1049d84ec; end: 1049d851b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049d84ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a39a0);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1049d851c; end: 1049d852b; -[FBSDKProfile location] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d851c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130a39a8));
  return;
}



/* Entry: 1049d852c; end: 1049d855b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049d852c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130a39a8);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1049d855c; end: 1049d8567; -[FBSDKProfile gender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d855c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130a39b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130a39b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d8568; end: 1049d85bf;  */

void FUN_1049d8568(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1049d85c0; end: 1049d85f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1049d85c0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _DAT_1130a39b0);
  _swift_bridgeObjectRetain(*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + _DAT_1130a39b0) + 8))
  ;
  return auVar1;
}



/* Entry: 1049d85f8; end: 1049d8653; -[FBSDKProfile permissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d85f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130a39b8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1049d8654; end: 1049d8663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049d8654(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a39b8));
  return;
}



/* Entry: 1049d8664; end: 1049d8673; -[FBSDKProfile isLimited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049d8664(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130a39c0);
}



/* Entry: 1049d8674; end: 1049d86cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1049d8674(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _DAT_1130a39c0);
}



/* Entry: 1049d86d0; end: 1049d8713; +[FBSDKProfile _current] */

void FUN_1049d86d0(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(uRam00000001138158c0);
  return;
}



/* Entry: 1049d8714; end: 1049d875f;  */

void FUN_1049d8714(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_38,1,0);
  uVar1 = uRam00000001138158c0;
  uRam00000001138158c0 = param_1;
  _objc_release(uVar1);
  return;
}



/* Entry: 1049d8760; end: 1049d87bf; +[FBSDKProfile set_current:] */

void FUN_1049d8760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_48,1,0);
  uVar1 = uRam00000001138158c0;
  uRam00000001138158c0 = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1049d87c0; end: 1049d87ff;  */

undefined1  [16] FUN_1049d87c0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x1138158c0,param_1,0x21,0);
  auVar1._8_8_ = 0x1138158c0;
  auVar1._0_8_ = 0x1049db718;
  return auVar1;
}



/* Entry: 1049d8800; end: 1049d885f;  */

void FUN_1049d8800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  _swift_beginAccess(0x1138158c0,auStack_48,1,0);
  uVar1 = uRam00000001138158c0;
  uRam00000001138158c0 = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1049d8860; end: 1049d898b;  */

void FUN_1049d8860(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_38,0,0);
  cVar1 = cRam00000001130a3938;
  puVar2 = &UNK_10dd4b718;
  _swift_getKeyPath(&UNK_10dd4b718);
  if (cVar1 == '\x01') {
    FUN_1049b1930(&lStack_40);
    _swift_release(puVar2);
    if (lStack_40 == 0) {
      return;
    }
    uVar3 = 0x1130a3a38;
    func_0x0001048db364(0x1130a3a38);
    puVar4 = &stack0xffffffffffffffb8;
    __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar4,uVar3);
    _objc_msgSend(lStack_40,PTR_s_fb_addObserver_selector_name_obj_112525328,puVar4,
                  PTR_s_observeAccessTokenChange__1125254c0,
                  &PTR____CFConstantStringClassReference_110da0a78,0);
  }
  else {
    FUN_1049b1930(&lStack_40);
    _swift_release(puVar2);
    if (lStack_40 == 0) {
      return;
    }
    uVar3 = 0x1130a3a38;
    func_0x0001048db364(0x1130a3a38);
    puVar4 = &stack0xffffffffffffffb8;
    __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar4,uVar3);
    _objc_msgSend(lStack_40,PTR_s_fb_removeObserver__1125254b8,puVar4);
  }
  _swift_unknownObjectRelease(puVar4);
  _swift_unknownObjectRelease(lStack_40);
  return;
}



/* Entry: 1049d898c; end: 1049d89cb;  */

undefined1 FUN_1049d898c(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_38,0,0);
  return uRam00000001130a3938;
}



/* Entry: 1049d89cc; end: 1049d8a0b; +[FBSDKProfile isUpdatedWithAccessTokenChange] */

undefined1 FUN_1049d89cc(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_38,0,0);
  return uRam00000001130a3938;
}



/* Entry: 1049d8a0c; end: 1049d8a0f;  */

void FUN_1049d8a0c(undefined1 param_1)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_1;
  FUN_1049d8860();
  return;
}



/* Entry: 1049d8a10; end: 1049d8a53;  */

undefined1  [16] FUN_1049d8a10(long param_1)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  _swift_beginAccess(0x1130a3938,param_1,0x21,0);
  auVar1._8_8_ = 0x1130a3938;
  auVar1._0_8_ = FUN_1049d8a54;
  return auVar1;
}



/* Entry: 1049d8a54; end: 1049d8a83;  */

void FUN_1049d8a54(undefined8 param_1,ulong param_2)

{
  _swift_endAccess();
  if ((param_2 & 1) == 0) {
    FUN_1049d8860();
  }
  return;
}



/* Entry: 1049d8a84; end: 1049d90c7;  */

undefined8
FUN_1049d8a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
             long param_10,undefined8 param_11,undefined8 param_12,long param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long alStack_e0 [9];
  undefined1 auStack_98 [8];
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0x11309c628;
  uStack_78 = param_7;
  func_0x0001048db364();
  lVar11 = (long)&uStack_80 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x11309c5e0;
  func_0x0001048db364();
  lVar7 = lVar11 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  uStack_70 = unaff_x20;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uStack_68 = param_1;
  _swift_bridgeObjectRelease(param_2);
  if (param_4 == 0) {
    uStack_80 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uStack_80 = param_3;
    _swift_bridgeObjectRelease(param_4);
  }
  if (param_6 == 0) {
    param_5 = 0;
    uVar3 = uStack_78;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease(param_6);
    uVar3 = uStack_78;
  }
  uStack_78 = uVar3;
  if (param_8 == 0) {
    uVar3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,param_8);
    _swift_bridgeObjectRelease(param_8);
  }
  if (param_10 == 0) {
    param_9 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_9,param_10);
    _swift_bridgeObjectRelease(param_10);
  }
  uStack_78 = param_11;
  FUN_1049dad2c(param_11,lVar7,0x11309c5e0);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  lVar5 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar4);
  lVar8 = 0;
  if ((int)lVar5 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar9 + 8))(lVar7,lVar4);
    lVar8 = lVar5;
  }
  FUN_1049dad2c(param_12,lVar11,0x11309c628);
  lVar9 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar9 + -8);
  lVar5 = lVar11;
  (**(code **)(lVar10 + 0x30))(lVar11,1,lVar9);
  lVar4 = 0;
  if ((int)lVar5 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar10 + 8))(lVar11,lVar9);
    lVar4 = lVar5;
  }
  if (param_13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_13;
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
              (param_13,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_13);
  }
  *(long *)(lVar7 + -0x10) = lVar11;
  *(undefined1 *)(lVar7 + -0x18) = 0;
  *(undefined8 *)(lVar7 + -0x20) = 0;
  *(undefined8 *)(lVar7 + -0x28) = 0;
  *(undefined8 *)(lVar7 + -0x30) = 0;
  *(undefined8 *)(lVar7 + -0x38) = 0;
  *(undefined8 *)(lVar7 + -0x40) = 0;
  *(undefined8 *)(lVar7 + -0x48) = 0;
  *(undefined8 *)(lVar7 + -0x50) = 0;
  *(undefined8 *)(lVar7 + -0x58) = 0;
  *(long *)(lVar7 + -0x60) = lVar4;
  uVar2 = uStack_68;
  uVar1 = uStack_80;
  uVar6 = uStack_70;
  _objc_msgSend(uStack_70,PTR_s_initWithUserID_firstName_middleN_1125254a8,uStack_68,uStack_80,
                param_5,uVar3,param_9,lVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar11);
  func_0x0001049db6dc(param_12,0x11309c628);
  func_0x0001049db6dc(uStack_78,0x11309c5e0);
  return uVar6;
}



/* Entry: 1049d90c8; end: 1049d931b; -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:permissions:] */

void FUN_1049d90c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long alStack_e0 [6];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0x11309c628;
  uStack_68 = param_1;
  func_0x0001048db364();
  lVar4 = (long)&lStack_b0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  lVar5 = lVar4 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_78 = param_2;
  uStack_70 = param_3;
  if (param_4 == 0) {
    uStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_88 = param_2;
    lStack_80 = param_4;
  }
  if (param_5 == 0) {
    uStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_90 = param_5;
    uStack_98 = param_2;
  }
  if (param_6 == 0) {
    uStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a8 = param_2;
    lStack_a0 = param_6;
  }
  lVar3 = param_7;
  _objc_retain();
  lVar1 = param_8;
  _objc_retain();
  lVar2 = param_9;
  _objc_retain();
  lStack_b0 = param_10;
  _objc_retain();
  if (lVar3 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  if (lVar1 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_8);
    _objc_release(lVar1);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,lVar1 == 0,1);
  if (lVar2 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_9);
    _objc_release(lVar2);
  }
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar4,lVar2 == 0,1,lVar3);
  if (param_10 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lStack_b0;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
              (lStack_b0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _objc_release(param_10);
  }
  *(long *)(lVar5 + -0x18) = lVar4;
  *(long *)(lVar5 + -0x10) = lVar3;
  *(undefined8 *)(lVar5 + -0x28) = param_2;
  *(long *)(lVar5 + -0x20) = lVar5;
  *(long *)(lVar5 + -0x30) = param_7;
  func_0x0001049d8dac(uStack_70,uStack_78,lStack_80,uStack_88,lStack_90,uStack_98,lStack_a0,
                      uStack_a8);
  return;
}



/* Entry: 1049d931c; end: 1049d939f;  */

undefined8 FUN_1049d931c(undefined8 param_1)

{
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_1049dad70();
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  return param_1;
}



/* Entry: 1049d93a0; end: 1049d9eb7; -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:imageURL:email:friendIDs:birthday:ageRange:hometown:location:gender:permissions:] */

undefined8
FUN_1049d93a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
             long param_12,long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16
             ,long param_17,long param_18)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_1d0 [16];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar16 = 0x11309c628;
  uStack_b0 = param_1;
  lStack_a8 = param_8;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)&lStack_150 - uVar10;
  lVar12 = lVar5 - uVar10;
  lVar16 = 0x11309c5e0;
  func_0x0001048db364();
  uVar10 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar12 - uVar10;
  lVar16 = lVar17 - uVar10;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  lStack_b8 = lVar5;
  lStack_70 = lVar16;
  if (param_4 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = param_2;
    lStack_d0 = param_4;
  }
  lStack_80 = param_17;
  lStack_78 = param_18;
  lStack_90 = param_12;
  lStack_88 = param_13;
  lStack_a0 = param_10;
  lStack_98 = param_11;
  if (param_5 == 0) {
    uStack_e8 = 0;
    lStack_e0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e8 = param_2;
    lStack_e0 = param_5;
  }
  if (param_6 == 0) {
    uStack_f8 = 0;
    lStack_f0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_f8 = param_2;
    lStack_f0 = param_6;
  }
  lVar5 = param_7;
  _objc_retain();
  lVar6 = lStack_a8;
  _objc_retain();
  lStack_150 = param_9;
  _objc_retain();
  lVar8 = lStack_a0;
  _objc_retain();
  lVar15 = lStack_98;
  lStack_148 = lVar8;
  _objc_retain();
  lVar8 = lStack_90;
  _objc_retain();
  lVar7 = lStack_88;
  lStack_138 = lVar8;
  _objc_retain();
  lStack_130 = lVar7;
  _objc_retain();
  uStack_100 = param_14;
  _objc_retain();
  uStack_108 = param_15;
  _objc_retain();
  lVar8 = lStack_80;
  uStack_110 = param_16;
  _objc_retain();
  lVar7 = lStack_78;
  lStack_140 = lVar8;
  _objc_retain();
  lStack_128 = lVar7;
  if (lVar5 == 0) {
    lStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_120 = param_2;
    lStack_118 = param_7;
    _objc_release(lVar5);
  }
  lVar8 = lStack_70;
  lVar5 = lStack_b8;
  if (lVar6 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lStack_70,lStack_a8);
    _objc_release(lVar6);
    lVar7 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar8,lVar6 == 0,1);
  if (param_9 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar12,lStack_150);
    _objc_release(param_9);
  }
  lVar8 = 0;
  __s10Foundation4DateVMa();
  pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  (*pcVar13)(lVar12,param_9 == 0,1,lVar8);
  lVar6 = lStack_148;
  bVar1 = lStack_148 == 0;
  if (!bVar1) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar17,lStack_a0);
    _objc_release(lVar6);
  }
  lVar6 = lStack_130;
  uVar10 = (ulong)bVar1;
  lVar7 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar17,uVar10,1,lVar7);
  if (lVar15 == 0) {
    lVar7 = 0;
    uVar10 = 0;
  }
  else {
    lVar7 = lStack_98;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar15);
  }
  lVar15 = lStack_138;
  if (lStack_138 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = lStack_90;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (lStack_90,PTR___sSSN_11034da80);
    _objc_release(lVar15);
  }
  if (lVar6 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,lStack_88);
    _objc_release(lVar6);
  }
  uVar14 = (ulong)(lVar6 == 0);
  (*pcVar13)(lVar5,uVar14,1,lVar8);
  lVar6 = lStack_140;
  if (lStack_140 == 0) {
    lVar8 = 0;
    uVar14 = 0;
  }
  else {
    lVar8 = lStack_80;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar6);
  }
  lVar6 = lStack_128;
  if (lStack_128 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lStack_78;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
              (lStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _objc_release(lVar6);
  }
  *(ulong *)(lVar16 + -0x18) = uVar14;
  *(long *)(lVar16 + -0x10) = lVar15;
  *(long *)(lVar16 + -0x20) = lVar8;
  uVar2 = uStack_110;
  *(undefined8 *)(lVar16 + -0x28) = uStack_110;
  uVar3 = uStack_108;
  *(undefined8 *)(lVar16 + -0x30) = uStack_108;
  uVar4 = uStack_100;
  *(long *)(lVar16 + -0x40) = lVar5;
  *(undefined8 *)(lVar16 + -0x38) = uVar4;
  *(ulong *)(lVar16 + -0x50) = uVar10;
  *(long *)(lVar16 + -0x48) = lVar11;
  *(long *)(lVar16 + -0x60) = lVar17;
  *(long *)(lVar16 + -0x58) = lVar7;
  *(long *)(lVar16 + -0x68) = lVar12;
  *(long *)(lVar16 + -0x70) = lStack_70;
  *(undefined8 *)(lVar16 + -0x78) = uStack_120;
  *(long *)(lVar16 + -0x80) = lStack_118;
  uVar9 = uStack_c0;
  FUN_1049dad70(uStack_c0,uStack_c8,lStack_d0,uStack_d8,lStack_e0,uStack_e8,lStack_f0,uStack_f8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar9;
}



/* Entry: 1049d9eb8; end: 1049da347; -[FBSDKProfile initWithUserID:firstName:middleName:lastName:name:linkURL:refreshDate:imageURL:email:friendIDs:birthday:ageRange:hometown:location:gender:isLimited:permissions:] */

void FUN_1049d9eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  long param_11,long param_12,long param_13,undefined8 param_14,undefined8 param_15,
                  undefined8 param_16,long param_17,undefined1 param_18,undefined4 param_19,
                  long param_20)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long alStack_1d0 [14];
  undefined1 auStack_160 [8];
  long lStack_158;
  undefined1 auStack_150 [8];
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar8 = 0x11309c628;
  uStack_b0 = param_1;
  lStack_a8 = param_8;
  func_0x0001048db364();
  uVar7 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_150 + -uVar7;
  lVar14 = (long)puVar10 - uVar7;
  lVar8 = 0x11309c5e0;
  func_0x0001048db364();
  uVar7 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_70 = lVar14 - uVar7;
  lVar8 = lStack_70 - uVar7;
  lStack_78 = lVar8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  lStack_c0 = lVar14;
  puStack_b8 = puVar10;
  if (param_4 == 0) {
    uStack_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_e0 = param_2;
    lStack_d8 = param_4;
  }
  lStack_88 = param_17;
  lStack_80 = param_20;
  lStack_98 = param_12;
  lStack_90 = param_13;
  lStack_a0 = param_11;
  if (param_5 == 0) {
    uStack_f0 = 0;
    lStack_e8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_f0 = param_2;
    lStack_e8 = param_5;
  }
  if (param_6 == 0) {
    uStack_100 = 0;
    lStack_f8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_100 = param_2;
    lStack_f8 = param_6;
  }
  lVar14 = param_7;
  _objc_retain();
  lVar2 = lStack_a8;
  _objc_retain();
  lStack_148 = param_9;
  _objc_retain();
  lStack_140 = param_10;
  _objc_retain();
  lVar9 = lStack_a0;
  _objc_retain();
  lVar3 = lStack_98;
  _objc_retain();
  lVar13 = lStack_90;
  _objc_retain();
  lStack_138 = lVar13;
  _objc_retain();
  uStack_108 = param_14;
  _objc_retain();
  uStack_110 = param_15;
  _objc_retain();
  lVar13 = lStack_88;
  uStack_118 = param_16;
  _objc_retain();
  lVar5 = lStack_80;
  _objc_retain();
  lStack_130 = lVar5;
  if (lVar14 == 0) {
    lStack_120 = 0;
    uStack_128 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_128 = param_2;
    lStack_120 = param_7;
    _objc_release(lVar14);
  }
  lVar5 = lStack_78;
  puVar10 = puStack_b8;
  lVar14 = lStack_c0;
  if (lVar2 == 0) {
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lStack_78,lStack_a8);
    _objc_release(lVar2);
    lVar4 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar5,lVar2 == 0,1);
  if (param_9 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar14,lStack_148);
    _objc_release(param_9);
  }
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcVar12 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar12)(lVar14,param_9 == 0,1,lVar5);
  lVar2 = lStack_70;
  if (param_10 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lStack_70,lStack_140)
    ;
    _objc_release(param_10);
  }
  lVar4 = lStack_138;
  uVar7 = (ulong)(param_10 == 0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar2,uVar7,1,lVar6);
  if (lVar9 == 0) {
    lVar6 = 0;
    uVar7 = 0;
    lVar2 = lStack_98;
  }
  else {
    lVar6 = lStack_a0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar9);
    lVar2 = lStack_98;
  }
  lStack_98 = lVar2;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (lVar2,PTR___sSSN_11034da80);
    _objc_release(lVar3);
  }
  if (lVar4 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar10,lStack_90);
    _objc_release(lVar4);
  }
  uVar11 = (ulong)(lVar4 == 0);
  (*pcVar12)(puVar10,uVar11,1,lVar5);
  if (lVar13 == 0) {
    lVar9 = 0;
    uVar11 = 0;
  }
  else {
    lVar9 = lStack_88;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar13);
  }
  lVar3 = lStack_130;
  if (lStack_130 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lStack_80;
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
              (lStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _objc_release(lVar3);
  }
  *(long *)(lVar8 + -8) = lVar13;
  *(undefined1 *)(lVar8 + -0x10) = param_18;
  *(long *)(lVar8 + -0x20) = lVar9;
  *(ulong *)(lVar8 + -0x18) = uVar11;
  *(undefined8 *)(lVar8 + -0x28) = uStack_118;
  *(undefined8 *)(lVar8 + -0x30) = uStack_110;
  uVar1 = uStack_108;
  *(undefined1 **)(lVar8 + -0x40) = puVar10;
  *(undefined8 *)(lVar8 + -0x38) = uVar1;
  *(ulong *)(lVar8 + -0x50) = uVar7;
  *(long *)(lVar8 + -0x48) = lVar2;
  *(long *)(lVar8 + -0x58) = lVar6;
  lVar2 = lStack_70;
  *(long *)(lVar8 + -0x68) = lVar14;
  *(long *)(lVar8 + -0x60) = lVar2;
  *(long *)(lVar8 + -0x70) = lStack_78;
  *(undefined8 *)(lVar8 + -0x78) = uStack_128;
  *(long *)(lVar8 + -0x80) = lStack_120;
  func_0x0001049d9b84(uStack_c8,uStack_d0,lStack_d8,uStack_e0,lStack_e8,uStack_f0,lStack_f8,
                      uStack_100);
  return;
}



/* Entry: 1049da348; end: 1049da52f;  */

void FUN_1049da348(undefined1 param_1)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_1;
  FUN_1049d8860();
  return;
}



/* Entry: 1049da530; end: 1049da5bb; +[FBSDKProfile observeAccessTokenChange:] */

void FUN_1049da530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _swift_getObjCClassMetadata(param_1);
  func_0x0001049da3f0(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1049da5bc; end: 1049da607;  */

void FUN_1049da5bc(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049da608; end: 1049da667; -[FBSDKProfile init] */

void FUN_1049da608(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit.Profile",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1049da634);
  (*pcVar1)();
}



/* Entry: 1049da668; end: 1049da7cf; -[FBSDKProfile .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049da668(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3940 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3948 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3950 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3958 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3960 + 8));
  func_0x0001049db6dc(param_1 + _DAT_1130a3968,0x11309c5e0);
  lVar1 = _DAT_1130a3970;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  func_0x0001049db6dc(param_1 + _DAT_1130a3978,0x11309c5e0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3980 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a3988));
  func_0x0001049db6dc(param_1 + _DAT_1130a3990,0x11309c628);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a3998));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a39a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a39a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a39b0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a39b8));
  return;
}



/* Entry: 1049da7d0; end: 1049dabbb;  */

undefined8 FUN_1049da7d0(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1049dabbc; end: 1049dac17;  */

void FUN_1049dabbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1138158e0,auStack_38,0,0);
  uVar5 = uRam0000000113815908;
  uVar4 = uRam0000000113815900;
  uVar3 = uRam00000001138158f8;
  uVar2 = uRam00000001138158f0;
  uVar1 = uRam00000001138158e8;
  *param_1 = uRam00000001138158e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x0001049d3cc0();
  return;
}



/* Entry: 1049dac18; end: 1049dac7f;  */

void FUN_1049dac18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  _swift_beginAccess(0x1138158e0,auStack_48,1,0);
  uVar8 = uRam0000000113815908;
  uVar7 = uRam0000000113815900;
  uVar6 = uRam00000001138158f8;
  uVar5 = uRam00000001138158f0;
  uVar4 = uRam00000001138158e8;
  uVar3 = uRam00000001138158e0;
  uRam00000001138158e8 = param_1[1];
  uRam00000001138158e0 = *param_1;
  uRam00000001138158f8 = param_1[3];
  uRam00000001138158f0 = param_1[2];
  uRam0000000113815900 = uVar1;
  uRam0000000113815908 = uVar2;
  FUN_1049b0f08(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  return;
}



/* Entry: 1049dac80; end: 1049dad1b;  */

undefined1  [16] FUN_1049dac80(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(0x1138158e0,param_1,0x21,0);
  auVar1._8_8_ = 0x1138158e0;
  auVar1._0_8_ = 0x1049db720;
  return auVar1;
}



/* Entry: 1049dad1c; end: 1049dad2b;  */

void FUN_1049dad1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  return;
}



/* Entry: 1049dad2c; end: 1049dad6f;  */

undefined8 FUN_1049dad2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1049dad70; end: 1049db253;  */

undefined8
FUN_1049dad70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
             long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,long param_15,long param_16,undefined8 param_17,undefined8 param_18
             ,undefined8 param_19,undefined8 param_20,undefined8 param_21,long param_22,
             long param_23)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long alStack_140 [9];
  undefined1 auStack_f8 [8];
  long alStack_f0 [2];
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar9 = 0x11309c628;
  func_0x0001048db364();
  uVar8 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lStack_b0 = (long)&uStack_e0 - uVar8;
  lVar13 = lStack_b0 - uVar8;
  lVar9 = 0x11309c5e0;
  func_0x0001048db364();
  uVar8 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar13 - uVar8;
  lVar9 = lVar12 - uVar8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uStack_88 = param_1;
  _swift_bridgeObjectRelease(param_2);
  if (param_4 == 0) {
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uStack_98 = param_3;
    _swift_bridgeObjectRelease(param_4);
  }
  if (param_6 == 0) {
    uStack_a0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    uStack_a0 = param_5;
    _swift_bridgeObjectRelease(param_6);
  }
  if (param_8 == 0) {
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_7,param_8);
    uStack_a8 = param_7;
    _swift_bridgeObjectRelease(param_8);
  }
  if (param_10 == 0) {
    uStack_b8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_9,param_10);
    uStack_b8 = param_9;
    _swift_bridgeObjectRelease(param_10);
  }
  uStack_80 = param_11;
  FUN_1049dad2c(param_11,lVar9,0x11309c5e0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar6 + -8);
  pcVar11 = *(code **)(lVar14 + 0x30);
  lVar15 = lVar9;
  (*pcVar11)(lVar9,1,lVar6);
  lStack_c0 = 0;
  if ((int)lVar15 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar14 + 8))(lVar9,lVar6);
    lStack_c0 = lVar15;
  }
  uStack_90 = param_12;
  FUN_1049dad2c(param_12,lVar13,0x11309c628);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar7 + -8);
  pcVar16 = *(code **)(lVar10 + 0x30);
  lVar15 = lVar13;
  (*pcVar16)(lVar13,1,lVar7);
  lStack_c8 = 0;
  if ((int)lVar15 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar10 + 8))(lVar13,lVar7);
    lStack_c8 = lVar15;
  }
  FUN_1049dad2c(param_13,lVar12,0x11309c5e0);
  lVar13 = lVar12;
  (*pcVar11)(lVar12,1,lVar6);
  if ((int)lVar13 == 1) {
    lVar13 = 0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar14 + 8))(lVar12,lVar6);
  }
  lVar12 = lStack_b0;
  if (param_15 == 0) {
    param_14 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_14,param_15);
    _swift_bridgeObjectRelease(param_15);
  }
  if (param_16 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_16;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_16,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(param_16);
  }
  FUN_1049dad2c(param_17,lVar12,0x11309c628);
  lVar6 = lVar12;
  (*pcVar16)(lVar12,1,lVar7);
  if ((int)lVar6 == 1) {
    lVar6 = 0;
  }
  else {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar10 + 8))(lVar12,lVar7);
  }
  lStack_b0 = param_17;
  if (param_22 == 0) {
    param_21 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_21,param_22);
    _swift_bridgeObjectRelease(param_22);
  }
  if (param_23 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_23;
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
              (param_23,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_23);
  }
  lStack_d8 = lVar12;
  *(long *)(lVar9 + -0x10) = lVar12;
  *(undefined1 *)(lVar9 + -0x18) = 0;
  *(undefined8 *)(lVar9 + -0x28) = param_20;
  *(undefined8 *)(lVar9 + -0x20) = param_21;
  *(undefined8 *)(lVar9 + -0x38) = param_18;
  *(undefined8 *)(lVar9 + -0x30) = param_19;
  *(long *)(lVar9 + -0x48) = lVar15;
  *(long *)(lVar9 + -0x40) = lVar6;
  *(long *)(lVar9 + -0x58) = lVar13;
  *(undefined8 *)(lVar9 + -0x50) = param_14;
  lVar12 = lStack_c8;
  lStack_d0 = lVar6;
  *(long *)(lVar9 + -0x60) = lStack_c8;
  uVar5 = uStack_88;
  uVar4 = uStack_98;
  uVar3 = uStack_a0;
  uVar2 = uStack_a8;
  uVar1 = uStack_b8;
  lVar9 = lStack_c0;
  uStack_e0 = param_21;
  _objc_msgSend(unaff_x20,PTR_s_initWithUserID_firstName_middleN_1125254a8,uStack_88,uStack_98,
                uStack_a0,uStack_a8,uStack_b8,lStack_c0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(param_14);
  _objc_release(lVar15);
  _objc_release(lStack_d0);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  func_0x0001049db6dc(lStack_b0,0x11309c628);
  func_0x0001049db6dc(param_13,0x11309c5e0);
  func_0x0001049db6dc(uStack_90,0x11309c628);
  func_0x0001049db6dc(uStack_80,0x11309c5e0);
  return unaff_x20;
}



/* Entry: 1049db254; end: 1049db25b;  */

void FUN_1049db254(void)

{
  if (lRam00000001130a3a28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e826e1c);
  return;
}



/* Entry: 1049db25c; end: 1049db3a3;  */

void FUN_1049db25c(undefined8 param_1)

{
  if (lRam00000001130a3a28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e826e1c);
  return;
}



/* Entry: 1049db3a4; end: 1049db403;  */

void FUN_1049db3a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049db400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0xd8))();
  return;
}



/* Entry: 1049db404; end: 1049db723;  */

void FUN_1049db404(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    (*param_3)();
    __sSqMa();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Entry: 1049db724; end: 1049db727;  */

void FUN_1049db724(undefined1 param_1)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_1;
  FUN_1049d8860();
  return;
}



/* Entry: 1049db728; end: 1049db72b; +[FBSDKProfile enableUpdatesOnAccessTokenChange:] */

void FUN_1049db728(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_getObjCClassMetadata();
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_3;
  FUN_1049d8860();
  return;
}



/* Entry: 1049db72c; end: 1049db72f; +[FBSDKProfile setIsUpdatedWithAccessTokenChange:] */

void FUN_1049db72c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_getObjCClassMetadata();
  _swift_beginAccess(0x1130a3938,auStack_48,1,0);
  uRam00000001130a3938 = param_3;
  FUN_1049d8860();
  return;
}



/* Entry: 1049db730; end: 1049db793;  */

void FUN_1049db730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = param_5;
  param_1[1] = param_6;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  return;
}



/* Entry: 1049db794; end: 1049db797;  */

byte FUN_1049db794(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((double)param_1[2] == (double)param_2[2])) &&
     ((((double)param_1[3] == (double)param_2[3] && ((double)param_1[4] == (double)param_2[4])) &&
      (param_1[5] == param_2[5])))) {
    bVar2 = (byte)param_1[6] ^ (byte)param_2[6] ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1049db798; end: 1049db7ef;  */

uint FUN_1049db798(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_1049db7f0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1049db7f0; end: 1049db88f;  */

byte FUN_1049db7f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((double)param_1[2] == (double)param_2[2])) &&
     ((((double)param_1[3] == (double)param_2[3] && ((double)param_1[4] == (double)param_2[4])) &&
      (param_1[5] == param_2[5])))) {
    bVar2 = (byte)param_1[6] ^ (byte)param_2[6] ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1049db890; end: 1049dba6f;  */

long FUN_1049db890(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1049dba70; end: 1049dbab3;  */

void FUN_1049dba70(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1049dbab4; end: 1049dbb0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dbab4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3a48;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049dbb0c; end: 1049dbb33;  */

undefined1  [16] FUN_1049dbb0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _swift_getObjectType();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1049dbb34; end: 1049dbc1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dbb34(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a3a50;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a50,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1049dbc20; end: 1049dbe87;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dbc20(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long alStack_98 [5];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = _DAT_1130a3a48;
  _swift_beginAccess(unaff_x20 + _DAT_1130a3a48,auStack_58,0,0);
  lVar3 = _DAT_1130a3a50;
  lVar2 = *(long *)(unaff_x20 + lVar7);
  lVar7 = lVar2;
  if (lVar2 == 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130a3a50,auStack_70,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    if (lVar7 == 0) {
      return;
    }
    _swift_unknownObjectRetain(lVar7);
    lVar2 = 0;
  }
  _swift_unknownObjectRetain(lVar2);
  lVar3 = lVar7;
  _objc_msgSend(lVar7,PTR_s_cachedServerConfiguration_1125a76d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR___sypN_11034f1a8;
  if (lVar2 == 0) {
    _swift_unknownObjectRelease(lVar7);
    alStack_98[2] = 0;
    alStack_98[1] = 0;
    alStack_98[4] = 0;
    alStack_98[3] = 0;
  }
  else {
    lVar3 = lVar2;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (lVar2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    _objc_release(lVar2);
    if (*(long *)(lVar3 + 0x10) == 0) {
      alStack_98[2] = 0;
      alStack_98[1] = 0;
      alStack_98[4] = 0;
      alStack_98[3] = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar3);
      lVar2 = 0x647261646e617473;
      uVar6 = 0xef736d617261705f;
      func_0x000100029284(0x647261646e617473);
      if ((uVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar3);
        alStack_98[2] = 0;
        alStack_98[1] = 0;
        alStack_98[4] = 0;
        alStack_98[3] = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar2 * 0x20,alStack_98 + 1);
        _swift_bridgeObjectRelease(lVar3);
      }
    }
    _swift_bridgeObjectRelease(lVar3);
    if (alStack_98[4] != 0) {
      uVar5 = 0x11309c618;
      func_0x0001048db364(0x11309c618);
      plVar4 = alStack_98;
      _swift_dynamicCast(plVar4,alStack_98 + 1,puVar1 + 8,uVar5,6);
      if (((ulong)plVar4 & 1) != 0) {
        if (*(long *)(alStack_98[0] + 0x10) != 0) {
          lVar3 = alStack_98[0];
          func_0x000100403a6c();
          _swift_unknownObjectRelease(lVar7);
          _swift_bridgeObjectRelease(alStack_98[0]);
          uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130a3a58);
          *(long *)(unaff_x20 + _DAT_1130a3a58) = lVar3;
          _swift_bridgeObjectRelease(uVar5);
          goto LAB_1049dbe34;
        }
        _swift_bridgeObjectRelease(alStack_98[0]);
      }
      _swift_unknownObjectRelease(lVar7);
      goto LAB_1049dbe34;
    }
    _swift_unknownObjectRelease(lVar7);
  }
  func_0x00010006e7f4(alStack_98 + 1);
LAB_1049dbe34:
  lVar7 = *(long *)(unaff_x20 + _DAT_1130a3a58);
  if (*(long *)(lVar7 + 0x10) == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_1130a3a58) = *(undefined8 *)(unaff_x20 + _DAT_1130a3a68);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar7);
  }
  *(undefined1 *)(unaff_x20 + _DAT_1130a3a60) = 1;
  return;
}



/* Entry: 1049dbe88; end: 1049dbeaf; -[FBSDKProtectedModeManager enable] */

void FUN_1049dbe88(undefined8 param_1)

{
  _objc_retain();
  FUN_1049dbc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049dbeb0; end: 1049dbeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049dbeb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  long lStack_38;
  
  if ((*(char *)(unaff_x20 + _DAT_1130a3a60) == '\x01' && param_1 != 0) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    lStack_38 = param_1;
    _objc_retain();
    _swift_bridgeObjectRetain(param_1);
    FUN_1049dc300();
    _objc_release(unaff_x20);
    if (lRam000000011309ff18 != -1) {
      _swift_once(0x11309ff18,0x1049dba90);
    }
    uVar1 = uRam00000001130a3a40;
    puStack_48 = PTR___sSbN_11034dd40;
    auStack_60[0] = 1;
    func_0x000100102924(auStack_60,auStack_80);
    lVar2 = lStack_38;
    _swift_isUniquelyReferenced_nonNull_native(lStack_38);
    FUN_104902c18(auStack_80,uVar1,lVar2);
  }
  else {
    _swift_bridgeObjectRetain();
  }
  return;
}



/* Entry: 1049dbeb4; end: 1049dbf9f; -[FBSDKProtectedModeManager processParameters:eventName:] */

void FUN_1049dbeb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___sypN_11034f1a8;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048db924(0);
    uVar3 = uVar2;
    func_0x0001049ac144();
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,uVar2,puVar1 + 8,uVar3);
  }
  _objc_retain(param_1);
  _objc_retain(param_4);
  lVar4 = param_3;
  FUN_1049dc5bc();
  _objc_release(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1048db924(0);
    uVar3 = uVar2;
    func_0x0001049ac144();
    lVar5 = lVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar4,uVar2,puVar1 + 8,uVar3);
    _swift_bridgeObjectRelease(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1049dbfa0; end: 1049dbfa3;  */

undefined1 FUN_1049dbfa0(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_51;
  undefined1 auStack_50 [32];
  
  lVar1 = lRam000000011309ff18;
  if (param_1 == 0) {
    return 0;
  }
  _swift_bridgeObjectRetain();
  if (lVar1 == -1) {
    lVar4 = *(long *)(param_1 + 0x10);
    lVar1 = lRam00000001130a3a40;
  }
  else {
    param_2 = 0;
    _swift_once(0x11309ff18);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar1 = lRam00000001130a3a40;
  }
  lRam00000001130a3a40 = lVar1;
  if (lVar4 != 0) {
    FUN_1048ddcc8(lVar1);
    uVar3 = param_2;
    _swift_bridgeObjectRelease(param_1);
    if ((param_2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(param_1);
    FUN_1048ddcc8(lVar1);
    if ((uVar3 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_50);
      _swift_bridgeObjectRelease(param_1);
      puVar2 = &uStack_51;
      _swift_dynamicCast(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if (((ulong)puVar2 & 1) == 0) {
        return 0;
      }
      return uStack_51;
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return 0;
}


