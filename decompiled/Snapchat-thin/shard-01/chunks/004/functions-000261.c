/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f837ac; end: 100f837e7;  */

undefined8 FUN_100f837ac(undefined8 param_1,undefined8 param_2)

{
  FUN_100f849dc(param_2,param_1);
  return param_2;
}



/* Entry: 100f837e8; end: 100f837ff;  */

void FUN_100f837e8(ulong param_1,char param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_60 = param_1;
  cStack_58 = param_2;
  FUN_100f75b4c();
  uVar1 = 0x112d4f9d0;
  func_0x0001000285a8(0x112d4f9d0,&UNK_10d915998);
  func_0x000107c5f730(&uStack_60,uVar1);
  if (param_2 == '\x02') {
    if ((param_1 & 1) != 0) {
      (**(code **)(unaff_x20 + 0xe8))(0,0);
    }
    (**(code **)(unaff_x20 + 0xd8))();
  }
  return;
}



/* Entry: 100f83800; end: 100f83833;  */

undefined8 FUN_100f83800(undefined8 param_1)

{
  (*(code *)(undefined *)0x100f849a4)();
  return param_1;
}



/* Entry: 100f83834; end: 100f8384b;  */

void FUN_100f83834(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100f8384c; end: 100f8389f;  */

void FUN_100f8384c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f838a0;
  plVar3[8] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[9] = lVar1;
  func_0x000107c5fce8();
  plVar3[10] = lVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  plVar3[0xb] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_100f823f8;
                    /* WARNING: Could not recover jumptable at 0x000100f823f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100f96304();
  return;
}



/* Entry: 100f838a0; end: 100f838db;  */

void FUN_100f838a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f838d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f838dc; end: 100f838ef;  */

void FUN_100f838dc(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100f838f0; end: 100f839c7;  */

void FUN_100f838f0(long *param_1,code *param_2,long param_3)

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



/* Entry: 100f839c8; end: 100f83a07;  */

void FUN_100f839c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fa30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915e34;
  func_0x000107c61520(&UNK_10d915e34,&UNK_1103701a0);
  puRam0000000112d4fa30 = puVar1;
  return;
}



/* Entry: 100f83a08; end: 100f83a9f;  */

void FUN_100f83a08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4fa38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f9e8;
  func_0x00010002969c(0x112d4f9e8,&UNK_10d9159c0);
  uVar2 = 0x112d4fa00;
  func_0x000100f84008(0x112d4fa00,0x112d4f9f8,&UNK_10d9159d0,
                      PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  puStack_28 = PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48;
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112d4fa38 = puVar3;
  return;
}



/* Entry: 100f83aa0; end: 100f83abb;  */

void FUN_100f83aa0(undefined8 param_1,byte param_2)

{
  if (param_2 == 0xff) {
    return;
  }
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 100f83abc; end: 100f83b73;  */

undefined8 FUN_100f83abc(undefined8 param_1,undefined8 param_2)

{
  FUN_100f85a98(param_2,param_1);
  return param_2;
}



/* Entry: 100f83b74; end: 100f83b83;  */

void FUN_100f83b74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  char cStack_41;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar3 = *(undefined1 *)(unaff_x20 + 0xa8);
  uVar4 = 0;
  FUN_100f8b870(0);
  uVar5 = 0x112d4f9e0;
  FUN_100f838f0(0x112d4f9e0,FUN_100f8b870,&UNK_10d916210);
  func_0x000107c5f2b0(uVar6,uVar1,uVar3,uVar4,uVar5);
  puVar7 = &UNK_10d915bc0;
  func_0x000107c614e0(&UNK_10d915bc0);
  puVar8 = &UNK_10d915be8;
  func_0x000107c614e0(&UNK_10d915be8);
  func_0x000107c5f20c(&cStack_41,uVar6,puVar7,puVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar6);
  if (cStack_41 == '\x01') {
    (**(code **)(unaff_x20 + 0x110))();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 200));
    (**(code **)(lVar2 + 0x38))();
    FUN_100f81d0c();
  }
  return;
}



/* Entry: 100f83b84; end: 100f83dc3;  */

void FUN_100f83b84(void)

{
  FUN_100f81738();
  return;
}



/* Entry: 100f83dc4; end: 100f83eb3;  */

void FUN_100f83dc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112d4fb38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fb40;
  func_0x00010002969c(0x112d4fb40,&UNK_10d915b00);
  uVar2 = 0x112d4fb48;
  func_0x00010002969c(0x112d4fb48,&UNK_10d915b08);
  uVar3 = 0x112d4fb50;
  func_0x000100f84008(0x112d4fb50,0x112d4fb48,&UNK_10d915b08,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puVar4 = &uStack_40;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  func_0x000107c614f4(puVar4,PTR___s7SwiftUI4ViewPAAE10fontWeightyQrAA4FontV0E0VSgFQOMQ_110349460,1)
  ;
  uVar2 = 0x112d4fb58;
  func_0x000100f84008(0x112d4fb58,0x112d4fb60,&UNK_10d915b10,
                      PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1103491e8);
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_50 = puVar4;
  uStack_48 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_50);
  puRam0000000112d4fb38 = puVar5;
  return;
}



/* Entry: 100f83eb4; end: 100f83ed7;  */

void FUN_100f83eb4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 != 0) {
    pcVar1 = *(code **)(unaff_x20 + 0xe8);
    lVar2 = param_1;
    func_0x000107c61174();
    (*pcVar1)(0,param_1);
    func_0x000107c61170(lVar2);
  }
  (**(code **)(unaff_x20 + 0xd8))();
  return;
}



/* Entry: 100f83ed8; end: 100f8404b;  */

void FUN_100f83ed8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4fb88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fb78;
  func_0x00010002969c(0x112d4fb78,&UNK_10d916b70);
  uVar2 = uVar1;
  FUN_100f7912c();
  uVar3 = 0x112d4fb90;
  func_0x000100f84008(0x112d4fb90,0x112d4fb98,&UNK_10d916b80,&UNK_10d9166f0);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112d4fb88 = puVar4;
  return;
}



/* Entry: 100f8404c; end: 100f84053;  */

void FUN_100f8404c(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000107c5f6f0();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((uVar4 & 0xc000000000000001) == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f809e4);
      (*pcVar1)();
    }
    if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f809e8);
      (*pcVar1)();
    }
    param_2 = *(ulong *)(uVar4 + param_2 * 8 + 0x20);
    func_0x000107c61174(param_2);
  }
  else {
    FUN_100f95e24(param_2,uVar4);
  }
  func_0x000107c5f6e8();
  (**(code **)(lVar6 + 0x68))
            (puVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738,
             lVar2);
  puVar3 = puVar5;
  func_0x000107c5f6fc(0,0,0,0,puVar5,param_2);
  func_0x000107c61574(param_2);
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100f84054; end: 100f840db;  */

undefined8 FUN_100f84054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100f840dc; end: 100f841d3;  */

void FUN_100f840dc(void)

{
  long unaff_x20;
  
  if (1 < *(ulong *)(unaff_x20 + 0x10)) {
    func_0x000107c6142c();
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  if (*(char *)(unaff_x20 + 0x78) != -1) {
    FUN_100f78e70(*(undefined8 *)(unaff_x20 + 0x70));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  FUN_100f82e54(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined1 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  FUN_100f72e4c(*(undefined8 *)(unaff_x20 + 0x100),*(undefined1 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f841d4; end: 100f841ff;  */

void FUN_100f841d4(undefined8 *param_1)

{
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x17) = 0xff00;
  return;
}



/* Entry: 100f84200; end: 100f84287;  */

undefined8 FUN_100f84200(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100f84288; end: 100f84293;  */

void FUN_100f84288(long param_1)

{
  *(undefined1 *)(param_1 + 0xb9) = 1;
  return;
}



/* Entry: 100f84294; end: 100f8450b;  */

void FUN_100f84294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4fc00 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fbf8;
  func_0x00010002969c(0x112d4fbf8,&UNK_10d915c78);
  uVar2 = uVar1;
  func_0x000100f8430c();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4fc00 = puVar3;
  return;
}



/* Entry: 100f8450c; end: 100f8457b;  */

void FUN_100f8450c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112d4fc38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fc40;
  func_0x00010002969c(0x112d4fc40,&UNK_10d915c90);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_110348d88;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112d4fc38 = puVar2;
  return;
}



/* Entry: 100f8457c; end: 100f84587;  */

void FUN_100f8457c(void)

{
  return;
}



/* Entry: 100f84588; end: 100f8465b;  */

void FUN_100f84588(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112d4fc48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f9a0;
  func_0x00010002969c(0x112d4f9a0,&UNK_10d915968);
  uVar2 = 0x112d4f978;
  func_0x00010002969c(0x112d4f978,&UNK_10d915950);
  uVar3 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  uVar4 = uVar3;
  FUN_100f836f4();
  uVar5 = uVar4;
  FUN_100f790c4();
  puVar6 = &uStack_50;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  uStack_38 = uVar5;
  func_0x000107c614f4(puVar6,
                      PTR___s7SwiftUI4ViewPAAE8onChange2of7initial_Qrqd___Sbyqd___qd__tctSQRd__lFQOMQ_110349670
                      ,1);
  puStack_58 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112d4fc48 = puVar7;
  return;
}



/* Entry: 100f8465c; end: 100f84673;  */

void FUN_100f8465c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  char cStack_41;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar3 = *(undefined1 *)(unaff_x20 + 0xa8);
  uVar4 = 0;
  FUN_100f8b870(0);
  uVar5 = 0x112d4f9e0;
  FUN_100f838f0(0x112d4f9e0,FUN_100f8b870,&UNK_10d916210);
  func_0x000107c5f2b0(uVar6,uVar1,uVar3,uVar4,uVar5);
  puVar7 = &UNK_10d915bc0;
  func_0x000107c614e0(&UNK_10d915bc0);
  puVar8 = &UNK_10d915be8;
  func_0x000107c614e0(&UNK_10d915be8);
  func_0x000107c5f20c(&cStack_41,uVar6,puVar7,puVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(uVar6);
  if (cStack_41 == '\x01') {
    (**(code **)(unaff_x20 + 0x110))();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0xd0);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 200));
    (**(code **)(lVar2 + 0x38))();
    FUN_100f81d0c();
  }
  return;
}



/* Entry: 100f84674; end: 100f846df;  */

undefined8 * FUN_100f84674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f846e0; end: 100f84783;  */

int FUN_100f846e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f84784; end: 100f848df;  */

void FUN_100f84784(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4034000000000000,0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100f97680();
  puVar7 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar8 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
  lVar8 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar8 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  *puVar1 = puVar5;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38)) = 0x100;
  *param_1 = puVar4;
  param_1[1] = puVar6;
  param_1[2] = param_3;
  param_1[3] = puVar7;
  return;
}



/* Entry: 100f848e0; end: 100f848eb;  */

void FUN_100f848e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f848ec; end: 100f84967;  */

void FUN_100f848ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c6157c(uVar2);
  uVar3 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  uVar4 = uVar3;
  FUN_100f7dd38();
  func_0x000107c5f738(param_1,uVar1,uVar2,FUN_100f84968,auStack_50,uVar3,uVar4);
  return;
}



/* Entry: 100f84968; end: 100f84977;  */

void FUN_100f84968(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4034000000000000,0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100f97680();
  puVar7 = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar8 = 0x112d4f930;
  func_0x0001000285a8(0x112d4f930,&UNK_10d9158a8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
  lVar8 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar8 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar9 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  *puVar1 = puVar5;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x38)) = 0x100;
  *param_1 = puVar4;
  param_1[1] = puVar6;
  param_1[2] = uVar10;
  param_1[3] = puVar7;
  return;
}



/* Entry: 100f84978; end: 100f849db;  */

long FUN_100f84978(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f849dc; end: 100f84ae3;  */

undefined1 * FUN_100f849dc(undefined1 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x28) = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c61174();
  (*pcVar1)(param_1 + 0x10,param_2 + 0x10,lVar2);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c6157c();
  func_0x000107c6160c(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 100f84ae4; end: 100f84bab;  */

undefined1 * FUN_100f84ae4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x000107c61620(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



/* Entry: 100f84bac; end: 100f84c6b;  */

int FUN_100f84bac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f84c6c; end: 100f84d17;  */

void FUN_100f84c6c(void)

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



/* Entry: 100f84d18; end: 100f84d27;  */

void FUN_100f84d18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 100f84d28; end: 100f84d93;  */

void FUN_100f84d28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x138) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f84d94,uVar1,uVar2);
  return;
}



/* Entry: 100f84d94; end: 100f84ee3;  */

void FUN_100f84d94(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0x128);
  uVar12 = puVar6[4];
  uVar13 = puVar6[7];
  uVar11 = puVar6[6];
  uVar17 = puVar6[1];
  uVar16 = *puVar6;
  uVar15 = puVar6[3];
  uVar14 = puVar6[2];
  *(undefined8 *)(unaff_x22 + 0x38) = puVar6[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  uVar12 = puVar6[0xc];
  uVar13 = puVar6[0xf];
  uVar11 = puVar6[0xe];
  uVar17 = puVar6[9];
  uVar16 = puVar6[8];
  uVar15 = puVar6[0xb];
  uVar14 = puVar6[10];
  *(undefined8 *)(unaff_x22 + 0x78) = puVar6[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  iVar3 = (int)unaff_x22 + 0x10;
  FUN_100f6e77c();
  if ((iVar3 != 1) && (uVar9 = *(ulong *)(unaff_x22 + 0x88), uVar9 != 0)) {
    uVar8 = *(ulong *)(unaff_x22 + 0x80);
    uVar1 = uVar8 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar1 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lVar10 = *(long *)(unaff_x22 + 0x130);
      uVar12 = *(undefined8 *)(lVar10 + 0x28);
      lVar2 = *(long *)(lVar10 + 0x30);
      func_0x0001000a8868(lVar10 + 0x10,uVar12);
      uVar11 = *(undefined8 *)(lVar10 + 8);
      piVar7 = *(int **)(lVar2 + 8);
      iVar3 = *piVar7;
      plVar4 = (long *)(ulong)(uint)piVar7[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x150) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100f84ee4;
                    /* WARNING: Could not recover jumptable at 0x000100f84e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar7))
                (plVar4,unaff_x22 + 0x90,uVar11,uVar8,uVar9,uVar12,lVar2);
      return;
    }
  }
  puVar5 = *(undefined1 **)(unaff_x22 + 0x138);
  func_0x000107c61574();
  FUN_100f857ac();
  func_0x000107c613f8(&UNK_1103700c0,puVar5,0,0);
  *puVar5 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100f84ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f84ee4; end: 100f84f27;  */

void FUN_100f84ee4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100f84f28,*(undefined8 *)(lVar1 + 0x140),*(undefined8 *)(lVar1 + 0x148));
  return;
}



/* Entry: 100f84f28; end: 100f85163;  */

void FUN_100f84f28(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long unaff_x22;
  long lVar14;
  
  lVar14 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
  puVar12 = (undefined8 *)(unaff_x22 + 0x90);
  puVar10 = (undefined1 *)*puVar12;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined2 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined2 *)(unaff_x22 + 0xc0);
  cVar6 = *(char *)(unaff_x22 + 0xc2);
  puVar9 = (undefined1 *)(lVar14 + 0x40);
  func_0x000107c61618();
  if (cVar6 == '\x01') {
    if (puVar9 != (undefined1 *)0x0) {
      lVar14 = *(long *)(*(long *)(unaff_x22 + 0x130) + 0x48);
      puVar10 = puVar9;
      func_0x000107c614f0(puVar9);
      *(undefined8 *)(unaff_x22 + 200) = uVar3;
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar5;
      *(undefined2 *)(unaff_x22 + 0xf0) = uVar7;
      (**(code **)(lVar14 + 8))(unaff_x22 + 200,puVar10,lVar14);
      func_0x000107c615e8();
    }
    FUN_100f857ac();
    func_0x000107c613f8(&UNK_1103700c0,puVar9,0,0);
    *puVar9 = 2;
    func_0x000107c61654();
  }
  else {
    if (puVar9 == (undefined1 *)0x0) {
      func_0x000107c61174(puVar10);
    }
    else {
      lVar14 = *(long *)(*(long *)(unaff_x22 + 0x130) + 0x48);
      param_2 = puVar9;
      func_0x000107c614f0();
      *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x108) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
      *(undefined8 *)(unaff_x22 + 0x118) = uVar5;
      *(undefined2 *)(unaff_x22 + 0x120) = uVar8;
      pcVar13 = *(code **)(lVar14 + 8);
      func_0x000107c61174(puVar10);
      (*pcVar13)(unaff_x22 + 0xf8,param_2,lVar14);
      func_0x000107c615e8(puVar9);
    }
    puVar9 = puVar10;
    func_0x000107c60bb8();
    func_0x000107c61180();
    if (puVar9 != (undefined1 *)0x0) {
      puVar11 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar10);
      FUN_100f85810(puVar12);
      lVar14 = 0x112d4f218;
      func_0x0001000285a8(0x112d4f218,&UNK_10d9151c0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x18) = 2;
      *(undefined8 *)(lVar14 + 0x10) = 1;
      *(undefined1 **)(lVar14 + 0x20) = puVar11;
      *(undefined1 **)(lVar14 + 0x28) = param_2;
      *(undefined2 *)(lVar14 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100f850fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    FUN_100f857ac();
    func_0x000107c613f8(&UNK_1103700c0,puVar9,0,0);
    *puVar9 = 4;
    func_0x000107c61654();
    func_0x000107c61170(puVar10);
  }
  FUN_100f85810(puVar12);
                    /* WARNING: Could not recover jumptable at 0x000100f85160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f85164; end: 100f851db;  */

void FUN_100f85164(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f851dc,uVar1,uVar2);
  return;
}



/* Entry: 100f851dc; end: 100f853a3;  */

void FUN_100f851dc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  if (lVar5 == 0) {
    puVar3 = *(undefined1 **)(unaff_x22 + 0xb0);
    func_0x000107c61574();
    FUN_100f857ac();
    func_0x000107c613f8(&UNK_1103700c0,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x90);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c5ee20();
    func_0x000107c4635c();
    func_0x000107c61170();
    if (puVar1 != (undefined *)0x0) {
      FUN_100f911f8(0x4075e00000000000);
      func_0x000107c61170(puVar1);
      lVar4 = lVar2;
      func_0x000107c60bb8();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 != 0) {
        lVar5 = lVar4;
        func_0x000107c5ee30();
        func_0x000107c61170();
        *(long *)(unaff_x22 + 0xd8) = lVar5;
        *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
        func_0x000107c5fce8();
        *(long *)(unaff_x22 + 0xe8) = lVar4;
        if (lVar4 == 0) {
          lVar4 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
          func_0x000107c614f0();
          func_0x000107c5fca8();
        }
        *(long *)(unaff_x22 + 0xf0) = lVar4;
        *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_100f853a4,lVar4);
        return;
      }
    }
    puVar3 = *(undefined1 **)(unaff_x22 + 0xb0);
    func_0x000107c61574();
    FUN_100f857ac();
    func_0x000107c613f8(&UNK_1103700c0,puVar3,0,0);
    *puVar3 = 4;
    func_0x000107c61654();
    func_0x000107c615e8(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000100f85370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f853a4; end: 100f8549f;  */

void FUN_100f853a4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100f854a0;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  func_0x000107c5ee20(uVar3,uVar1);
  puVar4 = &UNK_110370000;
  func_0x000107c613fc(&UNK_110370000,0x18,7);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar4 + 0x10) = lVar2;
  *(code **)(unaff_x22 + 0x70) = FUN_100f857ec;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100f91b08;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110370018;
  func_0x000107c60bc4(puVar6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c40ba4(uVar5);
  func_0x000107c60bd0(puVar6);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100f854a0; end: 100f85513;  */

void FUN_100f854a0(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100f854dc,*(undefined8 *)(*unaff_x22 + 0xf0),*(undefined8 *)(*unaff_x22 + 0xf8));
  return;
}



/* Entry: 100f85514; end: 100f855eb;  */

void FUN_100f85514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  puVar3 = *(undefined1 **)(unaff_x22 + 0xb0);
  func_0x000107c61574();
  lVar5 = *(long *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x00010006c090(uVar1,uVar2);
    func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100f85584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar6,lVar5);
    return;
  }
  FUN_100f857ac();
  func_0x000107c613f8(&UNK_1103700c0,puVar3,0,0);
  *puVar3 = 3;
  func_0x000107c61654();
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100f855e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f855ec; end: 100f85657;  */

void FUN_100f855ec(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      goto LAB_100f85638;
    }
  }
  lVar2 = 0;
  param_2 = 0;
LAB_100f85638:
  plVar1 = *(long **)(*(long *)(param_3 + 0x40) + 0x28);
  *plVar1 = lVar2;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_3);
  return;
}



/* Entry: 100f85658; end: 100f8565f;  */

undefined1 FUN_100f85658(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100f85660; end: 100f856ab;  */

void FUN_100f85660(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f856ac;
  plVar3[0x25] = param_1;
  plVar3[0x26] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x27] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x28] = lVar1;
  plVar3[0x29] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f84d94,lVar1,lVar2);
  return;
}



/* Entry: 100f856ac; end: 100f856f3;  */

void FUN_100f856ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f856f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f856f4; end: 100f8574f;  */

void FUN_100f856f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f85750;
  plVar3[0x13] = param_2;
  plVar3[0x14] = unaff_x20;
  plVar3[0x12] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x15] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x16] = lVar2;
  func_0x000100eea164();
  plVar3[0x17] = lVar2;
  func_0x000107c5fca8();
  plVar3[0x18] = lVar1;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f851dc,lVar1,lVar2);
  return;
}



/* Entry: 100f85750; end: 100f857a7;  */

void FUN_100f85750(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f857a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f857a8; end: 100f857ab;  */

undefined * FUN_100f857a8(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 100f857ac; end: 100f857eb;  */

void FUN_100f857ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fc50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915dd8;
  func_0x000107c61520(&UNK_10d915dd8,&UNK_1103700c0);
  puRam0000000112d4fc50 = puVar1;
  return;
}



/* Entry: 100f857ec; end: 100f8580f;  */

void FUN_100f857ec(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      goto LAB_100f85638;
    }
  }
  lVar3 = 0;
  param_2 = 0;
LAB_100f85638:
  plVar2 = *(long **)(*(long *)(lVar1 + 0x40) + 0x28);
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 100f85810; end: 100f85843;  */

undefined8 FUN_100f85810(undefined8 param_1)

{
  (*(code *)&DAT_103ba04a4)();
  return param_1;
}



/* Entry: 100f85844; end: 100f859ab;  */

int FUN_100f85844(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f858c0;
        goto LAB_100f858a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f858a4:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_100f858c0:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f859ac; end: 100f859eb;  */

void FUN_100f859ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fc58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915db0;
  func_0x000107c61520(&UNK_10d915db0,&UNK_1103700c0);
  puRam0000000112d4fc58 = puVar1;
  return;
}



/* Entry: 100f859ec; end: 100f85a97;  */

long FUN_100f859ec(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f85a98; end: 100f85bc7;  */

undefined8 * FUN_100f85a98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  lVar10 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar10;
  pcVar9 = (code *)**(undefined8 **)(lVar10 + -8);
  func_0x000107c61174();
  (*pcVar9)(param_1 + 1,param_2 + 1,lVar10);
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  param_1[8] = param_2[8];
  uVar11 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar11;
  uVar12 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar12;
  uVar1 = param_2[0xd];
  uVar5 = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar5;
  uVar2 = param_2[0xf];
  uVar6 = param_2[0x10];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar6;
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar3 = param_2[0x14];
  uVar8 = param_2[0x15];
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar8;
  uVar8 = param_2[0x16];
  param_1[0x16] = uVar8;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar6);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 100f85bc8; end: 100f85d47;  */

undefined8 * FUN_100f85bc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100083374(param_1 + 1,param_2 + 1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xb];
  uVar1 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xd];
  uVar1 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x15] = param_2[0x15];
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f85d48; end: 100f85d83;  */

void FUN_100f85d48(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar6 = param_2[0x15];
  uVar5 = param_2[0x14];
  param_1[0x16] = param_2[0x16];
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar5;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  return;
}



/* Entry: 100f85d84; end: 100f85e87;  */

undefined8 * FUN_100f85d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar2 = param_1[6];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61574(uVar1);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xd];
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61574(uVar1);
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  uVar1 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61574(uVar1);
  uVar2 = param_1[0x16];
  uVar1 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar1;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f85e88; end: 100f85f5b;  */

int FUN_100f85e88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f85f5c; end: 100f86857;  */

void FUN_100f85f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long alStack_250 [6];
  long alStack_220 [5];
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar9 = 0x112d4fc60;
  uStack_1d8 = param_1;
  func_0x0001000285a8(0x112d4fc60,&UNK_10d915e88);
  lStack_1e0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d4f148;
  lStack_1d0 = (long)alStack_220 - extraout_x8;
  func_0x0001000285a8(0x112d4f148,&UNK_10d914e20);
  lVar11 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar15 = (long *)(((long)alStack_220 - extraout_x8) - extraout_x8_00);
  func_0x000107c5f438();
  *plVar15 = lVar11;
  plVar15[1] = 0;
  *(undefined1 *)(plVar15 + 2) = 0;
  lVar11 = 0x112d4fc68;
  func_0x0001000285a8(0x112d4fc68,&UNK_10d915e98);
  lVar14 = unaff_x20;
  func_0x000100f865e8((long)plVar15 + (long)*(int *)(lVar11 + 0x2c));
  uVar4 = (undefined1)lVar14;
  func_0x000107c5f568();
  uVar17 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar11 = 0x112d4fc70;
  uVar7 = param_3;
  uVar6 = param_4;
  uVar18 = param_5;
  func_0x0001000285a8(0x112d4fc70,&UNK_10d915ea0);
  puVar1 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar11 + 0x24));
  *puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f574();
  uVar17 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar14 = 0x112d4fc78;
  puVar8 = &UNK_10d915ea8;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar14 + 0x24));
  *puVar1 = (char)lVar11;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar18;
  puVar1[0x28] = 0;
  func_0x000107c5f7a8();
  plVar15[-2] = lVar14;
  plVar15[-1] = (long)puVar8;
  *(undefined1 *)(plVar15 + -3) = 0;
  plVar15[-4] = 0x7ff0000000000000;
  *(undefined1 *)(plVar15 + -5) = 1;
  plVar15[-6] = 0;
  func_0x000107c5f388(&uStack_f8,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar11 = 0x112d4fc80;
  func_0x0001000285a8(0x112d4fc80,&UNK_10d915eb0);
  puVar2 = (undefined8 *)((long)plVar15 + (long)*(int *)(lVar11 + 0x24));
  puVar2[9] = uStack_b0;
  puVar2[8] = uStack_b8;
  puVar2[0xb] = uStack_a0;
  puVar2[10] = uStack_a8;
  puVar2[0xd] = uStack_90;
  puVar2[0xc] = uStack_98;
  puVar2[1] = uStack_f0;
  *puVar2 = uStack_f8;
  puVar2[3] = uStack_e0;
  puVar2[2] = uStack_e8;
  puVar2[5] = uStack_d0;
  puVar2[4] = uStack_d8;
  puVar2[7] = uStack_c0;
  puVar2[6] = uStack_c8;
  func_0x000107c5f354();
  lVar14 = lVar11;
  func_0x000107c5f574();
  plVar3 = (long *)((long)plVar15 + (long)*(int *)(lVar9 + 0x24));
  *plVar3 = lVar11;
  *(char *)(plVar3 + 1) = (char)lVar14;
  FUN_100f83abc();
  uVar6 = 0;
  func_0x000107c5fcec();
  func_0x000107c5fce8();
  uVar7 = uVar6;
  func_0x000100eea164();
  puVar8 = &UNK_1103701e8;
  func_0x000107c613fc(&UNK_1103701e8,0xd8,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar7;
  *(undefined8 *)(puVar8 + 0xa8) = uStack_128;
  *(undefined8 *)(puVar8 + 0xa0) = uStack_130;
  *(undefined8 *)(puVar8 + 0xb8) = uStack_118;
  *(undefined8 *)(puVar8 + 0xb0) = uStack_120;
  *(undefined8 *)(puVar8 + 200) = uStack_108;
  *(undefined8 *)(puVar8 + 0xc0) = uStack_110;
  *(undefined8 *)(puVar8 + 0xd0) = uStack_100;
  *(undefined8 *)(puVar8 + 0x68) = uStack_168;
  *(undefined8 *)(puVar8 + 0x60) = uStack_170;
  *(undefined8 *)(puVar8 + 0x78) = uStack_158;
  *(undefined8 *)(puVar8 + 0x70) = uStack_160;
  *(undefined8 *)(puVar8 + 0x88) = uStack_148;
  *(undefined8 *)(puVar8 + 0x80) = uStack_150;
  *(undefined8 *)(puVar8 + 0x98) = uStack_138;
  *(undefined8 *)(puVar8 + 0x90) = uStack_140;
  *(undefined8 *)(puVar8 + 0x28) = uStack_1a8;
  *(undefined8 *)(puVar8 + 0x20) = uStack_1b0;
  *(undefined8 *)(puVar8 + 0x38) = uStack_198;
  *(undefined8 *)(puVar8 + 0x30) = uStack_1a0;
  *(undefined8 *)(puVar8 + 0x48) = uStack_188;
  *(undefined8 *)(puVar8 + 0x40) = uStack_190;
  *(undefined8 *)(puVar8 + 0x58) = uStack_178;
  *(undefined8 *)(puVar8 + 0x50) = uStack_180;
  lVar9 = 0;
  func_0x000107c5fd0c();
  lVar14 = *(long *)(lVar9 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  lStack_1f0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = lVar11 + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)plVar15 - uVar13;
  func_0x000107c5fcf4(lVar9);
  iVar5 = 2;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar5 == 0) {
    lVar11 = 0x112d4f140;
    func_0x0001000285a8(0x112d4f140,&UNK_10d914e18);
    lVar12 = lStack_1d0;
    puVar2 = (undefined8 *)(lStack_1d0 + *(int *)(lVar11 + 0x24));
    lVar11 = 0;
    func_0x000107c5f2fc();
    (**(code **)(lVar14 + 0x20))((long)puVar2 + (long)*(int *)(lVar11 + 0x14),lVar9,lStack_1f0);
    *puVar2 = &UNK_10d915ec0;
    puVar2[1] = puVar8;
    FUN_100c9cf14(plVar15,lVar12);
  }
  else {
    lVar11 = 0;
    func_0x000107c5f330();
    alStack_220[2] = *(long *)(lVar11 + -8);
    alStack_220[3] = lVar11;
    alStack_220[4] = lVar9;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_220[2] + 0x40));
    lVar16 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    uStack_1c0 = 0;
    uStack_1b8 = 0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(uStack_1b8);
    uStack_1c0 = 0xd000000000000039;
    uStack_1b8 = 0x800000010ef1cf20;
    uStack_1c8 = 0x2f;
    puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    plStack_1f8 = plVar15;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar10);
    uVar6 = uStack_1b8;
    uVar7 = uStack_1c0;
    alStack_220[1] = lVar16;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar11 = lStack_1f0;
    lVar12 = lVar16 - uVar13;
    (**(code **)(lVar14 + 0x10))(lVar12,lVar9,lStack_1f0);
    func_0x000107c5f32c(lVar16,uVar7,uVar6,0,0,lVar12,&UNK_10d915ec0,puVar8);
    (**(code **)(lVar14 + 8))(lVar9,lVar11);
    lVar11 = lStack_1d0;
    FUN_100c9cf14(plVar15,lStack_1d0);
    lVar9 = 0x112d4f150;
    func_0x0001000285a8(0x112d4f150,&UNK_10d915ee0);
    (**(code **)(alStack_220[2] + 0x20))(lVar11 + *(int *)(lVar9 + 0x24),lVar16,alStack_220[3]);
  }
  FUN_100f83abc(unaff_x20,&stack0xfffffffffffffe50);
  puVar8 = &UNK_110370210;
  func_0x000107c613fc(&UNK_110370210,200,7);
  lVar11 = lStack_1d0;
  lVar9 = lStack_1e0;
  *(undefined8 *)(puVar8 + 0x98) = uStack_128;
  *(undefined8 *)(puVar8 + 0x90) = uStack_130;
  *(undefined8 *)(puVar8 + 0xa8) = uStack_118;
  *(undefined8 *)(puVar8 + 0xa0) = uStack_120;
  *(undefined8 *)(puVar8 + 0xb8) = uStack_108;
  *(undefined8 *)(puVar8 + 0xb0) = uStack_110;
  *(undefined8 *)(puVar8 + 0xc0) = uStack_100;
  *(undefined8 *)(puVar8 + 0x58) = uStack_168;
  *(undefined8 *)(puVar8 + 0x50) = uStack_170;
  *(undefined8 *)(puVar8 + 0x68) = uStack_158;
  *(undefined8 *)(puVar8 + 0x60) = uStack_160;
  *(undefined8 *)(puVar8 + 0x78) = uStack_148;
  *(undefined8 *)(puVar8 + 0x70) = uStack_150;
  *(undefined8 *)(puVar8 + 0x88) = uStack_138;
  *(undefined8 *)(puVar8 + 0x80) = uStack_140;
  *(undefined8 *)(puVar8 + 0x18) = uStack_1a8;
  *(undefined8 *)(puVar8 + 0x10) = uStack_1b0;
  *(undefined8 *)(puVar8 + 0x28) = uStack_198;
  *(undefined8 *)(puVar8 + 0x20) = uStack_1a0;
  *(undefined8 *)(puVar8 + 0x38) = uStack_188;
  *(undefined8 *)(puVar8 + 0x30) = uStack_190;
  *(undefined8 *)(puVar8 + 0x48) = uStack_178;
  *(undefined8 *)(puVar8 + 0x40) = uStack_180;
  puVar2 = (undefined8 *)(lStack_1d0 + *(int *)(lStack_1e0 + 0x24));
  *puVar2 = FUN_100f8838c;
  puVar2[1] = puVar8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f770(&stack0xfffffffffffffe40);
  uVar7 = uStack_1b8;
  FUN_100f83abc(unaff_x20,&stack0xfffffffffffffe50);
  puVar8 = &UNK_110370238;
  func_0x000107c613fc(&UNK_110370238,200,7);
  *(undefined8 *)(puVar8 + 0x98) = uStack_128;
  *(undefined8 *)(puVar8 + 0x90) = uStack_130;
  *(undefined8 *)(puVar8 + 0xa8) = uStack_118;
  *(undefined8 *)(puVar8 + 0xa0) = uStack_120;
  *(undefined8 *)(puVar8 + 0xb8) = uStack_108;
  *(undefined8 *)(puVar8 + 0xb0) = uStack_110;
  *(undefined8 *)(puVar8 + 0xc0) = uStack_100;
  *(undefined8 *)(puVar8 + 0x58) = uStack_168;
  *(undefined8 *)(puVar8 + 0x50) = uStack_170;
  *(undefined8 *)(puVar8 + 0x68) = uStack_158;
  *(undefined8 *)(puVar8 + 0x60) = uStack_160;
  *(undefined8 *)(puVar8 + 0x78) = uStack_148;
  *(undefined8 *)(puVar8 + 0x70) = uStack_150;
  *(undefined8 *)(puVar8 + 0x88) = uStack_138;
  *(undefined8 *)(puVar8 + 0x80) = uStack_140;
  *(undefined8 *)(puVar8 + 0x18) = uStack_1a8;
  *(undefined8 *)(puVar8 + 0x10) = uStack_1b0;
  *(undefined8 *)(puVar8 + 0x28) = uStack_198;
  *(undefined8 *)(puVar8 + 0x20) = uStack_1a0;
  *(undefined8 *)(puVar8 + 0x38) = uStack_188;
  *(undefined8 *)(puVar8 + 0x30) = uStack_190;
  *(undefined8 *)(puVar8 + 0x48) = uStack_178;
  *(undefined8 *)(puVar8 + 0x40) = uStack_180;
  puVar10 = puVar8;
  FUN_100f883e0();
  func_0x000107c5f6b0(uStack_1d8,&stack0xfffffffffffffe40,0,FUN_100f883d8,puVar8,lVar9,
                      PTR___sSSN_11034da80,puVar10,PTR___sSSSQsWP_11034da98);
  func_0x000107c6142c(uVar7);
  func_0x000107c61574(puVar8);
  func_0x000100f88688(lVar11,0x112d4fc60,&UNK_10d915e88);
  return;
}



/* Entry: 100f86858; end: 100f86daf;  */

void FUN_100f86858(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long alStack_580 [5];
  long alStack_558 [2];
  undefined1 auStack_548 [152];
  undefined8 uStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  double dStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 uStack_390;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 uStack_330;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar9 = 0x112d4fd50;
  puVar7 = &UNK_10d915f60;
  func_0x0001000285a8();
  alStack_580[1] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = (long)alStack_580 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_558[0] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  alStack_580[3] = *(undefined8 *)(param_2 + 0x68);
  alStack_580[2] = *(undefined8 *)(param_2 + 0x60);
  alStack_558[1] = uVar3;
  func_0x000107c6157c();
  func_0x000107c5f7ac();
  FUN_100f87930(&uStack_110,param_2);
  uStack_3b8 = uStack_e8;
  uStack_3c0 = uStack_f0;
  uStack_3a8 = uStack_d8;
  uStack_3b0 = uStack_e0;
  uStack_398 = uStack_c8;
  uStack_3a0 = uStack_d0;
  uStack_390 = (undefined1)uStack_c0;
  uStack_3d8 = puStack_108;
  uStack_3e0 = uStack_110;
  uStack_3c8 = uStack_f8;
  uStack_3d0 = lStack_100;
  uStack_330 = (undefined1)uStack_c0;
  uStack_358 = uStack_e8;
  uStack_360 = uStack_f0;
  uStack_348 = uStack_d8;
  uStack_350 = uStack_e0;
  uStack_338 = uStack_c8;
  uStack_340 = uStack_d0;
  uStack_378 = puStack_108;
  uStack_380 = uStack_110;
  uStack_368 = uStack_f8;
  uStack_370 = lStack_100;
  uVar5 = 0x112d4fd58;
  FUN_100f88b14(&uStack_3e0,&uStack_1b0,0x112d4fd58,&UNK_10d915f68);
  puVar4 = &uStack_380;
  func_0x000100f88b5c(puVar4,0x112d4fd58,&UNK_10d915f68);
  uStack_228 = uStack_3b8;
  uStack_230 = uStack_3c0;
  uStack_218 = uStack_3a8;
  uStack_220 = uStack_3b0;
  uStack_208 = uStack_398;
  uStack_210 = uStack_3a0;
  uStack_200 = CONCAT71(uStack_200._1_7_,uStack_390);
  puStack_248 = (undefined *)uStack_3d8;
  uStack_250 = uStack_3e0;
  uStack_238 = uStack_3c8;
  uStack_240 = uStack_3d0;
  func_0x000107c5f7ac();
  uStack_2e8 = uStack_228;
  uStack_2f0 = uStack_230;
  uStack_2d8 = uStack_218;
  uStack_2e0 = uStack_220;
  uStack_2c8 = uStack_208;
  uStack_2d0 = uStack_210;
  uStack_2c0 = (undefined1)uStack_200;
  uStack_308 = puStack_248;
  uStack_310 = uStack_250;
  uStack_2f8 = uStack_238;
  uStack_300 = uStack_240;
  uStack_320 = uVar3;
  puStack_318 = puVar7;
  func_0x000107c5f2d4(&uStack_a8,0x4071400000000000,0,0x4071400000000000,0,puVar4,uVar5);
  uStack_c8 = uStack_2d8;
  uStack_d0 = uStack_2e0;
  uStack_b8 = uStack_2c8;
  uStack_c0 = uStack_2d0;
  uStack_b0 = CONCAT71(uStack_b0._1_7_,uStack_2c0);
  puStack_108 = puStack_318;
  uStack_110 = uStack_320;
  uStack_f8 = uStack_308;
  lStack_100 = uStack_310;
  uStack_e8 = uStack_2f8;
  uStack_f0 = uStack_300;
  uStack_d8 = uStack_2e8;
  uStack_e0 = uStack_2f0;
  uStack_290 = uStack_238;
  uStack_298 = uStack_240;
  uStack_2a0 = puStack_248;
  uStack_2a8 = uStack_250;
  uStack_258 = (undefined1)uStack_200;
  uStack_260 = uStack_208;
  uStack_268 = uStack_210;
  uStack_270 = uStack_218;
  uStack_278 = uStack_220;
  uStack_280 = uStack_228;
  uStack_288 = uStack_230;
  uStack_2b8 = uVar3;
  puStack_2b0 = puVar7;
  FUN_100f88b14(&uStack_320,&uStack_1b0,0x112d4fd60,&UNK_10d915f70);
  func_0x000100f88b5c(&uStack_2b8,0x112d4fd60,&UNK_10d915f70);
  uStack_1e8 = uStack_a8;
  uStack_1f0 = uStack_b0;
  uStack_1d8 = uStack_98;
  uStack_1e0 = uStack_a0;
  uStack_1c8 = uStack_88;
  dStack_1d0 = dStack_90;
  uStack_228 = uStack_e8;
  uStack_230 = uStack_f0;
  uStack_218 = uStack_d8;
  uStack_220 = uStack_e0;
  uStack_208 = uStack_c8;
  uStack_210 = uStack_d0;
  uStack_1f8 = uStack_b8;
  uStack_200 = uStack_c0;
  puStack_248 = puStack_108;
  uStack_250 = uStack_110;
  uStack_238 = uStack_f8;
  uStack_240 = lStack_100;
  uStack_148 = uStack_a8;
  uStack_150 = uStack_b0;
  uStack_138 = uStack_98;
  uStack_140 = uStack_a0;
  uStack_128 = uStack_88;
  dStack_130 = dStack_90;
  uStack_188 = uStack_e8;
  uStack_190 = uStack_f0;
  uStack_178 = uStack_d8;
  uStack_180 = uStack_e0;
  uStack_168 = uStack_c8;
  uStack_170 = uStack_d0;
  uStack_158 = uStack_b8;
  uStack_160 = uStack_c0;
  uStack_1c0 = uStack_80;
  uStack_120 = uStack_80;
  puStack_1a8 = puStack_108;
  uStack_1b0 = uStack_110;
  uStack_198 = uStack_f8;
  uStack_1a0 = lStack_100;
  dVar10 = dStack_90;
  uVar11 = uStack_c0;
  uVar12 = uStack_e0;
  FUN_100f88b14(&uStack_250,&uStack_4b0,0x112d4fd68,&UNK_10d915f78);
  puVar4 = &uStack_1b0;
  func_0x000100f88b5c(puVar4,0x112d4fd68,&UNK_10d915f78);
  func_0x000107c5f55c();
  uVar5 = 0x112d4fd70;
  lStack_100 = param_2;
  func_0x0001000285a8(0x112d4fd70,&UNK_10d915f80);
  uVar3 = uVar5;
  FUN_100f888a0();
  pcVar8 = (code *)0x0;
  func_0x000107c5f28c(lVar9,puVar4,0,FUN_100f88898,&uStack_110,uVar5,uVar3);
  if (lRam0000000112d4f960 != -1) {
    pcVar8 = FUN_100f7de5c;
    func_0x000107c61568(0x112d4f960,FUN_100f7de5c);
  }
  uVar5 = uRam00000001137ff0e0;
  func_0x000107c4b63c(uRam00000001137ff0e0);
  func_0x000107c5f7a4();
  func_0x000107c5f2d4(&uStack_410,0,1,dVar10 + dVar10 + 59.0,0,uVar5,pcVar8);
  lVar6 = 0x112d4fd90;
  func_0x0001000285a8(0x112d4fd90,&UNK_10d915f90);
  puVar4 = (undefined8 *)(lVar9 + *(int *)(lVar6 + 0x24));
  puVar4[1] = uStack_408;
  *puVar4 = uStack_410;
  puVar4[3] = uStack_3f8;
  puVar4[2] = uStack_400;
  puVar4[5] = uStack_3e8;
  puVar4[4] = uStack_3f0;
  func_0x000107c5f568();
  uVar3 = 0xc030000000000000;
  uVar5 = uStack_400;
  func_0x000107c5f280();
  puVar1 = (undefined1 *)(lVar9 + *(int *)(alStack_580[1] + 0x24));
  *puVar1 = (char)lVar6;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar11;
  *(undefined8 *)(puVar1 + 0x20) = uVar12;
  puVar1[0x28] = 0;
  lVar2 = alStack_558[0];
  uStack_448 = uStack_1e8;
  uStack_450 = uStack_1f0;
  uStack_438 = uStack_1d8;
  uStack_440 = uStack_1e0;
  uStack_428 = uStack_1c8;
  dStack_430 = dStack_1d0;
  uStack_420 = uStack_1c0;
  uStack_488 = uStack_228;
  uStack_490 = uStack_230;
  uStack_478 = uStack_218;
  uStack_480 = uStack_220;
  uStack_468 = uStack_208;
  uStack_470 = uStack_210;
  uStack_458 = uStack_1f8;
  uStack_460 = uStack_200;
  puStack_4a8 = puStack_248;
  uStack_4b0 = uStack_250;
  uStack_498 = uStack_238;
  uStack_4a0 = uStack_240;
  FUN_100f88b14(lVar9,alStack_558[0],0x112d4fd50,&UNK_10d915f60);
  uStack_a8 = uStack_448;
  uStack_b0 = uStack_450;
  uStack_98 = uStack_438;
  uStack_a0 = uStack_440;
  uStack_88 = uStack_428;
  dStack_90 = dStack_430;
  uStack_e8 = uStack_488;
  uStack_f0 = uStack_490;
  uStack_d8 = uStack_478;
  uStack_e0 = uStack_480;
  uStack_c8 = uStack_468;
  uStack_d0 = uStack_470;
  uStack_b8 = uStack_458;
  uStack_c0 = uStack_460;
  puStack_108 = puStack_4a8;
  uStack_110 = uStack_4b0;
  uStack_f8 = uStack_498;
  lStack_100 = uStack_4a0;
  param_1[0x11] = uStack_438;
  param_1[0x10] = uStack_440;
  param_1[0x13] = uStack_428;
  param_1[0x12] = dStack_430;
  param_1[9] = uStack_478;
  param_1[8] = uStack_480;
  param_1[0xb] = uStack_468;
  param_1[10] = uStack_470;
  param_1[0xd] = uStack_458;
  param_1[0xc] = uStack_460;
  param_1[0xf] = uStack_448;
  param_1[0xe] = uStack_450;
  param_1[1] = alStack_580[3];
  *param_1 = alStack_580[2];
  param_1[3] = puStack_4a8;
  param_1[2] = uStack_4b0;
  uStack_80 = uStack_420;
  param_1[0x14] = uStack_420;
  param_1[5] = uStack_498;
  param_1[4] = uStack_4a0;
  param_1[7] = uStack_488;
  param_1[6] = uStack_490;
  lVar6 = 0x112d4fd98;
  func_0x0001000285a8(0x112d4fd98,&UNK_10d915f98);
  FUN_100f88b14(lVar2,(long)param_1 + (long)*(int *)(lVar6 + 0x40),0x112d4fd50,&UNK_10d915f60);
  lVar6 = alStack_558[1];
  func_0x000107c6157c(alStack_558[1]);
  FUN_100f88b14(&uStack_110,auStack_548,0x112d4fd68,&UNK_10d915f78);
  func_0x000100f88b5c(lVar9,0x112d4fd50,&UNK_10d915f60);
  func_0x000100f88b5c(lVar2,0x112d4fd50,&UNK_10d915f60);
  func_0x000100f88b5c(&uStack_4b0,0x112d4fd68,&UNK_10d915f78);
  func_0x000107c61574(lVar6);
  return;
}



/* Entry: 100f86db0; end: 100f87503;  */

void FUN_100f86db0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar24;
  double dVar25;
  undefined8 uStack_620;
  undefined1 auStack_618 [8];
  undefined8 uStack_610;
  undefined1 auStack_608 [8];
  undefined8 auStack_600 [2];
  undefined8 uStack_5f0;
  undefined4 uStack_5e4;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  long lStack_5c8;
  ulong uStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  ulong uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  uint uStack_58c;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [120];
  double dStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  
  uVar7 = 0;
  lStack_5c8 = param_1;
  func_0x000107c5f41c();
  lStack_5b0 = *(long *)(uVar7 - 8);
  uStack_5a8 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_5b0 + 0x40));
  uVar7 = (long)&uStack_5f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  uStack_5c0 = uVar7;
  func_0x000107c5f784();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = uVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x48);
  lStack_5b8 = lVar8;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f778(&uStack_380);
  uStack_570 = uStack_370;
  uStack_568 = uStack_378;
  uStack_580 = uStack_380;
  uStack_578 = uStack_368;
  uStack_378 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_380 = CONCAT71(uStack_380._1_7_,*(undefined1 *)(unaff_x20 + 0x98));
  uVar9 = 0x112d4f580;
  puVar14 = &UNK_10d915430;
  func_0x0001000285a8();
  func_0x000107c5f734(&uStack_220);
  uStack_598 = uStack_220;
  uStack_588 = uStack_218;
  uStack_58c = (uint)(byte)uStack_210;
  func_0x000100f9774c();
  puStack_5a0 = puVar14;
  if (lRam0000000112d4f968 != -1) {
    func_0x000107c61568(0x112d4f968,0x100f7deac);
  }
  uVar11 = uRam00000001137ff0f0;
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174();
  puVar12 = puVar10;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar13 = puVar10;
  func_0x000107c5af88();
  func_0x000107c61180();
  puStack_5d0 = puVar10;
  func_0x000107c3fa94();
  func_0x000107c61180();
  uStack_218 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0xa8);
  func_0x0001000285a8(0x112d4fd00,&UNK_10d915f28);
  func_0x000107c5f72c(&uStack_380);
  uVar22 = uStack_380;
  FUN_100f83abc();
  puVar14 = &UNK_110370260;
  uVar20 = 200;
  func_0x000107c613fc(&UNK_110370260,200,7);
  *(undefined8 *)(puVar14 + 0x98) = uStack_198;
  *(undefined8 *)(puVar14 + 0x90) = uStack_1a0;
  *(undefined8 *)(puVar14 + 0xa8) = uStack_188;
  *(undefined8 *)(puVar14 + 0xa0) = uStack_190;
  *(undefined8 *)(puVar14 + 0xb8) = uStack_178;
  *(undefined8 *)(puVar14 + 0xb0) = uStack_180;
  *(undefined8 *)(puVar14 + 0xc0) = uStack_170;
  *(undefined8 *)(puVar14 + 0x58) = uStack_1d8;
  *(undefined **)(puVar14 + 0x50) = puStack_1e0;
  *(undefined **)(puVar14 + 0x68) = puStack_1c8;
  *(undefined **)(puVar14 + 0x60) = puStack_1d0;
  *(undefined8 *)(puVar14 + 0x78) = uStack_1b8;
  *(undefined **)(puVar14 + 0x70) = puStack_1c0;
  *(undefined **)(puVar14 + 0x88) = puStack_1a8;
  *(undefined8 *)(puVar14 + 0x80) = uStack_1b0;
  *(undefined8 *)(puVar14 + 0x18) = uStack_218;
  *(undefined8 *)(puVar14 + 0x10) = uStack_220;
  *(undefined8 *)(puVar14 + 0x28) = uStack_208;
  *(undefined8 *)(puVar14 + 0x20) = uStack_210;
  *(undefined8 *)(puVar14 + 0x38) = uStack_1f8;
  *(double *)(puVar14 + 0x30) = dStack_200;
  *(undefined8 *)(puVar14 + 0x48) = uStack_1e8;
  *(undefined8 *)(puVar14 + 0x40) = uStack_1f0;
  puVar15 = puVar14;
  dVar25 = dStack_200;
  func_0x000107c5f7ac();
  *(undefined **)(lVar8 + -0x10) = puVar15;
  *(undefined8 *)(lVar8 + -8) = uVar20;
  *(undefined1 *)(lVar8 + -0x18) = 1;
  *(undefined8 *)(lVar8 + -0x20) = 0;
  *(undefined1 *)(lVar8 + -0x28) = 1;
  *(undefined8 *)(lVar8 + -0x30) = 0;
  uVar21 = 1;
  func_0x000107c5f388(&uStack_290,0,1,0,1,0x7ff0000000000000,0,0,1);
  uVar20 = uVar11;
  func_0x000107c4b63c();
  func_0x000107c5f7ac();
  uStack_380 = uStack_580;
  uStack_378 = uStack_568;
  uStack_370 = uStack_570;
  uStack_368 = uStack_578;
  uStack_360 = uStack_598;
  uStack_358 = uStack_588;
  uStack_350 = (undefined1)uStack_58c;
  puStack_340 = puStack_5a0;
  uStack_318 = uVar22;
  uStack_310 = 0x100f886c8;
  uStack_2b8 = uStack_248;
  uStack_2c0 = uStack_250;
  uStack_2a8 = uStack_238;
  uStack_2b0 = uStack_240;
  uStack_298 = uStack_228;
  uStack_2a0 = uStack_230;
  uStack_2f8 = uStack_288;
  uStack_300 = uStack_290;
  uStack_2e8 = uStack_278;
  uStack_2f0 = uStack_280;
  uStack_2d8 = uStack_268;
  uStack_2e0 = uStack_270;
  uStack_2c8 = uStack_258;
  uStack_2d0 = uStack_260;
  uStack_348 = uVar9;
  uStack_338 = uVar11;
  puStack_330 = puVar12;
  puStack_328 = puVar13;
  puStack_320 = puVar10;
  puStack_308 = puVar14;
  if (NAN(dVar25)) {
    uStack_5e0 = uVar21;
    uStack_5d8 = uVar20;
    func_0x000107c5ff78();
    uStack_5e4 = (undefined4)uVar20;
    func_0x000107c5f558();
    uStack_5f0 = uVar20;
    func_0x000107c5f124(uStack_5e4,0x100000000,uVar20,"Contradictory frame constraints specified.",
                        0x2a,2,PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(uStack_5f0);
    uVar20 = uStack_5d8;
    uVar21 = uStack_5e0;
  }
  *(undefined8 *)(lVar8 + -0x10) = uVar20;
  *(undefined8 *)(lVar8 + -8) = uVar21;
  *(undefined1 *)(lVar8 + -0x18) = 1;
  *(undefined8 *)(lVar8 + -0x20) = 0;
  *(undefined1 *)(lVar8 + -0x28) = 1;
  *(undefined8 *)(lVar8 + -0x30) = 0;
  func_0x000107c5f388(auStack_130,0,1,0,1,0,1,dVar25,0);
  uStack_158 = uStack_2b8;
  uStack_160 = uStack_2c0;
  uStack_148 = uStack_2a8;
  uStack_150 = uStack_2b0;
  uStack_138 = uStack_298;
  uStack_140 = uStack_2a0;
  uStack_198 = uStack_2f8;
  uStack_1a0 = uStack_300;
  uStack_188 = uStack_2e8;
  uStack_190 = uStack_2f0;
  uStack_168 = uStack_2c8;
  uStack_170 = uStack_2d0;
  uStack_178 = uStack_2d8;
  uStack_180 = uStack_2e0;
  uStack_1d8 = uStack_338;
  puStack_1e0 = puStack_340;
  puStack_1c8 = puStack_328;
  puStack_1d0 = puStack_330;
  puStack_1a8 = puStack_308;
  uStack_1b0 = uStack_310;
  uStack_1b8 = uStack_318;
  puStack_1c0 = puStack_320;
  uStack_218 = uStack_378;
  uStack_220 = uStack_380;
  uStack_208 = uStack_368;
  uStack_210 = uStack_370;
  uStack_1f0 = CONCAT71(uStack_34f,uStack_350);
  uStack_1f8 = uStack_358;
  dStack_200 = (double)uStack_360;
  uStack_1e8 = uStack_348;
  uStack_470 = uStack_580;
  uStack_468 = uStack_568;
  uStack_460 = uStack_570;
  uStack_458 = uStack_578;
  uStack_450 = uStack_598;
  uStack_448 = uStack_588;
  uStack_440 = (undefined1)uStack_58c;
  puStack_430 = puStack_5a0;
  uStack_408 = uVar22;
  uStack_400 = 0x100f886c8;
  uStack_3e8 = uStack_288;
  uStack_3f0 = uStack_290;
  uStack_3d8 = uStack_278;
  uStack_3e0 = uStack_280;
  uStack_398 = uStack_238;
  uStack_3a0 = uStack_240;
  uStack_388 = uStack_228;
  uStack_390 = uStack_230;
  uStack_3b8 = uStack_258;
  uStack_3c0 = uStack_260;
  uStack_3a8 = uStack_248;
  uStack_3b0 = uStack_250;
  uStack_3c8 = uStack_268;
  uStack_3d0 = uStack_270;
  uVar22 = 0x112d4fd08;
  puVar15 = &UNK_10d915f30;
  uStack_438 = uVar9;
  uStack_428 = uVar11;
  puStack_420 = puVar12;
  puStack_418 = puVar13;
  puStack_410 = puVar10;
  puStack_3f8 = puVar14;
  FUN_100f88b14(&uStack_380,&puStack_560,0x112d4fd08,&UNK_10d915f30);
  puVar16 = &uStack_470;
  func_0x000100f88b5c(puVar16,0x112d4fd08,&UNK_10d915f30);
  func_0x000100f9774c();
  puStack_560 = puVar16;
  uStack_558 = uVar22;
  FUN_100e8b654();
  ppuVar17 = &puStack_560;
  puVar14 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0(ppuVar17,PTR___sSSN_11034da80,puVar16);
  uVar9 = 0x112d4fd10;
  func_0x0001000285a8(0x112d4fd10,&UNK_10d915f38);
  uVar11 = uVar9;
  func_0x000100f886e8();
  lVar2 = lStack_5c8;
  func_0x000107c5f640(lStack_5c8,ppuVar17,puVar14,puVar16,puVar15,uVar9,uVar11);
  func_0x000100f795bc(ppuVar17,puVar14,puVar16);
  func_0x000107c6142c(puVar15);
  puVar16 = &uStack_220;
  func_0x000100f88b5c(puVar16,0x112d4fd10,&UNK_10d915f38);
  uVar6 = SUB81(puVar16,0);
  func_0x000107c5f56c();
  uVar20 = 0x4020000000000000;
  uVar9 = uStack_260;
  uVar11 = uStack_250;
  uVar22 = uStack_240;
  func_0x000107c5f280();
  lVar8 = 0x112d4fd30;
  func_0x0001000285a8(0x112d4fd30,&UNK_10d915f40);
  uVar23 = uStack_5a8;
  lVar5 = lStack_5b0;
  lVar19 = lStack_5b8;
  puVar1 = (undefined1 *)(lVar2 + *(int *)(lVar8 + 0x24));
  *puVar1 = uVar6;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar11;
  *(undefined8 *)(puVar1 + 0x20) = uVar22;
  puVar1[0x28] = 0;
  pcVar24 = *(code **)(lStack_5b0 + 0x68);
  (*pcVar24)(lStack_5b8,
             *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50,
             uStack_5a8);
  puVar10 = puStack_5d0;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000107c5f2b4(&dStack_b8,0x3ff0000000000000,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  lVar8 = 0x112d4fd38;
  func_0x0001000285a8(0x112d4fd38,&UNK_10d915f48);
  lVar2 = lVar2 + *(int *)(lVar8 + 0x24);
  FUN_100f88818(lVar19,lVar2);
  uVar7 = uStack_5c0;
  (*pcVar24)(uStack_5c0,
             *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO8circularyA2CmFWC_110348d60,uVar23);
  lVar18 = lVar19;
  func_0x000107c5f418(lVar19,uVar7);
  (**(code **)(lVar5 + 8))();
  dVar25 = dStack_b8 * 0.5;
  func_0x000107c5f7ac();
  func_0x000100f8885c(lVar19);
  lVar8 = 0x112d4fd40;
  puVar14 = &UNK_10d915f50;
  func_0x0001000285a8();
  puVar3 = (ulong *)(lVar2 + *(int *)(lVar8 + 0x44));
  puVar3[2] = uStack_b0;
  puVar3[1] = (ulong)dStack_b8;
  puVar3[8] = uVar7;
  puVar3[9] = uVar23;
  *puVar3 = (ulong)dVar25 & 0xfffffffffffffffe | (ulong)~(uint)lVar18 & 1;
  puVar3[4] = uStack_a0;
  puVar3[3] = uStack_a8;
  puVar3[5] = uStack_98;
  puVar3[6] = (ulong)puVar10;
  *(undefined2 *)(puVar3 + 7) = 0x100;
  func_0x000107c5f7ac();
  lVar19 = 0x112d4fd48;
  func_0x0001000285a8(0x112d4fd48,&UNK_10d915f58);
  plVar4 = (long *)(lVar2 + *(int *)(lVar19 + 0x24));
  *plVar4 = lVar8;
  plVar4[1] = (long)puVar14;
  return;
}



/* Entry: 100f87504; end: 100f8756f;  */

void FUN_100f87504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f87570,uVar1,uVar2);
  return;
}



/* Entry: 100f87570; end: 100f875eb;  */

void FUN_100f87570(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  lVar3 = *(long *)(lVar5 + 0x28);
  func_0x0001000a8868(lVar5 + 8,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f875ec;
                    /* WARNING: Could not recover jumptable at 0x000100f875e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 100f875ec; end: 100f8763b;  */

void FUN_100f875ec(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100f8763c,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Entry: 100f8763c; end: 100f876c3;  */

void FUN_100f8763c(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  if (cVar1 == '\x01') {
    puVar3 = (undefined8 *)(unaff_x22 + 0x28);
    *puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar3 = (undefined8 *)(unaff_x22 + 0x30);
    *puVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  }
  uVar2 = 0x112d4fcd0;
  func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
  func_0x000107c5f730(puVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100f876c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f876c4; end: 100f8792f;  */

void FUN_100f876c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uVar8 = 0x112d4fcc8;
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f72c(&uStack_70);
  lVar7 = lStack_68;
  uVar5 = uStack_70;
  if (lStack_68 != 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x78);
    func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
    func_0x000107c5f72c(&uStack_70);
    uVar6 = uStack_70;
    puVar11 = (undefined8 *)(uStack_70 + 0x38);
    lVar13 = *(long *)(uStack_70 + 0x10) + 1;
    do {
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(uVar6);
        return;
      }
      uVar9 = puVar11[-3];
      lVar3 = puVar11[-2];
      uVar1 = *puVar11;
      uVar4 = puVar11[1];
      lVar2 = puVar11[2];
      uVar10 = puVar11[3];
      lVar12 = puVar11[4];
      uVar14 = puVar11[6];
      if (uVar9 == uVar5 && lVar7 == lVar3) break;
      puVar11 = puVar11 + 10;
      func_0x000107c605b8(uVar9,lVar3,uVar5,lVar7,0);
    } while ((uVar9 & 1) == 0);
    func_0x000107c61434(lVar12);
    func_0x000107c61434(uVar14);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar2);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(uVar6);
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
    func_0x000107c5f770(&uStack_70);
    if (lVar12 == 0) {
      func_0x000107c61434(lVar2);
      uVar10 = uVar4;
      lVar12 = lVar2;
    }
    if ((uVar10 == uStack_70) && (lVar12 == lStack_68)) {
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lStack_68);
      func_0x000107c6142c(lVar12);
    }
    else {
      func_0x000107c605b8(uVar10,lVar12,uStack_70,lStack_68,0);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lStack_68);
      func_0x000107c6142c(lVar12);
      if ((uVar10 & 1) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        func_0x000107c5f730(&uStack_90,uVar8);
      }
    }
  }
  return;
}



/* Entry: 100f87930; end: 100f87b7b;  */

void FUN_100f87930(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [72];
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 *puVar7;
  
  lVar2 = 0;
  func_0x000107c5f6f0();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f7ac();
  lVar4 = *param_2;
  if (lVar4 == 0) {
    puStack_110 = (undefined1 *)0x0;
    lStack_108 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c5f6e8();
    (**(code **)(lVar8 + 0x68))
              (puVar7,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar2);
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = 0;
    puVar6 = puVar7;
    func_0x000107c5f6fc(0,puVar7,lVar5);
    func_0x000107c61574(lVar5);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    uVar1 = SUB81(puVar7,0);
    func_0x000107c5f56c();
    lVar2 = 0x4034000000000000;
    func_0x000107c5f280();
    func_0x000107c61170(lVar4);
    lStack_108 = 0;
    lStack_100 = CONCAT62(lStack_100._2_6_,1);
    lStack_f8 = CONCAT71(lStack_f8._1_7_,uVar1);
    uStack_d0 = 0;
    lStack_c0 = 0;
    lStack_b8 = CONCAT62(lStack_b8._2_6_,1);
    lStack_b0 = CONCAT71(lStack_b0._1_7_,uVar1);
    uStack_88 = 0;
    puStack_110 = puVar6;
    lStack_f0 = lVar2;
    lStack_e8 = lVar9;
    lStack_e0 = lVar10;
    lStack_d8 = lVar11;
    puStack_c8 = puVar6;
    lStack_a8 = lVar2;
    lStack_a0 = lVar9;
    lStack_98 = lVar10;
    lStack_90 = lVar11;
    FUN_100f88b14(&puStack_110,auStack_158,0x112d4fdc8,&UNK_10d915fc0);
    func_0x000100f88b5c(&puStack_c8,0x112d4fdc8,&UNK_10d915fc0);
  }
  *param_1 = lVar3;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 10) = uStack_d0;
  param_1[7] = lStack_e8;
  param_1[6] = lStack_f0;
  param_1[9] = lStack_d8;
  param_1[8] = lStack_e0;
  param_1[3] = lStack_108;
  param_1[2] = (long)puStack_110;
  param_1[5] = lStack_f8;
  param_1[4] = lStack_100;
  puStack_c8 = puStack_110;
  lStack_c0 = lStack_108;
  lStack_b8 = lStack_100;
  lStack_b0 = lStack_f8;
  lStack_a8 = lStack_f0;
  lStack_a0 = lStack_e8;
  lStack_98 = lStack_e0;
  lStack_90 = lStack_d8;
  uStack_88 = uStack_d0;
  FUN_100f88b14(&puStack_110,auStack_158,0x112d4fdc0,&UNK_10d915fb8);
  func_0x000100f88b5c(&puStack_c8,0x112d4fdc0,&UNK_10d915fb8);
  return;
}



/* Entry: 100f87b7c; end: 100f87d47;  */

void FUN_100f87b7c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 *puVar8;
  
  lVar3 = param_6;
  func_0x000107c5f408();
  *param_1 = lVar3;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112d4fda0;
  func_0x0001000285a8(0x112d4fda0,&UNK_10d915fa0);
  iVar1 = *(int *)(lVar3 + 0x2c);
  uStack_130 = *(undefined8 *)(param_6 + 0x70);
  uStack_128 = *(undefined8 *)(param_6 + 0x78);
  func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
  func_0x000107c5f72c(auStack_78);
  FUN_100f83abc(param_6,&uStack_130);
  puVar4 = &UNK_110370288;
  func_0x000107c613fc(&UNK_110370288,200,7);
  *(undefined8 *)(puVar4 + 0x98) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x90) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_98;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_a0;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_88;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_90;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_80;
  *(undefined8 *)(puVar4 + 0x58) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x50) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x68) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x60) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x78) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x70) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x88) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x80) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x18) = uStack_128;
  *(undefined8 *)(puVar4 + 0x10) = uStack_130;
  *(undefined8 *)(puVar4 + 0x28) = uStack_118;
  *(undefined8 *)(puVar4 + 0x20) = uStack_120;
  *(undefined8 *)(puVar4 + 0x38) = uStack_108;
  *(undefined8 *)(puVar4 + 0x30) = uStack_110;
  *(undefined8 *)(puVar4 + 0x48) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x40) = uStack_100;
  uVar5 = 0x112d4fa80;
  func_0x0001000285a8(0x112d4fa80,&UNK_10d915a30);
  uVar9 = 0x112d4fda8;
  FUN_100f889c4(0x112d4fda8,0x112d4fa80,&UNK_10d915a30,PTR___sSayxGSksMc_11034dd18);
  uVar6 = uVar9;
  FUN_100f88a08();
  uVar7 = uVar6;
  func_0x000100f88a48();
  puVar8 = auStack_78;
  func_0x000107c5f78c((long)param_1 + (long)iVar1,puVar8,FUN_100f889bc,puVar4,uVar5,
                      PTR___sSSN_11034da80,&UNK_1103706a8,uVar9,uVar6,uVar7);
  uVar2 = SUB81(puVar8,0);
  func_0x000107c5f568();
  uVar9 = 0x4020000000000000;
  uVar5 = uStack_100;
  func_0x000107c5f280();
  lVar3 = 0x112d4fd70;
  func_0x0001000285a8(0x112d4fd70,&UNK_10d915f80);
  puVar8 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar8 = uVar2;
  *(undefined8 *)(puVar8 + 8) = uVar9;
  *(undefined8 *)(puVar8 + 0x10) = uVar5;
  *(undefined8 *)(puVar8 + 0x18) = param_4;
  *(undefined8 *)(puVar8 + 0x20) = param_5;
  puVar8[0x28] = 0;
  return;
}



/* Entry: 100f87d48; end: 100f87f4f;  */

void FUN_100f87d48(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_78 = param_2[5];
  lStack_80 = param_2[4];
  lStack_68 = param_2[7];
  lStack_70 = param_2[6];
  lStack_58 = param_2[9];
  lStack_60 = param_2[8];
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  lStack_88 = param_2[3];
  lStack_90 = param_2[2];
  lStack_1a0 = *(long *)(param_3 + 0x90);
  lStack_1a8 = *(long *)(param_3 + 0x88);
  lStack_1b0 = *(long *)(param_3 + 0x80);
  FUN_100f88a88(&lStack_a0,&lStack_158);
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f72c(&lStack_158);
  if (lStack_150 == 0) {
    bVar6 = 0;
  }
  else {
    if ((lStack_158 == lStack_a0) && (lStack_150 == lStack_98)) {
      bVar6 = 1;
    }
    else {
      func_0x000107c605b8(lStack_158,lStack_150,lStack_a0,lStack_98,0);
      bVar6 = (byte)lStack_158;
    }
    func_0x000107c6142c(lStack_150);
  }
  func_0x000100f88ac4(param_3 + 8,param_1 + 0xb);
  lStack_150 = *(undefined8 *)(param_3 + 0x38);
  lStack_158 = *(long *)(param_3 + 0x30);
  uStack_148 = *(undefined8 *)(param_3 + 0x40);
  uStack_140 = *(undefined8 *)(param_3 + 0x48);
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f778(&lStack_1b0);
  lVar3 = lStack_1a0;
  lVar2 = lStack_1a8;
  lVar1 = lStack_1b0;
  FUN_100f83abc(param_3,&lStack_158);
  puVar4 = &UNK_1103702b0;
  func_0x000107c613fc(&UNK_1103702b0,0x118,7);
  *(undefined8 *)(puVar4 + 0x98) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x90) = uStack_d8;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_c0;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_c8;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_b8;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x58) = uStack_110;
  *(undefined8 *)(puVar4 + 0x50) = uStack_118;
  *(undefined8 *)(puVar4 + 0x68) = uStack_100;
  *(undefined8 *)(puVar4 + 0x60) = uStack_108;
  *(undefined8 *)(puVar4 + 0x78) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x70) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x88) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x80) = uStack_e8;
  *(long *)(puVar4 + 0x18) = lStack_150;
  *(long *)(puVar4 + 0x10) = lStack_158;
  *(undefined8 *)(puVar4 + 0x28) = uStack_140;
  *(undefined8 *)(puVar4 + 0x20) = uStack_148;
  *(undefined8 *)(puVar4 + 0x38) = uStack_130;
  *(undefined8 *)(puVar4 + 0x30) = uStack_138;
  *(undefined8 *)(puVar4 + 0x48) = uStack_120;
  *(undefined8 *)(puVar4 + 0x40) = uStack_128;
  *(long *)(puVar4 + 0xe0) = lStack_88;
  *(long *)(puVar4 + 0xd8) = lStack_90;
  *(long *)(puVar4 + 0xf0) = lStack_78;
  *(long *)(puVar4 + 0xe8) = lStack_80;
  *(long *)(puVar4 + 0x100) = lStack_68;
  *(long *)(puVar4 + 0xf8) = lStack_70;
  *(long *)(puVar4 + 0x110) = lStack_58;
  *(long *)(puVar4 + 0x108) = lStack_60;
  *(long *)(puVar4 + 0xd0) = lStack_98;
  *(long *)(puVar4 + 200) = lStack_a0;
  param_1[5] = lStack_78;
  param_1[4] = lStack_80;
  param_1[7] = lStack_68;
  param_1[6] = lStack_70;
  param_1[9] = lStack_58;
  param_1[8] = lStack_60;
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = lStack_90;
  *(byte *)(param_1 + 10) = bVar6 & 1;
  param_1[0x11] = lVar2;
  param_1[0x10] = lVar1;
  param_1[0x12] = lVar3;
  param_1[0x13] = lStack_198;
  param_1[0x14] = (long)FUN_100f88b08;
  param_1[0x15] = (long)puVar4;
  uStack_160 = 0;
  FUN_100f88a88(&lStack_a0,&lStack_1b0);
  uVar5 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c5f728(param_1 + 0x16,&uStack_160,uVar5);
  return;
}



/* Entry: 100f87f50; end: 100f88007;  */

void FUN_100f87f50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *param_2;
  uStack_38 = param_2[1];
  func_0x000107c61434();
  uVar3 = 0x112d4fcc8;
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f730(&uStack_40,uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c6157c(uVar2);
  uVar3 = 0x112d4fd00;
  func_0x0001000285a8(0x112d4fd00,&UNK_10d915f28);
  func_0x000107c5f72c(&lStack_48);
  lStack_60 = lStack_48 + 1;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  func_0x000107c5f730(&lStack_60,uVar3);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 100f88008; end: 100f881e3;  */

void FUN_100f88008(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = 0;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(uVar7 - 8);
  uVar8 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100f881e4();
  if ((uVar8 & 1) != 0) {
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_70 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar9 = 0x112d4fc88;
    func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
    func_0x000107c5f770(&uStack_90);
    uVar1 = uStack_88;
    uStack_80 = uStack_90;
    uStack_78 = uStack_88;
    func_0x000107c5eb88(lVar13);
    FUN_100e8b654();
    lVar10 = lVar13;
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c601f0(lVar13,PTR___sSSN_11034da80,uVar9);
    (**(code **)(lVar14 + 8))(lVar13,uVar7);
    func_0x000107c6142c(uVar1);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
    uVar9 = 0x112d4fcc8;
    uStack_80 = uVar1;
    uStack_78 = uVar3;
    uStack_70 = uVar15;
    func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
    func_0x000107c5f72c(&uStack_90);
    uVar6 = uStack_88;
    uVar4 = uStack_90;
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
    func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
    func_0x000107c5f72c(&uStack_90);
    uVar5 = uStack_90;
    puVar12 = puVar11;
    FUN_100f89d70(lVar10,puVar11,uVar4,uVar6,uStack_90);
    func_0x000107c61434(puVar12);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar6);
    pcVar2 = *(code **)(unaff_x20 + 0x50);
    uStack_80 = uVar1;
    uStack_78 = uVar3;
    uStack_70 = uVar15;
    func_0x000107c5f72c(&uStack_90,uVar9);
    (*pcVar2)(lVar10,puVar12,uStack_90,uStack_88);
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(uStack_88);
  }
  return;
}



/* Entry: 100f881e4; end: 100f882e3;  */

bool FUN_100f881e4(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = 0x112d4fc88;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f770(&uStack_70);
  uStack_60 = uStack_70;
  uStack_58 = uStack_68;
  func_0x000107c5eb88(uVar5);
  FUN_100e8b654();
  uVar3 = uVar5;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar5,PTR___sSSN_11034da80,uVar2);
  (**(code **)(lVar6 + 8))(uVar5,lVar1);
  func_0x000107c6142c(uStack_68);
  func_0x000107c6142c(puVar4);
  uVar3 = uVar3 & 0xffffffffffff;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)puVar4 >> 0x38 & 0xf;
  }
  return uVar3 != 0;
}



/* Entry: 100f882e4; end: 100f882f3;  */

void FUN_100f882e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f882f4; end: 100f8834f;  */

void FUN_100f882f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100f88350;
  plVar4[7] = unaff_x20 + 0x20;
  lVar2 = 0;
  func_0x000107c5fcec(0,uVar1);
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[8] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[9] = lVar2;
  plVar4[10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f87570,lVar2,lVar3);
  return;
}



/* Entry: 100f88350; end: 100f8838b;  */

void FUN_100f88350(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f88388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f8838c; end: 100f883d7;  */

void FUN_100f8838c(void)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_21,uVar1);
  return;
}



/* Entry: 100f883d8; end: 100f883df;  */

void FUN_100f883d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar8 = 0x112d4fcc8;
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f72c(&uStack_70);
  lVar7 = lStack_68;
  uVar5 = uStack_70;
  if (lStack_68 != 0) {
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x88);
    func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
    func_0x000107c5f72c(&uStack_70);
    uVar6 = uStack_70;
    puVar11 = (undefined8 *)(uStack_70 + 0x38);
    lVar13 = *(long *)(uStack_70 + 0x10) + 1;
    do {
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        func_0x000107c6142c(lVar7);
        func_0x000107c6142c(uVar6);
        return;
      }
      uVar9 = puVar11[-3];
      lVar3 = puVar11[-2];
      uVar1 = *puVar11;
      uVar4 = puVar11[1];
      lVar2 = puVar11[2];
      uVar10 = puVar11[3];
      lVar12 = puVar11[4];
      uVar14 = puVar11[6];
      if (uVar9 == uVar5 && lVar7 == lVar3) break;
      puVar11 = puVar11 + 10;
      func_0x000107c605b8(uVar9,lVar3,uVar5,lVar7,0);
    } while ((uVar9 & 1) == 0);
    func_0x000107c61434(lVar12);
    func_0x000107c61434(uVar14);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(lVar2);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(uVar6);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
    func_0x000107c5f770(&uStack_70);
    if (lVar12 == 0) {
      func_0x000107c61434(lVar2);
      uVar10 = uVar4;
      lVar12 = lVar2;
    }
    if ((uVar10 == uStack_70) && (lVar12 == lStack_68)) {
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lStack_68);
      func_0x000107c6142c(lVar12);
    }
    else {
      func_0x000107c605b8(uVar10,lVar12,uStack_70,lStack_68,0);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar2);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(lVar3);
      func_0x000107c6142c(lStack_68);
      func_0x000107c6142c(lVar12);
      if ((uVar10 & 1) == 0) {
        uStack_90 = 0;
        uStack_88 = 0;
        func_0x000107c5f730(&uStack_90,uVar8);
      }
    }
  }
  return;
}



/* Entry: 100f883e0; end: 100f887d7;  */

void FUN_100f883e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4fc90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fc60;
  func_0x00010002969c(0x112d4fc60,&UNK_10d915e88);
  uVar2 = 0x112d4f148;
  func_0x00010002969c(0x112d4f148,&UNK_10d914e20);
  uVar3 = uVar2;
  func_0x000100f88488();
  puVar4 = &uStack_30;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c614f4(puVar4,&DAT_10e61b8fc,1);
  puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_40 = puVar4;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_40);
  puRam0000000112d4fc90 = puVar5;
  return;
}



/* Entry: 100f887d8; end: 100f88817;  */

void FUN_100f887d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915ff4;
  func_0x000107c61520(&UNK_10d915ff4,&UNK_110370368);
  puRam0000000112d4fd28 = puVar1;
  return;
}



/* Entry: 100f88818; end: 100f88897;  */

undefined8 FUN_100f88818(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5f784();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100f88898; end: 100f8889f;  */

void FUN_100f88898(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 *puVar8;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar9;
  func_0x000107c5f408();
  *param_1 = lVar3;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112d4fda0;
  func_0x0001000285a8(0x112d4fda0,&UNK_10d915fa0);
  iVar1 = *(int *)(lVar3 + 0x2c);
  uStack_130 = *(undefined8 *)(lVar9 + 0x70);
  uStack_128 = *(undefined8 *)(lVar9 + 0x78);
  func_0x0001000285a8(0x112d4fcd0,&UNK_10d915ef0);
  func_0x000107c5f72c(auStack_78);
  FUN_100f83abc(lVar9,&uStack_130);
  puVar4 = &UNK_110370288;
  func_0x000107c613fc(&UNK_110370288,200,7);
  *(undefined8 *)(puVar4 + 0x98) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x90) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_98;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_a0;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_88;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_90;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_80;
  *(undefined8 *)(puVar4 + 0x58) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x50) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x68) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x60) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x78) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x70) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x88) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x80) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x18) = uStack_128;
  *(undefined8 *)(puVar4 + 0x10) = uStack_130;
  *(undefined8 *)(puVar4 + 0x28) = uStack_118;
  *(undefined8 *)(puVar4 + 0x20) = uStack_120;
  *(undefined8 *)(puVar4 + 0x38) = uStack_108;
  *(undefined8 *)(puVar4 + 0x30) = uStack_110;
  *(undefined8 *)(puVar4 + 0x48) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x40) = uStack_100;
  uVar5 = 0x112d4fa80;
  func_0x0001000285a8(0x112d4fa80,&UNK_10d915a30);
  uVar10 = 0x112d4fda8;
  FUN_100f889c4(0x112d4fda8,0x112d4fa80,&UNK_10d915a30,PTR___sSayxGSksMc_11034dd18);
  uVar6 = uVar10;
  FUN_100f88a08();
  uVar7 = uVar6;
  func_0x000100f88a48();
  puVar8 = auStack_78;
  func_0x000107c5f78c((long)param_1 + (long)iVar1,puVar8,FUN_100f889bc,puVar4,uVar5,
                      PTR___sSSN_11034da80,&UNK_1103706a8,uVar10,uVar6,uVar7);
  uVar2 = SUB81(puVar8,0);
  func_0x000107c5f568();
  uVar10 = 0x4020000000000000;
  uVar5 = uStack_100;
  func_0x000107c5f280();
  lVar3 = 0x112d4fd70;
  func_0x0001000285a8(0x112d4fd70,&UNK_10d915f80);
  puVar8 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar8 = uVar2;
  *(undefined8 *)(puVar8 + 8) = uVar10;
  *(undefined8 *)(puVar8 + 0x10) = uVar5;
  *(undefined8 *)(puVar8 + 0x18) = param_4;
  *(undefined8 *)(puVar8 + 0x20) = param_5;
  puVar8[0x28] = 0;
  return;
}



/* Entry: 100f888a0; end: 100f88937;  */

void FUN_100f888a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4fd78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fd70;
  func_0x00010002969c(0x112d4fd70,&UNK_10d915f80);
  uVar2 = 0x112d4fd80;
  FUN_100f889c4(0x112d4fd80,0x112d4fd88,&UNK_10d915f88,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4fd78 = puVar3;
  return;
}



/* Entry: 100f88938; end: 100f889bb;  */

void FUN_100f88938(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f889bc; end: 100f889c3;  */

void FUN_100f889bc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  byte bVar6;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_78 = param_2[5];
  lStack_80 = param_2[4];
  lStack_68 = param_2[7];
  lStack_70 = param_2[6];
  lStack_58 = param_2[9];
  lStack_60 = param_2[8];
  lStack_98 = param_2[1];
  lStack_a0 = *param_2;
  lStack_88 = param_2[3];
  lStack_90 = param_2[2];
  lStack_1a0 = *(long *)(unaff_x20 + 0xa0);
  lStack_1a8 = *(long *)(unaff_x20 + 0x98);
  lStack_1b0 = *(long *)(unaff_x20 + 0x90);
  FUN_100f88a88(&lStack_a0,&lStack_158);
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f72c(&lStack_158);
  if (lStack_150 == 0) {
    bVar6 = 0;
  }
  else {
    if ((lStack_158 == lStack_a0) && (lStack_150 == lStack_98)) {
      bVar6 = 1;
    }
    else {
      func_0x000107c605b8(lStack_158,lStack_150,lStack_a0,lStack_98,0);
      bVar6 = (byte)lStack_158;
    }
    func_0x000107c6142c(lStack_150);
  }
  func_0x000100f88ac4(unaff_x20 + 0x18,param_1 + 0xb);
  lStack_150 = *(undefined8 *)(unaff_x20 + 0x48);
  lStack_158 = *(long *)(unaff_x20 + 0x40);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f778(&lStack_1b0);
  lVar3 = lStack_1a0;
  lVar2 = lStack_1a8;
  lVar1 = lStack_1b0;
  FUN_100f83abc(unaff_x20 + 0x10,&lStack_158);
  puVar4 = &UNK_1103702b0;
  func_0x000107c613fc(&UNK_1103702b0,0x118,7);
  *(undefined8 *)(puVar4 + 0x98) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x90) = uStack_d8;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_c0;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_c8;
  *(undefined8 *)(puVar4 + 0xb8) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_b8;
  *(undefined8 *)(puVar4 + 0xc0) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x58) = uStack_110;
  *(undefined8 *)(puVar4 + 0x50) = uStack_118;
  *(undefined8 *)(puVar4 + 0x68) = uStack_100;
  *(undefined8 *)(puVar4 + 0x60) = uStack_108;
  *(undefined8 *)(puVar4 + 0x78) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x70) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x88) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x80) = uStack_e8;
  *(long *)(puVar4 + 0x18) = lStack_150;
  *(long *)(puVar4 + 0x10) = lStack_158;
  *(undefined8 *)(puVar4 + 0x28) = uStack_140;
  *(undefined8 *)(puVar4 + 0x20) = uStack_148;
  *(undefined8 *)(puVar4 + 0x38) = uStack_130;
  *(undefined8 *)(puVar4 + 0x30) = uStack_138;
  *(undefined8 *)(puVar4 + 0x48) = uStack_120;
  *(undefined8 *)(puVar4 + 0x40) = uStack_128;
  *(long *)(puVar4 + 0xe0) = lStack_88;
  *(long *)(puVar4 + 0xd8) = lStack_90;
  *(long *)(puVar4 + 0xf0) = lStack_78;
  *(long *)(puVar4 + 0xe8) = lStack_80;
  *(long *)(puVar4 + 0x100) = lStack_68;
  *(long *)(puVar4 + 0xf8) = lStack_70;
  *(long *)(puVar4 + 0x110) = lStack_58;
  *(long *)(puVar4 + 0x108) = lStack_60;
  *(long *)(puVar4 + 0xd0) = lStack_98;
  *(long *)(puVar4 + 200) = lStack_a0;
  param_1[5] = lStack_78;
  param_1[4] = lStack_80;
  param_1[7] = lStack_68;
  param_1[6] = lStack_70;
  param_1[9] = lStack_58;
  param_1[8] = lStack_60;
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  param_1[3] = lStack_88;
  param_1[2] = lStack_90;
  *(byte *)(param_1 + 10) = bVar6 & 1;
  param_1[0x11] = lVar2;
  param_1[0x10] = lVar1;
  param_1[0x12] = lVar3;
  param_1[0x13] = lStack_198;
  param_1[0x14] = (long)FUN_100f88b08;
  param_1[0x15] = (long)puVar4;
  uStack_160 = 0;
  FUN_100f88a88(&lStack_a0,&lStack_1b0);
  uVar5 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c5f728(param_1 + 0x16,&uStack_160,uVar5);
  return;
}



/* Entry: 100f889c4; end: 100f88a07;  */

void FUN_100f889c4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 100f88a08; end: 100f88a87;  */

void FUN_100f88a08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fdb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9162b4;
  func_0x000107c61520(&UNK_10d9162b4,&UNK_1103706a8);
  puRam0000000112d4fdb0 = puVar1;
  return;
}



/* Entry: 100f88a88; end: 100f88b07;  */

undefined8 FUN_100f88a88(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103ba15b4)(param_2,param_1);
  return param_2;
}



/* Entry: 100f88b08; end: 100f88b13;  */

void FUN_100f88b08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *(undefined8 *)(unaff_x20 + 200);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xd0);
  func_0x000107c61434();
  uVar3 = 0x112d4fcc8;
  func_0x0001000285a8(0x112d4fcc8,&UNK_10d915ee8);
  func_0x000107c5f730(&uStack_40,uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c6157c(uVar2);
  uVar3 = 0x112d4fd00;
  func_0x0001000285a8(0x112d4fd00,&UNK_10d915f28);
  func_0x000107c5f72c(&lStack_48);
  lStack_60 = lStack_48 + 1;
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  func_0x000107c5f730(&lStack_60,uVar3);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 100f88b14; end: 100f88b9b;  */

undefined8 FUN_100f88b14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100f88b9c; end: 100f88def;  */

undefined * FUN_100f88b9c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITextField_1126af060);
  func_0x000107c453e4();
  uVar2 = 0x112d4fe08;
  func_0x0001000285a8(0x112d4fe08,&UNK_10d9160d8);
  func_0x000107c5f530(&uStack_78);
  uVar7 = uStack_78;
  func_0x000107c53fcc(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c54adc(puVar1);
  func_0x000107c59c78(puVar1);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar3 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  puVar6 = PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar9;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = 0;
  FUN_100f89a24();
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = uVar10;
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  lVar5 = lVar3;
  func_0x000100ecbca8(lVar3);
  func_0x000107c61588(lVar3);
  FUN_100ef0820((undefined8 *)(lVar3 + 0x20));
  puVar6 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(uVar7,uVar8);
  uVar4 = 0;
  FUN_100eca28c(0);
  uVar8 = uVar4;
  FUN_100ecbdec();
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,uVar4,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar5);
  func_0x000107c48af8(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c529c0(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c52a84(puVar1);
  func_0x000107c57ed4(puVar1);
  func_0x000107c54518(puVar1);
  func_0x000107c52b50(puVar1);
  func_0x000107c5f530(&uStack_78,uVar2);
  func_0x000107c3d8b8(puVar1);
  func_0x000107c61170(uStack_78);
  func_0x000107c5381c(0x437a0000,puVar1);
  func_0x000107c537fc(0x437a0000,puVar1);
  return puVar1;
}



/* Entry: 100f88df0; end: 100f89097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f88df0(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte bStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar1 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar4 = 0;
    param_2 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
  }
  lStack_68 = unaff_x20[1];
  lStack_70 = *unaff_x20;
  lStack_58 = unaff_x20[3];
  lStack_60 = unaff_x20[2];
  uVar2 = 0x112d4fc88;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f770(&bStack_80);
  lVar3 = lStack_78;
  if (param_2 == 0) {
    func_0x000107c6142c(lStack_78);
  }
  else {
    if ((uVar4 == CONCAT71(uStack_7f,bStack_80)) && (param_2 == lStack_78)) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lStack_78);
      goto LAB_100f88f24;
    }
    func_0x000107c605b8(uVar4,param_2,CONCAT71(uStack_7f,bStack_80),lStack_78,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar3);
    if ((uVar4 & 1) != 0) goto LAB_100f88f24;
  }
  lStack_68 = unaff_x20[1];
  lStack_70 = *unaff_x20;
  lStack_58 = unaff_x20[3];
  lStack_60 = unaff_x20[2];
  func_0x000107c5f770(&bStack_80,uVar2);
  uVar2 = CONCAT71(uStack_7f,bStack_80);
  func_0x000107c5fadc(uVar2,lStack_78);
  func_0x000107c6142c(lStack_78);
  func_0x000107c59c6c(param_1);
  func_0x000107c61170(uVar2);
LAB_100f88f24:
  func_0x000107c54adc(param_1);
  func_0x000107c59c78(param_1);
  uVar2 = 0x112d4fe08;
  func_0x0001000285a8(0x112d4fe08,&UNK_10d9160d8);
  func_0x000107c5f530(&lStack_70);
  lVar3 = *(long *)(lStack_70 + _DAT_112d4fdd8);
  func_0x000107c61170();
  lVar5 = unaff_x20[0xd];
  if (lVar3 != lVar5) {
    func_0x000107c5f530(&lStack_70,uVar2);
    *(long *)(lStack_70 + _DAT_112d4fdd8) = lVar5;
    func_0x000107c61170();
    uVar1 = param_1;
    func_0x000107c3e868(param_1);
    func_0x000107c61180();
    uVar4 = param_1;
    func_0x000107c5c888(param_1);
    func_0x000107c61180();
    func_0x000107c58e14(param_1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
  }
  lStack_68 = unaff_x20[5];
  lStack_70 = unaff_x20[4];
  lStack_60 = CONCAT71(lStack_60._1_7_,(char)unaff_x20[6]);
  uVar2 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&bStack_80);
  if ((bStack_80 == 1) && (uVar1 = param_1, func_0x000107c49d98(), (uVar1 & 1) == 0)) {
    func_0x000107c3e738(param_1);
  }
  lStack_68 = unaff_x20[5];
  lStack_70 = unaff_x20[4];
  lStack_60 = CONCAT71(lStack_60._1_7_,(char)unaff_x20[6]);
  func_0x000107c5f770(&bStack_80,uVar2);
  if (((bStack_80 & 1) == 0) && (uVar1 = param_1, func_0x000107c49d98(), (int)uVar1 != 0)) {
    func_0x000107c50588(param_1);
  }
  return;
}


