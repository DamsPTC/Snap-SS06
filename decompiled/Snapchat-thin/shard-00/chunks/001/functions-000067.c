/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001df74c; end: 1001df77b;  */

undefined4 FUN_1001df74c(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_3;
  FUN_1001df6d0(iVar1,param_1,param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 1001df77c; end: 1001df79f;  */

void FUN_1001df77c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107173e8;
  FUN_1000285a8(0x113018558,&UNK_10dc9d038);
  func_0x000107c613fc(&UNK_1107173e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a0174,puVar1);
  return;
}



/* Entry: 1001df7a0; end: 1001df81f;  */

void FUN_1001df7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1001df820; end: 1001df83f;  */

void FUN_1001df820(void)

{
  func_0x000107c61168(&PTR_PTR_112954148);
  return;
}



/* Entry: 1001df840; end: 1001df8d7;  */

void FUN_1001df840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df3140,&UNK_10d9c12d0);
  puVar1 = &UNK_110435778;
  func_0x000107c613fc(&UNK_110435778,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1004427f8,puVar1);
  return;
}



/* Entry: 1001df8d8; end: 1001df8f7;  */

void FUN_1001df8d8(void)

{
  func_0x000107c61168(&PTR_PTR_112df31b8);
  return;
}



/* Entry: 1001df8f8; end: 1001df99b;  */

void FUN_1001df8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddebf0,&UNK_10d9a5530);
  puVar1 = &UNK_11041e530;
  func_0x000107c613fc(&UNK_11041e530,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101981fbc,puVar1);
  return;
}



/* Entry: 1001df99c; end: 1001df9f7;  */

void FUN_1001df99c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001df9f8; end: 1001dfa13;  */

void FUN_1001df9f8(undefined8 param_1)

{
  FUN_1000285a8(0x112ddebf8,&UNK_10d9a5538);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101982184,param_1);
  return;
}



/* Entry: 1001dfa14; end: 1001dfa63;  */

void FUN_1001dfa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dfa64; end: 1001dfa83;  */

void FUN_1001dfa64(void)

{
  func_0x000107c61168(&PTR_PTR_1128013f8);
  return;
}



/* Entry: 1001dfa84; end: 1001dfb03;  */

void FUN_1001dfa84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de2248,&UNK_10d9aa1b0);
  puVar1 = &UNK_110422af8;
  func_0x000107c613fc(&UNK_110422af8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1007ad840,puVar1);
  return;
}



/* Entry: 1001dfb04; end: 1001dfb23;  */

void FUN_1001dfb04(void)

{
  func_0x000107c61168(&PTR_PTR_112de22c0);
  return;
}



/* Entry: 1001dfb24; end: 1001dfba3;  */

void FUN_1001dfb24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de28d8,&UNK_10d9aad00);
  puVar1 = &UNK_110423020;
  func_0x000107c613fc(&UNK_110423020,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1019b2458,puVar1);
  return;
}



/* Entry: 1001dfba4; end: 1001dfbef;  */

void FUN_1001dfba4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001dfbf0; end: 1001dfc6f;  */

void FUN_1001dfbf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112decc18,&UNK_10d9b8d00);
  puVar1 = &UNK_11042e7e0;
  func_0x000107c613fc(&UNK_11042e7e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101a3a548,puVar1);
  return;
}



/* Entry: 1001dfc70; end: 1001dfcbb;  */

void FUN_1001dfc70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001dfcbc; end: 1001dfcd7;  */

void FUN_1001dfcbc(undefined8 param_1)

{
  FUN_1000285a8(0x112decc20,&UNK_10d9b8d08);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3a690,param_1);
  return;
}



/* Entry: 1001dfcd8; end: 1001dfd27;  */

void FUN_1001dfcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dfd28; end: 1001dfd47;  */

void FUN_1001dfd28(void)

{
  func_0x000107c61168(&PTR_PTR_112803e98);
  return;
}



/* Entry: 1001dfd48; end: 1001dfddf;  */

void FUN_1001dfd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded1a8,&UNK_10d9b9720);
  puVar1 = &UNK_11042ec70;
  func_0x000107c613fc(&UNK_11042ec70,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10079cea8,puVar1);
  return;
}



/* Entry: 1001dfde0; end: 1001dfdff;  */

void FUN_1001dfde0(void)

{
  func_0x000107c61168(&PTR_PTR_112ded220);
  return;
}



/* Entry: 1001dfe00; end: 1001dfe1b;  */

void FUN_1001dfe00(undefined8 param_1)

{
  FUN_1000285a8(0x112ded1b0,&UNK_10d9b9728);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10079ce4c,param_1);
  return;
}



/* Entry: 1001dfe1c; end: 1001dfe6b;  */

void FUN_1001dfe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dfe6c; end: 1001dfe8b;  */

void FUN_1001dfe6c(void)

{
  func_0x000107c61168(&PTR_PTR_1129756a0);
  return;
}



/* Entry: 1001dfe8c; end: 1001dff0b;  */

void FUN_1001dfe8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded670,&UNK_10d9ba090);
  puVar1 = &UNK_11042f058;
  func_0x000107c613fc(&UNK_11042f058,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101a3b980,puVar1);
  return;
}



/* Entry: 1001dff0c; end: 1001dff57;  */

void FUN_1001dff0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001dff58; end: 1001dff73;  */

void FUN_1001dff58(undefined8 param_1)

{
  FUN_1000285a8(0x112ded678,&UNK_10d9ba098);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3ba90,param_1);
  return;
}



/* Entry: 1001dff74; end: 1001dffc3;  */

void FUN_1001dff74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dffc4; end: 1001dffe3;  */

void FUN_1001dffc4(void)

{
  func_0x000107c61168(&PTR_PTR_112975768);
  return;
}



/* Entry: 1001dffe4; end: 1001e0063;  */

void FUN_1001dffe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc34d0,&UNK_10d980a60);
  puVar1 = &UNK_1103fc9f8;
  func_0x000107c613fc(&UNK_1103fc9f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1004fa764,puVar1);
  return;
}



/* Entry: 1001e0064; end: 1001e0083;  */

void FUN_1001e0064(void)

{
  func_0x000107c61168(&PTR_PTR_1128a37a8);
  return;
}



/* Entry: 1001e0084; end: 1001e0103;  */

void FUN_1001e0084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de2ad0,&UNK_10d9ab050);
  puVar1 = &UNK_1104231b0;
  func_0x000107c613fc(&UNK_1104231b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003d4a1c,puVar1);
  return;
}



/* Entry: 1001e0104; end: 1001e0123;  */

void FUN_1001e0104(void)

{
  func_0x000107c61168(&PTR_PTR_112de2b48);
  return;
}



/* Entry: 1001e0124; end: 1001e016f;  */

void FUN_1001e0124(undefined8 param_1)

{
  FUN_1000285a8(0x1130405f8,&UNK_10dcb9e28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009ab910,param_1);
  return;
}



/* Entry: 1001e0170; end: 1001e018f;  */

void FUN_1001e0170(void)

{
  func_0x000107c61168(&PTR_PTR_112977a20);
  return;
}



/* Entry: 1001e0190; end: 1001e01ab;  */

void FUN_1001e0190(undefined8 param_1)

{
  FUN_1000285a8(0x112dc95e0,&UNK_10d98a5d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10040b108,param_1);
  return;
}



/* Entry: 1001e01ac; end: 1001e01fb;  */

void FUN_1001e01ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001e01fc; end: 1001e021b;  */

void FUN_1001e01fc(void)

{
  func_0x000107c61168(&PTR_PTR_1127eafc0);
  return;
}



/* Entry: 1001e021c; end: 1001e02bf;  */

void FUN_1001e021c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db08a8,&UNK_10d95a5f8);
  puVar1 = &UNK_1103d9558;
  func_0x000107c613fc(&UNK_1103d9558,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(0x100444518,puVar1);
  return;
}



/* Entry: 1001e02c0; end: 1001e02cf;  */

void FUN_1001e02c0(void)

{
  return;
}



/* Entry: 1001e02d0; end: 1001e032b;  */

void FUN_1001e02d0(int param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_1001e02c0();
  func_0x0001001df548();
  if (param_1 == 0) {
    FUN_1001e0a0c();
    func_0x0001001e0a1c();
    func_0x0001001e0a28();
  }
  FUN_1001e0914(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x0001001e0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1001e032c; end: 1001e0333;  */

void FUN_1001e032c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,1);
  return;
}



/* Entry: 1001e0334; end: 1001e039b;  */

void FUN_1001e0334(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 0xf3b31b1;
  FUN_1001e032c(*param_1,&UNK_10f3b31b1,param_2,param_1[1]);
  if (iVar1 == 0) {
    FUN_1001e079c(param_1,param_2,param_3);
    FUN_1001e032c(*param_1,&UNK_10f3b31b1);
  }
  return;
}



/* Entry: 1001e039c; end: 1001e043f;  */

void FUN_1001e039c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db08b0,&UNK_10d95a600);
  puVar1 = &UNK_1103d9580;
  func_0x000107c613fc(&UNK_1103d9580,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100444440,puVar1);
  return;
}



/* Entry: 1001e0440; end: 1001e048b;  */

void FUN_1001e0440(undefined8 param_1)

{
  FUN_1000285a8(0x112db08b8,&UNK_10d95a608);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003f9d2c,param_1);
  return;
}



/* Entry: 1001e048c; end: 1001e052f;  */

void FUN_1001e048c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc85f0,&UNK_10d9890b0);
  puVar1 = &UNK_110406cc0;
  func_0x000107c613fc(&UNK_110406cc0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101772834,puVar1);
  return;
}



/* Entry: 1001e0530; end: 1001e058b;  */

void FUN_1001e0530(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001e058c; end: 1001e05a7;  */

void FUN_1001e058c(undefined8 param_1)

{
  FUN_1000285a8(0x112dc85f8,&UNK_10d9890b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101772ba4,param_1);
  return;
}



/* Entry: 1001e05a8; end: 1001e0677;  */

void FUN_1001e05a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001e0678; end: 1001e06c3;  */

void FUN_1001e0678(undefined8 param_1)

{
  FUN_1000285a8(0x112dc7448,&UNK_10d987d60);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1009064c0,param_1);
  return;
}



/* Entry: 1001e06c4; end: 1001e06df;  */

void FUN_1001e06c4(undefined8 param_1)

{
  FUN_1000285a8(0x112df3148,&UNK_10d9c12d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10044279c,param_1);
  return;
}



/* Entry: 1001e06e0; end: 1001e072f;  */

void FUN_1001e06e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001e0730; end: 1001e074f;  */

void FUN_1001e0730(void)

{
  func_0x000107c61168(&PTR_PTR_1129428f0);
  return;
}



/* Entry: 1001e0750; end: 1001e079b;  */

void FUN_1001e0750(undefined8 param_1)

{
  FUN_1000285a8(0x112dc7450,&UNK_10d987dd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009063e8,param_1);
  return;
}



/* Entry: 1001e079c; end: 1001e0913;  */

void FUN_1001e079c(undefined8 *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 extraout_x8;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte abStack_270 [512];
  undefined8 uStack_70;
  
  uVar9 = 0;
  FUN_1001e02c0();
  uStack_70 = extraout_x8;
  while( true ) {
    uVar3 = param_3 - uVar9;
    uVar4 = uVar3 == 0;
    if ((bool)uVar4 || param_3 < (int)uVar9) break;
    if (0x100 < (int)uVar3) {
      uVar3 = 0x100;
    }
    pbVar6 = (byte *)(param_2 + (ulong)uVar9);
    pbVar1 = pbVar6 + uVar3;
    pbVar7 = abStack_270;
    for (; (((pbVar6 < pbVar1 && (bVar2 = *pbVar6, bVar2 != 0x22)) && (bVar2 != 0x5c)) &&
           (0x1f < bVar2)); pbVar6 = pbVar6 + 1) {
      *pbVar7 = bVar2;
      pbVar7 = pbVar7 + 1;
    }
    for (; uVar4 = pbVar6 == pbVar1, pbVar6 < pbVar1; pbVar6 = pbVar6 + 1) {
      bVar2 = *pbVar6;
      switch(bVar2) {
      case 8:
        pbVar8 = pbVar7 + 2;
        pbVar7[0] = 0x5c;
        pbVar7[1] = 0x62;
        break;
      case 9:
        pbVar8 = pbVar7 + 2;
        pbVar7[0] = 0x5c;
        pbVar7[1] = 0x74;
        break;
      case 10:
        pbVar8 = pbVar7 + 2;
        pbVar7[0] = 0x5c;
        pbVar7[1] = 0x6e;
        break;
      case 0xb:
LAB_1001e0894:
        uVar4 = bVar2 == 0x1f;
        if (bVar2 < 0x20) goto LAB_1001e08f0;
        pbVar8 = pbVar7 + 1;
        *pbVar7 = bVar2;
        break;
      case 0xc:
        pbVar8 = pbVar7 + 2;
        pbVar7[0] = 0x5c;
        pbVar7[1] = 0x66;
        break;
      case 0xd:
        pbVar8 = pbVar7 + 2;
        pbVar7[0] = 0x5c;
        pbVar7[1] = 0x72;
        break;
      default:
        if ((bVar2 != 0x5c) && (bVar2 != 0x22)) goto LAB_1001e0894;
        *pbVar7 = 0x5c;
        pbVar7[1] = bVar2;
        pbVar8 = pbVar7 + 2;
      }
      pbVar7 = pbVar8;
    }
    lVar5 = (long)pbVar7 - (long)(int)((long)pbVar7 - (long)abStack_270);
    (*(code *)*param_1)(lVar5,(long)pbVar7 - (long)abStack_270,param_1[1]);
    uVar9 = uVar3 + uVar9;
    if ((int)lVar5 != 0) break;
  }
LAB_1001e08f0:
  FUN_1001e0914(uStack_70);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    return;
  }
  return;
}



/* Entry: 1001e0914; end: 1001e093f;  */

void FUN_1001e0914(void)

{
  return;
}



/* Entry: 1001e0940; end: 1001e0a0b;  */

void FUN_1001e0940(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x000107c607f4(param_1);
  }
  lVar1 = param_1;
  func_0x000107c607b4(param_1);
  if (((uint)param_2 >> 1 & 1) != 0) {
    (**(code **)(**(long **)(param_3 + 0x68) + 8))(*(long **)(param_3 + 0x68),lVar1);
  }
  if (((param_2 & 1) != 0) && (lVar2 = param_1, func_0x000107c607bc(), (int)lVar2 != 0)) {
    (**(code **)**(undefined8 **)(param_3 + 0x68))(*(undefined8 **)(param_3 + 0x68),lVar1);
  }
  lVar1 = param_1;
  func_0x000107c607bc();
  if (((int)lVar1 != 0) && (*(char *)(param_3 + 0x28) == '\x01')) {
    func_0x000107c607b0(param_1,param_2);
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(param_1);
    return;
  }
  return;
}



/* Entry: 1001e0a0c; end: 1001e0a3f;  */

void FUN_1001e0a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____sprintf_chk_11034bdb0)(&stack0x0000000a,0,0x1e);
  return;
}



/* Entry: 1001e0a40; end: 1001e0a8f;  */

void FUN_1001e0a40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x0001001df548();
  if ((int)puVar1 == 0) {
    if (param_3 == 0) {
      puVar2 = &UNK_10f3b3198;
      uVar3 = 5;
    }
    else {
      puVar2 = &UNK_10f3b3193;
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(puVar2,uVar3,param_1[1]);
    return;
  }
  return;
}



/* Entry: 1001e0a90; end: 1001e0b5b;  */

/* WARNING: Possible PIC construction at 0x0001001e0b00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001e0b04) */

void FUN_1001e0a90(ulong param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  uint uStack_24;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    uStack_28 = 4;
    uStack_24 = 0;
    puVar3 = (uint *)(ulong)*(uint *)(param_1 + 8);
    FUN_1001dc998();
    uVar2 = uStack_24;
    if ((int)puVar3 == 0) {
      func_0x000107c60e5c();
      *puVar3 = uVar2;
    }
    func_0x000107c60e5c();
    uVar4 = (ulong)*puVar3;
    func_0x0001001dc61c();
    if ((int)uVar4 == -1) {
      return;
    }
    func_0x0001001e0b54();
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    unaff_x30 = 0x1001e0b04;
    register0x00000008 = (BADSPACEBASE *)auStack_30;
    unaff_x29 = puVar1;
  }
  else {
    uVar4 = param_1;
    func_0x0001001f1bd0(param_1,*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
    if ((int)uVar4 == -1) {
      return;
    }
    func_0x0001001e0b54();
    func_0x0001001f347c(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar5 = *(long *)(param_1 + 0x1a0);
  *(long *)((long)register0x00000008 + -0x18) = lVar5;
  *(long *)(param_1 + 0x1a0) = 0;
  (**(code **)(lVar5 + 8))(lVar5,uVar4);
  func_0x000100140e00((undefined1 *)((long)register0x00000008 + -0x18));
  return;
}



/* Entry: 1001e0b5c; end: 1001e0c3b;  */

undefined8 FUN_1001e0b5c(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c607ac(*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48));
    if (((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 4) == '\0')) &&
       (*(long *)(param_1 + 0x60) != 0)) {
      if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 4) != '\0')) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x1001e0c34);
        (*pcVar4)();
      }
      func_0x000107c60814(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),
                          *(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x000107c607f0();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      func_0x000107c607b8(lVar6);
      func_0x000107c607f0(lVar6);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    piVar5 = *(int **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000107c60e14();
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return 1;
}



/* Entry: 1001e0c3c; end: 1001e1003;  */

void FUN_1001e0c3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_18;
  
  pcVar2 = *(code **)(param_1 + 0x20);
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1));
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  (*pcVar2)(plVar1,&uStack_18,param_2);
  func_0x0001001f1cd0();
  return;
}



/* Entry: 1001e1004; end: 1001e106b;  */

/* WARNING: Removing unreachable block (ram,0x00010013b3d8) */

undefined8 FUN_1001e1004(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  
  FUN_1001e02c0();
  func_0x0001001df548();
  if ((int)param_1 == 0) {
    FUN_1001e0a0c();
    func_0x0001001e0a1c();
    func_0x0001001e0a28();
  }
  FUN_1001e0914(extraout_x8);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    uVar1 = 0x8000000000000000;
    if (SUB168(SEXT816(-1) * SEXT816(1000),8) == -1) {
      uVar1 = 0xfffffffffffffc18;
    }
    return uVar1;
  }
  return param_1;
}



/* Entry: 1001e106c; end: 1001e175f;  */

/* WARNING: Removing unreachable block (ram,0x00010013b3d8) */

undefined8 FUN_1001e106c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x8000000000000000;
  if (SUB168(SEXT816(-1) * SEXT816(1000),8) == -1) {
    uVar1 = 0xfffffffffffffc18;
  }
  return uVar1;
}



/* Entry: 1001e1760; end: 1001e1767;  */

void FUN_1001e1760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1001e1768; end: 1001e2a9b;  */

long * FUN_1001e1768(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x000107c37010();
  }
  return param_1;
}



/* Entry: 1001e2a9c; end: 1001e2bb7;  */

undefined4
FUN_1001e2a9c(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar1 = (undefined8 *)0x20;
  piVar3 = param_2;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0xe,0,0x41,&UNK_10f6c65c2,0x8a);
    return 0;
  }
  *puVar1 = 0x18;
  piVar6 = (int *)(puVar1 + 1);
  *(undefined8 *)piVar6 = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  lVar2 = param_1;
  func_0x000107c61290();
  if ((int)lVar2 != 0) goto LAB_1001e2bb4;
  lVar2 = *(long *)(param_1 + 200);
  if (lVar2 == 0) {
    FUN_1001e2bf4();
    *(long *)(param_1 + 200) = lVar2;
    if (lVar2 != 0) goto LAB_1001e2b04;
LAB_1001e2b50:
    piVar3 = (int *)0x0;
    FUN_1004d2c58(0xe,0,0x41,&UNK_10f6c65c2,0x9a);
    FUN_1001e33e0(piVar6);
    uVar5 = 0;
  }
  else {
LAB_1001e2b04:
    piVar3 = piVar6;
    func_0x0001001e2c8c();
    if (lVar2 == 0) goto LAB_1001e2b50;
    if (*(undefined8 **)(param_1 + 200) == (undefined8 *)0x0) {
      iVar4 = -1;
    }
    else {
      iVar4 = (int)**(undefined8 **)(param_1 + 200) + -1;
    }
    *param_2 = iVar4 + (uint)*(byte *)(param_1 + 0xd0);
    uVar5 = 1;
  }
  func_0x000107c6128c();
  lVar2 = param_1;
  if ((int)param_1 == 0) {
    return uVar5;
  }
LAB_1001e2bb4:
  func_0x000107c60ebc();
  pcStack_48 = FUN_1001e2bb8;
  iVar4 = 0x13311998;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1001e2a9c(0x113311998,&uStack_54,lVar2,piVar3);
  if (iVar4 == 0) {
    uStack_54 = 0xffffffff;
  }
  return uStack_54;
}



/* Entry: 1001e2bb8; end: 1001e2bf3;  */

undefined4 FUN_1001e2bb8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = 0x13311998;
  FUN_1001e2a9c(0x113311998,&uStack_14,param_1,param_2);
  if (iVar1 == 0) {
    uStack_14 = 0xffffffff;
  }
  return uStack_14;
}



/* Entry: 1001e2bf4; end: 1001e2d67;  */

undefined8 * FUN_1001e2bf4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x28;
    puVar3 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar3 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar2 = (undefined8 *)0x28;
    func_0x000107c610a0();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0x20;
      puVar1[2] = puVar2 + 1;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar1[4] = 4;
      puVar1[5] = param_1;
      return puVar3;
    }
    puVar1[2] = 0;
    FUN_1001e33e0(puVar3);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1001e2d68; end: 1001e2dc3;  */

void FUN_1001e2d68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x300;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0b75,0xc6);
  }
  else {
    *puVar1 = 0x2f8;
    FUN_1001e2f58(puVar1 + 1,*param_1);
  }
  return;
}



/* Entry: 1001e2dc4; end: 1001e2f57;  */

short ** FUN_1001e2dc4(short *param_1)

{
  short **ppsVar1;
  short *psVar2;
  undefined8 uVar3;
  short **ppsVar4;
  short *psVar5;
  undefined2 uVar6;
  short *psStack_28;
  
  psStack_28 = param_1;
  if (param_1 == (short *)0x0) {
    FUN_1004d2c58(0x10,0,0xba,&UNK_10f6d0a17,0x21c);
    return (short **)0x0;
  }
  ppsVar1 = &psStack_28;
  FUN_1001e2d68();
  if (ppsVar1 == (short **)0x0) {
    return (short **)0x0;
  }
  psVar2 = psStack_28 + 8;
  FUN_1001e3204(psVar2);
  FUN_1001e3290(ppsVar1 + 0x35,psVar2);
  psVar2 = (short *)&UNK_10ae63410;
  FUN_1001e32b8(&UNK_10ae63410,&UNK_10ae63450);
  ppsVar1[0x1f] = psVar2;
  uVar3 = 0;
  FUN_1001e2bf4(0);
  FUN_1001e3370(ppsVar1 + 0x31,uVar3);
  if ((((ppsVar1[0x35] == (short *)0x0) || (ppsVar1[0x1f] == (short *)0x0)) ||
      (ppsVar1[0x31] == (short *)0x0)) ||
     (ppsVar4 = ppsVar1, (**(code **)(ppsVar1[1] + 0x3c))(), ((ulong)ppsVar4 & 1) == 0))
  goto LAB_1001e2f04;
  ppsVar4 = ppsVar1 + 0x1d;
  FUN_1001e341c(ppsVar4,&UNK_10f6d0a85,1);
  psVar2 = psStack_28;
  if ((int)ppsVar4 != 0) {
    psVar5 = *ppsVar1;
    if (*psStack_28 == 0) {
      uVar6 = 0xfefd;
      if ((char)*psVar5 == '\0') {
        uVar6 = 0x304;
      }
      *(undefined2 *)(ppsVar1 + 0x1b) = uVar6;
    }
    else {
      FUN_1001e7668();
      if ((int)psVar5 == 0) goto LAB_1001e2ee8;
      psVar5 = *ppsVar1;
      psVar2 = psStack_28;
    }
    if (*psVar2 == 0) {
      uVar6 = 0xfeff;
      if ((char)*psVar5 == '\0') {
        uVar6 = 0x301;
      }
      *(undefined2 *)((long)ppsVar1 + 0xda) = uVar6;
      return ppsVar1;
    }
    FUN_1001e7668(psVar5,(long)ppsVar1 + 0xda);
    if (((ulong)psVar5 & 1) != 0) {
      return ppsVar1;
    }
  }
LAB_1001e2ee8:
  FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d0a17,0x234);
LAB_1001e2f04:
  func_0x0001006fd810(ppsVar1);
  return (short **)0x0;
}



/* Entry: 1001e2f58; end: 1001e3047;  */

undefined8 * FUN_1001e2f58(undefined8 *param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0x5000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x200000000;
  param_1[0x24] = 0x2a30000001c20;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0x1900000000008;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((long)param_1 + 0x1ea) = 0x4000;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) & 0xf800;
  puVar3 = param_1 + 2;
  func_0x000107c61284(puVar3,0);
  if ((int)puVar3 == 0) {
    param_1[0x2f] = 0;
    return param_1;
  }
  func_0x000107c60ebc();
  puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
  if (unaff_x20 == 0) {
    func_0x0001001df548();
    if ((int)puVar3 != 0) {
      return puVar3;
    }
    puVar3 = (undefined8 *)&UNK_10f3b31ac;
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&UNK_10f3b31ac,4,in_stack_00000000);
    return puVar3;
  }
  puVar2 = puVar3;
  func_0x0001001df548();
  if ((int)puVar2 == 0) {
    if (param_4 == -1) {
      func_0x000107c613d0();
    }
    puVar2 = (undefined8 *)&UNK_10f3b31b1;
    FUN_1001e032c(UNRECOVERED_JUMPTABLE);
    if ((int)puVar2 == 0) {
      FUN_1001e079c(puVar3);
      iVar1 = 0xf3b31b1;
      FUN_1001e032c(UNRECOVERED_JUMPTABLE,&UNK_10f3b31b1);
      puVar2 = (undefined8 *)(ulong)((int)puVar3 != 0 || iVar1 != 0);
    }
  }
  return puVar2;
}



/* Entry: 1001e3048; end: 1001e3053;  */

void FUN_1001e3048(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int in_w3;
  long unaff_x20;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000020;
  
  puVar3 = &stack0x00000018;
  if (unaff_x20 != 0) {
    puVar2 = puVar3;
    func_0x0001001df548();
    if ((int)puVar2 == 0) {
      if (in_w3 == -1) {
        func_0x000107c613d0();
      }
      iVar1 = 0xf3b31b1;
      FUN_1001e032c(UNRECOVERED_JUMPTABLE);
      if (iVar1 == 0) {
        FUN_1001e079c(puVar3);
        FUN_1001e032c(UNRECOVERED_JUMPTABLE,&UNK_10f3b31b1);
      }
    }
    return;
  }
  func_0x0001001df548();
  if ((int)puVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&UNK_10f3b31ac,4,in_stack_00000020);
  return;
}



/* Entry: 1001e3054; end: 1001e30cb;  */

void FUN_1001e3054(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    func_0x0001001df548();
    if ((int)puVar2 == 0) {
      if ((int)param_4 == -1) {
        param_4 = param_3;
        func_0x000107c613d0(param_3);
      }
      iVar1 = 0xf3b31b1;
      FUN_1001e032c(*param_1,&UNK_10f3b31b1,param_3,param_1[1]);
      if (iVar1 == 0) {
        FUN_1001e079c(param_1,param_3,param_4);
        FUN_1001e032c(*param_1,&UNK_10f3b31b1);
      }
    }
    return;
  }
  puVar2 = param_1;
  func_0x0001001df548();
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(&UNK_10f3b31ac,4,param_1[1]);
  return;
}



/* Entry: 1001e30cc; end: 1001e30d3;  */

void FUN_1001e30cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *unaff_x19;
  int iVar5;
  
  uVar2 = *(uint *)(unaff_x19 + 2);
  if (0 < (int)uVar2) {
    cVar3 = *(char *)((long)unaff_x19 + (ulong)uVar2 + 0x14);
    *(uint *)(unaff_x19 + 2) = uVar2 - 1;
    if ((*(char *)((long)unaff_x19 + 0xdd) != '\x01') ||
       ((*(byte *)((long)unaff_x19 + 0xdc) & 1) != 0)) {
LAB_1001e314c:
      *(undefined1 *)((long)unaff_x19 + 0xdc) = 0;
      puVar1 = &UNK_10f3b31b7;
      if (cVar3 == '\0') {
        puVar1 = &UNK_10f3b31b9;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001e31d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*unaff_x19)(puVar1,1,unaff_x19[1]);
      return;
    }
    iVar5 = 0xf3b3187;
    FUN_1001e032c(*unaff_x19,&UNK_10f3b3187,param_2,unaff_x19[1]);
    if (iVar5 == 0) {
      iVar5 = -1;
      do {
        iVar5 = iVar5 + 1;
        if (*(int *)(unaff_x19 + 2) <= iVar5) goto LAB_1001e314c;
        iVar4 = 0xf3b3189;
        (*(code *)*unaff_x19)(&UNK_10f3b3189,4,unaff_x19[1]);
      } while (iVar4 == 0);
    }
  }
  return;
}



/* Entry: 1001e30d4; end: 1001e3107;  */

void FUN_1001e30d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x10) < 1) {
      return;
    }
    FUN_1001e30cc();
  } while ((int)lVar1 == 0);
  return;
}



/* Entry: 1001e3108; end: 1001e31cb;  */

void FUN_1001e3108(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar2) {
    cVar3 = *(char *)((long)param_1 + (ulong)uVar2 + 0x14);
    *(uint *)(param_1 + 2) = uVar2 - 1;
    if ((*(char *)((long)param_1 + 0xdd) != '\x01') || ((*(byte *)((long)param_1 + 0xdc) & 1) != 0))
    {
LAB_1001e314c:
      *(undefined1 *)((long)param_1 + 0xdc) = 0;
      puVar1 = &UNK_10f3b31b7;
      if (cVar3 == '\0') {
        puVar1 = &UNK_10f3b31b9;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001e31d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(puVar1,1,param_1[1]);
      return;
    }
    iVar5 = 0xf3b3187;
    FUN_1001e032c(*param_1,&UNK_10f3b3187,param_2,param_1[1]);
    if (iVar5 == 0) {
      iVar5 = -1;
      do {
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 2) <= iVar5) goto LAB_1001e314c;
        iVar4 = 0xf3b3189;
        (*(code *)*param_1)(&UNK_10f3b3189,4,param_1[1]);
      } while (iVar4 == 0);
    }
  }
  return;
}



/* Entry: 1001e31cc; end: 1001e3203;  */

void FUN_1001e31cc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e31d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1001e3204; end: 1001e328f;  */

undefined8 * FUN_1001e3204(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0xb8;
  func_0x000107c610a0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0b75,0xc6);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0xb0;
    puVar2 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar2 = 0;
    uVar3 = *param_1;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[7] = uVar3;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    *(undefined8 *)((long)puVar1 + 0x91) = 0;
    *(undefined8 *)((long)puVar1 + 0x89) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x14] = 0;
  }
  return puVar2;
}



/* Entry: 1001e3290; end: 1001e32b7;  */

void FUN_1001e3290(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_10022a850();
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 + 8 != 0) {
      func_0x000107c60ee4(plVar2,*plVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar2);
    return;
  }
  return;
}



/* Entry: 1001e32b8; end: 1001e336f;  */

undefined8 * FUN_1001e32b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x38;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x30;
    puVar3 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar3 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0x10;
    puVar2 = (undefined8 *)0x88;
    func_0x000107c610a0();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x80;
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar1[2] = puVar2 + 1;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xe] = 0;
      puVar2[0xd] = 0;
      puVar2[0x10] = 0;
      puVar2[0xf] = 0;
      puVar1[5] = param_2;
      puVar1[6] = param_1;
      return puVar3;
    }
    puVar1[2] = 0;
    FUN_1001e33e0(puVar3);
  }
  return (undefined8 *)0x0;
}



/* Entry: 1001e3370; end: 1001e33d7;  */

void FUN_1001e3370(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = (ulong *)*param_1;
  *param_1 = param_2;
  if (puVar2 == (ulong *)0x0) {
    return;
  }
  uVar1 = *puVar2;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(puVar2[1] + uVar3 * 8) != 0) {
        FUN_100229fdc();
        uVar1 = *puVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_1001e33e0(puVar2[1]);
  if (puVar2 != (ulong *)0x0) {
    puVar2 = puVar2 + -1;
    if (*puVar2 + 8 != 0) {
      func_0x000107c60ee4(puVar2,*puVar2 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(puVar2);
    return;
  }
  return;
}



/* Entry: 1001e33d8; end: 1001e33df;  */

undefined8 FUN_1001e33d8(void)

{
  return 1;
}



/* Entry: 1001e33e0; end: 1001e341b;  */

void FUN_1001e33e0(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1001e341c; end: 1001e395f;  */

undefined8 FUN_1001e341c(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  ulong uStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  FUN_1001e33e0(0);
  puVar4 = (undefined8 *)0x308;
  func_0x000107c610a0();
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0x146);
    FUN_1001e33e0(0);
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lVar9 = 0;
    puVar12 = puVar4 + 1;
    *puVar4 = 0x300;
    ppuVar10 = &PTR_DAT_110c89f08;
    lVar11 = 0x3c0;
    do {
      if (*(int *)((long)ppuVar10 + 0x14) != 8) {
        puVar1 = puVar12 + lVar9 * 4;
        *puVar1 = ppuVar10;
        *(undefined2 *)(puVar1 + 1) = 0;
        lVar9 = lVar9 + 1;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      ppuVar10 = ppuVar10 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
    if (lVar9 == 0) {
      puStack_48 = (undefined8 *)0x0;
      puStack_50 = (undefined8 *)0x0;
    }
    else {
      puVar4[4] = 0;
      uVar14 = lVar9 - 1;
      if (uVar14 != 0) {
        puVar4[3] = puVar4 + 5;
        if (1 < uVar14) {
          lVar11 = lVar9 + -2;
          puVar4 = puVar4 + 9;
          do {
            puVar4[-2] = puVar4;
            puVar4[-1] = puVar4 + -8;
            puVar4 = puVar4 + 4;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar12[uVar14 * 4 + 3] = puVar12 + lVar9 * 4 + -8;
      }
      puStack_50 = puVar12 + lVar9 * 4 + -4;
      puVar12[lVar9 * 4 + -2] = 0;
      puStack_48 = puVar12;
    }
    FUN_1001e33e0(0);
    FUN_1001e3960(0,2,2,0xffffffff,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,2,0xffffffff,0xffffffff,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,3,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,8,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,0x10,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,0x40,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,2,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,4,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,1,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,1,0xffffffff,0);
    FUN_1001e3960(0,5,0xffffffff,0xffffffff,0xffffffff,0,4,0xffffffff,0);
    FUN_1001e3960(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0,3,0xffffffff,0);
    pcVar5 = param_2;
    func_0x000107c613d4(param_2,"DEFAULT",7);
    pcVar13 = param_2;
    if ((int)pcVar5 == 0) {
      iVar3 = 0xf40562c;
      FUN_1001e3c44(&DAT_10f40562c,&puStack_48,&puStack_50,param_3);
      if (iVar3 == 0) goto LAB_1001e382c;
      pcVar13 = param_2 + 7;
      if (*pcVar13 == ':') {
        pcVar13 = param_2 + 8;
      }
    }
    if ((*pcVar13 == '\0') ||
       (FUN_1001e3c44(pcVar13,&puStack_48,&puStack_50,param_3), (int)pcVar13 != 0)) {
      plVar6 = (long *)0x0;
      FUN_1001e2bf4();
      uStack_60 = 0;
      lStack_68 = 0;
      plStack_58 = plVar6;
      if (plVar6 == (long *)0x0) {
LAB_1001e3834:
        uVar15 = 0;
      }
      else {
        plVar7 = &lStack_68;
        FUN_1001e4378(plVar7,0x18);
        lVar9 = lStack_68;
        if ((int)plVar7 == 0) goto LAB_1001e3834;
        if (puStack_48 == (undefined8 *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          puVar4 = puStack_48;
          do {
            if (*(char *)(puVar4 + 1) == '\x01') {
              plVar7 = plVar6;
              func_0x0001001e2c8c(plVar6,*puVar4,*plVar6);
              if (plVar7 == (long *)0x0) goto LAB_1001e3834;
              *(undefined1 *)(lVar9 + uVar14) = *(undefined1 *)((long)puVar4 + 9);
              uVar14 = uVar14 + 1;
            }
            puVar4 = (undefined8 *)puVar4[2];
          } while (puVar4 != (undefined8 *)0x0);
        }
        FUN_1001e4494();
        plStack_70 = plVar7;
        if (plVar7 == (long *)0x0) {
LAB_1001e38e4:
          uVar15 = 0;
        }
        else {
          plStack_58 = (long *)0x0;
          uVar2 = uStack_60;
          if (uVar14 <= uStack_60) {
            uVar2 = uVar14;
          }
          plVar8 = plVar7;
          plStack_78 = plVar6;
          FUN_1001e44e8(plVar7,&plStack_78,lStack_68,uVar2);
          plVar6 = plStack_78;
          plStack_78 = (long *)0x0;
          if (plVar6 != (long *)0x0) {
            FUN_1001e33e0(plVar6[1]);
            FUN_1001e33e0(plVar6);
          }
          if (((ulong)plVar8 & 1) == 0) {
LAB_1001e38e0:
            plVar6 = (long *)0x0;
            goto LAB_1001e38e4;
          }
          plStack_70 = (long *)0x0;
          func_0x0001001e45f8(param_1,plVar7);
          if ((*(long **)*param_1 == (long *)0x0) || (**(long **)*param_1 == 0)) {
            FUN_1004d2c58(0x10,0,0xb1,&UNK_10f6d033a,0x4fb);
            goto LAB_1001e38e0;
          }
          plVar6 = (long *)0x0;
          uVar15 = 1;
        }
        func_0x0001001e45f8(&plStack_70,0);
      }
      FUN_1001e33e0(lStack_68);
      plStack_58 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        FUN_1001e33e0(plVar6[1]);
        FUN_1001e33e0(plVar6);
      }
      goto LAB_1001e3914;
    }
  }
LAB_1001e382c:
  uVar15 = 0;
LAB_1001e3914:
  FUN_1001e33e0(puVar12);
  return uVar15;
}



/* Entry: 1001e3960; end: 1001e3c43;  */

void FUN_1001e3960(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                  int param_7,int param_8,undefined1 param_9,undefined4 param_10,long *param_11,
                  long *param_12)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  
  if ((((param_6 != 0) || (param_1 != 0)) || (param_8 != -1)) ||
     (((param_2 != 0 && (param_3 != 0)) && ((param_4 != 0 && (param_5 != 0)))))) {
    plVar10 = (long *)*param_11;
    plVar5 = (long *)*param_12;
    plVar1 = plVar10;
    plVar9 = plVar5;
    if (param_7 != 3) {
      plVar1 = plVar5;
      plVar9 = plVar10;
    }
    if (plVar1 != (long *)0x0 && plVar9 != (long *)0x0) {
      do {
        lVar11 = 0x18;
        if (param_7 != 3) {
          lVar11 = 0x10;
        }
        plVar7 = *(long **)((long)plVar9 + lVar11);
        lVar11 = *plVar9;
        if (param_1 == 0) {
          if (param_8 < 0) {
            if ((((*(uint *)(lVar11 + 0x14) & param_2) != 0) &&
                ((*(uint *)(lVar11 + 0x18) & param_3) != 0)) &&
               ((uVar4 = *(uint *)(lVar11 + 0x1c), (uVar4 & param_4) != 0 &&
                ((*(uint *)(lVar11 + 0x20) & param_5) != 0)))) {
              if (param_6 == 0) {
                if (uVar4 != 0x20) goto LAB_1001e3b04;
              }
              else {
                if (*(uint *)(lVar11 + 0x14) == 8 || *(uint *)(lVar11 + 0x18) == 8) {
                  iVar8 = 0x304;
                }
                else {
                  iVar8 = 0x300;
                  if (*(int *)(lVar11 + 0x24) != 1) {
                    iVar8 = 0x303;
                  }
                }
                if ((uVar4 != 0x20) && (iVar8 == param_6)) {
LAB_1001e3b04:
                  if (param_7 == 4) {
                    if ((char)plVar9[1] == '\x01') {
                      plVar6 = plVar10;
                      if (plVar5 != plVar9) {
                        plVar3 = (long *)plVar9[2];
                        lVar11 = plVar9[3];
                        plVar6 = plVar3;
                        if (plVar10 != plVar9) {
                          plVar6 = plVar10;
                        }
                        if (lVar11 != 0) {
                          *(long **)(lVar11 + 0x10) = plVar3;
                        }
                        if (plVar3 != (long *)0x0) {
                          plVar3[3] = lVar11;
                        }
                        plVar5[2] = (long)plVar9;
                        plVar9[2] = 0;
                        plVar9[3] = (long)plVar5;
                        plVar5 = plVar9;
                      }
                      *(undefined1 *)((long)plVar9 + 9) = 0;
                      plVar10 = plVar6;
                    }
                  }
                  else if (param_7 == 1) {
                    if ((*(byte *)(plVar9 + 1) & 1) == 0) {
                      plVar6 = plVar10;
                      if (plVar5 != plVar9) {
                        plVar3 = (long *)plVar9[2];
                        lVar11 = plVar9[3];
                        plVar6 = plVar3;
                        if (plVar10 != plVar9) {
                          plVar6 = plVar10;
                        }
                        if (lVar11 != 0) {
                          *(long **)(lVar11 + 0x10) = plVar3;
                        }
                        if (plVar3 != (long *)0x0) {
                          plVar3[3] = lVar11;
                        }
                        plVar5[2] = (long)plVar9;
                        plVar9[2] = 0;
                        plVar9[3] = (long)plVar5;
                        plVar5 = plVar9;
                      }
                      *(undefined1 *)(plVar9 + 1) = 1;
                      *(undefined1 *)((long)plVar9 + 9) = param_9;
                      plVar10 = plVar6;
                    }
                  }
                  else if (param_7 == 3) {
                    if ((char)plVar9[1] == '\x01') {
                      plVar6 = plVar5;
                      if (plVar10 != plVar9) {
                        lVar11 = plVar9[2];
                        plVar3 = (long *)plVar9[3];
                        plVar6 = plVar3;
                        if (plVar5 != plVar9) {
                          plVar6 = plVar5;
                        }
                        if (lVar11 != 0) {
                          *(long **)(lVar11 + 0x18) = plVar3;
                        }
                        if (plVar3 != (long *)0x0) {
                          plVar3[2] = lVar11;
                        }
                        plVar10[3] = (long)plVar9;
                        plVar9[2] = (long)plVar10;
                        plVar9[3] = 0;
                        plVar10 = plVar9;
                      }
                      *(undefined2 *)(plVar9 + 1) = 0;
                      plVar5 = plVar6;
                    }
                  }
                  else if (param_7 == 2) {
                    plVar6 = (long *)plVar9[2];
                    plVar3 = (long *)plVar9[3];
                    plVar13 = plVar6;
                    if (plVar10 != plVar9) {
                      plVar3[2] = (long)plVar6;
                      plVar13 = plVar10;
                    }
                    plVar2 = plVar3;
                    if (plVar5 != plVar9) {
                      plVar2 = plVar5;
                    }
                    *(undefined1 *)(plVar9 + 1) = 0;
                    if (plVar6 != (long *)0x0) {
                      plVar6[3] = (long)plVar3;
                    }
                    if (plVar3 != (long *)0x0) {
                      plVar3[2] = (long)plVar6;
                    }
                    plVar9[2] = 0;
                    plVar9[3] = 0;
                    plVar10 = plVar13;
                    plVar5 = plVar2;
                  }
                }
              }
            }
          }
          else {
            iVar8 = 0;
            if (lVar11 != 0) {
              uVar4 = *(int *)(lVar11 + 0x1c) - 1;
              uVar12 = (ulong)uVar4;
              if (uVar4 < 0x40) {
                if ((1L << (uVar12 & 0x3f) & 0x8000000000008008U) == 0) {
                  if ((1L << (uVar12 & 0x3f) & 0x82U) == 0) {
                    if (uVar12 != 0) goto LAB_1001e3abc;
                    iVar8 = 0x70;
                  }
                  else {
                    iVar8 = 0x80;
                  }
                }
                else {
                  iVar8 = 0x100;
                }
              }
              else {
LAB_1001e3abc:
                iVar8 = 0;
              }
            }
            if (iVar8 == param_8) goto LAB_1001e3b04;
          }
        }
        else if (*(int *)(lVar11 + 0x10) == param_1) goto LAB_1001e3b04;
      } while ((plVar9 != plVar1) && (plVar9 = plVar7, plVar7 != (long *)0x0));
    }
    *param_11 = (long)plVar10;
    *param_12 = (long)plVar5;
  }
  return;
}



/* Entry: 1001e3c44; end: 1001e4377;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1001e3c44(byte *param_1,long *param_2,long *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  uint *puVar18;
  long *plVar19;
  short sVar20;
  short sVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  int iVar25;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return 1;
  }
  bVar4 = false;
  bVar5 = bVar4;
LAB_1001e3ca0:
  uVar10 = (uint)bVar2;
  if (bVar4) {
    if (uVar10 == 0x7c) {
      bVar4 = true;
LAB_1001e4250:
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      goto joined_r0x0001001e4254;
    }
    if (uVar10 == 0x5d) {
      if (*param_3 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = false;
        *(undefined1 *)(*param_3 + 9) = 0;
      }
      goto LAB_1001e4250;
    }
    bVar1 = false;
    if (uVar10 - 0x30 < 10) {
      uVar12 = 1;
      goto LAB_1001e3d50;
    }
    uVar12 = 1;
    if (0x19 < (uVar10 & 0xdf) - 0x41) {
      uVar8 = 0xe0;
      uVar9 = 0x3ef;
      goto LAB_1001e4328;
    }
  }
  else {
    bVar1 = false;
    uVar12 = 1;
    if (0x2c < uVar10) {
      if (uVar10 == 0x2d) {
        uVar12 = 3;
        goto LAB_1001e3d48;
      }
      if (uVar10 == 0x40) {
        uVar12 = 5;
        bVar1 = true;
        goto LAB_1001e3d48;
      }
      if (uVar10 != 0x5b) goto LAB_1001e3d50;
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      bVar4 = true;
      bVar5 = bVar4;
      if (bVar2 == 0) {
LAB_1001e4298:
        uVar8 = 0x9e;
        uVar9 = 0x479;
LAB_1001e4328:
        FUN_1004d2c58(0x10,0,uVar8,&UNK_10f6d033a,uVar9);
        return 0;
      }
      goto LAB_1001e3ca0;
    }
    if (uVar10 == 0x21) {
      bVar1 = false;
      uVar12 = 2;
    }
    else {
      if (uVar10 != 0x2b) goto LAB_1001e3d50;
      bVar1 = false;
      uVar12 = 4;
    }
LAB_1001e3d48:
    if (bVar5) {
      uVar8 = 0xa8;
      uVar9 = 0x40d;
      goto LAB_1001e4328;
    }
    param_1 = param_1 + 1;
  }
LAB_1001e3d50:
  if (((param_4 & 1) == 0) && (uVar10 != 0x3a)) {
    if ((0x3b < uVar10) || ((1L << ((ulong)bVar2 & 0x3f) & 0x800100100000000U) == 0)) {
LAB_1001e3d8c:
      sVar20 = 0;
      bVar6 = false;
      iVar25 = 0;
      bVar2 = 1;
      uStack_78 = 0xffffffff;
      uStack_74 = 0xffffffff;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffff;
      pbVar23 = param_1;
      do {
        lVar24 = 0;
        while ((bVar3 = pbVar23[lVar24],
               (byte)(bVar3 - 0x30) < 10 || (byte)((bVar3 & 0xdf) + 0xbf) < 0x1a ||
               (bVar3 - 0x2d < 0x33 &&
                (1L << ((ulong)(bVar3 - 0x2d) & 0x3f) & 0x4000000000003U) != 0))) {
          lVar24 = lVar24 + 1;
        }
        if (lVar24 == 0) {
          uVar8 = 0x9e;
          uVar9 = 0x42c;
          goto LAB_1001e4328;
        }
        if (bVar1) {
          if ((lVar24 != 8) || (func_0x000107c613d4(param_1,&UNK_10f6d08b3,8), (int)param_1 != 0)) {
            uVar8 = 0x9e;
            uVar9 = 0x466;
            goto LAB_1001e4328;
          }
          plVar11 = (long *)*param_2;
          if (plVar11 == (long *)0x0) {
            uVar16 = 0;
            goto LAB_1001e40b4;
          }
          uVar16 = 0;
          goto LAB_1001e3f94;
        }
        if (bVar3 != 0x2b && !(bool)(bVar2 ^ 1)) {
          piVar17 = (int *)&UNK_110c89f18;
          lVar15 = 0x18;
          do {
            lVar22 = *(long *)(piVar17 + -4);
            lVar7 = lVar22;
            func_0x000107c613d4(lVar22,pbVar23,lVar24);
            if (((int)lVar7 == 0) && (*(char *)(lVar22 + lVar24) == '\0')) {
LAB_1001e3e8c:
              iVar25 = *piVar17;
              break;
            }
            lVar22 = *(long *)(piVar17 + -2);
            lVar7 = lVar22;
            func_0x000107c613d4(lVar22,pbVar23,lVar24);
            if (((int)lVar7 == 0) && (*(char *)(lVar22 + lVar24) == '\0')) goto LAB_1001e3e8c;
            piVar17 = piVar17 + 10;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        sVar21 = sVar20;
        if (iVar25 == 0) {
          puVar18 = (uint *)&UNK_110c8a2d4;
          lVar15 = 0x1d;
          do {
            lVar22 = *(long *)(puVar18 + -3);
            lVar7 = lVar22;
            func_0x000107c613d4(lVar22,pbVar23,lVar24);
            if (((int)lVar7 == 0) && (*(char *)(lVar22 + lVar24) == '\0')) {
              uStack_80 = puVar18[-1] & uStack_80;
              uStack_74 = *puVar18 & uStack_74;
              uStack_78 = puVar18[1] & uStack_78;
              uStack_7c = puVar18[2] & uStack_7c;
              sVar21 = (short)puVar18[3];
              if (sVar20 != 0) {
                bVar6 = (bool)(sVar21 != sVar20 | bVar6);
                sVar21 = sVar20;
              }
              goto LAB_1001e3e7c;
            }
            puVar18 = puVar18 + 8;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          if (param_4 != 0) {
            uVar8 = 0x9e;
            uVar9 = 0x455;
            goto LAB_1001e4328;
          }
          if (bVar3 != 0x2b) {
            param_1 = pbVar23 + lVar24;
            goto LAB_1001e3d78;
          }
          bVar6 = true;
        }
        else {
LAB_1001e3e7c:
          sVar20 = sVar21;
          if (bVar3 != 0x2b) goto LAB_1001e4044;
        }
        bVar2 = 0;
        pbVar23 = pbVar23 + lVar24 + 1;
      } while( true );
    }
  }
  else if (uVar10 != 0x3a) goto LAB_1001e3d8c;
  param_1 = param_1 + 1;
  goto LAB_1001e3d78;
LAB_1001e3f94:
  do {
    if (((char)plVar11[1] == '\x01') && (*plVar11 != 0)) {
      uVar10 = *(int *)(*plVar11 + 0x1c) - 1;
      uVar13 = (ulong)uVar10;
      if (uVar10 < 0x40) {
        if ((1L << (uVar13 & 0x3f) & 0x8000000000008008U) == 0) {
          if ((1L << (uVar13 & 0x3f) & 0x82U) == 0) {
            if (uVar13 != 0) goto LAB_1001e4038;
            uVar14 = 0x70;
          }
          else {
            uVar14 = 0x80;
          }
        }
        else {
          uVar14 = 0x100;
        }
        if (uVar16 < uVar14) {
          if (uVar10 < 0x40) {
            if ((1L << (uVar13 & 0x3f) & 0x8000000000008008U) == 0) {
              if ((1L << (uVar13 & 0x3f) & 0x82U) == 0) {
                if (uVar13 != 0) goto LAB_1001e4034;
                uVar16 = 0x70;
              }
              else {
                uVar16 = 0x80;
              }
            }
            else {
              uVar16 = 0x100;
            }
          }
          else {
LAB_1001e4034:
            uVar16 = 0;
          }
        }
      }
    }
LAB_1001e4038:
    plVar11 = (long *)plVar11[2];
  } while (plVar11 != (long *)0x0);
LAB_1001e40b4:
  FUN_1001e33e0(0);
  plVar11 = (long *)(uVar16 * 4 + 0xc);
  func_0x000107c610a0();
  if (plVar11 == (long *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0x146);
    FUN_1001e33e0(0);
    return 0;
  }
  param_1 = pbVar23 + 8;
  plVar19 = plVar11 + 1;
  *plVar11 = uVar16 * 4 + 4;
  func_0x000107c60ee4(plVar19);
  for (plVar11 = (long *)*param_2; plVar11 != (long *)0x0; plVar11 = (long *)plVar11[2]) {
    if ((char)plVar11[1] == '\x01') {
      lVar24 = 0;
      if (*plVar11 != 0) {
        uVar10 = *(int *)(*plVar11 + 0x1c) - 1;
        uVar13 = (ulong)uVar10;
        if (uVar10 < 0x40) {
          if ((1L << (uVar13 & 0x3f) & 0x8000000000008008U) == 0) {
            if ((1L << (uVar13 & 0x3f) & 0x82U) == 0) {
              if (uVar13 != 0) goto LAB_1001e4164;
              lVar24 = 0x70;
            }
            else {
              lVar24 = 0x80;
            }
          }
          else {
            lVar24 = 0x100;
          }
        }
        else {
LAB_1001e4164:
          lVar24 = 0;
        }
      }
      *(int *)((long)plVar19 + lVar24 * 4) = *(int *)((long)plVar19 + lVar24 * 4) + 1;
    }
  }
  do {
    if (0 < *(int *)((long)plVar19 + uVar16 * 4)) {
      FUN_1001e3960(0,0,0,0,0,0,4,uVar16,0);
    }
    bVar1 = 0 < (long)uVar16;
    uVar16 = uVar16 - 1;
  } while (bVar1);
  FUN_1001e33e0(plVar19);
  uVar10 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      if (((param_4 & 1) == 0) && (uVar10 != 0x3a)) {
        if ((uVar10 < 0x3c) && ((1L << ((ulong)uVar10 & 0x3f) & 0x800100100000000U) != 0))
        goto LAB_1001e3d78;
      }
      else if (uVar10 == 0x3a) goto LAB_1001e3d78;
      param_1 = param_1 + 1;
      uVar10 = (uint)*param_1;
      if (uVar10 == 0) break;
    } while( true );
  }
  goto LAB_1001e4290;
LAB_1001e4044:
  param_1 = pbVar23 + lVar24;
  if (!bVar6) {
    FUN_1001e3960(iVar25,uStack_80,uStack_74,uStack_78,uStack_7c,sVar21,uVar12,0xffffffff,bVar4);
  }
LAB_1001e3d78:
  bVar2 = *param_1;
joined_r0x0001001e4254:
  if (bVar2 != 0) goto LAB_1001e3ca0;
LAB_1001e4290:
  if (!bVar4) {
    return 1;
  }
  goto LAB_1001e4298;
}



/* Entry: 1001e4378; end: 1001e43fb;  */

undefined8 FUN_1001e4378(long *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  
  FUN_1001e33e0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
LAB_1001e43c4:
    uVar2 = 1;
  }
  else {
    if (param_2 < 0xfffffffffffffff8) {
      puVar1 = (ulong *)(param_2 + 8);
      func_0x000107c610a0();
      if (puVar1 != (ulong *)0x0) {
        *puVar1 = param_2;
        *param_1 = (long)(puVar1 + 1);
        param_1[1] = param_2;
        goto LAB_1001e43c4;
      }
    }
    *param_1 = 0;
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0x146);
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1001e43fc; end: 1001e4493;  */

ulong * FUN_1001e43fc(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    if (param_2 < 0xfffffffffffffff8) {
      puVar1 = (ulong *)(param_2 + 8);
      func_0x000107c610a0();
      if (puVar1 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      *puVar1 = param_2;
      return puVar1 + 1;
    }
  }
  else if (param_2 < 0xfffffffffffffff8) {
    uVar2 = *(ulong *)(param_1 + -8);
    puVar1 = (ulong *)(param_2 + 8);
    func_0x000107c610a0();
    if (puVar1 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    *puVar1 = param_2;
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    func_0x000107c610b4(puVar1 + 1,param_1,uVar2);
    FUN_1001e33e0(param_1);
    return puVar1 + 1;
  }
  return (ulong *)0x0;
}



/* Entry: 1001e4494; end: 1001e44e7;  */

undefined8 * FUN_1001e4494(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x10;
    puVar1[2] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  FUN_1004d2c58(0x10,0,0x41,&UNK_10f6cfcb5,0xc6);
  return (undefined8 *)0x0;
}



/* Entry: 1001e44e8; end: 1001e45bb;  */

undefined1 * FUN_1001e44e8(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  lVar2 = 0;
  if ((long *)*param_2 != (long *)0x0) {
    lVar2 = *(long *)*param_2;
  }
  if (lVar2 == param_4) {
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1001e4378(&uStack_50,param_4);
    if ((param_4 != 0) && ((int)puVar3 != 0)) {
      func_0x000107c610b4(uStack_50,param_3,param_4);
    }
    uVar1 = uStack_50;
    if (((ulong)puVar3 & 1) != 0) {
      lVar2 = *param_2;
      *param_2 = 0;
      FUN_1001e45bc(param_1,lVar2);
      *(undefined8 *)(param_1 + 8) = uStack_50;
      uVar1 = 0;
    }
    FUN_1001e33e0(uVar1);
  }
  else {
    FUN_1004d2c58(0x10,0,0x44,&UNK_10f6d033a,0x2f9);
    puVar3 = (undefined8 *)0x0;
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1001e45bc; end: 1001e463f;  */

void FUN_1001e45bc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  FUN_1001e33e0(*(undefined8 *)(lVar2 + 8));
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 1001e4640; end: 1001e46b3;  */

void FUN_1001e4640(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 != 0) {
    iVar1 = (int)lVar2 + 0x140;
    FUN_10021f0b0();
    if (iVar1 != 0) {
      func_0x000107c2b79c();
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + -8);
        if (*plVar3 + 8 != 0) {
          func_0x000107c60ee4(plVar3,*plVar3 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1001e46b4; end: 1001e476f;  */

long * FUN_1001e46b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  long alStack_230 [38];
  long alStack_100 [12];
  
  puVar3 = (undefined8 *)0xe8;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  *puVar3 = 0xe0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1c] = 0;
  puVar4 = puVar3 + 2;
  puVar3[3] = 0;
  *puVar4 = 0;
  pcVar12 = FUN_100203944;
  FUN_1001e32b8(FUN_100203944,FUN_10021b218);
  plVar5 = puVar3 + 1;
  *plVar5 = (long)pcVar12;
  if (pcVar12 == (code *)0x0) {
    FUN_1001e33e0(plVar5);
    return (long *)0x0;
  }
  plVar9 = (long *)0x0;
  func_0x000107c61284();
  if ((int)puVar4 == 0) {
    FUN_1001e47a4(puVar3 + 0x1b,0x10,&UNK_10e525a20);
    return plVar5;
  }
  func_0x000107c60ebc();
  plVar5 = (long *)0x113310f48;
  func_0x000107c61288();
  if ((int)plVar5 == 0) {
    plVar5 = (long *)0x113310f48;
    func_0x000107c6128c();
    if ((int)plVar5 == 0) {
      return plVar5;
    }
  }
  func_0x000107c60ebc();
  alStack_100[10] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = plVar5;
  plVar14 = plVar9;
  if (plVar9 != (long *)0x0) {
    FUN_1001e4770();
    if ((int)plVar17 == 0) {
      iVar2 = (int)alStack_100;
      plVar14 = (long *)0x20;
      FUN_1001e4b44();
      if (iVar2 == 0) goto LAB_1001e4b34;
    }
    else {
      alStack_100[1] = 0;
      alStack_100[0] = 0;
      alStack_100[3] = 0;
      alStack_100[2] = 0;
    }
    lVar10 = 0;
    do {
      uVar20 = ((undefined8 *)(param_3 + lVar10))[1];
      uVar16 = *(undefined8 *)(param_3 + lVar10);
      uVar22 = *(undefined8 *)((long)alStack_100 + lVar10 + 8);
      uVar21 = *(undefined8 *)((long)alStack_100 + lVar10);
      *(ulong *)((long)alStack_100 + lVar10 + 8) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)((ulong)uVar20 >>
                                                                                  8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar20)))))));
      *(ulong *)((long)alStack_100 + lVar10) =
           CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                    CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                             CONCAT15((byte)((ulong)uVar21 >> 0x28) ^ (byte)((ulong)uVar16 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                               (byte)((ulong)uVar16 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                        (byte)((ulong)uVar16 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                 (byte)((ulong)uVar16 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar21 >> 8)
                                                                          ^ (byte)((ulong)uVar16 >>
                                                                                  8),
                                                                          (byte)uVar21 ^
                                                                          (byte)uVar16)))))));
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    plVar6 = (long *)0x1;
    FUN_1001e4cc0();
    if (plVar6 == (long *)0x0) {
      puVar3 = (undefined8 *)0x138;
      func_0x000107c610a0();
      if (puVar3 == (undefined8 *)0x0) {
LAB_1001e48ac:
        plVar15 = alStack_230;
      }
      else {
        plVar15 = puVar3 + 1;
        *puVar3 = 0x130;
        iVar2 = 1;
        FUN_1001e4d54(1,plVar15,&UNK_10ae39b74);
        if (iVar2 == 0) goto LAB_1001e48ac;
      }
      *(undefined4 *)((long)plVar15 + 300) = 0;
      FUN_1001e4e40(&lStack_260);
      lVar10 = 0;
      alStack_100[5] = uStack_258;
      alStack_100[4] = lStack_260;
      alStack_100[7] = uStack_248;
      alStack_100[6] = uStack_250;
      alStack_100[9] = lStack_238;
      alStack_100[8] = lStack_240;
      do {
        uVar20 = *(undefined8 *)(&UNK_10e5259f8 + lVar10);
        uVar16 = *(undefined8 *)(&UNK_10e5259f0 + lVar10);
        uVar22 = *(undefined8 *)((long)alStack_100 + lVar10 + 0x28);
        uVar21 = *(undefined8 *)((long)alStack_100 + lVar10 + 0x20);
        *(ulong *)((long)alStack_100 + lVar10 + 0x28) =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                        (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                 (byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                          (byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                   (byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  8),(byte)uVar22 ^
                                                                                     (byte)uVar20)))
                                                ))));
        *(ulong *)((long)alStack_100 + lVar10 + 0x20) =
             CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                      CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar16 >> 0x30),
                               CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                        (byte)((ulong)uVar16 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                 (byte)((ulong)uVar16 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                          (byte)((ulong)uVar16 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                   (byte)((ulong)uVar16 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar21 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar16 >>
                                                                                  8),(byte)uVar21 ^
                                                                                     (byte)uVar16)))
                                                ))));
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x30);
      plVar6 = alStack_100 + 4;
      plVar14 = (long *)0x100;
      FUN_1001e4e80(plVar6,0x100,plVar15);
      plVar15[0x1f] = 0x1001e5120;
      plVar15[0x20] = 0x1001e55e0;
      lVar10 = alStack_100[8];
      plVar15[0x22] = alStack_100[9];
      plVar15[0x21] = lVar10;
      plVar18 = plVar15 + 0x25;
      *(undefined4 *)(plVar15 + 0x25) = 0;
      plVar15[0x23] = 1;
      plVar15[0x24] = 0;
LAB_1001e4938:
      uVar11 = plVar15[0x23];
      plVar17 = plVar6;
    }
    else {
      plVar18 = plVar6 + 0x25;
      plVar15 = plVar6;
      if ((*(uint *)(plVar6 + 0x25) < 0x1000) && (plVar6[0x24] == 0)) goto LAB_1001e4938;
      FUN_1001e4e40(alStack_230);
      plVar14 = alStack_230;
      plVar17 = plVar6;
      FUN_1001e5868(plVar6,plVar14,0x30);
      uVar11 = 1;
      *(undefined4 *)(plVar6 + 0x25) = 0;
      plVar6[0x23] = 1;
      plVar6[0x24] = 0;
    }
    bVar13 = false;
    uVar16 = 0x20;
    do {
      plVar6 = plVar9;
      if ((long *)0xffff < plVar9) {
        plVar6 = (long *)0x10000;
      }
      if (0x1000000000000 < uVar11) goto LAB_1001e4b40;
      if (!bVar13) {
        FUN_1001e5868(plVar15,alStack_100,uVar16);
      }
      plVar14 = plVar5;
      plVar17 = plVar6;
      if (plVar9 < (long *)0x10) {
LAB_1001e4a50:
        uVar1 = (*(uint *)((long)plVar15 + 0x114) & 0xff00ff00) >> 8 |
                (*(uint *)((long)plVar15 + 0x114) & 0xff00ff) << 8;
        uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(uint *)((long)plVar15 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
        (*(code *)plVar15[0x1f])(plVar15 + 0x21,alStack_100 + 4,plVar15);
        func_0x000107c610b4(plVar14,alStack_100 + 4,plVar17);
      }
      else {
        do {
          uVar11 = (ulong)plVar17 & 0x1ff0;
          if ((long *)0x1fff < plVar17) {
            uVar11 = 0x2000;
          }
          pcVar12 = (code *)plVar15[0x20];
          if (pcVar12 == (code *)0x0) {
            if (uVar11 != 0) {
              uVar19 = 0;
              do {
                uVar1 = (*(uint *)((long)plVar15 + 0x114) & 0xff00ff00) >> 8 |
                        (*(uint *)((long)plVar15 + 0x114) & 0xff00ff) << 8;
                uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                *(uint *)((long)plVar15 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
                (*(code *)plVar15[0x1f])(plVar15 + 0x21,(long)plVar14 + uVar19,plVar15);
                uVar19 = uVar19 + 0x10;
              } while (uVar19 < uVar11);
            }
          }
          else {
            if (uVar11 != 0) {
              func_0x000107c60ee4(plVar14,uVar11);
              pcVar12 = (code *)plVar15[0x20];
            }
            uVar1 = (*(uint *)((long)plVar15 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar15 + 0x114) & 0xff00ff) << 8;
            uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar15 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
            (*pcVar12)(plVar14,plVar14,uVar11 >> 4,plVar15,plVar15 + 0x21);
            uVar1 = (*(uint *)((long)plVar15 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar15 + 0x114) & 0xff00ff) << 8;
            uVar1 = ((int)(uVar11 >> 4) + (uVar1 >> 0x10 | uVar1 << 0x10)) - 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar15 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          plVar14 = (long *)((long)plVar14 + uVar11);
          plVar17 = (long *)((long)plVar17 - uVar11);
        } while ((long *)0xf < plVar17);
        if (plVar17 != (long *)0x0) goto LAB_1001e4a50;
      }
      plVar14 = alStack_100;
      plVar17 = plVar15;
      FUN_1001e5868(plVar15,plVar14,uVar16);
      uVar16 = 0;
      uVar11 = plVar15[0x23] + 1;
      plVar15[0x23] = uVar11;
      plVar5 = (long *)((long)plVar5 + (long)plVar6);
      *(int *)plVar18 = (int)*plVar18 + 1;
      bVar13 = true;
      plVar9 = (long *)((long)plVar9 - (long)plVar6);
    } while (plVar9 != (long *)0x0);
    if (plVar15 == alStack_230) {
      plVar15[0x21] = 0;
      plVar15[0x20] = 0;
      plVar15[0x23] = 0;
      plVar15[0x22] = 0;
      plVar15[0x1d] = 0;
      plVar15[0x1c] = 0;
      plVar15[0x1f] = 0;
      plVar15[0x1e] = 0;
      plVar15[0x19] = 0;
      plVar15[0x18] = 0;
      plVar15[0x1b] = 0;
      plVar15[0x1a] = 0;
      plVar15[0x15] = 0;
      plVar15[0x14] = 0;
      plVar15[0x17] = 0;
      plVar15[0x16] = 0;
      plVar15[0x11] = 0;
      plVar15[0x10] = 0;
      plVar15[0x13] = 0;
      plVar15[0x12] = 0;
      plVar15[0xd] = 0;
      plVar15[0xc] = 0;
      plVar15[0xf] = 0;
      plVar15[0xe] = 0;
      plVar15[9] = 0;
      plVar15[8] = 0;
      plVar15[0xb] = 0;
      plVar15[10] = 0;
      plVar15[5] = 0;
      plVar15[4] = 0;
      plVar15[7] = 0;
      plVar15[6] = 0;
      plVar15[1] = 0;
      *plVar15 = 0;
      plVar15[3] = 0;
      plVar15[2] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_100[10]) {
    return plVar17;
  }
  func_0x000107c60e78();
LAB_1001e4b34:
  plVar17 = (long *)&UNK_10f6c72e5;
  func_0x000107c611f4();
LAB_1001e4b40:
  func_0x000107c60ebc();
  iVar2 = 0x13310e50;
  func_0x000107c6127c(0x113310e50,FUN_1001e4bf8);
  if (iVar2 == 0) {
    puVar7 = (undefined4 *)0x113310e60;
    func_0x000107c6127c(0x113310e60,FUN_1001e4cbc);
    if ((int)puVar7 == 0) {
      func_0x000107c60e5c();
      *puVar7 = 0;
      do {
        if (plVar14 == (long *)0x0) {
          return (long *)0x1;
        }
        while( true ) {
          piVar8 = (int *)(ulong)uRam00000001137ed640;
          func_0x000107c612bc(piVar8,plVar17,plVar14);
          if (piVar8 != (int *)0xffffffffffffffff) break;
          func_0x000107c60e5c();
          if (*piVar8 != 4) {
            return (long *)0x0;
          }
        }
        plVar17 = (long *)((long)plVar17 + (long)piVar8);
        plVar14 = (long *)((long)plVar14 - (long)piVar8);
        if ((long)piVar8 < 1) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  func_0x000107c60ebc();
  do {
    plVar5 = (long *)&UNK_10f517992;
    func_0x000107c611c4(&UNK_10f517992,0);
    if ((int)plVar5 != -1) goto LAB_1001e4c44;
    func_0x000107c60e5c();
  } while ((int)*plVar5 == 4);
  do {
    plVar5 = (long *)&UNK_10f6c7698;
    while( true ) {
      func_0x000107c611f4();
      func_0x000107c60ebc();
LAB_1001e4c44:
      iVar2 = (int)plVar5;
      if (iVar2 < 0) break;
      plVar9 = plVar5;
      func_0x000107c60fb0(plVar5,1);
      if ((int)plVar9 == -1) {
        func_0x000107c60e5c();
        if ((int)*plVar9 == 0x4e) {
          uRam00000001137ed640 = iVar2;
          return plVar9;
        }
        plVar5 = (long *)&UNK_10f6c76b4;
      }
      else {
        func_0x000107c60fb0(plVar5,2);
        if ((int)plVar5 != -1) {
          uRam00000001137ed640 = iVar2;
          return plVar5;
        }
        plVar5 = (long *)&UNK_10f6c76d8;
      }
    }
  } while( true );
}



/* Entry: 1001e4770; end: 1001e47a3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1001e4770(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long alStack_200 [38];
  long alStack_d0 [12];
  
  plVar3 = (long *)0x113310f48;
  func_0x000107c61288();
  if ((int)plVar3 == 0) {
    plVar3 = (long *)0x113310f48;
    func_0x000107c6128c();
    if ((int)plVar3 == 0) {
      return plVar3;
    }
  }
  func_0x000107c60ebc();
  alStack_d0[10] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar3;
  plVar12 = param_2;
  if (param_2 != (long *)0x0) {
    FUN_1001e4770();
    if ((int)plVar15 == 0) {
      iVar2 = (int)alStack_d0;
      plVar12 = (long *)0x20;
      FUN_1001e4b44();
      if (iVar2 == 0) goto LAB_1001e4b34;
    }
    else {
      alStack_d0[1] = 0;
      alStack_d0[0] = 0;
      alStack_d0[3] = 0;
      alStack_d0[2] = 0;
    }
    lVar8 = 0;
    do {
      uVar18 = ((undefined8 *)(param_3 + lVar8))[1];
      uVar14 = *(undefined8 *)(param_3 + lVar8);
      uVar20 = *(undefined8 *)((long)alStack_d0 + lVar8 + 8);
      uVar19 = *(undefined8 *)((long)alStack_d0 + lVar8);
      *(ulong *)((long)alStack_d0 + lVar8 + 8) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)((long)alStack_d0 + lVar8) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar14 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar14 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar14 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar14 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar14)))))));
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x20);
    plVar4 = (long *)0x1;
    FUN_1001e4cc0();
    if (plVar4 == (long *)0x0) {
      puVar5 = (undefined8 *)0x138;
      func_0x000107c610a0();
      if (puVar5 == (undefined8 *)0x0) {
LAB_1001e48ac:
        plVar13 = alStack_200;
      }
      else {
        plVar13 = puVar5 + 1;
        *puVar5 = 0x130;
        iVar2 = 1;
        FUN_1001e4d54(1,plVar13,&UNK_10ae39b74);
        if (iVar2 == 0) goto LAB_1001e48ac;
      }
      *(undefined4 *)((long)plVar13 + 300) = 0;
      FUN_1001e4e40(&lStack_230);
      lVar8 = 0;
      alStack_d0[5] = uStack_228;
      alStack_d0[4] = lStack_230;
      alStack_d0[7] = uStack_218;
      alStack_d0[6] = uStack_220;
      alStack_d0[9] = lStack_208;
      alStack_d0[8] = lStack_210;
      do {
        uVar18 = *(undefined8 *)(&UNK_10e5259f8 + lVar8);
        uVar14 = *(undefined8 *)(&UNK_10e5259f0 + lVar8);
        uVar20 = *(undefined8 *)((long)alStack_d0 + lVar8 + 0x28U);
        uVar19 = *(undefined8 *)((long)alStack_d0 + lVar8 + 0x20U);
        *(ulong *)((long)alStack_d0 + lVar8 + 0x28U) =
             CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar20 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar20 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)((long)alStack_d0 + lVar8 + 0x20U) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar14 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar14 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar14 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar14 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar14)))
                                                ))));
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x30);
      plVar4 = alStack_d0 + 4;
      plVar12 = (long *)0x100;
      FUN_1001e4e80(plVar4,0x100,plVar13);
      plVar13[0x1f] = 0x1001e5120;
      plVar13[0x20] = 0x1001e55e0;
      lVar8 = alStack_d0[8];
      plVar13[0x22] = alStack_d0[9];
      plVar13[0x21] = lVar8;
      plVar16 = plVar13 + 0x25;
      *(undefined4 *)(plVar13 + 0x25) = 0;
      plVar13[0x23] = 1;
      plVar13[0x24] = 0;
LAB_1001e4938:
      uVar9 = plVar13[0x23];
      plVar15 = plVar4;
    }
    else {
      plVar16 = plVar4 + 0x25;
      plVar13 = plVar4;
      if ((*(uint *)(plVar4 + 0x25) < 0x1000) && (plVar4[0x24] == 0)) goto LAB_1001e4938;
      FUN_1001e4e40(alStack_200);
      plVar12 = alStack_200;
      plVar15 = plVar4;
      FUN_1001e5868(plVar4,plVar12,0x30);
      uVar9 = 1;
      *(undefined4 *)(plVar4 + 0x25) = 0;
      plVar4[0x23] = 1;
      plVar4[0x24] = 0;
    }
    bVar11 = false;
    uVar14 = 0x20;
    do {
      plVar4 = param_2;
      if ((long *)0xffff < param_2) {
        plVar4 = (long *)0x10000;
      }
      if (0x1000000000000 < uVar9) goto LAB_1001e4b40;
      if (!bVar11) {
        FUN_1001e5868(plVar13,alStack_d0,uVar14);
      }
      plVar12 = plVar3;
      plVar15 = plVar4;
      if (param_2 < (long *)0x10) {
LAB_1001e4a50:
        uVar1 = (*(uint *)((long)plVar13 + 0x114) & 0xff00ff00) >> 8 |
                (*(uint *)((long)plVar13 + 0x114) & 0xff00ff) << 8;
        uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(uint *)((long)plVar13 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
        (*(code *)plVar13[0x1f])(plVar13 + 0x21,alStack_d0 + 4,plVar13);
        func_0x000107c610b4(plVar12,alStack_d0 + 4,plVar15);
      }
      else {
        do {
          uVar9 = (ulong)plVar15 & 0x1ff0;
          if ((long *)0x1fff < plVar15) {
            uVar9 = 0x2000;
          }
          pcVar10 = (code *)plVar13[0x20];
          if (pcVar10 == (code *)0x0) {
            if (uVar9 != 0) {
              uVar17 = 0;
              do {
                uVar1 = (*(uint *)((long)plVar13 + 0x114) & 0xff00ff00) >> 8 |
                        (*(uint *)((long)plVar13 + 0x114) & 0xff00ff) << 8;
                uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                *(uint *)((long)plVar13 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
                (*(code *)plVar13[0x1f])(plVar13 + 0x21,(long)plVar12 + uVar17,plVar13);
                uVar17 = uVar17 + 0x10;
              } while (uVar17 < uVar9);
            }
          }
          else {
            if (uVar9 != 0) {
              func_0x000107c60ee4(plVar12,uVar9);
              pcVar10 = (code *)plVar13[0x20];
            }
            uVar1 = (*(uint *)((long)plVar13 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar13 + 0x114) & 0xff00ff) << 8;
            uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar13 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
            (*pcVar10)(plVar12,plVar12,uVar9 >> 4,plVar13,plVar13 + 0x21);
            uVar1 = (*(uint *)((long)plVar13 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar13 + 0x114) & 0xff00ff) << 8;
            uVar1 = ((int)(uVar9 >> 4) + (uVar1 >> 0x10 | uVar1 << 0x10)) - 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar13 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          plVar12 = (long *)((long)plVar12 + uVar9);
          plVar15 = (long *)((long)plVar15 - uVar9);
        } while ((long *)0xf < plVar15);
        if (plVar15 != (long *)0x0) goto LAB_1001e4a50;
      }
      plVar12 = alStack_d0;
      plVar15 = plVar13;
      FUN_1001e5868(plVar13,plVar12,uVar14);
      uVar14 = 0;
      uVar9 = plVar13[0x23] + 1;
      plVar13[0x23] = uVar9;
      plVar3 = (long *)((long)plVar3 + (long)plVar4);
      *(int *)plVar16 = (int)*plVar16 + 1;
      bVar11 = true;
      param_2 = (long *)((long)param_2 - (long)plVar4);
    } while (param_2 != (long *)0x0);
    if (plVar13 == alStack_200) {
      plVar13[0x21] = 0;
      plVar13[0x20] = 0;
      plVar13[0x23] = 0;
      plVar13[0x22] = 0;
      plVar13[0x1d] = 0;
      plVar13[0x1c] = 0;
      plVar13[0x1f] = 0;
      plVar13[0x1e] = 0;
      plVar13[0x19] = 0;
      plVar13[0x18] = 0;
      plVar13[0x1b] = 0;
      plVar13[0x1a] = 0;
      plVar13[0x15] = 0;
      plVar13[0x14] = 0;
      plVar13[0x17] = 0;
      plVar13[0x16] = 0;
      plVar13[0x11] = 0;
      plVar13[0x10] = 0;
      plVar13[0x13] = 0;
      plVar13[0x12] = 0;
      plVar13[0xd] = 0;
      plVar13[0xc] = 0;
      plVar13[0xf] = 0;
      plVar13[0xe] = 0;
      plVar13[9] = 0;
      plVar13[8] = 0;
      plVar13[0xb] = 0;
      plVar13[10] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[7] = 0;
      plVar13[6] = 0;
      plVar13[1] = 0;
      *plVar13 = 0;
      plVar13[3] = 0;
      plVar13[2] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_d0[10]) {
    return plVar15;
  }
  func_0x000107c60e78();
LAB_1001e4b34:
  plVar15 = (long *)&UNK_10f6c72e5;
  func_0x000107c611f4();
LAB_1001e4b40:
  func_0x000107c60ebc();
  iVar2 = 0x13310e50;
  func_0x000107c6127c(0x113310e50,FUN_1001e4bf8);
  if (iVar2 == 0) {
    puVar6 = (undefined4 *)0x113310e60;
    func_0x000107c6127c(0x113310e60,FUN_1001e4cbc);
    if ((int)puVar6 == 0) {
      func_0x000107c60e5c();
      *puVar6 = 0;
      do {
        if (plVar12 == (long *)0x0) {
          return (long *)0x1;
        }
        while( true ) {
          piVar7 = (int *)(ulong)uRam00000001137ed640;
          func_0x000107c612bc(piVar7,plVar15,plVar12);
          if (piVar7 != (int *)0xffffffffffffffff) break;
          func_0x000107c60e5c();
          if (*piVar7 != 4) {
            return (long *)0x0;
          }
        }
        plVar15 = (long *)((long)plVar15 + (long)piVar7);
        plVar12 = (long *)((long)plVar12 - (long)piVar7);
        if ((long)piVar7 < 1) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  func_0x000107c60ebc();
  do {
    plVar3 = (long *)&UNK_10f517992;
    func_0x000107c611c4(&UNK_10f517992,0);
    if ((int)plVar3 != -1) goto LAB_1001e4c44;
    func_0x000107c60e5c();
  } while ((int)*plVar3 == 4);
  do {
    plVar3 = (long *)&UNK_10f6c7698;
    while( true ) {
      func_0x000107c611f4();
      func_0x000107c60ebc();
LAB_1001e4c44:
      iVar2 = (int)plVar3;
      if (iVar2 < 0) break;
      plVar12 = plVar3;
      func_0x000107c60fb0(plVar3,1);
      if ((int)plVar12 == -1) {
        func_0x000107c60e5c();
        if ((int)*plVar12 == 0x4e) {
          uRam00000001137ed640 = iVar2;
          return plVar12;
        }
        plVar3 = (long *)&UNK_10f6c76b4;
      }
      else {
        func_0x000107c60fb0(plVar3,2);
        if ((int)plVar3 != -1) {
          uRam00000001137ed640 = iVar2;
          return plVar3;
        }
        plVar3 = (long *)&UNK_10f6c76d8;
      }
    }
  } while( true );
}



/* Entry: 1001e47a4; end: 1001e4b43;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1001e47a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long alStack_1f0 [38];
  long alStack_c0 [12];
  
  alStack_c0[10] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_1;
  plVar11 = param_2;
  if (param_2 != (long *)0x0) {
    FUN_1001e4770();
    if ((int)plVar14 == 0) {
      iVar2 = (int)alStack_c0;
      plVar11 = (long *)0x20;
      FUN_1001e4b44();
      if (iVar2 == 0) goto LAB_1001e4b34;
    }
    else {
      alStack_c0[1] = 0;
      alStack_c0[0] = 0;
      alStack_c0[3] = 0;
      alStack_c0[2] = 0;
    }
    lVar7 = 0;
    do {
      uVar17 = ((undefined8 *)(param_3 + lVar7))[1];
      uVar13 = *(undefined8 *)(param_3 + lVar7);
      uVar19 = *(undefined8 *)((long)alStack_c0 + lVar7 + 8);
      uVar18 = *(undefined8 *)((long)alStack_c0 + lVar7);
      *(ulong *)((long)alStack_c0 + lVar7 + 8) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar17)))))));
      *(ulong *)((long)alStack_c0 + lVar7) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar13 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)((ulong)uVar13 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)((ulong)uVar13 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)((ulong)uVar13 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)((ulong)uVar13 >>
                                                                                  8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar13)))))));
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0x20);
    plVar3 = (long *)0x1;
    FUN_1001e4cc0();
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x138;
      func_0x000107c610a0();
      if (puVar4 == (undefined8 *)0x0) {
LAB_1001e48ac:
        plVar12 = alStack_1f0;
      }
      else {
        plVar12 = puVar4 + 1;
        *puVar4 = 0x130;
        iVar2 = 1;
        FUN_1001e4d54(1,plVar12,&UNK_10ae39b74);
        if (iVar2 == 0) goto LAB_1001e48ac;
      }
      *(undefined4 *)((long)plVar12 + 300) = 0;
      FUN_1001e4e40(&lStack_220);
      lVar7 = 0;
      alStack_c0[5] = uStack_218;
      alStack_c0[4] = lStack_220;
      alStack_c0[7] = uStack_208;
      alStack_c0[6] = uStack_210;
      alStack_c0[9] = lStack_1f8;
      alStack_c0[8] = lStack_200;
      do {
        uVar17 = *(undefined8 *)(&UNK_10e5259f8 + lVar7);
        uVar13 = *(undefined8 *)(&UNK_10e5259f0 + lVar7);
        uVar19 = *(undefined8 *)((long)alStack_c0 + lVar7 + 0x28U);
        uVar18 = *(undefined8 *)((long)alStack_c0 + lVar7 + 0x20U);
        *(ulong *)((long)alStack_c0 + lVar7 + 0x28U) =
             CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar19 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar19 ^
                                                                                     (byte)uVar17)))
                                                ))));
        *(ulong *)((long)alStack_c0 + lVar7 + 0x20U) =
             CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar13 >> 0x38),
                      CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar13 >> 0x30),
                               CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                        (byte)((ulong)uVar13 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                 (byte)((ulong)uVar13 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                          (byte)((ulong)uVar13 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                   (byte)((ulong)uVar13 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar18 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar13 >>
                                                                                  8),(byte)uVar18 ^
                                                                                     (byte)uVar13)))
                                                ))));
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x30);
      plVar3 = alStack_c0 + 4;
      plVar11 = (long *)0x100;
      FUN_1001e4e80(plVar3,0x100,plVar12);
      plVar12[0x1f] = 0x1001e5120;
      plVar12[0x20] = 0x1001e55e0;
      lVar7 = alStack_c0[8];
      plVar12[0x22] = alStack_c0[9];
      plVar12[0x21] = lVar7;
      plVar15 = plVar12 + 0x25;
      *(undefined4 *)(plVar12 + 0x25) = 0;
      plVar12[0x23] = 1;
      plVar12[0x24] = 0;
LAB_1001e4938:
      uVar8 = plVar12[0x23];
      plVar14 = plVar3;
    }
    else {
      plVar15 = plVar3 + 0x25;
      plVar12 = plVar3;
      if ((*(uint *)(plVar3 + 0x25) < 0x1000) && (plVar3[0x24] == 0)) goto LAB_1001e4938;
      FUN_1001e4e40(alStack_1f0);
      plVar11 = alStack_1f0;
      plVar14 = plVar3;
      FUN_1001e5868(plVar3,plVar11,0x30);
      uVar8 = 1;
      *(undefined4 *)(plVar3 + 0x25) = 0;
      plVar3[0x23] = 1;
      plVar3[0x24] = 0;
    }
    bVar10 = false;
    uVar13 = 0x20;
    do {
      plVar3 = param_2;
      if ((long *)0xffff < param_2) {
        plVar3 = (long *)0x10000;
      }
      if (0x1000000000000 < uVar8) goto LAB_1001e4b40;
      if (!bVar10) {
        FUN_1001e5868(plVar12,alStack_c0,uVar13);
      }
      plVar11 = param_1;
      plVar14 = plVar3;
      if (param_2 < (long *)0x10) {
LAB_1001e4a50:
        uVar1 = (*(uint *)((long)plVar12 + 0x114) & 0xff00ff00) >> 8 |
                (*(uint *)((long)plVar12 + 0x114) & 0xff00ff) << 8;
        uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        *(uint *)((long)plVar12 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
        (*(code *)plVar12[0x1f])(plVar12 + 0x21,alStack_c0 + 4,plVar12);
        func_0x000107c610b4(plVar11,alStack_c0 + 4,plVar14);
      }
      else {
        do {
          uVar8 = (ulong)plVar14 & 0x1ff0;
          if ((long *)0x1fff < plVar14) {
            uVar8 = 0x2000;
          }
          pcVar9 = (code *)plVar12[0x20];
          if (pcVar9 == (code *)0x0) {
            if (uVar8 != 0) {
              uVar16 = 0;
              do {
                uVar1 = (*(uint *)((long)plVar12 + 0x114) & 0xff00ff00) >> 8 |
                        (*(uint *)((long)plVar12 + 0x114) & 0xff00ff) << 8;
                uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                *(uint *)((long)plVar12 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
                (*(code *)plVar12[0x1f])(plVar12 + 0x21,(long)plVar11 + uVar16,plVar12);
                uVar16 = uVar16 + 0x10;
              } while (uVar16 < uVar8);
            }
          }
          else {
            if (uVar8 != 0) {
              func_0x000107c60ee4(plVar11,uVar8);
              pcVar9 = (code *)plVar12[0x20];
            }
            uVar1 = (*(uint *)((long)plVar12 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar12 + 0x114) & 0xff00ff) << 8;
            uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar12 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
            (*pcVar9)(plVar11,plVar11,uVar8 >> 4,plVar12,plVar12 + 0x21);
            uVar1 = (*(uint *)((long)plVar12 + 0x114) & 0xff00ff00) >> 8 |
                    (*(uint *)((long)plVar12 + 0x114) & 0xff00ff) << 8;
            uVar1 = ((int)(uVar8 >> 4) + (uVar1 >> 0x10 | uVar1 << 0x10)) - 1;
            uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
            *(uint *)((long)plVar12 + 0x114) = uVar1 >> 0x10 | uVar1 << 0x10;
          }
          plVar11 = (long *)((long)plVar11 + uVar8);
          plVar14 = (long *)((long)plVar14 - uVar8);
        } while ((long *)0xf < plVar14);
        if (plVar14 != (long *)0x0) goto LAB_1001e4a50;
      }
      plVar11 = alStack_c0;
      plVar14 = plVar12;
      FUN_1001e5868(plVar12,plVar11,uVar13);
      uVar13 = 0;
      uVar8 = plVar12[0x23] + 1;
      plVar12[0x23] = uVar8;
      param_1 = (long *)((long)param_1 + (long)plVar3);
      *(int *)plVar15 = (int)*plVar15 + 1;
      bVar10 = true;
      param_2 = (long *)((long)param_2 - (long)plVar3);
    } while (param_2 != (long *)0x0);
    if (plVar12 == alStack_1f0) {
      plVar12[0x21] = 0;
      plVar12[0x20] = 0;
      plVar12[0x23] = 0;
      plVar12[0x22] = 0;
      plVar12[0x1d] = 0;
      plVar12[0x1c] = 0;
      plVar12[0x1f] = 0;
      plVar12[0x1e] = 0;
      plVar12[0x19] = 0;
      plVar12[0x18] = 0;
      plVar12[0x1b] = 0;
      plVar12[0x1a] = 0;
      plVar12[0x15] = 0;
      plVar12[0x14] = 0;
      plVar12[0x17] = 0;
      plVar12[0x16] = 0;
      plVar12[0x11] = 0;
      plVar12[0x10] = 0;
      plVar12[0x13] = 0;
      plVar12[0x12] = 0;
      plVar12[0xd] = 0;
      plVar12[0xc] = 0;
      plVar12[0xf] = 0;
      plVar12[0xe] = 0;
      plVar12[9] = 0;
      plVar12[8] = 0;
      plVar12[0xb] = 0;
      plVar12[10] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[1] = 0;
      *plVar12 = 0;
      plVar12[3] = 0;
      plVar12[2] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_c0[10]) {
    return plVar14;
  }
  func_0x000107c60e78();
LAB_1001e4b34:
  plVar14 = (long *)&UNK_10f6c72e5;
  func_0x000107c611f4();
LAB_1001e4b40:
  func_0x000107c60ebc();
  iVar2 = 0x13310e50;
  func_0x000107c6127c(0x113310e50,FUN_1001e4bf8);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)0x113310e60;
    func_0x000107c6127c(0x113310e60,FUN_1001e4cbc);
    if ((int)puVar5 == 0) {
      func_0x000107c60e5c();
      *puVar5 = 0;
      do {
        if (plVar11 == (long *)0x0) {
          return (long *)0x1;
        }
        while( true ) {
          piVar6 = (int *)(ulong)uRam00000001137ed640;
          func_0x000107c612bc(piVar6,plVar14,plVar11);
          if (piVar6 != (int *)0xffffffffffffffff) break;
          func_0x000107c60e5c();
          if (*piVar6 != 4) {
            return (long *)0x0;
          }
        }
        plVar14 = (long *)((long)plVar14 + (long)piVar6);
        plVar11 = (long *)((long)plVar11 - (long)piVar6);
        if ((long)piVar6 < 1) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  func_0x000107c60ebc();
  do {
    plVar11 = (long *)&UNK_10f517992;
    func_0x000107c611c4(&UNK_10f517992,0);
    if ((int)plVar11 != -1) goto LAB_1001e4c44;
    func_0x000107c60e5c();
  } while ((int)*plVar11 == 4);
  do {
    plVar11 = (long *)&UNK_10f6c7698;
    while( true ) {
      func_0x000107c611f4();
      func_0x000107c60ebc();
LAB_1001e4c44:
      iVar2 = (int)plVar11;
      if (iVar2 < 0) break;
      plVar14 = plVar11;
      func_0x000107c60fb0(plVar11,1);
      if ((int)plVar14 == -1) {
        func_0x000107c60e5c();
        if ((int)*plVar14 == 0x4e) {
          uRam00000001137ed640 = iVar2;
          return plVar14;
        }
        plVar11 = (long *)&UNK_10f6c76b4;
      }
      else {
        func_0x000107c60fb0(plVar11,2);
        if ((int)plVar11 != -1) {
          uRam00000001137ed640 = iVar2;
          return plVar11;
        }
        plVar11 = (long *)&UNK_10f6c76d8;
      }
    }
  } while( true );
}



/* Entry: 1001e4b44; end: 1001e4bf7;  */

int * FUN_1001e4b44(long param_1,long param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = 0x13310e50;
  func_0x000107c6127c(0x113310e50,FUN_1001e4bf8);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x113310e60;
    func_0x000107c6127c(0x113310e60,FUN_1001e4cbc);
    if ((int)puVar2 == 0) {
      func_0x000107c60e5c();
      *puVar2 = 0;
      do {
        if (param_2 == 0) {
          return (int *)0x1;
        }
        while( true ) {
          piVar3 = (int *)(ulong)uRam00000001137ed640;
          func_0x000107c612bc(piVar3,param_1,param_2);
          if (piVar3 != (int *)0xffffffffffffffff) break;
          func_0x000107c60e5c();
          if (*piVar3 != 4) {
            return (int *)0x0;
          }
        }
        param_1 = param_1 + (long)piVar3;
        param_2 = param_2 - (long)piVar3;
        if ((long)piVar3 < 1) {
          return (int *)0x0;
        }
      } while( true );
    }
  }
  func_0x000107c60ebc();
  do {
    piVar3 = (int *)&UNK_10f517992;
    func_0x000107c611c4(&UNK_10f517992,0);
    if ((int)piVar3 != -1) goto LAB_1001e4c44;
    func_0x000107c60e5c();
  } while (*piVar3 == 4);
  do {
    piVar3 = (int *)&UNK_10f6c7698;
    while( true ) {
      func_0x000107c611f4();
      func_0x000107c60ebc();
LAB_1001e4c44:
      iVar1 = (int)piVar3;
      if (iVar1 < 0) break;
      piVar4 = piVar3;
      func_0x000107c60fb0(piVar3,1);
      if ((int)piVar4 == -1) {
        func_0x000107c60e5c();
        if (*piVar4 == 0x4e) {
          uRam00000001137ed640 = iVar1;
          return piVar4;
        }
        piVar3 = (int *)&UNK_10f6c76b4;
      }
      else {
        func_0x000107c60fb0(piVar3,2);
        if ((int)piVar3 != -1) {
          uRam00000001137ed640 = iVar1;
          return piVar3;
        }
        piVar3 = (int *)&UNK_10f6c76d8;
      }
    }
  } while( true );
}



/* Entry: 1001e4bf8; end: 1001e4cbb;  */

void FUN_1001e4bf8(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  do {
    piVar2 = (int *)&UNK_10f517992;
    func_0x000107c611c4(&UNK_10f517992,0);
    if ((int)piVar2 != -1) goto LAB_1001e4c44;
    func_0x000107c60e5c();
  } while (*piVar2 == 4);
  do {
    piVar2 = (int *)&UNK_10f6c7698;
    while( true ) {
      func_0x000107c611f4();
      func_0x000107c60ebc();
LAB_1001e4c44:
      iVar1 = (int)piVar2;
      if (iVar1 < 0) break;
      piVar3 = piVar2;
      func_0x000107c60fb0(piVar2,1);
      if ((int)piVar3 == -1) {
        func_0x000107c60e5c();
        if (*piVar3 == 0x4e) {
          iRam00000001137ed640 = iVar1;
          return;
        }
        piVar2 = (int *)&UNK_10f6c76b4;
      }
      else {
        func_0x000107c60fb0(piVar2,2);
        if ((int)piVar2 != -1) {
          iRam00000001137ed640 = iVar1;
          return;
        }
        piVar2 = (int *)&UNK_10f6c76d8;
      }
    }
  } while( true );
}



/* Entry: 1001e4cbc; end: 1001e4cbf;  */

void FUN_1001e4cbc(void)

{
  return;
}


