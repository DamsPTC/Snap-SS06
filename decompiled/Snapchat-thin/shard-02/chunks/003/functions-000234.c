/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c01924; end: 101c01957;  */

undefined8 FUN_101c01924(undefined8 param_1,undefined8 param_2)

{
  FUN_101c015c0(param_2,param_1,&UNK_110455bd8);
  return param_2;
}



/* Entry: 101c01958; end: 101c0195f;  */

void FUN_101c01958(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = (ulong)*(ushort *)(unaff_x20 + 0x20);
  FUN_101c10620(uVar1,uVar4,uVar5);
  FUN_101c01924((undefined8 *)(unaff_x20 + 0x10),&uStack_a0);
  puVar2 = &UNK_110455c30;
  func_0x000107c613fc(&UNK_110455c30,0x70,7);
  *(undefined8 *)(puVar2 + 0x38) = uStack_78;
  *(undefined8 *)(puVar2 + 0x30) = uStack_80;
  *(undefined8 *)(puVar2 + 0x48) = uStack_68;
  *(undefined8 *)(puVar2 + 0x40) = uStack_70;
  *(undefined8 *)(puVar2 + 0x58) = uStack_58;
  *(undefined8 *)(puVar2 + 0x50) = uStack_60;
  *(undefined8 *)(puVar2 + 0x68) = uStack_48;
  *(undefined8 *)(puVar2 + 0x60) = uStack_50;
  *(undefined8 *)(puVar2 + 0x18) = uStack_98;
  *(undefined8 *)(puVar2 + 0x10) = uStack_a0;
  *(undefined8 *)(puVar2 + 0x28) = uStack_88;
  *(undefined8 *)(puVar2 + 0x20) = uStack_90;
  uVar3 = uVar1;
  func_0x0001001ca524(uVar1,uVar4,uVar5,3,0,0,&UNK_10d9de0f0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x00010007d980(uVar1,uVar4,uVar5);
  return;
}



/* Entry: 101c01960; end: 101c019ab;  */

void FUN_101c01960(void)

{
  long unaff_x20;
  
  FUN_101c015ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c019ac; end: 101c019ff;  */

void FUN_101c019ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c01a00;
  plVar3[3] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c013e0,lVar1,lVar2);
  return;
}



/* Entry: 101c01a00; end: 101c01a3b;  */

void FUN_101c01a00(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c01a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c01a3c; end: 101c01ac3;  */

undefined8 FUN_101c01a3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101c01ac4; end: 101c01ba7;  */

void FUN_101c01ac4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112e08cf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e08cd8;
  func_0x00010002969c(0x112e08cd8,&UNK_10d9de0e0);
  uVar2 = 0x112e08cb0;
  func_0x00010002969c(0x112e08cb0,&UNK_10d9de0d0);
  uVar3 = 0x112e08cc8;
  FUN_101c01890(0x112e08cc8,0x112e08cb0,&UNK_10d9de0d0,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar4 = uVar3;
  FUN_101c018d4();
  puStack_48 = &UNK_110456990;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA06ButtonE0Rd__lFQOMQ_110349490,1
                     );
  puStack_58 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112e08cf8 = puVar6;
  return;
}



/* Entry: 101c01ba8; end: 101c01baf;  */

void FUN_101c01ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101c01bb0; end: 101c01c1b;  */

undefined8 * FUN_101c01bb0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c01c1c; end: 101c01ccb;  */

int FUN_101c01c1c(ulong *param_1,int param_2)

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



/* Entry: 101c01ccc; end: 101c01d5b;  */

uint FUN_101c01ccc(uint param_1)

{
  func_0x000107c5f304();
  return param_1 & 1;
}



/* Entry: 101c01d5c; end: 101c01d6b;  */

undefined8 * FUN_101c01d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101c01d6c; end: 101c01dd7;  */

undefined8 * FUN_101c01d6c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c01dd8; end: 101c01e6b;  */

int FUN_101c01dd8(ulong *param_1,int param_2)

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



/* Entry: 101c01e6c; end: 101c01ec3;  */

void FUN_101c01e6c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000031,0x800000010f003490,
                      "MusicProviderConnectionSheetImplementation/DismissConnectionSheetAction.swift"
                      ,0x4d,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c01ec4);
  (*pcVar1)();
}



/* Entry: 101c01ec4; end: 101c01edb;  */

void FUN_101c01ec4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = uRam0000000112e08d28;
  puVar1 = PTR_FUN_112e08d20;
  param_1[1] = uRam0000000112e08d28;
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 101c01edc; end: 101c01f6b;  */

uint FUN_101c01edc(uint param_1)

{
  func_0x000107c5f304();
  return param_1 & 1;
}



/* Entry: 101c01f6c; end: 101c01f73;  */

undefined8 * FUN_101c01f6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101c01f74; end: 101c01fef;  */

undefined8 FUN_101c01f74(undefined8 param_1)

{
  undefined8 auStack_28 [3];
  
  func_0x000101c01fb0();
  func_0x000107c5f3fc(auStack_28,&UNK_110455dd0,&UNK_110455dd0,param_1);
  return auStack_28[0];
}



/* Entry: 101c01ff0; end: 101c02017;  */

undefined1  [16] FUN_101c01ff0(void)

{
  return ZEXT816(0x110455dd0);
}



/* Entry: 101c02018; end: 101c0206f;  */

uint FUN_101c02018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001000ae2ec();
  func_0x000107c5f308(param_1,param_2,param_3,param_4,uVar1);
  return (uint)param_1 & 1;
}



/* Entry: 101c02070; end: 101c02097;  */

undefined8 FUN_101c02070(void)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = 0x101c02118;
  (*(code *)0x101c02118)();
  func_0x000107c5f3fc(&uStack_28,&UNK_110455e10,&UNK_110455e10,uVar1);
  return uStack_28;
}



/* Entry: 101c02098; end: 101c020d7;  */

undefined8 FUN_101c02098(code *param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  (*param_1)();
  func_0x000107c5f3fc(&uStack_28,param_2,param_2,param_1);
  return uStack_28;
}



/* Entry: 101c020d8; end: 101c02157;  */

void FUN_101c020d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9de2a0;
  func_0x000107c61520(&UNK_10d9de2a0,&UNK_110455e30);
  puRam0000000112e08d48 = puVar1;
  return;
}



/* Entry: 101c02158; end: 101c02177;  */

undefined1  [16] FUN_101c02158(void)

{
  return ZEXT816(0x110455e10);
}



/* Entry: 101c02178; end: 101c021bf;  */

void FUN_101c02178(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e08d78,&UNK_10d9de2e0);
  pcVar1 = FUN_101c021c0;
  func_0x0001000823a8(FUN_101c021c0,0);
  pcRam0000000112e08d70 = pcVar1;
  return;
}



/* Entry: 101c021c0; end: 101c02217;  */

void FUN_101c021c0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000015,0x800000010f003550,
                      "MusicProviderConnectionSheetImplementation/Environment+ExternalMusicServices.swift"
                      ,0x52,2,0x17,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c02218);
  (*pcVar1)();
}



/* Entry: 101c02218; end: 101c02233;  */

void FUN_101c02218(undefined8 *param_1)

{
  if (lRam0000000112e08d68 != -1) {
    func_0x000107c61568(0x112e08d68,FUN_101c02178);
  }
  *param_1 = uRam0000000112e08d70;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c02234; end: 101c0227b;  */

void FUN_101c02234(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e087f8,&UNK_10d9dd2c0);
  pcVar1 = FUN_101c0227c;
  func_0x0001000823a8(FUN_101c0227c,0);
  pcRam0000000112e08d60 = pcVar1;
  return;
}



/* Entry: 101c0227c; end: 101c022d3;  */

void FUN_101c0227c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001c,0x800000010f003530,
                      "MusicProviderConnectionSheetImplementation/Environment+ExternalMusicServices.swift"
                      ,0x52,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c022d4);
  (*pcVar1)();
}



/* Entry: 101c022d4; end: 101c022ef;  */

void FUN_101c022d4(undefined8 *param_1)

{
  if (lRam0000000112e08d58 != -1) {
    func_0x000107c61568(0x112e08d58,FUN_101c02234);
  }
  *param_1 = uRam0000000112e08d60;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c022f0; end: 101c0233b;  */

void FUN_101c022f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  if (*param_4 != -1) {
    func_0x000107c61568(param_4,param_6);
  }
  *param_1 = *param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c0233c; end: 101c02343;  */

uint FUN_101c0233c(uint param_1)

{
  func_0x000107c5f304();
  return param_1 & 1;
}



/* Entry: 101c02344; end: 101c0237f;  */

void FUN_101c02344(undefined8 param_1,undefined8 param_2)

{
  func_0x000101c01f2c();
  func_0x000107c5f3fc(param_1,&UNK_110455d88,&UNK_110455d88,param_2);
  return;
}



/* Entry: 101c02380; end: 101c02393;  */

void FUN_101c02380(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1[1];
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  (*(code *)0x101c01f2c)();
  func_0x000107c6157c(uVar1);
  func_0x000107c5f400(&uStack_40,&UNK_110455d88,&UNK_110455d88,param_1);
  return;
}



/* Entry: 101c02394; end: 101c023f3;  */

void FUN_101c02394(undefined8 *param_1)

{
  code *in_x4;
  undefined8 in_x5;
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1[1];
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  (*in_x4)();
  func_0x000107c6157c(uVar1);
  func_0x000107c5f400(&uStack_40,in_x5,in_x5,param_1);
  return;
}



/* Entry: 101c023f4; end: 101c0242f;  */

void FUN_101c023f4(undefined8 param_1,undefined8 param_2)

{
  func_0x000101c02118();
  func_0x000107c5f3fc(param_1,&UNK_110455e10,&UNK_110455e10,param_2);
  return;
}



/* Entry: 101c02430; end: 101c0248b;  */

void FUN_101c02430(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  uStack_38 = uVar1;
  func_0x000101c02118();
  func_0x000107c6157c(uVar1);
  func_0x000107c5f400(&uStack_38,&UNK_110455e10,&UNK_110455e10,param_1);
  return;
}



/* Entry: 101c0248c; end: 101c026c7;  */

void FUN_101c0248c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e08d80,&UNK_10d9de2f0);
  puVar1 = &UNK_110455e70;
  func_0x000107c613fc(&UNK_110455e70,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_101c026c8,puVar1);
  return;
}



/* Entry: 101c026c8; end: 101c026fb;  */

void FUN_101c026c8(void)

{
  long unaff_x20;
  
  func_0x000101c025a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101c026fc; end: 101c0281b;  */

undefined * FUN_101c026fc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_a0 [40];
  long alStack_78 [5];
  
  func_0x000103a83784();
  lVar6 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 == 0) {
    func_0x000107c6142c();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    do {
      func_0x00010008a7c8(alStack_78);
      lVar2 = alStack_78[0];
      if (alStack_78[0] != 0) {
        func_0x000100083b20(auStack_a0);
        func_0x000107c61574(lVar2);
        func_0x000101122624(auStack_a0,alStack_78);
        puVar3 = puVar4;
        func_0x000107c61558();
        puVar5 = puVar4;
        if (((ulong)puVar3 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_101c0a934(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puVar4 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_101c0a934(puVar4,uVar1 + 1,1,puVar5);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        func_0x000101122624(alStack_78,puVar4 + uVar1 * 0x28 + 0x20);
      }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar4;
}



/* Entry: 101c0281c; end: 101c028b7;  */

void FUN_101c0281c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x41) = param_4;
  *(undefined4 *)(unaff_x22 + 0x44) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c028b8,uVar2,uVar3);
  return;
}



/* Entry: 101c028b8; end: 101c0297f;  */

void FUN_101c028b8(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x41);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(uint *)(unaff_x22 + 0x44);
  FUN_101c026fc();
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  puVar4 = &UNK_10d9de300;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x80) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(char *)(unaff_x22 + 0x30) = (char)uVar2;
  *(char *)(unaff_x22 + 0x31) = (char)(uVar2 >> 8);
  *(char *)(unaff_x22 + 0x32) = (char)(uVar2 >> 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x40) = uVar3;
  plVar5 = (long *)0xbb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c02980;
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x41);
  plVar5[0x14d] = *(long *)(unaff_x22 + 0x58);
  *(undefined1 *)((long)plVar5 + 0x4cb) = uVar3;
  plVar5[0x14c] = lVar6;
  *(uint *)((long)plVar5 + 0x4cc) = uVar2 & 0xffffff;
  plVar5[0x14b] = lVar7;
  plVar5[0x14a] = unaff_x22 + 0x10;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar4 = PTR___sScMMa_11034fc70;
  plVar5[0x14e] = lVar7;
  lVar6 = lVar7;
  func_0x000107c5fce8();
  plVar5[0x14f] = lVar6;
  lVar6 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  plVar5[0x150] = lVar6;
  func_0x000107c5fca8();
  plVar5[0x151] = lVar7;
  plVar5[0x152] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c02acc,lVar7,lVar6);
  return;
}



/* Entry: 101c02980; end: 101c029e7;  */

void FUN_101c02980(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined1 *)(lVar3 + 0x42) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x88));
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c029e8,*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x70));
  return;
}



/* Entry: 101c029e8; end: 101c02a1b;  */

void FUN_101c029e8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101c02a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x42));
  return;
}



/* Entry: 101c02a1c; end: 101c02acb;  */

void FUN_101c02a1c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa68) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x4cb) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa60) = param_4;
  *(undefined4 *)(unaff_x22 + 0x4cc) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa58) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa50) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0xa70) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa78) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0xa80) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c02acc,uVar2,uVar3);
  return;
}



/* Entry: 101c02acc; end: 101c0390b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c02acc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long unaff_x22;
  undefined8 *puVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 *puVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined7 uStack_df;
  
  uVar3 = *(uint *)(unaff_x22 + 0x4cc);
  func_0x0001048580f8(unaff_x22 + 0xa38);
  *(char *)(*(long *)(unaff_x22 + 0xa38) + _DAT_113803b98) = (char)(uVar3 >> 8);
  func_0x000107c61574();
  if ((uVar3 & 0xff0000) != 0x50000) {
    uVar36 = *(undefined8 *)(unaff_x22 + 0xa60);
    uVar7 = *(undefined2 *)(unaff_x22 + 0x4ce);
    uVar5 = *(undefined1 *)(unaff_x22 + 0x4cb);
    func_0x000100083b20(unaff_x22 + 0x958);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x970);
    lVar40 = *(long *)(unaff_x22 + 0x978);
    func_0x0001000a8868(unaff_x22 + 0x958,uVar39);
    (**(code **)(lVar40 + 8))(0,uVar7,2,2,uVar36,uVar5,uVar39,lVar40);
    func_0x0001000834e4(unaff_x22 + 0x958);
  }
  lVar40 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  *(long *)(unaff_x22 + 0xa98) = lVar40;
  lVar40 = *(long *)(lVar40 + -8);
  *(long *)(unaff_x22 + 0xaa0) = lVar40;
  lVar40 = *(long *)(lVar40 + 0x40);
  *(long *)(unaff_x22 + 0xaa8) = lVar40;
  uVar10 = lVar40 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xab0) = uVar10;
  lVar40 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  *(long *)(unaff_x22 + 0xab8) = lVar40;
  lVar27 = *(long *)(lVar40 + -8);
  *(long *)(unaff_x22 + 0xac0) = lVar27;
  lVar28 = *(long *)(lVar27 + 0x40);
  uVar19 = lVar28 + 0xf;
  uVar11 = uVar19 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xac8) = uVar11;
  lVar12 = 0x112e08dd0;
  func_0x0001000285a8(0x112e08dd0,&UNK_10d9de470);
  lVar42 = *(long *)(lVar12 + -8);
  uVar13 = *(long *)(lVar42 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar13);
  (**(code **)(lVar42 + 0x68))();
  iVar9 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar9 == 0) {
    FUN_101c0a698(uVar10,uVar11,uVar13);
  }
  else {
    func_0x000107c5fd10(uVar10,uVar11,&UNK_1106c66a8,uVar13,&UNK_1106c66a8);
  }
  puVar23 = (undefined8 *)(unaff_x22 + 0x198);
  puVar24 = (undefined8 *)(unaff_x22 + 0x308);
  puVar25 = (undefined8 *)(unaff_x22 + 0x4d0);
  puVar34 = (undefined8 *)(unaff_x22 + 0x6b0);
  puVar1 = (undefined8 *)(unaff_x22 + 2000);
  puVar2 = (undefined8 *)(unaff_x22 + 0x8c8);
  (**(code **)(lVar42 + 8))(uVar13,lVar12);
  func_0x000107c615c0(uVar13);
  lVar12 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0xad0) = lVar12;
  lVar29 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 0xad8) = lVar29;
  lVar30 = *(long *)(lVar29 + 0x40);
  uVar13 = lVar30 + 0xf;
  uVar14 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xae0) = uVar14;
  lVar42 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  *(long *)(unaff_x22 + 0xae8) = lVar42;
  lVar31 = *(long *)(lVar42 + -8);
  *(long *)(unaff_x22 + 0xaf0) = lVar31;
  lVar32 = *(long *)(lVar31 + 0x40);
  uVar21 = lVar32 + 0xf;
  uVar15 = uVar21 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xaf8) = uVar15;
  lVar16 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar43 = *(long *)(lVar16 + -8);
  uVar17 = *(long *)(lVar43 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb00) = uVar17;
  (**(code **)(lVar43 + 0x68))();
  if (iVar9 == 0) {
    func_0x000101b0eb4c(uVar14,uVar15,uVar17);
  }
  else {
    func_0x000107c5fd10(uVar14,uVar15,PTR___sytN_11034f1b0 + 8,uVar17,PTR___sytN_11034f1b0 + 8);
  }
  puVar41 = *(undefined8 **)(unaff_x22 + 0xa68);
  puVar38 = *(undefined8 **)(unaff_x22 + 0xa50);
  (**(code **)(lVar43 + 8))(uVar17,lVar16);
  func_0x0001048580f8(unaff_x22 + 0xa28);
  uVar37 = *(undefined8 *)(unaff_x22 + 0xa28);
  uVar39 = 0;
  FUN_101c0c8a0();
  uVar36 = 0x112e08dd8;
  FUN_101c0aff8(0x112e08dd8,FUN_101c0c8a0,&UNK_10d9de690);
  func_0x000107c5f1e4(uVar39,uVar36);
  uVar33 = puVar38[1];
  uVar36 = *puVar38;
  *(undefined1 *)(unaff_x22 + 0xa18) = *(undefined1 *)(puVar38 + 2);
  *(undefined8 *)(unaff_x22 + 0xa10) = uVar33;
  *(undefined8 *)(unaff_x22 + 0xa08) = uVar36;
  *(undefined8 *)(unaff_x22 + 0xa40) = puVar38[3];
  uVar33 = puVar38[1];
  uVar36 = *puVar38;
  uVar45 = puVar38[3];
  uVar44 = puVar38[2];
  uVar47 = puVar38[5];
  uVar46 = puVar38[4];
  *(undefined1 *)(unaff_x22 + 0x8b0) = *(undefined1 *)(puVar38 + 6);
  *(undefined8 *)(unaff_x22 + 0x898) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x890) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x8a8) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x8a0) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x888) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x880) = uVar36;
  uVar36 = *puVar41;
  uVar5 = *(undefined1 *)(puVar38 + 6);
  uVar46 = puVar38[3];
  uVar45 = puVar38[2];
  uVar44 = puVar38[5];
  uVar33 = puVar38[4];
  uVar47 = *puVar38;
  *(undefined8 *)(unaff_x22 + 0x8d0) = puVar38[1];
  *puVar2 = uVar47;
  *(undefined8 *)(unaff_x22 + 0x8e0) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x8d8) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x8f0) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x8e8) = uVar33;
  *(undefined1 *)(unaff_x22 + 0x8f8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x900) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x908) = uVar37;
  puVar35 = &UNK_10d9de480;
  func_0x000107c614e0();
  uVar49 = *(undefined8 *)(unaff_x22 + 0x8f0);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x8e8);
  uVar56 = *(undefined8 *)(unaff_x22 + 0x900);
  uVar54 = *(undefined8 *)(unaff_x22 + 0x8f8);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x908);
  uVar61 = *(undefined8 *)(unaff_x22 + 0x8d0);
  uVar55 = *puVar2;
  uVar50 = *(undefined8 *)(unaff_x22 + 0x8e0);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x8d8);
  *(undefined8 *)(unaff_x22 + 0x8b8) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x8c0) = uVar37;
  FUN_101c0bae0(unaff_x22 + 0xa40,unaff_x22 + 0xa20,0x112e08e48,&UNK_10d9de610);
  func_0x000107c6157c(uVar36);
  FUN_101c0bae0((undefined8 *)(unaff_x22 + 0xa08),unaff_x22 + 0x9d8,0x112e08e50,&UNK_10d9de890);
  FUN_101c0bae0(puVar2,unaff_x22 + 0x910,0x112e08e58,&UNK_10d9de620);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x880),0x112e08e58,&UNK_10d9de620);
  uVar37 = puVar41[1];
  *(undefined8 *)(unaff_x22 + 0x810) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x7f8) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x7f0) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x808) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x800) = uVar54;
  *(undefined8 *)(unaff_x22 + 0x7d8) = uVar61;
  *puVar1 = uVar55;
  *(undefined8 *)(unaff_x22 + 0x7e8) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x7e0) = uVar45;
  *(undefined **)(unaff_x22 + 0x818) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x820) = uVar36;
  puVar18 = &UNK_10d9de4b0;
  func_0x000107c614e0();
  uVar51 = *(undefined8 *)(unaff_x22 + 0x7f8);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x7f0);
  uVar62 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar57 = *(undefined8 *)(unaff_x22 + 0x800);
  uVar52 = *(undefined8 *)(unaff_x22 + 0x818);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x810);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x820);
  uVar53 = *(undefined8 *)(unaff_x22 + 0x7d8);
  uVar48 = *puVar1;
  uVar63 = *(undefined8 *)(unaff_x22 + 0x7e8);
  uVar58 = *(undefined8 *)(unaff_x22 + 0x7e0);
  *(undefined8 *)(unaff_x22 + 0x7a0) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x798) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x7b0) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x7a8) = uVar54;
  *(undefined8 *)(unaff_x22 + 0x7b8) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x780) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x778) = uVar55;
  *(undefined8 *)(unaff_x22 + 0x790) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x788) = uVar45;
  *(undefined **)(unaff_x22 + 0x7c0) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x7c8) = uVar36;
  func_0x000107c6157c(uVar37);
  FUN_101c0bae0(puVar1,unaff_x22 + 0x828,0x112e08e60,&UNK_10d9de628);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x778),0x112e08e60,&UNK_10d9de628);
  uVar33 = puVar41[10];
  uVar36 = puVar41[9];
  *(undefined1 *)(unaff_x22 + 0xa00) = *(undefined1 *)(puVar41 + 0xb);
  *(undefined8 *)(unaff_x22 + 0x9f8) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x9f0) = uVar36;
  uVar33 = *(undefined8 *)(unaff_x22 + 0x9f0);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x9f8);
  uVar5 = *(undefined1 *)(unaff_x22 + 0xa00);
  *(undefined8 *)(unaff_x22 + 0x6d8) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x6d0) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x6e8) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x6e0) = uVar57;
  *(undefined8 *)(unaff_x22 + 0x6f8) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x6f0) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x700) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x6b8) = uVar53;
  *puVar34 = uVar48;
  *(undefined8 *)(unaff_x22 + 0x6c8) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x6c0) = uVar58;
  *(undefined **)(unaff_x22 + 0x708) = puVar18;
  *(undefined8 *)(unaff_x22 + 0x710) = uVar37;
  puVar35 = &UNK_10d9de4e0;
  func_0x000107c614e0();
  uVar54 = *(undefined8 *)(unaff_x22 + 0x6f8);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x6f0);
  uVar64 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar61 = *(undefined8 *)(unaff_x22 + 0x700);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar55 = *(undefined8 *)(unaff_x22 + 0x6b8);
  uVar49 = *puVar34;
  uVar65 = *(undefined8 *)(unaff_x22 + 0x6c8);
  uVar59 = *(undefined8 *)(unaff_x22 + 0x6c0);
  uVar66 = *(undefined8 *)(unaff_x22 + 0x6d8);
  uVar60 = *(undefined8 *)(unaff_x22 + 0x6d0);
  uVar56 = *(undefined8 *)(unaff_x22 + 0x6e8);
  uVar50 = *(undefined8 *)(unaff_x22 + 0x6e0);
  *(undefined8 *)(unaff_x22 + 0x650) = uVar53;
  *(undefined8 *)(unaff_x22 + 0x648) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x660) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x658) = uVar58;
  *(undefined8 *)(unaff_x22 + 0x698) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x680) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x678) = uVar57;
  *(undefined8 *)(unaff_x22 + 0x690) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x688) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x670) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x668) = uVar46;
  *(undefined **)(unaff_x22 + 0x6a0) = puVar18;
  *(undefined8 *)(unaff_x22 + 0x6a8) = uVar37;
  FUN_101c0bae0(puVar34,unaff_x22 + 0x5e0,0x112e08e68,&UNK_10d9de630);
  func_0x000101be6938((undefined8 *)(unaff_x22 + 0x9f0),unaff_x22 + 0x9c0);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x648),0x112e08e68,&UNK_10d9de630);
  uVar19 = uVar19 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar27 + 0x10))();
  uVar14 = (ulong)*(byte *)(lVar27 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar18 = &UNK_1104561d8;
  func_0x000107c613fc(&UNK_1104561d8,uVar17 + lVar28,uVar14 | 7);
  (**(code **)(lVar27 + 0x20))(puVar18 + uVar17,uVar19,lVar40);
  *(undefined8 *)(unaff_x22 + 0x518) = uVar54;
  *(undefined8 *)(unaff_x22 + 0x510) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x528) = uVar64;
  *(undefined8 *)(unaff_x22 + 0x520) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x530) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x4d8) = uVar55;
  *puVar25 = uVar49;
  *(undefined8 *)(unaff_x22 + 0x4e8) = uVar65;
  *(undefined8 *)(unaff_x22 + 0x4e0) = uVar59;
  *(undefined8 *)(unaff_x22 + 0x4f8) = uVar66;
  *(undefined8 *)(unaff_x22 + 0x4f0) = uVar60;
  *(undefined8 *)(unaff_x22 + 0x508) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x500) = uVar50;
  *(undefined **)(unaff_x22 + 0x538) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x540) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x548) = uVar44;
  *(undefined1 *)(unaff_x22 + 0x550) = uVar5;
  puVar20 = &UNK_10d9de300;
  func_0x000107c614e0();
  uVar48 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x530);
  uVar67 = *(undefined8 *)(unaff_x22 + 0x548);
  uVar57 = *(undefined8 *)(unaff_x22 + 0x540);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x550);
  uVar51 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar68 = *(undefined8 *)(unaff_x22 + 0x508);
  uVar58 = *(undefined8 *)(unaff_x22 + 0x500);
  uVar69 = *(undefined8 *)(unaff_x22 + 0x518);
  uVar62 = *(undefined8 *)(unaff_x22 + 0x510);
  uVar52 = *(undefined8 *)(unaff_x22 + 0x528);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar70 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar63 = *puVar25;
  uVar53 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x4e0);
  *(undefined8 *)(unaff_x22 + 0x490) = uVar54;
  *(undefined8 *)(unaff_x22 + 0x488) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x4a0) = uVar64;
  *(undefined8 *)(unaff_x22 + 0x498) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x4a8) = uVar36;
  *(undefined8 *)(unaff_x22 + 0x450) = uVar55;
  *(undefined8 *)(unaff_x22 + 0x448) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x460) = uVar65;
  *(undefined8 *)(unaff_x22 + 0x458) = uVar59;
  *(undefined8 *)(unaff_x22 + 0x470) = uVar66;
  *(undefined8 *)(unaff_x22 + 0x468) = uVar60;
  *(undefined8 *)(unaff_x22 + 0x480) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x478) = uVar50;
  *(undefined **)(unaff_x22 + 0x4b0) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar33;
  *(undefined8 *)(unaff_x22 + 0x4c0) = uVar44;
  *(undefined1 *)(unaff_x22 + 0x4c8) = uVar5;
  FUN_101c0bae0(puVar25,unaff_x22 + 0x558,0x112e08e70,&UNK_10d9de638);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x448),0x112e08e70,&UNK_10d9de638);
  func_0x000107c615c0(uVar19);
  uVar21 = uVar21 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar31 + 0x10))();
  uVar19 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar14 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  puVar35 = &UNK_110456200;
  func_0x000107c613fc(&UNK_110456200,uVar14 + lVar32,uVar19 | 7);
  (**(code **)(lVar31 + 0x20))(puVar35 + uVar14,uVar21,lVar42);
  *(undefined8 *)(unaff_x22 + 0x370) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x368) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x380) = uVar67;
  *(undefined8 *)(unaff_x22 + 0x378) = uVar57;
  *(ulong *)(unaff_x22 + 0x388) = CONCAT71(uStack_df,uVar6);
  *(undefined8 *)(unaff_x22 + 0x330) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x328) = uVar37;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar68;
  *(undefined8 *)(unaff_x22 + 0x338) = uVar58;
  *(undefined8 *)(unaff_x22 + 0x350) = uVar69;
  *(undefined8 *)(unaff_x22 + 0x348) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x360) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x358) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x310) = uVar70;
  *puVar24 = uVar63;
  *(undefined8 *)(unaff_x22 + 800) = uVar53;
  *(undefined8 *)(unaff_x22 + 0x318) = uVar47;
  *(undefined **)(unaff_x22 + 0x390) = puVar20;
  *(undefined8 *)(unaff_x22 + 0x398) = 0x101c0bfe8;
  *(undefined **)(unaff_x22 + 0x3a0) = puVar18;
  puVar22 = &UNK_10d9de338;
  func_0x000107c614e0();
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x370);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x368);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x378);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x390);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x388);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x3a0);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x398);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x330);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x328);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x338);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x348);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x360);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x358);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x310);
  *puVar23 = *puVar24;
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 800);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar67;
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar57;
  *(ulong *)(unaff_x22 + 0x2e8) = CONCAT71(uStack_df,uVar6);
  *(undefined8 *)(unaff_x22 + 0x290) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x288) = uVar37;
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar68;
  *(undefined8 *)(unaff_x22 + 0x298) = uVar58;
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar69;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x270) = uVar70;
  *(undefined8 *)(unaff_x22 + 0x268) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x280) = uVar53;
  *(undefined8 *)(unaff_x22 + 0x278) = uVar47;
  *(undefined **)(unaff_x22 + 0x2f0) = puVar20;
  *(undefined8 *)(unaff_x22 + 0x2f8) = 0x101c0bfe8;
  *(undefined **)(unaff_x22 + 0x300) = puVar18;
  FUN_101c0bae0(puVar24,unaff_x22 + 0x3a8,0x112e08e78,&UNK_10d9de640);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x268),0x112e08e78,&UNK_10d9de640);
  func_0x000107c615c0(uVar21);
  *(undefined **)(unaff_x22 + 0x238) = puVar22;
  *(undefined8 *)(unaff_x22 + 0x240) = 0x101c0c03c;
  *(undefined **)(unaff_x22 + 0x248) = puVar35;
  func_0x0001000285a8(0x112e08e80,&UNK_10d9de648);
  func_0x000107c610f8();
  func_0x000107c5f458();
  *(undefined8 **)(unaff_x22 + 0xb08) = puVar23;
  func_0x000107c61174();
  puVar24 = puVar23;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar24 != (undefined8 *)0x0) {
    puVar34 = *(undefined8 **)(unaff_x22 + 0xa68);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x4cb);
    uVar39 = *(undefined8 *)(unaff_x22 + 0xa60);
    uVar4 = *(undefined4 *)(unaff_x22 + 0x4cc);
    uVar37 = *(undefined8 *)(unaff_x22 + 0xa58);
    puVar35 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(puVar24);
    func_0x000107c61170(puVar35);
    func_0x000107c61170(puVar24);
    puVar20 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    *(undefined **)(unaff_x22 + 0xb10) = puVar20;
    puVar25 = puVar23;
    func_0x000107c61170();
    FUN_101c0afd8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined8 **)(unaff_x22 + 0xb18) = puVar25;
    func_0x000107c52aa4(puVar20);
    func_0x000107c5a070(puVar20);
    func_0x000107c5a074(puVar20);
    func_0x0001048580f8(unaff_x22 + 0xa30);
    lVar27 = *(long *)(unaff_x22 + 0xa30);
    lVar40 = 0x112e08e10;
    func_0x0001000285a8(0x112e08e10,&UNK_10d9de528);
    lVar28 = *(long *)(lVar40 + -8);
    uVar19 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar19);
    func_0x000107c61428(lVar27 + _DAT_112e08e98,unaff_x22 + 0x9a8,0x21,0);
    func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
    func_0x000107c5f200(uVar19);
    func_0x000107c614a8(unaff_x22 + 0x9a8);
    func_0x000107c61574(lVar27);
    puVar35 = &UNK_110455fd0;
    func_0x000107c613fc(&UNK_110455fd0,0x18,7);
    puVar18 = puVar35 + 0x10;
    func_0x000107c61614(puVar18,puVar20);
    FUN_101c0b084();
    uVar36 = 0x101c0bfec;
    func_0x000107c5f21c(0x101c0bfec,puVar35,lVar40,puVar18);
    *(undefined8 *)(unaff_x22 + 0xb20) = uVar36;
    func_0x000107c61574(puVar35);
    (**(code **)(lVar28 + 8))(uVar19,lVar40);
    func_0x000107c615c0(uVar19);
    FUN_101c0aa78(puVar23,uVar37);
    puVar35 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    *(undefined **)(unaff_x22 + 0xb28) = puVar35;
    func_0x000107c54d20(uVar47,puVar20);
    func_0x000107c4ef3c(uVar47,puVar20);
    uVar13 = uVar13 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar13);
    (**(code **)(lVar29 + 0x10))();
    uVar19 = (ulong)*(byte *)(lVar29 + 0x50);
    uVar14 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
    lVar30 = uVar14 + lVar30;
    uVar21 = lVar30 + 0x67U & 0xfffffffffffffff8;
    puVar35 = &UNK_110456228;
    func_0x000107c613fc(&UNK_110456228,uVar21 + 0x18,uVar19 | 7);
    (**(code **)(lVar29 + 0x20))(puVar35 + uVar14,uVar13,lVar12);
    puVar24 = (undefined8 *)(puVar35 + (lVar30 + 7U & 0xfffffffffffffff8));
    uVar47 = *puVar34;
    uVar46 = puVar34[3];
    uVar45 = puVar34[2];
    puVar24[1] = puVar34[1];
    *puVar24 = uVar47;
    puVar24[3] = uVar46;
    puVar24[2] = uVar45;
    uVar49 = puVar34[7];
    uVar48 = puVar34[6];
    uVar46 = puVar34[9];
    uVar45 = puVar34[8];
    uVar47 = *(undefined8 *)((long)puVar34 + 0x49);
    uVar51 = puVar34[5];
    uVar50 = puVar34[4];
    *(undefined8 *)((long)puVar24 + 0x51) = *(undefined8 *)((long)puVar34 + 0x51);
    *(undefined8 *)((long)puVar24 + 0x49) = uVar47;
    puVar24[7] = uVar49;
    puVar24[6] = uVar48;
    puVar24[9] = uVar46;
    puVar24[8] = uVar45;
    puVar24[5] = uVar51;
    puVar24[4] = uVar50;
    *(undefined8 **)(puVar35 + uVar21) = puVar23;
    *(undefined8 *)(puVar35 + uVar21 + 8) = uVar37;
    *(undefined **)(puVar35 + uVar21 + 0x10) = puVar20;
    func_0x000107c615c0(uVar13);
    func_0x000107c61174(puVar23);
    FUN_101c0b1e4(puVar34,unaff_x22 + 0x718);
    func_0x000107c61174(uVar37);
    func_0x000107c61174();
    func_0x0001001ca524(uVar33,uVar44,uVar5,4,0,0,&UNK_10d9de658,puVar35,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574();
    *(ulong *)(unaff_x22 + 0x120) = uVar10;
    *(undefined **)(unaff_x22 + 0x128) = puVar20;
    *(undefined8 **)(unaff_x22 + 0x130) = puVar25;
    *(ulong *)(unaff_x22 + 0x138) = uVar11;
    *(ulong *)(unaff_x22 + 0x140) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar36;
    *(char *)(unaff_x22 + 0x150) = (char)uVar4;
    *(char *)(unaff_x22 + 0x151) = (char)((uint)uVar4 >> 8);
    *(char *)(unaff_x22 + 0x152) = (char)((uint)uVar4 >> 0x10);
    *(undefined8 *)(unaff_x22 + 0x158) = uVar39;
    *(undefined1 *)(unaff_x22 + 0x160) = uVar6;
    *(undefined8 **)(unaff_x22 + 0x168) = puVar34;
    *(undefined **)(unaff_x22 + 0x260) = puVar20;
    func_0x000107c5fce8();
    *(undefined **)(unaff_x22 + 0xb30) = puVar35;
    iVar9 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar9 != 0) {
      uVar36 = *(undefined8 *)(unaff_x22 + 0xa80);
      plVar26 = (long *)(ulong)*(uint *)(
                                        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb38) = plVar26;
      *plVar26 = unaff_x22;
      plVar26[1] = (long)FUN_101c0390c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )(plVar26,unaff_x22 + 0x4c9,&UNK_10d9de660,unaff_x22 + 0x110,0x101c0bfdc,unaff_x22 + 0x250,
        puVar35,uVar36,&UNK_1106c66a8);
      return;
    }
    if (puVar35 == (undefined *)0x0) {
      puVar35 = (undefined *)0x0;
      uVar36 = 0;
    }
    else {
      uVar36 = *(undefined8 *)(unaff_x22 + 0xa80);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(undefined8 *)(unaff_x22 + 0xb48) = uVar36;
    *(undefined **)(unaff_x22 + 0xb40) = puVar35;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c03994,puVar35);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x101c0390c);
  (*pcVar8)();
}



/* Entry: 101c0390c; end: 101c03993;  */

/* WARNING: Possible PIC construction at 0x000101c03964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c03968) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_101c0390c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb38));
  uVar1 = *(undefined8 *)(lVar2 + 0xb30);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c03994; end: 101c03a13;  */

void FUN_101c03994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa70);
  uVar1 = 0x101c0bfdc;
  func_0x000107c615b4(0x101c0bfdc,unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0xb50) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb58) = uVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb60) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xb68) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c03a14,uVar3,uVar2);
  return;
}



/* Entry: 101c03a14; end: 101c03a83;  */

void FUN_101c03a14(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xb70) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa80);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 *)(unaff_x22 + 0xb80) = uVar1;
  *(long *)(unaff_x22 + 0xb78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c03a84,param_1);
  return;
}



/* Entry: 101c03a84; end: 101c03b07;  */

void FUN_101c03a84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x10;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa70);
  lVar2 = lVar1;
  func_0x000107c615ac(lVar1,&UNK_1106c66a8);
  *(long *)(unaff_x22 + 0xa48) = lVar1;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xb88) = lVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb90) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xb98) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c03b08,uVar4,uVar3);
  return;
}



/* Entry: 101c03b08; end: 101c03d1f;  */

void FUN_101c03b08(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb10);
  lVar10 = *(long *)(unaff_x22 + 0xaa8);
  lVar13 = *(long *)(unaff_x22 + 0xaa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa98);
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar1 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar1);
  lVar2 = 0;
  func_0x000107c5fd0c();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar6)(uVar1,1,1,lVar2);
  uVar3 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (**(code **)(lVar13 + 0x10))();
  uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110456250;
  func_0x000107c613fc(&UNK_110456250,uVar11 + 8,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar12,uVar3,uVar14);
  *(undefined8 *)(puVar4 + uVar11) = uVar9;
  func_0x000107c615c0(uVar3);
  func_0x000107c61174(uVar9);
  FUN_101c09ef0(uVar1,&UNK_10d9de668,puVar4);
  func_0x000101c0bb28(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar1);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar6)();
  puVar4 = &UNK_110456278;
  func_0x000107c613fc(&UNK_110456278,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  func_0x000107c61174();
  FUN_101c09ef0(uVar5,&UNK_10d9de670,puVar4);
  func_0x000101c0bb28(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0xba0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x4ca,unaff_x22 + 0x10,FUN_101c03d20,unaff_x22 + 0x170);
  return;
}



/* Entry: 101c03d20; end: 101c03d83;  */

void FUN_101c03d20(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xba0));
    *(undefined1 *)(unaff_x22 + 0x551) = *(undefined1 *)(unaff_x22 + 0x4ca);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb90);
    pcVar1 = FUN_101c03d84;
  }
  else {
    func_0x000107c614ac();
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb90);
    pcVar1 = FUN_101c03fc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c03d84; end: 101c03e27;  */

void FUN_101c03d84(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x551);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb88));
  *(undefined1 *)(unaff_x22 + 0x552) = uVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xba8) = plVar3;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c03e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c03e28; end: 101c03eb7;  */

void FUN_101c03e28(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xba8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c03e70,*(undefined8 *)(lVar1 + 0xb78),*(undefined8 *)(lVar1 + 0xb80));
  return;
}



/* Entry: 101c03eb8; end: 101c03fbf;  */

void FUN_101c03eb8(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  bVar1 = *(byte *)(unaff_x22 + 0x552);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xae8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xab8);
  cVar2 = *(char *)(unaff_x22 + 0x4ce);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb58));
  func_0x000107c5fd2c(uVar6);
  func_0x000107c5fd2c(uVar5);
  func_0x000107c5f1dc();
  if ((0xfffffffd < bVar1 - 3) && (cVar2 != '\x05')) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa60);
    uVar4 = *(undefined2 *)(unaff_x22 + 0x4ce);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x4cb);
    func_0x000100083b20(unaff_x22 + 0x980);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x998);
    lVar7 = *(long *)(unaff_x22 + 0x9a0);
    func_0x0001000a8868(unaff_x22 + 0x980,uVar6);
    (**(code **)(lVar7 + 8))(2,uVar4,2,2,uVar5,uVar3,uVar6,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x980);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c041bc,*(undefined8 *)(unaff_x22 + 0xb40),*(undefined8 *)(unaff_x22 + 0xb48));
  return;
}



/* Entry: 101c03fc0; end: 101c0406f;  */

void FUN_101c03fc0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xba0));
  func_0x000107c61574(uVar2);
  *(undefined1 *)(unaff_x22 + 0x552) = 2;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xba8) = plVar1;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c03e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c04070; end: 101c041bb;  */

void FUN_101c04070(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb28);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb18);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb08);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb00);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xaf8);
  lVar9 = *(long *)(unaff_x22 + 0xaf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xae8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xae0);
  lVar10 = *(long *)(unaff_x22 + 0xad8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xad0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xac8);
  lVar2 = *(long *)(unaff_x22 + 0xac0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xab8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xab0);
  lVar7 = *(long *)(unaff_x22 + 0xaa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa98);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb20));
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar10 + 8))(uVar18,uVar14);
  (**(code **)(lVar9 + 8))(uVar13,uVar1);
  (**(code **)(lVar2 + 8))(uVar12,uVar3);
  (**(code **)(lVar7 + 8))(uVar4,uVar5);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101c041b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x553));
  return;
}



/* Entry: 101c041bc; end: 101c04213;  */

void FUN_101c041bc(void)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb30);
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0xb50));
  func_0x000107c61574(uVar2);
  cVar1 = *(char *)(unaff_x22 + 0x552);
  if (cVar1 == '\x02') {
    cVar1 = '\x01';
  }
  *(char *)(unaff_x22 + 0x553) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c04070,*(undefined8 *)(unaff_x22 + 0xa88),*(undefined8 *)(unaff_x22 + 0xa90));
  return;
}



/* Entry: 101c04214; end: 101c042c3;  */

void FUN_101c04214(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 1000) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x313) = param_5;
  *(undefined8 *)(unaff_x22 + 0x3e0) = param_4;
  *(undefined4 *)(unaff_x22 + 0x314) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3d0) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x3f0) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x400) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x408) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x410) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c042c4,uVar2,uVar3);
  return;
}



/* Entry: 101c042c4; end: 101c04cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c042c4(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long unaff_x22;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar1 = *(uint *)(unaff_x22 + 0x314);
  func_0x0001048580f8(unaff_x22 + 0x3b0);
  *(char *)(*(long *)(unaff_x22 + 0x3b0) + _DAT_113803b98) = (char)(uVar1 >> 8);
  func_0x000107c61574();
  if ((uVar1 & 0xff0000) != 0x50000) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar5 = *(undefined2 *)(unaff_x22 + 0x316);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x313);
    func_0x000100083b20(unaff_x22 + 0x340);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x358);
    lVar31 = *(long *)(unaff_x22 + 0x360);
    func_0x0001000a8868(unaff_x22 + 0x340,uVar29);
    (**(code **)(lVar31 + 8))(0,uVar5,2,2,uVar26,uVar3,uVar29,lVar31);
    func_0x0001000834e4(unaff_x22 + 0x340);
  }
  lVar31 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  *(long *)(unaff_x22 + 0x418) = lVar31;
  lVar31 = *(long *)(lVar31 + -8);
  *(long *)(unaff_x22 + 0x420) = lVar31;
  lVar31 = *(long *)(lVar31 + 0x40);
  *(long *)(unaff_x22 + 0x428) = lVar31;
  uVar8 = lVar31 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x430) = uVar8;
  lVar31 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  *(long *)(unaff_x22 + 0x438) = lVar31;
  lVar32 = *(long *)(lVar31 + -8);
  *(long *)(unaff_x22 + 0x440) = lVar32;
  lVar20 = *(long *)(lVar32 + 0x40);
  uVar15 = lVar20 + 0xf;
  uVar9 = uVar15 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x448) = uVar9;
  lVar10 = 0x112e08dd0;
  func_0x0001000285a8(0x112e08dd0,&UNK_10d9de470);
  lVar34 = *(long *)(lVar10 + -8);
  uVar11 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar11);
  (**(code **)(lVar34 + 0x68))();
  iVar7 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar7 == 0) {
    FUN_101c0a698(uVar8,uVar9,uVar11);
  }
  else {
    func_0x000107c5fd10(uVar8,uVar9,&UNK_1106c66a8,uVar11,&UNK_1106c66a8);
  }
  (**(code **)(lVar34 + 8))(uVar11,lVar10);
  func_0x000107c615c0(uVar11);
  lVar10 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0x450) = lVar10;
  lVar21 = *(long *)(lVar10 + -8);
  *(long *)(unaff_x22 + 0x458) = lVar21;
  lVar22 = *(long *)(lVar21 + 0x40);
  uVar11 = lVar22 + 0xf;
  uVar12 = uVar11 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x460) = uVar12;
  lVar34 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  *(long *)(unaff_x22 + 0x468) = lVar34;
  lVar35 = *(long *)(lVar34 + -8);
  *(long *)(unaff_x22 + 0x470) = lVar35;
  lVar23 = *(long *)(lVar35 + 0x40);
  uVar17 = lVar23 + 0xf;
  uVar13 = uVar17 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x478) = uVar13;
  lVar33 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar27 = *(long *)(lVar33 + -8);
  uVar14 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar14);
  (**(code **)(lVar27 + 0x68))();
  if (iVar7 == 0) {
    func_0x000101b0eb4c(uVar12,uVar13,uVar14);
  }
  else {
    func_0x000107c5fd10(uVar12,uVar13,PTR___sytN_11034f1b0 + 8,uVar14,PTR___sytN_11034f1b0 + 8);
  }
  puVar37 = *(undefined8 **)(unaff_x22 + 1000);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x3d0);
  (**(code **)(lVar27 + 8))(uVar14,lVar33);
  func_0x000107c615c0(uVar14);
  func_0x0001048580f8(unaff_x22 + 0x3b8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar29 = 0;
  FUN_101c0c8a0();
  uVar26 = 0x112e08dd8;
  FUN_101c0aff8(0x112e08dd8,FUN_101c0c8a0,&UNK_10d9de690);
  func_0x000107c5f1e4(uVar29,uVar26);
  FUN_101c0b6e4(uVar30,unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x220) = uVar29;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar28;
  uVar29 = *puVar37;
  puVar25 = &UNK_10d9de480;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x230) = puVar25;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar29;
  uVar30 = puVar37[1];
  puVar25 = &UNK_10d9de4b0;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x240) = puVar25;
  *(undefined8 *)(unaff_x22 + 0x248) = uVar30;
  uVar3 = *(undefined1 *)(puVar37 + 0xb);
  uVar38 = puVar37[9];
  *(undefined8 *)(unaff_x22 + 0x388) = puVar37[10];
  *(undefined8 *)(unaff_x22 + 0x380) = uVar38;
  *(undefined1 *)(unaff_x22 + 0x390) = uVar3;
  uVar26 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x388);
  puVar25 = &UNK_10d9de4e0;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x250) = puVar25;
  *(undefined8 *)(unaff_x22 + 600) = uVar26;
  *(undefined8 *)(unaff_x22 + 0x260) = uVar28;
  *(undefined1 *)(unaff_x22 + 0x268) = uVar3;
  uVar15 = uVar15 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar15);
  (**(code **)(lVar32 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar32 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar25 = &UNK_110456110;
  func_0x000107c613fc(&UNK_110456110,uVar14 + lVar20,uVar12 | 7);
  (**(code **)(lVar32 + 0x20))(puVar25 + uVar14,uVar15,lVar31);
  puVar16 = &UNK_10d9de300;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x270) = puVar16;
  *(undefined8 *)(unaff_x22 + 0x278) = 0x101c0bfe0;
  *(undefined **)(unaff_x22 + 0x280) = puVar25;
  func_0x000107c615c0(uVar15);
  uVar17 = uVar17 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar17);
  (**(code **)(lVar35 + 0x10))();
  uVar15 = (ulong)*(byte *)(lVar35 + 0x50);
  uVar12 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar25 = &UNK_110456138;
  func_0x000107c613fc(&UNK_110456138,uVar12 + lVar23,uVar15 | 7);
  (**(code **)(lVar35 + 0x20))(puVar25 + uVar12,uVar17,lVar34);
  puVar16 = &UNK_10d9de338;
  func_0x000107c614e0();
  *(undefined **)(unaff_x22 + 0x288) = puVar16;
  *(undefined8 *)(unaff_x22 + 0x290) = 0x101c0c038;
  *(undefined **)(unaff_x22 + 0x298) = puVar25;
  func_0x000107c615c0(uVar17);
  func_0x0001000285a8(0x112e08e40,&UNK_10d9de5e0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar30);
  func_0x000101be6938(unaff_x22 + 0x380,unaff_x22 + 0x398);
  lVar31 = unaff_x22 + 0x198;
  func_0x000107c5f458();
  *(long *)(unaff_x22 + 0x480) = lVar31;
  func_0x000107c61174();
  lVar20 = lVar31;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar20 != 0) {
    puVar24 = *(undefined8 **)(unaff_x22 + 1000);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x313);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar2 = *(undefined4 *)(unaff_x22 + 0x314);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x3d8);
    puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar20);
    func_0x000107c61170(puVar25);
    func_0x000107c61170(lVar20);
    puVar18 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    *(undefined **)(unaff_x22 + 0x488) = puVar18;
    lVar32 = lVar31;
    func_0x000107c61170();
    FUN_101c0afd8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(long *)(unaff_x22 + 0x490) = lVar32;
    func_0x000107c52aa4(puVar18);
    func_0x000107c5a070(puVar18);
    func_0x000107c5a074(puVar18);
    func_0x0001048580f8(unaff_x22 + 0x3c0);
    lVar33 = *(long *)(unaff_x22 + 0x3c0);
    lVar20 = 0x112e08e10;
    func_0x0001000285a8(0x112e08e10,&UNK_10d9de528);
    lVar34 = *(long *)(lVar20 + -8);
    uVar15 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar15);
    func_0x000107c61428(lVar33 + _DAT_112e08e98,unaff_x22 + 0x368,0x21,0);
    func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
    func_0x000107c5f200(uVar15);
    func_0x000107c614a8(unaff_x22 + 0x368);
    func_0x000107c61574(lVar33);
    puVar25 = &UNK_110455fd0;
    func_0x000107c613fc(&UNK_110455fd0,0x18,7);
    puVar16 = puVar25 + 0x10;
    func_0x000107c61614(puVar16,puVar18);
    FUN_101c0b084();
    uVar29 = 0x101c0bfe4;
    func_0x000107c5f21c(0x101c0bfe4,puVar25,lVar20,puVar16);
    *(undefined8 *)(unaff_x22 + 0x498) = uVar29;
    func_0x000107c61574(puVar25);
    (**(code **)(lVar34 + 8))(uVar15,lVar20);
    func_0x000107c615c0(uVar15);
    FUN_101c0aa78(lVar31,uVar36);
    puVar25 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    *(undefined **)(unaff_x22 + 0x4a0) = puVar25;
    func_0x000107c54d20(uVar38,puVar18);
    func_0x000107c4ef3c(uVar38,puVar18);
    uVar11 = uVar11 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar11);
    (**(code **)(lVar21 + 0x10))();
    uVar15 = (ulong)*(byte *)(lVar21 + 0x50);
    uVar17 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
    lVar22 = uVar17 + lVar22;
    uVar12 = lVar22 + 0x67U & 0xfffffffffffffff8;
    puVar25 = &UNK_110456160;
    func_0x000107c613fc(&UNK_110456160,uVar12 + 0x18,uVar15 | 7);
    (**(code **)(lVar21 + 0x20))(puVar25 + uVar17,uVar11,lVar10);
    puVar37 = (undefined8 *)(puVar25 + (lVar22 + 7U & 0xfffffffffffffff8));
    uVar40 = *puVar24;
    uVar39 = puVar24[3];
    uVar38 = puVar24[2];
    puVar37[1] = puVar24[1];
    *puVar37 = uVar40;
    puVar37[3] = uVar39;
    puVar37[2] = uVar38;
    uVar42 = puVar24[7];
    uVar41 = puVar24[6];
    uVar39 = puVar24[9];
    uVar38 = puVar24[8];
    uVar40 = *(undefined8 *)((long)puVar24 + 0x49);
    uVar44 = puVar24[5];
    uVar43 = puVar24[4];
    *(undefined8 *)((long)puVar37 + 0x51) = *(undefined8 *)((long)puVar24 + 0x51);
    *(undefined8 *)((long)puVar37 + 0x49) = uVar40;
    puVar37[7] = uVar42;
    puVar37[6] = uVar41;
    puVar37[9] = uVar39;
    puVar37[8] = uVar38;
    puVar37[5] = uVar44;
    puVar37[4] = uVar43;
    *(long *)(puVar25 + uVar12) = lVar31;
    *(undefined8 *)(puVar25 + uVar12 + 8) = uVar36;
    *(undefined **)(puVar25 + uVar12 + 0x10) = puVar18;
    func_0x000107c615c0(uVar11);
    func_0x000107c61174(lVar31);
    FUN_101c0b1e4(puVar24,unaff_x22 + 0x2b8);
    func_0x000107c61174(uVar36);
    func_0x000107c61174();
    func_0x0001001ca524(uVar26,uVar28,uVar3,4,0,0,&UNK_10d9de5f0,puVar25,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574();
    *(ulong *)(unaff_x22 + 0x120) = uVar8;
    *(undefined **)(unaff_x22 + 0x128) = puVar18;
    *(long *)(unaff_x22 + 0x130) = lVar32;
    *(ulong *)(unaff_x22 + 0x138) = uVar9;
    *(ulong *)(unaff_x22 + 0x140) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar29;
    *(char *)(unaff_x22 + 0x150) = (char)uVar2;
    *(char *)(unaff_x22 + 0x151) = (char)((uint)uVar2 >> 8);
    *(char *)(unaff_x22 + 0x152) = (char)((uint)uVar2 >> 0x10);
    *(undefined8 *)(unaff_x22 + 0x158) = uVar30;
    *(undefined1 *)(unaff_x22 + 0x160) = uVar4;
    *(undefined8 **)(unaff_x22 + 0x168) = puVar24;
    *(undefined **)(unaff_x22 + 0x2b0) = puVar18;
    func_0x000107c5fce8();
    *(undefined **)(unaff_x22 + 0x4a8) = puVar25;
    iVar7 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar7 != 0) {
      uVar26 = *(undefined8 *)(unaff_x22 + 0x400);
      plVar19 = (long *)(ulong)*(uint *)(
                                        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4b0) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_101c04ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )(plVar19,unaff_x22 + 0x311,&UNK_10d9de5f8,unaff_x22 + 0x110,0x101c0bfd8,unaff_x22 + 0x2a0,
        puVar25,uVar26,&UNK_1106c66a8);
      return;
    }
    if (puVar25 == (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      uVar26 = 0;
    }
    else {
      uVar26 = *(undefined8 *)(unaff_x22 + 0x400);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(undefined8 *)(unaff_x22 + 0x4c0) = uVar26;
    *(undefined **)(unaff_x22 + 0x4b8) = puVar25;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c04d68,puVar25);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101c04ce0);
  (*pcVar6)();
}



/* Entry: 101c04ce0; end: 101c04d67;  */

/* WARNING: Possible PIC construction at 0x000101c04d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c04d3c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_101c04ce0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x4b0));
  uVar1 = *(undefined8 *)(lVar2 + 0x4a8);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c04d68; end: 101c04de7;  */

void FUN_101c04d68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar1 = 0x101c0bfd8;
  func_0x000107c615b4(0x101c0bfd8,unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x4c8) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x4d8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x4e0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c04de8,uVar3,uVar2);
  return;
}



/* Entry: 101c04de8; end: 101c04e57;  */

void FUN_101c04de8(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x4e8) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x400);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 *)(unaff_x22 + 0x4f8) = uVar1;
  *(long *)(unaff_x22 + 0x4f0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c04e58,param_1);
  return;
}



/* Entry: 101c04e58; end: 101c04edb;  */

void FUN_101c04e58(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x10;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3f0);
  lVar2 = lVar1;
  func_0x000107c615ac(lVar1,&UNK_1106c66a8);
  *(long *)(unaff_x22 + 0x3c8) = lVar1;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x500) = lVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x508) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x510) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c04edc,uVar4,uVar3);
  return;
}



/* Entry: 101c04edc; end: 101c050f3;  */

void FUN_101c04edc(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x488);
  lVar10 = *(long *)(unaff_x22 + 0x428);
  lVar13 = *(long *)(unaff_x22 + 0x420);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x418);
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar1 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar1);
  lVar2 = 0;
  func_0x000107c5fd0c();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar6)(uVar1,1,1,lVar2);
  uVar3 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (**(code **)(lVar13 + 0x10))();
  uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110456188;
  func_0x000107c613fc(&UNK_110456188,uVar11 + 8,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar12,uVar3,uVar14);
  *(undefined8 *)(puVar4 + uVar11) = uVar9;
  func_0x000107c615c0(uVar3);
  func_0x000107c61174(uVar9);
  FUN_101c09ef0(uVar1,&UNK_10d9de600,puVar4);
  func_0x000101c0bb28(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar1);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar6)();
  puVar4 = &UNK_1104561b0;
  func_0x000107c613fc(&UNK_1104561b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  func_0x000107c61174();
  FUN_101c09ef0(uVar5,&UNK_10d9de608,puVar4);
  func_0x000101c0bb28(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0x518) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x312,unaff_x22 + 0x10,FUN_101c050f4,unaff_x22 + 0x170);
  return;
}



/* Entry: 101c050f4; end: 101c05157;  */

void FUN_101c050f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x518));
    *(undefined1 *)(unaff_x22 + 0x391) = *(undefined1 *)(unaff_x22 + 0x312);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x508);
    pcVar1 = FUN_101c05158;
  }
  else {
    func_0x000107c614ac();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x508);
    pcVar1 = FUN_101c05394;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c05158; end: 101c051fb;  */

void FUN_101c05158(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x391);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x500));
  *(undefined1 *)(unaff_x22 + 0x392) = uVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x520) = plVar3;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c051fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c051fc; end: 101c0528b;  */

void FUN_101c051fc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x520));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c05244,*(undefined8 *)(lVar1 + 0x4f0),*(undefined8 *)(lVar1 + 0x4f8));
  return;
}



/* Entry: 101c0528c; end: 101c05393;  */

void FUN_101c0528c(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  bVar1 = *(byte *)(unaff_x22 + 0x392);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x438);
  cVar2 = *(char *)(unaff_x22 + 0x316);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x4d0));
  func_0x000107c5fd2c(uVar6);
  func_0x000107c5fd2c(uVar5);
  func_0x000107c5f1dc();
  if ((0xfffffffd < bVar1 - 3) && (cVar2 != '\x05')) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar4 = *(undefined2 *)(unaff_x22 + 0x316);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x313);
    func_0x000100083b20(unaff_x22 + 0x318);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar7 = *(long *)(unaff_x22 + 0x338);
    func_0x0001000a8868(unaff_x22 + 0x318,uVar6);
    (**(code **)(lVar7 + 8))(2,uVar4,2,2,uVar5,uVar3,uVar6,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x318);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c0557c,*(undefined8 *)(unaff_x22 + 0x4b8),*(undefined8 *)(unaff_x22 + 0x4c0));
  return;
}



/* Entry: 101c05394; end: 101c05443;  */

void FUN_101c05394(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x500);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x518));
  func_0x000107c61574(uVar2);
  *(undefined1 *)(unaff_x22 + 0x392) = 2;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x520) = plVar1;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c051fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c05444; end: 101c0557b;  */

void FUN_101c05444(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x480);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x478);
  lVar6 = *(long *)(unaff_x22 + 0x470);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x468);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x460);
  lVar9 = *(long *)(unaff_x22 + 0x458);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x450);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x448);
  lVar7 = *(long *)(unaff_x22 + 0x440);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x430);
  lVar4 = *(long *)(unaff_x22 + 0x420);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x498));
  func_0x000107c61574(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  (**(code **)(lVar9 + 8))(uVar17,uVar2);
  (**(code **)(lVar6 + 8))(uVar15,uVar1);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar17);
  (**(code **)(lVar7 + 8))(uVar16,uVar3);
  func_0x000107c615c0(uVar16);
  (**(code **)(lVar4 + 8))(uVar8,uVar5);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101c05578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x393));
  return;
}



/* Entry: 101c0557c; end: 101c055d3;  */

void FUN_101c0557c(void)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x4a8);
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x4c8));
  func_0x000107c61574(uVar2);
  cVar1 = *(char *)(unaff_x22 + 0x392);
  if (cVar1 == '\x02') {
    cVar1 = '\x01';
  }
  *(char *)(unaff_x22 + 0x393) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c05444,*(undefined8 *)(unaff_x22 + 0x408),*(undefined8 *)(unaff_x22 + 0x410));
  return;
}



/* Entry: 101c055d4; end: 101c05683;  */

void FUN_101c055d4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1148) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x6d3) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1140) = param_4;
  *(undefined4 *)(unaff_x22 + 0x6d4) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1138) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1130) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x1150) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x1158) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x1160) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1168) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1170) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c05684,uVar2,uVar3);
  return;
}



/* Entry: 101c05684; end: 101c065ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c05684(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  code *pcVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  long unaff_x22;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  
  uVar5 = *(uint *)(unaff_x22 + 0x6d4);
  func_0x0001048580f8(unaff_x22 + 0x1120);
  *(char *)(*(long *)(unaff_x22 + 0x1120) + _DAT_113803b98) = (char)(uVar5 >> 8);
  func_0x000107c61574();
  if ((uVar5 & 0xff0000) != 0x50000) {
    uVar36 = *(undefined8 *)(unaff_x22 + 0x1140);
    uVar9 = *(undefined2 *)(unaff_x22 + 0x6d6);
    uVar7 = *(undefined1 *)(unaff_x22 + 0x6d3);
    func_0x000100083b20(unaff_x22 + 0x1078);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x1090);
    lVar40 = *(long *)(unaff_x22 + 0x1098);
    func_0x0001000a8868(unaff_x22 + 0x1078,uVar39);
    (**(code **)(lVar40 + 8))(0,uVar9,2,2,uVar36,uVar7,uVar39,lVar40);
    func_0x0001000834e4(unaff_x22 + 0x1078);
  }
  lVar40 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  *(long *)(unaff_x22 + 0x1178) = lVar40;
  lVar40 = *(long *)(lVar40 + -8);
  *(long *)(unaff_x22 + 0x1180) = lVar40;
  lVar40 = *(long *)(lVar40 + 0x40);
  *(long *)(unaff_x22 + 0x1188) = lVar40;
  uVar12 = lVar40 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1190) = uVar12;
  lVar40 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  *(long *)(unaff_x22 + 0x1198) = lVar40;
  lVar25 = *(long *)(lVar40 + -8);
  *(long *)(unaff_x22 + 0x11a0) = lVar25;
  lVar26 = *(long *)(lVar25 + 0x40);
  uVar20 = lVar26 + 0xf;
  uVar13 = uVar20 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x11a8) = uVar13;
  lVar14 = 0x112e08dd0;
  func_0x0001000285a8(0x112e08dd0,&UNK_10d9de470);
  lVar43 = *(long *)(lVar14 + -8);
  uVar15 = *(long *)(lVar43 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar15);
  (**(code **)(lVar43 + 0x68))();
  iVar11 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar11 == 0) {
    FUN_101c0a698(uVar12,uVar13,uVar15);
  }
  else {
    func_0x000107c5fd10(uVar12,uVar13,&UNK_1106c66a8,uVar15,&UNK_1106c66a8);
  }
  puVar1 = (undefined8 *)(unaff_x22 + 0x3d8);
  puVar33 = (undefined8 *)(unaff_x22 + 0x6d8);
  puVar2 = (undefined8 *)(unaff_x22 + 0x988);
  puVar3 = (undefined8 *)(unaff_x22 + 0xbe8);
  puVar4 = (undefined8 *)(unaff_x22 + 0xe18);
  (**(code **)(lVar43 + 8))(uVar15,lVar14);
  func_0x000107c615c0(uVar15);
  lVar14 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  *(long *)(unaff_x22 + 0x11b0) = lVar14;
  lVar27 = *(long *)(lVar14 + -8);
  *(long *)(unaff_x22 + 0x11b8) = lVar27;
  lVar28 = *(long *)(lVar27 + 0x40);
  uVar15 = lVar28 + 0xf;
  uVar16 = uVar15 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x11c0) = uVar16;
  lVar43 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  *(long *)(unaff_x22 + 0x11c8) = lVar43;
  lVar29 = *(long *)(lVar43 + -8);
  *(long *)(unaff_x22 + 0x11d0) = lVar29;
  lVar30 = *(long *)(lVar29 + 0x40);
  uVar22 = lVar30 + 0xf;
  uVar17 = uVar22 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x11d8) = uVar17;
  lVar42 = 0x112e009f0;
  func_0x0001000285a8(0x112e009f0,&UNK_10d9d0d60);
  lVar41 = *(long *)(lVar42 + -8);
  uVar18 = *(long *)(lVar41 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x11e0) = uVar18;
  (**(code **)(lVar41 + 0x68))();
  if (iVar11 == 0) {
    func_0x000101b0eb4c(uVar16,uVar17,uVar18);
  }
  else {
    func_0x000107c5fd10(uVar16,uVar17,PTR___sytN_11034f1b0 + 8,uVar18,PTR___sytN_11034f1b0 + 8);
  }
  puVar31 = *(undefined8 **)(unaff_x22 + 0x1148);
  puVar37 = *(undefined8 **)(unaff_x22 + 0x1130);
  (**(code **)(lVar41 + 8))(uVar18,lVar42);
  func_0x0001048580f8(unaff_x22 + 0x1118);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1118);
  uVar39 = 0;
  FUN_101c0c8a0();
  uVar36 = 0x112e08dd8;
  FUN_101c0aff8(0x112e08dd8,FUN_101c0c8a0,&UNK_10d9de690);
  func_0x000107c5f1e4(uVar39,uVar36);
  uVar38 = *puVar37;
  uVar34 = puVar37[3];
  uVar36 = puVar37[2];
  *(undefined8 *)(unaff_x22 + 0xd70) = puVar37[1];
  *(undefined8 *)(unaff_x22 + 0xd68) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xd80) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xd78) = uVar36;
  uVar36 = puVar37[8];
  uVar38 = puVar37[0xb];
  uVar34 = puVar37[10];
  uVar47 = puVar37[5];
  uVar46 = puVar37[4];
  uVar45 = puVar37[7];
  uVar44 = puVar37[6];
  *(undefined8 *)(unaff_x22 + 0xdb0) = puVar37[9];
  *(undefined8 *)(unaff_x22 + 0xda8) = uVar36;
  *(undefined8 *)(unaff_x22 + 0xdc0) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xdb8) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xd90) = uVar47;
  *(undefined8 *)(unaff_x22 + 0xd88) = uVar46;
  *(undefined8 *)(unaff_x22 + 0xda0) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xd98) = uVar44;
  uVar45 = puVar37[0xf];
  uVar44 = puVar37[0xe];
  uVar34 = puVar37[0x11];
  uVar36 = puVar37[0x10];
  uVar38 = *(undefined8 *)((long)puVar37 + 0x89);
  uVar47 = puVar37[0xd];
  uVar46 = puVar37[0xc];
  *(undefined8 *)(unaff_x22 + 0xdf9) = *(undefined8 *)((long)puVar37 + 0x91);
  *(undefined8 *)(unaff_x22 + 0xdf1) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xde0) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xdd8) = uVar44;
  *(undefined8 *)(unaff_x22 + 0xdf0) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xde8) = uVar36;
  *(undefined8 *)(unaff_x22 + 0xdd0) = uVar47;
  *(undefined8 *)(unaff_x22 + 0xdc8) = uVar46;
  uVar36 = *puVar31;
  uVar34 = *puVar37;
  uVar44 = puVar37[3];
  uVar38 = puVar37[2];
  *(undefined8 *)(unaff_x22 + 0xe20) = puVar37[1];
  *puVar4 = uVar34;
  *(undefined8 *)(unaff_x22 + 0xe30) = uVar44;
  *(undefined8 *)(unaff_x22 + 0xe28) = uVar38;
  uVar38 = puVar37[5];
  uVar34 = puVar37[4];
  uVar45 = puVar37[7];
  uVar44 = puVar37[6];
  uVar46 = puVar37[8];
  uVar48 = puVar37[0xb];
  uVar47 = puVar37[10];
  *(undefined8 *)(unaff_x22 + 0xe60) = puVar37[9];
  *(undefined8 *)(unaff_x22 + 0xe58) = uVar46;
  *(undefined8 *)(unaff_x22 + 0xe70) = uVar48;
  *(undefined8 *)(unaff_x22 + 0xe68) = uVar47;
  *(undefined8 *)(unaff_x22 + 0xe40) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xe38) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xe50) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xe48) = uVar44;
  uVar38 = puVar37[0xd];
  uVar34 = puVar37[0xc];
  uVar45 = puVar37[0xf];
  uVar44 = puVar37[0xe];
  uVar47 = puVar37[0x11];
  uVar46 = puVar37[0x10];
  uVar48 = *(undefined8 *)((long)puVar37 + 0x89);
  *(undefined8 *)(unaff_x22 + 0xea9) = *(undefined8 *)((long)puVar37 + 0x91);
  *(undefined8 *)(unaff_x22 + 0xea1) = uVar48;
  *(undefined8 *)(unaff_x22 + 0xe90) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xe88) = uVar44;
  *(undefined8 *)(unaff_x22 + 0xea0) = uVar47;
  *(undefined8 *)(unaff_x22 + 0xe98) = uVar46;
  *(undefined8 *)(unaff_x22 + 0xe80) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xe78) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xeb8) = uVar39;
  *(undefined8 *)(unaff_x22 + 0xec0) = uVar32;
  puVar35 = &UNK_10d9de480;
  func_0x000107c614e0();
  uVar54 = *(undefined8 *)(unaff_x22 + 0xea0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0xe98);
  uVar77 = *(undefined8 *)(unaff_x22 + 0xeb0);
  uVar66 = *(undefined8 *)(unaff_x22 + 0xea8);
  uVar55 = *(undefined8 *)(unaff_x22 + 0xec0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xeb8);
  uVar56 = *(undefined8 *)(unaff_x22 + 0xe60);
  uVar44 = *(undefined8 *)(unaff_x22 + 0xe58);
  uVar78 = *(undefined8 *)(unaff_x22 + 0xe70);
  uVar67 = *(undefined8 *)(unaff_x22 + 0xe68);
  uVar79 = *(undefined8 *)(unaff_x22 + 0xe80);
  uVar68 = *(undefined8 *)(unaff_x22 + 0xe78);
  uVar57 = *(undefined8 *)(unaff_x22 + 0xe90);
  uVar45 = *(undefined8 *)(unaff_x22 + 0xe88);
  uVar58 = *(undefined8 *)(unaff_x22 + 0xe20);
  uVar46 = *puVar4;
  uVar80 = *(undefined8 *)(unaff_x22 + 0xe30);
  uVar69 = *(undefined8 *)(unaff_x22 + 0xe28);
  uVar81 = *(undefined8 *)(unaff_x22 + 0xe40);
  uVar70 = *(undefined8 *)(unaff_x22 + 0xe38);
  uVar59 = *(undefined8 *)(unaff_x22 + 0xe50);
  uVar47 = *(undefined8 *)(unaff_x22 + 0xe48);
  *(undefined8 *)(unaff_x22 + 0xe08) = uVar39;
  *(undefined8 *)(unaff_x22 + 0xe10) = uVar32;
  func_0x000107c6157c(uVar36);
  func_0x000101c0b038(puVar37,unaff_x22 + 0xf78);
  FUN_101c0bae0(puVar4,unaff_x22 + 0xec8,0x112e08de0,&UNK_10d9de4a8);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0xd68),0x112e08de0,&UNK_10d9de4a8);
  uVar32 = puVar31[1];
  *(undefined8 *)(unaff_x22 + 0xbf0) = uVar58;
  *puVar3 = uVar46;
  *(undefined8 *)(unaff_x22 + 0xc00) = uVar80;
  *(undefined8 *)(unaff_x22 + 0xbf8) = uVar69;
  *(undefined8 *)(unaff_x22 + 0xc30) = uVar56;
  *(undefined8 *)(unaff_x22 + 0xc28) = uVar44;
  *(undefined8 *)(unaff_x22 + 0xc40) = uVar78;
  *(undefined8 *)(unaff_x22 + 0xc38) = uVar67;
  *(undefined8 *)(unaff_x22 + 0xc10) = uVar81;
  *(undefined8 *)(unaff_x22 + 0xc08) = uVar70;
  *(undefined8 *)(unaff_x22 + 0xc20) = uVar59;
  *(undefined8 *)(unaff_x22 + 0xc18) = uVar47;
  *(undefined8 *)(unaff_x22 + 0xc80) = uVar77;
  *(undefined8 *)(unaff_x22 + 0xc78) = uVar66;
  *(undefined8 *)(unaff_x22 + 0xc90) = uVar55;
  *(undefined8 *)(unaff_x22 + 0xc88) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xc60) = uVar57;
  *(undefined8 *)(unaff_x22 + 0xc58) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xc70) = uVar54;
  *(undefined8 *)(unaff_x22 + 0xc68) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xc50) = uVar79;
  *(undefined8 *)(unaff_x22 + 0xc48) = uVar68;
  *(undefined **)(unaff_x22 + 0xc98) = puVar35;
  *(undefined8 *)(unaff_x22 + 0xca0) = uVar36;
  puVar19 = &UNK_10d9de4b0;
  func_0x000107c614e0();
  uVar60 = *(undefined8 *)(unaff_x22 + 0xc70);
  uVar48 = *(undefined8 *)(unaff_x22 + 0xc68);
  uVar82 = *(undefined8 *)(unaff_x22 + 0xc80);
  uVar71 = *(undefined8 *)(unaff_x22 + 0xc78);
  uVar61 = *(undefined8 *)(unaff_x22 + 0xc90);
  uVar49 = *(undefined8 *)(unaff_x22 + 0xc88);
  uVar83 = *(undefined8 *)(unaff_x22 + 0xca0);
  uVar72 = *(undefined8 *)(unaff_x22 + 0xc98);
  uVar62 = *(undefined8 *)(unaff_x22 + 0xc30);
  uVar50 = *(undefined8 *)(unaff_x22 + 0xc28);
  uVar84 = *(undefined8 *)(unaff_x22 + 0xc40);
  uVar73 = *(undefined8 *)(unaff_x22 + 0xc38);
  uVar63 = *(undefined8 *)(unaff_x22 + 0xc50);
  uVar51 = *(undefined8 *)(unaff_x22 + 0xc48);
  uVar85 = *(undefined8 *)(unaff_x22 + 0xc60);
  uVar74 = *(undefined8 *)(unaff_x22 + 0xc58);
  uVar64 = *(undefined8 *)(unaff_x22 + 0xbf0);
  uVar52 = *puVar3;
  uVar86 = *(undefined8 *)(unaff_x22 + 0xc00);
  uVar75 = *(undefined8 *)(unaff_x22 + 0xbf8);
  uVar65 = *(undefined8 *)(unaff_x22 + 0xc10);
  uVar53 = *(undefined8 *)(unaff_x22 + 0xc08);
  uVar87 = *(undefined8 *)(unaff_x22 + 0xc20);
  uVar76 = *(undefined8 *)(unaff_x22 + 0xc18);
  *(undefined8 *)(unaff_x22 + 0xbb0) = uVar54;
  *(undefined8 *)(unaff_x22 + 0xba8) = uVar34;
  *(undefined8 *)(unaff_x22 + 0xbc0) = uVar77;
  *(undefined8 *)(unaff_x22 + 3000) = uVar66;
  *(undefined8 *)(unaff_x22 + 0xbd0) = uVar55;
  *(undefined8 *)(unaff_x22 + 0xbc8) = uVar38;
  *(undefined8 *)(unaff_x22 + 0xb70) = uVar56;
  *(undefined8 *)(unaff_x22 + 0xb68) = uVar44;
  *(undefined8 *)(unaff_x22 + 0xb80) = uVar78;
  *(undefined8 *)(unaff_x22 + 0xb78) = uVar67;
  *(undefined8 *)(unaff_x22 + 0xb90) = uVar79;
  *(undefined8 *)(unaff_x22 + 0xb88) = uVar68;
  *(undefined8 *)(unaff_x22 + 0xba0) = uVar57;
  *(undefined8 *)(unaff_x22 + 0xb98) = uVar45;
  *(undefined8 *)(unaff_x22 + 0xb30) = uVar58;
  *(undefined8 *)(unaff_x22 + 0xb28) = uVar46;
  *(undefined8 *)(unaff_x22 + 0xb40) = uVar80;
  *(undefined8 *)(unaff_x22 + 0xb38) = uVar69;
  *(undefined8 *)(unaff_x22 + 0xb50) = uVar81;
  *(undefined8 *)(unaff_x22 + 0xb48) = uVar70;
  *(undefined8 *)(unaff_x22 + 0xb60) = uVar59;
  *(undefined8 *)(unaff_x22 + 0xb58) = uVar47;
  *(undefined **)(unaff_x22 + 0xbd8) = puVar35;
  *(undefined8 *)(unaff_x22 + 0xbe0) = uVar36;
  func_0x000107c6157c(uVar32);
  FUN_101c0bae0(puVar3,unaff_x22 + 0xca8,0x112e08de8,&UNK_10d9de4d8);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0xb28),0x112e08de8,&UNK_10d9de4d8);
  uVar39 = puVar31[10];
  uVar36 = puVar31[9];
  *(undefined1 *)(unaff_x22 + 0x1108) = *(undefined1 *)(puVar31 + 0xb);
  *(undefined8 *)(unaff_x22 + 0x1100) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x10f8) = uVar36;
  uVar39 = *(undefined8 *)(unaff_x22 + 0x10f8);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x1100);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x1108);
  *(undefined8 *)(unaff_x22 + 0xa10) = uVar60;
  *(undefined8 *)(unaff_x22 + 0xa08) = uVar48;
  *(undefined8 *)(unaff_x22 + 0xa20) = uVar82;
  *(undefined8 *)(unaff_x22 + 0xa18) = uVar71;
  *(undefined8 *)(unaff_x22 + 0xa30) = uVar61;
  *(undefined8 *)(unaff_x22 + 0xa28) = uVar49;
  *(undefined8 *)(unaff_x22 + 0xa40) = uVar83;
  *(undefined8 *)(unaff_x22 + 0xa38) = uVar72;
  *(undefined8 *)(unaff_x22 + 0x9d0) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x9c8) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x9e0) = uVar84;
  *(undefined8 *)(unaff_x22 + 0x9d8) = uVar73;
  *(undefined8 *)(unaff_x22 + 0x9f0) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x9e8) = uVar51;
  *(undefined8 *)(unaff_x22 + 0xa00) = uVar85;
  *(undefined8 *)(unaff_x22 + 0x9f8) = uVar74;
  *(undefined8 *)(unaff_x22 + 0x990) = uVar64;
  *puVar2 = uVar52;
  *(undefined8 *)(unaff_x22 + 0x9a0) = uVar86;
  *(undefined8 *)(unaff_x22 + 0x998) = uVar75;
  *(undefined8 *)(unaff_x22 + 0x9b0) = uVar65;
  *(undefined8 *)(unaff_x22 + 0x9a8) = uVar53;
  *(undefined8 *)(unaff_x22 + 0x9c0) = uVar87;
  *(undefined8 *)(unaff_x22 + 0x9b8) = uVar76;
  *(undefined **)(unaff_x22 + 0xa48) = puVar19;
  *(undefined8 *)(unaff_x22 + 0xa50) = uVar32;
  puVar35 = &UNK_10d9de4e0;
  func_0x000107c614e0();
  uVar55 = *(undefined8 *)(unaff_x22 + 0xa30);
  uVar34 = *(undefined8 *)(unaff_x22 + 0xa28);
  uVar88 = *(undefined8 *)(unaff_x22 + 0xa40);
  uVar69 = *(undefined8 *)(unaff_x22 + 0xa38);
  uVar56 = *(undefined8 *)(unaff_x22 + 0xa50);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xa48);
  uVar57 = *(undefined8 *)(unaff_x22 + 0x9f0);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x9e8);
  uVar89 = *(undefined8 *)(unaff_x22 + 0xa00);
  uVar70 = *(undefined8 *)(unaff_x22 + 0x9f8);
  uVar90 = *(undefined8 *)(unaff_x22 + 0xa10);
  uVar77 = *(undefined8 *)(unaff_x22 + 0xa08);
  uVar58 = *(undefined8 *)(unaff_x22 + 0xa20);
  uVar45 = *(undefined8 *)(unaff_x22 + 0xa18);
  uVar59 = *(undefined8 *)(unaff_x22 + 0x9b0);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x9a8);
  uVar91 = *(undefined8 *)(unaff_x22 + 0x9c0);
  uVar78 = *(undefined8 *)(unaff_x22 + 0x9b8);
  uVar92 = *(undefined8 *)(unaff_x22 + 0x9d0);
  uVar79 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar66 = *(undefined8 *)(unaff_x22 + 0x9e0);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x9d8);
  uVar93 = *(undefined8 *)(unaff_x22 + 0x990);
  uVar80 = *puVar2;
  uVar67 = *(undefined8 *)(unaff_x22 + 0x9a0);
  uVar54 = *(undefined8 *)(unaff_x22 + 0x998);
  *(undefined8 *)(unaff_x22 + 0x940) = uVar60;
  *(undefined8 *)(unaff_x22 + 0x938) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x950) = uVar82;
  *(undefined8 *)(unaff_x22 + 0x948) = uVar71;
  *(undefined8 *)(unaff_x22 + 0x960) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x958) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x970) = uVar83;
  *(undefined8 *)(unaff_x22 + 0x968) = uVar72;
  *(undefined8 *)(unaff_x22 + 0x900) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x8f8) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x910) = uVar84;
  *(undefined8 *)(unaff_x22 + 0x908) = uVar73;
  *(undefined8 *)(unaff_x22 + 0x920) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x918) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x930) = uVar85;
  *(undefined8 *)(unaff_x22 + 0x928) = uVar74;
  *(undefined8 *)(unaff_x22 + 0x8c0) = uVar64;
  *(undefined8 *)(unaff_x22 + 0x8b8) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x8d0) = uVar86;
  *(undefined8 *)(unaff_x22 + 0x8c8) = uVar75;
  *(undefined8 *)(unaff_x22 + 0x8e0) = uVar65;
  *(undefined8 *)(unaff_x22 + 0x8d8) = uVar53;
  *(undefined8 *)(unaff_x22 + 0x8f0) = uVar87;
  *(undefined8 *)(unaff_x22 + 0x8e8) = uVar76;
  *(undefined **)(unaff_x22 + 0x978) = puVar19;
  *(undefined8 *)(unaff_x22 + 0x980) = uVar32;
  FUN_101c0bae0(puVar2,unaff_x22 + 0xa58,0x112e08df0,&UNK_10d9de508);
  func_0x000101be6938((undefined8 *)(unaff_x22 + 0x10f8),unaff_x22 + 0x10e0);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x8b8),0x112e08df0,&UNK_10d9de508);
  uVar20 = uVar20 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar20);
  (**(code **)(lVar25 + 0x10))();
  uVar16 = (ulong)*(byte *)(lVar25 + 0x50);
  uVar18 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar19 = &UNK_110455f80;
  func_0x000107c613fc(&UNK_110455f80,uVar18 + lVar26,uVar16 | 7);
  (**(code **)(lVar25 + 0x20))(puVar19 + uVar18,uVar20,lVar40);
  *(undefined8 *)(unaff_x22 + 0x780) = uVar55;
  *(undefined8 *)(unaff_x22 + 0x778) = uVar34;
  *(undefined8 *)(unaff_x22 + 0x790) = uVar88;
  *(undefined8 *)(unaff_x22 + 0x788) = uVar69;
  *(undefined8 *)(unaff_x22 + 0x7a0) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x798) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x740) = uVar57;
  *(undefined8 *)(unaff_x22 + 0x738) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x750) = uVar89;
  *(undefined8 *)(unaff_x22 + 0x748) = uVar70;
  *(undefined8 *)(unaff_x22 + 0x760) = uVar90;
  *(undefined8 *)(unaff_x22 + 0x758) = uVar77;
  *(undefined8 *)(unaff_x22 + 0x770) = uVar58;
  *(undefined8 *)(unaff_x22 + 0x768) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x700) = uVar59;
  *(undefined8 *)(unaff_x22 + 0x6f8) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x710) = uVar91;
  *(undefined8 *)(unaff_x22 + 0x708) = uVar78;
  *(undefined8 *)(unaff_x22 + 0x720) = uVar92;
  *(undefined8 *)(unaff_x22 + 0x718) = uVar79;
  *(undefined8 *)(unaff_x22 + 0x730) = uVar66;
  *(undefined8 *)(unaff_x22 + 0x728) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x6e0) = uVar93;
  *puVar33 = uVar80;
  *(undefined8 *)(unaff_x22 + 0x6f0) = uVar67;
  *(undefined8 *)(unaff_x22 + 0x6e8) = uVar54;
  *(undefined **)(unaff_x22 + 0x7a8) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x7b0) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x7b8) = uVar36;
  *(undefined1 *)(unaff_x22 + 0x7c0) = uVar7;
  puVar21 = &UNK_10d9de300;
  func_0x000107c614e0();
  uVar60 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x798);
  uVar71 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uStack_158 = (undefined1)*(undefined8 *)(unaff_x22 + 0x7b0);
  uStack_14f = (undefined7)*(undefined8 *)(unaff_x22 + 0x7b9);
  uStack_148 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x7b9) >> 0x38);
  uStack_157 = (undefined7)*(undefined8 *)(unaff_x22 + 0x7b1);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)(unaff_x22 + 0x7b1) >> 0x38);
  uVar61 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x758);
  uVar82 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar72 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar83 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar73 = *(undefined8 *)(unaff_x22 + 0x778);
  uVar62 = *(undefined8 *)(unaff_x22 + 0x790);
  uVar49 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar63 = *(undefined8 *)(unaff_x22 + 0x720);
  uVar50 = *(undefined8 *)(unaff_x22 + 0x718);
  uVar84 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar74 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar85 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar75 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar64 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar51 = *(undefined8 *)(unaff_x22 + 0x748);
  uVar65 = *(undefined8 *)(unaff_x22 + 0x6e0);
  uVar52 = *puVar33;
  uVar86 = *(undefined8 *)(unaff_x22 + 0x6f0);
  uVar76 = *(undefined8 *)(unaff_x22 + 0x6e8);
  uVar87 = *(undefined8 *)(unaff_x22 + 0x700);
  uVar81 = *(undefined8 *)(unaff_x22 + 0x6f8);
  uVar68 = *(undefined8 *)(unaff_x22 + 0x710);
  uVar53 = *(undefined8 *)(unaff_x22 + 0x708);
  *(undefined8 *)(unaff_x22 + 0x690) = uVar55;
  *(undefined8 *)(unaff_x22 + 0x688) = uVar34;
  *(undefined8 *)(unaff_x22 + 0x6a0) = uVar88;
  *(undefined8 *)(unaff_x22 + 0x698) = uVar69;
  *(undefined8 *)(unaff_x22 + 0x6b0) = uVar56;
  *(undefined8 *)(unaff_x22 + 0x6a8) = uVar38;
  *(undefined8 *)(unaff_x22 + 0x650) = uVar57;
  *(undefined8 *)(unaff_x22 + 0x648) = uVar44;
  *(undefined8 *)(unaff_x22 + 0x660) = uVar89;
  *(undefined8 *)(unaff_x22 + 0x658) = uVar70;
  *(undefined8 *)(unaff_x22 + 0x670) = uVar90;
  *(undefined8 *)(unaff_x22 + 0x668) = uVar77;
  *(undefined8 *)(unaff_x22 + 0x680) = uVar58;
  *(undefined8 *)(unaff_x22 + 0x678) = uVar45;
  *(undefined8 *)(unaff_x22 + 0x610) = uVar59;
  *(undefined8 *)(unaff_x22 + 0x608) = uVar46;
  *(undefined8 *)(unaff_x22 + 0x620) = uVar91;
  *(undefined8 *)(unaff_x22 + 0x618) = uVar78;
  *(undefined8 *)(unaff_x22 + 0x630) = uVar92;
  *(undefined8 *)(unaff_x22 + 0x628) = uVar79;
  *(undefined8 *)(unaff_x22 + 0x640) = uVar66;
  *(undefined8 *)(unaff_x22 + 0x638) = uVar47;
  *(undefined8 *)(unaff_x22 + 0x5f0) = uVar93;
  *(undefined8 *)(unaff_x22 + 0x5e8) = uVar80;
  *(undefined8 *)(unaff_x22 + 0x600) = uVar67;
  *(undefined8 *)(unaff_x22 + 0x5f8) = uVar54;
  *(undefined **)(unaff_x22 + 0x6b8) = puVar35;
  *(undefined8 *)(unaff_x22 + 0x6c0) = uVar39;
  *(undefined8 *)(unaff_x22 + 0x6c8) = uVar36;
  *(undefined1 *)(unaff_x22 + 0x6d0) = uVar7;
  FUN_101c0bae0(puVar33,unaff_x22 + 0x7c8,0x112e08df8,&UNK_10d9de510);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x5e8),0x112e08df8,&UNK_10d9de510);
  func_0x000107c615c0(uVar20);
  uVar22 = uVar22 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (**(code **)(lVar29 + 0x10))();
  uVar20 = (ulong)*(byte *)(lVar29 + 0x50);
  uVar16 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  puVar35 = &UNK_110455fa8;
  func_0x000107c613fc(&UNK_110455fa8,uVar16 + lVar30,uVar20 | 7);
  (**(code **)(lVar29 + 0x20))(puVar35 + uVar16,uVar22,lVar43);
  *(undefined8 *)(unaff_x22 + 0x4a0) = uVar60;
  *(undefined8 *)(unaff_x22 + 0x498) = uVar32;
  *(ulong *)(unaff_x22 + 0x4b0) = CONCAT71(uStack_157,uStack_158);
  *(undefined8 *)(unaff_x22 + 0x4a8) = uVar71;
  *(ulong *)(unaff_x22 + 0x4c0) = CONCAT71(uStack_147,uStack_148);
  *(ulong *)(unaff_x22 + 0x4b8) = CONCAT71(uStack_14f,uStack_150);
  *(undefined8 *)(unaff_x22 + 0x460) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x458) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x470) = uVar82;
  *(undefined8 *)(unaff_x22 + 0x468) = uVar72;
  *(undefined8 *)(unaff_x22 + 0x480) = uVar83;
  *(undefined8 *)(unaff_x22 + 0x478) = uVar73;
  *(undefined8 *)(unaff_x22 + 0x490) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x488) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x420) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x418) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x430) = uVar84;
  *(undefined8 *)(unaff_x22 + 0x428) = uVar74;
  *(undefined8 *)(unaff_x22 + 0x440) = uVar85;
  *(undefined8 *)(unaff_x22 + 0x438) = uVar75;
  *(undefined8 *)(unaff_x22 + 0x450) = uVar64;
  *(undefined8 *)(unaff_x22 + 0x448) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x3e0) = uVar65;
  *puVar1 = uVar52;
  *(undefined8 *)(unaff_x22 + 0x3f0) = uVar86;
  *(undefined8 *)(unaff_x22 + 1000) = uVar76;
  *(undefined8 *)(unaff_x22 + 0x400) = uVar87;
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar81;
  *(undefined8 *)(unaff_x22 + 0x410) = uVar68;
  *(undefined8 *)(unaff_x22 + 0x408) = uVar53;
  *(undefined **)(unaff_x22 + 0x4c8) = puVar21;
  *(code **)(unaff_x22 + 0x4d0) = FUN_101c0b074;
  *(undefined **)(unaff_x22 + 0x4d8) = puVar19;
  puVar23 = &UNK_10d9de338;
  func_0x000107c614e0();
  func_0x000107c610b4(unaff_x22 + 0x198,puVar1,0x108);
  *(undefined8 *)(unaff_x22 + 0x380) = uVar60;
  *(undefined8 *)(unaff_x22 + 0x378) = uVar32;
  *(ulong *)(unaff_x22 + 0x390) = CONCAT71(uStack_157,uStack_158);
  *(undefined8 *)(unaff_x22 + 0x388) = uVar71;
  *(ulong *)(unaff_x22 + 0x3a0) = CONCAT71(uStack_147,uStack_148);
  *(ulong *)(unaff_x22 + 0x398) = CONCAT71(uStack_14f,uStack_150);
  *(undefined8 *)(unaff_x22 + 0x340) = uVar61;
  *(undefined8 *)(unaff_x22 + 0x338) = uVar48;
  *(undefined8 *)(unaff_x22 + 0x350) = uVar82;
  *(undefined8 *)(unaff_x22 + 0x348) = uVar72;
  *(undefined8 *)(unaff_x22 + 0x360) = uVar83;
  *(undefined8 *)(unaff_x22 + 0x358) = uVar73;
  *(undefined8 *)(unaff_x22 + 0x370) = uVar62;
  *(undefined8 *)(unaff_x22 + 0x368) = uVar49;
  *(undefined8 *)(unaff_x22 + 0x300) = uVar63;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar50;
  *(undefined8 *)(unaff_x22 + 0x310) = uVar84;
  *(undefined8 *)(unaff_x22 + 0x308) = uVar74;
  *(undefined8 *)(unaff_x22 + 800) = uVar85;
  *(undefined8 *)(unaff_x22 + 0x318) = uVar75;
  *(undefined8 *)(unaff_x22 + 0x330) = uVar64;
  *(undefined8 *)(unaff_x22 + 0x328) = uVar51;
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar65;
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar52;
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar86;
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar76;
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar87;
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar81;
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar68;
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar53;
  *(undefined **)(unaff_x22 + 0x3a8) = puVar21;
  *(code **)(unaff_x22 + 0x3b0) = FUN_101c0b074;
  *(undefined **)(unaff_x22 + 0x3b8) = puVar19;
  FUN_101c0bae0(puVar1,unaff_x22 + 0x4e0,0x112e08e00,&UNK_10d9de518);
  func_0x000101c0bb28((undefined8 *)(unaff_x22 + 0x2b8),0x112e08e00,&UNK_10d9de518);
  func_0x000107c615c0(uVar22);
  *(undefined **)(unaff_x22 + 0x2a0) = puVar23;
  *(undefined8 *)(unaff_x22 + 0x2a8) = 0x101c0b078;
  *(undefined **)(unaff_x22 + 0x2b0) = puVar35;
  func_0x0001000285a8(0x112e08e08,&UNK_10d9de520);
  func_0x000107c610f8();
  lVar40 = unaff_x22 + 0x198;
  func_0x000107c5f458();
  *(long *)(unaff_x22 + 0x11e8) = lVar40;
  func_0x000107c61174();
  lVar25 = lVar40;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar25 != 0) {
    puVar33 = *(undefined8 **)(unaff_x22 + 0x1148);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x6d3);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x1140);
    uVar6 = *(undefined4 *)(unaff_x22 + 0x6d4);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x1138);
    puVar35 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar25);
    func_0x000107c61170(puVar35);
    func_0x000107c61170(lVar25);
    puVar21 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    *(undefined **)(unaff_x22 + 0x11f0) = puVar21;
    lVar26 = lVar40;
    func_0x000107c61170();
    FUN_101c0afd8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(long *)(unaff_x22 + 0x11f8) = lVar26;
    func_0x000107c52aa4(puVar21);
    func_0x000107c5a070(puVar21);
    func_0x000107c5a074(puVar21);
    func_0x0001048580f8(unaff_x22 + 0x1110);
    lVar43 = *(long *)(unaff_x22 + 0x1110);
    lVar25 = 0x112e08e10;
    func_0x0001000285a8(0x112e08e10,&UNK_10d9de528);
    lVar42 = *(long *)(lVar25 + -8);
    uVar20 = *(long *)(lVar42 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar20);
    func_0x000107c61428(lVar43 + _DAT_112e08e98,unaff_x22 + 0x10c8,0x21,0);
    func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
    func_0x000107c5f200(uVar20);
    func_0x000107c614a8(unaff_x22 + 0x10c8);
    func_0x000107c61574(lVar43);
    puVar35 = &UNK_110455fd0;
    func_0x000107c613fc(&UNK_110455fd0,0x18,7);
    puVar19 = puVar35 + 0x10;
    func_0x000107c61614(puVar19,puVar21);
    FUN_101c0b084();
    uVar32 = 0x101c0b07c;
    func_0x000107c5f21c(0x101c0b07c,puVar35,lVar25,puVar19);
    *(undefined8 *)(unaff_x22 + 0x1200) = uVar32;
    func_0x000107c61574(puVar35);
    (**(code **)(lVar42 + 8))(uVar20,lVar25);
    func_0x000107c615c0(uVar20);
    FUN_101c0aa78(lVar40,uVar38);
    puVar35 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    *(undefined **)(unaff_x22 + 0x1208) = puVar35;
    func_0x000107c54d20(uVar53,puVar21);
    func_0x000107c4ef3c(uVar53,puVar21);
    uVar15 = uVar15 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar15);
    (**(code **)(lVar27 + 0x10))();
    uVar20 = (ulong)*(byte *)(lVar27 + 0x50);
    uVar16 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
    lVar28 = uVar16 + lVar28;
    uVar22 = lVar28 + 0x67U & 0xfffffffffffffff8;
    puVar35 = &UNK_110455ff8;
    func_0x000107c613fc(&UNK_110455ff8,uVar22 + 0x18,uVar20 | 7);
    (**(code **)(lVar27 + 0x20))(puVar35 + uVar16,uVar15,lVar14);
    puVar1 = (undefined8 *)(puVar35 + (lVar28 + 7U & 0xfffffffffffffff8));
    uVar46 = *puVar33;
    uVar45 = puVar33[3];
    uVar44 = puVar33[2];
    puVar1[1] = puVar33[1];
    *puVar1 = uVar46;
    puVar1[3] = uVar45;
    puVar1[2] = uVar44;
    uVar48 = puVar33[7];
    uVar47 = puVar33[6];
    uVar45 = puVar33[9];
    uVar44 = puVar33[8];
    uVar46 = *(undefined8 *)((long)puVar33 + 0x49);
    uVar50 = puVar33[5];
    uVar49 = puVar33[4];
    *(undefined8 *)((long)puVar1 + 0x51) = *(undefined8 *)((long)puVar33 + 0x51);
    *(undefined8 *)((long)puVar1 + 0x49) = uVar46;
    puVar1[7] = uVar48;
    puVar1[6] = uVar47;
    puVar1[9] = uVar45;
    puVar1[8] = uVar44;
    puVar1[5] = uVar50;
    puVar1[4] = uVar49;
    *(long *)(puVar35 + uVar22) = lVar40;
    *(undefined8 *)(puVar35 + uVar22 + 8) = uVar38;
    *(undefined **)(puVar35 + uVar22 + 0x10) = puVar21;
    func_0x000107c615c0(uVar15);
    func_0x000107c61174(lVar40);
    FUN_101c0b1e4(puVar33,unaff_x22 + 0x1018);
    func_0x000107c61174(uVar38);
    func_0x000107c61174();
    func_0x0001001ca524(uVar39,uVar36,uVar7,4,0,0,&UNK_10d9de540,puVar35,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574();
    *(ulong *)(unaff_x22 + 0x120) = uVar12;
    *(undefined **)(unaff_x22 + 0x128) = puVar21;
    *(long *)(unaff_x22 + 0x130) = lVar26;
    *(ulong *)(unaff_x22 + 0x138) = uVar13;
    *(ulong *)(unaff_x22 + 0x140) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar32;
    *(char *)(unaff_x22 + 0x150) = (char)uVar6;
    *(char *)(unaff_x22 + 0x151) = (char)((uint)uVar6 >> 8);
    *(char *)(unaff_x22 + 0x152) = (char)((uint)uVar6 >> 0x10);
    *(undefined8 *)(unaff_x22 + 0x158) = uVar34;
    *(undefined1 *)(unaff_x22 + 0x160) = uVar8;
    *(undefined8 **)(unaff_x22 + 0x168) = puVar33;
    *(undefined **)(unaff_x22 + 0x3d0) = puVar21;
    func_0x000107c5fce8();
    *(undefined **)(unaff_x22 + 0x1210) = puVar35;
    iVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar11 != 0) {
      uVar36 = *(undefined8 *)(unaff_x22 + 0x1160);
      plVar24 = (long *)(ulong)*(uint *)(
                                        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                        + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1218) = plVar24;
      *plVar24 = unaff_x22;
      plVar24[1] = (long)FUN_101c065ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
      )(plVar24,unaff_x22 + 0x6d1,&UNK_10d9de550,unaff_x22 + 0x110,FUN_101c0b2dc,unaff_x22 + 0x3c0,
        puVar35,uVar36,&UNK_1106c66a8);
      return;
    }
    if (puVar35 == (undefined *)0x0) {
      puVar35 = (undefined *)0x0;
      uVar36 = 0;
    }
    else {
      uVar36 = *(undefined8 *)(unaff_x22 + 0x1160);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(undefined8 *)(unaff_x22 + 0x1228) = uVar36;
    *(undefined **)(unaff_x22 + 0x1220) = puVar35;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c06634,puVar35);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x101c065ac);
  (*pcVar10)();
}



/* Entry: 101c065ac; end: 101c06633;  */

/* WARNING: Possible PIC construction at 0x000101c06604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c06608) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_101c065ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1218));
  uVar1 = *(undefined8 *)(lVar2 + 0x1210);
  if (unaff_x20 != 0) {
    func_0x000107c614ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c06634; end: 101c066b3;  */

void FUN_101c06634(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1150);
  pcVar1 = FUN_101c0b2dc;
  func_0x000107c615b4(FUN_101c0b2dc,unaff_x22 + 0x3c0);
  *(code **)(unaff_x22 + 0x1230) = pcVar1;
  func_0x000107c5fce8();
  *(code **)(unaff_x22 + 0x1238) = pcVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1240) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x1248) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c066b4,uVar3,uVar2);
  return;
}



/* Entry: 101c066b4; end: 101c06723;  */

void FUN_101c066b4(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x1250) = param_1;
  if (param_1 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1160);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(undefined8 *)(unaff_x22 + 0x1260) = uVar1;
  *(long *)(unaff_x22 + 0x1258) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c06724,param_1);
  return;
}



/* Entry: 101c06724; end: 101c067a7;  */

void FUN_101c06724(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x10;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1150);
  lVar2 = lVar1;
  func_0x000107c615ac(lVar1,&UNK_1106c66a8);
  *(long *)(unaff_x22 + 0x1128) = lVar1;
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0x1268) = lVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1270) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x1278) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c067a8,uVar4,uVar3);
  return;
}



/* Entry: 101c067a8; end: 101c069c3;  */

void FUN_101c067a8(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x11f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x11f0);
  lVar10 = *(long *)(unaff_x22 + 0x1188);
  lVar13 = *(long *)(unaff_x22 + 0x1180);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1178);
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar1 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar1);
  lVar2 = 0;
  func_0x000107c5fd0c();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar6)(uVar1,1,1,lVar2);
  uVar3 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  (**(code **)(lVar13 + 0x10))();
  uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_110456020;
  func_0x000107c613fc(&UNK_110456020,uVar11 + 8,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar12,uVar3,uVar14);
  *(undefined8 *)(puVar4 + uVar11) = uVar9;
  func_0x000107c615c0(uVar3);
  func_0x000107c61174(uVar9);
  FUN_101c09ef0(uVar1,&UNK_10d9de568,puVar4);
  func_0x000101c0bb28(uVar1,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0(uVar1);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  (*pcVar6)();
  puVar4 = &UNK_110456048;
  func_0x000107c613fc(&UNK_110456048,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  func_0x000107c61174();
  FUN_101c09ef0(uVar5,&UNK_10d9de578,puVar4);
  func_0x000101c0bb28(uVar5,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c615c0();
  func_0x000107c5fce8();
  *(ulong *)(unaff_x22 + 0x1280) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x6d2,unaff_x22 + 0x10,FUN_101c069c4,unaff_x22 + 0x170);
  return;
}



/* Entry: 101c069c4; end: 101c06a27;  */

void FUN_101c069c4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1280));
    *(undefined1 *)(unaff_x22 + 0x7c1) = *(undefined1 *)(unaff_x22 + 0x6d2);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1278);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1270);
    pcVar1 = FUN_101c06a28;
  }
  else {
    func_0x000107c614ac();
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1278);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1270);
    pcVar1 = FUN_101c06c6c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c06a28; end: 101c06acf;  */

void FUN_101c06a28(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x7c1);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1268));
  *(undefined1 *)(unaff_x22 + 0x7c2) = uVar1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1288) = plVar3;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c06ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c06ad0; end: 101c06b5f;  */

void FUN_101c06ad0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1288));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c06b18,*(undefined8 *)(lVar1 + 0x1258),*(undefined8 *)(lVar1 + 0x1260));
  return;
}



/* Entry: 101c06b60; end: 101c06c6b;  */

void FUN_101c06b60(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  bVar1 = *(byte *)(unaff_x22 + 0x7c2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x11c8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1198);
  cVar2 = *(char *)(unaff_x22 + 0x6d6);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1238));
  func_0x000107c5fd2c(uVar6);
  func_0x000107c5fd2c(uVar5);
  func_0x000107c5f1dc();
  if ((0xfffffffd < bVar1 - 3) && (cVar2 != '\x05')) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1140);
    uVar4 = *(undefined2 *)(unaff_x22 + 0x6d6);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x6d3);
    func_0x000100083b20(unaff_x22 + 0x10a0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10b8);
    lVar7 = *(long *)(unaff_x22 + 0x10c0);
    func_0x0001000a8868(unaff_x22 + 0x10a0,uVar6);
    (**(code **)(lVar7 + 8))(2,uVar4,2,2,uVar5,uVar3,uVar6,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x10a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c06e74,*(undefined8 *)(unaff_x22 + 0x1220),*(undefined8 *)(unaff_x22 + 0x1228));
  return;
}



/* Entry: 101c06c6c; end: 101c06d27;  */

void FUN_101c06c6c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1268);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1280));
  func_0x000107c61574(uVar2);
  *(undefined1 *)(unaff_x22 + 0x7c2) = 2;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(unaff_x22 + 0x10,&UNK_1106c66a8,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScg22awaitAllRemainingTasksyyYaFTu_11034fe58 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1288) = plVar1;
  func_0x0001000285a8(0x112e08e20,&UNK_10d9de588);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c06ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScg22awaitAllRemainingTasksyyYaF_11034fe50)();
  return;
}



/* Entry: 101c06d28; end: 101c06e73;  */

void FUN_101c06d28(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1208);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x11f8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x11f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x11e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x11e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x11d8);
  lVar9 = *(long *)(unaff_x22 + 0x11d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x11c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x11c0);
  lVar10 = *(long *)(unaff_x22 + 0x11b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x11b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x11a8);
  lVar2 = *(long *)(unaff_x22 + 0x11a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1190);
  lVar7 = *(long *)(unaff_x22 + 0x1180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1178);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1200));
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar10 + 8))(uVar18,uVar14);
  (**(code **)(lVar9 + 8))(uVar13,uVar1);
  (**(code **)(lVar2 + 8))(uVar12,uVar3);
  (**(code **)(lVar7 + 8))(uVar4,uVar5);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101c06e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x7c3));
  return;
}



/* Entry: 101c06e74; end: 101c06ecb;  */

void FUN_101c06e74(void)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1210);
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x1230));
  func_0x000107c61574(uVar2);
  cVar1 = *(char *)(unaff_x22 + 0x7c2);
  if (cVar1 == '\x02') {
    cVar1 = '\x01';
  }
  *(char *)(unaff_x22 + 0x7c3) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c06d28,*(undefined8 *)(unaff_x22 + 0x1168),*(undefined8 *)(unaff_x22 + 0x1170));
  return;
}



/* Entry: 101c06ecc; end: 101c06f67;  */

void FUN_101c06ecc(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x92) = param_4;
  *(undefined4 *)(unaff_x22 + 0x94) = param_2;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x160) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x168) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c06f68,uVar2,uVar3);
  return;
}



/* Entry: 101c06f68; end: 101c0713f;  */

void FUN_101c06f68(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  
  func_0x00010008a7c8(unaff_x22 + 0x140);
  lVar8 = *(long *)(unaff_x22 + 0x140);
  if (lVar8 == 0) {
    uVar3 = *(undefined1 *)(unaff_x22 + 0x92);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar2 = *(uint *)(unaff_x22 + 0x94);
    FUN_101c026fc();
    *(undefined8 *)(unaff_x22 + 0x180) = param_1;
    puVar5 = &UNK_10d9de300;
    func_0x000107c614e0();
    *(undefined **)(unaff_x22 + 0x188) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x98) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined1 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
    *(char *)(unaff_x22 + 0xb8) = (char)uVar2;
    *(char *)(unaff_x22 + 0xb9) = (char)(uVar2 >> 8);
    *(char *)(unaff_x22 + 0xba) = (char)(uVar2 >> 0x10);
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
    *(undefined1 *)(unaff_x22 + 200) = uVar3;
    plVar4 = (long *)0xbb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 400) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c071d0;
    lVar8 = *(long *)(unaff_x22 + 0x150);
    lVar7 = *(long *)(unaff_x22 + 0x148);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x92);
    plVar4[0x14d] = *(long *)(unaff_x22 + 0x158);
    *(undefined1 *)((long)plVar4 + 0x4cb) = uVar3;
    plVar4[0x14c] = lVar8;
    *(uint *)((long)plVar4 + 0x4cc) = uVar2 & 0xffffff;
    plVar4[0x14b] = lVar7;
    plVar4[0x14a] = unaff_x22 + 0x98;
    lVar7 = 0;
    func_0x000107c5fcec();
    puVar5 = PTR___sScMMa_11034fc70;
    plVar4[0x14e] = lVar7;
    lVar8 = lVar7;
    func_0x000107c5fce8();
    plVar4[0x14f] = lVar8;
    lVar8 = 0x112d45220;
    FUN_101c0aff8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
    plVar4[0x150] = lVar8;
    func_0x000107c5fca8();
    plVar4[0x151] = lVar7;
    plVar4[0x152] = lVar8;
    pcVar6 = FUN_101c02acc;
  }
  else {
    uVar3 = *(undefined1 *)(unaff_x22 + 0x92);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar2 = *(uint *)(unaff_x22 + 0x94);
    func_0x000100083b20(unaff_x22 + 0xf8);
    func_0x000107c61574(lVar8);
    func_0x000101122624(unaff_x22 + 0xf8,unaff_x22 + 0xd0);
    lVar8 = unaff_x22 + 0xd0;
    func_0x0001011225e0(lVar8,unaff_x22 + 0x50);
    FUN_101c026fc();
    puVar5 = &UNK_10d9de300;
    func_0x000107c614e0();
    *(undefined8 *)(unaff_x22 + 0x10) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    puVar5 = &UNK_10d9de338;
    func_0x000107c614e0();
    *(undefined **)(unaff_x22 + 0x28) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined1 *)(unaff_x22 + 0x38) = 0;
    *(undefined1 *)(unaff_x22 + 0x91) = 0;
    func_0x000107c5f728(unaff_x22 + 0x40,(undefined1 *)(unaff_x22 + 0x91),PTR___sSbN_11034dd40);
    *(long *)(unaff_x22 + 0x78) = lVar8;
    *(char *)(unaff_x22 + 0x80) = (char)uVar2;
    *(char *)(unaff_x22 + 0x81) = (char)(uVar2 >> 8);
    *(char *)(unaff_x22 + 0x82) = (char)(uVar2 >> 0x10);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    *(undefined1 *)(unaff_x22 + 0x90) = uVar3;
    plVar4 = (long *)0x530;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x178) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c07140;
    lVar8 = *(long *)(unaff_x22 + 0x150);
    lVar7 = *(long *)(unaff_x22 + 0x148);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x92);
    plVar4[0x7d] = *(long *)(unaff_x22 + 0x158);
    *(undefined1 *)((long)plVar4 + 0x313) = uVar3;
    plVar4[0x7c] = lVar8;
    *(uint *)((long)plVar4 + 0x314) = uVar2 & 0xffffff;
    plVar4[0x7b] = lVar7;
    plVar4[0x7a] = unaff_x22 + 0x10;
    lVar7 = 0;
    func_0x000107c5fcec();
    puVar5 = PTR___sScMMa_11034fc70;
    plVar4[0x7e] = lVar7;
    lVar8 = lVar7;
    func_0x000107c5fce8();
    plVar4[0x7f] = lVar8;
    lVar8 = 0x112d45220;
    FUN_101c0aff8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
    plVar4[0x80] = lVar8;
    func_0x000107c5fca8();
    plVar4[0x81] = lVar7;
    plVar4[0x82] = lVar8;
    pcVar6 = FUN_101c042c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,lVar7,lVar8);
  return;
}



/* Entry: 101c07140; end: 101c071cf;  */

void FUN_101c07140(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x128) = param_1;
  *(long **)(lVar1 + 0x120) = unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x178));
  FUN_101c0726c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c07194,*(undefined8 *)(lVar1 + 0x168),*(undefined8 *)(lVar1 + 0x170));
  return;
}



/* Entry: 101c071d0; end: 101c07237;  */

void FUN_101c071d0(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(undefined1 *)(lVar3 + 0x138) = param_1;
  *(long **)(lVar3 + 0x130) = unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x188);
  uVar2 = *(undefined8 *)(lVar3 + 0x180);
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 400));
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c07238,*(undefined8 *)(lVar3 + 0x168),*(undefined8 *)(lVar3 + 0x170));
  return;
}



/* Entry: 101c07238; end: 101c0726b;  */

void FUN_101c07238(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x000101c07268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x138));
  return;
}



/* Entry: 101c0726c; end: 101c0729f;  */

undefined8 FUN_101c0726c(undefined8 param_1)

{
  (*(code *)(undefined *)0x101c114fc)();
  return param_1;
}



/* Entry: 101c072a0; end: 101c0733b;  */

void FUN_101c072a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xa9) = param_4;
  *(undefined4 *)(unaff_x22 + 0xac) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0733c,uVar2,uVar3);
  return;
}



/* Entry: 101c0733c; end: 101c0748b;  */

void FUN_101c0733c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  uint uVar9;
  
  func_0x00010008a7c8(unaff_x22 + 0x1c0);
  lVar7 = *(long *)(unaff_x22 + 0x1c0);
  if (lVar7 == 0) {
    uVar9 = *(uint *)(unaff_x22 + 0xac);
    FUN_101c026fc();
    func_0x000101c10e4c(unaff_x22 + 0x10);
    plVar4 = (long *)0x1290;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x200) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = 0x101c0751c;
    lVar3 = *(long *)(unaff_x22 + 0x1d0);
    lVar8 = *(long *)(unaff_x22 + 0x1d8);
    lVar5 = *(long *)(unaff_x22 + 0x1c8);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xa9);
    lVar7 = unaff_x22 + 0x10;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar9 = *(uint *)(unaff_x22 + 0xac);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xa9);
    func_0x000100083b20(unaff_x22 + 0x178);
    func_0x000107c61574(lVar7);
    func_0x000101122624(unaff_x22 + 0x178,unaff_x22 + 0x150);
    lVar7 = 0x112e08d88;
    func_0x0001000285a8(0x112e08d88,&UNK_10d9dec90);
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    func_0x0001011225e0(unaff_x22 + 0x150,lVar7 + 0x20);
    func_0x000101c10e4c(unaff_x22 + 0xb0,lVar7,uVar9 & 0xffffff,uVar6,uVar1);
    plVar4 = (long *)0x1290;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1f8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c0748c;
    lVar3 = *(long *)(unaff_x22 + 0x1d0);
    lVar8 = *(long *)(unaff_x22 + 0x1d8);
    lVar5 = *(long *)(unaff_x22 + 0x1c8);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xa9);
    lVar7 = unaff_x22 + 0xb0;
  }
  plVar4[0x229] = lVar8;
  *(undefined1 *)((long)plVar4 + 0x6d3) = uVar1;
  plVar4[0x228] = lVar3;
  *(uint *)((long)plVar4 + 0x6d4) = uVar9 & 0xffffff;
  plVar4[0x227] = lVar5;
  plVar4[0x226] = lVar7;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  plVar4[0x22a] = lVar3;
  lVar7 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x22b] = lVar7;
  lVar7 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  plVar4[0x22c] = lVar7;
  func_0x000107c5fca8();
  plVar4[0x22d] = lVar3;
  plVar4[0x22e] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c05684,lVar3,lVar7);
  return;
}



/* Entry: 101c0748c; end: 101c075a3;  */

void FUN_101c0748c(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x1a8) = param_1;
  *(long **)(lVar1 + 0x1a0) = unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1f8));
  FUN_101c0ab88(lVar1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101c074e0,*(undefined8 *)(lVar1 + 0x1e8),*(undefined8 *)(lVar1 + 0x1f0));
  return;
}



/* Entry: 101c075a4; end: 101c07693;  */

void FUN_101c075a4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x138) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x1c4) = param_4;
  *(undefined4 *)(unaff_x22 + 0x1c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  lVar3 = 0x112e085c8;
  func_0x0001000285a8(0x112e085c8,&UNK_10d9dcfb0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  lVar3 = 0;
  func_0x000103a82768();
  *(long *)(unaff_x22 + 0x148) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x150) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x160) = uVar5;
  uVar5 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c07694,uVar4,uVar5);
  return;
}



/* Entry: 101c07694; end: 101c0779b;  */

void FUN_101c07694(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(*(long *)(unaff_x22 + 0x138) + 0x28);
  func_0x000100083b20(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar7 = uVar6;
  func_0x000107c49d38();
  func_0x000107c615e8(uVar6);
  if ((int)uVar7 != 0) {
    uVar3 = *(uint *)(unaff_x22 + 0x1c0);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar7);
    piVar5 = *(int **)(lVar2 + 8);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x180) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101c0779c;
                    /* WARNING: Could not recover jumptable at 0x000101c07760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (plVar4,uVar3 & 0xffffff,*(undefined8 *)(unaff_x22 + 0x130),
               *(undefined1 *)(unaff_x22 + 0x1c4),uVar7,lVar2);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101c07798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c0779c; end: 101c07807;  */

void FUN_101c0779c(undefined1 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x180));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x1c5) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x168);
    uVar3 = *(undefined8 *)(lVar4 + 0x170);
    pcVar1 = FUN_101c07808;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x168);
    uVar3 = *(undefined8 *)(lVar4 + 0x170);
    pcVar1 = FUN_101c07e50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101c07808; end: 101c07953;  */

void FUN_101c07808(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x1c5);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar3 == '\x01') {
    uVar2 = *(uint *)(unaff_x22 + 0x1c0);
    plVar7 = (long *)0x210;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 400) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101c07954;
    lVar6 = *(long *)(unaff_x22 + 0x138);
    lVar8 = *(long *)(unaff_x22 + 0x128);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x1c4);
    plVar7[0x3a] = *(long *)(unaff_x22 + 0x130);
    plVar7[0x3b] = lVar6;
    *(undefined1 *)((long)plVar7 + 0xa9) = uVar4;
    *(uint *)((long)plVar7 + 0xac) = uVar2 & 0xffffff;
    plVar7[0x39] = lVar8;
    lVar8 = 0;
    func_0x000107c5fcec();
    puVar5 = PTR___sScMMa_11034fc70;
    lVar6 = lVar8;
    func_0x000107c5fce8();
    plVar7[0x3c] = lVar6;
    lVar6 = 0x112d45220;
    FUN_101c0aff8(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8();
    plVar7[0x3d] = lVar8;
    plVar7[0x3e] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0733c,lVar8,lVar6);
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar11 = uVar10;
  func_0x000107c49fd4();
  func_0x000107c615e8(uVar10);
  if ((int)uVar11 != 0) {
    func_0x000100083b20(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar6 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar11);
    piVar9 = *(int **)(lVar6 + 8);
    iVar1 = *piVar9;
    plVar7 = (long *)(ulong)(uint)piVar9[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101c07b28;
                    /* WARNING: Could not recover jumptable at 0x000101c0791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar9))(plVar7,*(undefined8 *)(unaff_x22 + 0x140),uVar11,lVar6);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x158));
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000101c07950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


