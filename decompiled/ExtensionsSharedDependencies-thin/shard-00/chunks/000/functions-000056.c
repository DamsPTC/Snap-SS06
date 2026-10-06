/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0011ce64; end: 0011cec3;  */

void FUN_0011ce64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 2;
  uVar1 = 0xaeb688;
  func_0x000115a8(0xaeb688,&UNK_007da0b0);
  FUN_0011c328(param_1,&uStack_21,param_2,uVar1);
  return;
}



/* Entry: 0011cec4; end: 0011cf13;  */

void FUN_0011cec4(undefined8 param_1,undefined8 param_2)

{
  FUN_0011c564(param_1,param_2,PTR___sSbN_0099b220);
  return;
}



/* Entry: 0011cf14; end: 0011cf77;  */

void FUN_0011cf14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uVar1 = 0xae8850;
  func_0x000115a8(0xae8850,&UNK_007d0e28);
  FUN_0011c328(param_1,&uStack_40,param_2,uVar1);
  return;
}



/* Entry: 0011cf78; end: 0011cf93;  */

void FUN_0011cf78(undefined8 param_1,undefined8 param_2)

{
  FUN_0011c564(param_1,param_2,PTR___sSSN_0099b040);
  return;
}



/* Entry: 0011cf94; end: 0011cfe3;  */

void FUN_0011cf94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xc000000000000000;
  uStack_30 = 0;
  FUN_0011c328(param_1,&uStack_30,param_2,PTR___s10Foundation4DataVN_0099c3c0);
  FUN_00023358(uStack_30,uStack_28);
  return;
}



/* Entry: 0011cfe4; end: 0011d04f;  */

void FUN_0011cfe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xf000000000000000;
  uStack_40 = 0;
  uVar1 = 0xae8490;
  func_0x000115a8(0xae8490,&UNK_007d0910);
  FUN_0011c328(param_1,&uStack_40,param_2,uVar1);
  return;
}



/* Entry: 0011d050; end: 0011d06b;  */

void FUN_0011d050(undefined8 param_1,undefined8 param_2)

{
  FUN_0011c564(param_1,param_2,PTR___s10Foundation4DataVN_0099c3c0);
  return;
}



/* Entry: 0011d06c; end: 0011d12b;  */

void FUN_0011d06c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar1 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_4 + 0x18))(puVar2,lVar1,param_4);
  FUN_0011c328(param_1,puVar2,param_2,param_3);
  (**(code **)(lVar3 + 8))(puVar2,param_3);
  return;
}



/* Entry: 0011d12c; end: 0011d1f3;  */

void FUN_0011d12c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __sSqMa(0,param_3);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(puVar2,1,1,param_3);
  FUN_0011c328(param_1,puVar2,param_2,lVar1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 0011d1f4; end: 0011d21b;  */

void FUN_0011d1f4(void)

{
  FUN_0011c564();
  return;
}



/* Entry: 0011d21c; end: 0011d2f7;  */

void FUN_0011d21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,param_3,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_6 + 8),param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_0011c718(param_1,param_2,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 0011d2f8; end: 0011d39b;  */

void FUN_0011d2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_0011c718(param_1,param_2,uVar1,param_4,uVar2);
  return;
}



/* Entry: 0011d39c; end: 0011d43f;  */

void FUN_0011d39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar2,param_3,uVar1,&UNK_008441f0,&UNK_008441f8);
  FUN_0011c718(param_1,param_2,uVar1,param_4,uVar2);
  return;
}



/* Entry: 0011d440; end: 0011d443;  */

void FUN_0011d440(void)

{
  return;
}



/* Entry: 0011d444; end: 0011d7df;  */

void FUN_0011d444(void)

{
  FUN_0011cb94();
  return;
}



/* Entry: 0011d7e0; end: 0011d7eb;  */

void FUN_0011d7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&UNK_008448e0);
  return;
}



/* Entry: 0011d7ec; end: 0011d82b;  */

void FUN_0011d7ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af0068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9fd8;
  _swift_getWitnessTable(&UNK_007d9fd8,&UNK_009ae330);
  puRam0000000000af0068 = puVar1;
  return;
}



/* Entry: 0011d82c; end: 0011d86b;  */

undefined8 FUN_0011d82c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0011d86c; end: 0011d93f;  */

undefined * FUN_0011d86c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x11d940);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0xae6940;
      func_0x000115a8(0xae6940,&UNK_007da060);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11d93c);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,PTR___sSSN_0099b040);
  }
  return puVar4;
}



/* Entry: 0011d940; end: 0011d947;  */

void FUN_0011d940(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 0011d948; end: 0011d9a3;  */

long FUN_0011d948(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0011d9a4; end: 0011d9c3;  */

void FUN_0011d9a4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0011d9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 0011d9c4; end: 0011da37;  */

undefined8 * FUN_0011d9c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0011da38; end: 0011dadf;  */

undefined8 * FUN_0011da38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 != 0) {
      param_1[3] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      goto LAB_0011da9c;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_0011dae0(param_1,param_2);
      goto LAB_0011da9c;
    }
    FUN_0011d9a4(param_1);
  }
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
LAB_0011da9c:
  uVar2 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 0011dae0; end: 0011dc37;  */

void FUN_0011dae0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0011db90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_0099bb20)(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Entry: 0011dc38; end: 0011dc53;  */

void FUN_0011dc38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 0011dc54; end: 0011dcb7;  */

undefined8 * FUN_0011dc54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_0011d9a4(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Entry: 0011dcb8; end: 0011dd53;  */

int FUN_0011dcb8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0011dd54; end: 0011dd87;  */

void FUN_0011dd54(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x20) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 0011dd88; end: 0011e043;  */

void FUN_0011dd88(void)

{
  func_0x0011d504();
  return;
}



/* Entry: 0011e044; end: 0011e04f;  */

void FUN_0011e044(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 0011e050; end: 0011e0b3;  */

void FUN_0011e050(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 0011e0b4; end: 0011e117;  */

undefined8 * FUN_0011e0b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0011e118; end: 0011e15b;  */

undefined8 * FUN_0011e118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 0011e15c; end: 0011e1ef;  */

int FUN_0011e15c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0011e1f0; end: 0011e227;  */

undefined8 FUN_0011e1f0(undefined8 param_1)

{
  FUN_00051f24(PTR___swiftEmptyArrayStorage_0099b8f0);
  return param_1;
}



/* Entry: 0011e228; end: 0011e2fb;  */

void FUN_0011e228(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_0011bf60(param_2,lVar1,*(undefined8 *)(param_3 + 0x18));
  if (lVar1 != 0) {
    if (unaff_x20[1] == 0) {
      FUN_000232c8(param_1,&uStack_60);
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
      FUN_000232c8(param_1,&uStack_60);
    }
    FUN_000e0584(&uStack_60,param_2,lVar1);
  }
  return;
}



/* Entry: 0011e2fc; end: 0011e49f;  */

/* WARNING: Removing unreachable block (ram,0x0011e414) */

void FUN_0011e2fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
  FUN_0011bf60(param_2,lVar3,*(undefined8 *)(param_3 + 0x18));
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
    FUN_0005835c(&uStack_70);
    (**(code **)(*(long *)(param_4 + -8) + 0x10))();
    _swift_bridgeObjectRetain_n(lVar3,2);
    FUN_000e0584(&uStack_70,param_2,lVar3);
    puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00051f24();
    pcVar4 = *(code **)(param_5 + 0x48);
    uVar2 = 0;
    uStack_70 = param_2;
    lStack_68 = lVar3;
    puStack_60 = puVar1;
    func_0x0011e1e4(0,param_4,param_5);
    (*pcVar4)(&uStack_70,uVar2,&PTR_DAT_009ae640,param_4,param_5);
    puVar1 = puStack_60;
    _swift_bridgeObjectRetain(puStack_60);
    uVar2 = unaff_x20[2];
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    auStack_80[0] = unaff_x20[2];
    FUN_0011efa4(puVar1,FUN_0011edf0,0,uVar2,auStack_80);
    _swift_bridgeObjectRelease(lVar3);
    _swift_bridgeObjectRelease(puVar1);
    lVar3 = lStack_68;
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(lVar3);
    unaff_x20[2] = auStack_80[0];
  }
  return;
}



/* Entry: 0011e4a0; end: 0011e4ef;  */

void FUN_0011e4a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 auStack_40 [6];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSfN_0099b288;
  auStack_40[0] = param_1;
  FUN_0011e228(auStack_40,param_2,param_3);
  FUN_00036564(auStack_40);
  return;
}



/* Entry: 0011e4f0; end: 0011e53f;  */

void FUN_0011e4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_40 [3];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSdN_0099b258;
  auStack_40[0] = param_1;
  FUN_0011e228(auStack_40,param_2,param_3);
  FUN_00036564(auStack_40);
  return;
}



/* Entry: 0011e540; end: 0011e57b;  */

void FUN_0011e540(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_40 [6];
  undefined8 uStack_28;
  
  auStack_40[0] = param_1;
  uStack_28 = param_4;
  FUN_0011e228(auStack_40);
  FUN_00036564(auStack_40);
  return;
}



/* Entry: 0011e57c; end: 0011e5b7;  */

void FUN_0011e57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  auStack_40[0] = param_1;
  uStack_28 = param_4;
  FUN_0011e228(auStack_40);
  FUN_00036564(auStack_40);
  return;
}



/* Entry: 0011e5b8; end: 0011e5ff;  */

void FUN_0011e5b8(undefined1 param_1)

{
  undefined1 auStack_40 [24];
  undefined *puStack_28;
  
  puStack_28 = PTR___sSbN_0099b220;
  auStack_40[0] = param_1;
  FUN_0011e228(auStack_40);
  FUN_00036564(auStack_40);
  return;
}



/* Entry: 0011e600; end: 0011e65f;  */

void FUN_0011e600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_28;
  
  puStack_28 = PTR___sSSN_0099b040;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_0011e228(&uStack_40,param_3,param_4);
  FUN_00036564(&uStack_40);
  return;
}



/* Entry: 0011e660; end: 0011e6c3;  */

void FUN_0011e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_38;
  
  puStack_38 = PTR___s10Foundation4DataVN_0099c3c0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00023304();
  FUN_0011e228(&uStack_50,param_3,param_4);
  FUN_00036564(&uStack_50);
  return;
}



/* Entry: 0011e6c4; end: 0011e73f;  */

void FUN_0011e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lStack_48 = param_4;
  FUN_0005835c(auStack_60);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  FUN_0011e228(auStack_60,param_2,param_3);
  FUN_00036564(auStack_60);
  return;
}



/* Entry: 0011e740; end: 0011e763;  */

void FUN_0011e740(void)

{
  FUN_0011e2fc();
  return;
}



/* Entry: 0011e764; end: 0011e7d3;  */

void FUN_0011e764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000115a8(param_4,param_5);
  auStack_50[0] = param_1;
  uStack_38 = param_4;
  _swift_bridgeObjectRetain(param_1);
  FUN_0011e228(auStack_50,param_2,param_3);
  FUN_00036564(auStack_50);
  return;
}



/* Entry: 0011e7d4; end: 0011e843;  */

void FUN_0011e7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  uVar1 = 0;
  __sSaMa(0,param_4);
  auStack_50[0] = param_1;
  uStack_38 = uVar1;
  _swift_bridgeObjectRetain(param_1);
  FUN_0011e228(auStack_50,param_2,param_3);
  FUN_00036564(auStack_50);
  return;
}



/* Entry: 0011e844; end: 0011e93f;  */

void FUN_0011e844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_getAssociatedTypeWitness(0xff,uVar4,param_4,&UNK_008441f0,&UNK_00844200);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_7 + 8),param_5,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar4,param_4,uVar1,&UNK_008441f0,&UNK_008441f8);
  uVar3 = 0;
  __sSDMa(0,uVar1,uVar2,uVar4);
  auStack_80[0] = param_1;
  uStack_68 = uVar3;
  _swift_bridgeObjectRetain(param_1);
  FUN_0011e228(auStack_80,param_2,param_3);
  FUN_00036564(auStack_80);
  return;
}



/* Entry: 0011e940; end: 0011ea17;  */

void FUN_0011e940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar1,&UNK_008441f0,&UNK_008441f8);
  uVar2 = 0;
  __sSDMa(0,uVar1,param_5,uVar3);
  auStack_70[0] = param_1;
  uStack_58 = uVar2;
  _swift_bridgeObjectRetain(param_1);
  FUN_0011e228(auStack_70,param_2,param_3);
  FUN_00036564(auStack_70);
  return;
}



/* Entry: 0011ea18; end: 0011eaef;  */

void FUN_0011ea18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(param_6 + 8);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,param_4,&UNK_008441f0,&UNK_00844200);
  _swift_getAssociatedConformanceWitness(uVar3,param_4,uVar1,&UNK_008441f0,&UNK_008441f8);
  uVar2 = 0;
  __sSDMa(0,uVar1,param_5,uVar3);
  auStack_70[0] = param_1;
  uStack_58 = uVar2;
  _swift_bridgeObjectRetain(param_1);
  FUN_0011e228(auStack_70,param_2,param_3);
  FUN_00036564(auStack_70);
  return;
}



/* Entry: 0011eaf0; end: 0011edef;  */

void FUN_0011eaf0(void)

{
  FUN_0011e4a0();
  return;
}



/* Entry: 0011edf0; end: 0011ee27;  */

void FUN_0011edf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_000232c8(param_2 + 2,param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar2);
  return;
}



/* Entry: 0011ee28; end: 0011ef9f;  */

void FUN_0011ee28(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *unaff_x20;
  lVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  lVar1 = lVar10;
  if (uVar11 == 0) {
    uVar9 = lVar4 + 0x40U >> 6;
    uVar11 = uVar9;
    if ((long)uVar9 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar8 = uVar11 - 1;
    do {
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x11efa0);
        (*pcVar7)();
      }
      if ((long)uVar9 <= lVar1) {
        uVar11 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        goto LAB_0011eed4;
      }
      uVar11 = *(ulong *)(lVar5 + lVar1 * 8);
      lVar10 = lVar10 + 1;
    } while (uVar11 == 0);
  }
  lVar8 = lVar1;
  uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar8 << 6;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x10);
  uStack_80 = *puVar2;
  uVar6 = puVar2[1];
  uStack_78 = uVar6;
  FUN_000232c8(*(long *)(lVar3 + 0x38) + uVar9 * 0x20,&uStack_70);
  _swift_bridgeObjectRetain(uVar6);
LAB_0011eed4:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar4;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = uVar11;
  pcVar7 = (code *)unaff_x20[5];
  FUN_0011f2e4(&uStack_80,&uStack_b0);
  if (lStack_a8 == 0) {
    func_0x0011f334(&uStack_80,0xaf01d8,&UNK_007da168);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    lStack_d8 = lStack_a8;
    uStack_e0 = uStack_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    (*pcVar7)(param_1,&uStack_e0);
    func_0x0011f334(&uStack_e0,0xaf01e0,&UNK_007da170);
    func_0x0011f334(&uStack_80,0xaf01d8,&UNK_007da168);
  }
  return;
}



/* Entry: 0011efa0; end: 0011efa3;  */

void FUN_0011efa0(void)

{
  return;
}



/* Entry: 0011efa4; end: 0011f2db;  */

void FUN_0011efa4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

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
  FUN_0011ee28(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_0011f298;
  FUN_000252c8(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  FUN_000202c0();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_0011f2d4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x11f2d8);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    FUN_00121748(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    FUN_000202c0();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_0011f0a8:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11f0b8);
      (*pcVar3)();
    }
LAB_0011f0bc:
    if ((uVar5 & 1) != 0) goto LAB_0011f0c0;
LAB_0011f118:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    FUN_000252c8(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_0011f2d8:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x11f2dc);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_0011f0bc;
    FUN_00120cd0();
    if ((uVar5 & 1) == 0) goto LAB_0011f118;
LAB_0011f0c0:
    lVar10 = *param_5;
    FUN_000232c8(auStack_f0,auStack_110);
    _swift_bridgeObjectRelease(uVar2);
    FUN_00036564(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_00036564(lVar10);
    FUN_000252c8(auStack_110,lVar10);
  }
  FUN_0011ee28(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    FUN_000252c8(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    FUN_000202c0();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_0011f2d4;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      FUN_00121748(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      FUN_000202c0();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_0011f0a8;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      FUN_000252c8(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_0011f2d8;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      FUN_000232c8(auStack_f0,auStack_110);
      _swift_bridgeObjectRelease(uVar2);
      FUN_00036564(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_00036564(lVar10);
      FUN_000252c8(auStack_110,lVar10);
    }
    FUN_0011ee28(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_0011f298:
  FUN_0011f2dc(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  _swift_release(param_3);
  return;
}



/* Entry: 0011f2dc; end: 0011f2e3;  */

void FUN_0011f2dc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 0011f2e4; end: 0011f373;  */

undefined8 FUN_0011f2e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xaf01d8;
  func_0x000115a8(0xaf01d8,&UNK_007da168);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 0011f374; end: 0011f693;  */

void FUN_0011f374(void)

{
  func_0x0011eb18();
  return;
}



/* Entry: 0011f694; end: 0011f69b;  */

undefined8 * FUN_0011f694(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0011f69c; end: 0011f6c3;  */

void FUN_0011f69c(void)

{
  func_0x0011ebe0();
  return;
}



/* Entry: 0011f6c4; end: 0011f6ff;  */

void FUN_0011f6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_0099b938)();
  return;
}



/* Entry: 0011f700; end: 0011f73b;  */

void FUN_0011f700(void)

{
  return;
}



/* Entry: 0011f73c; end: 0011f783;  */

void FUN_0011f73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fce0(param_5,param_3,&PTR_DAT_009ab618);
  return;
}



/* Entry: 0011f784; end: 0011f7bf;  */

void FUN_0011f784(void)

{
  return;
}



/* Entry: 0011f7c0; end: 0011f82b;  */

void FUN_0011f7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fcdc(param_5,param_3,&PTR_DAT_009ab618);
  return;
}



/* Entry: 0011f82c; end: 0011f85f;  */

void FUN_0011f82c(void)

{
  return;
}



/* Entry: 0011f860; end: 0011f907;  */

void FUN_0011f860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fce4(param_5,param_3,&PTR_DAT_009ab618);
  return;
}



/* Entry: 0011f908; end: 0011f94f;  */

void FUN_0011f908(void)

{
  return;
}



/* Entry: 0011f950; end: 0011f997;  */

void FUN_0011f950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fce0(param_5,param_3,&PTR_DAT_009abac8);
  return;
}



/* Entry: 0011f998; end: 0011f9d3;  */

void FUN_0011f998(void)

{
  return;
}



/* Entry: 0011f9d4; end: 0011fa3f;  */

void FUN_0011f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fcdc(param_5,param_3,&PTR_DAT_009abac8);
  return;
}



/* Entry: 0011fa40; end: 0011fa73;  */

void FUN_0011fa40(void)

{
  return;
}



/* Entry: 0011fa74; end: 0011fb1b;  */

void FUN_0011fa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fce4(param_5,param_3,&PTR_DAT_009abac8);
  return;
}



/* Entry: 0011fb1c; end: 0011fb27;  */

void FUN_0011fb1c(void)

{
  return;
}



/* Entry: 0011fb28; end: 0011fb4b;  */

void FUN_0011fb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fcf0(param_5,param_3,&PTR_DAT_009adb30);
  return;
}



/* Entry: 0011fb4c; end: 0011fb87;  */

void FUN_0011fb4c(void)

{
  return;
}



/* Entry: 0011fb88; end: 0011fbf3;  */

void FUN_0011fb88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fcdc(param_5,param_3,&PTR_DAT_009adb30);
  return;
}



/* Entry: 0011fbf4; end: 0011fc27;  */

void FUN_0011fbf4(void)

{
  return;
}



/* Entry: 0011fc28; end: 0011fccf;  */

void FUN_0011fc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  func_0x0011fce4(param_5,param_3,&PTR_DAT_009adb30);
  return;
}



/* Entry: 0011fcd0; end: 0011fd0f;  */

void FUN_0011fcd0(void)

{
  return;
}



/* Entry: 0011fd10; end: 0011fd37;  */

void FUN_0011fd10(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0011fd38; end: 0011fd4b;  */

undefined8 FUN_0011fd38(void)

{
  return 0x11fd48;
}



/* Entry: 0011fd4c; end: 0011fd7b;  */

undefined8 FUN_0011fd4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_001229d0();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Entry: 0011fd7c; end: 0011fde3;  */

void FUN_0011fd7c(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_00122a60(param_1,auStack_58);
      FUN_00122aa4(auStack_58,auStack_80);
      func_0x00120588(auStack_80);
      FUN_00011670(auStack_80);
      param_1 = param_1 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 0011fde4; end: 0011fe77;  */

undefined * FUN_0011fde4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar1 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    lVar4 = 0x20;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      _swift_bridgeObjectRetain(uVar2);
      FUN_0011fe78();
      _swift_bridgeObjectRelease(uVar2);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar1;
}



/* Entry: 0011fe78; end: 00120877;  */

/* WARNING: Removing unreachable block (ram,0x00120204) */

void FUN_0011fe78(long param_1,ulong param_2)

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
      if ((*(long *)(uVar8 + 0x10) == 0) || (uVar18 = uVar11, FUN_000e1d94(), (param_2 & 1) == 0)) {
        _swift_bridgeObjectRetain(uVar15);
        uVar18 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = (undefined *)*unaff_x20;
        uVar8 = uVar11;
        apuStack_90[0] = puVar12;
        FUN_000e1d94();
        uVar10 = (ulong)~(uint)param_2 & 1;
        lVar16 = *(long *)(puVar12 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x120200);
          (*pcVar2)();
        }
        if (*(long *)(puVar12 + 0x18) < lVar16) {
          func_0x0012276c(lVar16);
          uVar8 = uVar11;
          FUN_000e1d94();
          uVar10 = uVar18;
          puVar12 = apuStack_90[0];
          if (((uint)param_2 & 1) != ((uint)uVar18 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___sSiN_0099b2c0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x120230);
            (*pcVar2)();
          }
        }
        else {
          uVar10 = param_2;
          puVar12 = apuStack_90[0];
          if ((uVar18 & 1) == 0) {
            FUN_001215ec();
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x120204);
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
        puVar12 = PTR___swiftEmptyArrayStorage_0099b8f0;
        if (uVar8 != 0) {
          uVar18 = 0;
          lVar17 = lVar16 + 0x20;
          do {
            if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1201fc);
              (*pcVar2)();
            }
            FUN_00122a60(lVar17,apuStack_90);
            ppuVar5 = apuStack_90;
            FUN_00120878(ppuVar5,uVar15);
            if (((ulong)ppuVar5 & 1) == 0) {
              FUN_00011670(apuStack_90);
            }
            else {
              puVar6 = puVar12;
              _swift_isUniquelyReferenced_nonNull_native();
              puStack_68 = puVar12;
              if (((ulong)puVar6 & 1) == 0) {
                func_0x000e2954(0,*(long *)(puVar12 + 0x10) + 1,1);
              }
              uVar10 = *(ulong *)(puStack_68 + 0x10);
              if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar10) {
                func_0x000e2954(1 < *(ulong *)(puStack_68 + 0x18),uVar10 + 1,1);
              }
              puVar12 = puStack_68;
              *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
              FUN_00122aa4(apuStack_90,puStack_68 + uVar10 * 0x28 + 0x20);
            }
            uVar18 = uVar18 + 1;
            lVar17 = lVar17 + 0x28;
          } while (uVar8 != uVar18);
        }
        _swift_bridgeObjectRelease(lVar16);
        apuStack_90[0] = puVar12;
        func_0x000c7f00(uVar15);
        puVar12 = apuStack_90[0];
        _swift_bridgeObjectRetain(apuStack_90[0]);
        uVar8 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native(uVar8);
        puStack_68 = (undefined *)*unaff_x20;
        func_0x000f3a48(puVar12,uVar11,uVar8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1201f8);
  (*pcVar2)();
}



/* Entry: 00120878; end: 00120963;  */

undefined8 FUN_00120878(long param_1,long param_2)

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
      FUN_00122a60(param_2,auStack_78);
      FUN_00122aa4(auStack_78,auStack_a0);
      lVar2 = *(long *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      FUN_0001393c(param_1,lVar2);
      (**(code **)(lVar3 + 0x18))(lVar2,lVar3);
      lVar1 = lStack_80;
      lVar3 = lStack_88;
      FUN_0001393c(auStack_a0,lStack_88);
      (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
      if (lVar2 == lVar3) {
        FUN_00011670(auStack_a0);
        return 0;
      }
      FUN_00011670(auStack_a0);
      param_2 = param_2 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 00120964; end: 001209a3;  */

undefined8 FUN_00120964(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  FUN_0011fe78(param_1);
  return param_2;
}



/* Entry: 001209a4; end: 001209b3;  */

void FUN_001209a4(undefined8 *param_1,long param_2,ulong param_3,long param_4)

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
  if ((*(long *)(lVar4 + 0x10) != 0) && (FUN_000e1d94(), (param_3 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + param_4 * 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(lVar4);
    if (uVar6 != 0) {
      uVar7 = 0;
      lVar5 = lVar4 + 0x20;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x120350);
          (*pcVar2)();
        }
        FUN_00122a60(lVar5,auStack_88);
        FUN_00122aa4(auStack_88,auStack_b0);
        lVar1 = lStack_90;
        lVar3 = lStack_98;
        FUN_0001393c(auStack_b0,lStack_98);
        (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
        if (param_2 == lVar3) {
          _swift_bridgeObjectRelease(lVar4);
          FUN_00122a60(auStack_b0,param_1);
          FUN_00011670(auStack_b0);
          return;
        }
        uVar7 = uVar7 + 1;
        FUN_00011670(auStack_b0);
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



/* Entry: 001209b4; end: 001209ef;  */

void FUN_001209b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_001229d0();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 001209f0; end: 00120a6f;  */

void FUN_001209f0(void)

{
  undefined8 uVar1;
  undefined *puStack_18;
  
  puStack_18 = &UNK_009ae878;
  uVar1 = 0xaf0368;
  func_0x000115a8(0xaf0368,&UNK_007da298);
  __sSS10reflectingSSx_tclufC(&puStack_18,uVar1);
  return;
}



/* Entry: 00120a70; end: 00120ad7;  */

void FUN_00120a70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_000252c8(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x120ad8);
  (*pcVar3)();
}



/* Entry: 00120ad8; end: 00120bd3;  */

void FUN_00120ad8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x120b34);
  (*pcVar2)();
}



/* Entry: 00120bd4; end: 00120c3b;  */

void FUN_00120bd4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  FUN_00122aa4(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x28);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x120c3c);
  (*pcVar2)();
}



/* Entry: 00120c3c; end: 00120ccf;  */

void FUN_00120c3c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x120c8c);
  (*pcVar3)();
}



/* Entry: 00120cd0; end: 001211c7;  */

void FUN_00120cd0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [32];
  
  func_0x000115a8(0xae8160,&UNK_007d6500);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) == 0) {
    _swift_release(lVar11);
LAB_00120e4c:
    *unaff_x20 = lVar6;
    return;
  }
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
  if (uVar7 == 0) goto LAB_00120db8;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_000232c8(*(long *)(lVar11 + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_000252c8(auStack_80,*(long *)(lVar6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_00120db8:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x120e74);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(lVar11);
          goto LAB_00120e4c;
        }
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



/* Entry: 001211c8; end: 0012132f;  */

void FUN_001211c8(void)

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
  
  func_0x000115a8(0xaeeb40,&UNK_007d9068);
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
    if (uVar7 == 0) goto LAB_001212a4;
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
LAB_001212a4:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x121330);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_00121308;
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
LAB_00121308:
  _swift_release(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 00121330; end: 001215eb;  */

void FUN_00121330(void)

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
  
  func_0x000115a8(0xaf0378,&UNK_007da338);
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
    if (uVar6 == 0) goto LAB_00121408;
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
LAB_00121408:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x121480);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_00121460;
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
LAB_00121460:
  _swift_release(lVar12);
  *unaff_x20 = lVar5;
  return;
}


