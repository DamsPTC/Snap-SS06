/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ad05b0; end: 103ad065b;  */

void FUN_103ad05b0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ad065c; end: 103ad069b;  */

void FUN_103ad065c(undefined1 *param_1,long *param_2)

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



/* Entry: 103ad069c; end: 103ad06e3; -[SCExternalMusicOffscreenPlaybackState init] */

void FUN_103ad069c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ExternalMusicOffscreenPlaybackEventServices/ExternalMusicOffscreenPlaybackEventModelsWrapper.swift"
                      ,0x62,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad06e4);
  (*pcVar1)();
}



/* Entry: 103ad06e4; end: 103ad06eb; +[SCExternalMusicOffscreenPlaybackState playing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad06e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe8518) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad06ec; end: 103ad06f3; +[SCExternalMusicOffscreenPlaybackState stopped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad06ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe8518) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad06f4; end: 103ad0743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad06f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fe8518) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad0744; end: 103ad075f; -[SCExternalMusicOffscreenPlaybackState matchPlaying:stopped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0744(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_112fe8518) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000103ad075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 103ad0760; end: 103ad076b; -[SCExternalMusicOffscreenPlaybackEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0760(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fe8520);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fe8520))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ad076c; end: 103ad077b; -[SCExternalMusicOffscreenPlaybackEvent trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ad076c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe8528);
}



/* Entry: 103ad077c; end: 103ad078b; -[SCExternalMusicOffscreenPlaybackEvent playerOffsetMS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ad077c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe8530);
}



/* Entry: 103ad078c; end: 103ad079b; -[SCExternalMusicOffscreenPlaybackEvent state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad078c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe8538));
  return;
}



/* Entry: 103ad079c; end: 103ad0837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad079c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe8520);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8528) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8530) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8538) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad0838; end: 103ad08e7; -[SCExternalMusicOffscreenPlaybackEvent initWithLensId:trackId:playerOffsetMS:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0838(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_2;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_2 + _DAT_112fe8520);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_112fe8528) = param_5;
  *(undefined8 *)(param_2 + _DAT_112fe8530) = param_1;
  *(undefined8 *)(param_2 + _DAT_112fe8538) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 103ad08e8; end: 103ad0917;  */

void FUN_103ad08e8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103ad0918(param_1);
  return;
}



/* Entry: 103ad0918; end: 103ad09df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0918(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long alStack_60 [2];
  long alStack_40 [2];
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar6 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fe8520);
  puVar2[1] = param_1[1];
  *puVar2 = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8528) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fe8530) = param_1[3];
  cVar1 = *(char *)(param_1 + 4);
  FUN_103ad09e0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  plVar5 = alStack_40;
  if (cVar1 != '\x01') {
    plVar5 = alStack_60;
  }
  *(bool *)(lVar4 + _DAT_112fe8518) = cVar1 == '\x01';
  *plVar5 = lVar4;
  plVar5[1] = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112fe8538) = plVar5;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad09e0; end: 103ad09ff;  */

void FUN_103ad09e0(void)

{
  func_0x000107c61168(&PTR_PTR_112924e50);
  return;
}



/* Entry: 103ad0a00; end: 103ad0ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0a00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe8520);
  uVar2 = ((undefined8 *)(param_2 + _DAT_112fe8520))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_112fe8528);
  uVar6 = *(undefined8 *)(param_2 + _DAT_112fe8530);
  lVar4 = *(long *)(param_2 + _DAT_112fe8538);
  func_0x000107c61434(uVar2);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  cVar3 = *(char *)(lVar4 + _DAT_112fe8518);
  func_0x000107c61170(lVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(bool *)(param_1 + 4) = cVar3 == '\x01';
  return;
}



/* Entry: 103ad0ab4; end: 103ad0afb; -[SCExternalMusicOffscreenPlaybackEvent init] */

void FUN_103ad0ab4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ExternalMusicOffscreenPlaybackEventServices/ExternalMusicOffscreenPlaybackEventModelsWrapper.swift"
                      ,0x62,2,0x80,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad0afc);
  (*pcVar1)();
}



/* Entry: 103ad0afc; end: 103ad0b37; -[SCExternalMusicOffscreenPlaybackEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0afc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe8520 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe8538));
  return;
}



/* Entry: 103ad0b38; end: 103ad0b43; -[SCExternalMusicOffscreenPreparationEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0b38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fe8540);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fe8540))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ad0b44; end: 103ad0b8b;  */

void FUN_103ad0b44(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ad0b8c; end: 103ad0b9b; -[SCExternalMusicOffscreenPreparationEvent trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ad0b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fe8548);
}



/* Entry: 103ad0b9c; end: 103ad0bab; -[SCExternalMusicOffscreenPreparationEvent preparationPromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe8550));
  return;
}



/* Entry: 103ad0bac; end: 103ad0bbb; -[SCExternalMusicOffscreenPreparationEvent taskAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe8558));
  return;
}



/* Entry: 103ad0bbc; end: 103ad0c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe8540);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8548) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8550) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8558) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad0c50; end: 103ad0cff; -[SCExternalMusicOffscreenPreparationEvent initWithLensId:trackId:preparationPromise:taskAttribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe8540);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fe8548) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fe8550) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fe8558) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 103ad0d00; end: 103ad0d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0d00(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  uVar2 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe8540);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112fe8548) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112fe8550) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe8558) = param_1[4];
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad0d7c; end: 103ad0dc3; -[SCExternalMusicOffscreenPreparationEvent init] */

void FUN_103ad0d7c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ExternalMusicOffscreenPlaybackEventServices/ExternalMusicOffscreenPlaybackEventModelsWrapper.swift"
                      ,0x62,2,0xb9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad0dc4);
  (*pcVar1)();
}



/* Entry: 103ad0dc4; end: 103ad0dc7;  */

void FUN_103ad0dc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ad0dc8; end: 103ad0dfb;  */

void FUN_103ad0dc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ad0dfc; end: 103ad0e47; -[SCExternalMusicOffscreenPreparationEvent .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103ad0e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ad0e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad0dfc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe8540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe8550));
  return;
}



/* Entry: 103ad0e48; end: 103ad0e87;  */

void FUN_103ad0e48(void)

{
  func_0x000107c61168(&PTR_PTR_112924f10);
  return;
}



/* Entry: 103ad0e88; end: 103ad0fef;  */

int FUN_103ad0e88(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ad0f04;
        goto LAB_103ad0ee8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ad0ee8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ad0f04:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ad0ff0; end: 103ad102f;  */

void FUN_103ad0ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe85d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4fa0c;
  func_0x000107c61520(&UNK_10dc4fa0c,&UNK_1106ccac8);
  puRam0000000112fe85d8 = puVar1;
  return;
}



/* Entry: 103ad1030; end: 103ad1033; -[SCExternalMusicOffscreenPlaybackEvent description] */

void FUN_103ad1030(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad1034; end: 103ad1037; -[SCExternalMusicOffscreenPlaybackState description] */

void FUN_103ad1034(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad1038; end: 103ad103b; -[SCExternalMusicOffscreenPreparationEvent description] */

void FUN_103ad1038(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ad103c; end: 103ad103f; -[SCExternalMusicOffscreenPlaybackEvent copyWithZone:] */

void FUN_103ad103c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ad1040; end: 103ad1043; -[SCExternalMusicOffscreenPlaybackState copyWithZone:] */

void FUN_103ad1040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ad1044; end: 103ad107f; -[SCExternalMusicOffscreenPreparationEvent copyWithZone:] */

void FUN_103ad1044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ad1080; end: 103ad10b3;  */

void FUN_103ad1080(undefined8 param_1)

{
  FUN_103ad12c4();
  func_0x000107c613fc();
  uRam000000011380cd28 = param_1;
  ppuRam000000011380cd30 = &PTR_DAT_1106ccd78;
  return;
}



/* Entry: 103ad10b4; end: 103ad1157; +[SCSnapEditorParityCaptureStore isCaptureEnabled] */

uint FUN_103ad10b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  if (lRam0000000113584d90 != -1) {
    func_0x000107c61568(0x113584d90,FUN_103ad1080);
  }
  func_0x000107c61428(0x11380cd28,auStack_48,0,0);
  lVar2 = lRam000000011380cd30;
  uVar1 = uRam000000011380cd28;
  uVar3 = uRam000000011380cd28;
  func_0x000107c614f0(uRam000000011380cd28);
  pcVar4 = *(code **)(lVar2 + 8);
  func_0x000107c615f0(uVar1);
  (*pcVar4)(uVar3,lVar2);
  func_0x000107c615e8(uVar1);
  return (uint)uVar3 & 1;
}



/* Entry: 103ad1158; end: 103ad121f; +[SCSnapEditorParityCaptureStore recordExportEditor:destination:] */

void FUN_103ad1158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = lRam0000000113584d90;
  func_0x000107c615f0(param_3);
  if (lVar1 != -1) {
    func_0x000107c61568(0x113584d90,FUN_103ad1080);
  }
  func_0x000107c61428(0x11380cd28,auStack_58,0,0);
  lVar1 = lRam000000011380cd30;
  uVar2 = uRam000000011380cd28;
  uVar3 = uRam000000011380cd28;
  func_0x000107c614f0(uRam000000011380cd28);
  pcVar4 = *(code **)(lVar1 + 0x28);
  func_0x000107c615f0(uVar2);
  (*pcVar4)(param_3,param_4,uVar3,lVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(param_3);
  return;
}



/* Entry: 103ad1220; end: 103ad125b; -[SCSnapEditorParityCaptureStore init] */

void FUN_103ad1220(undefined8 param_1)

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



/* Entry: 103ad125c; end: 103ad128f;  */

void FUN_103ad125c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ad1290; end: 103ad1293; -[SCSnapEditorParityCaptureStore .cxx_destruct] */

void FUN_103ad1290(void)

{
  return;
}



/* Entry: 103ad1294; end: 103ad12b3;  */

void FUN_103ad1294(void)

{
  func_0x000107c61168(&PTR_PTR_1129250d0);
  return;
}



/* Entry: 103ad12b4; end: 103ad12c3;  */

void FUN_103ad12b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ad12c4; end: 103ad12e3;  */

void FUN_103ad12c4(void)

{
  func_0x000107c61168(&PTR_PTR_112fe8660);
  return;
}



/* Entry: 103ad12e4; end: 103ad131b;  */

undefined8 FUN_103ad12e4(void)

{
  return 0;
}



/* Entry: 103ad131c; end: 103ad1367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad131c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe86c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ad1368; end: 103ad1397;  */

void FUN_103ad1368(void)

{
  func_0x0001002b8198();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ad1398; end: 103ad13cb; -[_TtC38SCLensProcessingSnapRendererScopeProxy41SCLensProcessingSnapRendererScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad1398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe86c0));
  return;
}



/* Entry: 103ad13cc; end: 103ad1477;  */

void FUN_103ad13cc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ad1478; end: 103ad1487;  */

void FUN_103ad1478(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103ad1488; end: 103ad14cf;  */

void FUN_103ad1488(void)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000107c60a44(&uStack_28,0xc024000000000000,0x3c);
  uRam0000000112fe8958 = uStack_28;
  uRam0000000112fe8960 = uStack_20;
  uRam0000000112fe8968 = uStack_18;
  return;
}



/* Entry: 103ad14d0; end: 103ad1a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103ad14d0(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,byte param_5,
             byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 auStack_c8 [2];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0();
  if (param_2 >> 0x3c < 0xf) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(param_1,param_2);
    uVar11 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    puStack_b8 = (undefined *)0x0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    puVar2 = puStack_b8;
    func_0x000107c61174(puStack_b8);
    if (puVar1 != (undefined *)0x0) {
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c60234(auStack_88,puVar1);
      func_0x000107c615e8(puVar1);
      func_0x0001000bb420(auStack_88,&puStack_b8);
      uVar11 = 0x112da99a0;
      func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
      puVar3 = auStack_c8;
      func_0x000107c6147c(puVar3,&puStack_b8,PTR___sypN_11034f1a8 + 8,uVar11,6);
      if (((ulong)puVar3 & 1) == 0) {
        func_0x000100183ab8(auStack_88);
        func_0x0001000b44c0(param_1,param_2);
        goto LAB_103ad18d8;
      }
      *(undefined8 *)(unaff_x20 + _DAT_112fe8708) = auStack_c8[0];
      func_0x000103ad3e84();
      func_0x000107c613fc();
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar1 = PTR_PTR_1126a8530;
      func_0x000107c610f8();
      func_0x000107c61438(auStack_c8[0],2);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c453e4();
      puVar3[7] = puVar1;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[9] = 0;
      *(undefined1 *)(puVar3 + 0xc) = 1;
      puVar3[0xe] = 0xf000000000000000;
      puVar3[0xd] = 0;
      puVar3[0x10] = 0;
      puVar3[0xf] = 0;
      puVar3[0x12] = 0;
      puVar3[0x11] = 0;
      puVar3[0x14] = 0;
      puVar3[0x13] = 0;
      puVar3[0x16] = 0;
      puVar3[0x15] = 0;
      puVar3[0x17] = 0;
      *(undefined1 *)(puVar3 + 0x18) = 1;
      *(undefined1 *)(puVar3 + 0x1a) = 0;
      puVar1 = PTR_PTR_1126ae560;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar3[0x1c] = puVar1;
      puVar3[2] = param_3;
      puVar3[3] = param_4;
      *(byte *)(puVar3 + 4) = param_5 & 1;
      *(byte *)((long)puVar3 + 0x21) = param_6 & 1;
      puVar3[0x19] = 2;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c43bf4();
      func_0x000107c61180();
      puVar3[0x1b] = puVar1;
      puVar1 = &UNK_1106cd0d8;
      func_0x000107c613fc(&UNK_1106cd0d8,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,puVar3);
      puVar2 = &UNK_1106cd100;
      func_0x000107c613fc(&UNK_1106cd100,0x21,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = auStack_c8[0];
      puVar2[0x20] = param_6 & 1;
      func_0x000107c6157c(puVar3);
      lVar4 = param_3;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
LAB_103ad1938:
        puVar8 = puVar3;
        func_0x000107c61574();
        uVar11 = puVar3[0x1c];
        FUN_103ad4fd4();
        puVar1 = &UNK_1106cd040;
        func_0x000107c613f8(&UNK_1106cd040,puVar8,0,0);
        *(undefined1 *)puVar8 = 1;
        func_0x000107c61174(uVar11);
        puVar9 = puVar1;
        func_0x000107c5ed2c(puVar1);
        puVar10 = puVar9;
        func_0x000107c5ed2c();
        func_0x000107c61170(puVar9);
        func_0x000107c614ac(puVar1);
        func_0x000107c3fef8(uVar11);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61574(puVar2);
      }
      else {
        lVar5 = lVar4;
        func_0x000107c509b4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar4);
        if (lVar5 == 0) goto LAB_103ad1938;
        puVar1 = &UNK_1106cd0d8;
        func_0x000107c613fc(&UNK_1106cd0d8,0x18,7);
        func_0x000107c61644(puVar1 + 0x10,puVar3);
        func_0x000107c61574(puVar3);
        puVar9 = &UNK_1106cd128;
        func_0x000107c613fc(&UNK_1106cd128,0x28,7);
        *(undefined **)(puVar9 + 0x10) = puVar1;
        *(code **)(puVar9 + 0x18) = FUN_103ad5f2c;
        *(undefined **)(puVar9 + 0x20) = puVar2;
        uStack_98 = 0x103ad5f38;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100f1c768;
        puStack_a0 = &UNK_1106cd140;
        ppuVar6 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar6);
        puVar1 = puStack_90;
        func_0x000107c6157c(puVar2);
        func_0x000107c61574(puVar1);
        func_0x000107c440d8(lVar5);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61574(puVar2);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar5);
      }
      *(undefined8 **)(unaff_x20 + _DAT_112fe8710) = puVar3;
      puVar7 = &stack0xffffffffffffff28;
      func_0x000107c61154(puVar7,PTR_s_init_1125d9248);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c6142c(auStack_c8[0]);
      func_0x000100183ab8(auStack_88);
      goto LAB_103ad1900;
    }
    puVar1 = puVar2;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar2);
    func_0x000107c61654();
    func_0x0001000b44c0(param_1,param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x0001000b44c0(param_1,param_2);
    func_0x000107c614ac(puVar1);
  }
  else {
LAB_103ad18d8:
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  func_0x000107c61464();
  puVar7 = (undefined1 *)0x0;
LAB_103ad1900:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  func_0x000107c60e78(puVar7);
  return (undefined1 *)0x1;
}



/* Entry: 103ad1a38; end: 103ad1a3f; -[SCSnapRendererRepostOverlayPlugin supportsYUVInput] */

undefined8 FUN_103ad1a38(void)

{
  return 1;
}



/* Entry: 103ad1a40; end: 103ad1a47; -[SCSnapRendererRepostOverlayPlugin textureType] */

undefined8 FUN_103ad1a40(void)

{
  return 0;
}



/* Entry: 103ad1a48; end: 103ad1a5b; -[SCSnapRendererRepostOverlayPlugin prepareResourcesWithInputCount:snapInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad1a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(*(long *)(param_1 + _DAT_112fe8710) + 0xd8));
  return;
}



/* Entry: 103ad1a5c; end: 103ad1a63; -[SCSnapRendererRepostOverlayPlugin isWarmingUpWithVideoInputsRequired] */

undefined8 FUN_103ad1a5c(void)

{
  return 0;
}



/* Entry: 103ad1a64; end: 103ad1ac7; -[SCSnapRendererRepostOverlayPlugin warmupWithVideoInputs:] */

void FUN_103ad1a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103ad1ac8; end: 103ad1d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103ad1ac8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  long unaff_x21;
  undefined8 uVar7;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad1ce4);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      FUN_103ad46dc(0,param_1,&PTR_PTR_1126d3380,0x112fe8948);
    }
    func_0x000107c61174();
    uVar7 = uVar2;
    func_0x000107c515d4();
    func_0x000107c61180();
    uVar3 = uVar7;
    func_0x000107c515d4();
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    uVar7 = uVar3;
    func_0x000107c60a1c(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112fe8710);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      uVar4 = param_2;
      if (-1 < (long)param_2) {
        uVar4 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      uVar2 = 0;
    }
    else if ((param_2 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad1d04);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x000107c615f0(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x000101a220cc(0,param_2);
    }
  }
  FUN_103ad1d04(uVar7,uVar2,param_3,param_4,param_5,param_6);
  func_0x000107c615e8(uVar2);
  if (unaff_x21 == 0) {
    puVar6 = PTR_PTR_1126d3388;
    func_0x000107c610f8(PTR_PTR_1126d3388);
    func_0x000107c4845c();
  }
  func_0x000107c61170(uVar7);
  return puVar6;
}



/* Entry: 103ad1d04; end: 103ad27ef;  */

/* WARNING: Removing unreachable block (ram,0x000103ad28d8) */
/* WARNING: Removing unreachable block (ram,0x000103ad290c) */
/* WARNING: Removing unreachable block (ram,0x000103ad28dc) */
/* WARNING: Removing unreachable block (ram,0x000103ad237c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad1d04(double param_1,undefined1 **param_2,undefined1 **param_3,undefined1 **param_4,
                  undefined1 *param_5,undefined1 **param_6,undefined1 **param_7)

{
  byte bVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 **ppuVar15;
  undefined1 **ppuVar16;
  undefined1 **ppuVar17;
  undefined1 **ppuVar18;
  undefined1 **ppuVar19;
  undefined1 **ppuVar20;
  undefined1 uVar21;
  double dVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long unaff_x20;
  undefined1 **ppuVar26;
  long unaff_x21;
  ulong uVar27;
  undefined1 *puVar28;
  undefined1 **ppuVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  ppuVar29 = (undefined1 **)(ulong)bVar1;
  if (((bVar1 & 1) == 0) && (*(char *)(unaff_x20 + 0x21) == '\x01')) {
    FUN_103ad4fd4();
    ppuVar26 = (undefined1 **)&UNK_1106cd040;
    ppuVar15 = (undefined1 **)0x0;
    ppuVar17 = (undefined1 **)0x0;
    func_0x000107c613f8(&UNK_1106cd040,param_2,0);
    *(undefined1 *)param_2 = 0xe;
    func_0x000107c61654();
    ppuVar19 = param_6;
    ppuVar20 = param_7;
    goto LAB_103ad1fa8;
  }
  uStack_78 = SUB84(param_6,0);
  uStack_74 = (undefined4)((ulong)param_6 >> 0x20);
  ppuVar3 = &puStack_80;
  ppuVar18 = param_3;
  ppuVar19 = param_6;
  ppuVar20 = param_7;
  puStack_80 = param_5;
  ppuStack_70 = param_7;
  func_0x000107c60a3c();
  if (param_3 == (undefined1 **)0x0) {
LAB_103ad1ddc:
    ppuVar4 = param_2;
    if (param_2 != (undefined1 **)0x0) goto LAB_103ad1de4;
    ppuVar26 = (undefined1 **)0x0;
LAB_103ad1f70:
    FUN_103ad4fd4();
    ppuVar15 = (undefined1 **)0x0;
    ppuVar17 = (undefined1 **)0x0;
    func_0x000107c613f8(&UNK_1106cd040,ppuVar3,0);
    *(undefined1 *)ppuVar3 = 8;
    func_0x000107c61654();
  }
  else {
    ppuVar3 = param_3;
    func_0x000107c615f0();
    func_0x000107c4f9b4();
    func_0x000107c61104(param_3);
    ppuVar4 = ppuVar3;
    if (ppuVar3 == (undefined1 **)0x0) goto LAB_103ad1ddc;
LAB_103ad1de4:
    func_0x000107c61174();
    func_0x000107c61174();
    if (param_4 == (undefined1 **)0x0) {
      ppuVar3 = ppuVar4;
      func_0x000107c61170();
      ppuVar26 = ppuVar4;
      goto LAB_103ad1f70;
    }
    func_0x000107c615f0(param_4);
    ppuVar3 = ppuVar4;
    FUN_103ad4898();
    uVar13 = (uint)ppuVar18;
    if ((param_3 == (undefined1 **)0x0) && ((uVar13 & 0xff) == 1)) {
      FUN_103ad4fd4();
      ppuVar15 = (undefined1 **)0x0;
      ppuVar17 = (undefined1 **)0x0;
      func_0x000107c613f8(&UNK_1106cd040,ppuVar3,0);
      uVar21 = 5;
      ppuVar5 = ppuVar3;
LAB_103ad1e3c:
      *(undefined1 *)ppuVar5 = uVar21;
      func_0x000107c61654();
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(ppuVar4);
LAB_103ad1e5c:
      func_0x000107c615e8(param_4);
      ppuVar26 = param_4;
      goto LAB_103ad1fa8;
    }
    ppuVar16 = param_4;
    func_0x000107c4e7a4();
    if (((*(long *)(unaff_x20 + 0x48) != 0) || (*(long *)(unaff_x20 + 0x50) != 0)) ||
       (param_2 == (undefined1 **)0x0)) goto LAB_103ad1e94;
    lVar24 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_11302ed98);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar24 == 0) {
LAB_103ad2668:
      func_0x000107c61170(param_2);
    }
    else {
      lVar8 = lVar24;
      func_0x000107c42cfc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar24);
      if (lVar8 == 0) goto LAB_103ad2668;
      if ((*(byte *)(unaff_x20 + 0x21) & 1) == 0) {
        lVar24 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        uVar14 = 0x40;
        func_0x000107c613fc();
        *(undefined8 *)(lVar24 + 0x18) = 4;
        *(undefined8 *)(lVar24 + 0x10) = 2;
        uVar31 = *(undefined8 *)(lVar8 + _DAT_11302ed60);
        func_0x000107c61174();
        uVar12 = uVar31;
        FUN_103ad4bc0();
        uVar30 = uVar14;
        func_0x000107c61170(uVar31);
        *(undefined8 *)(lVar24 + 0x20) = uVar12;
        *(undefined8 *)(lVar24 + 0x28) = uVar14;
        uVar31 = *(undefined8 *)(lVar8 + _DAT_11302ed68);
        func_0x000107c61174();
        uVar12 = uVar31;
        FUN_103ad4bc0();
        func_0x000107c61170(uVar31);
        *(undefined8 *)(lVar24 + 0x30) = uVar12;
        *(undefined8 *)(lVar24 + 0x38) = uVar30;
        uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
        *(long *)(unaff_x20 + 0x48) = lVar24;
        func_0x000107c6157c(lVar24);
        func_0x000107c6142c(uVar12);
        lVar10 = *(long *)(unaff_x20 + 0x28);
        if (lVar10 == 0) {
          func_0x000107c61574(lVar24);
          func_0x000107c61170(lVar8);
          goto LAB_103ad2668;
        }
        func_0x000107c54f18();
        func_0x000107c61180();
        lVar11 = lVar24;
        func_0x000107c5fc48(lVar24,PTR___sSSN_11034da80);
        (**(code **)(lVar10 + 0x10))(lVar10,lVar11);
        func_0x000107c61574(lVar24);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(param_2);
        func_0x000107c60bd0(lVar10);
      }
      else {
        lVar24 = 0x112dc5808;
        func_0x0001000285a8(0x112dc5808,&UNK_10d9853b0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar24 + 0x18) = 4;
        *(undefined8 *)(lVar24 + 0x10) = 2;
        uVar30 = *(undefined8 *)(lVar8 + _DAT_11302ed60);
        func_0x000107c61174();
        uVar12 = uVar30;
        FUN_103ad4a0c();
        func_0x000107c61170(uVar30);
        *(int *)(lVar24 + 0x20) = (int)uVar12;
        uVar30 = *(undefined8 *)(lVar8 + _DAT_11302ed68);
        func_0x000107c61174();
        uVar12 = uVar30;
        FUN_103ad4a0c();
        func_0x000107c61170(lVar8);
        func_0x000107c61170(uVar30);
        func_0x000107c61170(param_2);
        *(int *)(lVar24 + 0x24) = (int)uVar12;
        uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
        *(long *)(unaff_x20 + 0x50) = lVar24;
        func_0x000107c6142c(uVar12);
      }
    }
LAB_103ad1e94:
    ppuVar5 = *(undefined1 ***)(unaff_x20 + 0x30);
    if (ppuVar5 == (undefined1 **)0x0) {
      if ((long)((ulong)ppuVar16 | (ulong)ppuVar18) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad27d4);
        (*pcVar2)();
      }
      ppuVar26 = ppuVar16;
      FUN_103ad4dec(ppuVar16,ppuVar18);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined1 ***)(unaff_x20 + 0x30) = ppuVar26;
      func_0x000107c61170(uVar12);
      ppuVar5 = *(undefined1 ***)(unaff_x20 + 0x30);
      if (ppuVar5 == (undefined1 **)0x0) {
        FUN_103ad4fd4();
        ppuVar15 = (undefined1 **)0x0;
        ppuVar17 = (undefined1 **)0x0;
        func_0x000107c613f8(&UNK_1106cd040,ppuVar5,0);
        uVar21 = 10;
        goto LAB_103ad1e3c;
      }
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61174();
    func_0x000107c55410(0x3f4f5c29,uVar12);
    if (((ulong)ppuVar16 | (ulong)ppuVar18) >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad27d0);
      (*pcVar2)();
    }
    puStack_80 = (undefined1 *)0x0;
    ppuVar19 = &puStack_80;
    uVar30 = uVar12;
    ppuVar15 = ppuVar16;
    ppuVar17 = ppuVar18;
    func_0x000107c4ee10();
    puVar7 = puStack_80;
    if ((int)uVar30 == 0) {
      puVar6 = puStack_80;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170();
      func_0x000107c61654();
      FUN_103ad4fd4();
      ppuVar15 = (undefined1 **)0x0;
      ppuVar17 = (undefined1 **)0x0;
      func_0x000107c613f8(&UNK_1106cd040,puVar6,0);
      *puVar6 = 0xc;
      func_0x000107c61654();
      func_0x000107c614ac(puVar7);
      func_0x000107c61170(ppuVar4);
      func_0x000107c61170(ppuVar4);
      func_0x000107c615e8(param_4);
      ppuVar26 = ppuVar5;
    }
    else {
      dVar22 = 1000.0;
      param_1 = param_1 * 1000.0;
      func_0x000107c61174();
      func_0x000107c61170(ppuVar4);
      if (*(char *)(unaff_x20 + 0xc0) == '\x01') {
        if (lRam0000000112fe8950 != -1) {
          func_0x000107c61568(0x112fe8950,FUN_103ad1488);
        }
        puVar23 = (undefined8 *)0x112fe8958;
        puVar25 = (undefined8 *)0x112fe8968;
        uStack_78 = uRam0000000112fe8960;
        uStack_74 = uRam0000000112fe8964;
      }
      else {
        puVar23 = (undefined8 *)(unaff_x20 + 0xa8);
        puVar25 = (undefined8 *)(unaff_x20 + 0xb8);
        uStack_78 = *(undefined4 *)(unaff_x20 + 0xb0);
        uStack_74 = *(undefined4 *)(unaff_x20 + 0xb4);
      }
      ppuStack_70 = (undefined1 **)*puVar25;
      puStack_80 = (undefined1 *)*puVar23;
      func_0x000107c60a3c(&puStack_80);
      ppuVar26 = (undefined1 **)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (1000.0 <= param_1 - dVar22 * 1000.0) {
        if ((*(char *)(unaff_x20 + 0x60) != '\x01') &&
           (param_1 = (double)*(long *)(unaff_x20 + 0x58) * 1000.0 - param_1, param_1 < 0.0)) {
          param_1 = 0.0;
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c466c0(param_1);
        ppuVar15 = ppuVar5;
        FUN_103ad3ea4(ppuVar5,puVar9,ppuVar29);
        if (unaff_x21 == 0) {
          func_0x000107c61170(puVar9);
          ppuVar26 = ppuVar15;
          FUN_103ad5014();
          if ((bVar1 & 1) == 0) {
            if (*(char *)(unaff_x20 + 0x21) == '\x01') {
              if ((*(byte *)(unaff_x20 + 0xd0) & 1) == 0) {
                puVar9 = PTR_PTR_1126ad8b8;
                func_0x000107c610f8();
                func_0x000107c61434(ppuVar26);
                func_0x000107c453e4();
                uVar27 = *(ulong *)(unaff_x20 + 0x70);
                if (uVar27 >> 0x3c < 0xf) {
                  uVar31 = *(undefined8 *)(unaff_x20 + 0x68);
                  func_0x00010006c00c(uVar31,uVar27);
                  uVar30 = uVar31;
                  func_0x000107c5ee20(uVar31,uVar27);
                  func_0x0001000b44c0(uVar31,uVar27);
                }
                else {
                  uVar30 = 0;
                }
                func_0x000107c578dc(puVar9);
                func_0x000107c61170(uVar30);
                func_0x000107c578ec(puVar9);
                func_0x000107c578d4(puVar9);
                func_0x000107c54f1c(puVar9);
                lVar24 = *(long *)(unaff_x20 + 0x50);
                if (lVar24 == 0) {
                  ppuVar29 = (undefined1 **)0xff555555;
                }
                else {
                  ppuVar29 = (undefined1 **)0xff555555;
                  if (*(long *)(lVar24 + 0x10) != 0) {
                    ppuVar29 = (undefined1 **)
                               (ulong)*(uint *)(lVar24 + *(long *)(lVar24 + 0x10) * 4 + 0x1c);
                  }
                }
                func_0x000107c54f14(puVar9);
                func_0x000106f469b8(ppuVar5,puVar9);
                func_0x000107c61574(ppuVar15);
                func_0x000107c61170(puVar9);
                *(undefined1 *)(unaff_x20 + 0xd0) = 1;
              }
              else {
                func_0x000107c61434(ppuVar26);
                func_0x000107c61574(ppuVar15);
              }
            }
            else {
              func_0x000107c61434(ppuVar26);
              func_0x000107c61574(ppuVar15);
            }
          }
          else {
            func_0x000107c61434(ppuVar26);
            func_0x000107c61574(ppuVar15);
          }
          *(undefined1 **)(unaff_x20 + 0xa8) = param_5;
          *(undefined1 ***)(unaff_x20 + 0xb0) = param_6;
          *(undefined1 ***)(unaff_x20 + 0xb8) = param_7;
          *(undefined1 *)(unaff_x20 + 0xc0) = 0;
          ppuVar15 = ppuVar29;
          goto LAB_103ad21f8;
        }
        func_0x000107c61170(puVar9);
        func_0x000107c615e8(param_4);
      }
      else {
LAB_103ad21f8:
        FUN_103ad4220(ppuVar5,ppuVar26);
        if (unaff_x21 != 0) {
          func_0x000107c615e8(param_4);
          func_0x000107c61170(ppuVar5);
          func_0x000107c61170(ppuVar4);
          func_0x000107c6142c(ppuVar26);
          goto LAB_103ad1fa8;
        }
        func_0x000107c6142c(ppuVar26);
        if ((param_3 == (undefined1 **)0x0) || ((uVar13 & 0xff) != 1)) {
LAB_103ad2318:
          ppuVar29 = param_4;
          func_0x000107c3e92c();
          if ((int)ppuVar29 != 0) {
            if ((uVar13 & 0xff) == 1) {
              puStack_80 = (undefined1 *)0x0;
              ppuVar19 = &puStack_80;
              func_0x000107c40048();
              if ((int)uVar12 != 0) {
                func_0x000107c61174();
                goto LAB_103ad2558;
              }
            }
            else {
              puStack_80 = (undefined1 *)0x0;
              ppuVar15 = ppuVar4;
              func_0x000107c40050();
              ppuVar19 = ppuVar16;
              ppuVar20 = ppuVar18;
              if ((int)uVar12 != 0) {
                func_0x000107c61174();
                func_0x000107c615e8(param_4);
                func_0x000107c61170(ppuVar5);
                ppuVar26 = ppuVar4;
                ppuVar17 = ppuVar3;
                ppuVar19 = ppuVar16;
                ppuVar20 = ppuVar18;
                goto LAB_103ad1fa4;
              }
            }
            puVar7 = puStack_80;
            puVar6 = puStack_80;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170();
            func_0x000107c61654();
            FUN_103ad4fd4();
            ppuVar15 = (undefined1 **)0x0;
            ppuVar17 = (undefined1 **)0x0;
            func_0x000107c613f8(&UNK_1106cd040,puVar6,0);
            *puVar6 = 0xd;
            func_0x000107c61654();
            func_0x000107c61170(ppuVar5);
            func_0x000107c61170(ppuVar4);
            func_0x000107c614ac(puVar7);
            goto LAB_103ad1e5c;
          }
          FUN_103ad4fd4();
          ppuVar16 = (undefined1 **)0x0;
          ppuVar18 = (undefined1 **)0x0;
          func_0x000107c613f8(&UNK_1106cd040,ppuVar29,0);
          *(undefined1 *)ppuVar29 = 0xb;
          func_0x000107c61654();
        }
        else {
          ppuVar29 = param_3;
          func_0x000107c615f0();
          func_0x000107c3e928();
          if ((int)ppuVar29 != 0) {
            func_0x000107c615e8(param_3);
            goto LAB_103ad2318;
          }
          FUN_103ad4fd4();
          ppuVar16 = (undefined1 **)0x0;
          ppuVar18 = (undefined1 **)0x0;
          func_0x000107c613f8(&UNK_1106cd040,ppuVar29,0);
          *(undefined1 *)ppuVar29 = 0xb;
          func_0x000107c61654();
          func_0x000107c615e8(param_4);
          param_4 = param_3;
        }
LAB_103ad2558:
        func_0x000107c615e8(param_4);
        ppuVar29 = ppuVar16;
        ppuVar17 = ppuVar18;
      }
      func_0x000107c61170(ppuVar5);
      ppuVar26 = ppuVar4;
      ppuVar15 = ppuVar29;
    }
  }
LAB_103ad1fa4:
  func_0x000107c61170(ppuVar26);
LAB_103ad1fa8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar7 = *ppuVar20;
  puVar6 = ppuVar20[1];
  puVar28 = ppuVar20[2];
  uVar12 = 0;
  func_0x000103ad5fa4(0,0x112fe8948,&PTR_PTR_1126d3380);
  func_0x000107c5fc54(ppuVar15,uVar12);
  if (ppuVar17 != (undefined1 **)0x0) {
    uVar12 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(ppuVar17,uVar12);
  }
  func_0x000107c615f0(ppuVar19);
  func_0x000107c61174(ppuVar26);
  ppuVar29 = ppuVar15;
  FUN_103ad1ac8(ppuVar15,ppuVar17,ppuVar19,puVar7,puVar6,puVar28);
  func_0x000107c615e8(ppuVar19);
  func_0x000107c61170(ppuVar26);
  func_0x000107c6142c(ppuVar15);
  func_0x000107c6142c(ppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar29);
  return;
}



/* Entry: 103ad27f0; end: 103ad2933; -[SCSnapRendererRepostOverlayPlugin processVideoInputs:inputTextures:outputTexture:timestamp:error:] */

/* WARNING: Removing unreachable block (ram,0x000103ad28d8) */
/* WARNING: Removing unreachable block (ram,0x000103ad290c) */
/* WARNING: Removing unreachable block (ram,0x000103ad28dc) */

void FUN_103ad27f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar4 = param_6[2];
  uVar3 = 0;
  func_0x000103ad5fa4(0,0x112fe8948,&PTR_PTR_1126d3380);
  func_0x000107c5fc54(param_3,uVar3);
  if (param_4 != 0) {
    uVar3 = 0x112debe58;
    func_0x0001000285a8(0x112debe58,&UNK_10d9b7ff0);
    func_0x000107c5fc54(param_4,uVar3);
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_103ad1ac8(param_3,param_4,param_5,uVar1,uVar2,uVar4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ad2934; end: 103ad2997;  */

/* WARNING: Removing unreachable block (ram,0x000103ad2964) */
/* WARNING: Removing unreachable block (ram,0x000103ad2968) */
/* WARNING: Removing unreachable block (ram,0x000103ad2978) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad2934(void)

{
  FUN_103ad2998();
  return;
}



/* Entry: 103ad2998; end: 103ad2c33;  */

/* WARNING: Removing unreachable block (ram,0x000103ad2abc) */

void FUN_103ad2998(double param_1,double param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (((0.0 < param_1) && (0.0 < param_2)) && (*(char *)(unaff_x20 + 0x20) == '\x01')) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2c24);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2c28);
      (*pcVar1)();
    }
    if ((0x7fe < (ulong)param_1 >> 0x34) || (0x7fe < (ulong)param_2 >> 0x34)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2c2c);
      (*pcVar1)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2c30);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2c34);
      (*pcVar1)();
    }
    puVar2 = (undefined1 *)(long)param_1;
    FUN_103ad4dec(puVar2,(long)param_2);
    if (puVar2 == (undefined1 *)0x0) {
      FUN_103ad4fd4();
      func_0x000107c613f8(&UNK_1106cd040,puVar2,0,0);
      *puVar2 = 10;
      func_0x000107c61654();
    }
    else {
      puVar3 = puVar2;
      FUN_103ad3ea4();
      if (unaff_x21 == 0) {
        FUN_103ad5014();
        if ((*(byte *)(unaff_x20 + 0x21) & 1) != 0) {
          puVar4 = PTR_PTR_1126ad8b8;
          func_0x000107c610f8(PTR_PTR_1126ad8b8);
          func_0x000107c453e4();
          uVar5 = *(ulong *)(unaff_x20 + 0x70);
          if (uVar5 >> 0x3c < 0xf) {
            uVar7 = *(undefined8 *)(unaff_x20 + 0x68);
            func_0x00010006c00c(uVar7,uVar5);
            uVar6 = uVar7;
            func_0x000107c5ee20(uVar7,uVar5);
            func_0x0001000b44c0(uVar7,uVar5);
          }
          else {
            uVar6 = 0;
          }
          func_0x000107c578dc(puVar4);
          func_0x000107c61170(uVar6);
          func_0x000107c578ec(puVar4);
          func_0x000107c578d4(puVar4);
          func_0x000107c54f1c(puVar4);
          func_0x000107c54f14(puVar4);
          func_0x000106f469b8(puVar2,puVar4);
          func_0x000107c61170(puVar4);
        }
        func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c450a8();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x000107c61574(puVar3);
      }
      else {
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 103ad2c34; end: 103ad2c87; -[SCSnapRendererRepostOverlayPlugin renderStaticOverlayWithSize:error:] */

void FUN_103ad2c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_103ad2934(param_1,param_2,param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 103ad2c88; end: 103ad2c8f; -[SCSnapRendererRepostOverlayPlugin processingMetadataApplier] */

void FUN_103ad2c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 103ad2c90; end: 103ad2cdf; -[SCSnapRendererRepostOverlayPlugin cleanUpResourcesAndReturnError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ad2c90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112fe8710);
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  func_0x000107c61174();
  func_0x000107c5d274(uVar1);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 103ad2ce0; end: 103ad2ce3; -[SCSnapRendererRepostOverlayPlugin reset] */

void FUN_103ad2ce0(void)

{
  return;
}



/* Entry: 103ad2ce4; end: 103ad2d43; -[SCSnapRendererRepostOverlayPlugin init] */

void FUN_103ad2ce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSnapRendererRepostOverlayPlugin.SCSnapRendererRepostOverlayPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad2d10);
  (*pcVar1)();
}



/* Entry: 103ad2d44; end: 103ad2d7b; -[SCSnapRendererRepostOverlayPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ad2d44(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe8708));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe8710));
  return;
}



/* Entry: 103ad2d7c; end: 103ad2d7f;  */

void FUN_103ad2d7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4fdd0;
  func_0x000107c61520(&UNK_10dc4fdd0,&UNK_1106cd040);
  puRam0000000112fe8718 = puVar1;
  return;
}



/* Entry: 103ad2d80; end: 103ad2dbf;  */

void FUN_103ad2d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4fdd0;
  func_0x000107c61520(&UNK_10dc4fdd0,&UNK_1106cd040);
  puRam0000000112fe8718 = puVar1;
  return;
}



/* Entry: 103ad2dc0; end: 103ad2f23;  */

int FUN_103ad2dc0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ad2e3c;
        goto LAB_103ad2e20;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ad2e20:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_103ad2e3c:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ad2f24; end: 103ad2f43;  */

void FUN_103ad2f24(void)

{
  func_0x000107c61168(&PTR_PTR_112925240);
  return;
}



/* Entry: 103ad2f44; end: 103ad3aaf;  */

void FUN_103ad2f44(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong *puVar21;
  ulong uStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61428(param_2 + 0x10,auStack_b0,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  puVar6 = PTR_PTR_1126ad8c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uStack_d0 = 0xd000000000000016;
  uStack_c8 = 0x800000010f19ca30;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad3024:
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_98;
    func_0x000100df95d0(puVar7);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103ad3024;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_100);
    func_0x000107c6142c(param_3);
  }
  func_0x0001007bbff0(&uStack_98);
  puVar9 = PTR___sypN_11034f1a8;
  if (lStack_e8 == 0) {
    func_0x000103ad5f64(&uStack_100,0x112d387f8,&UNK_10d902650);
LAB_103ad30ac:
    func_0x0001091286f4();
  }
  else {
    puVar8 = &uStack_d0;
    func_0x000107c6147c(puVar8,&uStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar16 = uStack_c8;
    uVar11 = uStack_d0;
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad30ac;
    func_0x000107c6142c(uStack_c8);
    uVar11 = uVar11 & 0xffffffffffff;
    if ((uVar16 & 0x2000000000000000) != 0) {
      uVar11 = uVar16 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) goto LAB_103ad30ac;
  }
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55038(puVar6);
  func_0x000107c61170(puVar19);
  uStack_d0 = 0xd000000000000016;
  uStack_c8 = 0x800000010f19ca30;
  puVar19 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad3140:
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_98;
    func_0x000100df95d0(puVar7);
    if (((ulong)puVar19 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103ad3140;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_100);
    func_0x000107c6142c(param_3);
  }
  func_0x0001007bbff0(&uStack_98);
  if (lStack_e8 == 0) {
LAB_103ad333c:
    puVar7 = &uStack_100;
    func_0x000103ad5f64(puVar7,0x112d387f8,&UNK_10d902650);
    iVar15 = (int)puVar7;
LAB_103ad3354:
    func_0x0001091286f4();
    if (iVar15 != 0) {
LAB_103ad335c:
      FUN_103ad5a18(&uStack_98);
      if (lStack_90 != 0) {
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x00010006c090(uStack_88,uStack_80);
        uVar10 = uStack_98;
        func_0x000107c5fadc(uStack_98,lStack_90);
        func_0x000107c6142c(lStack_90);
        func_0x000107c578d8(puVar6);
        func_0x000107c61170(uVar10);
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        uVar10 = *(undefined8 *)(param_2 + 0x68);
        uVar1 = *(undefined8 *)(param_2 + 0x70);
        *(undefined8 *)(param_2 + 0x68) = uStack_88;
        *(undefined8 *)(param_2 + 0x70) = uStack_80;
        func_0x0001000b44c0(uVar10,uVar1);
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(uStack_88,uStack_80);
        func_0x00010006c090(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        *(undefined8 *)(param_2 + 0x78) = uStack_78;
        func_0x00010006c090(uStack_88,uStack_80);
        func_0x000107c6142c(lStack_90);
        *(undefined8 *)(param_2 + 0x80) = uStack_70;
      }
    }
  }
  else {
    puVar8 = &uStack_d0;
    func_0x000107c6147c(puVar8,&uStack_100,puVar9 + 8,PTR___sSSN_11034da80,6);
    uVar16 = uStack_c8;
    uVar11 = uStack_d0;
    iVar15 = (int)puVar8;
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad3354;
    uStack_d0 = 0xd000000000000017;
    uStack_c8 = 0x800000010f19cb10;
    puVar19 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad31f0:
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x000107c61434(param_3);
      puVar7 = &uStack_98;
      func_0x000100df95d0(puVar7);
      if (((ulong)puVar19 & 1) == 0) {
        func_0x000107c6142c(param_3);
        goto LAB_103ad31f0;
      }
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_100);
      func_0x000107c6142c(param_3);
    }
    func_0x0001007bbff0(&uStack_98);
    if (lStack_e8 == 0) {
LAB_103ad3334:
      func_0x000107c6142c(uVar16);
      goto LAB_103ad333c;
    }
    puVar8 = &uStack_d0;
    func_0x000107c6147c(puVar8,&uStack_100,puVar9 + 8,PTR___sSiN_11034deb0,6);
    uVar4 = uStack_d0;
    if (((ulong)puVar8 & 1) == 0) {
LAB_103ad39b4:
      func_0x000107c6142c();
      iVar15 = (int)uVar16;
      func_0x0001091286f4();
      if (iVar15 == 0) goto LAB_103ad343c;
      goto LAB_103ad335c;
    }
    uStack_d0 = 0xd000000000000018;
    uStack_c8 = 0x800000010f19cb30;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&uStack_98,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad32a0:
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x000107c61434(param_3);
      puVar7 = &uStack_98;
      func_0x000100df95d0(puVar7);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107c6142c(param_3);
        goto LAB_103ad32a0;
      }
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_100);
      func_0x000107c6142c(param_3);
    }
    func_0x0001007bbff0(&uStack_98);
    if (lStack_e8 == 0) goto LAB_103ad3334;
    puVar8 = &uStack_d0;
    func_0x000107c6147c(puVar8,&uStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    uVar13 = uStack_d0;
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad39b4;
    if ((param_4 & 1) == 0) {
      uVar13 = uVar16;
      FUN_103ad51f4(uVar11,uVar16,uVar4);
      func_0x000107c6142c(uVar16);
      if (uVar13 != 0) {
        func_0x000107c5fadc(uVar11,uVar13);
        func_0x000107c6142c(uVar13);
        func_0x000107c578d8(puVar6);
        func_0x000107c61170(uVar11);
      }
    }
    else {
      uVar12 = uVar16;
      func_0x000107c5ee08(uVar11,uVar16,0);
      func_0x000107c6142c(uVar16);
      if (uVar12 >> 0x3c < 0xf) {
        uVar2 = (uint)(uVar12 >> 0x20);
        uVar14 = uVar2 >> 0x1e;
        if (uVar2 >> 0x1e < 2) {
          if (uVar14 == 0) {
            uVar16 = uVar12 >> 0x30 & 0xff;
          }
          else {
            iVar15 = (int)(uVar11 >> 0x20);
            if (SBORROW4(iVar15,(int)uVar11)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103ad3ab0);
              (*pcVar5)();
            }
            uVar16 = (ulong)(iVar15 - (int)uVar11);
          }
        }
        else if (uVar14 == 2) {
          uVar16 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
          if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103ad3a38);
            (*pcVar5)();
          }
        }
        else {
          uVar16 = 0;
        }
        lVar18 = uVar4 * uVar13;
        if (SUB168(SEXT816((long)uVar4) * SEXT816((long)uVar13),8) != lVar18 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ad3aa8);
          (*pcVar5)();
        }
        if (lVar18 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103ad3aac);
          (*pcVar5)();
        }
        if (uVar16 == lVar18 * 4) {
          uVar10 = *(undefined8 *)(param_2 + 0x68);
          uVar1 = *(undefined8 *)(param_2 + 0x70);
          *(ulong *)(param_2 + 0x68) = uVar11;
          *(ulong *)(param_2 + 0x70) = uVar12;
          func_0x0001000b44c0(uVar10,uVar1);
          *(ulong *)(param_2 + 0x78) = uVar4;
          *(ulong *)(param_2 + 0x80) = uVar13;
        }
        else {
          func_0x0001000b44c0(uVar11,uVar12);
        }
      }
    }
  }
LAB_103ad343c:
  uStack_110 = 0xd000000000000012;
  puStack_108 = (ulong *)0x800000010f19ca50;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    puVar19 = PTR___sypN_11034f1a8;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_100;
    func_0x000100df95d0(puVar7);
    puVar19 = PTR___sypN_11034f1a8;
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      uStack_c8 = 0;
      uStack_d0 = 0;
      lStack_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_d0);
      func_0x000107c6142c(param_3);
    }
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar21 = (ulong *)0x112d387f8;
    puVar8 = &uStack_d0;
    func_0x000103ad5f64(puVar8,0x112d387f8,&UNK_10d902650);
LAB_103ad3538:
    func_0x0001091286f4();
    if (((ulong)puVar8 & 1) != 0) {
      uVar11 = 0xd000000000000017;
      puVar21 = (ulong *)0x800000010f19caf0;
      func_0x000107c5fadc(0xd000000000000017);
      goto LAB_103ad355c;
    }
  }
  else {
    puVar8 = &uStack_110;
    puVar21 = &uStack_d0;
    func_0x000107c6147c(puVar8,puVar21,puVar19 + 8,PTR___sSSN_11034da80,6);
    puVar3 = puStack_108;
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad3538;
    uVar11 = uStack_110;
    puVar21 = puStack_108;
    func_0x000107c5fadc(uStack_110);
    func_0x000107c6142c(puVar3);
LAB_103ad355c:
    func_0x000107c53af4(puVar6);
    func_0x000107c61170(uVar11);
  }
  puVar9 = puVar6;
  func_0x000107c40cb0();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    puVar21 = (ulong *)0x0;
  }
  else {
    puVar20 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x88) = puVar20;
  *(ulong **)(param_2 + 0x90) = puVar21;
  func_0x000107c6142c(uVar10);
  uStack_110 = 0xd000000000000016;
  puStack_108 = (ulong *)0x800000010f19ca70;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad3624:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_100;
    func_0x000100df95d0(puVar7);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103ad3624;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_d0);
    func_0x000107c6142c(param_3);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar8 = &uStack_d0;
    func_0x000103ad5f64(puVar8,0x112d387f8,&UNK_10d902650);
LAB_103ad367c:
    func_0x0001091286f4();
    if (((ulong)puVar8 & 1) != 0) goto LAB_103ad3688;
  }
  else {
    puVar8 = &uStack_110;
    func_0x000107c6147c(puVar8,&uStack_d0,puVar19 + 8,PTR___sSbN_11034dd40,6);
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad367c;
LAB_103ad3688:
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c591a0(puVar6);
    func_0x000107c61170(puVar9);
  }
  uStack_d0 = 0xd000000000000010;
  uStack_c8 = 0x800000010f19ca90;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad3724:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_100;
    func_0x000100df95d0(puVar7);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103ad3724;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_d0);
    func_0x000107c6142c(param_3);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    func_0x000103ad5f64(&uStack_d0,0x112d387f8,&UNK_10d902650);
    uStack_110 = 0;
    bVar17 = 1;
  }
  else {
    puVar8 = &uStack_110;
    func_0x000107c6147c(puVar8,&uStack_d0,puVar19 + 8,PTR___sSiN_11034deb0,6);
    if ((int)puVar8 == 0) {
      uStack_110 = 0;
    }
    bVar17 = (byte)puVar8 ^ 1;
  }
  *(ulong *)(param_2 + 0x58) = uStack_110;
  *(byte *)(param_2 + 0x60) = bVar17;
  uStack_110 = 0xd000000000000015;
  puStack_108 = (ulong *)0x800000010f19cab0;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&uStack_100,&uStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_103ad3808:
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    puVar7 = &uStack_100;
    func_0x000100df95d0(puVar7);
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_103ad3808;
    }
    func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)puVar7 * 0x20,&uStack_d0);
    func_0x000107c6142c(param_3);
  }
  func_0x0001007bbff0(&uStack_100);
  if (lStack_b8 == 0) {
    puVar21 = (ulong *)0x112d387f8;
    puVar8 = &uStack_d0;
    func_0x000103ad5f64(puVar8,0x112d387f8,&UNK_10d902650);
LAB_103ad3874:
    func_0x0001091286f4();
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad38b0;
    puVar21 = (ulong *)0x800000010f19cad0;
    uVar11 = 0x1000000000000011;
    func_0x000107c5fadc(0x1000000000000011);
  }
  else {
    puVar8 = &uStack_110;
    puVar21 = &uStack_d0;
    func_0x000107c6147c(puVar8,puVar21,puVar19 + 8,PTR___sSSN_11034da80,6);
    puVar3 = puStack_108;
    if (((ulong)puVar8 & 1) == 0) goto LAB_103ad3874;
    uVar11 = uStack_110;
    puVar21 = puStack_108;
    func_0x000107c5fadc(uStack_110);
    func_0x000107c6142c(puVar3);
  }
  func_0x000107c524d8(puVar6);
  func_0x000107c61170(uVar11);
LAB_103ad38b0:
  puVar9 = puVar6;
  func_0x000107c3d978();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    puVar21 = (ulong *)0x0;
  }
  else {
    puVar19 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
  }
  uVar10 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined **)(param_2 + 0x98) = puVar19;
  *(ulong **)(param_2 + 0xa0) = puVar21;
  func_0x000107c6142c(uVar10);
  puVar9 = PTR_PTR_1126d34f0;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  puVar19 = puVar9;
  func_0x000107c40b38();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar19;
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0xe0);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(uVar10);
  func_0x000107c45a48(puVar9);
  func_0x000107c3fefc(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61574(param_2);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 103ad3ab0; end: 103ad3bab;  */

void FUN_103ad3ab0(long param_1,long param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c615f0();
    (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  puVar1 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61648();
  if (puVar1 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(puVar1 + 0xe0);
    func_0x000107c61174(uVar5);
    func_0x000107c61574();
    FUN_103ad4fd4();
    puVar2 = &UNK_1106cd040;
    func_0x000107c613f8(&UNK_1106cd040,puVar1,0,0);
    *puVar1 = 2;
    puVar3 = puVar2;
    func_0x000107c5ed2c();
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c614ac(puVar2);
    func_0x000107c3fef8(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 103ad3bac; end: 103ad3dbf;  */

void FUN_103ad3bac(undefined8 param_1,double param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  
  func_0x000103ad5fa4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  pcVar2 = s__10f19cb6a;
  func_0x000107c60124(s__10f19cb6a,4,0);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c5c5fc(0x403c000000000000);
  func_0x000107c61180();
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  dVar8 = 4.94065645841247e-324;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar7 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  uVar5 = 0;
  func_0x000103ad5fa4(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined **)(lVar4 + 0x28) = puVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar3);
  lVar6 = lVar4;
  func_0x000100ecbca8(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000103ad5f64((undefined8 *)(lVar4 + 0x20),0x112d48398,&UNK_10d90f130);
  uVar7 = 0;
  func_0x000100eca28c(0);
  uVar5 = 0x112d483a0;
  FUN_103ad469c(0x112d483a0,&SUB_100eca28c,&UNK_10d90f180);
  puVar1 = PTR___sypN_11034f1a8;
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c5b0a0(pcVar2);
  func_0x000107c61170(lVar4);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar7,puVar1 + 8,uVar5);
  func_0x000107c6142c(lVar6);
  func_0x000107c422c4((32.0 - dVar8) * 0.5,(32.0 - param_2) * 0.5,dVar8,param_2,pcVar2);
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 103ad3dc0; end: 103ad3e63;  */

void FUN_103ad3dc0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 != 0) {
    func_0x000107c4218c();
    func_0x000107c61180();
    (**(code **)(lVar1 + 0x10))();
    func_0x000107c60bd0(lVar1);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 103ad3e64; end: 103ad3ea3;  */

void FUN_103ad3e64(void)

{
  FUN_103ad3dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ad3ea4; end: 103ad421f;  */

undefined8 * FUN_103ad3ea4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 *unaff_x20;
  double *pdVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *unaff_x27;
  double dVar16;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)unaff_x20[5];
  if (puVar2 == (undefined8 *)0x0) {
    FUN_103ad4fd4();
    puVar5 = (undefined8 *)&UNK_1106cd040;
    func_0x000107c613f8(&UNK_1106cd040,puVar2,0,0);
    *(undefined1 *)puVar2 = 1;
    func_0x000107c61654();
  }
  else {
    uVar14 = *unaff_x20;
    func_0x000107c61174();
    func_0x000107c60ad0(param_2,0);
    puVar5 = param_2;
    func_0x000107c60aa8();
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000107c60ae0(param_2,0);
      FUN_103ad4fd4();
      func_0x000107c613f8(&UNK_1106cd040,param_2,0,0);
      uVar11 = 3;
    }
    else {
      unaff_x27 = param_2;
      func_0x000107c60ac8();
      puVar10 = param_2;
      func_0x000107c60ab8();
      puVar3 = param_2;
      func_0x000107c60ab0();
      if (((0 < (long)unaff_x27) && (0 < (long)puVar10)) && (0 < (long)puVar3)) {
        if ((ulong)unaff_x27 >> 0x1f != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4218);
          (*pcVar1)();
        }
        if ((ulong)puVar10 >> 0x1f != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad421c);
          (*pcVar1)();
        }
        func_0x00010b971de4(auStack_98,unaff_x27,puVar10,1,1,puVar3);
        pcStack_a8 = FUN_103ad4548;
        puStack_a0 = (undefined *)0x0;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_1106cd050;
        ppuVar4 = &puStack_c8;
        func_0x000107c60bc4(ppuVar4);
        func_0x00010b971ea4(puVar5,auStack_98,ppuVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar4);
        if (param_3 == 0) {
          param_1 = 0;
        }
        else {
          func_0x000107c4223c(param_3);
        }
        unaff_x27 = (undefined8 *)0x0;
        func_0x000103ad467c();
        func_0x000107c613fc();
        uVar6 = 0;
        func_0x000107c60f6c();
        unaff_x27[4] = 0;
        unaff_x27[5] = 0;
        unaff_x27[3] = uVar6;
        unaff_x27[2] = param_1;
        func_0x000107c61174();
        puVar10 = puVar2;
        func_0x000107c5007c();
        func_0x000107c61180();
        unaff_x20 = puVar10;
        (*(code *)puVar10[2])();
        func_0x000107c61180();
        func_0x000107c60bd0(puVar10);
        puVar7 = &UNK_1106cd088;
        puVar10 = (undefined8 *)0x38;
        func_0x000107c613fc(&UNK_1106cd088,0x38,7);
        *(undefined8 **)(puVar7 + 0x10) = unaff_x27;
        *(undefined8 **)(puVar7 + 0x18) = param_2;
        *(undefined8 *)(puVar7 + 0x20) = 0;
        *(undefined8 **)(puVar7 + 0x28) = param_2;
        *(undefined8 *)(puVar7 + 0x30) = uVar14;
        pcStack_a8 = (code *)0x103ad51e4;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = (undefined *)0x103ad45d0;
        puStack_b0 = &UNK_1106cd0a0;
        ppuVar4 = &puStack_c8;
        puStack_a0 = puVar7;
        func_0x000107c60bc4();
        puVar7 = puStack_a0;
        func_0x000107c61174(param_2);
        func_0x000107c6157c(unaff_x27);
        func_0x000107c61574(puVar7);
        func_0x000107c4db80(unaff_x20);
        func_0x000107c61170(puVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(puVar5);
        puVar5 = unaff_x20;
        func_0x000107c61170();
        puVar2 = puVar10;
        goto LAB_103ad40a8;
      }
      func_0x000107c60ae0(param_2,0);
      FUN_103ad4fd4();
      func_0x000107c613f8(&UNK_1106cd040,param_2,0,0);
      uVar11 = 9;
    }
    *(undefined1 *)param_2 = uVar11;
    func_0x000107c61654();
    func_0x000107c61170();
    puVar5 = puVar2;
    puVar2 = param_2;
  }
LAB_103ad40a8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return unaff_x27;
  }
  func_0x000107c60e78();
  func_0x000107c60ad0();
  puVar10 = puVar5;
  func_0x000107c60aa8();
  if (puVar10 == (undefined8 *)0x0) {
    FUN_103ad4fd4();
    func_0x000107c613f8(&UNK_1106cd040,puVar10,0,0);
    *(undefined1 *)puVar10 = 3;
    func_0x000107c61654();
    func_0x000107c60ae0(puVar5,1);
  }
  else {
    puVar10 = puVar5;
    func_0x000107c60ac8();
    puVar3 = puVar5;
    func_0x000107c60ab8();
    puVar8 = puVar5;
    func_0x000107c60ab0();
    if ((*(char *)(unaff_x20 + 8) == '\x01') && (puVar2 != (undefined8 *)0x0)) {
      lVar13 = puVar2[2];
      if (lVar13 != 0) {
        if ((long)puVar8 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4538);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad453c);
          (*pcVar1)();
        }
        uVar15 = unaff_x20[7];
        pdVar12 = (double *)(puVar2 + 7);
        while( true ) {
          dVar16 = (double)(long)pdVar12[-3];
          if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad44f8);
            (*pcVar1)();
          }
          if (dVar16 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad44fc);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4500);
            (*pcVar1)();
          }
          dVar16 = (double)(long)pdVar12[-2];
          if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4504);
            (*pcVar1)();
          }
          if (dVar16 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4508);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad450c);
            (*pcVar1)();
          }
          dVar16 = (double)(long)pdVar12[-1];
          if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4510);
            (*pcVar1)();
          }
          if (dVar16 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4514);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4518);
            (*pcVar1)();
          }
          dVar16 = (double)(long)*pdVar12;
          if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad451c);
            (*pcVar1)();
          }
          if (dVar16 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4520);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4524);
            (*pcVar1)();
          }
          uVar9 = uVar15;
          func_0x000107c5d76c();
          if ((uVar9 & 1) == 0) break;
          lVar13 = lVar13 + -1;
          pdVar12 = pdVar12 + 4;
          if (lVar13 == 0) {
LAB_103ad44c4:
            func_0x000107c60ae0(puVar5,1);
            return puVar5;
          }
        }
        if (0x7fffffff < (long)puVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4540);
          (*pcVar1)();
        }
        if (((long)puVar10 < -0x80000000) || ((long)puVar3 < -0x80000000)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4544);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4548);
          (*pcVar1)();
        }
        func_0x000107c5d770(uVar15);
        goto LAB_103ad44c4;
      }
    }
    else {
      if (0x7fffffff < (long)puVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4528);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad452c);
        (*pcVar1)();
      }
      if ((((long)puVar10 < -0x80000000) || ((long)puVar3 < -0x80000000)) ||
         ((long)puVar8 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4530);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4534);
        (*pcVar1)();
      }
      func_0x000107c5d770(unaff_x20[7]);
      *(undefined1 *)(unaff_x20 + 8) = 1;
    }
    func_0x000107c60ae0(puVar5,1);
  }
  return puVar5;
}



/* Entry: 103ad4220; end: 103ad4547;  */

void FUN_103ad4220(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  double *pdVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  
  func_0x000107c60ad0(param_1,1);
  puVar2 = param_1;
  func_0x000107c60aa8();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_103ad4fd4();
    func_0x000107c613f8(&UNK_1106cd040,puVar2,0,0);
    *puVar2 = 3;
    func_0x000107c61654();
    func_0x000107c60ae0(param_1,1);
  }
  else {
    puVar2 = param_1;
    func_0x000107c60ac8();
    puVar3 = param_1;
    func_0x000107c60ab8();
    puVar4 = param_1;
    func_0x000107c60ab0();
    if ((*(char *)(unaff_x20 + 0x40) == '\x01') && (param_2 != 0)) {
      lVar7 = *(long *)(param_2 + 0x10);
      if (lVar7 != 0) {
        if ((long)puVar4 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4538);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad453c);
          (*pcVar1)();
        }
        uVar8 = *(ulong *)(unaff_x20 + 0x38);
        pdVar6 = (double *)(param_2 + 0x38);
        while( true ) {
          dVar9 = (double)(long)pdVar6[-3];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad44f8);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad44fc);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4500);
            (*pcVar1)();
          }
          dVar9 = (double)(long)pdVar6[-2];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4504);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4508);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad450c);
            (*pcVar1)();
          }
          dVar9 = (double)(long)pdVar6[-1];
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4510);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4514);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4518);
            (*pcVar1)();
          }
          dVar9 = (double)(long)*pdVar6;
          if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad451c);
            (*pcVar1)();
          }
          if (dVar9 <= -2147483649.0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4520);
            (*pcVar1)();
          }
          if (2147483648.0 <= dVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4524);
            (*pcVar1)();
          }
          uVar5 = uVar8;
          func_0x000107c5d76c();
          if ((uVar5 & 1) == 0) break;
          lVar7 = lVar7 + -1;
          pdVar6 = pdVar6 + 4;
          if (lVar7 == 0) {
LAB_103ad44c4:
            func_0x000107c60ae0(param_1,1);
            return;
          }
        }
        if (0x7fffffff < (long)puVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4540);
          (*pcVar1)();
        }
        if (((long)puVar2 < -0x80000000) || ((long)puVar3 < -0x80000000)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4544);
          (*pcVar1)();
        }
        if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4548);
          (*pcVar1)();
        }
        func_0x000107c5d770(uVar8);
        goto LAB_103ad44c4;
      }
    }
    else {
      if (0x7fffffff < (long)puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4528);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad452c);
        (*pcVar1)();
      }
      if ((((long)puVar2 < -0x80000000) || ((long)puVar3 < -0x80000000)) ||
         ((long)puVar4 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4530);
        (*pcVar1)();
      }
      if (0x7fffffff < (long)puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4534);
        (*pcVar1)();
      }
      func_0x000107c5d770(*(undefined8 *)(unaff_x20 + 0x38));
      *(undefined1 *)(unaff_x20 + 0x40) = 1;
    }
    func_0x000107c60ae0(param_1,1);
  }
  return;
}



/* Entry: 103ad4548; end: 103ad454b;  */

void FUN_103ad4548(void)

{
  return;
}



/* Entry: 103ad454c; end: 103ad4647;  */

void FUN_103ad454c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_103ad5d48();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = param_1;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = param_2;
  func_0x000107c614b0(param_2);
  func_0x000107c614ac(uVar1);
  func_0x000107c60ae0(param_4,param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60060();
  return;
}



/* Entry: 103ad4648; end: 103ad469b;  */

void FUN_103ad4648(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ad469c; end: 103ad46db;  */

void FUN_103ad469c(long *param_1,code *param_2,long param_3)

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



/* Entry: 103ad46dc; end: 103ad4897;  */

ulong FUN_103ad46dc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad47c0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad47c4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000103ad5fa4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad4898);
  (*pcVar2)();
}



/* Entry: 103ad4898; end: 103ad4a0b;  */

uint FUN_103ad4898(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  ulong uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c60ac0();
  uVar6 = 1;
  if ((int)lVar1 != 0x34323066) {
    if ((int)lVar1 != 0x34323076) {
      return 0;
    }
    uVar6 = 0;
  }
  plVar5 = *(long **)PTR__kCVImageBufferYCbCrMatrixKey_11034a350;
  func_0x000107c60a80(param_1,plVar5,0);
  if (param_1 == 0) {
LAB_103ad4998:
    func_0x000107c5faec(*(undefined8 *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368);
  }
  else {
    lStack_48 = param_1;
    func_0x000107c615f0(param_1);
    puVar2 = &uStack_58;
    plVar5 = &lStack_48;
    func_0x000107c6147c(puVar2,plVar5,PTR___syXlN_11034f1a0 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar2 & 1) == 0) goto LAB_103ad4998;
    uVar3 = *(ulong *)PTR__kCVImageBufferYCbCrMatrix_ITU_R_709_2_11034a368;
    func_0x000107c5faec();
    if (plStack_50 != (long *)0x0) {
      if (uStack_58 == uVar3 && plStack_50 == plVar5) {
        func_0x000107c6142c(plStack_50);
        func_0x000107c6142c(plVar5);
        func_0x000107c615e8(param_1);
LAB_103ad49fc:
        if (uVar6 != 0) {
          return 2;
        }
        return 3;
      }
      uVar4 = uStack_58;
      func_0x000107c605b8(uStack_58,plStack_50,uVar3,plVar5,0);
      func_0x000107c6142c(plStack_50);
      func_0x000107c6142c(plVar5);
      func_0x000107c615e8(param_1);
      if ((uVar4 & 1) != 0) goto LAB_103ad49fc;
      goto LAB_103ad49b8;
    }
  }
  func_0x000107c6142c(plVar5);
  func_0x000107c615e8(param_1);
LAB_103ad49b8:
  return uVar6 ^ 1;
}



/* Entry: 103ad4a0c; end: 103ad4bbf;  */

/* WARNING: Removing unreachable block (ram,0x000103ad4d08) */
/* WARNING: Removing unreachable block (ram,0x000103ad4cf8) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dd8) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dd4) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dd0) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dc8) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dcc) */
/* WARNING: Removing unreachable block (ram,0x000103ad4ddc) */
/* WARNING: Removing unreachable block (ram,0x000103ad4de0) */
/* WARNING: Removing unreachable block (ram,0x000103ad4de4) */
/* WARNING: Removing unreachable block (ram,0x000103ad4dc4) */
/* WARNING: Removing unreachable block (ram,0x000103ad4d18) */

undefined * FUN_103ad4a0c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_140;
  undefined1 auStack_138 [80];
  long lStack_e8;
  undefined8 uStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_20 = 0.0;
  dStack_30 = 0.0;
  dStack_28 = 0.0;
  uStack_38 = 0;
  func_0x000107c44248(param_1,param_2,&dStack_20,&dStack_28,&dStack_30,&uStack_38);
  dVar14 = (double)(long)(dStack_20 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4b9c);
    (*pcVar1)();
  }
  if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4ba0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4ba4);
    (*pcVar1)();
  }
  dVar15 = (double)(long)(dStack_28 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4ba8);
    (*pcVar1)();
  }
  if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4bac);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4bb0);
    (*pcVar1)();
  }
  dVar16 = (double)(long)(dStack_30 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4bb4);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar16) {
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4bbc);
      (*pcVar1)();
    }
    uVar10 = (long)dVar16 & ((long)dVar16 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar10) {
      uVar10 = 0xff;
    }
    uVar12 = (long)dVar15 & ((long)dVar15 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar12) {
      uVar12 = 0xff;
    }
    uVar13 = (long)dVar14 & ((long)dVar14 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar13) {
      uVar13 = 0xff;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return (undefined *)
             (ulong)((int)uVar12 << 8 | (int)uVar13 << 0x10 | (uint)uVar10 | 0xff000000);
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c44248();
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    puVar3 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar2 + 0x18) = 6;
    *(undefined8 *)(lVar2 + 0x10) = 3;
    puVar5 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar2 + 0x38) = puVar3;
    *(undefined **)(lVar2 + 0x40) = puVar5;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined **)(lVar2 + 0x60) = puVar3;
    *(undefined **)(lVar2 + 0x68) = puVar5;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined **)(lVar2 + 0x88) = puVar3;
    *(undefined **)(lVar2 + 0x90) = puVar5;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    puVar3 = (undefined *)0x3230255832302523;
    lVar8 = -0x12ffffa7cdcfdaa8;
    func_0x000107c5fb00(0x3230255832302523,0xed00005832302558,lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return puVar3;
    }
    func_0x000107c60e78();
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_138;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined1 **)(lVar2 + 0x28) = puVar9;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar4 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    *(undefined **)(lVar2 + 0x30) = puVar5;
    lVar11 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    func_0x000103ad5f64((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puStack_140 = (undefined *)0x0;
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    lVar2 = lVar11;
    func_0x000107c5f9dc(lVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar11);
    func_0x000107c60aa0(uVar4,puVar3,lVar8,0x42475241,lVar2,&puStack_140);
    func_0x000107c61170(lVar2);
    puVar3 = puStack_140;
    puVar5 = (undefined *)0x0;
    if (((int)uVar4 == 0) && (puStack_140 != (undefined *)0x0)) {
      puVar5 = puStack_140;
      func_0x000107c61174();
      func_0x000107c60ad0();
      puVar6 = puVar5;
      func_0x000107c60aa8();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar5;
        func_0x000107c60ab0();
        if (SUB168(SEXT816((long)puVar7) * SEXT816(lVar8),8) != (long)puVar7 * lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4fd0);
          (*pcVar1)();
        }
        func_0x000107c60ee4(puVar6);
      }
      func_0x000107c60ae0(puVar5,0);
      puVar5 = puVar3;
    }
    func_0x000107c61170(puStack_140);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
      return puVar5;
    }
    func_0x000107c60e78();
    if (puRam0000000112fe8940 != (undefined *)0x0) {
      return puRam0000000112fe8940;
    }
    puVar3 = &UNK_10dc4fe38;
    func_0x000107c61520(&UNK_10dc4fe38,&UNK_1106cd040);
    puRam0000000112fe8940 = puVar3;
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4bb8);
  (*pcVar1)();
}



/* Entry: 103ad4bc0; end: 103ad4deb;  */

undefined * FUN_103ad4bc0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_100;
  undefined1 auStack_f8 [80];
  long lStack_a8;
  undefined8 uStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_48 = 0.0;
  dStack_40 = 0.0;
  uStack_58 = 0;
  dStack_50 = 0.0;
  func_0x000107c44248(param_1,param_2,&dStack_40,&dStack_48,&dStack_50,&uStack_58);
  dVar14 = (double)(long)(dStack_40 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4dc8);
    (*pcVar1)();
  }
  if (dVar14 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4dcc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4dd0);
    (*pcVar1)();
  }
  dVar15 = (double)(long)(dStack_48 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4dd4);
    (*pcVar1)();
  }
  if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4dd8);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4ddc);
    (*pcVar1)();
  }
  dVar16 = (double)(long)(dStack_50 * 255.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4de0);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar16) {
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4de8);
      (*pcVar1)();
    }
    uVar11 = (long)dVar15 & ((long)dVar15 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar11) {
      uVar11 = 0xff;
    }
    uVar12 = (long)dVar14 & ((long)dVar14 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar12) {
      uVar12 = 0xff;
    }
    uVar13 = (long)dVar16 & ((long)dVar16 >> 0x3f ^ 0xffffffffffffffffU);
    if (0xfe < (long)uVar13) {
      uVar13 = 0xff;
    }
    lVar2 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    puVar3 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar2 + 0x18) = 6;
    *(undefined8 *)(lVar2 + 0x10) = 3;
    puVar5 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar2 + 0x38) = puVar3;
    *(undefined **)(lVar2 + 0x40) = puVar5;
    *(ulong *)(lVar2 + 0x20) = uVar12;
    *(undefined **)(lVar2 + 0x60) = puVar3;
    *(undefined **)(lVar2 + 0x68) = puVar5;
    *(ulong *)(lVar2 + 0x48) = uVar11;
    *(undefined **)(lVar2 + 0x88) = puVar3;
    *(undefined **)(lVar2 + 0x90) = puVar5;
    *(ulong *)(lVar2 + 0x70) = uVar13;
    puVar3 = (undefined *)0x3230255832302523;
    lVar9 = -0x12ffffa7cdcfdaa8;
    func_0x000107c5fb00(0x3230255832302523,0xed00005832302558,lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return puVar3;
    }
    func_0x000107c60e78();
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_f8;
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar4 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined1 **)(lVar2 + 0x28) = puVar10;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa3f0();
    uVar4 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    *(undefined **)(lVar2 + 0x30) = puVar5;
    lVar6 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    func_0x000103ad5f64((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puStack_100 = (undefined *)0x0;
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    lVar2 = lVar6;
    func_0x000107c5f9dc(lVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                       );
    func_0x000107c6142c(lVar6);
    func_0x000107c60aa0(uVar4,puVar3,lVar9,0x42475241,lVar2,&puStack_100);
    func_0x000107c61170(lVar2);
    puVar3 = puStack_100;
    puVar5 = (undefined *)0x0;
    if (((int)uVar4 == 0) && (puStack_100 != (undefined *)0x0)) {
      puVar5 = puStack_100;
      func_0x000107c61174();
      func_0x000107c60ad0();
      puVar7 = puVar5;
      func_0x000107c60aa8();
      if (puVar7 != (undefined *)0x0) {
        puVar8 = puVar5;
        func_0x000107c60ab0();
        if (SUB168(SEXT816((long)puVar8) * SEXT816(lVar9),8) != (long)puVar8 * lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4fd0);
          (*pcVar1)();
        }
        func_0x000107c60ee4(puVar7);
      }
      func_0x000107c60ae0(puVar5,0);
      puVar5 = puVar3;
    }
    func_0x000107c61170(puStack_100);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
      return puVar5;
    }
    func_0x000107c60e78();
    if (puRam0000000112fe8940 != (undefined *)0x0) {
      return puRam0000000112fe8940;
    }
    puVar3 = &UNK_10dc4fe38;
    func_0x000107c61520(&UNK_10dc4fe38,&UNK_1106cd040);
    puRam0000000112fe8940 = puVar3;
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4de4);
  (*pcVar1)();
}



/* Entry: 103ad4dec; end: 103ad4fd3;  */

undefined * FUN_103ad4dec(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_a0;
  undefined1 auStack_98 [80];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar9 = auStack_98;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar9;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa3f0();
  uVar3 = 0x112da99a0;
  func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  *(undefined **)(lVar2 + 0x30) = puVar4;
  lVar5 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000103ad5f64((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puStack_a0 = (undefined *)0x0;
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  lVar2 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c60aa0(uVar3,param_1,param_2,0x42475241,lVar2,&puStack_a0);
  func_0x000107c61170(lVar2);
  puVar4 = puStack_a0;
  puVar6 = (undefined *)0x0;
  if (((int)uVar3 == 0) && (puStack_a0 != (undefined *)0x0)) {
    puVar6 = puStack_a0;
    func_0x000107c61174();
    func_0x000107c60ad0();
    puVar7 = puVar6;
    func_0x000107c60aa8();
    if (puVar7 != (undefined *)0x0) {
      puVar8 = puVar6;
      func_0x000107c60ab0();
      if (SUB168(SEXT816((long)puVar8) * SEXT816(param_2),8) != (long)puVar8 * param_2 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad4fd0);
        (*pcVar1)();
      }
      func_0x000107c60ee4(puVar7);
    }
    func_0x000107c60ae0(puVar6,0);
    puVar6 = puVar4;
  }
  func_0x000107c61170(puStack_a0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  func_0x000107c60e78();
  if (puRam0000000112fe8940 != (undefined *)0x0) {
    return puRam0000000112fe8940;
  }
  puVar4 = &UNK_10dc4fe38;
  func_0x000107c61520(&UNK_10dc4fe38,&UNK_1106cd040);
  puRam0000000112fe8940 = puVar4;
  return puVar4;
}



/* Entry: 103ad4fd4; end: 103ad5013;  */

void FUN_103ad4fd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4fe38;
  func_0x000107c61520(&UNK_10dc4fe38,&UNK_1106cd040);
  puRam0000000112fe8940 = puVar1;
  return;
}



/* Entry: 103ad5014; end: 103ad51c7;  */

void FUN_103ad5014(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_70;
  
  lVar1 = 0;
  func_0x000107c5f7f0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = (undefined8 *)((long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar9 = (undefined1 *)(lVar8 - extraout_x12);
  func_0x000107c5f830(lVar8);
  *puVar7 = *(undefined8 *)(unaff_x20 + 200);
  (**(code **)(lVar6 + 0x68))
            (puVar7,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788,
             lVar1);
  func_0x000107c5f858(puVar9,lVar8,puVar7);
  (**(code **)(lVar6 + 8))(puVar7,lVar1);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(lVar8,lVar2);
  puVar3 = puVar9;
  func_0x000107c60058();
  (*pcVar5)(puVar9,lVar2);
  if (((uint)puVar3 & 0xff) == 1) {
    FUN_103ad4fd4();
    func_0x000107c613f8(&UNK_1106cd040,puVar9,0,0);
    *puVar9 = 4;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    func_0x000107c614b0(*(long *)(param_1 + 0x28));
  }
  func_0x000107c61654();
  return;
}



/* Entry: 103ad51c8; end: 103ad51f3;  */

void FUN_103ad51c8(long param_1,long param_2)

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



/* Entry: 103ad51f4; end: 103ad546b;  */

undefined1  [16] FUN_103ad51f4(long param_1,ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  
  uVar10 = 0;
  if ((long)param_3 < 1) {
    puVar12 = (undefined *)0x0;
    goto LAB_103ad5410;
  }
  puVar12 = (undefined *)0x0;
  if (param_4 < 1) goto LAB_103ad5410;
  func_0x000107c5ee08(param_1,param_2,0);
  uVar10 = 0;
  puVar12 = (undefined *)0x0;
  if (0xe < param_2 >> 0x3c) goto LAB_103ad5410;
  if (param_3 >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad5464);
    (*pcVar2)();
  }
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uVar9 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad546c);
        (*pcVar2)();
      }
      uVar9 = (ulong)(iVar8 - (int)param_1);
    }
  }
  else if (uVar7 == 2) {
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad5290);
      (*pcVar2)();
    }
  }
  else {
    uVar9 = 0;
  }
  lVar11 = param_3 * 4;
  if (SUB168(SEXT816(lVar11) * SEXT816(param_4),8) != lVar11 * param_4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ad5468);
    (*pcVar2)();
  }
  if (uVar9 == lVar11 * param_4) {
    lVar3 = param_1;
    func_0x000107c5ee20();
    lVar4 = lVar3;
    func_0x000107c60944();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) goto LAB_103ad5404;
    lVar3 = 0x112fe8970;
    func_0x0001000285a8(0x112fe8970,&UNK_10dc50030);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0x400000000001;
    func_0x000107c61588();
    func_0x000107c608bc();
    func_0x000107c60950(param_3,param_4,8,0x20,lVar11,lVar3,0x4001,lVar4,0,0,0);
    func_0x000107c61170(lVar3);
    if (param_3 == 0) {
      func_0x000107c61170(lVar4);
      goto LAB_103ad5404;
    }
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45af0();
    puVar12 = puVar5;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar12 != (undefined *)0x0) {
      puVar6 = puVar12;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar12);
      uVar10 = 0;
      puVar12 = puVar6;
      func_0x000107c5ee24(0,puVar6,param_4);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(param_3);
      func_0x00010006c090(puVar6,param_4);
      goto LAB_103ad5410;
    }
    func_0x0001000b44c0(param_1,param_2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(param_3);
  }
  else {
LAB_103ad5404:
    func_0x0001000b44c0();
  }
  uVar10 = 0;
  puVar12 = (undefined *)0x0;
LAB_103ad5410:
  auVar13._8_8_ = puVar12;
  auVar13._0_8_ = uVar10;
  return auVar13;
}



/* Entry: 103ad546c; end: 103ad5a17;  */

bool FUN_103ad546c(long *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined1 *param_6)

{
  undefined1 uVar1;
  uint uVar9;
  uint7 uVar10;
  code *pcVar11;
  bool bVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *param_1;
  uVar18 = param_1[1];
  uVar9 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar9 >> 0x1e;
  uVar1 = (undefined1)lVar13;
  uVar2 = (undefined1)((ulong)lVar13 >> 8);
  uVar3 = (undefined1)((ulong)lVar13 >> 0x10);
  uVar4 = (undefined1)((ulong)lVar13 >> 0x18);
  uVar5 = (undefined1)((ulong)lVar13 >> 0x20);
  uVar6 = (undefined1)((ulong)lVar13 >> 0x28);
  uVar7 = (undefined1)((ulong)lVar13 >> 0x30);
  uVar8 = (undefined1)((ulong)lVar13 >> 0x38);
  if (uVar9 >> 0x1e < 2) {
    if (uVar17 == 0) {
      func_0x000107c61174(param_6);
      func_0x000107c61174();
      func_0x00010006c090(lVar13,uVar18);
      uStack_70 = (undefined1)uVar18;
      uStack_6f = (undefined1)(uVar18 >> 8);
      uStack_6e = (undefined1)(uVar18 >> 0x10);
      uStack_6d = (undefined1)(uVar18 >> 0x18);
      uStack_6c = (undefined1)(uVar18 >> 0x20);
      uStack_6b = (undefined1)(uVar18 >> 0x28);
      uStack_6a = (undefined1)(uVar18 >> 0x30);
      uStack_78 = uVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      func_0x000107c608bc();
      puVar15 = &uStack_78;
      func_0x000107c608a0(puVar15,param_2,param_3,8,param_4,lVar13,param_5 & 0xffffffff);
      func_0x000107c61170(lVar13);
      bVar12 = puVar15 != (undefined1 *)0x0;
      if (puVar15 != (undefined1 *)0x0) {
        func_0x000107c5ff40(0,0,(double)param_2,(double)param_3,param_6,0);
        func_0x000107c61170(puVar15);
      }
      lVar13 = CONCAT17(uStack_71,
                        CONCAT16(uStack_72,
                                 CONCAT15(uStack_73,
                                          CONCAT14(uStack_74,
                                                   CONCAT13(uStack_75,
                                                            CONCAT12(uStack_76,
                                                                     CONCAT11(uStack_77,uStack_78)))
                                                  ))));
      uVar10 = CONCAT16(uStack_6a,
                        CONCAT15(uStack_6b,
                                 CONCAT14(uStack_6c,
                                          CONCAT13(uStack_6d,
                                                   CONCAT12(uStack_6e,CONCAT11(uStack_6f,uStack_70))
                                                  ))));
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_6);
      *param_1 = lVar13;
      param_1[1] = (ulong)uVar10;
    }
    else {
      uVar22 = uVar18 & 0x3fffffffffffffff;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x00010006c00c(lVar13,uVar18);
      func_0x00010006c090(lVar13,uVar18);
      param_1[1] = -0x4000000000000000;
      *param_1 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      uVar20 = uVar22;
      func_0x000107c61558();
      lVar19 = (long)(int)lVar13;
      lVar21 = lVar13 >> 0x20;
      uVar18 = uVar22;
      if ((uVar20 & 1) == 0) {
        if (lVar21 < lVar19) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a08);
          (*pcVar11)();
        }
        func_0x000107c6157c();
        func_0x000107c5ec30();
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uVar20 = uVar18;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar19,uVar20)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a0c);
            (*pcVar11)();
          }
          uVar18 = (lVar19 - uVar20) + uVar18;
        }
        uVar16 = 0;
        func_0x000107c5ec40();
        func_0x000107c613fc();
        func_0x000107c5ec28(uVar18,lVar21 - lVar19,1,0,0,lVar19,uVar16);
        func_0x000107c61578(uVar22,2);
      }
      if (lVar21 < lVar19) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a00);
        (*pcVar11)();
      }
      func_0x000107c61174(param_6);
      uVar20 = uVar18;
      func_0x000107c6157c();
      func_0x000107c5ec30();
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a18);
        (*pcVar11)();
      }
      uVar22 = uVar20;
      func_0x000107c5ec3c();
      lVar21 = lVar19 - uVar22;
      if (SBORROW8(lVar19,uVar22)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a04);
        (*pcVar11)();
      }
      func_0x000107c5ec38();
      func_0x000107c608bc();
      puVar15 = (undefined1 *)(uVar20 + lVar21);
      func_0x000107c608a0(puVar15,param_2,param_3,8,param_4,uVar22,param_5 & 0xffffffff);
      func_0x000107c61170(uVar22);
      if (puVar15 == (undefined1 *)0x0) {
        func_0x000107c61574(uVar18);
        puVar14 = param_6;
      }
      else {
        func_0x000107c5ff40(0,0,(double)param_2,(double)param_3,param_6,0);
        func_0x000107c61574(uVar18);
        func_0x000107c61170(param_6);
        puVar14 = puVar15;
      }
      func_0x000107c61170(puVar14);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_6);
      uVar18 = uVar18 | 0x4000000000000000;
      *param_1 = lVar13;
LAB_103ad59b4:
      bVar12 = puVar15 != (undefined1 *)0x0;
      param_1[1] = uVar18;
    }
  }
  else {
    if (uVar17 == 2) {
      uVar20 = uVar18 & 0x3fffffffffffffff;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x00010006c00c(lVar13,uVar18);
      func_0x00010006c090(lVar13,uVar18);
      uStack_70 = (undefined1)uVar20;
      uStack_6f = (undefined1)(uVar20 >> 8);
      uStack_6e = (undefined1)(uVar20 >> 0x10);
      uStack_6d = (undefined1)(uVar20 >> 0x18);
      uStack_6c = (undefined1)(uVar20 >> 0x20);
      uStack_6b = (undefined1)(uVar20 >> 0x28);
      uStack_6a = (undefined1)(uVar20 >> 0x30);
      uStack_69 = (undefined1)(uVar20 >> 0x38);
      param_1[1] = -0x4000000000000000;
      *param_1 = 0;
      uStack_78 = uVar1;
      uStack_77 = uVar2;
      uStack_76 = uVar3;
      uStack_75 = uVar4;
      uStack_74 = uVar5;
      uStack_73 = uVar6;
      uStack_72 = uVar7;
      uStack_71 = uVar8;
      func_0x00010006c090(0,0xc000000000000000);
      func_0x000107c5ede4();
      lVar13 = CONCAT17(uStack_71,
                        CONCAT16(uStack_72,
                                 CONCAT15(uStack_73,
                                          CONCAT14(uStack_74,
                                                   CONCAT13(uStack_75,
                                                            CONCAT12(uStack_76,
                                                                     CONCAT11(uStack_77,uStack_78)))
                                                  ))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(uStack_6a,
                                 CONCAT15(uStack_6b,
                                          CONCAT14(uStack_6c,
                                                   CONCAT13(uStack_6d,
                                                            CONCAT12(uStack_6e,
                                                                     CONCAT11(uStack_6f,uStack_70)))
                                                  ))));
      lVar19 = *(long *)(lVar13 + 0x10);
      func_0x000107c61174();
      puVar15 = param_6;
      func_0x000107c5ec30();
      if (puVar15 == (undefined1 *)0x0) goto LAB_103ad5a10;
      puVar14 = puVar15;
      func_0x000107c5ec3c();
      lVar21 = lVar19 - (long)puVar14;
      if (SBORROW8(lVar19,(long)puVar14)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad59fc);
        (*pcVar11)();
      }
      func_0x000107c5ec38();
      func_0x000107c608bc();
      puVar15 = puVar15 + lVar21;
      func_0x000107c608a0(puVar15,param_2,param_3,8,param_4,puVar14,param_5 & 0xffffffff);
      func_0x000107c61170(puVar14);
      puVar14 = param_6;
      if (puVar15 != (undefined1 *)0x0) {
        func_0x000107c5ff40(0,0,(double)param_2,(double)param_3,param_6,0);
        func_0x000107c61170(param_6);
        puVar14 = puVar15;
      }
      func_0x000107c61170(param_6);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(param_6);
      uVar18 = uVar18 | 0x8000000000000000;
      *param_1 = lVar13;
      goto LAB_103ad59b4;
    }
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6b = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    func_0x000107c61174(param_6);
    func_0x000107c61174();
    puVar14 = param_6;
    func_0x000107c608bc();
    puVar15 = &uStack_78;
    func_0x000107c608a0(puVar15,param_2,param_3,8,param_4,puVar14,param_5);
    func_0x000107c61170(puVar14);
    bVar12 = puVar15 != (undefined1 *)0x0;
    puVar14 = param_6;
    if (puVar15 != (undefined1 *)0x0) {
      func_0x000107c5ff40(0,0,(double)param_2,(double)param_3,param_6,0);
      func_0x000107c61170(param_6);
      puVar14 = puVar15;
    }
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar14);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar12;
  }
  func_0x000107c60e78();
LAB_103ad5a10:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x103ad5a14);
  (*pcVar11)();
}



/* Entry: 103ad5a18; end: 103ad5d47;  */

void FUN_103ad5a18(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_90;
  char *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar2 = 0;
  func_0x000103ad5fa4(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c614e8();
  func_0x000107c415a4();
  func_0x000107c61180();
  func_0x000107c58bfc(0x3ff0000000000000);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8();
  func_0x000107c486fc(0x4040000000000000,0x4040000000000000);
  puVar4 = &UNK_1106cd178;
  func_0x000107c613fc(&UNK_1106cd178,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103ad3bac;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  uStack_70 = 0x103ad5f44;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = (char *)0x42000000;
  puStack_80 = &UNK_100f9148c;
  puStack_78 = &UNK_1106cd190;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar3;
  func_0x000107c45138();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  pcVar11 = "";
  puVar7 = puVar4;
  func_0x000107c61544(puVar4,"",0x7b,0x169,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad5d40);
    (*pcVar1)();
  }
  puVar4 = puVar6;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar2);
  }
  else {
    puVar7 = puVar6;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c61170(puVar4);
    }
    else {
      puVar13 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      uVar8 = 0;
      puVar10 = puVar13;
      func_0x000107c5ee24(0,puVar13,pcVar11);
      func_0x00010006c090(puVar13);
      puVar7 = puVar4;
      func_0x000107c60980();
      puVar13 = puVar4;
      func_0x000107c6097c();
      if ((ulong)(puVar7 + -0x2000000000000000) >> 0x3e < 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad5d44);
        (*pcVar1)();
      }
      lVar12 = (long)puVar7 * 4;
      puVar9 = (undefined *)(lVar12 * (long)puVar13);
      if (SUB168(SEXT816(lVar12) * SEXT816((long)puVar13),8) != (long)puVar9 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad5d48);
        (*pcVar1)();
      }
      func_0x000100076320();
      puStack_90 = puVar9;
      pcStack_88 = pcVar11;
      func_0x000107c61174();
      ppuVar5 = &puStack_90;
      FUN_103ad546c(ppuVar5,puVar7,puVar13,lVar12,0x4001,puVar4);
      func_0x000107c61170(puVar4);
      pcVar11 = pcStack_88;
      puVar7 = puStack_90;
      if (((ulong)ppuVar5 & 1) != 0) {
        puVar13 = puVar4;
        func_0x000107c60980();
        puVar9 = puVar4;
        func_0x000107c6097c();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar2);
        goto LAB_103ad5d10;
      }
      func_0x00010006c090(puStack_90,pcStack_88);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(puVar10);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar2);
  }
  puVar7 = (undefined *)0x0;
  uVar8 = 0;
  puVar10 = (undefined *)0x0;
  pcVar11 = (char *)0x0;
  puVar13 = (undefined *)0x0;
  puVar9 = (undefined *)0x0;
LAB_103ad5d10:
  *param_1 = uVar8;
  param_1[1] = puVar10;
  param_1[2] = puVar7;
  param_1[3] = pcVar11;
  param_1[4] = puVar13;
  param_1[5] = puVar9;
  return;
}



/* Entry: 103ad5d48; end: 103ad5f2b;  */

undefined * FUN_103ad5d48(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c41208();
    func_0x000107c61180();
    puVar5 = (undefined *)0x0;
    if (param_2 != 0) {
      uVar2 = 0;
      func_0x000103ad5fa4(0,0x112debf10,&PTR_PTR_1126a8528);
      uVar3 = param_2;
      func_0x000107c5fc54(param_2,uVar2);
      func_0x000107c61170(param_2);
      if (uVar3 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar6 = uVar3 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar3) {
          uVar6 = uVar3;
        }
        func_0x000107c60480();
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
      if (uVar6 == 0) {
        func_0x000107c6142c(uVar3);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000101a1bcb0(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ad5f2c);
          (*pcVar1)();
        }
        uVar7 = 0;
        do {
          if ((uVar3 & 0xc000000000000001) == 0) {
            uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
            func_0x000107c61174(uVar4);
            uVar2 = param_1;
          }
          else {
            uVar4 = uVar7;
            FUN_103ad46dc(uVar7,uVar3,&PTR_PTR_1126a8528,0x112debf10);
            uVar2 = param_1;
          }
          func_0x000107c5e9e0();
          uVar8 = uVar2;
          func_0x000107c5e9f0(uVar4);
          uVar9 = uVar8;
          func_0x000107c5e304(uVar4);
          uVar10 = uVar9;
          func_0x000107c44d98(uVar4);
          param_1 = uVar10;
          func_0x000107c61170(uVar4);
          uVar4 = *(ulong *)(puVar5 + 0x10);
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
            func_0x000101a1bcb0(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
          }
          uVar7 = uVar7 + 1;
          *(ulong *)(puVar5 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x20) = uVar2;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x28) = uVar8;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x30) = uVar9;
          *(undefined8 *)(puVar5 + uVar4 * 0x20 + 0x38) = uVar10;
        } while (uVar6 != uVar7);
        func_0x000107c6142c(uVar3);
      }
    }
  }
  return puVar5;
}


