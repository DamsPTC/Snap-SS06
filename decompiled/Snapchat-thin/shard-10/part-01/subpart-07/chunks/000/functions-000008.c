/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077fee20; end: 1077fee4b;  */

undefined1 * FUN_1077fee20(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x0001077fee4c();
  return param_1;
}



/* Entry: 1077ff054; end: 1077ff083;  */

void FUN_1077ff054(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x88) {
    func_0x0001074058d8();
  }
  return;
}



/* Entry: 1077ff1f8; end: 1077ff29f;  */

long * FUN_1077ff1f8(long *param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    pcVar1 = (char *)*param_1;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (-1 < *pcVar1) {
        func_0x000107809df4();
      }
      pcVar1 = pcVar1 + 1;
    }
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1077ff56c; end: 1077ff587;  */

void FUN_1077ff56c(long param_1)

{
  func_0x00010002c78c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1077ff70c; end: 1077ff743;  */

void FUN_1077ff70c(undefined2 *param_1,undefined2 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107808f04();
  *param_1 = *param_2;
  func_0x0001073c82a8(param_1 + 4,param_2 + 4);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1077ffb2c; end: 1077ffb3f;  */

void FUN_1077ffb2c(void)

{
  func_0x0001077ffbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077ffc80; end: 1077ffccb;  */

void FUN_1077ffc80(int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *param_1;
  if ((iVar1 == iVar1 >> 0x1f) && ((-1 < iVar1 || (*(long *)(param_1 + 2) != 0)))) {
    return;
  }
  func_0x00010bdb14c4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1077ffcc4);
  (*pcVar2)();
}



/* Entry: 1077ffe58; end: 1078002cf;  */

/* WARNING: Possible PIC construction at 0x000107800248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */
/* WARNING: Removing unreachable block (ram,0x000107809878) */
/* WARNING: Removing unreachable block (ram,0x00010780987c) */

double * FUN_1077ffe58(double param_1,double param_2,double *param_3,ulong *param_4)

{
  ulong uVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  double *pdVar7;
  undefined8 extraout_x8;
  double *pdVar8;
  double *pdVar9;
  undefined8 *extraout_x8_00;
  double dVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x9;
  double extraout_x10;
  double *pdVar13;
  undefined8 *extraout_x11;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *unaff_x19;
  int *unaff_x20;
  ulong *puVar17;
  ulong *puVar18;
  double *pdVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  double dVar23;
  double in_register_00005008;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double unaff_d15;
  undefined1 auStack_9e8 [552];
  undefined1 auStack_7c0 [552];
  long lStack_598;
  undefined *puStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  double adStack_320 [10];
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  double adStack_278 [4];
  double adStack_258 [62];
  undefined8 uStack_68;
  
  func_0x000107808a28();
  puVar17 = (ulong *)(unaff_x20 + 2);
  iVar2 = *unaff_x20;
  bVar5 = iVar2 == iVar2 >> 0x1f;
  if (bVar5) {
    if (iVar2 < 0) {
      puVar17 = (ulong *)*puVar17;
    }
    pdVar8 = (double *)*unaff_x19;
    uVar21 = *puVar17;
    dVar23 = pdVar8[1];
    param_1 = *pdVar8;
    dVar24 = pdVar8[3];
    param_2 = pdVar8[2];
    uVar11 = uVar21 + 1;
    pdVar19 = (double *)(puVar17 + 1);
    *puVar17 = uVar11;
    pdVar8 = pdVar19 + uVar21 * 4;
    pdVar8[1] = dVar23;
    *pdVar8 = param_1;
    pdVar8[3] = dVar24;
    pdVar8[2] = param_2;
    unaff_x19[0xd] = (double)(*(long *)unaff_x19[8] - (long)unaff_x19[0xb]);
    uVar6 = uVar11 == 0x11;
    uStack_68 = extraout_x8;
    if (0x10 < uVar11) {
      if (unaff_x19[9] == 0.0) {
        func_0x000107809314();
        puVar22 = (undefined *)0x10780024c;
        goto code_r0x0001078002d0;
      }
      func_0x000107809bac();
      fVar25 = SUB84(param_2,0);
      func_0x0001078098ec();
      adStack_320[0] = 0.0;
      pdVar8 = adStack_320 + 1;
      param_2 = (double)fVar25;
      pdVar9 = adStack_320 + 2;
      pdVar14 = pdVar19;
      if ((uVar21 & 0x7ffffffffffffff) != 0x7ffffffffffffff) {
        do {
          uVar11 = (ulong)(uint)((*(float *)pdVar14 + *(float *)(pdVar14 + 1)) * SUB84(param_1,0));
          func_0x0001078098cc(pdVar9);
          extraout_x8_00[-1] = uVar11;
          pdVar14 = (double *)(extraout_x11 + 4);
          uVar28 = *extraout_x11;
          uVar30 = extraout_x11[3];
          uVar29 = extraout_x11[2];
          extraout_x8_00[1] = extraout_x11[1];
          *extraout_x8_00 = uVar28;
          extraout_x8_00[3] = uVar30;
          extraout_x8_00[2] = uVar29;
          pdVar9 = (double *)(extraout_x8_00 + 5);
          adStack_320[0] = extraout_x10;
        } while (extraout_x9 != 0x20);
      }
      puStack_358 = &UNK_1078010f4;
      lVar20 = 1;
      do {
        func_0x000107809474();
        func_0x0001078010f8();
        lVar20 = lVar20 + -1;
      } while (-1 < lVar20);
      pdVar9 = adStack_278;
      pdVar14 = adStack_258;
      dVar23 = adStack_320[2];
      dVar24 = adStack_320[5];
      for (lVar20 = uVar21 * 0x28 + -0x78; adStack_320[2] = dVar23, adStack_320[5] = dVar24,
          lVar20 != 0; lVar20 = lVar20 + -0x28) {
        param_1 = pdVar14[-4];
        param_2 = adStack_320[1];
        if (adStack_320[1] < param_1) {
          pdVar14[-4] = adStack_320[1];
          adStack_320[1] = param_1;
          dVar10 = pdVar14[-2];
          param_1 = pdVar14[-3];
          pdVar14[-2] = adStack_320[3];
          pdVar14[-3] = dVar23;
          adStack_320[3] = dVar10;
          adStack_320[2] = param_1;
          dVar10 = pdVar14[-1];
          pdVar14[-1] = adStack_320[4];
          adStack_320[4] = dVar10;
          adStack_320[5] = *pdVar14;
          *pdVar14 = dVar24;
          func_0x000107809474();
          func_0x0001078010f8();
          param_2 = dVar23;
        }
        pdVar14 = pdVar14 + 5;
        dVar23 = adStack_320[2];
        dVar24 = adStack_320[5];
      }
      pdVar14 = pdVar9;
      for (uVar11 = 4; dVar3 = adStack_320[5], dVar27 = adStack_320[4], dVar10 = adStack_320[3],
          dVar24 = adStack_320[2], dVar23 = adStack_320[1], 1 < uVar11; uVar11 = uVar11 - 1) {
        uVar21 = 0;
        dStack_348 = adStack_320[3];
        dStack_350 = adStack_320[2];
        pdVar16 = pdVar8;
        do {
          pdVar7 = pdVar16 + uVar21 * 5;
          pdVar15 = pdVar7 + 5;
          param_4 = (ulong *)(uVar21 * 2);
          uVar1 = uVar21 << 1 | 1;
          if ((long)((long)param_4 + 2U) < (long)uVar11) {
            param_3 = pdVar7 + 10;
            pdVar13 = param_3;
            uVar21 = (long)param_4 + 2U;
            dVar26 = *param_3;
            if (pdVar7[5] <= *param_3) {
              pdVar13 = pdVar15;
              uVar21 = uVar1;
              dVar26 = pdVar7[5];
            }
          }
          else {
            param_3 = pdVar7;
            pdVar13 = pdVar15;
            uVar21 = uVar1;
            dVar26 = *pdVar15;
          }
          *pdVar16 = dVar26;
          param_2 = pdVar13[1];
          pdVar16[2] = pdVar13[2];
          pdVar16[1] = param_2;
          pdVar16[3] = pdVar13[3];
          pdVar16[4] = pdVar13[4];
          pdVar16 = pdVar13;
        } while ((long)uVar21 <= (long)(uVar11 - 2 >> 1));
        if (pdVar13 == pdVar14 + -5) {
          *pdVar13 = dVar23;
          pdVar13[2] = dVar10;
          pdVar13[1] = dVar24;
          pdVar13[3] = dVar27;
          pdVar13[4] = dVar3;
        }
        else {
          *pdVar13 = pdVar14[-5];
          param_2 = pdVar14[-4];
          pdVar13[2] = pdVar14[-3];
          pdVar13[1] = param_2;
          pdVar13[3] = pdVar14[-2];
          pdVar13[4] = pdVar14[-1];
          pdVar14[-5] = dVar23;
          pdVar14[-3] = dVar10;
          pdVar14[-4] = dVar24;
          pdVar14[-2] = dVar27;
          pdVar14[-1] = dVar3;
          uVar21 = (long)pdVar13 + (0x28 - (long)pdVar8);
          if (0x28 < (long)uVar21) {
            uVar21 = uVar21 / 0x28 - 2 >> 1;
            dVar10 = pdVar8[uVar21 * 5];
            dVar23 = *pdVar13;
            dVar24 = dVar23;
            if (dVar23 < dVar10) {
              dStack_338 = pdVar13[2];
              dVar24 = pdVar13[1];
              dVar27 = pdVar13[4];
              param_2 = pdVar13[3];
              pdVar16 = pdVar8 + uVar21 * 5;
              do {
                pdVar15 = pdVar16;
                *pdVar13 = dVar10;
                dVar10 = pdVar15[1];
                pdVar13[2] = pdVar15[2];
                pdVar13[1] = dVar10;
                pdVar13[3] = pdVar15[3];
                pdVar13[4] = pdVar15[4];
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1 >> 1;
                dVar10 = pdVar8[uVar21 * 5];
                pdVar13 = pdVar15;
                pdVar16 = pdVar8 + uVar21 * 5;
              } while (dVar23 < dVar10);
              *pdVar15 = dVar23;
              pdVar15[2] = dStack_338;
              pdVar15[1] = dVar24;
              pdVar15[4] = dVar27;
              pdVar15[3] = param_2;
              dStack_340 = dVar24;
            }
          }
        }
        pdVar14 = pdVar14 + -5;
        param_1 = dVar24;
      }
      pdVar8 = unaff_x19 + 0xf;
      for (lVar20 = 0x10; lVar20 != 0xb0; lVar20 = lVar20 + 0x28) {
        param_1 = *(double *)((long)adStack_320 + lVar20);
        dVar23 = *(double *)((long)adStack_320 + lVar20 + 0x18);
        param_2 = *(double *)((long)adStack_320 + lVar20 + 0x10);
        pdVar8[1] = *(double *)((long)adStack_320 + lVar20 + 8);
        *pdVar8 = param_1;
        pdVar8[3] = dVar23;
        pdVar8[2] = param_2;
        pdVar8 = pdVar8 + 4;
      }
      unaff_x19[0xe] = 1.97626258336499e-323;
      *puVar17 = 0;
      uVar11 = 1;
      lVar20 = 8;
      uVar6 = true;
      for (lVar12 = (long)adStack_320[0] * 0x28 + -0xa0; lVar12 != 0; lVar12 = lVar12 + -0x28) {
        pdVar8 = (double *)((long)puVar17 + lVar20);
        param_1 = pdVar9[1];
        dVar23 = pdVar9[4];
        param_2 = pdVar9[3];
        pdVar8[1] = pdVar9[2];
        *pdVar8 = param_1;
        pdVar8[3] = dVar23;
        pdVar8[2] = param_2;
        *puVar17 = uVar11;
        pdVar9 = pdVar9 + 5;
        uVar11 = uVar11 + 1;
        lVar20 = lVar20 + 0x20;
      }
    }
    if ((unaff_x19[0xe] != 0.0) && (dVar23 = unaff_x19[9], dVar23 != 0.0)) {
      puVar18 = puVar17 + 5;
      if (*puVar17 == 0) {
        dVar24 = -1.4044477603031902e+306;
        param_1 = 1.4044474254567505e+306;
      }
      else {
        lVar20 = *puVar17 * 0x20;
        param_1 = *pdVar19;
        dVar24 = (double)puVar17[2];
        while (lVar20 = lVar20 + -0x20, adStack_320[0] = param_1, adStack_320[1] = dVar24,
              lVar20 != 0) {
          param_3 = adStack_320;
          param_4 = puVar18;
          func_0x0001078036f0();
          puVar18 = puVar18 + 4;
          param_1 = adStack_320[0];
          dVar24 = adStack_320[1];
        }
      }
      lVar20 = (long)dVar23 + (long)unaff_x19[10] * 0x18;
      *(double *)(lVar20 + 0x10) = dVar24;
      *(double *)(lVar20 + 8) = param_1;
    }
    func_0x0001078087c4(uStack_68);
    if ((bool)uVar6) {
      return param_3;
    }
  }
  else if (iVar2 < 0) {
    param_4 = (ulong *)*puVar17;
    func_0x0001078087c4(extraout_x8);
    param_3 = unaff_x19;
    if (bVar5) goto LAB_1078001a8;
  }
  else {
    func_0x0001078087c4(extraout_x8);
    if (bVar5) {
      func_0x000107809314();
LAB_1078001a8:
      func_0x00010780907c();
      func_0x00010780936c();
      func_0x000107809ec0();
      dVar23 = unaff_x19[0xb];
      func_0x0001078099b8();
      FUN_1077ffe58();
      unaff_x19[10] = in_register_00005008;
      unaff_x19[9] = param_1;
      unaff_x19[0xb] = dVar23;
      if ((unaff_x19[0xe] != 0.0) && (unaff_x19[9] != 0.0)) {
        func_0x000107809824();
        func_0x00010780a0b0();
      }
      return param_3;
    }
  }
  ___stack_chk_fail();
  puVar22 = &SUB_1078002d0;
  __Unwind_Resume();
code_r0x0001078002d0:
  func_0x000107809884();
  puStack_2d0 = &stack0xfffffffffffffff0;
  puStack_2c8 = puVar22;
  func_0x000107808a58();
  func_0x0001077ffe04();
  FUN_1077ffc80();
  puVar17 = param_4 + 1;
  func_0x000107801344(auStack_7c0,puVar17,puVar17 + *param_4 * 4);
  func_0x000107801344(auStack_9e8,puVar17,puVar17 + *param_4 * 4);
  func_0x0001078090c4();
  if (lStack_598 != 0) {
    func_0x000107808c30();
    FUN_107801438();
  }
  func_0x000107808f7c(lStack_598);
  dVar23 = unaff_d15;
  do {
    func_0x0001078090b8();
    func_0x000107808a04();
    func_0x0001078088cc();
    func_0x0001078087d8();
    if (param_1 < dVar23) {
code_r0x0001078003ac:
      unaff_d15 = param_2;
      dVar23 = param_1;
    }
    else {
      bVar5 = false;
      bVar4 = true;
      if (param_1 == dVar23) {
        bVar5 = false;
        bVar4 = true;
        if (!NAN(param_2) && !NAN(unaff_d15)) {
          bVar5 = param_2 == unaff_d15;
          bVar4 = unaff_d15 <= param_2;
        }
      }
      if (!bVar4 || bVar5) goto code_r0x0001078003ac;
    }
    func_0x000107808730();
    func_0x00010780a04c();
  } while( true );
}



/* Entry: 107801438; end: 107801a2b;  */

/* WARNING: Possible PIC construction at 0x0001078014b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078014c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078014d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078014dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107801a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078014f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107801b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107801ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107801b18) */
/* WARNING: Removing unreachable block (ram,0x000107801b20) */
/* WARNING: Removing unreachable block (ram,0x000107801b24) */
/* WARNING: Removing unreachable block (ram,0x000107801b28) */
/* WARNING: Removing unreachable block (ram,0x000107801b34) */
/* WARNING: Removing unreachable block (ram,0x000107801b40) */
/* WARNING: Removing unreachable block (ram,0x000107801b58) */
/* WARNING: Removing unreachable block (ram,0x000107808ad8) */
/* WARNING: Removing unreachable block (ram,0x000107801b4c) */
/* WARNING: Removing unreachable block (ram,0x000107808e18) */
/* WARNING: Removing unreachable block (ram,0x0001078014e0) */
/* WARNING: Removing unreachable block (ram,0x0001078014f8) */
/* WARNING: Removing unreachable block (ram,0x000107801504) */
/* WARNING: Removing unreachable block (ram,0x000107801508) */
/* WARNING: Removing unreachable block (ram,0x00010780150c) */
/* WARNING: Removing unreachable block (ram,0x0001078015f8) */
/* WARNING: Removing unreachable block (ram,0x000107801610) */
/* WARNING: Removing unreachable block (ram,0x000107801614) */
/* WARNING: Removing unreachable block (ram,0x00010780162c) */
/* WARNING: Removing unreachable block (ram,0x000107801630) */
/* WARNING: Removing unreachable block (ram,0x00010780163c) */
/* WARNING: Removing unreachable block (ram,0x000107801644) */
/* WARNING: Removing unreachable block (ram,0x000107801648) */
/* WARNING: Removing unreachable block (ram,0x000107801618) */
/* WARNING: Removing unreachable block (ram,0x00010780161c) */
/* WARNING: Removing unreachable block (ram,0x000107801620) */
/* WARNING: Removing unreachable block (ram,0x000107801624) */
/* WARNING: Removing unreachable block (ram,0x000107801628) */
/* WARNING: Removing unreachable block (ram,0x00010780164c) */
/* WARNING: Removing unreachable block (ram,0x000107801658) */
/* WARNING: Removing unreachable block (ram,0x00010780165c) */
/* WARNING: Removing unreachable block (ram,0x000107801660) */
/* WARNING: Removing unreachable block (ram,0x000107801664) */
/* WARNING: Removing unreachable block (ram,0x000107801668) */
/* WARNING: Removing unreachable block (ram,0x00010780166c) */
/* WARNING: Removing unreachable block (ram,0x000107801694) */
/* WARNING: Removing unreachable block (ram,0x00010780169c) */
/* WARNING: Removing unreachable block (ram,0x0001078016a4) */
/* WARNING: Removing unreachable block (ram,0x000107801674) */
/* WARNING: Removing unreachable block (ram,0x000107801678) */
/* WARNING: Removing unreachable block (ram,0x00010780167c) */
/* WARNING: Removing unreachable block (ram,0x000107801680) */
/* WARNING: Removing unreachable block (ram,0x000107801684) */
/* WARNING: Removing unreachable block (ram,0x000107801688) */
/* WARNING: Removing unreachable block (ram,0x00010780168c) */
/* WARNING: Removing unreachable block (ram,0x000107801690) */
/* WARNING: Removing unreachable block (ram,0x000107801510) */
/* WARNING: Removing unreachable block (ram,0x000107801528) */
/* WARNING: Removing unreachable block (ram,0x000107801538) */
/* WARNING: Removing unreachable block (ram,0x000107801558) */
/* WARNING: Removing unreachable block (ram,0x00010780155c) */
/* WARNING: Removing unreachable block (ram,0x000107801564) */
/* WARNING: Removing unreachable block (ram,0x000107801568) */
/* WARNING: Removing unreachable block (ram,0x00010780156c) */
/* WARNING: Removing unreachable block (ram,0x000107801548) */
/* WARNING: Removing unreachable block (ram,0x00010780154c) */
/* WARNING: Removing unreachable block (ram,0x000107801550) */
/* WARNING: Removing unreachable block (ram,0x000107801554) */
/* WARNING: Removing unreachable block (ram,0x000107801570) */
/* WARNING: Removing unreachable block (ram,0x000107801578) */
/* WARNING: Removing unreachable block (ram,0x0001078015a0) */
/* WARNING: Removing unreachable block (ram,0x0001078015a8) */
/* WARNING: Removing unreachable block (ram,0x0001078015b0) */
/* WARNING: Removing unreachable block (ram,0x0001078015c0) */
/* WARNING: Removing unreachable block (ram,0x0001078016b4) */
/* WARNING: Removing unreachable block (ram,0x0001078016bc) */
/* WARNING: Removing unreachable block (ram,0x0001078015dc) */
/* WARNING: Removing unreachable block (ram,0x0001078015e0) */
/* WARNING: Removing unreachable block (ram,0x000107801580) */
/* WARNING: Removing unreachable block (ram,0x000107801584) */
/* WARNING: Removing unreachable block (ram,0x000107801588) */
/* WARNING: Removing unreachable block (ram,0x00010780158c) */
/* WARNING: Removing unreachable block (ram,0x000107801590) */
/* WARNING: Removing unreachable block (ram,0x000107801594) */
/* WARNING: Removing unreachable block (ram,0x000107801598) */
/* WARNING: Removing unreachable block (ram,0x00010780159c) */
/* WARNING: Removing unreachable block (ram,0x0001078014d4) */
/* WARNING: Removing unreachable block (ram,0x0001078014c8) */
/* WARNING: Removing unreachable block (ram,0x0001078014bc) */
/* WARNING: Removing unreachable block (ram,0x000107801ac4) */
/* WARNING: Removing unreachable block (ram,0x000107801acc) */
/* WARNING: Removing unreachable block (ram,0x000107801ad8) */
/* WARNING: Removing unreachable block (ram,0x000107801af0) */
/* WARNING: Removing unreachable block (ram,0x00010002c7fc) */
/* WARNING: Removing unreachable block (ram,0x000107801ae4) */
/* WARNING: Removing unreachable block (ram,0x000107809088) */

float * FUN_107801438(float *param_1,float *param_2,float *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  float *pfVar10;
  float *extraout_x8_00;
  float *extraout_x8_01;
  float *pfVar11;
  undefined8 *extraout_x8_02;
  float *extraout_x9;
  long lVar12;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x10;
  long extraout_x10_00;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *extraout_x10_01;
  long extraout_x11;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  ulong uVar15;
  ulong uVar16;
  float *unaff_x19;
  float *unaff_x20;
  ulong uVar17;
  undefined1 *unaff_x29;
  float *unaff_x30;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  float *pfStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  
  puVar4 = auStack_c0;
  puVar3 = auStack_c0;
  pfVar7 = param_2;
  pfVar8 = param_3;
  func_0x000107808930();
  pfStack_a8 = param_2 + -8;
  pfStack_b0 = param_2 + -0x10;
  pfStack_b8 = param_2 + -0x18;
  uVar17 = (long)param_2 - (long)unaff_x19 >> 5;
  bVar5 = (long)(uVar17 - 5) < 0;
  uVar6 = uVar17 == 5;
  uStack_78 = extraout_x8;
  switch(uVar17) {
  case 2:
    param_2 = param_2 + -8;
    func_0x000107809624(*param_2);
    if (!bVar5) goto LAB_107801a08;
    func_0x0001078087c4(uStack_78);
    if ((bool)uVar6) {
      func_0x000107808f10();
      param_1 = unaff_x19;
      unaff_x20 = param_2;
      goto code_r0x000107801244;
    }
    break;
  case 3:
    func_0x0001078087c4(extraout_x8);
    if (!(bool)uVar6) break;
    func_0x0001078092a8();
    pfVar8 = pfStack_a8;
    func_0x000107808f10();
    goto code_r0x000107801a2c;
  case 4:
    func_0x0001078087c4(extraout_x8);
    if ((bool)uVar6) {
      func_0x000107808d9c();
      func_0x000107808f10();
code_r0x000107801aac:
      puVar3 = puVar4 + -0x30;
      *(float **)(puVar4 + -0x30) = param_2;
      *(float **)(puVar4 + -0x28) = param_3;
      *(float **)(puVar4 + -0x20) = unaff_x20;
      *(float **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(float **)(puVar4 + -8) = unaff_x30;
      unaff_x29 = puVar4 + -0x10;
      func_0x000107808810();
      unaff_x30 = (float *)&UNK_107801ac4;
      goto code_r0x000107801a2c;
    }
    break;
  case 5:
    func_0x0001078087c4(extraout_x8);
    if ((bool)uVar6) {
      func_0x000107808aa0();
      func_0x000107808f10();
      puVar4 = &stack0xffffffffffffff00;
      unaff_x29 = auStack_d0;
      func_0x000107808810();
      unaff_x30 = (float *)&UNK_107801b18;
      goto code_r0x000107801aac;
    }
    break;
  default:
    bVar5 = 0x16 < uVar17;
    if ((long)uVar17 < 0x18) {
      uVar6 = unaff_x19 == param_2;
      if ((param_4 & 1) == 0) {
        if (!(bool)uVar6) {
          while( true ) {
            bVar5 = (long)(unaff_x19 + 8) - (long)param_2 < 0;
            uVar6 = 1;
            if (unaff_x19 + 8 == param_2) break;
            fVar18 = unaff_x19[8];
            func_0x000107809624();
            if (bVar5) {
              uStack_a0 = *(undefined8 *)(unaff_x19 + 9);
              uStack_98 = CONCAT44(uStack_98._4_4_,unaff_x19[0xb]);
              uVar20 = *(undefined8 *)(unaff_x19 + 0xe);
              uVar9 = *(undefined8 *)(unaff_x19 + 0xc);
              puVar2 = extraout_x8_02;
              do {
                puVar14 = puVar2;
                puVar14[-2] = puVar14[-6];
                puVar14[-3] = puVar14[-7];
                puVar14[-1] = puVar14[-5];
                *puVar14 = puVar14[-4];
                puVar2 = puVar14 + -4;
              } while (fVar18 < *(float *)(puVar14 + -0xb));
              *(float *)(puVar14 + -7) = fVar18;
              func_0x00010780a1c0();
              *(undefined4 *)((long)extraout_x10_01 + -0xc) = extraout_w12_00;
              *(undefined8 *)((long)extraout_x10_01 + -0x14) = extraout_x11_02;
              *extraout_x10_01 = uVar20;
              extraout_x10_01[-1] = uVar9;
            }
            func_0x00010780a140();
          }
        }
      }
      else {
        pfVar10 = unaff_x19;
        if (!(bool)uVar6) {
          while( true ) {
            pfVar11 = pfVar10;
            uVar6 = 1;
            if (pfVar11 + 8 == param_2) break;
            uVar17 = (ulong)(uint)pfVar11[8];
            pfVar10 = pfVar11 + 8;
            if (pfVar11[8] < *pfVar11) {
              uStack_a0 = *(undefined8 *)(pfVar11 + 9);
              uStack_98 = CONCAT44(uStack_98._4_4_,pfVar11[0xb]);
              uVar20 = *(undefined8 *)(pfVar11 + 0xe);
              uVar9 = *(undefined8 *)(pfVar11 + 0xc);
              do {
                func_0x000107809ca4();
                pfVar10 = unaff_x19;
                if (extraout_x10 == 0) goto LAB_1078017f4;
              } while ((float)uVar17 < *(float *)(extraout_x11 + -0x20));
              pfVar10 = (float *)((long)unaff_x19 + extraout_x10);
LAB_1078017f4:
              *pfVar10 = (float)uVar17;
              func_0x00010780a1c0();
              *(undefined4 *)(extraout_x10_00 + 0xc) = extraout_w12;
              *(undefined8 *)(extraout_x10_00 + 4) = extraout_x11_00;
              *(undefined8 *)(extraout_x10_00 + 0x18) = uVar20;
              *(undefined8 *)(extraout_x10_00 + 0x10) = uVar9;
              pfVar10 = extraout_x9;
            }
          }
        }
      }
    }
    else {
      if (param_3 != (float *)0x0) {
        func_0x0001078095e4();
        if (bVar5) {
          func_0x00010780915c();
          unaff_x30 = (float *)0x1078014bc;
          puVar3 = auStack_c0;
          pfVar8 = pfStack_a8;
          unaff_x29 = &stack0xfffffffffffffff0;
        }
        else {
          func_0x00010780a0c4();
          unaff_x30 = (float *)0x1078014f8;
          puVar3 = auStack_c0;
          pfVar8 = pfStack_a8;
          unaff_x29 = &stack0xfffffffffffffff0;
        }
        goto code_r0x000107801a2c;
      }
      uVar6 = unaff_x19 == param_2;
      if (!(bool)uVar6) {
        unaff_x20 = (float *)(uVar17 - 2 >> 1);
        param_3 = unaff_x19 + (long)unaff_x20 * 8;
        do {
          param_1 = unaff_x19;
          func_0x0001078092cc();
          func_0x000107801c90();
          unaff_x20 = (float *)((long)unaff_x20 - 1);
          param_3 = param_3 + -8;
        } while (-1 < (long)unaff_x20);
        while( true ) {
          uVar6 = uVar17 - 2 == 0;
          if ((long)uVar17 < 2) break;
          uStack_98 = *(undefined8 *)(unaff_x19 + 2);
          uStack_a0 = *(undefined8 *)unaff_x19;
          uVar9 = *(undefined8 *)(unaff_x19 + 4);
          uVar20 = *(undefined8 *)(unaff_x19 + 6);
          pfVar10 = unaff_x19;
          uVar15 = 0;
          do {
            uVar16 = uVar15 << 1 | 1;
            uVar1 = uVar15 * 2 + 2;
            pfVar11 = pfVar10 + uVar15 * 8 + 8;
            if (((long)uVar1 < (long)uVar17) &&
               (pfVar10[uVar15 * 8 + 8] < pfVar10[uVar15 * 8 + 0x10])) {
              pfVar11 = pfVar10 + uVar15 * 8 + 0x10;
              uVar16 = uVar1;
            }
            uVar19 = *(undefined8 *)pfVar11;
            *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)(pfVar11 + 2);
            *(undefined8 *)pfVar10 = uVar19;
            *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(pfVar11 + 4);
            *(undefined8 *)(pfVar10 + 6) = *(undefined8 *)(pfVar11 + 6);
            pfVar10 = pfVar11;
            uVar15 = uVar16;
          } while ((long)uVar16 <= (long)(uVar17 - 2 >> 1));
          pfVar10 = param_2 + -8;
          if (pfVar11 == pfVar10) {
            func_0x000107809594();
          }
          else {
            uVar19 = *(undefined8 *)pfVar10;
            *(undefined8 *)(pfVar11 + 2) = *(undefined8 *)(param_2 + -6);
            *(undefined8 *)pfVar11 = uVar19;
            *(undefined8 *)(pfVar11 + 4) = *(undefined8 *)(param_2 + -4);
            *(undefined8 *)(pfVar11 + 6) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)(param_2 + -6) = uStack_98;
            *(undefined8 *)pfVar10 = uStack_a0;
            *(undefined8 *)(param_2 + -4) = uVar9;
            *(undefined8 *)(param_2 + -2) = uVar20;
            lVar12 = (long)pfVar11 + (0x20 - (long)unaff_x19) >> 5;
            if (1 < lVar12) {
              pfVar13 = unaff_x19 + (lVar12 - 2U >> 1) * 8;
              uVar15 = (ulong)(uint)*pfVar11;
              if (*pfVar13 < *pfVar11) {
                uStack_88 = *(undefined8 *)(pfVar11 + 1);
                fStack_80 = pfVar11[3];
                uVar20 = *(undefined8 *)(pfVar11 + 6);
                uVar9 = *(undefined8 *)(pfVar11 + 4);
                do {
                  func_0x000107808ff8(pfVar13);
                  fVar18 = (float)uVar15;
                  *(undefined8 *)(extraout_x11_01 + 0x18) = *(undefined8 *)(extraout_x8_00 + 6);
                  pfVar11 = extraout_x8_00;
                  if (extraout_x9_00 == 0) break;
                  func_0x000107809fec();
                  pfVar13 = unaff_x19 + extraout_x9_01 * 8;
                  fVar18 = (float)uVar15;
                  pfVar11 = extraout_x8_01;
                } while (*pfVar13 < fVar18);
                *pfVar11 = fVar18;
                pfVar11[3] = fStack_80;
                *(undefined8 *)(pfVar11 + 1) = uStack_88;
                *(undefined8 *)(pfVar11 + 6) = uVar20;
                *(undefined8 *)(pfVar11 + 4) = uVar9;
              }
            }
          }
          uVar17 = uVar17 - 1;
          param_2 = pfVar10;
        }
      }
    }
  case 0:
  case 1:
LAB_107801a08:
    func_0x0001078087c4(uStack_78);
    if ((bool)uVar6) {
      func_0x000107808f10(unaff_x30);
      return unaff_x30;
    }
  }
  unaff_x30 = (float *)&SUB_107801a2c;
  ___stack_chk_fail();
  puVar3 = auStack_c0;
  unaff_x29 = &stack0xfffffffffffffff0;
code_r0x000107801a2c:
  *(float **)(puVar3 + -0x30) = param_2;
  *(float **)(puVar3 + -0x28) = param_3;
  *(float **)(puVar3 + -0x20) = unaff_x20;
  *(float **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(float **)(puVar3 + -8) = unaff_x30;
  func_0x000107809198();
  uVar6 = *pfVar7 < *param_1;
  if ((bool)uVar6) {
    func_0x00010780a0e8();
    if (!(bool)uVar6) {
      func_0x000107809944();
      func_0x000107809624(*unaff_x20);
      param_1 = unaff_x19;
      if (!(bool)uVar6) {
        return (float *)0x1;
      }
    }
  }
  else {
    uVar6 = *pfVar8 < *pfVar7;
    if (!(bool)uVar6) {
      return (float *)0x0;
    }
    func_0x000107808ee4();
    func_0x0001078096d4(*unaff_x19);
    if (!(bool)uVar6) {
      return (float *)0x1;
    }
    func_0x000107809cf8();
    unaff_x20 = pfVar7;
  }
code_r0x000107801244:
  uVar20 = *(undefined8 *)(param_1 + 2);
  uVar9 = *(undefined8 *)param_1;
  uVar19 = *(undefined8 *)unaff_x20;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(unaff_x20 + 2);
  *(undefined8 *)param_1 = uVar19;
  *(undefined8 *)(unaff_x20 + 2) = uVar20;
  *(undefined8 *)unaff_x20 = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(unaff_x20 + 4);
  *(undefined8 *)(unaff_x20 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(unaff_x20 + 6);
  *(undefined8 *)(unaff_x20 + 6) = uVar9;
  return param_1;
}



/* Entry: 107802384; end: 1078023eb;  */

void FUN_107802384(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107808810();
  func_0x000107802338();
  uVar1 = *(float *)(param_5 + 8) < *(float *)(unaff_x22 + 8);
  if ((bool)uVar1) {
    func_0x0001078090e8();
    func_0x00010780965c();
    if ((bool)uVar1) {
      func_0x000107808c74();
      func_0x00010780964c();
      if ((bool)uVar1) {
        func_0x000107808c9c();
        func_0x0001078093f0();
        if ((bool)uVar1) {
          func_0x0001078093b4();
          uVar3 = param_1[1];
          uVar2 = *param_1;
          uVar4 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar4;
          param_2[1] = uVar3;
          *param_2 = uVar2;
          uVar2 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = uVar2;
          uVar2 = param_1[3];
          param_1[3] = param_2[3];
          param_2[3] = uVar2;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 107802dc0; end: 107803383;  */

/* WARNING: Possible PIC construction at 0x000107802e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107802e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107802e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107802e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107802e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107802e48) */
/* WARNING: Removing unreachable block (ram,0x000107802e3c) */
/* WARNING: Removing unreachable block (ram,0x000107802e30) */
/* WARNING: Removing unreachable block (ram,0x000107802e54) */
/* WARNING: Removing unreachable block (ram,0x000107802e6c) */
/* WARNING: Removing unreachable block (ram,0x000107802e7c) */
/* WARNING: Removing unreachable block (ram,0x000107802e84) */
/* WARNING: Removing unreachable block (ram,0x000107802e88) */
/* WARNING: Removing unreachable block (ram,0x000107802fa0) */
/* WARNING: Removing unreachable block (ram,0x000107802fb4) */
/* WARNING: Removing unreachable block (ram,0x000107802fb8) */
/* WARNING: Removing unreachable block (ram,0x000107802fd8) */
/* WARNING: Removing unreachable block (ram,0x000107802fdc) */
/* WARNING: Removing unreachable block (ram,0x000107802fe8) */
/* WARNING: Removing unreachable block (ram,0x000107802ff0) */
/* WARNING: Removing unreachable block (ram,0x000107802ff4) */
/* WARNING: Removing unreachable block (ram,0x000107802fbc) */
/* WARNING: Removing unreachable block (ram,0x000107802fc0) */
/* WARNING: Removing unreachable block (ram,0x000107802fc8) */
/* WARNING: Removing unreachable block (ram,0x000107802fcc) */
/* WARNING: Removing unreachable block (ram,0x000107802fd4) */
/* WARNING: Removing unreachable block (ram,0x000107802ff8) */
/* WARNING: Removing unreachable block (ram,0x000107803004) */
/* WARNING: Removing unreachable block (ram,0x000107803008) */
/* WARNING: Removing unreachable block (ram,0x000107803010) */
/* WARNING: Removing unreachable block (ram,0x000107803014) */
/* WARNING: Removing unreachable block (ram,0x00010780301c) */
/* WARNING: Removing unreachable block (ram,0x000107803020) */
/* WARNING: Removing unreachable block (ram,0x000107803050) */
/* WARNING: Removing unreachable block (ram,0x000107803058) */
/* WARNING: Removing unreachable block (ram,0x000107803070) */
/* WARNING: Removing unreachable block (ram,0x000107803028) */
/* WARNING: Removing unreachable block (ram,0x00010780302c) */
/* WARNING: Removing unreachable block (ram,0x000107803034) */
/* WARNING: Removing unreachable block (ram,0x000107803038) */
/* WARNING: Removing unreachable block (ram,0x00010780303c) */
/* WARNING: Removing unreachable block (ram,0x000107803044) */
/* WARNING: Removing unreachable block (ram,0x000107803048) */
/* WARNING: Removing unreachable block (ram,0x00010780304c) */
/* WARNING: Removing unreachable block (ram,0x000107802e74) */
/* WARNING: Removing unreachable block (ram,0x000107802e8c) */
/* WARNING: Removing unreachable block (ram,0x000107802ea4) */
/* WARNING: Removing unreachable block (ram,0x000107802eb4) */
/* WARNING: Removing unreachable block (ram,0x000107802edc) */
/* WARNING: Removing unreachable block (ram,0x000107802ee0) */
/* WARNING: Removing unreachable block (ram,0x000107802f00) */
/* WARNING: Removing unreachable block (ram,0x000107802ee8) */
/* WARNING: Removing unreachable block (ram,0x000107802ef0) */
/* WARNING: Removing unreachable block (ram,0x000107802ef4) */
/* WARNING: Removing unreachable block (ram,0x000107802efc) */
/* WARNING: Removing unreachable block (ram,0x000107802ec4) */
/* WARNING: Removing unreachable block (ram,0x000107802ecc) */
/* WARNING: Removing unreachable block (ram,0x000107802ed0) */
/* WARNING: Removing unreachable block (ram,0x000107802ed8) */
/* WARNING: Removing unreachable block (ram,0x000107802f04) */
/* WARNING: Removing unreachable block (ram,0x000107802f0c) */
/* WARNING: Removing unreachable block (ram,0x000107802f3c) */
/* WARNING: Removing unreachable block (ram,0x000107802f44) */
/* WARNING: Removing unreachable block (ram,0x000107802f4c) */
/* WARNING: Removing unreachable block (ram,0x000107802f6c) */
/* WARNING: Removing unreachable block (ram,0x000107803090) */
/* WARNING: Removing unreachable block (ram,0x000107803098) */
/* WARNING: Removing unreachable block (ram,0x000107802f84) */
/* WARNING: Removing unreachable block (ram,0x000107802f88) */
/* WARNING: Removing unreachable block (ram,0x000107802f14) */
/* WARNING: Removing unreachable block (ram,0x000107802f18) */
/* WARNING: Removing unreachable block (ram,0x000107802f20) */
/* WARNING: Removing unreachable block (ram,0x000107802f24) */
/* WARNING: Removing unreachable block (ram,0x000107802f28) */
/* WARNING: Removing unreachable block (ram,0x000107802f30) */
/* WARNING: Removing unreachable block (ram,0x000107802f34) */
/* WARNING: Removing unreachable block (ram,0x000107802f38) */

ulong FUN_107802dc0(ulong param_1,long param_2,long param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *puVar9;
  undefined8 *extraout_x8_05;
  long lVar10;
  ulong extraout_x9;
  ulong uVar11;
  long extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong uVar12;
  long extraout_x10;
  long extraout_x10_00;
  undefined8 *extraout_x10_01;
  long extraout_x10_02;
  long extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar13;
  long extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined4 extraout_w12;
  undefined4 extraout_w12_00;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x14;
  long extraout_x14_00;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  uint unaff_w25;
  ulong unaff_x30;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar8;
  
  func_0x000107809ce0();
  func_0x0001078087f8();
  lVar10 = unaff_x20 - 0x20;
  func_0x0001078095f4();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001078030b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61d0)[unaff_x19] * 4 + 0x1078030b4))();
    return param_1;
  }
  bVar4 = 0x16 < unaff_x19;
  if ((long)unaff_x19 < 0x18) {
    bVar4 = unaff_x19 == unaff_x20;
    if ((unaff_w25 & 1) == 0) {
      if (!bVar4) {
        while( true ) {
          bVar7 = (long)((unaff_x19 + 0x20) - unaff_x20) < 0;
          bVar4 = true;
          if (unaff_x19 + 0x20 == unaff_x20) break;
          fVar14 = *(float *)(unaff_x19 + 0x2c);
          func_0x000107809554();
          if (bVar7) {
            func_0x000107809f08();
            uVar16 = *(undefined8 *)(unaff_x19 + 0x38);
            uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
            puVar9 = extraout_x8_05;
            do {
              puVar9[2] = puVar9[-2];
              puVar9[1] = puVar9[-3];
              puVar9[3] = puVar9[-1];
              puVar9[4] = *puVar9;
              pfVar1 = (float *)((long)puVar9 + -0x2c);
              puVar9 = puVar9 + -4;
            } while (fVar14 < *pfVar1);
            func_0x00010780a1c0();
            *(undefined4 *)(extraout_x10_02 + 0x10) = extraout_w12_00;
            *(undefined8 *)(extraout_x10_02 + 8) = extraout_x11_02;
            *(float *)(extraout_x10_02 + 0x14) = fVar14;
            *(undefined8 *)(extraout_x10_02 + 0x20) = uVar16;
            *(undefined8 *)(extraout_x10_02 + 0x18) = uVar13;
          }
          func_0x00010780a140();
        }
      }
    }
    else if (!bVar4) {
      lVar10 = 0;
      uVar12 = unaff_x19;
      while( true ) {
        uVar11 = uVar12 + 0x20;
        bVar4 = true;
        if (uVar11 == unaff_x20) break;
        fVar14 = *(float *)(uVar12 + 0x2c);
        if (fVar14 < *(float *)(uVar12 + 0xc)) {
          func_0x00010780a064(lVar10);
          uVar16 = *(undefined8 *)(extraout_x10 + 0x38);
          uVar13 = *(undefined8 *)(extraout_x10 + 0x30);
          do {
            func_0x000107809ca4();
            if (extraout_x10_00 == 0) break;
          } while (fVar14 < *(float *)(extraout_x11 + -0x14));
          func_0x00010780a1c0();
          *(undefined4 *)(extraout_x10_01 + 1) = extraout_w12;
          *extraout_x10_01 = extraout_x11_00;
          *(float *)((long)extraout_x10_01 + 0xc) = fVar14;
          extraout_x10_01[3] = uVar16;
          extraout_x10_01[2] = uVar13;
          lVar10 = extraout_x8_00;
          uVar11 = extraout_x9;
        }
        lVar10 = lVar10 + 0x20;
        uVar12 = uVar11;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x0001078095e4();
      if (bVar4) {
        func_0x00010780915c();
      }
      else {
        func_0x00010780a0c4();
      }
      goto code_r0x000107803384;
    }
    bVar4 = unaff_x19 == unaff_x20;
    if (!bVar4) {
      func_0x000107809b6c();
      lVar10 = 0;
      do {
        param_1 = unaff_x19;
        func_0x0001078092cc();
        func_0x0001078035e8();
        lVar10 = lVar10 + -1;
        uVar12 = unaff_x19;
      } while (-1 < lVar10);
      while( true ) {
        bVar4 = uVar12 - 2 == 0;
        if ((long)uVar12 < 2) break;
        func_0x000107808ea4(uVar12 - 2);
        lVar10 = extraout_x13;
        lVar8 = extraout_x14;
        do {
          lVar10 = lVar10 + lVar8 * 0x20;
          uVar11 = lVar8 * 2 + 2;
          cVar5 = SBORROW8(uVar11,uVar12);
          cVar6 = (long)(uVar11 - uVar12) < 0;
          bVar4 = uVar11 == uVar12;
          lVar8 = lVar10 + 0x20;
          if ((long)uVar11 < (long)uVar12) {
            fVar14 = *(float *)(lVar10 + 0x2c);
            fVar15 = *(float *)(lVar10 + 0x4c);
            cVar5 = NAN(fVar14) || NAN(fVar15);
            bVar4 = fVar14 == fVar15;
            cVar6 = fVar14 < fVar15;
            if ((bool)cVar6) {
              lVar8 = lVar10 + 0x40;
            }
          }
          func_0x000107808dac(lVar8);
          lVar10 = extraout_x13_00;
          lVar8 = extraout_x14_00;
        } while (bVar4 || cVar6 != cVar5);
        unaff_x20 = extraout_x9_00 - 0x20;
        cVar6 = SBORROW8(extraout_x8_01,unaff_x20);
        cVar5 = (long)(extraout_x8_01 - unaff_x20) < 0;
        if (extraout_x8_01 == unaff_x20) {
          func_0x000107809594();
        }
        else {
          func_0x000107808b30();
          if (cVar5 == cVar6) {
            lVar10 = unaff_x19 + (extraout_x9_01 >> 1) * 0x20;
            fVar14 = *(float *)((long)extraout_x8_02 + 0xc);
            if (*(float *)(lVar10 + 0xc) < fVar14) {
              uVar13 = *extraout_x8_02;
              uVar2 = *(undefined4 *)(extraout_x8_02 + 1);
              uVar17 = extraout_x8_02[3];
              uVar16 = extraout_x8_02[2];
              do {
                func_0x000107808ff8(lVar10);
                *(undefined8 *)(extraout_x11_01 + 0x18) = extraout_x8_03[3];
                puVar9 = extraout_x8_03;
                if (extraout_x9_02 == 0) break;
                func_0x000107809fec();
                lVar10 = unaff_x19 + extraout_x9_03 * 0x20;
                puVar9 = extraout_x8_04;
              } while (*(float *)(lVar10 + 0xc) < fVar14);
              *(undefined4 *)(puVar9 + 1) = uVar2;
              *puVar9 = uVar13;
              *(float *)((long)puVar9 + 0xc) = fVar14;
              puVar9[3] = uVar17;
              puVar9[2] = uVar16;
            }
          }
        }
        uVar12 = uVar12 - 1;
      }
    }
  }
  func_0x0001078087c4(extraout_x8);
  if (bVar4) {
    func_0x000107808f10(unaff_x30);
    return unaff_x30;
  }
  ___stack_chk_fail();
  lVar10 = param_3;
code_r0x000107803384:
  func_0x000107809198();
  uVar3 = *(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc);
  if ((bool)uVar3) {
    func_0x00010780a0e8();
    if (!(bool)uVar3) {
      func_0x000107809944();
      func_0x000107809554(*(undefined4 *)(unaff_x20 + 0xc));
      if (!(bool)uVar3) {
        return 1;
      }
    }
  }
  else {
    uVar3 = *(float *)(lVar10 + 0xc) < *(float *)(param_2 + 0xc);
    if (!(bool)uVar3) {
      return 0;
    }
    func_0x000107808ee4();
    func_0x000107809750(*(undefined4 *)(unaff_x19 + 0xc));
    if (!(bool)uVar3) {
      return 1;
    }
    func_0x000107809cf8();
  }
  func_0x000107801244();
  return 1;
}



/* Entry: 10780385c; end: 107803e43;  */

/* WARNING: Possible PIC construction at 0x000107803be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107803c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107803e00) */
/* WARNING: Removing unreachable block (ram,0x000107803e04) */
/* WARNING: Removing unreachable block (ram,0x000107803afc) */
/* WARNING: Removing unreachable block (ram,0x000107803b00) */
/* WARNING: Removing unreachable block (ram,0x000107803b04) */
/* WARNING: Removing unreachable block (ram,0x000107803b14) */
/* WARNING: Removing unreachable block (ram,0x000107803b24) */
/* WARNING: Removing unreachable block (ram,0x000107803b30) */
/* WARNING: Removing unreachable block (ram,0x000107803b1c) */
/* WARNING: Removing unreachable block (ram,0x000107803ab8) */
/* WARNING: Removing unreachable block (ram,0x000107803ac4) */
/* WARNING: Removing unreachable block (ram,0x000107803abc) */
/* WARNING: Removing unreachable block (ram,0x000107803c54) */
/* WARNING: Removing unreachable block (ram,0x000107803c5c) */
/* WARNING: Removing unreachable block (ram,0x000107803c34) */
/* WARNING: Removing unreachable block (ram,0x000107803c3c) */
/* WARNING: Removing unreachable block (ram,0x000107803be4) */
/* WARNING: Removing unreachable block (ram,0x000107803be8) */
/* WARNING: Removing unreachable block (ram,0x000107803c68) */
/* WARNING: Removing unreachable block (ram,0x000107803c6c) */
/* WARNING: Removing unreachable block (ram,0x000107803e18) */

double FUN_10780385c(double *param_1,double *param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  uint uVar6;
  undefined8 extraout_x8;
  long lVar7;
  double extraout_x8_00;
  double extraout_x8_01;
  double dVar8;
  double *pdVar9;
  double dVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dStack_288;
  double dStack_278;
  undefined *puStack_268;
  double adStack_260 [4];
  double dStack_240;
  double adStack_238 [51];
  undefined8 uStack_a0;
  
  pdVar5 = param_2;
  func_0x000107808a58();
  dVar17 = *param_1;
  uStack_a0 = extraout_x8;
  if (param_3 < 2) {
    pdVar11 = adStack_238;
    for (lVar7 = (long)dVar17 * 0x18; lVar7 != 0; lVar7 = lVar7 + -0x18) {
      *pdVar11 = 0.0;
      pdVar11[1] = 0.0;
      pdVar11[2] = 0.0;
      pdVar11 = pdVar11 + 3;
    }
    dStack_288 = 0.0;
    pdVar11 = param_1 + 1;
    pdVar9 = adStack_238 + 1;
    dVar24 = 1.79769313486232e+308;
    dVar22 = 1.79769313486232e+308;
    pdVar3 = pdVar11;
    dStack_240 = dVar17;
    for (dVar8 = 0.0; dVar17 != dVar8; dVar8 = (double)((long)dVar8 + 1)) {
      func_0x000107809810();
      dVar21 = (double)(SUB84(adStack_260[1],0) - SUB84(adStack_260[0],0));
      dVar25 = dVar21 * (double)((float)((ulong)adStack_260[1] >> 0x20) -
                                (float)((ulong)adStack_260[0] >> 0x20));
      param_1 = pdVar3;
      func_0x000107801d8c();
      dVar21 = dVar25 - dVar21;
      pdVar9[1] = dVar8;
      pdVar9[-1] = dVar21;
      *pdVar9 = dVar25;
      if (dVar21 < dVar22) {
LAB_10780393c:
        dStack_288 = dVar8;
        dVar24 = dVar25;
        dVar22 = dVar21;
      }
      else {
        bVar2 = false;
        if ((dVar21 == dVar22) && (bVar2 = false, !NAN(dVar25) && !NAN(dVar24))) {
          bVar2 = dVar25 < dVar24;
        }
        if (bVar2) goto LAB_10780393c;
      }
      pdVar9 = pdVar9 + 3;
      pdVar3 = pdVar3 + 3;
    }
    dVar22 = ABS(dVar22);
    bVar2 = dVar22 == 2.220446049250313e-16;
    if (2.220446049250313e-16 < dVar22) {
      dStack_278 = dVar17;
      if (0x20 < (ulong)dVar17) {
        puStack_268 = &SUB_107803e44;
        pdVar3 = adStack_238;
        pdVar9 = adStack_238 + (long)dVar17 * 3;
        while (pdVar19 = pdVar9, pdVar9 = pdVar19 + -3, (double *)&stack0x000000c8 != pdVar19) {
          uVar1 = ((long)pdVar19 - (long)pdVar3) / 0x18;
          if (uVar1 < 2) break;
          if (uVar1 == 3) {
            pdVar5 = pdVar3 + 3;
            func_0x000107803e78(pdVar3,pdVar5,pdVar9,&puStack_268);
            param_1 = pdVar3;
            break;
          }
          if (uVar1 == 2) {
            func_0x00010780918c();
            pdVar4 = param_1;
            pdVar14 = pdVar5;
            goto code_r0x000107803e44;
          }
          pdVar4 = pdVar3;
          if ((long)pdVar19 - (long)pdVar3 < 0xc0) goto LAB_107803dd8;
          pdVar4 = pdVar3 + (uVar1 >> 1) * 3;
          pdVar14 = pdVar3;
          pdVar5 = pdVar4;
          func_0x000107803e78(pdVar3,pdVar4,pdVar9,&puStack_268);
          param_1 = pdVar3;
          func_0x000107809838();
          pdVar12 = pdVar9;
          if (((ulong)param_1 & 1) == 0) {
            do {
              pdVar15 = pdVar12;
              pdVar12 = pdVar15 + -3;
              if (pdVar12 == pdVar3) {
                param_1 = pdVar3;
                pdVar5 = pdVar9;
                func_0x000107803e44();
                pdVar4 = pdVar3;
                pdVar14 = pdVar3 + 3;
                if (pdVar3 + 3 != pdVar9) goto code_r0x000107803e44;
                goto LAB_107803c9c;
              }
              param_1 = pdVar12;
              func_0x000107809838();
            } while ((int)param_1 == 0);
            func_0x000107808dd0();
            dVar8 = pdVar15[-2];
            dVar22 = *pdVar12;
            func_0x000107808d1c(pdVar15[-1]);
            pdVar15[-1] = extraout_x8_00;
            pdVar15[-2] = dVar8;
            *pdVar12 = dVar22;
            uVar6 = 1;
            if ((int)pdVar14 != 0) {
              uVar6 = 2;
            }
            pdVar14 = (double *)(ulong)uVar6;
          }
          iVar13 = (int)pdVar14;
          pdVar9 = pdVar3 + 3;
          pdVar16 = pdVar4;
          pdVar15 = pdVar9;
          if (pdVar9 < pdVar12) {
            while( true ) {
              pdVar4 = pdVar16;
              iVar13 = (int)pdVar14;
              pdVar9 = pdVar15 + -3;
              do {
                pdVar16 = pdVar9;
                pdVar9 = pdVar16 + 3;
                pdVar14 = pdVar9;
                func_0x000107809838();
              } while (((ulong)pdVar14 & 1) != 0);
              pdVar15 = pdVar16 + 6;
              do {
                pdVar12 = pdVar12 + -3;
                param_1 = pdVar12;
                func_0x000107809838();
              } while ((int)param_1 == 0);
              if (pdVar12 <= pdVar9) break;
              dVar8 = pdVar16[4];
              dVar22 = *pdVar9;
              func_0x000107809414(pdVar16[5]);
              pdVar16[5] = extraout_x8_01;
              pdVar16[4] = dVar8;
              *pdVar9 = dVar22;
              func_0x000107809400();
              pdVar14 = (double *)(ulong)(iVar13 + 1);
              pdVar16 = pdVar12;
              if (pdVar9 != pdVar4) {
                pdVar16 = pdVar4;
              }
            }
          }
          pdVar14 = pdVar9;
          if (pdVar9 != pdVar4) goto code_r0x000107803e44;
          if ((double *)&stack0x000000c8 == pdVar9) break;
          if (iVar13 == 0) {
            if (&stack0x000000c8 < pdVar9) {
              pdVar4 = pdVar3 + 3;
              pdVar5 = pdVar3;
              pdVar14 = pdVar3;
              if (pdVar4 != pdVar9) goto code_r0x000107803e44;
            }
            else {
              pdVar4 = pdVar9 + 3;
              pdVar5 = pdVar9;
              if (pdVar4 != pdVar19) goto code_r0x000107803e44;
            }
            break;
          }
          if (pdVar9 <= &stack0x000000c8) {
            pdVar3 = pdVar9 + 3;
            pdVar9 = pdVar19;
          }
        }
LAB_107803c9c:
        dStack_278 = 1.58101006669199e-322;
      }
      dStack_288 = 0.0;
      dVar25 = 1.79769313486232e+308;
      dVar24 = 1.79769313486232e+308;
      dVar21 = 1.79769313486232e+308;
      for (dVar8 = 0.0; bVar2 = dVar8 == dStack_278, !bVar2; dVar8 = (double)((long)dVar8 + 1)) {
        pdVar3 = adStack_238 + (long)dVar8 * 3;
        dVar20 = adStack_238[(long)dVar8 * 3 + 2];
        func_0x000107809810();
        dVar26 = 0.0;
        pdVar9 = pdVar11;
        dVar10 = dVar20;
        for (dVar18 = dVar17; dVar18 != 0.0; dVar18 = (double)((long)dVar18 + -1)) {
          dVar23 = dVar22;
          if (dVar10 != 0.0) {
            param_1 = adStack_260;
            pdVar5 = pdVar9;
            func_0x000107801368();
            dVar23 = ABS(dVar22);
            if (2.220446049250313e-16 < dVar23) {
              param_1 = pdVar11 + (long)dVar20 * 3;
              pdVar5 = pdVar9;
              func_0x000107801368();
              dVar23 = dVar22 - dVar23;
              dVar26 = dVar26 + dVar23;
            }
          }
          pdVar9 = pdVar9 + 3;
          dVar10 = (double)((long)dVar10 + -1);
          dVar22 = dVar23;
        }
        if (dVar21 <= dVar26) {
          if (dVar26 == dVar21) {
            dVar22 = *pdVar3;
            if ((dVar22 < dVar24) ||
               ((dVar22 == dVar24 && (adStack_238[(long)dVar8 * 3 + 1] < dVar25))))
            goto LAB_107803d7c;
          }
        }
        else {
          dVar22 = *pdVar3;
LAB_107803d7c:
          dVar25 = adStack_238[(long)dVar8 * 3 + 1];
          dVar24 = dVar22;
          dVar21 = dVar26;
          dStack_288 = dVar20;
        }
      }
    }
  }
  else {
    dStack_288 = 0.0;
    pdVar11 = param_1 + 1;
    dVar22 = 1.79769313486232e+308;
    dVar24 = 1.79769313486232e+308;
    for (dVar8 = 0.0; bVar2 = dVar17 == dVar8, !bVar2; dVar8 = (double)((long)dVar8 + 1)) {
      adStack_238[0] = pdVar11[1];
      dStack_240 = *pdVar11;
      pdVar5 = param_2;
      func_0x0001078036f0(&dStack_240);
      dVar21 = (double)(SUB84(adStack_238[0],0) - SUB84(dStack_240,0));
      dVar25 = dVar21 * (double)((float)((ulong)adStack_238[0] >> 0x20) -
                                (float)((ulong)dStack_240 >> 0x20));
      param_1 = pdVar11;
      func_0x000107801d8c();
      dVar21 = dVar25 - dVar21;
      if (dVar21 < dVar24) {
LAB_1078039b8:
        dStack_288 = dVar8;
        dVar22 = dVar25;
        dVar24 = dVar21;
      }
      else {
        bVar2 = false;
        if ((dVar21 == dVar24) && (bVar2 = false, !NAN(dVar25) && !NAN(dVar22))) {
          bVar2 = dVar25 < dVar22;
        }
        if (bVar2) goto LAB_1078039b8;
      }
      pdVar11 = pdVar11 + 3;
    }
  }
  func_0x0001078087c4(uStack_a0);
  if (bVar2) {
    return dStack_288;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pdVar4 = param_1;
  pdVar14 = pdVar5;
code_r0x000107803e44:
  if (*pdVar4 < *pdVar14) {
    return 4.94065645841247e-324;
  }
  if (*pdVar4 != *pdVar14) {
    return 0.0;
  }
  return (double)(ulong)(pdVar4[1] < pdVar14[1]);
LAB_107803dd8:
  if (pdVar3 == pdVar9) goto LAB_107803c9c;
  if ((pdVar3 != pdVar19) && (pdVar4 + 3 != pdVar19)) {
    func_0x00010780a114();
    pdVar4 = param_1;
    pdVar14 = pdVar5;
    goto code_r0x000107803e44;
  }
  pdVar3 = pdVar3 + 3;
  pdVar4 = pdVar4 + 3;
  goto LAB_107803dd8;
}



/* Entry: 107805384; end: 10780542f;  */

undefined8 FUN_107805384(float *param_1,float *param_2,float *param_3)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  fVar2 = *param_2;
  uVar3 = 0;
  uVar4 = 0;
  if (*param_1 <= fVar2) {
    if (fVar2 <= *param_3) {
      return 0;
    }
    func_0x000107809398();
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(ulong *)param_3 = CONCAT44(uVar3,fVar2);
    *(undefined8 *)(param_3 + 4) = extraout_x8_00;
    if (*param_2 < *param_1) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar2 <= *param_3) {
      func_0x000107808e40();
      fVar2 = *param_3;
      uVar3 = 0;
      uVar4 = 0;
      if (*param_2 <= fVar2) {
        return 1;
      }
      func_0x000107809398(unaff_x30);
      uVar1 = extraout_x8_01;
    }
    else {
      func_0x000107809bf8();
      uVar1 = extraout_x8;
    }
    *(undefined8 *)(param_3 + 2) = uVar4;
    *(ulong *)param_3 = CONCAT44(uVar3,fVar2);
    *(undefined8 *)(param_3 + 4) = uVar1;
  }
  return 1;
}



/* Entry: 107805cf4; end: 107805d57;  */

void FUN_107805cf4(void)

{
  undefined1 uVar1;
  long in_x4;
  long unaff_x22;
  
  func_0x000107808810();
  func_0x000107805cac();
  uVar1 = *(float *)(in_x4 + 8) < *(float *)(unaff_x22 + 8);
  if ((bool)uVar1) {
    func_0x000107808a7c();
    func_0x00010780965c();
    if ((bool)uVar1) {
      func_0x0001078087a0();
      func_0x00010780964c();
      if ((bool)uVar1) {
        func_0x00010780877c();
        func_0x0001078093f0();
        if ((bool)uVar1) {
          func_0x000107808758();
        }
      }
    }
  }
  return;
}



/* Entry: 10780671c; end: 1078067fb;  */

/* WARNING: Possible PIC construction at 0x000107806848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107806864) */
/* WARNING: Removing unreachable block (ram,0x000107806878) */
/* WARNING: Removing unreachable block (ram,0x000107806888) */
/* WARNING: Removing unreachable block (ram,0x000107806890) */
/* WARNING: Removing unreachable block (ram,0x000107806894) */
/* WARNING: Removing unreachable block (ram,0x00010780698c) */
/* WARNING: Removing unreachable block (ram,0x000107806994) */
/* WARNING: Removing unreachable block (ram,0x000107806998) */
/* WARNING: Removing unreachable block (ram,0x0001078069b8) */
/* WARNING: Removing unreachable block (ram,0x0001078069bc) */
/* WARNING: Removing unreachable block (ram,0x0001078069c8) */
/* WARNING: Removing unreachable block (ram,0x0001078069d0) */
/* WARNING: Removing unreachable block (ram,0x0001078069d4) */
/* WARNING: Removing unreachable block (ram,0x00010780699c) */
/* WARNING: Removing unreachable block (ram,0x0001078069a0) */
/* WARNING: Removing unreachable block (ram,0x0001078069a8) */
/* WARNING: Removing unreachable block (ram,0x0001078069ac) */
/* WARNING: Removing unreachable block (ram,0x0001078069b4) */
/* WARNING: Removing unreachable block (ram,0x0001078069d8) */
/* WARNING: Removing unreachable block (ram,0x0001078069e4) */
/* WARNING: Removing unreachable block (ram,0x0001078069e8) */
/* WARNING: Removing unreachable block (ram,0x0001078069f0) */
/* WARNING: Removing unreachable block (ram,0x0001078069f4) */
/* WARNING: Removing unreachable block (ram,0x0001078069fc) */
/* WARNING: Removing unreachable block (ram,0x000107806a00) */
/* WARNING: Removing unreachable block (ram,0x000107806a2c) */
/* WARNING: Removing unreachable block (ram,0x000107806a38) */
/* WARNING: Removing unreachable block (ram,0x000107806a48) */
/* WARNING: Removing unreachable block (ram,0x000107806a08) */
/* WARNING: Removing unreachable block (ram,0x000107806a0c) */
/* WARNING: Removing unreachable block (ram,0x000107806a14) */
/* WARNING: Removing unreachable block (ram,0x000107806a18) */
/* WARNING: Removing unreachable block (ram,0x000107806a1c) */
/* WARNING: Removing unreachable block (ram,0x000107806a28) */
/* WARNING: Removing unreachable block (ram,0x000107806880) */
/* WARNING: Removing unreachable block (ram,0x000107806898) */
/* WARNING: Removing unreachable block (ram,0x0001078068a4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b0) */
/* WARNING: Removing unreachable block (ram,0x0001078068b4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b8) */
/* WARNING: Removing unreachable block (ram,0x0001078068dc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e0) */
/* WARNING: Removing unreachable block (ram,0x0001078068fc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e8) */
/* WARNING: Removing unreachable block (ram,0x0001078068f8) */
/* WARNING: Removing unreachable block (ram,0x0001078068c8) */
/* WARNING: Removing unreachable block (ram,0x0001078068d8) */
/* WARNING: Removing unreachable block (ram,0x000107806900) */
/* WARNING: Removing unreachable block (ram,0x000107806908) */
/* WARNING: Removing unreachable block (ram,0x000107806938) */
/* WARNING: Removing unreachable block (ram,0x000107806940) */
/* WARNING: Removing unreachable block (ram,0x000107806944) */
/* WARNING: Removing unreachable block (ram,0x000107806964) */
/* WARNING: Removing unreachable block (ram,0x000107806a68) */
/* WARNING: Removing unreachable block (ram,0x000107806a70) */
/* WARNING: Removing unreachable block (ram,0x000107806978) */
/* WARNING: Removing unreachable block (ram,0x00010780697c) */
/* WARNING: Removing unreachable block (ram,0x000107806910) */
/* WARNING: Removing unreachable block (ram,0x000107806914) */
/* WARNING: Removing unreachable block (ram,0x00010780691c) */
/* WARNING: Removing unreachable block (ram,0x000107806920) */
/* WARNING: Removing unreachable block (ram,0x000107806924) */
/* WARNING: Removing unreachable block (ram,0x00010780692c) */
/* WARNING: Removing unreachable block (ram,0x000107806930) */
/* WARNING: Removing unreachable block (ram,0x000107806934) */
/* WARNING: Removing unreachable block (ram,0x00010780685c) */
/* WARNING: Removing unreachable block (ram,0x000107806854) */
/* WARNING: Removing unreachable block (ram,0x00010780684c) */
/* WARNING: Removing unreachable block (ram,0x000107806984) */
/* WARNING: Removing unreachable block (ram,0x000107806bb0) */
/* WARNING: Removing unreachable block (ram,0x000107806bb4) */
/* WARNING: Removing unreachable block (ram,0x000107806bbc) */
/* WARNING: Removing unreachable block (ram,0x000107806bc0) */
/* WARNING: Removing unreachable block (ram,0x000107806be4) */
/* WARNING: Removing unreachable block (ram,0x000107806bc8) */
/* WARNING: Removing unreachable block (ram,0x000107806bd0) */
/* WARNING: Removing unreachable block (ram,0x000107806bd4) */
/* WARNING: Removing unreachable block (ram,0x000107806bd8) */
/* WARNING: Removing unreachable block (ram,0x000107806bdc) */
/* WARNING: Removing unreachable block (ram,0x000107806be8) */
/* WARNING: Removing unreachable block (ram,0x000107806bf0) */
/* WARNING: Removing unreachable block (ram,0x000107806c64) */
/* WARNING: Removing unreachable block (ram,0x000107806bf8) */
/* WARNING: Removing unreachable block (ram,0x000107806c00) */
/* WARNING: Removing unreachable block (ram,0x000107806c10) */
/* WARNING: Removing unreachable block (ram,0x000107806c14) */
/* WARNING: Removing unreachable block (ram,0x000107806c18) */
/* WARNING: Removing unreachable block (ram,0x000107806c2c) */
/* WARNING: Removing unreachable block (ram,0x000107806c34) */
/* WARNING: Removing unreachable block (ram,0x000107806c40) */
/* WARNING: Removing unreachable block (ram,0x000107806c44) */
/* WARNING: Removing unreachable block (ram,0x000107806c48) */
/* WARNING: Removing unreachable block (ram,0x000107806c70) */

long FUN_10780671c(long param_1,long param_2,ulong *param_3)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long lVar5;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  long extraout_x9_01;
  long lVar8;
  ulong *extraout_x10;
  long extraout_x10_00;
  ulong *puVar9;
  ulong extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x12;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uStack_18;
  
  func_0x000107808a58();
  func_0x000107809938();
  if ((in_NG == in_OV) && (func_0x000107808d30(), in_NG == in_OV)) {
    func_0x000107808ae8();
    uVar7 = extraout_x9;
    puVar9 = extraout_x10;
    if ((in_NG != in_OV) &&
       (*(float *)((long)extraout_x10 + 4) < *(float *)((long)extraout_x10 + 0x1c))) {
      puVar9 = extraout_x10 + 3;
      uVar7 = extraout_x11;
    }
    fVar13 = *(float *)((long)puVar9 + 4);
    fVar11 = *(float *)((long)param_3 + 4);
    uVar12 = (ulong)(uint)fVar11;
    in_CY = fVar11 <= fVar13;
    in_ZR = fVar13 == fVar11;
    if (fVar11 <= fVar13) {
      uVar14 = (undefined4)*param_3;
      uVar17 = param_3[2];
      uVar15 = param_3[1];
      puVar4 = param_3;
      uVar6 = extraout_x8;
      do {
        param_3 = puVar9;
        fVar11 = (float)uVar12;
        uVar18 = param_3[1];
        uVar16 = *param_3;
        puVar4[2] = param_3[2];
        puVar4[1] = uVar18;
        *puVar4 = uVar16;
        in_CY = uVar7 <= uVar6;
        in_ZR = uVar6 == uVar7;
        if ((long)uVar6 < (long)uVar7) break;
        func_0x00010780966c();
        fVar11 = (float)uVar12;
        puVar9 = (ulong *)(param_1 + extraout_x10_00 * extraout_x11_00);
        uVar7 = extraout_x9_00;
        if (((long)(extraout_x12 + 2U) < param_2) &&
           (uVar7 = extraout_x9_00, *(float *)((long)puVar9 + 4) < *(float *)((long)puVar9 + 0x1c)))
        {
          puVar9 = puVar9 + 3;
          uVar7 = extraout_x12 + 2U;
        }
        fVar13 = *(float *)((long)puVar9 + 4);
        in_CY = fVar11 <= fVar13;
        in_ZR = fVar13 == fVar11;
        puVar4 = param_3;
        uVar6 = extraout_x8_00;
      } while (fVar11 <= fVar13);
      *(undefined4 *)param_3 = uVar14;
      *(float *)((long)param_3 + 4) = fVar11;
      param_3[2] = uVar17;
      param_3[1] = uVar15;
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107806a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107806a8c + (ulong)(byte)(&UNK_10dea6200)[unaff_x26] * 4))();
    return param_1;
  }
  bVar1 = 0x23e < extraout_x8_02;
  if ((long)extraout_x8_02 < 0x240) {
    uVar2 = unaff_x20 - unaff_x19 < 0;
    uVar3 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar3) {
        while (func_0x000107809f1c(), !(bool)uVar3) {
          func_0x000107809768(*(undefined4 *)(unaff_x20 + 0x24));
          if ((bool)uVar2) {
            func_0x000107809f08();
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar2);
            func_0x0001078099ec();
          }
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar3) {
      lVar5 = 0;
      while( true ) {
        lVar8 = unaff_x20 + 0x18;
        uVar3 = 1;
        if (lVar8 == unaff_x19) break;
        uVar3 = *(float *)(unaff_x20 + 0x24) < *(float *)(unaff_x20 + 0xc);
        if ((bool)uVar3) {
          func_0x00010780a064(lVar5);
          do {
            uVar2 = uVar3;
            func_0x000107809d04();
            if (extraout_x11_01 == 0) break;
            func_0x000107809d1c();
            uVar3 = 1;
          } while ((bool)uVar2);
          func_0x0001078099ec();
          lVar5 = extraout_x8_03;
          lVar8 = extraout_x9_01;
        }
        lVar5 = lVar5 + 0x18;
        unaff_x20 = lVar8;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar1) {
        func_0x000107808e08();
        puVar10 = &UNK_10780684c;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar10 = &UNK_107806878;
      }
      goto code_r0x000107806cc0;
    }
    uVar3 = unaff_x20 == unaff_x19;
    if (!(bool)uVar3) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107806f3c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8_01);
  if ((bool)uVar3) {
    return param_1;
  }
  puVar10 = &UNK_107806cc0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107806cc0:
  fVar11 = *(float *)(param_2 + 0xc);
  uVar7 = (ulong)(uint)fVar11;
  uVar12 = 0;
  if (*(float *)(param_1 + 0xc) <= fVar11) {
    if (fVar11 <= *(float *)((long)unaff_x21 + 0xc)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar12;
    *unaff_x21 = uVar7;
    unaff_x21[2] = extraout_x8_05;
    if (*(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar11 <= *(float *)((long)unaff_x21 + 0xc)) {
      func_0x000107808e40();
      uVar7 = (ulong)(uint)*(float *)((long)unaff_x21 + 0xc);
      uVar12 = 0;
      if (*(float *)(param_2 + 0xc) <= *(float *)((long)unaff_x21 + 0xc)) {
        return 1;
      }
      func_0x000107809398(puVar10);
      uVar6 = extraout_x8_06;
    }
    else {
      func_0x000107809bf8();
      uVar6 = extraout_x8_04;
    }
    unaff_x21[1] = uVar12;
    *unaff_x21 = uVar7;
    unaff_x21[2] = uVar6;
  }
  return 1;
}



/* Entry: 107807154; end: 1078071b7;  */

/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */

double * FUN_107807154(undefined8 param_1,double *param_2,double *param_3,undefined8 *param_4,
                      long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  double *pdVar9;
  undefined *puVar10;
  double *pdVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double *pdVar12;
  undefined8 *extraout_x8_01;
  ulong uVar13;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  double *pdVar14;
  long lVar15;
  double dVar16;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  double *pdVar17;
  long extraout_x11;
  double *pdVar18;
  ulong uVar19;
  double *pdVar20;
  long unaff_x19;
  double *unaff_x20;
  long lVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 in_register_00005008;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double unaff_d15;
  undefined1 auStack_688 [552];
  undefined1 auStack_460 [296];
  undefined *puStack_338;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  long lStack_2d0;
  double adStack_2c8 [12];
  double adStack_268 [56];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  pdVar11 = param_2 + 1;
  uVar4 = *(uint *)param_2;
  uVar7 = (uint)((int)uVar4 >> 0x1f) <= uVar4;
  uVar8 = uVar4 == (int)uVar4 >> 0x1f;
  if (!(bool)uVar8) {
    if ((int)uVar4 < 0) {
      pdVar11 = (double *)*pdVar11;
    }
    func_0x0001078087f8();
    uStack_48 = extraout_x8;
    func_0x00010780936c();
    func_0x000107809ec0();
    puStack_60 = *(undefined1 **)(unaff_x19 + 0x58);
    uStack_70 = param_1;
    uStack_68 = in_register_00005008;
    func_0x0001078099b8();
    FUN_107807154();
    *(undefined8 *)(unaff_x19 + 0x50) = uStack_68;
    *(undefined8 *)(unaff_x19 + 0x48) = uStack_70;
    uVar23 = uStack_70;
    func_0x000107809f98(puStack_60);
    if (((bool)uVar8) && (func_0x000107809acc(), (bool)uVar7)) {
      param_4 = *(undefined8 **)(unaff_x19 + 0x48);
      if (param_4 == (undefined8 *)0x0) {
        uStack_70 = 0;
        param_5 = *(long *)(unaff_x19 + 0x60);
        param_4 = &uStack_80;
        pdVar11 = unaff_x20;
        func_0x000107803f88(&uStack_70);
        lVar21 = *(long *)(unaff_x19 + 0x60);
        dStack_90 = (double)puStack_58;
        lStack_88 = lVar21;
        if (*(long *)(unaff_x19 + 0x48) == 0) {
          func_0x000107803784();
          uStack_98 = *(undefined8 *)(unaff_x19 + 0x60);
          lStack_a0 = lVar21;
          func_0x0001077ffa30();
          func_0x000107809574(*(undefined8 *)(unaff_x19 + 0x38));
          *(undefined8 *)(extraout_x10_00 + 0x10) = uStack_78;
          *(undefined8 *)(extraout_x10_00 + 8) = uStack_80;
          func_0x000107809bcc();
          func_0x0001077ffa30(lVar21);
          func_0x000107809b7c();
          *(undefined **)(extraout_x9 + 0x18) = puStack_58;
          func_0x000107809bbc();
          **(long **)(unaff_x19 + 0x38) = lVar21;
          **(long **)(unaff_x19 + 0x40) = **(long **)(unaff_x19 + 0x40) + 1;
          lStack_a0 = 0;
          func_0x0001078037b8(&lStack_a0);
          uVar23 = uStack_68;
        }
        else {
          func_0x000107809bac();
          func_0x00010780a09c(uStack_80);
          *(undefined1 **)(extraout_x10 + 0x10) = puStack_60;
          *(undefined8 *)(extraout_x10 + 8) = uStack_68;
          func_0x000107809b1c();
          uVar23 = uStack_68;
        }
        dStack_90 = 0.0;
        param_3 = &dStack_90;
        func_0x0001078037b8();
      }
      else {
        func_0x0001078099d4();
      }
    }
    if ((*(long *)(unaff_x19 + 0x70) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
      func_0x000107809824();
      func_0x00010780a0b0();
    }
    func_0x0001078087c4(uStack_48);
    if ((bool)uVar8) {
      return param_3;
    }
    ___stack_chk_fail();
    pdVar9 = &dStack_90;
    func_0x0001078037b8();
    func_0x000107808f58();
    puVar10 = &UNK_107807380;
    func_0x00010780a21c();
    puStack_60 = &stack0xfffffffffffffff0;
    puStack_58 = puVar10;
    func_0x000107808a28();
    uStack_a8 = extraout_x8_00;
    func_0x0001078098ec(param_4 + param_5 * 3);
    lStack_2d0 = 0;
    pdVar12 = pdVar11 + 1;
    dVar16 = *pdVar11;
    if (((long)dVar16 * 3 & 0x1fffffffffffffffU) != 0) {
      do {
        uVar13 = (ulong)(uint)((*(float *)pdVar12 + *(float *)(pdVar12 + 1)) * (float)uVar23);
        func_0x0001078098cc();
        extraout_x9_00[-1] = uVar13;
        uVar28 = *extraout_x8_01;
        extraout_x9_00[1] = extraout_x8_01[1];
        *extraout_x9_00 = uVar28;
        extraout_x9_00[2] = extraout_x8_01[2];
        pdVar12 = (double *)(extraout_x8_01 + 3);
        lStack_2d0 = extraout_x11;
      } while (extraout_x10_01 != 0x18);
    }
    puStack_338 = &UNK_1078076e0;
    lVar21 = 1;
    do {
      func_0x000107809474();
      func_0x0001078076e4();
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
    pdVar12 = adStack_268 + 4;
    pdVar17 = adStack_268 + 5;
    lVar21 = (long)dVar16 * 0x20 + -0x80;
    dVar16 = adStack_2c8[1];
    dVar26 = adStack_2c8[2];
    dVar24 = adStack_2c8[3];
    for (; adStack_2c8[1] = dVar16, adStack_2c8[2] = dVar26, adStack_2c8[3] = dVar24, lVar21 != 0;
        lVar21 = lVar21 + -0x20) {
      dVar22 = pdVar17[-1];
      if (adStack_2c8[0] < dVar22) {
        pdVar17[-1] = adStack_2c8[0];
        adStack_2c8[0] = dVar22;
        adStack_2c8[3] = pdVar17[2];
        adStack_2c8[2] = pdVar17[1];
        adStack_2c8[1] = *pdVar17;
        pdVar17[1] = dVar26;
        *pdVar17 = dVar16;
        pdVar17[2] = dVar24;
        func_0x000107809474();
        func_0x0001078076e4();
      }
      pdVar17 = pdVar17 + 4;
      dVar16 = adStack_2c8[1];
      dVar26 = adStack_2c8[2];
      dVar24 = adStack_2c8[3];
    }
    uVar13 = 4;
    pdVar17 = pdVar12;
    do {
      dVar22 = adStack_2c8[3];
      dVar24 = adStack_2c8[2];
      dVar26 = adStack_2c8[1];
      dVar16 = adStack_2c8[0];
      if (uVar13 < 2) {
        lVar21 = 8;
        for (lVar15 = 0x10; bVar5 = lVar15 == 0x90, !bVar5; lVar15 = lVar15 + 0x20) {
          puVar2 = (undefined8 *)((long)unaff_x20 + lVar21);
          uVar23 = *(undefined8 *)((long)&lStack_2d0 + lVar15);
          puVar2[1] = *(undefined8 *)((long)adStack_2c8 + lVar15);
          *puVar2 = uVar23;
          puVar2[2] = *(undefined8 *)((long)adStack_2c8 + lVar15 + 8);
          lVar21 = lVar21 + 0x18;
        }
        *unaff_x20 = 1.97626258336499e-323;
        *param_3 = 0.0;
        dVar16 = 4.94065645841247e-324;
        lVar21 = 8;
        for (lVar15 = lStack_2d0 * 0x20 + -0x80; lVar15 != 0; lVar15 = lVar15 + -0x20) {
          pdVar17 = (double *)((long)param_3 + lVar21);
          dVar26 = pdVar12[1];
          pdVar17[1] = pdVar12[2];
          *pdVar17 = dVar26;
          pdVar17[2] = pdVar12[3];
          *param_3 = dVar16;
          pdVar12 = pdVar12 + 4;
          dVar16 = (double)((long)dVar16 + 1);
          lVar21 = lVar21 + 0x18;
        }
        func_0x0001078087c4(uStack_a8);
        if (bVar5) {
          return pdVar9;
        }
        ___stack_chk_fail();
        __Unwind_Resume();
        return (double *)(ulong)(*pdVar11 < *pdVar9);
      }
      uVar19 = 0;
      dStack_308 = adStack_2c8[2];
      dStack_310 = adStack_2c8[1];
      dStack_300 = adStack_2c8[3];
      pdVar18 = adStack_2c8;
      do {
        pdVar20 = pdVar18 + uVar19 * 4 + 4;
        uVar3 = uVar19 << 1 | 1;
        uVar1 = uVar19 * 2 + 2;
        if ((long)uVar1 < (long)uVar13) {
          dVar25 = pdVar18[uVar19 * 4 + 8];
          lVar21 = uVar19 * 4;
          pdVar14 = pdVar18 + uVar19 * 4 + 8;
          uVar19 = uVar1;
          if (pdVar18[lVar21 + 4] <= dVar25) {
            pdVar14 = pdVar20;
            uVar19 = uVar3;
            dVar25 = pdVar18[lVar21 + 4];
          }
        }
        else {
          pdVar14 = pdVar20;
          uVar19 = uVar3;
          dVar25 = *pdVar20;
        }
        *pdVar18 = dVar25;
        dVar27 = pdVar14[2];
        dVar25 = pdVar14[1];
        pdVar18[3] = pdVar14[3];
        pdVar18[2] = dVar27;
        pdVar18[1] = dVar25;
        pdVar18 = pdVar14;
      } while ((long)uVar19 <= (long)(uVar13 - 2 >> 1));
      if (pdVar14 == pdVar17 + -4) {
        *pdVar14 = dVar16;
        pdVar14[3] = dVar22;
        pdVar14[2] = dVar24;
        pdVar14[1] = dVar26;
      }
      else {
        *pdVar14 = pdVar17[-4];
        dVar27 = pdVar17[-2];
        dVar25 = pdVar17[-3];
        pdVar14[3] = pdVar17[-1];
        pdVar14[2] = dVar27;
        pdVar14[1] = dVar25;
        pdVar17[-4] = dVar16;
        pdVar17[-2] = dVar24;
        pdVar17[-3] = dVar26;
        pdVar17[-1] = dVar22;
        lVar21 = (long)pdVar14 + (0x20 - (long)adStack_2c8) >> 5;
        if (1 < lVar21) {
          uVar19 = lVar21 - 2U >> 1;
          pdVar18 = adStack_2c8 + uVar19 * 4;
          dVar26 = *pdVar18;
          dVar16 = *pdVar14;
          if (dVar16 < dVar26) {
            dStack_2e8 = pdVar14[2];
            dStack_2f0 = pdVar14[1];
            dStack_2e0 = pdVar14[3];
            do {
              pdVar20 = pdVar18;
              *pdVar14 = dVar26;
              dVar24 = pdVar20[2];
              dVar26 = pdVar20[1];
              pdVar14[3] = pdVar20[3];
              pdVar14[2] = dVar24;
              pdVar14[1] = dVar26;
              if (uVar19 == 0) break;
              uVar19 = uVar19 - 1 >> 1;
              pdVar18 = adStack_2c8 + uVar19 * 4;
              dVar26 = *pdVar18;
              pdVar14 = pdVar20;
            } while (dVar16 < dVar26);
            *pdVar20 = dVar16;
            pdVar20[2] = dStack_2e8;
            pdVar20[1] = dStack_2f0;
            pdVar20[3] = dStack_2e0;
          }
        }
      }
      uVar13 = uVar13 - 1;
      pdVar17 = pdVar17 + -4;
    } while( true );
  }
  if ((int)uVar4 < 0) {
    pdVar11 = (double *)*pdVar11;
  }
  param_3 = (double *)*param_3;
  dVar16 = *pdVar11;
  dVar22 = *param_3;
  dVar24 = param_3[3];
  dVar26 = param_3[2];
  pdVar11[(long)dVar16 * 4 + 2] = param_3[1];
  pdVar11[(long)dVar16 * 4 + 1] = dVar22;
  pdVar11[(long)dVar16 * 4 + 4] = dVar24;
  pdVar11[(long)dVar16 * 4 + 3] = dVar26;
  *pdVar11 = (double)((long)dVar16 + 1U);
  if ((long)dVar16 + 1U < 0x11) {
    return param_2;
  }
  func_0x000107809884();
  func_0x000107808a58();
  func_0x0001077ffe04();
  FUN_1077ffc80();
  pdVar9 = pdVar11 + 1;
  func_0x000107801344(auStack_460,pdVar9,pdVar9 + (long)*pdVar11 * 4);
  func_0x000107801344(auStack_688,pdVar9,pdVar9 + (long)*pdVar11 * 4);
  func_0x0001078090c4();
  if (adStack_268[6] != 0.0) {
    func_0x000107808c30();
    FUN_107801438();
  }
  func_0x000107808f7c(adStack_268[6]);
  dVar16 = unaff_d15;
  do {
    func_0x0001078090b8();
    func_0x000107808a04();
    func_0x0001078088cc();
    func_0x0001078087d8();
    if (dVar26 < dVar16) {
code_r0x0001078003ac:
      unaff_d15 = dVar22;
      dVar16 = dVar26;
    }
    else {
      bVar5 = false;
      bVar6 = true;
      if (dVar26 == dVar16) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(dVar22) && !NAN(unaff_d15)) {
          bVar5 = dVar22 == unaff_d15;
          bVar6 = unaff_d15 <= dVar22;
        }
      }
      if (!bVar6 || bVar5) goto code_r0x0001078003ac;
    }
    func_0x000107808730();
    func_0x00010780a04c();
  } while( true );
}



/* Entry: 107807aac; end: 107807adb;  */

void FUN_107807aac(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 107807e04; end: 107807e3b;  */

ulong FUN_107807e04(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,param_2);
  func_0x000100061c28((long)ppuVar1 + lVar2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 107808084; end: 107808097;  */

void FUN_107808084(void)

{
  func_0x0001078080a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078082f0; end: 10780833f;  */

long FUN_1078082f0(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107809f4c();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10780869c; end: 107808707;  */

undefined8 * FUN_10780869c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_1109dfc28;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001078091f4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  func_0x0001077ff7a8(param_1 + 4,param_2 + 3);
  return param_1;
}



/* Entry: 10780a80c; end: 10780aeef;  */

void FUN_10780a80c(long param_1,undefined8 *param_2,uint param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined1 extraout_w9;
  ulong uVar16;
  long lVar17;
  undefined **ppuVar18;
  int *piVar19;
  int *piVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined2 *unaff_x26;
  long lVar26;
  int *piVar27;
  undefined **ppuVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined **ppuStack_140;
  long lStack_120;
  int *piStack_118;
  int *piStack_110;
  int *piStack_108;
  undefined4 uStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puVar9;
  
  ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
  puVar8 = (undefined8 *)(param_4 + 0x980);
  func_0x00010724e2c8(puVar8,&ppuStack_f0);
  if ((int)puVar8 == 0) {
    uVar30 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x00010780dd14(param_1 + 0x20);
    puStack_b0 = &uStack_a8;
    uStack_a8 = 0;
    puStack_80 = &uStack_78;
    ppuStack_f0 = (undefined **)0x4000000040;
    uStack_e8 = (undefined **)((ulong)CONCAT31(uStack_e8._5_3_,extraout_w9) << 0x20);
    puVar22 = (undefined8 *)*param_2;
    uStack_a0 = uVar30;
    uStack_98 = uVar30;
    uStack_90 = uVar30;
    uStack_88 = uVar30;
    uStack_78 = uVar30;
    uStack_70 = uVar30;
    while (puVar22 != param_2 + 1) {
      ppuStack_f8 = (undefined **)puVar22[4];
      func_0x00010780dd9c();
      puVar23 = (undefined8 *)puVar22[5];
      puVar9 = puVar8;
      while (iVar7 = (int)puVar9, puVar23 != puVar22 + 6) {
        if ((*(char *)(puVar23 + 7) == '\x01') && (func_0x00010780dd88(), iVar7 != 0)) {
          pppuVar11 = &ppuStack_f0;
          func_0x0001074672e8(pppuVar11,0xffffffff,*(int *)(unaff_x26 + 4) + 2,
                              *(int *)(unaff_x26 + 6) + 2);
          func_0x00010780dd94();
          func_0x00010780dbc4(unaff_x26 + 4);
          piStack_118 = (int *)CONCAT26((short)((ulong)*(undefined8 *)((long)pppuVar11 + 4) >> 0x20)
                                        ,CONCAT24((short)*(undefined8 *)((long)pppuVar11 + 4),
                                                  CONCAT22((short)((ulong)*(undefined8 *)
                                                                           ((long)pppuVar11 + 0x14)
                                                                  >> 0x20),
                                                           (short)*(undefined8 *)
                                                                   ((long)pppuVar11 + 0x14))));
          piStack_108 = *(int **)(unaff_x26 + 0x14);
          piStack_110 = *(int **)(unaff_x26 + 0x10);
          uStack_100 = *(undefined4 *)(unaff_x26 + 0x18);
          FUN_10780d5b0(puVar8,*unaff_x26,&piStack_118);
        }
        func_0x00010002c7d4();
        puVar9 = puVar23;
      }
      func_0x00010002c7d4();
      puVar8 = puVar22;
    }
    func_0x0001074689d8(&ppuStack_f0);
    func_0x00010780dd94();
    func_0x000107468a64(&ppuStack_f0);
  }
  else {
    func_0x00010780dd14(param_1 + 0x20);
    ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffff00000000);
    lVar25 = param_4 + 0x100;
    func_0x0001072b86c8(lVar25,&ppuStack_f0);
    ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
    param_4 = param_4 + 0x140;
    func_0x00010724e2c8(param_4,&ppuStack_f0);
    piVar27 = (int *)0x0;
    piVar19 = (int *)0x0;
    if ((int)param_4 == 0) {
      param_3 = (uint)lVar25;
    }
    ppuVar15 = (undefined **)(ulong)param_3;
    piStack_118 = (int *)0x0;
    piStack_110 = (int *)0x0;
    piStack_108 = (int *)0x0;
    puVar8 = (undefined8 *)*param_2;
    while (puVar8 != param_2 + 1) {
      uVar30 = puVar8[4];
      puVar22 = (undefined8 *)puVar8[5];
      puVar9 = puVar8;
      while (iVar7 = (int)puVar9, puVar22 != puVar8 + 6) {
        piVar20 = piVar19;
        if ((*(char *)(puVar22 + 7) == '\x01') && (func_0x00010780dd88(), iVar7 != 0)) {
          iVar7 = *(int *)(unaff_x26 + 4);
          iVar3 = *(int *)(unaff_x26 + 6);
          if (piVar27 < piStack_108) {
            piVar27[0] = -1;
            piVar27[1] = -1;
            piVar27[2] = iVar7 + 2;
            piVar27[3] = iVar3 + 2;
            *(undefined2 **)(piVar27 + 4) = unaff_x26;
            *(undefined8 *)(piVar27 + 6) = uVar30;
            piVar27 = piVar27 + 8;
            piStack_110 = piVar27;
          }
          else {
            lVar25 = (long)piVar27 - (long)piVar19;
            uVar1 = (lVar25 >> 5) + 1;
            if (uVar1 >> 0x3b != 0) {
              piStack_118 = piVar19;
              func_0x00010780af44();
LAB_10780ae64:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10780ae68);
              (*pcVar6)();
            }
            uVar16 = (long)piStack_108 - (long)piVar19 >> 4;
            if (uVar16 <= uVar1) {
              uVar16 = uVar1;
            }
            if (0x7fffffffffffffdf < (ulong)((long)piStack_108 - (long)piVar19)) {
              uVar16 = 0x7ffffffffffffff;
            }
            if (uVar16 >> 0x3b != 0) {
              piStack_118 = piVar19;
              func_0x000104bd35f4();
              goto LAB_10780ae64;
            }
            lVar10 = uVar16 << 5;
            __Znwm();
            puVar9 = (undefined8 *)(lVar10 + lVar25);
            *puVar9 = 0xffffffffffffffff;
            piVar2 = (int *)(lVar10 + uVar16 * 0x20);
            *(int *)(puVar9 + 1) = iVar7 + 2;
            *(int *)((long)puVar9 + 0xc) = iVar3 + 2;
            piVar27 = (int *)(puVar9 + 4);
            piVar20 = (int *)(puVar9 + (lVar25 >> 5) * -4);
            puVar9[2] = unaff_x26;
            puVar9[3] = uVar30;
            _memcpy(piVar20,piVar19,lVar25);
            piStack_110 = piVar27;
            piStack_108 = piVar2;
            if (piVar19 != (int *)0x0) {
              __ZdlPv(piVar19);
              piStack_110 = piVar27;
            }
          }
        }
        func_0x00010002c7d4();
        puVar9 = puVar22;
        piVar19 = piVar20;
      }
      piStack_118 = piVar19;
      func_0x00010002c7d4();
    }
    func_0x000107463460(&lStack_120,
                        ((long)piVar27 - (long)piVar19 >> 3) + ((long)piVar27 - (long)piVar19 >> 5))
    ;
    lVar10 = lStack_120;
    lVar25 = 0;
    for (; piVar19 != piVar27; piVar19 = piVar19 + 8) {
      if (piVar19[3] * piVar19[2] != 0) {
        *(int **)(lStack_120 + lVar25 * 8) = piVar19;
        lVar25 = lVar25 + 1;
      }
    }
    lVar21 = lVar25 * 8;
    lVar17 = 4;
    lVar26 = lVar21;
    do {
      if (lVar25 != 0) {
        _memmove(lStack_120 + lVar26,lVar10,lVar21);
      }
      lVar26 = lVar26 + lVar21;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if (lVar25 == 0) {
      lVar10 = 0;
    }
    else {
      func_0x00010780af58(lStack_120,lStack_120 + lVar21,LZCOUNT(lVar25) << 1 ^ 0x7e,1);
      lVar10 = lVar25 << 1;
      func_0x00010780b650(lStack_120 + lVar21,lStack_120 + lVar25 * 0x10,
                          LZCOUNT(lVar21 >> 3) << 1 ^ 0x7e,1);
    }
    if (lVar10 != lVar25 * 3) {
      func_0x00010780db4c(lStack_120 + lVar25 * 0x10,lStack_120 + lVar25 * 0x18);
      func_0x00010780bd84();
    }
    if (lVar25 * 3 != lVar25 * 4) {
      func_0x00010780db4c(lStack_120 + lVar25 * 0x18,lStack_120 + lVar25 * 0x20);
      func_0x00010780c540();
    }
    if (lVar25 != 0) {
      func_0x00010780db4c(lStack_120 + lVar25 * 0x20,lStack_120 + lVar25 * 0x28);
      FUN_10780cbdc();
    }
    puVar5 = PTR___tlv_bootstrap_11340d5b8;
    ppuVar24 = &PTR___tlv_bootstrap_11340d5b8;
    ppuVar12 = ppuVar24;
    ppuStack_f8 = (undefined **)CONCAT44(param_3,param_3);
    (*(code *)PTR___tlv_bootstrap_11340d5b8)();
    if (((ulong)*ppuVar12 & 1) == 0) {
      ppuStack_f0 = (undefined **)0x0;
      func_0x00010780dda8();
      func_0x0001074657e4();
      (*(code *)puVar5)();
      *(undefined1 *)ppuVar24 = 1;
      ppuVar12 = ppuVar24;
    }
    func_0x00010780dda8();
    lVar10 = 0;
    ppuVar24 = (undefined **)0x0;
    bVar29 = false;
    *(undefined4 *)(ppuVar12 + 4) = 0;
    ppuVar18 = (undefined **)0xffffffff;
    lVar26 = 5;
    ppuVar28 = ppuVar15;
    ppuStack_140 = ppuVar15;
    do {
      ppuStack_f0 = (undefined **)(lVar10 + lStack_120);
      uStack_e8 = ppuStack_f0 + lVar25;
      pppuVar11 = &ppuStack_f0;
      ppuVar13 = ppuVar12;
      func_0x00010746585c(ppuVar12,pppuVar11,(undefined **)CONCAT44(param_3,param_3),0xfffffffc);
      if ((int)pppuVar11 == 1) {
        if ((int)((ulong)ppuVar13 >> 0x20) * (int)ppuVar13 <= (int)ppuVar28 * (int)ppuStack_140) {
          bVar29 = true;
          ppuVar24 = ppuStack_f0;
          ppuVar15 = uStack_e8;
          ppuVar28 = ppuVar13;
          ppuStack_140 = (undefined **)((ulong)ppuVar13 >> 0x20);
          ppuStack_f8 = ppuVar13;
        }
      }
      else if ((int)pppuVar11 == 0) {
        if (bVar29) {
          bVar29 = true;
        }
        else if ((int)ppuVar18 < (int)ppuVar13) {
          bVar29 = true;
          ppuVar18 = ppuVar13;
          ppuVar24 = ppuStack_f0;
          ppuVar15 = uStack_e8;
        }
        else {
          bVar29 = false;
        }
      }
      lVar10 = lVar10 + lVar21;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    func_0x0001074657c4(ppuVar12,&ppuStack_f8);
    for (; ppuVar24 != ppuVar15; ppuVar24 = ppuVar24 + 1) {
      puVar8 = (undefined8 *)*ppuVar24;
      func_0x000107465e10(&ppuStack_f0,ppuVar12,puVar8[1]);
      if ((char)uStack_e0 == '\x01') {
        puVar8[1] = uStack_e8;
        *puVar8 = ppuStack_f0;
      }
      else {
        *puVar8 = 0xffffffffffffffff;
      }
    }
    plVar14 = &lStack_120;
    func_0x00010746609c(plVar14);
    func_0x00010780dd94();
    piVar19 = piStack_110;
    for (piVar27 = piStack_118; piVar27 != piVar19; piVar27 = piVar27 + 8) {
      if ((*piVar27 != -1) && (piVar27[1] != -1)) {
        puVar4 = *(undefined2 **)(piVar27 + 4);
        ppuStack_f8 = *(undefined ***)(piVar27 + 6);
        func_0x00010780dd9c();
        func_0x00010780dbc4(puVar4 + 4);
        ppuStack_f0 = (undefined **)
                      CONCAT26((short)((ulong)*(undefined8 *)(piVar27 + 2) >> 0x20),
                               CONCAT24((short)*(undefined8 *)(piVar27 + 2),
                                        CONCAT22((short)((ulong)*(undefined8 *)piVar27 >> 0x20),
                                                 (short)*(undefined8 *)piVar27)));
        uStack_e0 = *(undefined8 *)(puVar4 + 0x14);
        uStack_e8 = *(undefined ***)(puVar4 + 0x10);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(puVar4 + 0x18));
        FUN_10780d5b0(plVar14,*puVar4,&ppuStack_f0);
      }
    }
    func_0x00010780af18(&piStack_118);
  }
  return;
}



/* Entry: 10780b568; end: 10780b64f;  */

void FUN_10780b568(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x00010780d854();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea65f6)[extraout_x8] * 4 + 0x10780b59c))(1);
    return;
  }
  func_0x00010780d8fc();
  func_0x00010780b434();
  func_0x00010780da80();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x00010780da70();
    iVar1 = *(int *)(extraout_x11_00 + 0xc) * *(int *)(extraout_x11_00 + 8);
    iVar2 = *(int *)(extraout_x13 + 0xc) * *(int *)(extraout_x13 + 8);
    bVar3 = iVar1 == iVar2;
    if (iVar2 < iVar1) {
      do {
        func_0x00010780dca8();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x00010780dbe4();
        bVar3 = extraout_w12 == extraout_w16 * extraout_w15;
      } while (!bVar3 && extraout_w16 * extraout_w15 <= extraout_w12);
      func_0x00010780da40();
      if (bVar3) {
        func_0x00010780da10();
        return;
      }
    }
    func_0x00010780da20();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 10780c388; end: 10780c3db;  */

void FUN_10780c388(void)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  
  func_0x00010780d818();
  func_0x00010780c2e4();
  func_0x00010780db1c();
  func_0x00010780d784();
  if (extraout_w11 < extraout_w10) {
    func_0x00010780d804();
    func_0x00010780d784();
    if (extraout_w11_00 < extraout_w10_00) {
      func_0x00010780d7f0();
      func_0x00010780d784();
      if (extraout_w11_01 < extraout_w10_01) {
        func_0x00010780db28();
      }
    }
  }
  return;
}



/* Entry: 10780cbdc; end: 10780d06f;  */

void FUN_10780cbdc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar13;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar14;
  long *extraout_x8_10;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *plVar15;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long lVar16;
  undefined8 extraout_x10_07;
  long extraout_x10_08;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *plVar17;
  long extraout_x11_02;
  undefined8 extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 uVar18;
  int extraout_w12;
  long extraout_x12;
  long lVar19;
  long extraout_x12_00;
  long extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  ulong extraout_x13_02;
  long lVar20;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar21;
  undefined8 *extraout_x15_00;
  undefined8 *extraout_x15_01;
  undefined8 *puVar22;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x00010780dd5c();
  func_0x00010780d974();
LAB_10780cbf4:
  func_0x00010780d960();
LAB_10780cbf8:
  while( true ) {
    func_0x00010780d94c();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780cddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dea6620)[extraout_x8] * 4 + 0x10780cde0))();
      return;
    }
    bVar7 = 0x16 < extraout_x8;
    cVar9 = SBORROW8(extraout_x8,0x17);
    cVar10 = (long)(extraout_x8 - 0x17) < 0;
    uVar11 = extraout_x8 == 0x17;
    if ((long)extraout_x8 < 0x18) {
      uVar11 = unaff_x20 == unaff_x19;
      if ((unaff_x25 & 1) == 0) {
        uVar8 = 0;
        if ((bool)uVar11) {
          return;
        }
        while (func_0x00010780dc48(), !(bool)uVar8) {
          lVar14 = *unaff_x20;
          lVar13 = unaff_x20[1];
          iVar5 = *(int *)(lVar13 + 0xc);
          uVar8 = iVar5 == *(int *)(lVar14 + 0xc);
          plVar15 = extraout_x8_10;
          if (*(int *)(lVar14 + 0xc) < iVar5) {
            do {
              *plVar15 = lVar14;
              lVar14 = plVar15[-2];
              plVar15 = plVar15 + -1;
              uVar8 = iVar5 == *(int *)(lVar14 + 0xc);
            } while (!(bool)uVar8 && *(int *)(lVar14 + 0xc) <= iVar5);
            *plVar15 = lVar13;
          }
          func_0x00010780dce4();
        }
        return;
      }
      if ((bool)uVar11) {
        return;
      }
      func_0x00010780dd50();
      goto LAB_10780ce4c;
    }
    if (unaff_x22 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x00010780dab0();
      lVar14 = extraout_x8_01;
      lVar13 = extraout_x9;
      lVar16 = extraout_x10_05;
      lVar23 = extraout_x9;
      goto joined_r0x00010780ceac;
    }
    func_0x00010780daf0();
    if (bVar7) {
      func_0x00010780da00();
      func_0x00010780d070();
      func_0x00010780d938();
      func_0x00010780d070();
      func_0x00010780dae0();
      func_0x00010780d070();
      func_0x00010780dad0();
      func_0x00010780d070();
      func_0x00010780d924();
    }
    else {
      func_0x00010780dac0();
      func_0x00010780d070();
    }
    func_0x00010780dcf0();
    if ((unaff_x25 & 1) != 0) break;
    uVar3 = *(uint *)(unaff_x20[-1] + 0xc);
    uVar4 = *(uint *)(extraout_x8_00 + 0xc);
    cVar9 = SBORROW4(uVar3,uVar4);
    cVar10 = (int)(uVar3 - uVar4) < 0;
    uVar11 = uVar3 == uVar4;
    if ((int)uVar4 < (int)uVar3) break;
    uVar3 = *(uint *)(*unaff_x21 + 0xc);
    uVar8 = uVar3 <= uVar4;
    cVar9 = SBORROW4(uVar4,uVar3);
    cVar10 = (int)(uVar4 - uVar3) < 0;
    uVar11 = uVar4 == uVar3;
    plVar15 = unaff_x20;
    if ((int)uVar3 < (int)uVar4) {
      do {
        unaff_x26 = plVar15 + 1;
        uVar3 = *(uint *)(*unaff_x26 + 0xc);
        uVar8 = uVar3 <= uVar4;
        cVar9 = SBORROW4(uVar4,uVar3);
        cVar10 = (int)(uVar4 - uVar3) < 0;
        uVar11 = uVar4 == uVar3;
        plVar15 = unaff_x26;
      } while ((int)uVar4 <= (int)uVar3);
    }
    else {
      do {
        func_0x00010780dcb4();
        if ((bool)uVar8) break;
        func_0x00010780dc60();
        func_0x00010780ddb4();
      } while ((bool)uVar11 || cVar10 != cVar9);
    }
    func_0x00010780dc54();
    plVar15 = extraout_x10_00;
    if (!(bool)uVar8) {
      do {
        func_0x00010780ddb4();
        plVar15 = extraout_x10_01;
      } while (!(bool)uVar11 && cVar10 == cVar9);
    }
    while( true ) {
      in_CY = plVar15 <= unaff_x26;
      cVar9 = SBORROW8((long)unaff_x26,(long)plVar15);
      cVar10 = (long)unaff_x26 - (long)plVar15 < 0;
      in_ZR = unaff_x26 == plVar15;
      if ((bool)in_CY) break;
      func_0x00010780d884();
      do {
        unaff_x26 = unaff_x26 + 1;
        func_0x00010780ddb4();
      } while ((bool)in_ZR || cVar10 != cVar9);
      do {
        func_0x00010780ddb4();
        plVar15 = extraout_x10_02;
      } while (!(bool)in_ZR && cVar10 == cVar9);
    }
    func_0x00010780dc3c();
    if (!(bool)in_ZR) {
      func_0x00010780dc30();
    }
    func_0x00010780dc78();
  }
  do {
    func_0x00010780ddcc();
  } while (!(bool)uVar11 && cVar10 == cVar9);
  func_0x00010780daa0();
  plVar15 = unaff_x19;
  plVar12 = extraout_x11;
  if ((bool)uVar11) {
    do {
      if (plVar15 <= extraout_x10) break;
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) <= extraout_w9);
  }
  else {
    do {
      plVar12 = plVar12 + -1;
    } while (*(int *)(*plVar12 + 0xc) <= extraout_w9);
  }
  func_0x00010780dcc0();
  plVar15 = extraout_x13;
  while( true ) {
    in_CY = plVar15 <= unaff_x26;
    in_ZR = unaff_x26 == plVar15;
    if ((bool)in_CY) break;
    func_0x00010780da60();
    do {
      unaff_x26 = unaff_x26 + 1;
      plVar15 = extraout_x13_00;
    } while (extraout_w9_00 < *(int *)(*unaff_x26 + 0xc));
    do {
      plVar15 = plVar15 + -1;
    } while (*(int *)(*plVar15 + 0xc) <= extraout_w9_00);
  }
  func_0x00010780dd2c();
  if (!(bool)in_ZR) {
    func_0x00010780dc90();
  }
  func_0x00010780dc84();
  if ((bool)in_CY) {
    func_0x00010780db10();
    func_0x00010780d194();
    func_0x00010780da30();
    func_0x00010780d194();
    if ((int)param_1 != 0) goto LAB_10780cdbc;
    if ((unaff_x28 & 1) != 0) goto LAB_10780cbf8;
  }
  func_0x00010780d8c0();
  FUN_10780cbdc();
  unaff_x25 = 0;
  goto LAB_10780cbf8;
LAB_10780ce4c:
  func_0x00010780dd44();
  if ((bool)uVar11) {
    return;
  }
  iVar5 = *(int *)(extraout_x11_00[1] + 0xc);
  iVar6 = *(int *)(*extraout_x11_00 + 0xc);
  cVar9 = SBORROW4(iVar5,iVar6);
  cVar10 = iVar5 - iVar6 < 0;
  uVar11 = iVar5 == iVar6;
  if (iVar6 < iVar5) {
    do {
      func_0x00010780dd08();
      lVar14 = extraout_x10_03;
      plVar15 = unaff_x20;
      if ((bool)uVar11) goto LAB_10780ce94;
      func_0x00010780ddd8();
    } while (!(bool)uVar11 && cVar10 == cVar9);
    lVar14 = extraout_x10_04;
    plVar15 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_10780ce94:
    *plVar15 = lVar14;
  }
  func_0x00010780dcd8();
  goto LAB_10780ce4c;
joined_r0x00010780ceac:
  if (lVar23 < 0) {
    do {
      if (lVar14 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar13 = extraout_x8_03;
      lVar14 = extraout_x12_00;
      lVar16 = extraout_x14;
      do {
        lVar14 = lVar14 + lVar16 * 8;
        lVar16 = lVar16 * 2 + 2;
        cVar9 = SBORROW8(lVar16,lVar13);
        cVar10 = lVar16 - lVar13 < 0;
        bVar7 = lVar16 == lVar13;
        if (lVar16 < lVar13) {
          iVar5 = *(int *)(*(long *)(lVar14 + 8) + 0xc);
          iVar6 = *(int *)(*(long *)(lVar14 + 0x10) + 0xc);
          cVar9 = SBORROW4(iVar5,iVar6);
          cVar10 = iVar5 - iVar6 < 0;
          bVar7 = iVar5 == iVar6;
        }
        func_0x00010780da50();
        lVar13 = extraout_x8_04;
        lVar14 = extraout_x12_01;
        lVar16 = extraout_x14_00;
      } while (bVar7 || cVar10 != cVar9);
      func_0x00010780dc9c();
      if (bVar7) {
        *extraout_x9_01 = extraout_x10_07;
        lVar14 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar14 = extraout_x8_06;
        if ((cVar10 == cVar9) &&
           (func_0x00010780d8d4(), lVar14 = extraout_x8_07,
           *(int *)(extraout_x11_02 + 0xc) < *(int *)(extraout_x13_03 + 0xc))) {
          do {
            func_0x00010780dc6c();
            lVar14 = extraout_x8_08;
            uVar18 = extraout_x11_03;
            puVar22 = extraout_x15_00;
            if (extraout_x10_08 == 0) break;
            func_0x00010780d898();
            lVar14 = extraout_x8_09;
            uVar18 = extraout_x11_04;
            puVar22 = extraout_x15_01;
          } while (extraout_w12 < *(int *)(extraout_x13_04 + 0xc));
          *puVar22 = uVar18;
        }
      }
      lVar14 = lVar14 + -1;
    } while( true );
  }
  cVar9 = SBORROW8(lVar13,lVar16);
  cVar10 = lVar13 - lVar16 < 0;
  if (lVar16 <= lVar13) {
    func_0x00010780db90();
    plVar15 = extraout_x11_01;
    lVar23 = extraout_x12;
    uVar21 = extraout_x15;
    if (cVar10 != cVar9) {
      plVar15 = extraout_x11_01 + 1;
      lVar23 = *plVar15;
      uVar21 = extraout_x13_02;
      if (*(int *)(extraout_x12 + 0xc) <= *(int *)(lVar23 + 0xc)) {
        plVar15 = extraout_x11_01;
        lVar23 = extraout_x12;
        uVar21 = extraout_x15;
      }
    }
    lVar20 = unaff_x20[extraout_x10_06];
    iVar5 = *(int *)(lVar20 + 0xc);
    plVar12 = unaff_x20 + extraout_x10_06;
    lVar14 = extraout_x8_02;
    lVar13 = extraout_x9_00;
    lVar16 = extraout_x10_06;
    if (*(int *)(lVar23 + 0xc) <= iVar5) {
      do {
        plVar17 = plVar15;
        *plVar12 = lVar23;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar2 = uVar21 << 1 | 1;
        plVar12 = unaff_x20 + uVar2;
        uVar1 = uVar21 * 2 + 2;
        lVar19 = *plVar12;
        plVar15 = plVar12;
        lVar23 = lVar19;
        uVar21 = uVar2;
        if ((long)uVar1 < extraout_x8_02) {
          lVar23 = plVar12[1];
          plVar15 = plVar12 + 1;
          uVar21 = uVar1;
          if (*(int *)(lVar19 + 0xc) <= *(int *)(lVar23 + 0xc)) {
            plVar15 = plVar12;
            lVar23 = lVar19;
            uVar21 = uVar2;
          }
        }
        plVar12 = plVar17;
      } while (*(int *)(lVar23 + 0xc) <= iVar5);
      *plVar17 = lVar20;
    }
  }
  lVar16 = lVar16 + -1;
  lVar23 = lVar16;
  goto joined_r0x00010780ceac;
LAB_10780cdbc:
  unaff_x19 = unaff_x27;
  if ((unaff_x28 & 1) != 0) {
    return;
  }
  goto LAB_10780cbf4;
}



/* Entry: 10780d5b0; end: 10780d66f;  */

void FUN_10780d5b0(long *param_1,ushort param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar3 = param_1 + 1;
  plVar2 = (long *)*plVar3;
  do {
    plVar4 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10780d618:
      puVar1 = (undefined8 *)0x40;
      __Znwm();
      *(ushort *)((long)puVar1 + 0x1c) = param_2;
      uVar5 = *param_3;
      puVar1[5] = param_3[1];
      puVar1[4] = uVar5;
      uVar5 = *(undefined8 *)((long)param_3 + 0xc);
      *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)((long)param_3 + 0x14);
      *(undefined8 *)((long)puVar1 + 0x2c) = uVar5;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = plVar3;
      *plVar4 = (long)puVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],puVar1);
      param_1[2] = param_1[2] + 1;
      return;
    }
    while (plVar3 = plVar2, *(ushort *)((long)plVar3 + 0x1c) <= param_2) {
      if (param_2 <= *(ushort *)((long)plVar3 + 0x1c)) {
        return;
      }
      plVar2 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 1;
        goto LAB_10780d618;
      }
    }
    plVar2 = (long *)*plVar3;
  } while( true );
}



/* Entry: 10780ea08; end: 10780eb07;  */

long * FUN_10780ea08(long *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = param_1 + 1;
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    uVar1 = *param_2;
    plVar4 = (long *)*plVar5;
    do {
      while( true ) {
        plVar5 = plVar4;
        uVar2 = *(ushort *)(plVar5 + 4);
        bVar3 = param_2[1] < *(ushort *)((long)plVar5 + 0x22);
        if (uVar1 != uVar2) {
          bVar3 = uVar1 < uVar2;
        }
        if (!bVar3) break;
        plVar4 = (long *)*plVar5;
        plVar6 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10780eaa4;
      }
      bVar3 = *(ushort *)((long)plVar5 + 0x22) < param_2[1];
      if (uVar1 != uVar2) {
        bVar3 = uVar2 < uVar1;
      }
      if (!bVar3) goto LAB_10780eafc;
      plVar4 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar6 = plVar5 + 1;
  }
LAB_10780eaa4:
  plVar4 = (long *)0x58;
  __Znwm();
  *(undefined4 *)(plVar4 + 4) = *(undefined4 *)param_2;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = (long)&UNK_10e52b660;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)plVar5;
  *plVar6 = (long)plVar4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],plVar4);
  func_0x000107812318();
  plVar5 = plVar4;
LAB_10780eafc:
  return plVar5 + 5;
}



/* Entry: 10780f3b0; end: 10780f40f;  */

void FUN_10780f3b0(long param_1)

{
  func_0x000107810f74();
  if (param_1 != 0) {
    func_0x0001078125d4();
    func_0x000107810fa0();
  }
  return;
}



/* Entry: 10780f740; end: 10780f7fb;  */

long FUN_10780f740(long param_1)

{
  func_0x0001078100a8(param_1 + 0x28);
  func_0x00010780f838(param_1 + 8);
  return param_1;
}



/* Entry: 10780fbb8; end: 10780fbbb;  */

void FUN_10780fbb8(undefined8 *param_1)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 10780fd10; end: 10780fdcf;  */

void FUN_10780fd10(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  func_0x00010780fcd8();
  func_0x0001078124a0();
  func_0x0001078125c0();
  for (; lVar6 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(lVar2 + unaff_x24)) {
      uVar1 = (long)&PTR_LOOP_110c8acd8 + (ulong)*(ushort *)(lVar3 + unaff_x24 * 2);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = unaff_x27;
      func_0x00010781220c();
      func_0x000107812174((SUB164(auVar4 * auVar5,8) ^ (int)uVar1 * (int)unaff_x27) & 0x7f);
      *(undefined2 *)(unaff_x25 + (long)param_1 * 2) = *(undefined2 *)(lVar3 + unaff_x24 * 2);
    }
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2 + -8);
    return;
  }
  return;
}



/* Entry: 10780ffb0; end: 10780ffd7;  */

long FUN_10780ffb0(long param_1)

{
  func_0x00010780ffd8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107810200; end: 107810283;  */

void FUN_107810200(undefined8 param_1,undefined *param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  long extraout_x9;
  
  func_0x0001078121d4();
  func_0x000100061de0();
  func_0x000107812464();
  if ((extraout_x9 == 0) && (func_0x000107812494(), !(bool)in_ZR)) {
    func_0x000107812458();
    if (((bool)in_CY) && (func_0x0001078121f8(), (bool)in_CY)) {
      param_2 = &UNK_1109dfd28;
      func_0x000107812398();
    }
    else {
      func_0x0001078122ac();
      func_0x00010780fbf0();
    }
    func_0x00010781220c();
  }
  func_0x00010781212c();
  func_0x0001078121c0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107812518(&PTR_LOOP_110c8acd8,param_2 + 8);
  return;
}



/* Entry: 1078105d4; end: 10781064f;  */

void FUN_1078105d4(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x000107812290();
  func_0x000107367a70();
  func_0x0001078124a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      func_0x00010786e8ec();
      func_0x0001078121e8();
      func_0x000107812174(unaff_w21 & 0x7f);
      func_0x000107810650(unaff_x25 + lVar1 * 0x40,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x40;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107810874; end: 1078108a3;  */

undefined8 * FUN_107810874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  if (param_2[2] != 0) {
    func_0x0001000df548();
  }
  return param_2 + 1;
}



/* Entry: 107810b68; end: 107810ba7;  */

void FUN_107810b68(void)

{
  func_0x0001078122d4();
  func_0x0001078123c4(&PTR_DAT_1109dfdd8);
  func_0x00010780f904();
  return;
}



/* Entry: 107810f28; end: 107810f33;  */

undefined ** FUN_107810f28(void)

{
  return &PTR_DAT_1109dfea8;
}



/* Entry: 107811110; end: 107811133;  */

undefined1  [16] FUN_107811110(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107811134(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1078112d0; end: 107811307;  */

undefined8 FUN_1078112d0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  func_0x000107811954();
  return uVar1;
}



/* Entry: 1078119d0; end: 107811a1b;  */

long * FUN_1078119d0(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (ulong)plVar3[4] <= *param_3) {
        if (*param_3 <= (ulong)plVar3[4]) goto LAB_107811a18;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_107811a18;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_107811a18:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 107811bb0; end: 107811beb;  */

void FUN_107811bb0(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001078123ec();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 0x40;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107811e80; end: 107811e87;  */

void FUN_107811e80(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010726b09c();
  }
  return;
}



/* Entry: 107812088; end: 10781208f;  */

void FUN_107812088(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 107812ae4; end: 107812b33;  */

long * FUN_107812ae4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x38;
    func_0x0001073c7fd0(lVar1 + -0x30);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107813144; end: 107813203;  */

long FUN_107813144(long *param_1,undefined2 *param_2,double *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined2 *puStack_50;
  undefined2 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  func_0x000107813204(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x000107813288();
  }
  puStack_50 = (undefined2 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  *puStack_50 = *param_2;
  *(float *)(puStack_50 + 2) = (float)*param_3;
  puStack_48 = puStack_50 + 4;
  func_0x000107813244(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x0001078132c8(&plStack_58);
  return lVar3;
}



/* Entry: 107813318; end: 10781334b;  */

undefined8 FUN_107813318(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010781334c(&uStack_28);
  return param_1;
}



/* Entry: 107813560; end: 1078135ff;  */

void FUN_107813560(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x80) {
    func_0x000107813634(param_4,lVar1);
    param_4 = lStack_38 + 0x80;
  }
  uStack_48 = 1;
  func_0x000107813600(param_1,param_2,param_3);
  func_0x000107813678(&uStack_60);
  return;
}



/* Entry: 1078137cc; end: 107813803;  */

void FUN_1078137cc(void)

{
  func_0x0001078138e8();
  func_0x000107813804();
  return;
}



/* Entry: 107813fdc; end: 107814053;  */

long FUN_107813fdc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_2 + 0x70);
  plVar1 = (long *)(param_1 + 0x1110);
  if (*(char *)(param_1 + 0x1118) == '\0') {
    plVar1 = (long *)(param_2 + 0x70);
  }
  if (lVar2 <= *plVar1) {
    lVar2 = *plVar1;
  }
  dVar4 = *(double *)(param_3 + 0x78);
  _log2(dVar4);
  fVar3 = (float)dVar4;
  func_0x0001078227d8(fVar3,*(undefined4 *)(param_1 + 0x1148));
  return (long)((1.0 - fVar3) * (float)lVar2);
}



/* Entry: 1078149a8; end: 1078149bb;  */

void FUN_1078149a8(void)

{
  func_0x0001078147d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078173dc; end: 1078173fb;  */

bool FUN_1078173dc(double param_1,long param_2)

{
  func_0x0001074163dc(param_2 + 0x20);
  return param_1 != 0.0;
}



/* Entry: 107818c8c; end: 107818cd3;  */

float FUN_107818c8c(float param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = param_2;
  ___sincos_stret(param_3);
  return (float)(-((double)SUB84(param_2,0) * param_3) + (double)param_1 * dVar1);
}



/* Entry: 107819704; end: 107819e1f;  */

void FUN_107819704(ulong param_1,uint param_2,long param_3,long param_4,long param_5,ulong param_6)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  short sVar17;
  uint uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  uint uVar20;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  long lVar24;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long lVar25;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  byte extraout_w12;
  byte extraout_w12_00;
  byte extraout_w12_01;
  byte bVar26;
  long lVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar28;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long lVar29;
  byte *pbVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  ushort uVar34;
  undefined4 uVar36;
  ulong uVar37;
  uint uVar38;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  ulong uVar35;
  
  lVar19 = *(long *)(param_4 + 0x168);
  lVar21 = *(long *)(param_4 + 0x170);
  if (lVar19 != lVar21) {
    *(undefined8 *)(param_4 + 0x138) = *(undefined8 *)(param_4 + 0x130);
  }
  lVar24 = *(long *)(param_4 + 0x480);
  lVar25 = *(long *)(param_4 + 0x488);
  if (lVar24 != lVar25) {
    *(undefined8 *)(param_4 + 0x450) = *(undefined8 *)(param_4 + 0x448);
  }
  lVar27 = *(long *)(param_4 + 0x790);
  lVar28 = *(long *)(param_4 + 0x798);
  if (lVar27 != lVar28) {
    *(undefined8 *)(param_4 + 0x760) = *(undefined8 *)(param_4 + 0x758);
  }
  lVar29 = *(long *)(param_4 + 0xa38);
  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x30) != *(long *)(lVar29 + 0x38))) {
    func_0x000107822fd0();
    lVar19 = extraout_x8;
    lVar21 = extraout_x9;
    lVar24 = extraout_x10;
    lVar25 = extraout_x11;
    lVar27 = extraout_x12;
    lVar28 = extraout_x13;
  }
  lVar29 = *(long *)(param_4 + 0xa48);
  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x30) != *(long *)(lVar29 + 0x38))) {
    func_0x000107822fd0();
    lVar19 = extraout_x8_00;
    lVar21 = extraout_x9_00;
    lVar24 = extraout_x10_00;
    lVar25 = extraout_x11_00;
    lVar27 = extraout_x12_00;
    lVar28 = extraout_x13_00;
  }
  lVar29 = *(long *)(param_4 + 0xa40);
  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x30) != *(long *)(lVar29 + 0x38))) {
    func_0x000107822fd0();
    lVar19 = extraout_x8_01;
    lVar21 = extraout_x9_01;
    lVar24 = extraout_x10_01;
    lVar25 = extraout_x11_01;
    lVar27 = extraout_x12_01;
    lVar28 = extraout_x13_01;
  }
  lVar29 = *(long *)(param_4 + 0xa50);
  if ((lVar29 != 0) && (*(long *)(lVar29 + 0x30) != *(long *)(lVar29 + 0x38))) {
    func_0x000107822fd0();
    lVar19 = extraout_x8_02;
    lVar21 = extraout_x9_02;
    lVar24 = extraout_x10_02;
    lVar25 = extraout_x11_02;
    lVar27 = extraout_x12_02;
    lVar28 = extraout_x13_02;
  }
  pbVar30 = *(byte **)(param_4 + 0x28);
  bVar9 = **(long **)(pbVar30 + 0x778) != (*(long **)(pbVar30 + 0x778))[1];
  bVar4 = pbVar30[0x700];
  bVar5 = pbVar30[0x688];
  uVar23 = *(ushort *)(param_4 + 0x74) & 0x80;
  uVar12 = (uint)pbVar30[0x4ad] & uVar23 >> 7;
  if ((uVar12 == 1) && ((*pbVar30 & 1) == 0)) {
    uVar23 = 0;
    if (lVar24 == lVar25 && lVar27 == lVar28) {
      uVar12 = 1;
    }
    else {
      uVar12 = (uint)pbVar30[0x130];
    }
  }
  else {
    uVar23 = (uint)*pbVar30 & uVar23 >> 7;
    if ((lVar19 != lVar21) && ((uVar23 != 0 && ((pbVar30[0x4ad] & 1) == 0)))) {
      uVar23 = (uint)pbVar30[0x680];
    }
  }
  bVar6 = pbVar30[0x1b8];
  lVar19 = *(long *)(param_4 + 0x78);
  lVar21 = *(long *)(param_4 + 0x80);
  do {
    if (lVar19 == lVar21) {
      func_0x00010745ba98((float)*(double *)(param_5 + 0x70),param_4);
      param_3 = param_3 + 0x1260;
      func_0x0001078215d4(param_3,param_4 + 0xa5c);
      if (param_3 != 0) {
        uVar22 = *(undefined8 *)(param_4 + 0xa88);
        lVar19 = *(long *)(param_4 + 0xa90);
        if (lVar19 != 0) {
          plVar1 = (long *)(lVar19 + 8);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        lStack_a8 = *(undefined8 *)(param_3 + 0x48);
        lStack_b0 = *(long *)(param_3 + 0x40);
        *(undefined8 *)(param_3 + 0x40) = uVar22;
        *(long *)(param_3 + 0x48) = lVar19;
        func_0x0001073c4394(&lStack_b0);
      }
      return;
    }
    uVar32 = *(undefined4 *)(lVar19 + 0x658);
    uVar35 = param_6;
    func_0x0001078201d4(param_6,uVar32);
    lVar24 = param_3 + 0x11c0;
    func_0x000107821358(lVar24,uVar32);
    if (uVar35 == 0) {
      uVar37 = (ulong)(uint)(float)(uVar23 & 1);
      uVar13 = (ulong)(uint)(float)(uVar12 & 1);
      uVar31 = uVar12;
      uVar18 = uVar23;
      if (lVar24 != 0) {
        uVar37 = (ulong)*(uint *)(lVar24 + 0x14);
        uVar13 = (ulong)*(uint *)(lVar24 + 0x1c);
        uVar18 = (uint)*(byte *)(lVar24 + 0x18);
        uVar31 = (uint)*(byte *)(lVar24 + 0x20);
      }
    }
    else {
      uVar37 = 0;
      uVar13 = 0;
      uVar31 = 0;
      uVar18 = 0;
    }
    bVar26 = (byte)uVar18;
    puVar33 = (undefined4 *)(lVar19 + 0x658);
    func_0x000107426444(param_6,puVar33);
    if ((*(byte *)(lVar19 + 0x30) & 1) != 0) {
      param_1 = uVar13;
      func_0x0001073db064(uVar13,uVar31 & 1);
      if (*(char *)(lVar19 + 0x5f0) == '\x01') {
        func_0x000107822a64(*(undefined8 *)(lVar19 + 0x5e8));
        func_0x000107821fa0();
        bVar26 = extraout_w12;
      }
      if ((*(char *)(lVar19 + 0x600) == '\x01') && ((*(byte *)(lVar19 + 0x654) & 1) == 0)) {
        func_0x000107822a64(*(undefined8 *)(lVar19 + 0x5f8));
        func_0x000107821fa0();
        bVar26 = extraout_w12_00;
      }
      if ((*(char *)(lVar19 + 0x610) == '\x01') && ((*(byte *)(lVar19 + 0x654) & 1) == 0)) {
        func_0x000107822a64(*(undefined8 *)(lVar19 + 0x608));
        func_0x000107821fa0();
        bVar26 = extraout_w12_01;
      }
      uVar10 = false;
      if (*(char *)(lVar19 + 0x620) == '\x01') {
        uVar10 = (float)uVar13 == 0.0;
        bVar2 = 0;
        if ((bool)uVar10) {
          bVar2 = (float)uVar37 == 0.0 & (bVar26 ^ 0xff);
        }
        *(byte *)(*(long *)(param_4 + 0x180) + *(long *)(lVar19 + 0x618) * 0xa8 + 0x78) =
             bVar2 & ((byte)uVar31 ^ 1);
      }
      func_0x000107819e20(param_4 + 0x130);
      func_0x000107822c74();
      if ((bool)uVar10) {
        lVar24 = param_3 + 0x1210;
        func_0x000107820220(lVar24,*puVar33);
        if (lVar24 == 0) goto LAB_107819a3c;
        bVar26 = *(byte *)(lVar24 + 0x14);
        uVar35 = (ulong)bVar26;
        uVar34 = (ushort)bVar26;
        if (bVar26 == 0) {
          sVar17 = 1;
        }
        else if (bVar26 == 1) {
          sVar17 = 0;
        }
        else {
          sVar17 = 0;
          uVar34 = 0;
        }
        sVar17 = sVar17 << 8;
        if (*(char *)(lVar19 + 0x5f0) == '\x01') {
          func_0x000107822784();
          *(short *)(lVar24 + 0x8c) = sVar17;
        }
        bVar26 = *(byte *)(lVar19 + 0x654);
        if ((*(char *)(lVar19 + 0x600) == '\x01') && ((bVar26 & 1) == 0)) {
          func_0x000107822784();
          *(short *)(lVar24 + 0x8c) = sVar17;
          bVar26 = *(byte *)(lVar19 + 0x654);
        }
        if ((*(char *)(lVar19 + 0x610) == '\x01') && ((bVar26 & 1) == 0)) {
          func_0x000107822784();
          *(short *)(lVar24 + 0x8c) = sVar17;
        }
        uVar34 = uVar34 | uVar34 << 8;
        if (*(char *)(lVar19 + 0x620) == '\x01') {
          func_0x000107822784();
          *(ushort *)(lVar24 + 0x8c) = uVar34;
        }
        lVar24 = 0x418;
        if ((*(byte *)(lVar19 + 0x30) & 4) != 0) {
          lVar24 = 0x728;
        }
        lVar24 = param_4 + lVar24;
        if (*(char *)(lVar19 + 0x630) == '\x01') {
          lVar25 = *(long *)(lVar24 + 0x80);
          FUN_10781a508(lVar25,*(undefined8 *)(lVar24 + 0x88),*(undefined8 *)(lVar19 + 0x628));
          *(short *)(lVar25 + 0x8c) = sVar17;
        }
        if (*(char *)(lVar19 + 0x640) == '\x01') {
          lVar25 = *(long *)(lVar24 + 0x80);
          FUN_10781a508(lVar25,*(undefined8 *)(lVar24 + 0x88),*(undefined8 *)(lVar19 + 0x638));
          *(ushort *)(lVar25 + 0x8c) = uVar34;
        }
      }
      else {
LAB_107819a3c:
        uVar35 = 0;
      }
      lVar24 = param_3 + 0x11e8;
      puVar15 = puVar33;
      func_0x0001073be570();
      if (lVar24 != 0) {
        uVar38 = *(byte *)(lVar24 + 0x24) - 1;
        uVar20 = (uint)(0x302030201010302 >> (((ulong)uVar38 & 7) << 3));
        if ((uVar38 & 0xf8) != 0) {
          uVar20 = 1;
        }
        uVar13 = (ulong)(uVar20 & 3);
        func_0x000107822e48();
        puVar16 = puVar15;
        for (lVar24 = 0; lVar24 != 3; lVar24 = lVar24 + 1) {
          uVar14 = (ulong)(byte)(&UNK_10dea6bdc)[lVar24];
          func_0x000107822e48();
          if (((ulong)puVar16 & 1) != 0) {
            uVar32 = 0;
            if (((uint)puVar15 & (uint)(uVar14 != uVar13)) == 0) {
              uVar32 = *puVar33;
            }
            func_0x000107822784();
            *(undefined4 *)(uVar14 + 0x88) = uVar32;
          }
        }
      }
    }
    uVar32 = (undefined4)uVar35;
    bVar26 = *(byte *)(lVar19 + 0x30);
    uVar10 = (bVar26 & 6) == 0;
    uVar20 = param_2;
    if (!(bool)uVar10) {
      func_0x0001073db064(uVar37,uVar18 & 1);
      lVar24 = 0x418;
      if ((bVar26 & 4) != 0) {
        lVar24 = 0x728;
      }
      lVar24 = param_4 + lVar24;
      param_1 = uVar37;
      uVar20 = param_2;
      if (*(char *)(lVar19 + 0x630) == '\x01') {
        func_0x0001078227b8();
        func_0x0001078230b8();
        lVar24 = extraout_x8_03;
        param_1 = uVar37;
        uVar20 = param_2;
      }
      uVar10 = *(char *)(lVar19 + 0x640) == '\x01';
      if ((bool)uVar10) {
        func_0x0001078227b8();
        func_0x0001078230b8();
        lVar24 = extraout_x8_04;
      }
      func_0x000107819e20(lVar24 + 0x30);
    }
    uVar38 = 0;
    lStack_c0 = param_3;
    lStack_b8 = param_4;
    lStack_b0 = param_3;
    lStack_a8 = param_4;
    lStack_a0 = lVar19;
    lStack_98 = param_5;
    uStack_90 = bVar9;
    uStack_8f = bVar4 == 0;
    uStack_8e = bVar5 == 0;
    if (*(long *)(param_4 + 0xa40) == 0) {
      func_0x000107822fdc();
      uVar36 = 0;
      param_2 = uVar20;
    }
    else {
      func_0x000107822c50();
      if ((bool)uVar10) {
        func_0x000107822fdc();
        uVar36 = 0;
        param_2 = uVar20;
      }
      else {
        func_0x000107819ef8(&lStack_b0,lVar19 + 0x60,uVar31 & 1);
        uVar36 = (undefined4)param_1;
        param_2 = uVar20;
        func_0x000107822c74();
        bVar8 = false;
        uVar38 = uVar20;
        if (((bool)uVar10) &&
           (uVar10 = *(char *)(lVar19 + 0x420) == '\x01', bVar8 = (bool)uVar10, (bool)uVar10)) {
          func_0x000107819ef8(&lStack_b0,lVar19 + 0x2e0,uVar31 & 1);
          uVar32 = (undefined4)param_1;
          puVar33 = (undefined4 *)(ulong)param_2;
        }
        else {
          uVar10 = bVar8;
          func_0x000107822fdc();
        }
      }
    }
    if ((*(long *)(param_4 + 0xa38) != 0) && (func_0x000107822c50(), !(bool)uVar10)) {
      uVar11 = bVar6 == 0;
      uVar3 = 0;
      if (!(bool)uVar11) {
        uVar3 = uVar36;
      }
      uVar20 = 0;
      if (!(bool)uVar11) {
        uVar20 = uVar38;
      }
      func_0x000107819fd4(param_4,lVar19 + 0x1a0,uVar18 & 1,uVar3,uVar20);
      func_0x000107822c74();
      uVar10 = 0;
      if (((bool)uVar11) && (uVar10 = 0, *(char *)(lVar19 + 0x568) == '\x01')) {
        uVar10 = bVar6 == 0;
        uVar36 = 0;
        if (!(bool)uVar10) {
          uVar36 = uVar32;
        }
        uVar32 = 0;
        if (!(bool)uVar10) {
          uVar32 = SUB84(puVar33,0);
        }
        func_0x000107819fd4(param_4,lVar19 + 0x428,uVar31 & 1,uVar36,uVar32);
      }
    }
    if ((*(long *)(param_4 + 0xa48) != 0) && (func_0x000107822c50(), !(bool)uVar10)) {
      func_0x00010781a010(&lStack_c0,lVar19 + 0x1a0,uVar18 & 1,0);
    }
    if ((*(long *)(param_4 + 0xa50) != 0) && (func_0x000107822c50(), !(bool)uVar10)) {
      func_0x00010781a010(&lStack_c0,lVar19 + 0x60,uVar31 & 1,1);
    }
    lVar19 = lVar19 + 0x670;
  } while( true );
}



/* Entry: 10781a508; end: 10781a52b;  */

long FUN_10781a508(long param_1,long param_2,ulong param_3)

{
  if ((ulong)((param_2 - param_1) / 0xa8) <= param_3) {
    func_0x00010781cba8();
    func_0x000107822830();
    func_0x0001078224b0();
    return param_1;
  }
  return param_1 + param_3 * 0xa8;
}



/* Entry: 10781aad8; end: 10781abab;  */

void FUN_10781aad8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x708) {
    func_0x0001077f79bc(lVar2 + -0x78);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10781b690; end: 10781b6b7;  */

void FUN_10781b690(void)

{
  func_0x00010782302c();
  func_0x0001078217a8();
  func_0x0001078220c4();
  func_0x00010781f610();
  return;
}



/* Entry: 10781ba84; end: 10781ba97;  */

void FUN_10781ba84(void)

{
  func_0x00010781f658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781bbac; end: 10781bc03;  */

long FUN_10781bbac(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x000107822650(*(undefined8 *)(param_2 + 0x18));
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10781bd10; end: 10781bd1f;  */

undefined ** FUN_10781bd10(void)

{
  return &PTR_DAT_1109e02e0;
}



/* Entry: 10781bde0; end: 10781bdff;  */

void FUN_10781bde0(void)

{
  func_0x000107821f80();
  func_0x000107821ec8();
  return;
}



/* Entry: 10781c134; end: 10781c17b;  */

void FUN_10781c134(long param_1)

{
  long *unaff_x20;
  
  func_0x0001078230f8();
  while (unaff_x20 != (long *)0x0) {
    param_1 = (long)(unaff_x20 + 3);
    unaff_x20 = (long *)*unaff_x20;
    func_0x0001074c31ac();
    func_0x0001078224e8();
  }
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781c98c; end: 10781ca53;  */

long FUN_10781c98c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10781cde8; end: 10781cdef;  */

void FUN_10781cde8(void)

{
  return;
}



/* Entry: 10781cfa8; end: 10781cfbb;  */

void FUN_10781cfa8(void)

{
  func_0x00010781cf7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781d118; end: 10781d7bb;  */

/* WARNING: Possible PIC construction at 0x00010781d230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781d234) */
/* WARNING: Removing unreachable block (ram,0x00010781d270) */
/* WARNING: Removing unreachable block (ram,0x00010781d2c4) */
/* WARNING: Removing unreachable block (ram,0x00010781d2fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d310) */
/* WARNING: Removing unreachable block (ram,0x00010781d380) */
/* WARNING: Removing unreachable block (ram,0x00010781d31c) */
/* WARNING: Removing unreachable block (ram,0x00010781d390) */
/* WARNING: Removing unreachable block (ram,0x00010781d32c) */
/* WARNING: Removing unreachable block (ram,0x00010781d364) */
/* WARNING: Removing unreachable block (ram,0x00010781d39c) */
/* WARNING: Removing unreachable block (ram,0x00010781d368) */
/* WARNING: Removing unreachable block (ram,0x00010781d3a4) */
/* WARNING: Removing unreachable block (ram,0x00010781d374) */
/* WARNING: Removing unreachable block (ram,0x00010781d3ac) */
/* WARNING: Removing unreachable block (ram,0x00010781d3b0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3e8) */
/* WARNING: Removing unreachable block (ram,0x00010781d3c8) */
/* WARNING: Removing unreachable block (ram,0x00010781d3f0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3d0) */
/* WARNING: Removing unreachable block (ram,0x00010781d3dc) */
/* WARNING: Removing unreachable block (ram,0x00010781d3f8) */
/* WARNING: Removing unreachable block (ram,0x00010781d404) */
/* WARNING: Removing unreachable block (ram,0x00010781d40c) */
/* WARNING: Removing unreachable block (ram,0x00010781d428) */
/* WARNING: Removing unreachable block (ram,0x00010781d440) */
/* WARNING: Removing unreachable block (ram,0x00010781d430) */
/* WARNING: Removing unreachable block (ram,0x00010781d438) */
/* WARNING: Removing unreachable block (ram,0x00010781d444) */
/* WARNING: Removing unreachable block (ram,0x00010781d44c) */
/* WARNING: Removing unreachable block (ram,0x00010781d450) */
/* WARNING: Removing unreachable block (ram,0x00010781d4c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d4c8) */
/* WARNING: Removing unreachable block (ram,0x00010781d4f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d4e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d500) */
/* WARNING: Removing unreachable block (ram,0x00010781d4ec) */
/* WARNING: Removing unreachable block (ram,0x00010781d508) */
/* WARNING: Removing unreachable block (ram,0x00010781d50c) */
/* WARNING: Removing unreachable block (ram,0x00010781d520) */
/* WARNING: Removing unreachable block (ram,0x00010781d538) */
/* WARNING: Removing unreachable block (ram,0x00010781d550) */
/* WARNING: Removing unreachable block (ram,0x00010781d540) */
/* WARNING: Removing unreachable block (ram,0x00010781d548) */
/* WARNING: Removing unreachable block (ram,0x00010781d554) */
/* WARNING: Removing unreachable block (ram,0x00010781d518) */
/* WARNING: Removing unreachable block (ram,0x00010781d558) */
/* WARNING: Removing unreachable block (ram,0x00010781d418) */
/* WARNING: Removing unreachable block (ram,0x00010781d574) */
/* WARNING: Removing unreachable block (ram,0x00010781d580) */
/* WARNING: Removing unreachable block (ram,0x00010781d5b4) */
/* WARNING: Removing unreachable block (ram,0x00010781d594) */
/* WARNING: Removing unreachable block (ram,0x00010781d5b8) */
/* WARNING: Removing unreachable block (ram,0x00010781d59c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5a8) */
/* WARNING: Removing unreachable block (ram,0x00010781d5c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d5d0) */
/* WARNING: Removing unreachable block (ram,0x00010781d5d8) */
/* WARNING: Removing unreachable block (ram,0x00010781d5f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d60c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d604) */
/* WARNING: Removing unreachable block (ram,0x00010781d610) */
/* WARNING: Removing unreachable block (ram,0x00010781d618) */
/* WARNING: Removing unreachable block (ram,0x00010781d674) */
/* WARNING: Removing unreachable block (ram,0x00010781d67c) */
/* WARNING: Removing unreachable block (ram,0x00010781d6a8) */
/* WARNING: Removing unreachable block (ram,0x00010781d698) */
/* WARNING: Removing unreachable block (ram,0x00010781d6b4) */
/* WARNING: Removing unreachable block (ram,0x00010781d6a0) */
/* WARNING: Removing unreachable block (ram,0x00010781d6bc) */
/* WARNING: Removing unreachable block (ram,0x00010781d6c0) */
/* WARNING: Removing unreachable block (ram,0x00010781d6dc) */
/* WARNING: Removing unreachable block (ram,0x00010781d6f4) */
/* WARNING: Removing unreachable block (ram,0x00010781d70c) */
/* WARNING: Removing unreachable block (ram,0x00010781d6fc) */
/* WARNING: Removing unreachable block (ram,0x00010781d704) */
/* WARNING: Removing unreachable block (ram,0x00010781d710) */
/* WARNING: Removing unreachable block (ram,0x00010781d6cc) */
/* WARNING: Removing unreachable block (ram,0x00010781d714) */
/* WARNING: Removing unreachable block (ram,0x00010781d5e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d72c) */
/* WARNING: Removing unreachable block (ram,0x00010781d5f0) */
/* WARNING: Removing unreachable block (ram,0x00010781d424) */
/* WARNING: Removing unreachable block (ram,0x00010781d300) */

float * FUN_10781d118(long param_1,long *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float in_s5;
  float unaff_s12;
  float unaff_s13;
  float fStack_1b8;
  float fStack_1b4;
  float afStack_d8 [14];
  
  lVar3 = param_1;
  func_0x000107821e20();
  uVar7 = *(undefined8 *)(*param_2 + 0x14);
  uVar10 = *(undefined8 *)(*param_2 + 0xc);
  fVar5 = (float)uVar7 - (float)uVar10;
  fVar8 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
  if (((long *)**(undefined8 **)(lVar3 + 8))[1] - *(long *)**(undefined8 **)(lVar3 + 8) <<
      ((ulong)*(byte *)(*(long *)(lVar3 + 0x10) + 0x6d0) & 0x3f) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
      return (float *)0x7;
    }
    ___stack_chk_fail();
    fVar9 = (float)uVar10;
    uVar2 = (uint)param_2;
    pfVar4 = afStack_d8;
    func_0x00010781dab0(pfVar4);
    func_0x000107822028();
  }
  else {
    pfVar4 = (float *)(ulong)**(byte **)**(undefined8 **)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    uVar2 = (uint)*(byte *)(lVar3 + 0x24);
    param_3 = (uint)*(byte *)(lVar3 + 0x25);
    in_s5 = (float)*(double *)(*(long *)(lVar3 + 0x10) + 0x70);
    fVar9 = fVar8;
  }
  func_0x000107822bf0();
  func_0x0001078253e8();
  fVar6 = fVar9 + -0.5;
  fVar1 = fVar6 * unaff_s12;
  func_0x000107822e54(pfVar4);
  fStack_1b8 = -((fVar5 + -0.5) * unaff_s13) + fVar8 * fVar6;
  fStack_1b4 = -fVar1 + fVar8 * fVar9;
  if (uVar2 != 0) {
    if (param_3 == 0) {
      in_s5 = -in_s5;
    }
    pfVar4 = &fStack_1b8;
    func_0x000107501ee0(in_s5,pfVar4);
  }
  return pfVar4;
}



/* Entry: 10781dad4; end: 10781daef;  */

void FUN_10781dad4(long param_1)

{
  func_0x0001072ab9a8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10781dd18; end: 10781dd8b;  */

long * FUN_10781dd18(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001075162fc();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10781e080; end: 10781e16b;  */

void FUN_10781e080(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long unaff_x19;
  ulong unaff_x21;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107822830();
  lVar2 = param_1[1];
  uVar3 = (lVar2 - *param_1) / 0xc;
  uVar1 = uVar3 + param_2;
  if (uVar3 < uVar1) {
    if ((ulong)((*(long *)(unaff_x19 + 0x10) - lVar2) / 0xc) < unaff_x21) {
      func_0x000107408b4c();
      func_0x000107822160();
      func_0x000107408bd0(auStack_58);
      lStack_48 = lStack_48 + unaff_x21 * 0xc;
      uVar1 = unaff_x21 * 3 & 0x3fffffffffffffff;
      while (uVar1 != 0) {
        func_0x000107822b78();
        lStack_48 = extraout_x9;
        uVar1 = extraout_x10;
      }
      func_0x0001078225f0();
      func_0x000107408b94();
      func_0x000107408c50(auStack_58);
    }
    else {
      lVar2 = lVar2 + unaff_x21 * 0xc;
      uVar1 = unaff_x21 * 3 & 0x3fffffffffffffff;
      while (uVar1 != 0) {
        func_0x000107822b78();
        lVar2 = extraout_x9_00;
        uVar1 = extraout_x10_00;
      }
      *(long *)(unaff_x19 + 8) = lVar2;
    }
  }
  else if (uVar3 != uVar1) {
    *(ulong *)(unaff_x19 + 8) = *param_1 + uVar1 * 0xc;
  }
  return;
}



/* Entry: 10781e480; end: 10781e4d7;  */

void FUN_10781e480(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001078221e8();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      func_0x0001078230cc();
      while (func_0x00010782300c(), !(bool)in_ZR) {
        unaff_x19[2] = extraout_x8 + -0x10;
        func_0x0001072792b8();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return;
}



/* Entry: 10781eb20; end: 10781ed1f;  */

/* WARNING: Possible PIC construction at 0x00010781ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ebb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781eda8) */
/* WARNING: Removing unreachable block (ram,0x00010781edb4) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781ede4) */
/* WARNING: Removing unreachable block (ram,0x00010781ee08) */
/* WARNING: Removing unreachable block (ram,0x00010781ee38) */
/* WARNING: Removing unreachable block (ram,0x00010781ee4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee64) */
/* WARNING: Removing unreachable block (ram,0x00010781ee58) */
/* WARNING: Removing unreachable block (ram,0x00010781ee60) */
/* WARNING: Removing unreachable block (ram,0x00010781ee74) */
/* WARNING: Removing unreachable block (ram,0x00010781ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeb0) */
/* WARNING: Removing unreachable block (ram,0x00010781eec4) */
/* WARNING: Removing unreachable block (ram,0x00010781eebc) */
/* WARNING: Removing unreachable block (ram,0x00010781ee84) */
/* WARNING: Removing unreachable block (ram,0x00010781ee88) */
/* WARNING: Removing unreachable block (ram,0x00010781ee98) */
/* WARNING: Removing unreachable block (ram,0x00010781eeac) */
/* WARNING: Removing unreachable block (ram,0x00010781edf8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecd4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecc8) */
/* WARNING: Removing unreachable block (ram,0x00010781ec30) */
/* WARNING: Removing unreachable block (ram,0x00010781ec40) */
/* WARNING: Removing unreachable block (ram,0x00010781ece4) */
/* WARNING: Removing unreachable block (ram,0x00010781ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ec6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010781ec88) */
/* WARNING: Removing unreachable block (ram,0x00010781ec94) */
/* WARNING: Removing unreachable block (ram,0x00010781ebb4) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781eb20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  code *extraout_x8_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 **in_stack_00000050;
  undefined8 auStack_1560 [226];
  undefined8 *puStack_e50;
  undefined8 *puStack_e48;
  undefined8 **ppuStack_e30;
  undefined *puStack_e28;
  undefined1 auStack_e20 [3600];
  undefined8 uStack_10;
  
  func_0x0001078227a0();
  pppuVar11 = &stack0x00000050;
  puVar2 = (undefined8 *)auStack_e20;
  puVar3 = (undefined8 *)auStack_e20;
  func_0x000107821e20();
  bVar4 = true;
  uStack_10 = extraout_x8;
  if (param_1 == param_2) {
LAB_10781ed04:
    func_0x000107821dac(uStack_10);
    if (bVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    puStack_e28 = &UNK_10781ed20;
    pppuVar12 = &ppuStack_e30;
    puVar2 = auStack_1560;
    puVar3 = auStack_1560;
    param_2 = auStack_1560;
    puStack_e50 = unaff_x22;
    puStack_e48 = unaff_x21;
    ppuStack_e30 = pppuVar11;
    func_0x000107822830();
    func_0x000107821e20();
    func_0x00010781f1f0(auStack_1560);
    puVar7 = unaff_x21 + -0xe1;
    func_0x00010781e77c();
    puVar9 = unaff_x19;
    if (((ulong)param_2 & 1) == 0) {
      do {
        puVar9 = puVar9 + 0xe1;
        if (unaff_x21 <= puVar9) break;
        func_0x0001078224a4();
      } while ((int)param_2 == 0);
    }
    else {
      do {
        puVar9 = puVar9 + 0xe1;
        func_0x0001078224a4();
      } while (((ulong)param_2 & 1) == 0);
    }
    if (puVar9 < unaff_x21) {
      do {
        func_0x000107822140();
      } while (((ulong)param_2 & 1) != 0);
    }
    if (puVar9 < unaff_x21) {
      func_0x00010782289c();
      puVar13 = &UNK_10781eda8;
      pppuVar11 = pppuVar12;
code_r0x00010781f098:
      unaff_x20 = param_2;
      *(undefined8 **)((long)puVar2 + -0x30) = unaff_x22;
      *(undefined8 **)((long)puVar2 + -0x28) = unaff_x21;
      *(undefined8 **)((long)puVar2 + -0x20) = puVar9;
      *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
      *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar11;
      *(undefined **)((long)puVar2 + -8) = puVar13;
      pppuVar12 = (undefined8 ***)((long)puVar2 + -0x10);
      puVar3 = (undefined8 *)((long)puVar2 + -0x740);
      unaff_x21 = (undefined8 *)((long)puVar2 + -0x740);
      func_0x0001078220d8();
      func_0x000107821e20();
      *(undefined8 *)((long)puVar2 + -0x38) = extraout_x8_00;
      func_0x0001078220fc();
      func_0x00010782265c();
      puVar13 = &UNK_10781f0c8;
    }
    else {
      unaff_x21 = puVar9 + -0xe1;
      unaff_x20 = param_2;
      if (unaff_x19 != unaff_x21) {
        func_0x000107822910();
        unaff_x20 = unaff_x19;
      }
      func_0x000107822c2c();
      puVar13 = &UNK_10781ede4;
      unaff_x19 = auStack_1560;
    }
  }
  else {
    func_0x0001078220d8();
    unaff_x21 = (undefined8 *)(((long)param_2 - (long)param_1) / 0x708);
    if (0x708 < (long)param_2 - (long)param_1) {
      uVar10 = (ulong)((long)unaff_x21 + -2) >> 1;
      do {
        func_0x00010782289c();
        func_0x00010781f27c();
        uVar10 = uVar10 - 1;
        param_2 = unaff_x19;
      } while (-1 < (long)uVar10);
    }
    for (; puVar9 = unaff_x20, param_2 != param_3; param_2 = param_2 + 0xe1) {
      param_1 = param_2;
      func_0x0001078224fc();
      if ((int)param_1 != 0) {
        puVar13 = (undefined *)0x10781ebb4;
        puVar7 = unaff_x20;
        unaff_x22 = param_3;
        goto code_r0x00010781f098;
      }
    }
    unaff_x22 = (undefined8 *)((long)unaff_x21 + -2);
    bVar4 = unaff_x22 == (undefined8 *)0x0;
    if ((long)unaff_x21 < 2) goto LAB_10781ed04;
    func_0x0001078220fc();
    puVar6 = unaff_x20 + 0xe1;
    puVar7 = puVar6;
    if (2 < (long)unaff_x21) {
      puVar5 = puVar6;
      func_0x00010781e77c(puVar6,unaff_x20 + 0x1c2);
      puVar7 = unaff_x20 + 0x1c2;
      if ((int)puVar5 == 0) {
        puVar7 = puVar6;
      }
    }
    puVar13 = (undefined *)0x10781ec30;
    unaff_x22 = puVar7;
    pppuVar12 = pppuVar11;
  }
  *(undefined8 **)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)((long)puVar3 + -0x20) = puVar9;
  *(undefined8 **)((long)puVar3 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar12;
  *(undefined **)((long)puVar3 + -8) = puVar13;
  func_0x0001078221e8();
  *unaff_x20 = *puVar7;
  func_0x000107822eb8(unaff_x20 + 1,puVar7 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(puVar9 + 0xd1);
  puVar7 = unaff_x19 + 0xd2;
  cVar1 = *(char *)(unaff_x19 + 0xd6);
  if (cVar1 != *(char *)(puVar9 + 0xd6)) {
    if (cVar1 == '\0') {
      func_0x00010781bb90(puVar7,puVar9 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  puVar6 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar6 == puVar7) {
    uVar8 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar8);
  }
  else if (puVar6 != (undefined8 *)0x0) {
    uVar8 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar6 = (undefined8 *)puVar9[0xd5];
  if (puVar6 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar6 == puVar9 + 0xd2) {
    unaff_x19[0xd5] = puVar7;
    func_0x000107822650(puVar9[0xd5]);
    (*extraout_x8_01)();
  }
  else {
    unaff_x19[0xd5] = puVar6;
    puVar9[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar14 = puVar9[0xd8];
  uVar8 = puVar9[0xd7];
  uVar16 = puVar9[0xda];
  uVar15 = puVar9[0xd9];
  uVar18 = puVar9[0xdc];
  uVar17 = puVar9[0xdb];
  uVar19 = *(undefined8 *)((long)puVar9 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)puVar9 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar19;
  unaff_x19[0xda] = uVar16;
  unaff_x19[0xd9] = uVar15;
  unaff_x19[0xdc] = uVar18;
  unaff_x19[0xdb] = uVar17;
  unaff_x19[0xd8] = uVar14;
  unaff_x19[0xd7] = uVar8;
  uVar8 = puVar9[0xdf];
  unaff_x19[0xe0] = puVar9[0xe0];
  unaff_x19[0xdf] = uVar8;
  return unaff_x19;
}



/* Entry: 10781f3b0; end: 10781f457;  */

void FUN_10781f3b0(float param_1,float param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  func_0x0001078220d8();
  lVar1 = *param_3;
  uVar2 = lVar1 + 0x40;
  func_0x0001077f5678();
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = 0xd40;
  do {
    if ((uVar2 & 0xff) != 0) {
      return;
    }
    uVar2 = lVar1 + 0x40;
    func_0x0001077f5678(param_1 + *(float *)(lVar3 + 0x10),param_2 + *(float *)(lVar3 + 0x14),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x10) + 0x20));
    lVar3 = lVar3 + 0x350;
    lVar4 = lVar4 + -0x350;
  } while (lVar4 != 0);
  return;
}



/* Entry: 10781f81c; end: 10781f847;  */

void FUN_10781f81c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xcf1094d3eaf86) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x13c8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109e04f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10781fa1c; end: 10781fa2f;  */

/* WARNING: Possible PIC construction at 0x00010781fa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781fb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781fa7c) */
/* WARNING: Removing unreachable block (ram,0x00010781fa80) */
/* WARNING: Removing unreachable block (ram,0x00010781fa90) */
/* WARNING: Removing unreachable block (ram,0x00010781fa98) */
/* WARNING: Removing unreachable block (ram,0x00010781faa0) */
/* WARNING: Removing unreachable block (ram,0x00010781faa8) */
/* WARNING: Removing unreachable block (ram,0x00010781fab0) */
/* WARNING: Removing unreachable block (ram,0x00010781fac8) */
/* WARNING: Removing unreachable block (ram,0x00010781fab8) */
/* WARNING: Removing unreachable block (ram,0x00010781fac0) */
/* WARNING: Removing unreachable block (ram,0x00010781facc) */
/* WARNING: Removing unreachable block (ram,0x00010781fad4) */
/* WARNING: Removing unreachable block (ram,0x00010781fae4) */
/* WARNING: Removing unreachable block (ram,0x00010781fae8) */
/* WARNING: Removing unreachable block (ram,0x00010781fadc) */
/* WARNING: Removing unreachable block (ram,0x00010781fa88) */
/* WARNING: Removing unreachable block (ram,0x00010781fb24) */

void FUN_10781fa1c(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  
  lVar2 = (long)(2048.0 / *(float *)(param_1 + 4));
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781fb34;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781fb34:
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781fe54; end: 10781fe67;  */

/* WARNING: Possible PIC construction at 0x00010781feb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ff58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781feb4) */
/* WARNING: Removing unreachable block (ram,0x00010781feb8) */
/* WARNING: Removing unreachable block (ram,0x00010781fec8) */
/* WARNING: Removing unreachable block (ram,0x00010781fed0) */
/* WARNING: Removing unreachable block (ram,0x00010781fed8) */
/* WARNING: Removing unreachable block (ram,0x00010781fee0) */
/* WARNING: Removing unreachable block (ram,0x00010781fee8) */
/* WARNING: Removing unreachable block (ram,0x00010781ff00) */
/* WARNING: Removing unreachable block (ram,0x00010781fef0) */
/* WARNING: Removing unreachable block (ram,0x00010781fef8) */
/* WARNING: Removing unreachable block (ram,0x00010781ff04) */
/* WARNING: Removing unreachable block (ram,0x00010781ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010781ff1c) */
/* WARNING: Removing unreachable block (ram,0x00010781ff20) */
/* WARNING: Removing unreachable block (ram,0x00010781ff14) */
/* WARNING: Removing unreachable block (ram,0x00010781fec0) */
/* WARNING: Removing unreachable block (ram,0x00010781ff5c) */

void FUN_10781fe54(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  
  lVar2 = (long)(128.0 / *(float *)(param_1 + 4));
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781ff6c;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781ff6c:
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107820168; end: 1078201af;  */

void FUN_107820168(long param_1)

{
  long *unaff_x20;
  
  func_0x0001078230f8();
  while (unaff_x20 != (long *)0x0) {
    param_1 = (long)(unaff_x20 + 2);
    unaff_x20 = (long *)*unaff_x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001078224e8();
  }
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107820840; end: 1078208df;  */

long FUN_107820840(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 1078213f8; end: 10782141b;  */

void FUN_1078213f8(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078216a4; end: 1078216bf;  */

void FUN_1078216a4(void)

{
  func_0x0001078221c0();
  func_0x0001078216c0();
  return;
}



/* Entry: 107821890; end: 1078218c7;  */

undefined8 * FUN_107821890(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e0540;
  func_0x0001078218e8(param_1 + 3);
  return param_1;
}



/* Entry: 1078219c4; end: 107821a3b;  */

/* WARNING: Possible PIC construction at 0x0001078219f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078219fc) */
/* WARNING: Removing unreachable block (ram,0x000107821a24) */
/* WARNING: Removing unreachable block (ram,0x000107821a38) */
/* WARNING: Removing unreachable block (ram,0x000107821a1c) */
/* WARNING: Removing unreachable block (ram,0x000107822070) */

void FUN_1078219c4(void)

{
  func_0x000107823144();
  func_0x00010782304c();
  func_0x000107821e20();
  func_0x000107821a64();
  return;
}



/* Entry: 107821c3c; end: 107821c57;  */

void FUN_107821c3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e0590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107823370; end: 1078237e7;  */

/* WARNING: Possible PIC construction at 0x0001078236d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010782371c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078236d8) */
/* WARNING: Removing unreachable block (ram,0x000107823720) */

void FUN_107823370(float **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,float param_7,float param_8,float param_9,
                  float *param_10,undefined1 param_11,int param_12)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  float **ppfVar4;
  uint uVar5;
  bool bVar6;
  float *pfVar7;
  float **ppfVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  undefined8 unaff_d13;
  float fVar28;
  ulong unaff_d14;
  undefined8 unaff_d15;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2e8 [16];
  long lStack_2d8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  float **ppfStack_270;
  float *pfStack_268;
  float *pfStack_260;
  float *pfStack_258;
  float *pfStack_250;
  ulong uStack_248;
  undefined1 *puStack_240;
  undefined *puStack_238;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float *pfStack_218;
  float *pfStack_210;
  uint uStack_208;
  uint uStack_204;
  float **ppfStack_200;
  int iStack_1f4;
  float *pfStack_1f0;
  long lStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  uint uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  undefined1 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float afStack_180 [2];
  ulong uStack_178;
  float afStack_168 [2];
  float *pfStack_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined1 uStack_141;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  float *pfStack_d8;
  uint *puStack_d0;
  float *pfStack_c8;
  float **ppfStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (float *)0x0;
  param_1[2] = (float *)0x0;
  *param_1 = (float *)0x0;
  fVar21 = *param_10;
  uVar2 = *(ushort *)(param_10 + 2);
  uVar3 = *(ushort *)((long)param_10 + 10);
  fStack_14c = param_10[0x1d] - param_10[0x1c];
  fStack_150 = param_10[0x1b] - param_10[0x1a];
  uVar9 = (ulong)(uint)fStack_150;
  fVar22 = (float)(uVar2 - 2 & 0xffff);
  pfStack_140 = (float *)((ulong)(uint)fVar22 << 0x20);
  iStack_1f4 = param_12;
  fStack_148 = fVar21;
  uStack_141 = param_11;
  func_0x0001078243cc(afStack_168);
  uStack_208 = uVar3 - 2;
  fVar23 = (float)(uStack_208 & 0xffff);
  uVar13 = (ulong)(uint)fVar23;
  pfStack_140 = (float *)((ulong)(uint)fVar23 << 0x20);
  uStack_204 = uVar2 - 2;
  ppfStack_200 = param_1;
  func_0x0001078243cc(afStack_180);
  pfVar12 = param_10 + 6;
  pfVar7 = *(float **)pfVar12;
  pfVar14 = *(float **)(param_10 + 8);
  pfStack_210 = pfVar12;
  if (pfVar7 == pfVar14) {
    pfStack_210 = afStack_168;
  }
  uVar17 = *(ulong *)(param_10 + 0xc);
  uVar10 = *(ulong *)(param_10 + 0xe);
  lVar15 = *(long *)pfStack_210;
  pfVar11 = pfVar14;
  if (pfVar7 == pfVar14) {
    pfVar11 = pfStack_160;
  }
  func_0x000107823158(lVar15,pfVar11);
  pfStack_218 = param_10 + 0xc;
  if (uVar17 == uVar10) {
    pfStack_218 = afStack_180;
  }
  fVar19 = (float)uVar9;
  uVar16 = *(undefined8 *)pfStack_218;
  uVar1 = uVar10;
  if (uVar17 == uVar10) {
    uVar1 = uStack_178;
  }
  uVar20 = uVar9;
  fStack_184 = fVar19;
  func_0x000107823158(uVar16,uVar1);
  fStack_198 = (float)uVar20;
  fStack_1a0 = fVar22 - fVar19;
  uVar27 = (ulong)(uint)fStack_1a0;
  fVar23 = fVar23 - fStack_198;
  uVar20 = (ulong)(uint)fVar23;
  fStack_18c = 0.0;
  fStack_194 = 0.0;
  fStack_19c = 0.0;
  fStack_1a4 = 0.0;
  fStack_1a8 = fVar23;
  fStack_190 = fVar19;
  fStack_188 = fStack_198;
  if ((iStack_1f4 != 0) && (((uint)param_10[0x18] & 1) != 0)) {
    fVar26 = param_10[0x14];
    unaff_d13 = 0;
    fStack_224 = fStack_1a0;
    func_0x000107823178(0,fVar26,lVar15,pfVar11);
    fVar28 = param_10[0x15];
    unaff_d14 = (ulong)(uint)fVar28;
    unaff_d15 = 0;
    fStack_18c = (float)unaff_d13;
    func_0x000107823178(0,unaff_d14,uVar16,uVar1);
    fVar24 = param_10[0x16];
    uVar13 = (ulong)(uint)fVar24;
    fStack_194 = (float)unaff_d15;
    fVar22 = fVar26;
    func_0x000107823178(fVar26,uVar13,lVar15,pfVar11);
    fVar25 = param_10[0x17];
    uVar9 = unaff_d14;
    fStack_220 = fVar23;
    fStack_21c = fVar19;
    fStack_190 = fVar22;
    func_0x000107823178(unaff_d14,fVar25,uVar16,uVar1);
    fStack_19c = fVar26 - (float)unaff_d13;
    fStack_198 = (float)uVar9;
    fVar21 = fVar28 - (float)unaff_d15;
    fStack_1a0 = (fVar24 - fVar26) - fVar22;
    uVar27 = (ulong)(uint)fStack_224;
    uVar20 = (ulong)(uint)fStack_220;
    uVar9 = (ulong)(uint)fStack_21c;
    fStack_1a8 = (fVar25 - fVar28) - fStack_198;
    fStack_1a4 = fVar21;
  }
  uStack_1bc = uStack_1bc & 0xffffff00;
  uStack_1ac = 0;
  bVar6 = (float)param_2 != 0.0;
  if (bVar6) {
    fStack_1b4 = (float)param_2 * 0.017453292;
    uVar5 = 0xa2529d39;
    ___sincosf_stret();
    uStack_1bc = uVar5;
    fVar21 = -fStack_1b4;
    fStack_1b8 = fVar21;
    uStack_1b0 = uStack_1bc;
  }
  ppfVar4 = ppfStack_200;
  pfStack_140 = &fStack_18c;
  pfStack_138 = &fStack_190;
  pfStack_130 = &fStack_14c;
  pfStack_128 = param_10;
  pfStack_120 = &fStack_19c;
  pfStack_118 = &fStack_1a0;
  pfStack_110 = &fStack_184;
  pfStack_108 = &fStack_194;
  pfStack_100 = &fStack_198;
  pfStack_f8 = &fStack_150;
  pfStack_f0 = &fStack_1a4;
  pfStack_e8 = &fStack_1a8;
  pfStack_e0 = &fStack_188;
  pfStack_d8 = &fStack_148;
  puStack_d0 = &uStack_1bc;
  pfStack_c8 = param_10;
  ppfStack_c0 = ppfStack_200;
  puStack_b8 = &uStack_141;
  uStack_1ac = bVar6;
  if ((iStack_1f4 == 0) || (pfVar7 == pfVar14 && uVar17 == uVar10)) {
    param_7 = (float)((uStack_204 & 0xffff) + 1);
    param_9 = (float)((uStack_208 & 0xffff) + 1);
    ppfVar8 = &pfStack_140;
    fVar23 = 0.0;
    fVar22 = -1.0;
    fVar21 = 0.0;
    param_5 = -1.0;
    param_6 = 0.0;
    param_8 = 0.0;
    puVar18 = (undefined *)0x107823720;
  }
  else {
    func_0x0001078231ac(uVar27,uVar9,&lStack_1d8,pfStack_210);
    uVar10 = uVar20;
    fVar22 = fStack_188;
    func_0x0001078231ac(&pfStack_1f0,pfStack_218);
    fVar23 = (float)uVar10;
    uVar10 = 0;
    do {
      if ((lStack_1d0 - lStack_1d8 >> 3) - 1U <= uVar10) {
        func_0x0001078240b4(&pfStack_1f0);
        func_0x0001078240b4(&lStack_1d8);
        func_0x00010724e0ac(afStack_180);
        pfVar7 = afStack_168;
        func_0x00010724e0ac();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
          return;
        }
        ___stack_chk_fail();
        func_0x0001078240b4(&lStack_1d8);
        func_0x00010724e0ac(afStack_180);
        func_0x00010724e0ac(afStack_168);
        ppfVar8 = ppfVar4;
        func_0x0001073fb11c();
        puVar18 = &SUB_1078237e8;
        func_0x0001078243d8();
        goto code_r0x0001078237e8;
      }
      pfVar7 = (float *)(lStack_1d8 + uVar10 * 8);
      uVar10 = uVar10 + 1;
      pfVar12 = (float *)(lStack_1d8 + uVar10 * 8);
      pfVar14 = (float *)0x8;
      param_10 = (float *)0x0;
    } while (lStack_1e8 - (long)pfStack_1f0 >> 3 == 1);
    fVar23 = *pfVar7;
    fVar22 = pfVar7[1];
    fVar21 = *pfStack_1f0;
    param_5 = pfStack_1f0[1];
    param_6 = *pfVar12;
    param_7 = pfVar12[1];
    param_8 = pfStack_1f0[2];
    param_9 = pfStack_1f0[3];
    ppfVar8 = &pfStack_140;
    puVar18 = (undefined *)0x1078236d8;
  }
code_r0x0001078237e8:
  ppfStack_270 = ppfVar4;
  fVar26 = **ppfVar8;
  fVar19 = *ppfVar8[1];
  fVar29 = *ppfVar8[2];
  fVar31 = *ppfVar8[7];
  fVar24 = *ppfVar8[8];
  fVar28 = ppfVar8[3][0x1c];
  fVar30 = *ppfVar8[9];
  fVar25 = ppfVar8[3][0x1a];
  pfVar11 = ppfVar8[0xe];
  uStack_2c0 = unaff_d15;
  uStack_2b8 = unaff_d14;
  uStack_2b0 = unaff_d13;
  uStack_2a8 = uVar27;
  uStack_2a0 = param_2;
  uStack_298 = uVar13;
  uStack_290 = uVar9;
  uStack_288 = uVar20;
  uStack_280 = uVar17;
  uStack_278 = uVar1;
  pfStack_268 = pfVar14;
  pfStack_260 = param_10;
  pfStack_258 = pfVar12;
  pfStack_250 = pfVar7;
  uStack_248 = uVar10;
  puStack_240 = &stack0xfffffffffffffff0;
  puStack_238 = puVar18;
  if (*(char *)(pfVar11 + 4) == '\x01') {
    func_0x000107824024(pfVar11);
    func_0x000107824024(pfVar11);
    func_0x000107824024(fVar28 + ((fVar22 - fVar26) * fVar29) / fVar19,
                        fVar25 + ((param_9 - fVar31) * fVar30) / fVar24,pfVar11);
    func_0x000107824024(fVar28 + ((param_7 - fVar26) * fVar29) / fVar19,pfVar11);
  }
  pfVar14 = ppfVar8[0x10];
  uVar13 = (ulong)(uint)(int)(fVar22 + fVar23 + (float)(*(ushort *)(ppfVar8[0xf] + 1) + 1));
  uVar10 = (ulong)(uint)(int)((param_7 + param_6) - (fVar22 + fVar23)) << 0x20 |
           (ulong)(uint)(int)((param_9 + param_8) - (param_5 + fVar21)) << 0x30 |
           (ulong)(uint)(int)(param_5 + fVar21 + (float)(*(ushort *)((long)ppfVar8[0xf] + 6) + 1))
           << 0x10;
  uVar9 = *(ulong *)(pfVar14 + 2);
  if (uVar9 < *(ulong *)(pfVar14 + 4)) {
    func_0x00010782440c(uVar9,uVar10 | uVar13);
    func_0x0001078243f4();
    lVar15 = uVar9 + 0x58;
  }
  else {
    pfVar7 = pfVar14;
    func_0x0001078241a8(pfVar14,(long)(uVar9 - *(long *)pfVar14) / 0x58 + 1);
    func_0x000107824298(auStack_2e8,pfVar7,(*(long *)(pfVar14 + 2) - *(long *)pfVar14) / 0x58,
                        pfVar14 + 4);
    func_0x00010782440c(lStack_2d8,uVar10 | uVar13);
    func_0x0001078243f4();
    lStack_2d8 = lStack_2d8 + 0x58;
    func_0x000107824208(pfVar14,auStack_2e8);
    lVar15 = *(long *)(pfVar14 + 2);
    func_0x000107824314(auStack_2e8);
  }
  *(long *)(pfVar14 + 2) = lVar15;
  return;
}



/* Entry: 107824158; end: 1078241a7;  */

void FUN_107824158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 *param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x000107824368();
  *param_9 = param_1;
  param_9[1] = param_2;
  param_9[2] = param_3;
  param_9[3] = param_4;
  param_9[4] = param_5;
  param_9[5] = param_6;
  param_9[6] = param_7;
  param_9[7] = param_8;
  *(undefined8 *)(param_9 + 8) = param_10;
  *(undefined8 *)(param_9 + 0xc) = in_stack_00000010;
  *(undefined8 *)(param_9 + 10) = in_stack_00000008;
  param_9[0xe] = in_stack_00000000;
  param_9[0xf] = in_stack_00000004;
  *(undefined1 *)(param_9 + 0x10) = param_11;
  *(undefined1 *)((long)param_9 + 0x41) = param_12;
  *(undefined8 *)(param_9 + 0x12) = 0;
  param_9[0x14] = in_stack_00000018;
  param_9[0x15] = in_stack_0000001c;
  return;
}



/* Entry: 107824480; end: 107824723;  */

void FUN_107824480(undefined8 *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [2];
  long *plStack_140;
  undefined1 uStack_138;
  undefined1 auStack_130 [24];
  ulong uStack_118;
  ulong uStack_110;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [56];
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  plVar9 = param_2;
  func_0x0001078253b0();
  plStack_140 = plVar9 + 0xc;
  uStack_138 = 1;
  uStack_68 = extraout_x8;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  uVar3 = param_2[1];
  if ((uVar3 != 0) && (param_2[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_4;
      in_ZR = true;
    }
    else {
      in_ZR = param_4 == uVar3;
      uVar5 = param_4;
      if (uVar3 <= param_4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_4 / uVar3;
        }
        uVar5 = param_4 - uVar5 * uVar3;
      }
    }
    plVar9 = *(long **)(*param_2 + uVar5 * 8);
    if (plVar9 != (long *)0x0) {
LAB_107824510:
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_10782455c;
      uVar6 = plVar9[1];
      if (param_4 != uVar6) {
        if ((uVar3 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar3 <= uVar6) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar6 / uVar3;
          }
          uVar6 = uVar6 - uVar1 * uVar3;
        }
        in_ZR = uVar6 == uVar5;
        if (!(bool)in_ZR) goto LAB_10782455c;
        goto LAB_107824510;
      }
      in_ZR = false;
      if (plVar9[2] != param_4) goto LAB_107824510;
      uStack_160 = 0;
      uStack_158 = 0;
      auStack_150[0] = 0;
      puVar7 = (ulong *)plVar9[3];
      puVar8 = (ulong *)plVar9[4];
      if ((long)puVar8 - (long)puVar7 == 0) goto LAB_1078245f8;
      uVar3 = ((long)puVar8 - (long)puVar7) / 0x30;
      if (0x1e1e1e1e1e1e1e1 < uVar3) goto LAB_1078246b4;
      func_0x0001077fef1c(auStack_130,uVar3,0,auStack_150);
      func_0x0001077feecc(&uStack_160,auStack_130);
      func_0x0001077ff104(auStack_130);
      puVar7 = (ulong *)plVar9[3];
      puVar8 = (ulong *)plVar9[4];
LAB_1078245f8:
      for (; in_ZR = puVar7 == puVar8, !(bool)in_ZR; puVar7 = puVar7 + 6) {
        auStack_a8[0] = 0;
        uStack_70 = 0;
        if ((int)puVar7[1] != -1) {
          func_0x00010725ffdc(auStack_a8,param_2[5] + (long)(int)puVar7[1] * 0x38);
        }
        func_0x0001077fc1d8(auStack_130,param_3,(int)*puVar7,
                            *(int *)((long)puVar7 + 4) - (int)*puVar7);
        uStack_118 = *puVar7 & 0xffffffff;
        uStack_110 = *puVar7 >> 0x20;
        func_0x0001072649c8(auStack_108,auStack_a8);
        func_0x0001077ff520(auStack_c8,puVar7 + 2);
        func_0x0001077fecd0(&uStack_160,auStack_130);
        func_0x0001074058d8(auStack_130);
        func_0x00010724b3d8(auStack_a8);
      }
      param_1[1] = uStack_158;
      *param_1 = uStack_160;
      param_1[2] = auStack_150[0];
      uStack_158 = 0;
      auStack_150[0] = 0;
      uStack_160 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      func_0x000107405848(&uStack_160);
      goto LAB_107824564;
    }
  }
LAB_10782455c:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_107824564:
  func_0x000100100f40(&plStack_140);
  func_0x00010782539c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1078246b4:
  func_0x0001077fef10();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1078246bc);
  (*pcVar2)();
}



/* Entry: 10782514c; end: 10782528b;  */

long * FUN_10782514c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001077ff2a0(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1078257b8; end: 107825abb;  */

/* WARNING: Possible PIC construction at 0x0001078258f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107408418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078258f8) */
/* WARNING: Removing unreachable block (ram,0x000107825904) */
/* WARNING: Removing unreachable block (ram,0x000107825910) */
/* WARNING: Removing unreachable block (ram,0x000107825928) */
/* WARNING: Removing unreachable block (ram,0x000107825934) */
/* WARNING: Removing unreachable block (ram,0x000107825938) */
/* WARNING: Removing unreachable block (ram,0x000107825944) */
/* WARNING: Removing unreachable block (ram,0x000107825948) */
/* WARNING: Removing unreachable block (ram,0x000107825954) */
/* WARNING: Removing unreachable block (ram,0x000107825958) */
/* WARNING: Removing unreachable block (ram,0x000107825964) */
/* WARNING: Removing unreachable block (ram,0x000107825968) */
/* WARNING: Removing unreachable block (ram,0x00010782596c) */
/* WARNING: Removing unreachable block (ram,0x000107825970) */
/* WARNING: Removing unreachable block (ram,0x000107825980) */
/* WARNING: Removing unreachable block (ram,0x000107825984) */

undefined8 *****
FUN_1078257b8(float param_1,undefined8 *****param_2,undefined8 *****param_3,long *param_4,
             uint param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [24];
  long alStack_c8 [4];
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  func_0x000107827884();
  uVar6 = param_1 == 0.0;
  uStack_88 = extraout_x8;
  if (!(bool)uVar6) {
    lVar12 = *param_4;
    uVar6 = lVar12 == param_4[1];
    if (!(bool)uVar6) {
      fVar15 = 0.0;
      for (; lVar12 != param_4[1]; lVar12 = lVar12 + 8) {
        fVar15 = fVar15 + *(float *)(lVar12 + 4);
      }
      fVar14 = (float)(int)(fVar15 / param_1);
      if (fVar14 <= 1.0) {
        fVar14 = 1.0;
      }
      ppppuStack_a8 = &ppppuStack_a8;
      uStack_98 = 0;
      plVar9 = (long *)0x0;
      ppppuStack_a0 = ppppuStack_a8;
      func_0x000107826908(param_3,0x200b,0);
      lVar13 = 0;
      fVar16 = 0.0;
      lVar12 = 1;
      while( true ) {
        lVar3 = *param_4;
        uVar1 = param_4[1] - lVar3 >> 3;
        if (uVar1 <= lVar12 - 1U) break;
        uVar5 = *(ushort *)(lVar3 + lVar13);
        if (0x20 < uVar5 || (1L << ((ulong)uVar5 & 0x3f) & 0x100003e00U) == 0) {
          fVar16 = fVar16 + *(float *)(lVar3 + lVar13 + 4);
        }
        if (lVar12 - 1U < uVar1 - 1) {
          FUN_107873d88((ulong)uVar5);
          goto code_r0x0001074083ec;
        }
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      }
      bVar4 = *(byte *)((long)param_3 + 0x17);
      uVar6 = bVar4 == 0;
      ppppuVar2 = param_3[1];
      if (-1 < (char)bVar4) {
        ppppuVar2 = (undefined8 ****)(ulong)bVar4;
      }
      func_0x0001078256f8(fVar16,fVar15 / (float)(int)fVar14,0,alStack_c8,ppppuVar2,&ppppuStack_a8,1
                         );
      lStack_90 = alStack_c8[0];
      unaff_x19[2] = 0;
      unaff_x19[1] = 0;
      *unaff_x19 = unaff_x19 + 1;
      plVar9 = &lStack_90;
      plVar10 = &lStack_90;
      func_0x000107827634();
      plVar11 = alStack_c8;
      while( true ) {
        param_5 = (uint)plVar10;
        plVar11 = (long *)plVar11[2];
        if (plVar11 == (long *)0x0) break;
        func_0x0001074c39e8();
      }
      param_2 = &ppppuStack_a8;
      func_0x0001078269b4();
      goto LAB_107825a5c;
    }
  }
  unaff_x19[2] = 0;
  unaff_x19[1] = 0;
  *unaff_x19 = unaff_x19 + 1;
  plVar9 = param_4;
LAB_107825a5c:
  func_0x000107827870(uStack_88);
  if ((bool)uVar6) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001074c71cc();
  param_3 = &ppppuStack_a8;
  func_0x0001078269b4();
  func_0x0001078278c8();
code_r0x0001074083ec:
  pppppuVar8 = param_3 + 3;
  func_0x000107405928();
  pppppuVar7 = param_3 + 6;
  if ((ulong)(((long)param_3[7] - (long)*pppppuVar7) / 0xa8) <= (ulong)*(byte *)pppppuVar8) {
    func_0x00010740a6b0();
    func_0x00010740b144();
    func_0x00010740ab38();
    uStack_198 = param_7[1];
    uStack_1a0 = *param_7;
    uStack_190 = param_7[2];
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    func_0x000107407f3c(pppppuVar7,plVar9,param_5 & 0xff,auStack_188,&uStack_1a0,*param_8,param_8[1]
                       );
    func_0x0001056d1ce4(&uStack_1a0);
    func_0x000104c336c8(auStack_188);
    return pppppuVar7;
  }
  return (undefined8 *****)(*pppppuVar7 + (ulong)*(byte *)pppppuVar8 * 0x15);
}



/* Entry: 107826ae0; end: 107826aeb;  */

/* WARNING: Possible PIC construction at 0x000107826b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107826b20) */
/* WARNING: Removing unreachable block (ram,0x000107826b30) */
/* WARNING: Removing unreachable block (ram,0x000107826c0c) */
/* WARNING: Removing unreachable block (ram,0x000107826c24) */
/* WARNING: Removing unreachable block (ram,0x000107826c3c) */
/* WARNING: Removing unreachable block (ram,0x000107826c4c) */
/* WARNING: Removing unreachable block (ram,0x000107826c5c) */
/* WARNING: Removing unreachable block (ram,0x000107826bf4) */

undefined8 * FUN_107826ae0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_140 [80];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [112];
  
  func_0x000107827864();
  func_0x000107827884();
  func_0x000107407a9c(auStack_140);
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_e0 = param_3[2];
  func_0x000107278b70(auStack_d8,param_3 + 3);
  uStack_c0 = param_3[6];
  uStack_c8 = param_3[5];
  uStack_b8 = *(undefined4 *)(param_3 + 7);
  func_0x000107263b58(auStack_b0,param_3 + 8);
  return &uStack_f0;
}



/* Entry: 107826e70; end: 107826e9f;  */

void FUN_107826e70(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xa8) {
    func_0x000107826cd8(param_4,uVar1);
    param_4 = lStack_48 + 0xa8;
  }
  uStack_58 = 1;
  func_0x000107826f44(param_1,param_2,param_3);
  func_0x000107826f74(&uStack_70);
  return;
}



/* Entry: 10782705c; end: 1078270a3;  */

ulong FUN_10782705c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 0x333333333333334) {
    uVar2 = (long)(param_1[2] - *param_1) / 0x50;
    uVar3 = uVar2 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x199999999999998 < uVar2) {
      uVar3 = 0x333333333333333;
    }
    return uVar3;
  }
  func_0x000107827134();
  func_0x0001078278bc();
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar5 = *(long *)(param_2 + 8) + ((long)(uVar1 - uVar4) / -0x50) * 0x50;
  uVar2 = uVar5;
  for (uVar3 = uVar4; uVar3 != uVar1; uVar3 = uVar3 + 0x50) {
    func_0x0001074054bc(uVar2,uVar3);
    uVar2 = uVar2 + 0x50;
  }
  for (; uVar4 != uVar1; uVar4 = uVar4 + 0x50) {
    uVar2 = uVar4;
    func_0x00010740553c(uVar4);
  }
  *(ulong *)(unaff_x19 + 8) = uVar5;
  uVar3 = *unaff_x20;
  *unaff_x20 = uVar5;
  unaff_x20[1] = uVar3;
  func_0x00010782782c();
  return uVar2;
}



/* Entry: 107827440; end: 10782747f;  */

long FUN_107827440(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107407a9c();
  func_0x00010054f8dc(lVar1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 107827a00; end: 107827a9b;  */

long FUN_107827a00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107827f54();
    lVar2 = uVar1 + 0xa8;
  }
  else {
    lVar2 = param_1;
    func_0x000107827f8c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xa8;
}



/* Entry: 107827d54; end: 107827d6f;  */

undefined8 * FUN_107827d54(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  lVar4 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar4 < 0) {
    lVar4 = param_1[1];
    lVar3 = (param_1[2] & 0x7fffffffffffffff) - 1;
  }
  else {
    lVar3 = 10;
  }
  if ((ulong)(lVar3 - lVar4) < uVar1) {
    func_0x000107827e28(param_1,lVar3,(uVar1 - lVar3) + lVar4,lVar4,lVar4,0,uVar1);
  }
  else if (uVar1 != 0) {
    puVar5 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar5 = (undefined8 *)*param_1;
    }
    _memmove((long)puVar5 + lVar4 * 2,puVar2,uVar1 << 1);
    lVar4 = lVar4 + uVar1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = lVar4;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)lVar4 & 0x7f;
    }
    *(undefined2 *)((long)puVar5 + lVar4 * 2) = 0;
  }
  return param_1;
}



/* Entry: 107828284; end: 107828383;  */

void FUN_107828284(long *param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  long lVar5;
  long *plVar6;
  
  func_0x0001078286ac();
  if (!(bool)in_CY || (bool)in_ZR) {
    plVar6 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar6 = (long *)*param_1;
    }
    bVar2 = param_3 + param_2 == param_2 * 2;
    func_0x0001078286d4();
    uVar1 = extraout_x12;
    if (!bVar2) {
      uVar1 = extraout_x11 + 1;
    }
    uVar4 = 0xb;
    if (10 < extraout_x10) {
      uVar4 = uVar1;
    }
    if (extraout_x9 < param_2) {
      uVar4 = extraout_x8 + 1;
    }
    plVar3 = param_1;
    func_0x000107407b7c();
    if (param_5 != 0) {
      _memmove(plVar3,plVar6,param_5 << 1);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      _memmove((long)plVar3 + param_7 * 2 + param_5 * 2,(long)plVar6 + param_6 * 2 + param_5 * 2,
               param_4 * 2);
    }
    if (param_2 != 10) {
      __ZdlPv(plVar6);
    }
    *param_1 = (long)plVar3;
    param_1[2] = uVar4 | 0x8000000000000000;
    return;
  }
  func_0x000107407b68();
  lVar5 = param_1[1];
  func_0x000107828450(lVar5);
  param_1[1] = lVar5 + 0xa8;
  return;
}



/* Entry: 107828614; end: 1078286e7;  */

undefined8 * FUN_107828614(void)

{
  long in_stack_00000008;
  
  func_0x000107827020();
  if (in_stack_00000008 != 0) {
    __ZdlPv();
  }
  return &stack0x00000008;
}



/* Entry: 107828a04; end: 107828adf;  */

long FUN_107828a04(long param_1)

{
  undefined8 *in_x4;
  undefined8 in_x5;
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010782cbd4();
  func_0x00010782a318();
  lRam0000000113822d30 = lRam0000000113822d30 + 1;
  *(long *)(lVar1 + 0x368) = lRam0000000113822d30;
  *(undefined1 *)(lVar1 + 0x370) = 1;
  uVar3 = *in_x4;
  *(undefined8 *)(lVar1 + 0x380) = in_x4[1];
  *(undefined8 *)(lVar1 + 0x378) = uVar3;
  *in_x4 = 0;
  in_x4[1] = 0;
  func_0x000107829790(lVar1 + 0x388,in_x5);
  func_0x0001073af260();
  func_0x00010725b034(param_1 + 0x3a8);
  *(long *)(param_1 + 0x3b8) = param_1;
  puVar2 = *(undefined8 **)(param_1 + 0x3a8);
  lVar1 = puVar2[1];
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x3c8) = puVar2[1];
  *(undefined8 *)(param_1 + 0x3c0) = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010782a364();
    } while (extraout_w10 != 0);
  }
  *(long *)(param_1 + 0x3d0) = param_1 + 0x3a8;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  return param_1;
}



/* Entry: 107829290; end: 10782931b;  */

void FUN_107829290(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  uStack_21 = 0;
  lVar1 = *(long *)(param_1 + 0x220) + 0xb50;
  func_0x00010724e2c8(lVar1,&uStack_21);
  if ((((int)lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0x1e8), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x28) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x28) = 0;
  }
  *(undefined1 *)(param_1 + 0x370) = 1;
  *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 1;
  (**(code **)(**(long **)(param_1 + 0x90) + 0x10))(*(long **)(param_1 + 0x90),param_1);
  return;
}



/* Entry: 107829878; end: 107829acb;  */

/* WARNING: Possible PIC construction at 0x000107829a00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107829a04) */

long * FUN_107829878(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined1 auStack_330 [56];
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [56];
  undefined1 auStack_278 [120];
  undefined1 auStack_200 [240];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_70;
  
  func_0x00010782a3ac();
  plVar1 = (long *)*param_2;
  plVar5 = plVar1;
  uStack_70 = extraout_x8;
  if (plVar1 != (long *)0x0) {
    lVar6 = param_1[1];
    (**(code **)(*plVar1 + 0x10))();
    plVar5 = plVar1;
    for (plVar3 = (long *)0x0; in_ZR = plVar3 == plVar1, !(bool)in_ZR;
        plVar3 = (long *)((long)plVar3 + 1)) {
      (**(code **)(*(long *)*param_2 + 0x18))(&lStack_340,(long *)*param_2,plVar3);
      lVar4 = *param_1;
      if (*(char *)(lVar4 + 0x80) != '\x01') {
LAB_1078299b4:
        plVar5 = (long *)param_1[2];
        func_0x00010729807c(auStack_278,lVar6 + 0x20);
        func_0x00010729807c(auStack_2e8,param_3);
        func_0x0001078344c8(auStack_200,lStack_340,lVar6 + 0x10,auStack_278,auStack_2e8);
        uStack_108 = *(undefined8 *)(lVar6 + 0x14);
        uStack_110 = *(undefined8 *)(lVar6 + 0xc);
        uStack_100 = 1;
        goto code_r0x000107829acc;
      }
      uVar7 = NEON_ucvtf((uint)*(byte *)(lVar6 + 0xc));
      func_0x0001077512dc(uVar7,auStack_200);
      lStack_348 = lStack_338;
      lStack_350 = lStack_340;
      if (lStack_338 != 0) {
        do {
          func_0x00010782a364();
        } while (extraout_w10 != 0);
      }
      func_0x000104c2fe00(auStack_2e8,lVar6 + 0x20);
      func_0x000104c2fe00(auStack_2b0,param_3);
      func_0x0001073c4f74(auStack_278,auStack_2e8);
      func_0x000107751444(auStack_200,&lStack_350,auStack_278);
      auStack_330[0] = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uVar2 = lVar4 + 0x20;
      FUN_10777faa8(uVar2,auStack_200,auStack_330);
      func_0x00010724b3d8(auStack_330);
      func_0x000107267e8c(auStack_278);
      func_0x000107267eac(auStack_2e8);
      func_0x000107267e44(&lStack_350);
      func_0x000107267da8(auStack_200);
      if ((uVar2 & 1) != 0) goto LAB_1078299b4;
      plVar5 = &lStack_340;
      func_0x000107330fdc();
    }
  }
  func_0x00010782a2fc(uStack_70);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_330);
  func_0x000107267e8c(auStack_278);
  func_0x000107267eac(auStack_2e8);
  func_0x000107267e44(&lStack_350);
  func_0x000107267da8(auStack_200);
  plVar5 = &lStack_340;
  func_0x000107330fdc();
  func_0x00010782a34c();
code_r0x000107829acc:
  uVar2 = plVar5[1];
  if (uVar2 < (ulong)plVar5[2]) {
    func_0x000107829b08();
    plVar1 = (long *)(uVar2 + 0x108);
  }
  else {
    plVar1 = plVar5;
    func_0x000107829b30();
  }
  plVar5[1] = (long)plVar1;
  return plVar1 + -0x21;
}



/* Entry: 107829de0; end: 107829e3b;  */

void FUN_107829de0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x108) {
    func_0x000107269e60();
  }
  return;
}



/* Entry: 107829f6c; end: 10782a05b;  */

undefined8 * FUN_107829f6c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar4 = param_1;
  func_0x00010782a3ac();
  pcVar6 = (code *)puVar4[2];
  plVar1 = (long *)(puVar4[1] + ((long)puVar4[3] >> 1));
  if ((puVar4[3] & 1) != 0) {
    pcVar6 = *(code **)(*plVar1 + ((ulong)pcVar6 & 0xffffffff));
  }
  uVar5 = param_1[6];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar7 = param_1[0xc];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puStack_60 = (undefined8 *)0x0;
  uStack_88 = uVar3;
  uStack_80 = uVar7;
  uStack_58 = extraout_x8;
  func_0x00010782a35c();
  *puVar4 = &PTR_DAT_1109e0880;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar7;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_60 = puVar4;
  (*pcVar6)(plVar1,param_1 + 4,uVar5,param_1 + 7,auStack_78);
  func_0x000107567218(auStack_78);
  puVar4 = &uStack_88;
  func_0x00010724b54c();
  func_0x00010782a2fc(uStack_58);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107567218(auStack_78);
  puVar4 = &uStack_88;
  func_0x00010724b54c();
  func_0x00010782a34c();
  *puVar4 = &PTR_DAT_1109e0880;
  func_0x00010724b54c(puVar4 + 2);
  return puVar4;
}



/* Entry: 10782a1bc; end: 10782a1cf;  */

void FUN_10782a1bc(void)

{
  func_0x00010782a190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


