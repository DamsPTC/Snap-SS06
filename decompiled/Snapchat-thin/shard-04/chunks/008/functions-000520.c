/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038b8260; end: 1038b83ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b8260(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa93f8;
  func_0x000107c61428(unaff_x20 + _DAT_112fa93f8,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038b83ac; end: 1038b83f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b83ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112fa9428;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1038b83f8; end: 1038b855f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b83f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112fa9428;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1038b8560; end: 1038b86a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b8560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa93f8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa93f8,0);
  lVar1 = unaff_x20 + _DAT_112fa9428;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9400);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9408) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9410) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9420) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9430);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9438) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9440) = 0;
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 1038b86a4; end: 1038b86d3;  */

undefined8 FUN_1038b86a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1038b8e38();
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 1038b86d4; end: 1038b8767; -[_TtC26MapLocationSearchTrayScope26MapLocationSearchTrayScope initWithDelegate:viewportBounds:searchType:uiContainer:] */

undefined8
FUN_1038b86d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_9);
  uVar1 = param_7;
  FUN_1038b8e38(param_1,param_2,param_3,param_4,param_7,param_8,param_9);
  func_0x000107c615e8(param_7);
  return uVar1;
}



/* Entry: 1038b8768; end: 1038b8a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b8768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_88 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112fa93f8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa93f8,0);
  lVar1 = unaff_x20 + _DAT_112fa9428;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_88,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9400);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9408) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9410) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9418) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9420) = param_9;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9430);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9438) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9440) = 0;
  puVar4 = auStack_98;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_5);
  return puVar4;
}



/* Entry: 1038b8a08; end: 1038b8d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038b8a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112fa93f8,0);
  lVar1 = unaff_x20 + _DAT_112fa9428;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61428();
  *(undefined8 *)(lVar1 + 8) = param_6;
  func_0x000107c61604(lVar1,param_5);
  uVar4 = param_10;
  func_0x000107c4c458(param_10);
  func_0x000107c61180();
  func_0x000107c5dfdc();
  func_0x000107c615e8(uVar4);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9400);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9408) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9410) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9420) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9430);
  *puVar2 = param_8;
  puVar2[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9438) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9440) = param_11;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_10);
  puVar5 = auStack_a8;
  func_0x000107c61154(puVar5,puVar3);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_5);
  return puVar5;
}



/* Entry: 1038b8d44; end: 1038b8d9f; -[_TtC26MapLocationSearchTrayScope26MapLocationSearchTrayScope init] */

void FUN_1038b8d44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayScope.MapLocationSearchTrayScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b8d70);
  (*pcVar1)();
}



/* Entry: 1038b8da0; end: 1038b8e27; -[_TtC26MapLocationSearchTrayScope26MapLocationSearchTrayScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038b8ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038b8de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b8da0(long param_1)

{
  func_0x000100d61f04(param_1 + _DAT_112fa93f8);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fa9410));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9420));
  return;
}



/* Entry: 1038b8e28; end: 1038b8e37;  */

undefined1  [16] FUN_1038b8e28(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1038b8e38; end: 1038b8f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b8e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112fa93f8;
  func_0x000107c61614(unaff_x20 + _DAT_112fa93f8,0);
  lVar1 = unaff_x20 + _DAT_112fa9428;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9400);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9408) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9410) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fa9418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9420) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fa9430);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9438) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9440) = 0;
  func_0x00010037ef84();
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b8f64; end: 1038b8f67;  */

void FUN_1038b8f64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b7d0;
  func_0x000107c61520(&UNK_10dc1b7d0,&UNK_1106a3eb0);
  puRam0000000112fa9448 = puVar1;
  return;
}



/* Entry: 1038b8f68; end: 1038b8fa7;  */

void FUN_1038b8f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa9448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b7d0;
  func_0x000107c61520(&UNK_10dc1b7d0,&UNK_1106a3eb0);
  puRam0000000112fa9448 = puVar1;
  return;
}



/* Entry: 1038b8fa8; end: 1038b8fb7;  */

undefined1  [16] FUN_1038b8fa8(void)

{
  return ZEXT816(0x1106a3eb0);
}



/* Entry: 1038b8fb8; end: 1038b8fc7; -[_TtC19MapChromeV2Services19MapChromeV2Services mapChromeV2Provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b8fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa9478));
  return;
}



/* Entry: 1038b8fc8; end: 1038b905f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b8fc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9478) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b9060; end: 1038b90b7; -[_TtC19MapChromeV2Services19MapChromeV2Services initWithMapChromeV2Provider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b9060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa9478) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038b90b8; end: 1038b9117; -[_TtC19MapChromeV2Services19MapChromeV2Services init] */

void FUN_1038b90b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2Services.MapChromeV2Services",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038b90e4);
  (*pcVar1)();
}



/* Entry: 1038b9118; end: 1038b9127; -[_TtC19MapChromeV2Services19MapChromeV2Services .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b9118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa9478));
  return;
}



/* Entry: 1038b9128; end: 1038b9147;  */

void FUN_1038b9128(void)

{
  func_0x000107c61168(&PTR_PTR_1128fab10);
  return;
}



/* Entry: 1038b9148; end: 1038b915b;  */

bool FUN_1038b9148(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1038b915c; end: 1038b9233;  */

void FUN_1038b915c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1038b9234; end: 1038b923f;  */

void FUN_1038b9234(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1038b9240; end: 1038b9247; +[SCMapChromeV2Components none] */

undefined8 FUN_1038b9240(void)

{
  return 1;
}



/* Entry: 1038b9248; end: 1038b924f; +[SCMapChromeV2Components locality] */

undefined8 FUN_1038b9248(void)

{
  return 2;
}



/* Entry: 1038b9250; end: 1038b9257; +[SCMapChromeV2Components placePivots] */

undefined8 FUN_1038b9250(void)

{
  return 4;
}



/* Entry: 1038b9258; end: 1038b925f; +[SCMapChromeV2Components sidebar] */

undefined8 FUN_1038b9258(void)

{
  return 8;
}



/* Entry: 1038b9260; end: 1038b9267; +[SCMapChromeV2Components activityTicker] */

undefined8 FUN_1038b9260(void)

{
  return 0x10;
}



/* Entry: 1038b9268; end: 1038b926f; +[SCMapChromeV2Components weather] */

undefined8 FUN_1038b9268(void)

{
  return 0x20;
}



/* Entry: 1038b9270; end: 1038b9277; +[SCMapChromeV2Components friendFooter] */

undefined8 FUN_1038b9270(void)

{
  return 0x40;
}



/* Entry: 1038b9278; end: 1038b927f; +[SCMapChromeV2Components profileButton] */

undefined8 FUN_1038b9278(void)

{
  return 0x80;
}



/* Entry: 1038b9280; end: 1038b9287; +[SCMapChromeV2Components all] */

undefined8 FUN_1038b9280(void)

{
  return 0xfe;
}



/* Entry: 1038b9288; end: 1038b92c3; -[SCMapChromeV2Components init] */

void FUN_1038b9288(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1038b97e4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b92c4; end: 1038b92f3;  */

void FUN_1038b92c4(void)

{
  FUN_1038b97e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038b92f4; end: 1038b969b;  */

undefined * FUN_1038b92f4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_PTR_113184b20;
  puVar2 = PTR_PTR_113184b18;
  puVar8 = PTR_PTR_113184b10;
  puVar7 = PTR_PTR_113184b08;
  puVar9 = PTR_PTR_113184b00;
  uStack_b0 = 2;
  puStack_a8 = PTR_PTR_113184af8;
  uStack_a0 = 4;
  puStack_98 = PTR_PTR_113184b00;
  uStack_90 = 8;
  puStack_88 = PTR_PTR_113184b08;
  uStack_80 = 0x10;
  puStack_78 = PTR_PTR_113184b10;
  uStack_70 = 0x20;
  puStack_68 = PTR_PTR_113184b20;
  uStack_60 = 0x40;
  puStack_58 = PTR_PTR_113184b18;
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar2);
  uVar12 = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar6 = uVar12;
    if (uVar12 < 7) {
      uVar6 = 6;
    }
    puVar4 = &uStack_b0 + uVar12 * 2;
    do {
      puVar11 = puVar4;
      if (uVar12 == 6) {
        uVar10 = 0x112fa94a8;
        func_0x0001000285a8(0x112fa94a8,&UNK_10dc1b8d8);
        func_0x000107c61408(&uStack_b0,6,uVar10);
        return puVar9;
      }
      uVar12 = uVar12 + 1;
      if (uVar6 + 1 == uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038b94c8);
        (*pcVar5)();
      }
      puVar4 = puVar11 + 2;
    } while ((*puVar11 & param_1) == 0);
    uVar6 = puVar11[1];
    func_0x000107c61174();
    puVar7 = puVar9;
    func_0x000107c61558();
    puVar8 = puVar9;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_1038b96b0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1038b96b0(puVar9,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar9 + uVar1 * 8 + 0x20) = uVar6;
  } while( true );
}



/* Entry: 1038b969c; end: 1038b96a3; +[SCMapChromeV2Components headerComponents] */

undefined8 FUN_1038b969c(void)

{
  return 0x86;
}



/* Entry: 1038b96a4; end: 1038b96af; +[SCMapChromeV2Components componentsExcluding:] */

uint FUN_1038b96a4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return ~param_3 & 0xfe;
}



/* Entry: 1038b96b0; end: 1038b97d3;  */

undefined * FUN_1038b96b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038b97d4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112eb00a8;
    func_0x0001000285a8(0x112eb00a8,&UNK_10dac4220);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001026027dc(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1038b97d4; end: 1038b97e3;  */

undefined1  [16] FUN_1038b97d4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1038b97e4; end: 1038b9803;  */

void FUN_1038b97e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128fabd0);
  return;
}



/* Entry: 1038b9804; end: 1038b9807;  */

void FUN_1038b9804(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa94b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b8e0;
  func_0x000107c61520(&UNK_10dc1b8e0,&UNK_1106a3fb0);
  puRam0000000112fa94b0 = puVar1;
  return;
}



/* Entry: 1038b9808; end: 1038b9847;  */

void FUN_1038b9808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa94b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b8e0;
  func_0x000107c61520(&UNK_10dc1b8e0,&UNK_1106a3fb0);
  puRam0000000112fa94b0 = puVar1;
  return;
}



/* Entry: 1038b9848; end: 1038b9857;  */

undefined1  [16] FUN_1038b9848(void)

{
  return ZEXT816(0x1106a3fb0);
}



/* Entry: 1038b9858; end: 1038b9aa3;  */

long FUN_1038b9858(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1038b9aa4; end: 1038b9b77;  */

void FUN_1038b9aa4(void)

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



/* Entry: 1038b9b78; end: 1038b9b83;  */

void FUN_1038b9b78(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1038b9b84; end: 1038b9c73;  */

void FUN_1038b9b84(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(*(undefined8 *)(&UNK_10dc1bb70 + (ulong)bVar1 * 8));
  func_0x000107c606a8();
  return;
}



/* Entry: 1038b9c74; end: 1038b9cbf;  */

void FUN_1038b9c74(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&UNK_10dc1bb70 + (ulong)*unaff_x20 * 8);
  return;
}



/* Entry: 1038b9cc0; end: 1038b9cff;  */

void FUN_1038b9cc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa94e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1b9e0;
  func_0x000107c61520(&UNK_10dc1b9e0,&UNK_1106a4128);
  puRam0000000112fa94e0 = puVar1;
  return;
}



/* Entry: 1038b9d00; end: 1038b9d03;  */

void FUN_1038b9d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa94e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ba80;
  func_0x000107c61520(&UNK_10dc1ba80,&UNK_1106a41b8);
  puRam0000000112fa94e8 = puVar1;
  return;
}



/* Entry: 1038b9d04; end: 1038b9d43;  */

void FUN_1038b9d04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa94e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1ba80;
  func_0x000107c61520(&UNK_10dc1ba80,&UNK_1106a41b8);
  puRam0000000112fa94e8 = puVar1;
  return;
}



/* Entry: 1038b9d44; end: 1038b9ed3;  */

void FUN_1038b9d44(void)

{
  return;
}



/* Entry: 1038b9ed4; end: 1038b9ee3; -[SCMapChromeV2Frame x] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b9ed4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa94f0);
}



/* Entry: 1038b9ee4; end: 1038b9ef3; -[SCMapChromeV2Frame y] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b9ee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa94f8);
}



/* Entry: 1038b9ef4; end: 1038b9f03; -[SCMapChromeV2Frame width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b9ef4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9500);
}



/* Entry: 1038b9f04; end: 1038b9f13; -[SCMapChromeV2Frame height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038b9f04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9508);
}



/* Entry: 1038b9f14; end: 1038b9f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b9f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa94f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa94f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9500) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9508) = param_4;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038b9f98; end: 1038ba017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038b9f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa94f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa94f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9500) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9508) = param_4;
  func_0x0001038b9ff8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba018; end: 1038ba043; -[SCMapChromeV2Frame init] */

void FUN_1038ba018(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2Services.MapChromeV2Frame",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ba044);
  (*pcVar1)();
}



/* Entry: 1038ba044; end: 1038ba04f;  */

void FUN_1038ba044(void)

{
  (*(code *)0x1038b9ff8)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ba050; end: 1038ba0e7; -[SCMapChromeV2Frames frames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9510);
  func_0x0001038b9ff8();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038ba0e8; end: 1038ba143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba0e8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa9510) = param_1;
  func_0x0001038ba124();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba144; end: 1038ba16f; -[SCMapChromeV2Frames init] */

void FUN_1038ba144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2Services.MapChromeV2Frames",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ba170);
  (*pcVar1)();
}



/* Entry: 1038ba170; end: 1038ba17b;  */

void FUN_1038ba170(void)

{
  (*(code *)0x1038ba124)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ba17c; end: 1038ba1ab;  */

void FUN_1038ba17c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ba1ac; end: 1038ba1bb; -[SCMapChromeV2Frames .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fa9510));
  return;
}



/* Entry: 1038ba1bc; end: 1038ba1cb; -[SCMapChromeV2Insets topLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ba1bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9568);
}



/* Entry: 1038ba1cc; end: 1038ba1db; -[SCMapChromeV2Insets topRight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ba1cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9570);
}



/* Entry: 1038ba1dc; end: 1038ba1eb; -[SCMapChromeV2Insets bottomLeft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ba1dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9578);
}



/* Entry: 1038ba1ec; end: 1038ba1fb; -[SCMapChromeV2Insets bottomRight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ba1ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fa9580);
}



/* Entry: 1038ba1fc; end: 1038ba27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9570) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9578) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9580) = param_4;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba280; end: 1038ba2ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fa9568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9570) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9578) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9580) = param_4;
  func_0x0001038ba2e0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba300; end: 1038ba36b; -[SCMapChromeV2Insets initWithTopLeft:topRight:bottomLeft:bottomRight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_5 + _DAT_112fa9568) = param_1;
  *(undefined8 *)(param_5 + _DAT_112fa9570) = param_2;
  *(undefined8 *)(param_5 + _DAT_112fa9578) = param_3;
  *(undefined8 *)(param_5 + _DAT_112fa9580) = param_4;
  lVar1 = param_5;
  func_0x0001038ba2e0();
  lStack_30 = param_5;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba36c; end: 1038ba3c7; -[SCMapChromeV2Insets init] */

void FUN_1038ba36c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2Services.MapChromeV2Insets",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ba398);
  (*pcVar1)();
}



/* Entry: 1038ba3c8; end: 1038ba3d7; -[_TtC34MapNativeStaticMapFetchingServices34MapNativeStaticMapFetchingServices staticMapFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fa95b0));
  return;
}



/* Entry: 1038ba3d8; end: 1038ba46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba3d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa95b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ba470; end: 1038ba4c7; -[_TtC34MapNativeStaticMapFetchingServices34MapNativeStaticMapFetchingServices initWithStaticMapFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fa95b0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1038ba4c8; end: 1038ba527; -[_TtC34MapNativeStaticMapFetchingServices34MapNativeStaticMapFetchingServices init] */

void FUN_1038ba4c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapNativeStaticMapFetchingServices.MapNativeStaticMapFetchingServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ba4f4);
  (*pcVar1)();
}



/* Entry: 1038ba528; end: 1038ba54b; -[_TtC34MapNativeStaticMapFetchingServices34MapNativeStaticMapFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ba528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa95b0));
  return;
}



/* Entry: 1038ba54c; end: 1038ba5f7;  */

void FUN_1038ba54c(void)

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



/* Entry: 1038ba5f8; end: 1038ba80b;  */

long FUN_1038ba5f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c3ea08();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c424f8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49820();
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 1038ba80c; end: 1038ba80f;  */

void FUN_1038ba80c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1bcc0;
  func_0x000107c61520(&UNK_10dc1bcc0,&UNK_1106a43a8);
  puRam0000000112fa95e0 = puVar1;
  return;
}



/* Entry: 1038ba810; end: 1038ba84f;  */

void FUN_1038ba810(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1bcc0;
  func_0x000107c61520(&UNK_10dc1bcc0,&UNK_1106a43a8);
  puRam0000000112fa95e0 = puVar1;
  return;
}



/* Entry: 1038ba850; end: 1038ba853;  */

void FUN_1038ba850(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1bd68;
  func_0x000107c61520(&UNK_10dc1bd68,&UNK_1106a4438);
  puRam0000000112fa95e8 = puVar1;
  return;
}



/* Entry: 1038ba854; end: 1038ba893;  */

void FUN_1038ba854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1bd68;
  func_0x000107c61520(&UNK_10dc1bd68,&UNK_1106a4438);
  puRam0000000112fa95e8 = puVar1;
  return;
}



/* Entry: 1038ba894; end: 1038baa6b;  */

ulong FUN_1038ba894(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((char)param_1[2] == '\x01') {
    return (ulong)((char)param_2[2] == '\x01' && uVar1 == uVar2);
  }
  if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if (uVar1 != uVar2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(uVar1,param_1[1],uVar2,param_2[1],0);
    return uVar1;
  }
  return 1;
}



/* Entry: 1038baa6c; end: 1038bab07;  */

undefined8 * FUN_1038baa6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101107198(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1038bab08; end: 1038bab4b;  */

undefined8 * FUN_1038bab08(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101107184(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1038bab4c; end: 1038bac17;  */

int FUN_1038bab4c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1038bac18; end: 1038bacc3;  */

void FUN_1038bac18(void)

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



/* Entry: 1038bacc4; end: 1038bacc7;  */

void FUN_1038bacc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1be30;
  func_0x000107c61520(&UNK_10dc1be30,&UNK_1106a4500);
  puRam0000000112fa95f0 = puVar1;
  return;
}



/* Entry: 1038bacc8; end: 1038bad07;  */

void FUN_1038bacc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa95f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc1be30;
  func_0x000107c61520(&UNK_10dc1be30,&UNK_1106a4500);
  puRam0000000112fa95f0 = puVar1;
  return;
}



/* Entry: 1038bad08; end: 1038bae6b;  */

int FUN_1038bad08(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1038bad84;
        goto LAB_1038bad68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1038bad68:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1038bad84:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1038bae6c; end: 1038baf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bae6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa95f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9600) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9608) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa9610) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038baf84; end: 1038bafe3; -[MapReactionServices init] */

void FUN_1038baf84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapReactionServices.MapReactionServices",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038bafb0);
  (*pcVar1)();
}



/* Entry: 1038bafe4; end: 1038bb03b; -[MapReactionServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038bb000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038bb020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038bb004) */
/* WARNING: Removing unreachable block (ram,0x0001038bb024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bafe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa95f8));
  return;
}



/* Entry: 1038bb03c; end: 1038bb05b; -[_TtC34MapWidgetOnboardingFactoryServices34MapWidgetOnboardingFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb03c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fa9640));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038bb05c; end: 1038bb0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038bb05c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa9640) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038bb0f4; end: 1038bb127;  */

void FUN_1038bb0f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


