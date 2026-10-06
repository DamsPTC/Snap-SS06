/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102361604; end: 10236164f;  */

void FUN_102361604(undefined8 param_1)

{
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102361650,param_1);
  return;
}



/* Entry: 102361650; end: 1023616c3;  */

void FUN_102361650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4b09c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1023616c4; end: 1023616d3;  */

undefined1  [16] FUN_1023616c4(void)

{
  return ZEXT816(0x1104fa530);
}



/* Entry: 1023616d4; end: 10236171f;  */

void FUN_1023616d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102361720,param_1);
  return;
}



/* Entry: 102361720; end: 102361793;  */

void FUN_102361720(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3f658();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102361794; end: 1023617a3;  */

undefined1  [16] FUN_102361794(void)

{
  return ZEXT816(0x1104fa628);
}



/* Entry: 1023617a4; end: 102361847;  */

void FUN_1023617a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  puVar1 = &UNK_1104fa720;
  func_0x000107c613fc(&UNK_1104fa720,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102361848,puVar1);
  return;
}



/* Entry: 102361848; end: 10236197f;  */

void FUN_102361848(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  lVar1 = lStack_58;
  func_0x000107c4ad1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    puVar4 = PTR_PTR_1126afee0;
    func_0x000107c61168(PTR_PTR_1126afee0);
    lVar2 = lVar1;
    func_0x000107c6148c(lVar1,puVar4);
    if (lVar2 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000100083b20(&uStack_60);
      func_0x000100083b20(&uStack_68);
      uVar3 = uStack_68;
      func_0x000107c3ce84(uStack_68);
      func_0x000107c61180();
      func_0x000107c61170(uStack_68);
      puVar4 = PTR_PTR_1126aa6b8;
      func_0x000107c610f8();
      func_0x000107c48ddc();
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(uStack_60);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_58);
      goto LAB_102361960;
    }
    func_0x000107c615e8(lVar1);
  }
  puVar4 = (undefined *)0x0;
LAB_102361960:
  *param_1 = puVar4;
  return;
}



/* Entry: 102361980; end: 10236198f;  */

undefined1  [16] FUN_102361980(void)

{
  return ZEXT816(0x1104fa748);
}



/* Entry: 102361990; end: 1023619db;  */

void FUN_102361990(undefined8 param_1)

{
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1023619dc,param_1);
  return;
}



/* Entry: 1023619dc; end: 102361a4f;  */

void FUN_1023619dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c508f4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102361a50; end: 102361a5f;  */

undefined1  [16] FUN_102361a50(void)

{
  return ZEXT816(0x1104fa840);
}



/* Entry: 102361a60; end: 102361aab;  */

void FUN_102361a60(undefined8 param_1)

{
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102361aac,param_1);
  return;
}



/* Entry: 102361aac; end: 102361b1f;  */

void FUN_102361aac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5186c();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102361b20; end: 102361b2f;  */

undefined1  [16] FUN_102361b20(void)

{
  return ZEXT816(0x1104fa938);
}



/* Entry: 102361b30; end: 102361b7b;  */

void FUN_102361b30(undefined8 param_1)

{
  func_0x0001000285a8(0x112e869c0,&UNK_10da98530);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102361b7c,param_1);
  return;
}



/* Entry: 102361b7c; end: 102361c2b;  */

void FUN_102361b7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c5c4a4();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c5c49c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102361c2c; end: 102361c3b;  */

undefined1  [16] FUN_102361c2c(void)

{
  return ZEXT816(0x1104faa30);
}



/* Entry: 102361c3c; end: 1023625ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102361c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_10236c470();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_14;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_15;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_16;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_17;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_18;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_19;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_20;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_21;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_22;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_23;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_24;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_25;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_26;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_27;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_28;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_29;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_30;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_31;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_32;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_33;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_34;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_35;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112e86a68) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e86a70) = param_36;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(param_33);
    func_0x000107c61170(param_34);
    func_0x000107c61170(param_35);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023625ac);
  (*pcVar2)();
}



/* Entry: 1023625ac; end: 10236260b; -[_TtC23PreviewScopeGraphBridge38PreviewScopeGraphBridgeSaberEntryPoint init] */

void FUN_1023625ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.PreviewScopeGraphBridgeSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023625d8);
  (*pcVar1)();
}



/* Entry: 10236260c; end: 102362643; -[_TtC23PreviewScopeGraphBridge38PreviewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102362628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010236262c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10236260c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86a68));
  return;
}



/* Entry: 102362644; end: 10236266b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362644(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e86a70),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e86a68));
  return;
}



/* Entry: 10236266c; end: 10236268b;  */

void FUN_10236266c(void)

{
  func_0x000107c61168(&PTR_PTR_1128348e0);
  return;
}



/* Entry: 10236268c; end: 102362727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10236268c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c060);
  *(undefined8 *)(unaff_x20 + _DAT_112e86aa0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86aa8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102362728; end: 102362787; -[_TtC23PreviewScopeGraphBridge36AIFontsGatingServicesSaberEntryPoint init] */

void FUN_102362728(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.AIFontsGatingServicesSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102362754);
  (*pcVar1)();
}



/* Entry: 102362788; end: 10236281b; -[_TtC23PreviewScopeGraphBridge36AIFontsGatingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362788(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86aa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86aa8));
  return;
}



/* Entry: 10236281c; end: 102362823;  */

undefined8 FUN_10236281c(void)

{
  return 0;
}



/* Entry: 102362824; end: 102362843;  */

void FUN_102362824(void)

{
  func_0x000107c61168(&PTR_PTR_1128349a8);
  return;
}



/* Entry: 102362844; end: 1023628df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102362844(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c090);
  *(undefined8 *)(unaff_x20 + _DAT_112e86ad8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86ae0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1023628e0; end: 10236293f; -[_TtC23PreviewScopeGraphBridge46PreviewARBarIntegrationServicesSaberEntryPoint init] */

void FUN_1023628e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.PreviewARBarIntegrationServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10236290c);
  (*pcVar1)();
}



/* Entry: 102362940; end: 1023629d3; -[_TtC23PreviewScopeGraphBridge46PreviewARBarIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362940(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86ad8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86ae0));
  return;
}



/* Entry: 1023629d4; end: 1023629db;  */

undefined8 FUN_1023629d4(void)

{
  return 0;
}



/* Entry: 1023629dc; end: 1023629fb;  */

void FUN_1023629dc(void)

{
  func_0x000107c61168(&PTR_PTR_112834a70);
  return;
}



/* Entry: 1023629fc; end: 102362a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1023629fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c0c0);
  *(undefined8 *)(unaff_x20 + _DAT_112e86b10) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86b18) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102362a98; end: 102362af7; -[_TtC23PreviewScopeGraphBridge54PreviewFilterLoggingIntegrationServicesSaberEntryPoint init] */

void FUN_102362a98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.PreviewFilterLoggingIntegrationServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102362ac4);
  (*pcVar1)();
}



/* Entry: 102362af8; end: 102362b8b; -[_TtC23PreviewScopeGraphBridge54PreviewFilterLoggingIntegrationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362af8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86b10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86b18));
  return;
}



/* Entry: 102362b8c; end: 102362b93;  */

undefined8 FUN_102362b8c(void)

{
  return 0;
}



/* Entry: 102362b94; end: 102362bb3;  */

void FUN_102362b94(void)

{
  func_0x000107c61168(&PTR_PTR_112834b38);
  return;
}



/* Entry: 102362bb4; end: 102362c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102362bb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c0c8);
  *(undefined8 *)(unaff_x20 + _DAT_112e86b48) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86b50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102362c50; end: 102362caf; -[_TtC23PreviewScopeGraphBridge43PreviewFilterLoggingServicesSaberEntryPoint init] */

void FUN_102362c50(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.PreviewFilterLoggingServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102362c7c);
  (*pcVar1)();
}



/* Entry: 102362cb0; end: 102362d43; -[_TtC23PreviewScopeGraphBridge43PreviewFilterLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362cb0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86b48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86b50));
  return;
}



/* Entry: 102362d44; end: 102362d4b;  */

undefined8 FUN_102362d44(void)

{
  return 0;
}



/* Entry: 102362d4c; end: 102362d6b;  */

void FUN_102362d4c(void)

{
  func_0x000107c61168(&PTR_PTR_112834c00);
  return;
}



/* Entry: 102362d6c; end: 102362e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102362d6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c160);
  *(undefined8 *)(unaff_x20 + _DAT_112e86b80) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86b88) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102362e08; end: 102362e67; -[_TtC23PreviewScopeGraphBridge37SCMagicCaptionServicesSaberEntryPoint init] */

void FUN_102362e08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCMagicCaptionServicesSaberEntryPoint",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102362e34);
  (*pcVar1)();
}



/* Entry: 102362e68; end: 102362efb; -[_TtC23PreviewScopeGraphBridge37SCMagicCaptionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102362e68(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86b80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86b88));
  return;
}



/* Entry: 102362efc; end: 102362f03;  */

undefined8 FUN_102362efc(void)

{
  return 0;
}



/* Entry: 102362f04; end: 102362f23;  */

void FUN_102362f04(void)

{
  func_0x000107c61168(&PTR_PTR_112834cc8);
  return;
}



/* Entry: 102362f24; end: 102362fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102362f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c1b0);
  *(undefined8 *)(unaff_x20 + _DAT_112e86bb8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86bc0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102362fc0; end: 10236301f; -[_TtC23PreviewScopeGraphBridge45SCPreviewCommonLoggingServicesSaberEntryPoint init] */

void FUN_102362fc0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewCommonLoggingServicesSaberEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102362fec);
  (*pcVar1)();
}



/* Entry: 102363020; end: 1023630b3; -[_TtC23PreviewScopeGraphBridge45SCPreviewCommonLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363020(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86bb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86bc0));
  return;
}



/* Entry: 1023630b4; end: 1023630bb;  */

undefined8 FUN_1023630b4(void)

{
  return 0;
}



/* Entry: 1023630bc; end: 1023630db;  */

void FUN_1023630bc(void)

{
  func_0x000107c61168(&PTR_PTR_112834d90);
  return;
}



/* Entry: 1023630dc; end: 102363177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1023630dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c1d8);
  *(undefined8 *)(unaff_x20 + _DAT_112e86bf0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86bf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363178; end: 1023631d7; -[_TtC23PreviewScopeGraphBridge52SCPreviewFeatureAudioPlaybackServicesSaberEntryPoint init] */

void FUN_102363178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewFeatureAudioPlaybackServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023631a4);
  (*pcVar1)();
}



/* Entry: 1023631d8; end: 10236326b; -[_TtC23PreviewScopeGraphBridge52SCPreviewFeatureAudioPlaybackServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023631d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86bf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86bf8));
  return;
}



/* Entry: 10236326c; end: 102363273;  */

undefined8 FUN_10236326c(void)

{
  return 0;
}



/* Entry: 102363274; end: 102363293;  */

void FUN_102363274(void)

{
  func_0x000107c61168(&PTR_PTR_112834e58);
  return;
}



/* Entry: 102363294; end: 10236332f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363294(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c240);
  *(undefined8 *)(unaff_x20 + _DAT_112e86c28) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86c30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363330; end: 10236338f; -[_TtC23PreviewScopeGraphBridge56SCPreviewFeatureDialogCoordinatorServicesSaberEntryPoint init] */

void FUN_102363330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewFeatureDialogCoordinatorServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10236335c);
  (*pcVar1)();
}



/* Entry: 102363390; end: 102363423; -[_TtC23PreviewScopeGraphBridge56SCPreviewFeatureDialogCoordinatorServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363390(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86c28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86c30));
  return;
}



/* Entry: 102363424; end: 10236342b;  */

undefined8 FUN_102363424(void)

{
  return 0;
}



/* Entry: 10236342c; end: 10236344b;  */

void FUN_10236342c(void)

{
  func_0x000107c61168(&PTR_PTR_112834f20);
  return;
}



/* Entry: 10236344c; end: 1023634e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10236344c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c280);
  *(undefined8 *)(unaff_x20 + _DAT_112e86c60) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86c68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1023634e8; end: 102363547; -[_TtC23PreviewScopeGraphBridge49SCPreviewFeatureMagicToolsServicesSaberEntryPoint init] */

void FUN_1023634e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewFeatureMagicToolsServicesSaberEntryPoint",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363514);
  (*pcVar1)();
}



/* Entry: 102363548; end: 1023635db; -[_TtC23PreviewScopeGraphBridge49SCPreviewFeatureMagicToolsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363548(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86c60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86c68));
  return;
}



/* Entry: 1023635dc; end: 1023635e3;  */

undefined8 FUN_1023635dc(void)

{
  return 0;
}



/* Entry: 1023635e4; end: 102363603;  */

void FUN_1023635e4(void)

{
  func_0x000107c61168(&PTR_PTR_112834fe8);
  return;
}



/* Entry: 102363604; end: 10236369f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363604(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c2b0);
  *(undefined8 *)(unaff_x20 + _DAT_112e86c98) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86ca0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1023636a0; end: 1023636ff; -[_TtC23PreviewScopeGraphBridge51SCPreviewFeaturePreselectionServicesSaberEntryPoint init] */

void FUN_1023636a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewFeaturePreselectionServicesSaberEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023636cc);
  (*pcVar1)();
}



/* Entry: 102363700; end: 102363793; -[_TtC23PreviewScopeGraphBridge51SCPreviewFeaturePreselectionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363700(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86c98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86ca0));
  return;
}



/* Entry: 102363794; end: 10236379b;  */

undefined8 FUN_102363794(void)

{
  return 0;
}



/* Entry: 10236379c; end: 1023637bb;  */

void FUN_10236379c(void)

{
  func_0x000107c61168(&PTR_PTR_1128350b0);
  return;
}



/* Entry: 1023637bc; end: 102363857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1023637bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c3a8);
  *(undefined8 *)(unaff_x20 + _DAT_112e86cd0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86cd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363858; end: 1023638b7; -[_TtC23PreviewScopeGraphBridge43SCPreviewImagineLensServicesSaberEntryPoint init] */

void FUN_102363858(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewImagineLensServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363884);
  (*pcVar1)();
}



/* Entry: 1023638b8; end: 10236394b; -[_TtC23PreviewScopeGraphBridge43SCPreviewImagineLensServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023638b8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86cd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86cd8));
  return;
}



/* Entry: 10236394c; end: 102363953;  */

undefined8 FUN_10236394c(void)

{
  return 0;
}



/* Entry: 102363954; end: 102363973;  */

void FUN_102363954(void)

{
  func_0x000107c61168(&PTR_PTR_112835178);
  return;
}



/* Entry: 102363974; end: 102363a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363974(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c3b8);
  *(undefined8 *)(unaff_x20 + _DAT_112e86d08) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86d10) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363a10; end: 102363a6f; -[_TtC23PreviewScopeGraphBridge44SCPreviewLocationInfoServicesSaberEntryPoint init] */

void FUN_102363a10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewLocationInfoServicesSaberEntryPoint",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363a3c);
  (*pcVar1)();
}



/* Entry: 102363a70; end: 102363b03; -[_TtC23PreviewScopeGraphBridge44SCPreviewLocationInfoServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363a70(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86d08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86d10));
  return;
}



/* Entry: 102363b04; end: 102363b0b;  */

undefined8 FUN_102363b04(void)

{
  return 0;
}



/* Entry: 102363b0c; end: 102363b2b;  */

void FUN_102363b0c(void)

{
  func_0x000107c61168(&PTR_PTR_112835240);
  return;
}



/* Entry: 102363b2c; end: 102363bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363b2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c3c0);
  *(undefined8 *)(unaff_x20 + _DAT_112e86d40) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86d48) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363bc8; end: 102363c27; -[_TtC23PreviewScopeGraphBridge39SCPreviewLoggingServicesSaberEntryPoint init] */

void FUN_102363bc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewLoggingServicesSaberEntryPoint",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363bf4);
  (*pcVar1)();
}



/* Entry: 102363c28; end: 102363cbb; -[_TtC23PreviewScopeGraphBridge39SCPreviewLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363c28(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86d40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86d48));
  return;
}



/* Entry: 102363cbc; end: 102363cc3;  */

undefined8 FUN_102363cbc(void)

{
  return 0;
}



/* Entry: 102363cc4; end: 102363ce3;  */

void FUN_102363cc4(void)

{
  func_0x000107c61168(&PTR_PTR_112835308);
  return;
}



/* Entry: 102363ce4; end: 102363d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363ce4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c3d0);
  *(undefined8 *)(unaff_x20 + _DAT_112e86d78) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86d80) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363d80; end: 102363ddf; -[_TtC23PreviewScopeGraphBridge43SCPreviewScopedARBarServicesSaberEntryPoint init] */

void FUN_102363d80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewScopedARBarServicesSaberEntryPoint",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363dac);
  (*pcVar1)();
}



/* Entry: 102363de0; end: 102363e73; -[_TtC23PreviewScopeGraphBridge43SCPreviewScopedARBarServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363de0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86d78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86d80));
  return;
}



/* Entry: 102363e74; end: 102363e7b;  */

undefined8 FUN_102363e74(void)

{
  return 0;
}



/* Entry: 102363e7c; end: 102363e9b;  */

void FUN_102363e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128353d0);
  return;
}



/* Entry: 102363e9c; end: 102363f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102363e9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c3e8);
  *(undefined8 *)(unaff_x20 + _DAT_112e86db0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86db8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102363f38; end: 102363f97; -[_TtC23PreviewScopeGraphBridge53SCPreviewScopedLensCTAHandlingServicesSaberEntryPoint init] */

void FUN_102363f38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewScopedLensCTAHandlingServicesSaberEntryPoint"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102363f64);
  (*pcVar1)();
}



/* Entry: 102363f98; end: 10236402b; -[_TtC23PreviewScopeGraphBridge53SCPreviewScopedLensCTAHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102363f98(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e86db0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e86db8));
  return;
}



/* Entry: 10236402c; end: 102364033;  */

undefined8 FUN_10236402c(void)

{
  return 0;
}



/* Entry: 102364034; end: 102364053;  */

void FUN_102364034(void)

{
  func_0x000107c61168(&PTR_PTR_112835498);
  return;
}



/* Entry: 102364054; end: 1023640ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102364054(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e8c410);
  *(undefined8 *)(unaff_x20 + _DAT_112e86de8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e86df0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1023640f0; end: 10236414f; -[_TtC23PreviewScopeGraphBridge60SCPreviewScopedLensCarouselManagementServicesSaberEntryPoint init] */

void FUN_1023640f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewScopeGraphBridge.SCPreviewScopedLensCarouselManagementServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10236411c);
  (*pcVar1)();
}


