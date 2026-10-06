/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022f713c; end: 1022f716f;  */

undefined1  [16] FUN_1022f713c(void)

{
  return ZEXT816(0x1104f59e8);
}



/* Entry: 1022f7170; end: 1022f71c3;  */

void FUN_1022f7170(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f71c4; end: 1022f736b;  */

void FUN_1022f71c4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1022f7614();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  func_0x0001036e1de4(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x0001036e195c();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x0001036e19c8();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f736c; end: 1022f74b7;  */

long FUN_1022f736c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001036e1de4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001036e195c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001036e19c8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 1022f74b8; end: 1022f7503;  */

void FUN_1022f74b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f7504; end: 1022f7557;  */

void FUN_1022f7504(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f7558; end: 1022f755f;  */

undefined8 FUN_1022f7558(void)

{
  return 0x1b;
}



/* Entry: 1022f7560; end: 1022f75e3;  */

void FUN_1022f7560(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f7664,param_2,FUN_1022f7668,param_2,0x1022f7690,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f75e4; end: 1022f7613;  */

undefined ** FUN_1022f75e4(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f7614; end: 1022f7633;  */

void FUN_1022f7614(void)

{
  func_0x000107c61168(&PTR_PTR_112e7eec8);
  return;
}



/* Entry: 1022f7634; end: 1022f7667;  */

undefined1  [16] FUN_1022f7634(void)

{
  return ZEXT816(0x1104f5a88);
}



/* Entry: 1022f7668; end: 1022f76bb;  */

void FUN_1022f7668(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f76bc; end: 1022f776b;  */

void FUN_1022f76bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1022f7934();
  func_0x000107c613fc();
  func_0x0001023f5e68(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001023f5d58();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  func_0x0001023f5d64();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f776c; end: 1022f77f7;  */

long FUN_1022f776c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001023f5e68(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023f5d58();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001023f5d64();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return unaff_x20;
}



/* Entry: 1022f77f8; end: 1022f7823;  */

void FUN_1022f77f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f7824; end: 1022f7877;  */

void FUN_1022f7824(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f7878; end: 1022f787f;  */

undefined8 FUN_1022f7878(void)

{
  return 0x1b;
}



/* Entry: 1022f7880; end: 1022f7903;  */

void FUN_1022f7880(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f7984,param_2,FUN_1022f7988,param_2,0x1022f79b0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f7904; end: 1022f7933;  */

undefined ** FUN_1022f7904(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f7934; end: 1022f7953;  */

void FUN_1022f7934(void)

{
  func_0x000107c61168(&PTR_PTR_112e7efb8);
  return;
}



/* Entry: 1022f7954; end: 1022f7987;  */

undefined1  [16] FUN_1022f7954(void)

{
  return ZEXT816(0x1104f5b28);
}



/* Entry: 1022f7988; end: 1022f79db;  */

void FUN_1022f7988(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f79dc; end: 1022f7a8f;  */

void FUN_1022f79dc(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1022f7c54();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x00010345b3d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x00010345b1bc(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  func_0x00010345b204();
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f7a90; end: 1022f7b0f;  */

long FUN_1022f7a90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010345b3d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x00010345b1bc(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010345b204();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return unaff_x20;
}



/* Entry: 1022f7b10; end: 1022f7b43;  */

void FUN_1022f7b10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f7b44; end: 1022f7b97;  */

void FUN_1022f7b44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f7b98; end: 1022f7b9f;  */

undefined8 FUN_1022f7b98(void)

{
  return 0x1b;
}



/* Entry: 1022f7ba0; end: 1022f7c23;  */

void FUN_1022f7ba0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f7ca4,param_2,FUN_1022f7ca8,param_2,0x1022f7cd0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f7c24; end: 1022f7c53;  */

undefined ** FUN_1022f7c24(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f7c54; end: 1022f7c73;  */

void FUN_1022f7c54(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f088);
  return;
}



/* Entry: 1022f7c74; end: 1022f7ca7;  */

undefined1  [16] FUN_1022f7c74(void)

{
  return ZEXT816(0x1104f5bc8);
}



/* Entry: 1022f7ca8; end: 1022f7cfb;  */

void FUN_1022f7ca8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f7cfc; end: 1022f7d8f;  */

void FUN_1022f7cfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1022f800c();
  func_0x000107c613fc();
  FUN_1022f7de4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1022f7d90; end: 1022f7de3;  */

undefined8 FUN_1022f7d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1022f7de4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1022f7de4; end: 1022f7ebf;  */

void FUN_1022f7de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000103690040(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010368fce4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010368ffc0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1022f7ec0; end: 1022f7efb;  */

void FUN_1022f7ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f7efc; end: 1022f7f4f;  */

void FUN_1022f7efc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f7f50; end: 1022f7f57;  */

undefined8 FUN_1022f7f50(void)

{
  return 0x1b;
}



/* Entry: 1022f7f58; end: 1022f7fdb;  */

void FUN_1022f7f58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f805c,param_2,FUN_1022f8060,param_2,0x1022f8088,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f7fdc; end: 1022f800b;  */

undefined ** FUN_1022f7fdc(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f800c; end: 1022f802b;  */

void FUN_1022f800c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f160);
  return;
}



/* Entry: 1022f802c; end: 1022f805f;  */

undefined1  [16] FUN_1022f802c(void)

{
  return ZEXT816(0x1104f5c68);
}



/* Entry: 1022f8060; end: 1022f80b3;  */

void FUN_1022f8060(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f80b4; end: 1022f8147;  */

void FUN_1022f80b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1022f83c4();
  func_0x000107c613fc();
  FUN_1022f819c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1022f8148; end: 1022f819b;  */

undefined8 FUN_1022f8148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1022f819c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1022f819c; end: 1022f8277;  */

void FUN_1022f819c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x00010345b790(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010345b4dc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010345b534();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1022f8278; end: 1022f82b3;  */

void FUN_1022f8278(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f82b4; end: 1022f8307;  */

void FUN_1022f82b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f8308; end: 1022f830f;  */

undefined8 FUN_1022f8308(void)

{
  return 0x1b;
}



/* Entry: 1022f8310; end: 1022f8393;  */

void FUN_1022f8310(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f8414,param_2,FUN_1022f8418,param_2,0x1022f8440,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f8394; end: 1022f83c3;  */

undefined ** FUN_1022f8394(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f83c4; end: 1022f83e3;  */

void FUN_1022f83c4(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f240);
  return;
}



/* Entry: 1022f83e4; end: 1022f8417;  */

undefined1  [16] FUN_1022f83e4(void)

{
  return ZEXT816(0x1104f5d08);
}



/* Entry: 1022f8418; end: 1022f846b;  */

void FUN_1022f8418(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f846c; end: 1022f8607;  */

void FUN_1022f846c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1022f874c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000103696a1c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x00010369684c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x000103696980();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f8608; end: 1022f863b;  */

void FUN_1022f8608(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f863c; end: 1022f868f;  */

void FUN_1022f863c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f8690; end: 1022f8697;  */

undefined8 FUN_1022f8690(void)

{
  return 0x1b;
}



/* Entry: 1022f8698; end: 1022f871b;  */

void FUN_1022f8698(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f879c,param_2,FUN_1022f87a0,param_2,0x1022f87c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f871c; end: 1022f874b;  */

undefined ** FUN_1022f871c(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f874c; end: 1022f876b;  */

void FUN_1022f874c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f320);
  return;
}



/* Entry: 1022f876c; end: 1022f879f;  */

undefined1  [16] FUN_1022f876c(void)

{
  return ZEXT816(0x1104f5da8);
}



/* Entry: 1022f87a0; end: 1022f87f3;  */

void FUN_1022f87a0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f87f4; end: 1022f898f;  */

void FUN_1022f87f4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1022f8ad4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001023de45c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001023de370();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x0001023de398();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f8990; end: 1022f89c3;  */

void FUN_1022f8990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f89c4; end: 1022f8a17;  */

void FUN_1022f89c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f8a18; end: 1022f8a1f;  */

undefined8 FUN_1022f8a18(void)

{
  return 0x1b;
}



/* Entry: 1022f8a20; end: 1022f8aa3;  */

void FUN_1022f8a20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f8b24,param_2,FUN_1022f8b28,param_2,0x1022f8b50,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f8aa4; end: 1022f8ad3;  */

undefined ** FUN_1022f8aa4(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f8ad4; end: 1022f8af3;  */

void FUN_1022f8ad4(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f3f8);
  return;
}



/* Entry: 1022f8af4; end: 1022f8b27;  */

undefined1  [16] FUN_1022f8af4(void)

{
  return ZEXT816(0x1104f5e48);
}



/* Entry: 1022f8b28; end: 1022f8b7b;  */

void FUN_1022f8b28(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f8b7c; end: 1022f8cef;  */

void FUN_1022f8b7c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1022f8e3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  func_0x0001023b1824(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x0001023b1728(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  func_0x0001023b17f0();
  *(undefined8 *)(param_2 + 0x28) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f8cf0; end: 1022f8d2b;  */

void FUN_1022f8cf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f8d2c; end: 1022f8d7f;  */

void FUN_1022f8d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f8d80; end: 1022f8d87;  */

undefined8 FUN_1022f8d80(void)

{
  return 0x1b;
}



/* Entry: 1022f8d88; end: 1022f8e0b;  */

void FUN_1022f8d88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f8e8c,param_2,FUN_1022f8e90,param_2,0x1022f8eb8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f8e0c; end: 1022f8e3b;  */

undefined ** FUN_1022f8e0c(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f8e3c; end: 1022f8e5b;  */

void FUN_1022f8e3c(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f4d0);
  return;
}



/* Entry: 1022f8e5c; end: 1022f8e8f;  */

undefined1  [16] FUN_1022f8e5c(void)

{
  return ZEXT816(0x1104f5ee8);
}



/* Entry: 1022f8e90; end: 1022f8ee3;  */

void FUN_1022f8e90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f8ee4; end: 1022f8f77;  */

void FUN_1022f8ee4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1022f91f4();
  func_0x000107c613fc();
  FUN_1022f8fcc(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1022f8f78; end: 1022f8fcb;  */

undefined8 FUN_1022f8f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1022f8fcc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1022f8fcc; end: 1022f90a7;  */

void FUN_1022f8fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001023ae7d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001023ae524();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001023ae534();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1022f90a8; end: 1022f90e3;  */

void FUN_1022f90a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f90e4; end: 1022f9137;  */

void FUN_1022f90e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f9138; end: 1022f913f;  */

undefined8 FUN_1022f9138(void)

{
  return 0x1b;
}



/* Entry: 1022f9140; end: 1022f91c3;  */

void FUN_1022f9140(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f9244,param_2,FUN_1022f9248,param_2,0x1022f9270,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f91c4; end: 1022f91f3;  */

undefined ** FUN_1022f91c4(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f91f4; end: 1022f9213;  */

void FUN_1022f91f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f5b0);
  return;
}



/* Entry: 1022f9214; end: 1022f9247;  */

undefined1  [16] FUN_1022f9214(void)

{
  return ZEXT816(0x1104f5f88);
}



/* Entry: 1022f9248; end: 1022f929b;  */

void FUN_1022f9248(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1022f929c; end: 1022f934f;  */

void FUN_1022f929c(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1022f9514();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001023ab740(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x0001023ab50c(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  func_0x0001023ab5c4();
  *(undefined8 *)(param_2 + 0x20) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1022f9350; end: 1022f93cf;  */

long FUN_1022f9350(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001023ab740(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x0001023ab50c(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001023ab5c4();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return unaff_x20;
}



/* Entry: 1022f93d0; end: 1022f9403;  */

void FUN_1022f93d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022f9404; end: 1022f9457;  */

void FUN_1022f9404(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1022f9458; end: 1022f945f;  */

undefined8 FUN_1022f9458(void)

{
  return 0x1b;
}



/* Entry: 1022f9460; end: 1022f94e3;  */

void FUN_1022f9460(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1022f9564,param_2,FUN_1022f9568,param_2,0x1022f9590,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1022f94e4; end: 1022f9513;  */

undefined ** FUN_1022f94e4(void)

{
  return &PTR_DAT_112ff5d28;
}



/* Entry: 1022f9514; end: 1022f9533;  */

void FUN_1022f9514(void)

{
  func_0x000107c61168(&PTR_PTR_112e7f690);
  return;
}


