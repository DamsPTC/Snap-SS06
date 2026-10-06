/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10417443c; end: 1041744b7;  */

void FUN_10417443c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1041744b8; end: 104174533;  */

code * FUN_1041744b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0xf0a8);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x0001020f9ba0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_104174534;
}



/* Entry: 104174534; end: 10417455f;  */

void FUN_104174534(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 104174560; end: 104174603;  */

void FUN_104174560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined8 uStack_48;
  
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_4 + 0x18));
  puVar2 = PTR___ss15ContiguousArrayVyxGSKsMc_11034e6a8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSKsMc_11034e6a8,uVar1);
  puVar3 = PTR___ss15ContiguousArrayVyxGSMsMc_11034e6b0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSMsMc_11034e6b0,uVar1);
  __sSMsSKRzrlE9partition2by5IndexSlQzSb7ElementSTQzKXE_tKF
            (&uStack_48,param_2,param_3,uVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    *param_1 = uStack_48;
  }
  return;
}



/* Entry: 104174604; end: 104174667;  */

void FUN_104174604(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  uStack_30 = *param_2;
  uVar1 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_3 + 0x18));
  puVar2 = PTR___ss15ContiguousArrayVyxGSMsMc_11034e6b0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSMsMc_11034e6b0,uVar1);
  __sSMsE6swapAtyy5IndexQz_ACtF(&uStack_28,&uStack_30,uVar1,puVar2);
  return;
}



/* Entry: 104174668; end: 104174687;  */

void FUN_104174668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSMsE42_withUnsafeMutableBufferPointerIfSupportedyqd__Sgqd__Sry7ElementQzGzKXEKlF
            (param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 104174688; end: 1041747c3;  */

void FUN_104174688(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  __ss15ContiguousArrayVMa(0,uVar4);
  __ss15ContiguousArrayV21_makeMutableAndUniqueyyF();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  FUN_10417397c(lVar1,uVar4);
  lVar2 = lVar1;
  uVar3 = uVar5;
  __sSr5start5countSryxGSpyxGSg_SitcfC();
  lStack_70 = lVar2;
  uStack_68 = uVar3;
  (*param_2)(param_1,&lStack_70);
  uVar3 = 0x112d393f0;
  if (unaff_x21 == 0) {
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_104173994(&lStack_70,lVar1,uVar5,unaff_x20 + 0x10,uVar4,param_4,uVar3,
                  PTR___ss5ErrorWS_11034ee10);
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,0,1,param_4);
  }
  else {
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_104173994(&lStack_70,lVar1,uVar5,unaff_x20 + 0x10,uVar4,param_4,uVar3,
                  PTR___ss5ErrorWS_11034ee10);
  }
  return;
}



/* Entry: 1041747c4; end: 1041747d7;  */

void FUN_1041747c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss15ContiguousArrayVsSQRzlE2eeoiySbAByxG_ADtFZ_11034e688)
            (param_3,param_6,param_8,param_11);
  return;
}



/* Entry: 1041747d8; end: 10417480f;  */

uint FUN_1041747d8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  FUN_1041747c4(param_1,param_2,*(undefined8 *)(param_1 + 0x10),param_4,param_5,
                *(undefined8 *)(param_2 + 0x10),param_7,*(undefined8 *)(param_3 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 104174810; end: 104174973;  */

void FUN_104174810(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar8 = *(long *)(param_6 + -8);
  lVar7 = param_4;
  lVar5 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar2 = 0;
  uStack_78 = param_2;
  uStack_70 = param_3;
  lStack_68 = lVar7;
  FUN_104173f50(0,param_5,lVar5,param_7);
  puVar3 = &UNK_10dcda430;
  _swift_getWitnessTable(&UNK_10dcda430,uVar2);
  __sSlsE5countSivg(uVar2,puVar3);
  __ss6HasherV8_combineyySuF();
  lVar7 = param_4;
  __ss15ContiguousArrayV5countSivg(param_4,param_6);
  if (lVar7 != 0) {
    lVar7 = 0;
    do {
      __ss15ContiguousArrayVyxSicig((long)puVar6 - extraout_x12,lVar7,param_4,param_6);
      lVar5 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104174974);
        (*pcVar1)();
      }
      (**(code **)(lVar8 + 0x20))(puVar6,(long)puVar6 - extraout_x12,param_6);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,param_6,param_8);
      (**(code **)(lVar8 + 8))(puVar6,param_6);
      lVar4 = param_4;
      __ss15ContiguousArrayV5countSivg(param_4,param_6);
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar4);
  }
  return;
}



/* Entry: 104174974; end: 1041749ff;  */

void FUN_104174974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_98 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_104174810(auStack_98,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104174a00; end: 104174a37;  */

void FUN_104174a00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  
  uVar7 = *(undefined8 *)(param_2 + -8);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  FUN_104174810(auStack_98,uVar1,uVar3,uVar5,uVar2,uVar4,uVar6,uVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104174a38; end: 104174a93;  */

void FUN_104174a38(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [72];
  
  uVar1 = *(undefined8 *)(param_3 + -8);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104174810(auStack_78,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104174a94; end: 104174ab3;  */

void FUN_104174a94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)
            (PTR___ss16IndexingIteratorVyxGStsMc_11034e748,param_1);
  return;
}



/* Entry: 104174ab4; end: 104174ad7;  */

void FUN_104174ab4(void)

{
  FUN_104174bcc(0x112d4f688,PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120);
  return;
}



/* Entry: 104174ad8; end: 104174b1f;  */

void FUN_104174ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcda380;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSksSkRzrlMc_11034eed8,param_1,&puStack_28);
  return;
}



/* Entry: 104174b20; end: 104174b43;  */

void FUN_104174b20(void)

{
  FUN_104174bcc(0x112f920a0,PTR___sSnyxGSKsSxRzSZ6StrideRpzrlMc_11034e110);
  return;
}



/* Entry: 104174b44; end: 104174b8b;  */

void FUN_104174b44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcda3d0;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSKsSKRzrlMc_11034eec8,param_1,&puStack_28);
  return;
}



/* Entry: 104174b8c; end: 104174ba7;  */

void FUN_104174b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcda318,param_1);
  return;
}



/* Entry: 104174ba8; end: 104174bcb;  */

void FUN_104174ba8(void)

{
  FUN_104174bcc(0x112f920a8,PTR___sSnyxGSlsSxRzSZ6StrideRpzrlMc_11034e128);
  return;
}



/* Entry: 104174bcc; end: 104174c3f;  */

void FUN_104174bcc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0x112d4f678;
    func_0x00010002969c(0x112d4f678,&UNK_10d915670);
    uVar2 = uVar1;
    func_0x000100f79844();
    puStack_40 = PTR___sSiSxsWP_11034dee8;
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_2,uVar1,&puStack_40);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 104174c40; end: 104174c4f;  */

void FUN_104174c40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(PTR___ss5SliceVyxGSlsMc_11034eee0,param_1);
  return;
}



/* Entry: 104174c50; end: 104174c97;  */

void FUN_104174c50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = &UNK_10dcda510;
  _swift_getWitnessTable();
  puStack_28 = puVar1;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSMsSMRzrlMc_11034eed0,param_1,&puStack_28);
  return;
}



/* Entry: 104174c98; end: 104174ccf;  */

void FUN_104174c98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&UNK_10dcda580,param_1,&uStack_18);
  return;
}



/* Entry: 104174cd0; end: 104174cd7;  */

void FUN_104174cd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 104174cd8; end: 104174d07;  */

void FUN_104174cd8(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 104174d08; end: 104174dc7;  */

undefined8 * FUN_104174d08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 104174dc8; end: 104174e13;  */

undefined8 * FUN_104174dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104174e14; end: 104174e9b;  */

int FUN_104174e14(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104174e9c; end: 104174ecb;  */

void FUN_104174e9c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x30))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Entry: 104174ecc; end: 104174ed7;  */

void FUN_104174ecc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000104171fdc(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Entry: 104174ed8; end: 104174eeb;  */

void FUN_104174ed8(void)

{
  FUN_104173f94();
  return;
}



/* Entry: 104174eec; end: 104174f5b;  */

void FUN_104174eec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 104174f5c; end: 104174f8b;  */

void FUN_104174f5c(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 104174f8c; end: 10417504b;  */

undefined8 * FUN_104174f8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 10417504c; end: 104175097;  */

undefined8 * FUN_10417504c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 104175098; end: 104175127;  */

int FUN_104175098(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104175128; end: 1041751fb;  */

void FUN_104175128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  __ss7EncoderP20singleValueContainers06Singlec8EncodingD0_pyFTj(auStack_78,uVar2,uVar1);
  uStack_48 = param_3;
  func_0x0001000c6518(auStack_78,uStack_60);
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,param_4);
  puVar3 = PTR___ss15ContiguousArrayVyxGSEsSERzlMc_11034e6a0;
  uStack_80 = param_5;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSEsSERzlMc_11034e6a0,uVar2,&uStack_80);
  __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
            (&uStack_48,uVar2,puVar3,uStack_60,uStack_58);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1041751fc; end: 10417521b;  */

void FUN_1041751fc(undefined8 param_1,long param_2,long param_3)

{
  long unaff_x20;
  
  FUN_104175128(param_1,param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_3 + -8));
  return;
}



/* Entry: 10417521c; end: 10417554f;  */

undefined1  [16]
FUN_10417521c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  plVar5 = (long *)0x0;
  uStack_b0 = param_3;
  uStack_a8 = param_2;
  __ss13DecodingErrorO7ContextVMa();
  lVar12 = plVar5[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar11 = param_1;
  func_0x0001000a8868(param_1,uVar10);
  __ss7DecoderP20singleValueContainers06Singlec8DecodingD0_pyKFTj(auStack_88,uVar10,uVar1);
  uVar1 = uStack_68;
  uVar10 = uStack_70;
  if (unaff_x21 == 0) {
    puStack_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_c0 = lVar12;
    plStack_b8 = plVar5;
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar4 = uStack_a8;
    uVar6 = 0;
    __ss15ContiguousArrayVMa(0,uStack_a8);
    uStack_58 = uStack_b0;
    puVar7 = PTR___ss15ContiguousArrayVyxGSesSeRzlMc_11034e6c0;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSesSeRzlMc_11034e6c0,uVar6,&uStack_58);
    uVar8 = uVar6;
    __ss28SingleValueDecodingContainerP6decodeyqd__qd__mKSeRd__lFTj
              (&lStack_a0,uVar6,uVar6,puVar7,uVar10,uVar1);
    lVar11 = lStack_a0;
    lStack_90 = lStack_a0;
    FUN_1041761a4();
    puVar7 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar6);
    plVar9 = &lStack_a0;
    FUN_1041705d8(plVar9,&lStack_90,0,1,uVar8,uVar6,puVar7,param_4);
    lVar12 = lStack_a0;
    if (lStack_a0 == *(long *)(lVar11 + 0x10)) {
      lVar12 = lVar11;
      __ss15ContiguousArrayV5countSivg(lVar11,uVar4);
      if (lVar12 < 0x10) {
        plVar5 = (long *)0x0;
      }
      else {
        _swift_retain(plVar9);
        plVar5 = plVar9;
      }
      FUN_10417a9fc(lVar11,plVar5,uVar4,param_4);
      _swift_release(plVar9);
      func_0x0001000834e4(auStack_88);
      func_0x0001000834e4(param_1);
      goto LAB_1041754ec;
    }
    _swift_release(lVar11);
    func_0x0001000a8868(auStack_88,uStack_70);
    uVar10 = uStack_70;
    __ss28SingleValueDecodingContainerP10codingPathSays9CodingKey_pGvgTj(uStack_70,uStack_68);
    lStack_a0 = 0;
    uStack_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3d);
    __sSS6appendyySSF(0xd00000000000003a,0x800000010f1ee2c0);
    lStack_90 = lVar12;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar7);
    __sSS6appendyySSF(0x29,0xe100000000000000);
    puVar2 = puStack_c8;
    __ss13DecodingErrorO7ContextV10codingPath16debugDescription010underlyingB0ADSays9CodingKey_pG_SSs0B0_pSgtcfC
              (puStack_c8,uVar10,lStack_a0,uStack_98,0);
    lVar11 = 0;
    __ss13DecodingErrorOMa();
    plVar5 = (long *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
    _swift_allocError();
    plVar3 = plStack_b8;
    lVar12 = lStack_c0;
    (**(code **)(lStack_c0 + 0x10))(plVar5,puVar2,plStack_b8);
    (**(code **)(*(long *)(lVar11 + -8) + 0x68))
              (plVar5,*(undefined4 *)
                       PTR___ss13DecodingErrorO13dataCorruptedyA2B7ContextVcABmFWC_11034e588,lVar11)
    ;
    _swift_willThrow();
    _swift_release(plVar9);
    (**(code **)(lVar12 + 8))(puVar2,plVar3);
    func_0x0001000834e4(auStack_88);
  }
  func_0x0001000834e4(param_1);
LAB_1041754ec:
  auVar13._8_8_ = plVar5;
  auVar13._0_8_ = lVar11;
  return auVar13;
}



/* Entry: 104175550; end: 104175583;  */

void FUN_104175550(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_10417521c(param_2,uVar1,*(undefined8 *)(param_4 + -8),*(undefined8 *)(param_3 + 0x18));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
  }
  return;
}



/* Entry: 104175584; end: 10417571b;  */

void FUN_104175584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO3setyA2DmFWC_11034ef98;
  lVar2 = 0;
  uStack_78 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __ss6MirrorV12DisplayStyleOMa();
  lVar8 = *(long *)(lVar2 + -8);
  (**(code **)(lVar8 + 0x68))(lVar7,uVar1,lVar2);
  (**(code **)(lVar8 + 0x38))(lVar7,0,1,lVar2);
  uVar3 = 0;
  FUN_10417b6a8(0,param_4,param_5);
  uVar4 = 0;
  __ss15ContiguousArrayVMa(0,param_4);
  puVar5 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar4);
  FUN_104171894(puVar6,uVar3,uVar4,puVar5);
  _swift_retain(param_2);
  _swift_retain_n(param_3,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (param_1,&uStack_70,&uStack_78,lVar7,puVar6,uVar3,uVar4,puVar5);
  return;
}



/* Entry: 10417571c; end: 10417572b;  */

void FUN_10417571c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = 0;
  __ss6MirrorV22AncestorRepresentationOMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar9 - extraout_x8_00;
  uVar4 = *(undefined4 *)PTR___ss6MirrorV12DisplayStyleO3setyA2DmFWC_11034ef98;
  lVar5 = 0;
  uStack_78 = uVar3;
  uStack_70 = uVar1;
  uStack_68 = uVar3;
  __ss6MirrorV12DisplayStyleOMa();
  lVar11 = *(long *)(lVar5 + -8);
  (**(code **)(lVar11 + 0x68))(lVar10,uVar4,lVar5);
  (**(code **)(lVar11 + 0x38))(lVar10,0,1,lVar5);
  uVar6 = 0;
  FUN_10417b6a8(0,uVar2,uVar7);
  uVar7 = 0;
  __ss15ContiguousArrayVMa(0,uVar2);
  puVar8 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar7);
  FUN_104171894(puVar9,uVar6,uVar7,puVar8);
  _swift_retain(uVar1);
  _swift_retain_n(uVar3,2);
  __ss6MirrorV_17unlabeledChildren12displayStyle22ancestorRepresentationABx_q_AB07DisplayE0OSgAB08AncestorG0OtcSlR_r0_lufC
            (param_1,&uStack_70,&uStack_78,lVar10,puVar9,uVar6,uVar7,puVar8);
  return;
}



/* Entry: 10417572c; end: 104175783;  */

void FUN_10417572c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10417b6a8(0,param_3,param_4);
  puVar2 = &UNK_10dcda8f8;
  _swift_getWitnessTable(&UNK_10dcda8f8,uVar1);
  FUN_1041877f0(&uStack_30,uVar1,puVar2);
  return;
}



/* Entry: 104175784; end: 1041757d3;  */

void FUN_104175784(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = *unaff_x20;
  uStack_28 = unaff_x20[1];
  uVar1 = 0;
  FUN_10417b6a8(0,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  puVar2 = &UNK_10dcda8f8;
  _swift_getWitnessTable(&UNK_10dcda8f8,uVar1);
  FUN_1041877f0(&uStack_30,uVar1,puVar2);
  return;
}



/* Entry: 1041757d4; end: 10417583b;  */

void FUN_1041757d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  uVar1 = 0;
  uStack_38 = param_1;
  __sSaMa(0);
  puVar2 = PTR___sSayxGSksMc_11034dd18;
  _swift_getWitnessTable(PTR___sSayxGSksMc_11034dd18,uVar1);
  FUN_104175a3c(&uStack_38,param_2,uVar1,param_3,puVar2);
  return;
}



/* Entry: 10417583c; end: 104175867;  */

void FUN_10417583c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1041757d4(param_2,uVar1,*(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 104175868; end: 104175973;  */

void FUN_104175868(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar4 = param_3;
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar1 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __ss15ContiguousArrayV5countSivg(lVar4,lVar2);
  __ss6HasherV8_combineyySuF();
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 != 0) {
    lVar2 = 0;
    do {
      __ss15ContiguousArrayVyxSicig((long)puVar1 - extraout_x12,lVar2,param_3,param_4);
      lVar2 = lVar2 + 1;
      (**(code **)(lVar3 + 0x20))(puVar1,(long)puVar1 - extraout_x12,param_4);
      __sSH4hash4intoys6HasherVz_tFTj(param_1,param_4,param_5);
      (**(code **)(lVar3 + 8))(puVar1,param_4);
    } while (lVar4 != lVar2);
  }
  return;
}



/* Entry: 104175974; end: 1041759cf;  */

void FUN_104175974(void)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_104175868(auStack_78);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1041759d0; end: 1041759f7;  */

void FUN_1041759d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getWitnessTable_11034f410)(&UNK_10dcda740,param_1);
  return;
}



/* Entry: 1041759f8; end: 104175a3b;  */

void FUN_1041759f8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104175868(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104175a3c; end: 1041761a3;  */

undefined1  [16]
FUN_104175a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar13;
  long extraout_x12;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  puVar8 = PTR___sSlTL_11034dfe8;
  lVar14 = *(long *)(*(long *)(param_5 + 8) + 8);
  lVar4 = 0xff;
  uStack_98 = param_2;
  uStack_80 = param_5;
  _swift_getAssociatedTypeWitness
            (0xff,lVar14,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar5 = lVar14;
  _swift_getAssociatedConformanceWitness
            (lVar14,param_3,lVar4,puVar8,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar6 = 0;
  __ss16PartialRangeFromVMa(0,lVar4,lVar5);
  lStack_e0 = *(long *)(lVar6 + -8);
  lStack_d8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_e0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = 0;
  lStack_e8 = (long)&pcStack_120 - extraout_x8;
  _swift_getAssociatedTypeWitness(0,lVar14,param_3,puVar8,PTR___s11SubSequenceSlTl_11034d5d8);
  lStack_f0 = *(long *)(lVar6 + -8);
  lStack_a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = ((long)&pcStack_120 - extraout_x8) - extraout_x8_00;
  lVar6 = 0;
  lStack_b8 = lVar12;
  __ss16PartialRangeUpToVMa(0,lVar4,lVar5);
  lStack_c8 = *(long *)(lVar6 + -8);
  lStack_c0 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = lVar12 - extraout_x8_01;
  lStack_a0 = *(long *)(param_3 + -8);
  lStack_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar17 - extraout_x12;
  FUN_1041761a4();
  uVar7 = uVar15;
  uStack_90 = param_4;
  FUN_1041705d8(uVar15,param_1,0,1,lVar6,param_3,uStack_80,param_4);
  uStack_80 = uVar7;
  __sSl8endIndex0B0QzvgTj(lVar17,param_3,lVar14);
  uVar13 = *(undefined8 *)(lVar5 + 8);
  lStack_b0 = lVar5;
  uStack_88 = uVar15;
  __sSQ2eeoiySbx_xtFZTj(uVar15,lVar17,lVar4,uVar13);
  pcVar16 = *(code **)(lVar18 + 8);
  (*pcVar16)(lVar17,lVar4);
  uVar7 = uStack_88;
  lVar5 = lStack_a0;
  if ((uVar15 & 1) == 0) {
    uVar15 = uStack_88;
    pcStack_100 = pcVar16;
    lStack_f8 = param_3;
    __sSQ2eeoiySbx_xtFZTj(uStack_88,uStack_88,lVar4,uVar13);
    if ((uVar15 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x104175f50);
      (*pcVar16)();
    }
    pcStack_120 = *(code **)(lVar18 + 0x10);
    (*pcStack_120)(lVar17,uVar7,lVar4);
    lVar6 = lStack_d0;
    __ss16PartialRangeUpToVyAByxGxcfC(lStack_d0,lVar17,lVar4,lStack_b0);
    lVar12 = lStack_c0;
    puVar8 = PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790;
    uStack_108 = uVar13;
    _swift_getWitnessTable(PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790,lStack_c0);
    lVar18 = lStack_b8;
    lVar5 = lStack_f8;
    uStack_110 = param_1;
    __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
              (lStack_b8,lVar6,lStack_f8,lVar12,lVar14,puVar8);
    lVar2 = lStack_a8;
    lVar9 = lVar14;
    _swift_getAssociatedConformanceWitness
              (lVar14,lVar5,lStack_a8,PTR___sSlTL_11034dfe8,PTR___sSl11SubSequenceSl_SlTn_11034df90)
    ;
    uVar13 = uStack_98;
    uStack_118 = *(undefined8 *)(lVar9 + 8);
    lVar5 = lVar18;
    __ss15ContiguousArrayVyAByxGqd__c7ElementQyd__RszSTRd__lufC(lVar18,uStack_98,lVar2);
    (**(code **)(lStack_c8 + 8))(lVar6,lVar12);
    uVar15 = uStack_80;
    uVar3 = uStack_90;
    uVar11 = uStack_80;
    FUN_10417a9fc(lVar5,uStack_80,uVar13,uStack_90);
    lStack_78 = lVar5;
    uStack_70 = uVar11;
    _swift_retain(uVar15);
    uVar15 = uVar7;
    __sSQ2eeoiySbx_xtFZTj(uVar7,uVar7,lVar4,uStack_108);
    if ((uVar15 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x104175f54);
      (*pcVar16)();
    }
    (*pcStack_120)(lVar17,uVar7,lVar4);
    lVar6 = lStack_e8;
    __ss16PartialRangeFromVyAByxGxcfC(lStack_e8,lVar17,lVar4,lStack_b0);
    lVar12 = lStack_d8;
    puVar8 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
    _swift_getWitnessTable(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,lStack_d8);
    lVar5 = lStack_f8;
    uVar1 = uStack_110;
    __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
              (lVar18,lVar6,lStack_f8,lVar12,lVar14,puVar8);
    uVar10 = 0;
    FUN_10417b6a8(0,uVar13,uVar3);
    lVar14 = lStack_a8;
    FUN_10417648c(lVar18,uVar10,lStack_a8,uStack_118);
    _swift_release(uStack_80);
    (**(code **)(lStack_a0 + 8))(uVar1,lVar5);
    (**(code **)(lStack_f0 + 8))(lVar18,lVar14);
    (**(code **)(lStack_e0 + 8))(lVar6,lVar12);
    (*pcStack_100)(uVar7,lVar4);
  }
  else {
    (**(code **)(lStack_a0 + 0x10))(lVar12,param_1,param_3);
    __ss15ContiguousArrayVyAByxGqd__c7ElementQyd__RszSTRd__lufC
              (lVar12,uStack_98,param_3,*(undefined8 *)(lVar14 + 8));
    uVar7 = uStack_80;
    FUN_10417a9fc();
    (**(code **)(lVar5 + 8))(param_1,param_3);
    (*pcVar16)(uStack_88,lVar4);
    lStack_78 = lVar12;
    uStack_70 = uVar7;
  }
  auVar19._8_8_ = uStack_70;
  auVar19._0_8_ = lStack_78;
  return auVar19;
}



/* Entry: 1041761a4; end: 1041761ab;  */

undefined8 FUN_1041761a4(void)

{
  return 0;
}



/* Entry: 1041761ac; end: 1041762e3;  */

void FUN_1041761ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)(param_3 + 0x10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40),param_1,param_1);
  (**(code **)(extraout_x12 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,lVar6);
  __ss15ContiguousArrayV6appendyyxnF(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
  lVar7 = unaff_x20[1];
  lVar5 = lVar7;
  __ss15ContiguousArrayV5countSivg(lVar7,lVar6);
  lVar4 = *unaff_x20;
  lVar3 = lVar4;
  FUN_10417aab4(lVar4,lVar7,lVar6,*(undefined8 *)(param_3 + 0x18));
  if (lVar3 < lVar5) {
    FUN_10417aa0c(param_3);
  }
  else if (lVar4 != 0) {
    FUN_10417ab64(param_3);
    lVar5 = *unaff_x20;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1041762e4);
      (*pcVar1)();
    }
    _swift_retain(lVar5);
    FUN_104176788(lVar5 + 0x10,lVar5 + 0x20,param_2);
    _swift_release(lVar5);
  }
  return;
}



/* Entry: 1041762e4; end: 104176353;  */

bool FUN_1041762e4(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  func_0x00010417a89c(param_1,uVar2,uVar3,*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x18));
  uVar1 = (uint)uVar2 & 0xff;
  if (uVar1 == 1) {
    FUN_1041761ac(param_1,uVar3,param_2);
  }
  return uVar1 == 1;
}



/* Entry: 104176354; end: 10417648b;  */

void FUN_104176354(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)(param_2 + 0x10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar6);
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,lVar6);
  __ss15ContiguousArrayV6appendyyxnF(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2);
  lVar7 = unaff_x20[1];
  lVar5 = lVar7;
  __ss15ContiguousArrayV5countSivg(lVar7,lVar6);
  lVar4 = *unaff_x20;
  lVar3 = lVar4;
  FUN_10417aab4(lVar4,lVar7,lVar6,*(undefined8 *)(param_2 + 0x18));
  if (lVar3 < lVar5) {
    FUN_10417aa0c(param_2);
  }
  else if (lVar4 != 0) {
    FUN_10417ab64(param_2);
    lVar5 = *unaff_x20;
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417648c);
      (*pcVar1)();
    }
    _swift_retain(lVar5);
    FUN_1041766a4(lVar5 + 0x10,lVar5 + 0x20,param_1);
    _swift_release(lVar5);
  }
  return;
}



/* Entry: 10417648c; end: 1041766a3;  */

void FUN_10417648c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar6 + -8);
  uStack_80 = param_1;
  lStack_70 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_00;
  lVar1 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  lVar4 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_78 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar9 = lVar4 - extraout_x8_02;
  (**(code **)(lVar1 + 0x10))(lVar4,uStack_80,param_3);
  __sST12makeIterator0B0QzyFTj(lVar9,param_3,param_4);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar2,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  __sSt4next7ElementQzSgyFTj(lVar8,lVar2,param_4);
  pcVar3 = *(code **)(lVar10 + 0x30);
  lVar1 = lVar8;
  (*pcVar3)(lVar8,1,lVar6);
  if ((int)lVar1 != 1) {
    pcVar5 = *(code **)(lVar10 + 0x20);
    do {
      (*pcVar5)(lVar7,lVar8,lVar6);
      FUN_1041762e4(lVar7,lStack_70);
      (**(code **)(lVar10 + 8))(lVar7,lVar6);
      __sSt4next7ElementQzSgyFTj(lVar8,lVar2,param_4);
      lVar1 = lVar8;
      (*pcVar3)(lVar8,1,lVar6);
    } while ((int)lVar1 != 1);
  }
  (**(code **)(lStack_78 + 8))(lVar9,lVar2);
  return;
}



/* Entry: 1041766a4; end: 104176787;  */

void FUN_1041766a4(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *param_1;
  __sSH13_rawHashValue4seedS2i_tFTj(uVar2,param_5,param_6);
  lVar3 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104176784);
    (*pcVar1)();
  }
  uVar2 = lVar3 - 1U & uVar2;
  func_0x00010416d2e4();
  while (uVar2 != 0) {
    FUN_10416d53c();
  }
  lVar4 = *(long *)(param_4 + 8);
  lVar3 = lVar4;
  _swift_retain();
  __ss15ContiguousArrayV5countSivg();
  _swift_release(lVar4);
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104176788);
    (*pcVar1)();
  }
  func_0x00010416d47c(lVar3 + -1,0);
  return;
}



/* Entry: 104176788; end: 104176823;  */

void FUN_104176788(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + 8);
  lVar2 = lVar4;
  _swift_retain();
  __ss15ContiguousArrayV5countSivg();
  _swift_release(lVar4);
  if (!SBORROW8(lVar2,1)) {
    uVar3 = -1L << (*param_1 & 0x3f);
    lVar2 = (lVar2 + -1) - ((long)param_1[1] >> 6);
    FUN_10416e53c(uVar3 ^ (lVar2 >> 0x3f & (uVar3 ^ 0xffffffffffffffff)) + lVar2 ^
                          0xffffffffffffffff,param_3,param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104176824);
  (*pcVar1)();
}



/* Entry: 104176824; end: 10417686b;  */

void FUN_104176824(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar4 = param_2;
  func_0x00010417ac10(param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                      *(undefined8 *)(param_3 + 0x18));
  lVar2 = unaff_x20[1];
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  __ss15ContiguousArrayV5countSivg(lVar2,uVar5);
  if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417a9f8);
    (*pcVar1)();
  }
  lVar8 = *unaff_x20;
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = lVar8;
  FUN_10417aca0();
  if (lVar2 + -1 < lVar3) {
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
    __ss15ContiguousArrayV6remove2atxSi_tF(param_1,param_2,uVar4);
    lVar2 = *unaff_x20;
    lVar3 = unaff_x20[1];
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      _swift_beginAccess(lVar2 + 0x10,&stack0xffffffffffffffa8,0,0);
      uVar6 = *(ulong *)(lVar2 + 0x18) & 0x3f;
    }
    lVar8 = lVar3;
    __ss15ContiguousArrayV5countSivg(lVar3,uVar4);
    if (lVar8 < 0x10 && uVar6 == 0) {
      _swift_release(lVar2);
      *unaff_x20 = 0;
    }
    else {
      __ss15ContiguousArrayV5countSivg(lVar3,uVar4);
      func_0x00010416d850();
      FUN_10417b0f8();
    }
    return;
  }
  if (lVar8 == 0) {
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
  }
  else {
    func_0x00010417ab64();
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417a9fc);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_10417b3d8(lVar2 + 0x10,lVar2 + 0x20,uVar4,unaff_x20,param_2,uVar5,uVar7);
    _swift_release(lVar2);
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
  }
  __ss15ContiguousArrayV6remove2atxSi_tF(param_1,param_2,uVar4);
  return;
}



/* Entry: 10417686c; end: 1041768fb;  */

void FUN_10417686c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_2 + 0x10));
  puVar3 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar2);
  __sSlsE7isEmptySbvg(uVar2,puVar3);
  if ((uVar2 & 1) == 0) {
    FUN_104176824(param_1,0,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041768fc);
  (*pcVar1)();
}



/* Entry: 1041768fc; end: 1041768ff;  */

void FUN_1041768fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1041769a0(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104176900; end: 104176923;  */

void FUN_104176900(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1041769a0(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104176924; end: 10417692b;  */

void FUN_104176924(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1041769a0(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10417692c; end: 10417694f;  */

void FUN_10417692c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1041774d8(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104176950; end: 104176953;  */

void FUN_104176950(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1041774d8(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104176954; end: 10417699f;  */

void FUN_104176954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &UNK_10dcda7e0;
  uStack_30 = param_1;
  uStack_28 = param_2;
  _swift_getWitnessTable(&UNK_10dcda7e0,param_3);
  FUN_10417648c(&uStack_30,param_3,param_3,puVar1);
  return;
}



/* Entry: 1041769a0; end: 104176b53;  */

undefined1  [16]
FUN_1041769a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar7 = param_5;
  uVar2 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar5 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = uVar5 - extraout_x12;
  FUN_104177b80();
  lVar4 = *(long *)(param_4 + 0x10);
  lStack_70 = lVar7;
  uStack_68 = uVar2;
  if (lVar4 == 0) {
    _swift_release(param_4);
    _swift_release(param_3);
  }
  else {
    lVar7 = 0;
    uStack_80 = param_3;
    lStack_78 = lVar6;
    do {
      __ss15ContiguousArrayVyxSicig(lVar6,lVar7,param_4,param_5);
      (**(code **)(lVar3 + 0x20))(uVar5,lVar6,param_5);
      uVar1 = uVar5;
      FUN_104177bb8(uVar5,param_1,param_2,param_5,param_6);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        FUN_10417b6a8(0,param_5,param_6);
        FUN_104176354(uVar5,uVar2);
        lVar6 = lStack_78;
      }
      lVar7 = lVar7 + 1;
      (**(code **)(lVar3 + 8))(uVar5,param_5);
    } while (lVar4 != lVar7);
    _swift_release(param_4);
    _swift_release(uStack_80);
    lVar7 = lStack_70;
    uVar2 = uStack_68;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Entry: 104176b54; end: 104176c2b;  */

void FUN_104176b54(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __sSqMa(0,param_5);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffa0 + -extraout_x8;
  (*param_3)(puVar2,param_1);
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(puVar2,0,1,param_5);
    (**(code **)(lVar3 + 0x28))(param_2,puVar2,lVar1);
  }
  return;
}



/* Entry: 104176c2c; end: 104176c5b;  */

void FUN_104176c2c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 104176c5c; end: 104176fcf;  */

undefined1
FUN_104176c5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar6 = *(long *)(param_5 + -8);
  lVar5 = param_4;
  lVar7 = param_5;
  lStack_88 = param_2;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = 0;
  lStack_68 = lVar5;
  __ss15ContiguousArrayVMa(0,lVar7);
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  uVar3 = uVar1;
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    lStack_68 = lStack_88;
    __sSlsE7isEmptySbvg(uVar1,puVar2);
    if ((uVar1 & 1) == 0) {
      lVar7 = param_4;
      __ss15ContiguousArrayV5countSivg(param_4,param_5);
      lVar5 = lStack_88;
      lVar8 = lStack_88;
      __ss15ContiguousArrayV5countSivg(lStack_88,param_5);
      if (lVar7 <= lVar8) {
        lVar7 = 0;
        lVar10 = *(long *)(param_4 + 0x10);
        do {
          if (lVar10 == lVar7) {
            return 1;
          }
          __ss15ContiguousArrayVyxSicig(uVar11 - extraout_x12_01,lVar7,param_4,param_5);
          lVar7 = lVar7 + 1;
          (**(code **)(lVar6 + 0x20))(uVar11,uVar11 - extraout_x12_01,param_5);
          uVar3 = uVar11;
          FUN_104177bb8(uVar11,uStack_80,lVar5,param_5,uStack_70);
          (**(code **)(lVar6 + 8))(uVar11,param_5);
        } while ((uVar3 & 1) == 0);
        return 0;
      }
      lVar7 = 0;
      lVar8 = *(long *)(lVar5 + 0x10);
      do {
        if (lVar8 == lVar7) {
          return 1;
        }
        __ss15ContiguousArrayVyxSicig(lVar10,lVar7,lVar5,param_5);
        lVar7 = lVar7 + 1;
        (**(code **)(lVar6 + 0x20))(puVar9,lVar10,param_5);
        puVar4 = puVar9;
        FUN_104177bb8(puVar9,uStack_78,param_4,param_5,uStack_70);
        (**(code **)(lVar6 + 8))(puVar9,param_5);
      } while (((ulong)puVar4 & 1) == 0);
      return 0;
    }
  }
  return 1;
}



/* Entry: 104176fd0; end: 104176fef;  */

undefined1
FUN_104176fd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar3 = param_4;
  lVar5 = param_5;
  uStack_70 = param_3;
  uStack_68 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40),param_3,param_4,param_1);
  uVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  __ss15ContiguousArrayV5countSivg(lVar3,lVar5);
  lVar5 = param_2;
  __ss15ContiguousArrayV5countSivg(param_2,param_5);
  if (lVar5 <= lVar3) {
    lVar5 = 0;
    lVar3 = *(long *)(param_2 + 0x10);
    do {
      if (lVar3 == lVar5) {
        return 1;
      }
      __ss15ContiguousArrayVyxSicig(uVar4 - extraout_x12,lVar5,param_2,param_5);
      lVar5 = lVar5 + 1;
      (**(code **)(lVar2 + 0x20))(uVar4,uVar4 - extraout_x12,param_5);
      uVar1 = uVar4;
      FUN_104177bb8(uVar4,uStack_70,param_4,param_5,uStack_68);
      (**(code **)(lVar2 + 8))(uVar4,param_5);
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}



/* Entry: 104176ff0; end: 10417714b;  */

/* WARNING: Removing unreachable block (ram,0x000104177140) */

undefined1  [16]
FUN_104176ff0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  lVar2 = param_3;
  __ss15ContiguousArrayV5countSivg(param_3,param_4);
  if (lVar2 < 1) {
    FUN_104177b80(param_4,param_6);
    _swift_release(param_3);
    _swift_release(param_2);
  }
  else {
    lVar2 = param_3;
    __ss15ContiguousArrayV5countSivg(param_3,param_4);
    uStack_90 = param_4;
    uStack_88 = param_5;
    lStack_80 = param_6;
    uStack_78 = param_7;
    uStack_70 = param_2;
    lStack_68 = param_3;
    uStack_60 = param_1;
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417713c);
      (*pcVar1)();
    }
    uStack_b0 = 0;
    lStack_a8 = 0;
    uVar3 = 0;
    FUN_10417b6a8(0,param_4,param_6);
    puStack_c8 = &uStack_b0;
    puStack_b8 = auStack_a0;
    pcStack_c0 = FUN_104177498;
    uStack_d0 = uVar3;
    FUN_1041864a0(lVar2 + 0x3fU >> 6,0x1041774bc,auStack_e0);
    param_6 = lStack_a8;
    param_4 = uStack_b0;
    if (lStack_a8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104177140);
      (*pcVar1)();
    }
    _swift_retain(uStack_b0);
    _swift_retain(param_6);
    _swift_release(param_3);
    _swift_release(param_2);
    FUN_104176c2c(param_4,param_6);
  }
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10417714c; end: 104177497;  */

void FUN_10417714c(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long alStack_c0 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lStack_a8 = *(long *)(param_6 + -8);
  lVar2 = param_6;
  uStack_b0 = param_5;
  plStack_98 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  uVar11 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSqMa(0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = uVar11 - extraout_x8_00;
  lVar10 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = lVar5 - extraout_x8_02;
  lVar2 = param_4;
  __ss15ContiguousArrayV5countSivg(param_4,param_6);
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x104177498);
    (*pcVar9)();
  }
  FUN_104186564();
  lVar2 = param_4;
  __ss15ContiguousArrayV5countSivg(param_4,param_6);
  (**(code **)(lVar10 + 0x10))(lVar5,uStack_b0,param_7);
  __sST12makeIterator0B0QzyFTj(lVar8,param_7,param_9);
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar1,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
  __sSt4next7ElementQzSgyFTj(lVar7,lVar1,param_9);
  lVar5 = lStack_a8;
  pcVar9 = *(code **)(lStack_a8 + 0x30);
  lVar10 = lVar7;
  (*pcVar9)(lVar7,1,param_6);
  if ((int)lVar10 != 1) {
    pcVar6 = *(code **)(lVar5 + 0x20);
    do {
      (*pcVar6)(uVar11,lVar7,param_6);
      uVar3 = uVar11;
      uVar4 = param_3;
      func_0x00010417a89c(uVar11,param_3,param_4,param_6,param_8);
      if ((((((uint)uVar4 & 0xff) != 1) && (-1 < (long)uVar3)) &&
          (FUN_104186528(), (uVar3 & 1) != 0)) && (lVar2 = lVar2 + -1, lVar2 == 0)) {
        lVar7 = param_6;
        FUN_104177b80();
        (**(code **)(lVar5 + 8))(uVar11,param_6);
        (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
        goto LAB_104177390;
      }
      (**(code **)(lVar5 + 8))(uVar11,param_6);
      __sSt4next7ElementQzSgyFTj(lVar7,lVar1,param_9);
      lVar10 = lVar7;
      (*pcVar9)(lVar7,1,param_6);
    } while ((int)lVar10 != 1);
  }
  lVar5 = lVar8;
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  lVar7 = *param_2;
  lVar1 = param_2[1];
  func_0x00010417b834();
  _swift_retain(param_3);
  _swift_retain(param_4);
  *(long *)(lVar8 + -0x10) = param_8;
  FUN_10417ae14(lVar7,lVar1,lVar2,0,lVar5,param_3,param_4,param_6);
  param_8 = lVar1;
LAB_104177390:
  *plStack_98 = lVar7;
  plStack_98[1] = param_8;
  return;
}



/* Entry: 104177498; end: 1041774d7;  */

void FUN_104177498(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10417714c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 1041774d8; end: 1041775f7;  */

/* WARNING: Removing unreachable block (ram,0x0001041775ec) */

undefined1  [16]
FUN_1041774d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = param_4;
  __ss15ContiguousArrayV5countSivg(param_4,param_5);
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  lStack_58 = param_4;
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041775e8);
    (*pcVar1)();
  }
  uStack_a0 = 0;
  lStack_98 = 0;
  uVar3 = 0;
  FUN_10417b6a8(0,param_5,param_6);
  puStack_b8 = &uStack_a0;
  puStack_a8 = auStack_90;
  pcStack_b0 = FUN_1041776f0;
  uStack_c0 = uVar3;
  FUN_1041864a0(lVar2 + 0x3fU >> 6,FUN_104177aa0,auStack_d0);
  lVar2 = lStack_98;
  uVar3 = uStack_a0;
  if (lStack_98 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041775ec);
    (*pcVar1)();
  }
  _swift_retain(uStack_a0);
  _swift_retain(lVar2);
  _swift_release(param_2);
  _swift_release(param_4);
  _swift_release(param_3);
  _swift_release(param_1);
  FUN_104177abc(uVar3,lVar2);
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1041775f8; end: 1041776ef;  */

void FUN_1041775f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar2 = param_4;
  __ss15ContiguousArrayV5countSivg(param_4,param_7);
  uStack_a0 = param_7;
  uStack_98 = param_8;
  uStack_90 = param_2;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_3;
  lStack_70 = param_4;
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041776e0);
    (*pcVar1)();
  }
  uStack_c0 = 0;
  lStack_b8 = 0;
  uVar3 = 0;
  FUN_10417b6a8(0,param_7,param_8);
  puStack_d8 = &uStack_c0;
  puStack_c8 = auStack_b0;
  pcStack_d0 = FUN_104177aec;
  uStack_e0 = uVar3;
  FUN_1041864a0(lVar2 + 0x3fU >> 6,0x104177b10,auStack_f0);
  if (unaff_x21 == 0) {
    if (lStack_b8 != 0) {
      *param_1 = uStack_c0;
      param_1[1] = lStack_b8;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1041776e4);
    (*pcVar1)();
  }
  FUN_104177abc(uStack_c0,lStack_b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041776f0);
  (*pcVar1)();
}



/* Entry: 1041776f0; end: 10417770f;  */

void FUN_1041776f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1041775f8(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104177710; end: 104177a9f;  */

void FUN_104177710(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  
  lVar11 = *(long *)(param_8 + -8);
  lVar12 = param_5;
  lVar15 = param_8;
  puStack_c0 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puStack_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar8 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12_02;
  __ss15ContiguousArrayV5countSivg(lVar12,lVar15);
  if (lVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104177a9c);
    (*pcVar2)();
  }
  FUN_104186564();
  lVar12 = *(long *)(param_7 + 0x10);
  if (lVar12 != 0) {
    lVar15 = 0;
    do {
      __ss15ContiguousArrayVyxSicig(lVar14,lVar15,param_7,param_8);
      (**(code **)(lVar11 + 0x20))(lVar13,lVar14,param_8);
      lVar4 = lVar13;
      uVar5 = param_4;
      func_0x00010417a89c(lVar13,param_4,param_5,param_8,param_9);
      if ((((uint)uVar5 & 0xff) != 1) && (-1 < lVar4)) {
        FUN_104186528();
      }
      lVar15 = lVar15 + 1;
      (**(code **)(lVar11 + 8))(lVar13,param_8);
    } while (lVar12 != lVar15);
  }
  lVar12 = param_7;
  __ss15ContiguousArrayV5countSivg(param_7,param_8);
  if (lVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104177aa0);
    (*pcVar2)();
  }
  FUN_104186564();
  lVar12 = *(long *)(param_5 + 0x10);
  if (lVar12 != 0) {
    lVar15 = 0;
    do {
      __ss15ContiguousArrayVyxSicig(lVar8,lVar15,param_5,param_8);
      (**(code **)(lVar11 + 0x20))(lVar10,lVar8,param_8);
      lVar13 = lVar10;
      uVar5 = param_6;
      func_0x00010417a89c(lVar10,param_6,param_7,param_8,param_9);
      if ((((uint)uVar5 & 0xff) != 1) && (-1 < lVar13)) {
        FUN_104186528();
      }
      lVar15 = lVar15 + 1;
      (**(code **)(lVar11 + 8))(lVar10,param_8);
    } while (lVar12 != lVar15);
  }
  uVar5 = *param_3;
  uVar7 = param_3[1];
  lVar12 = 0;
  if (((undefined8 *)*param_2 != (undefined8 *)0x0) && (param_2[1] != 0)) {
    lVar15 = param_2[1] << 3;
    puVar9 = (undefined8 *)*param_2;
    do {
      uVar16 = *puVar9;
      uVar17 = (ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)((ulong)uVar16 >> 8)) +
                             POPCOUNT((char)((ulong)uVar16 >> 0x10)) +
                             POPCOUNT((char)((ulong)uVar16 >> 0x18)) +
                             POPCOUNT((char)((ulong)uVar16 >> 0x20)) +
                             POPCOUNT((char)((ulong)uVar16 >> 0x28)) +
                             POPCOUNT((char)((ulong)uVar16 >> 0x30)) +
                            POPCOUNT((char)((ulong)uVar16 >> 0x38)));
      bVar3 = SCARRY8(lVar12,uVar17);
      lVar12 = lVar12 + uVar17;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104177a98);
        (*pcVar2)();
      }
      lVar15 = lVar15 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar15 != 0);
  }
  _swift_retain(param_4);
  _swift_retain(param_5);
  *(undefined8 *)(lVar14 + -0x10) = param_9;
  FUN_10417ae14(uVar5,uVar7,0,1,lVar12,param_4,param_5,param_8);
  *puStack_c0 = uVar5;
  puStack_c0[1] = uVar7;
  FUN_1041865c4();
  puVar1 = puStack_c8;
  uVar6 = (uint)uVar7;
  while ((uVar6 & 0xff) != 1) {
    __ss15ContiguousArrayVyxSicig(puVar1);
    uVar5 = 0;
    FUN_10417b6a8(0,param_8,param_9);
    FUN_104176354(puVar1,uVar5);
    lVar12 = param_8;
    (**(code **)(lVar11 + 8))(puVar1);
    uVar6 = (uint)lVar12;
    FUN_1041865c4();
  }
  return;
}



/* Entry: 104177aa0; end: 104177abb;  */

void FUN_104177aa0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104176b54(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104177abc; end: 104177aeb;  */

void FUN_104177abc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _swift_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 104177aec; end: 104177b23;  */

void FUN_104177aec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104177710(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 104177b24; end: 104177b7f;  */

undefined1  [16]
FUN_104177b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_10417b6a8(0,param_5,param_6);
  FUN_104176954(param_1,param_2,uVar2);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 104177b80; end: 104177bb7;  */

undefined1  [16] FUN_104177b80(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  uVar2 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,param_1);
  __ss15ContiguousArrayV12arrayLiteralAByxGxd_tcfC();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}



/* Entry: 104177bb8; end: 104177cbb;  */

bool FUN_104177bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char cStack_40;
  
  uVar1 = 0x113065c60;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_1;
  func_0x0001000285a8(0x113065c60,&UNK_10dcdaf20);
  func_0x000102107f98(auStack_48,FUN_104177cbc,auStack_80,param_3,param_4,uVar1,
                      PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return cStack_40 != '\x01';
}



/* Entry: 104177cbc; end: 104177cdf;  */

void FUN_104177cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10417b180(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Entry: 104177ce0; end: 104177d2f;  */

undefined8
FUN_104177ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_retain(param_3);
  _swift_retain(param_4);
  return param_3;
}



/* Entry: 104177d30; end: 104177d4f;  */

bool FUN_104177d30(undefined8 param_1,uint param_2)

{
  func_0x00010417a89c();
  return (param_2 & 0xff) != 1;
}



/* Entry: 104177d50; end: 104177e2b;  */

undefined8
FUN_104177d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  
  uVar1 = 0;
  auStack_90[0] = param_4;
  __ss15ContiguousArrayVMa(0,param_5);
  puVar2 = PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSlsMc_11034e6d0,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uStack_80 = param_5;
    uStack_78 = param_6;
    uStack_70 = param_1;
    uStack_68 = param_2;
    func_0x000102107f98(auStack_58,FUN_1041783a0,auStack_90,param_4,param_5,PTR___sSiN_11034deb0,
                        PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  }
  return param_3;
}



/* Entry: 104177e2c; end: 104177e4b;  */

void FUN_104177e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  __ss15ContiguousArrayV04withA18StorageIfAvailableyqd__Sgqd__SRyxGKXEKlF
            (param_1,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 104177e4c; end: 104177e5b;  */

void FUN_104177e4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}



/* Entry: 104177e5c; end: 104177e8f;  */

void FUN_104177e5c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcda8f8;
  _swift_getWitnessTable(&UNK_10dcda8f8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 104177e90; end: 104177e9f;  */

bool FUN_104177e90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x00010417a89c(param_1,uVar1,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                      *(undefined8 *)(param_2 + 0x18));
  return ((uint)uVar1 & 0xff) != 1;
}



/* Entry: 104177ea0; end: 104177eeb;  */

undefined8 FUN_104177ea0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_104178378(uVar1,uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  return uVar3;
}



/* Entry: 104177eec; end: 104177f2f;  */

undefined8 FUN_104177eec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_104177d50();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return uVar2;
}



/* Entry: 104177f30; end: 104177f53;  */

void FUN_104177f30(void)

{
  FUN_104177e2c();
  return;
}



/* Entry: 104177f54; end: 104177ff7;  */

undefined1  [16]
FUN_104177f54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_50;
  byte bStack_48;
  byte bStack_47;
  
  if (param_2 == 0) {
    uStack_50 = 0;
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    _swift_retain(param_2);
    FUN_104177ff8(&uStack_50,param_2 + 0x10,param_2 + 0x20,param_1,param_2,param_3,param_4,param_5);
    uVar1 = (uint)bStack_48;
    uVar2 = (uint)bStack_47;
    _swift_release(param_2);
  }
  auVar3._8_4_ = uVar1 | uVar2 << 8;
  auVar3._0_8_ = uStack_50;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Entry: 104177ff8; end: 104178093;  */

void FUN_104177ff8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  
  uVar1 = 0;
  uStack_48 = param_6;
  __ss15ContiguousArrayVMa(0,param_7);
  puVar2 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar1);
  puVar3 = &uStack_48;
  FUN_10416e5dc(param_4,puVar3,param_2,param_3,uVar1,puVar2,param_8);
  *param_1 = param_4;
  *(char *)(param_1 + 1) = (char)puVar3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 104178094; end: 1041780db;  */

void FUN_104178094(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1041780ac);
  (*pcVar1)();
}



/* Entry: 1041780dc; end: 10417815f;  */

undefined1  [16] FUN_1041780dc(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  *param_1 = lVar2;
  param_1[1] = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar1,0xc62);
  }
  param_1[2] = lVar1;
  __ss15ContiguousArrayVyxSicig(lVar1,*param_2,*(undefined8 *)(unaff_x20 + 8),lVar2);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_104178160;
  return auVar3;
}


