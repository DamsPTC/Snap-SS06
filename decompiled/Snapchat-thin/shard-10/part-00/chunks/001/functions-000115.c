/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074e71f0; end: 1074e71fb;  */

void FUN_1074e71f0(void)

{
  return;
}



/* Entry: 1074e71fc; end: 1074e721b;  */

void FUN_1074e71fc(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074e721c();
  }
  return;
}



/* Entry: 1074e721c; end: 1074e723f;  */

undefined8 FUN_1074e721c(undefined8 param_1)

{
  FUN_1074e7240(param_1,0);
  return param_1;
}



/* Entry: 1074e7240; end: 1074e7257;  */

void FUN_1074e7240(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001074e7184(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074e7258; end: 1074e7273;  */

void FUN_1074e7258(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001074e7184(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074e7274; end: 1074e729b;  */

void FUN_1074e7274(long param_1)

{
  FUN_1074e729c(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074e730c();
  }
  return;
}



/* Entry: 1074e729c; end: 1074e72df;  */

void FUN_1074e729c(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x0001074e9538((&PTR_FUN_1109b5c38)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 1074e72e0; end: 1074e72eb;  */

void FUN_1074e72e0(void)

{
  return;
}



/* Entry: 1074e72ec; end: 1074e730b;  */

void FUN_1074e72ec(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1074e730c();
  }
  return;
}



/* Entry: 1074e730c; end: 1074e732f;  */

undefined8 FUN_1074e730c(undefined8 param_1)

{
  FUN_1074e7330(param_1,0);
  return param_1;
}



/* Entry: 1074e7330; end: 1074e7347;  */

void FUN_1074e7330(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074e7274(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074e7348; end: 1074e7363;  */

void FUN_1074e7348(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074e7274(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074e7364; end: 1074e74bb;  */

/* WARNING: Possible PIC construction at 0x0001074e73c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e73d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e73f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e7408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e7420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e7438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e745c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e7474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e748c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074e74a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074e7490) */
/* WARNING: Removing unreachable block (ram,0x0001074e7478) */
/* WARNING: Removing unreachable block (ram,0x0001074e7460) */
/* WARNING: Removing unreachable block (ram,0x0001074e743c) */
/* WARNING: Removing unreachable block (ram,0x0001074e7424) */
/* WARNING: Removing unreachable block (ram,0x0001074e740c) */
/* WARNING: Removing unreachable block (ram,0x0001074e73f4) */
/* WARNING: Removing unreachable block (ram,0x0001074e73dc) */
/* WARNING: Removing unreachable block (ram,0x0001074e73c4) */
/* WARNING: Removing unreachable block (ram,0x0001074e74a8) */

void FUN_1074e7364(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001074e9550();
  FUN_1074e74bc();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_1074e7644(param_1 + 0x20,unaff_x19 + 0x20);
  FUN_1074e7830(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  FUN_1074e79b4(unaff_x20 + 0x78,unaff_x19 + 0x78);
  func_0x00010743344c(unaff_x20 + 200,unaff_x19 + 200);
  func_0x00010743b73c(unaff_x20 + 0x130,unaff_x19 + 0x130);
  FUN_10743390c();
  func_0x00010743bbb8();
  func_0x00010727df88();
  return;
}



/* Entry: 1074e74bc; end: 1074e7507;  */

void FUN_1074e74bc(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001074e9844();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      func_0x0001074e97fc();
    }
  }
  else if (extraout_w8 == 0) {
    FUN_1074e7508();
  }
  else {
    FUN_1074e730c();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 1074e7508; end: 1074e7533;  */

void FUN_1074e7508(long param_1,undefined8 *param_2)

{
  FUN_1074e7534(param_1,*param_2);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1074e7534; end: 1074e755f;  */

void FUN_1074e7534(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x0001074e9550();
  uVar1 = 0x58;
  __Znwm();
  FUN_1074e7560();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1074e7560; end: 1074e759b;  */

void FUN_1074e7560(void)

{
  undefined1 in_ZR;
  
  func_0x0001074e9544();
  func_0x0001074e97dc();
  if ((bool)in_ZR) {
    FUN_1074e7508();
  }
  func_0x0001074e97c8();
  FUN_1074e759c();
  return;
}



/* Entry: 1074e759c; end: 1074e75c3;  */

void FUN_1074e759c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1074e75c4();
  return;
}



/* Entry: 1074e75c4; end: 1074e760b;  */

void FUN_1074e75c4(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9544();
  FUN_1074e729c();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5c50)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1074e760c; end: 1074e761f;  */

void FUN_1074e760c(void)

{
  return;
}



/* Entry: 1074e7620; end: 1074e7643;  */

void FUN_1074e7620(long param_1,long param_2)

{
  func_0x00010727da70();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1074e7644; end: 1074e7667;  */

undefined8 FUN_1074e7644(undefined8 param_1)

{
  FUN_1074e7668();
  return param_1;
}



/* Entry: 1074e7668; end: 1074e76bb;  */

void FUN_1074e7668(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001074e9538((&PTR_FUN_1109b5c38)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x0001074e9770();
  }
  return;
}



/* Entry: 1074e76bc; end: 1074e76cf;  */

void FUN_1074e76bc(long *param_1)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x0001074e967c();
    FUN_1074e76f8();
  }
  return;
}



/* Entry: 1074e76d0; end: 1074e76f7;  */

void FUN_1074e76d0(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001074e967c();
    FUN_1074e76f8();
  }
  return;
}



/* Entry: 1074e76f8; end: 1074e771b;  */

void FUN_1074e76f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1074e729c(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 1074e771c; end: 1074e7723;  */

void FUN_1074e771c(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7758();
  return;
}



/* Entry: 1074e7724; end: 1074e7757;  */

void FUN_1074e7724(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7758();
  return;
}



/* Entry: 1074e7758; end: 1074e7763;  */

void FUN_1074e7758(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001074e9550(*param_1,param_1[1]);
  FUN_1074e729c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1074e7764; end: 1074e7793;  */

void FUN_1074e7764(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001074e9550();
  FUN_1074e729c();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 1074e7794; end: 1074e779b;  */

void FUN_1074e7794(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x0001074e9550(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x0001074e967c();
  FUN_1074e77f8();
  return;
}



/* Entry: 1074e779c; end: 1074e77cf;  */

void FUN_1074e779c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x0001074e9550(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x0001074e967c();
  FUN_1074e77f8();
  return;
}



/* Entry: 1074e77d0; end: 1074e77f7;  */

void FUN_1074e77d0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9550();
  func_0x00010727e15c();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1074e77f8; end: 1074e7803;  */

void FUN_1074e77f8(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001074e9550(*param_1,param_1[1]);
  FUN_1074e729c();
  func_0x0001074e96c8();
  FUN_1074e7620();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 1074e7804; end: 1074e782f;  */

void FUN_1074e7804(void)

{
  long unaff_x20;
  
  func_0x0001074e9550();
  FUN_1074e729c();
  func_0x0001074e96c8();
  FUN_1074e7620();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 1074e7830; end: 1074e787b;  */

void FUN_1074e7830(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001074e9844();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      func_0x0001074e97fc();
    }
  }
  else if (extraout_w8 == 0) {
    FUN_1074e787c();
  }
  else {
    FUN_1074e721c();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 1074e787c; end: 1074e78a7;  */

void FUN_1074e787c(long param_1,undefined8 *param_2)

{
  FUN_1074e78a8(param_1,*param_2);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1074e78a8; end: 1074e78d3;  */

void FUN_1074e78a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x0001074e9550();
  uVar1 = 0x70;
  __Znwm();
  FUN_1074e78d4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1074e78d4; end: 1074e790f;  */

void FUN_1074e78d4(void)

{
  undefined1 in_ZR;
  
  func_0x0001074e9544();
  func_0x0001074e97dc();
  if ((bool)in_ZR) {
    FUN_1074e787c();
  }
  func_0x0001074e97c8();
  FUN_1074e7910();
  return;
}



/* Entry: 1074e7910; end: 1074e7937;  */

void FUN_1074e7910(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_1074e7938();
  return;
}



/* Entry: 1074e7938; end: 1074e797f;  */

void FUN_1074e7938(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9544();
  FUN_1074e71ac();
  uVar1 = *(uint *)(unaff_x20 + 0x48);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5c80)[uVar1]);
    *(uint *)(unaff_x19 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 1074e7980; end: 1074e7993;  */

void FUN_1074e7980(void)

{
  return;
}



/* Entry: 1074e7994; end: 1074e79b3;  */

void FUN_1074e7994(void)

{
  func_0x00010727da70();
  func_0x0001074e9884();
  return;
}



/* Entry: 1074e79b4; end: 1074e79d7;  */

undefined8 FUN_1074e79b4(undefined8 param_1)

{
  FUN_1074e79d8();
  return param_1;
}



/* Entry: 1074e79d8; end: 1074e7a2b;  */

void FUN_1074e79d8(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x48) != -1 || *(int *)(param_2 + 0x48) != -1) {
    if (*(int *)(param_2 + 0x48) == -1) {
      if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
        func_0x0001074e9538((&PTR_FUN_1109b5c20)[*(uint *)(param_1 + 0x48)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      return;
    }
    func_0x0001074e9770();
  }
  return;
}



/* Entry: 1074e7a2c; end: 1074e7a3f;  */

void FUN_1074e7a2c(long *param_1)

{
  if (*(int *)(*param_1 + 0x48) != 0) {
    func_0x0001074e967c();
    FUN_1074e7a68();
  }
  return;
}



/* Entry: 1074e7a40; end: 1074e7a67;  */

void FUN_1074e7a40(long param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x0001074e967c();
    FUN_1074e7a68();
  }
  return;
}



/* Entry: 1074e7a68; end: 1074e7a8b;  */

void FUN_1074e7a68(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1074e71ac(lVar1);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  return;
}



/* Entry: 1074e7a8c; end: 1074e7a93;  */

void FUN_1074e7a8c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x48) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7ad0();
  return;
}



/* Entry: 1074e7a94; end: 1074e7acf;  */

void FUN_1074e7a94(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x48) == 1) {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7ad0();
  return;
}



/* Entry: 1074e7ad0; end: 1074e7adb;  */

void FUN_1074e7ad0(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001074e9550(*param_1,param_1[1]);
  FUN_1074e71ac();
  func_0x0001074e9830();
  *(undefined4 *)(unaff_x20 + 0x48) = 1;
  return;
}



/* Entry: 1074e7adc; end: 1074e7b07;  */

void FUN_1074e7adc(void)

{
  long unaff_x20;
  
  func_0x0001074e9550();
  FUN_1074e71ac();
  func_0x0001074e9830();
  *(undefined4 *)(unaff_x20 + 0x48) = 1;
  return;
}



/* Entry: 1074e7b08; end: 1074e7b0f;  */

void FUN_1074e7b08(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*param_1 + 0x48) == 2) {
    func_0x0001074e9550(param_2,param_3);
    func_0x00010727e15c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x39);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x31);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x39) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x31) = uVar1;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7b74();
  return;
}



/* Entry: 1074e7b10; end: 1074e7b43;  */

void FUN_1074e7b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x48) == 2) {
    func_0x0001074e9550(param_2,param_3);
    func_0x00010727e15c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x39);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x31);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x39) = uVar2;
    *(undefined8 *)(unaff_x20 + 0x31) = uVar1;
    return;
  }
  func_0x0001074e967c();
  FUN_1074e7b74();
  return;
}



/* Entry: 1074e7b44; end: 1074e7b73;  */

void FUN_1074e7b44(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001074e9550();
  func_0x00010727e15c();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x39);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x31);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x39) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x31) = uVar1;
  return;
}



/* Entry: 1074e7b74; end: 1074e7b7f;  */

void FUN_1074e7b74(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001074e9550(*param_1,param_1[1]);
  FUN_1074e71ac();
  func_0x0001074e96c8();
  FUN_1074e7994();
  *(undefined4 *)(unaff_x20 + 0x48) = 2;
  return;
}



/* Entry: 1074e7b80; end: 1074e7bab;  */

void FUN_1074e7b80(void)

{
  long unaff_x20;
  
  func_0x0001074e9550();
  FUN_1074e71ac();
  func_0x0001074e96c8();
  FUN_1074e7994();
  *(undefined4 *)(unaff_x20 + 0x48) = 2;
  return;
}



/* Entry: 1074e7bac; end: 1074e7d67;  */

long FUN_1074e7bac(long param_1,long param_2)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9550();
  uVar1 = *(uint *)(param_2 + 0x30);
  if (*(int *)(param_1 + 0x30) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      func_0x0001074e9768();
    }
    else {
      (*(code *)(&PTR_FUN_1109b5cb0)[uVar1])(&stack0xffffffffffffffd8);
    }
  }
  uVar1 = *(uint *)(unaff_x19 + 0x80);
  if (*(int *)(unaff_x20 + 0x80) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_1074e7014(unaff_x20 + 0x38);
    }
    else {
      (*(code *)(&PTR_DAT_1109b5cc0)[uVar1])
                (&stack0xffffffffffffffd8,unaff_x20 + 0x38,unaff_x19 + 0x38);
    }
  }
  FUN_107433ce0(unaff_x20 + 0x88,unaff_x19 + 0x88);
  FUN_1073ddf7c(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
  FUN_1073ddf7c(unaff_x20 + 0x108,unaff_x19 + 0x108);
  FUN_1073ddf7c(unaff_x20 + 0x140,unaff_x19 + 0x140);
  FUN_1073ddf7c(unaff_x20 + 0x178,unaff_x19 + 0x178);
  FUN_1073ddf7c(unaff_x20 + 0x1b0,unaff_x19 + 0x1b0);
  FUN_1073ddf7c(unaff_x20 + 0x1e8,unaff_x19 + 0x1e8);
  FUN_1073ddf7c(unaff_x20 + 0x220,unaff_x19 + 0x220);
  FUN_1074e7e7c(unaff_x20 + 0x260,unaff_x19 + 0x260);
  FUN_1073ddf7c(unaff_x20 + 0x2f8,unaff_x19 + 0x2f8);
  FUN_1074e7e7c(unaff_x20 + 0x338,unaff_x19 + 0x338);
  FUN_1073ddf7c(unaff_x20 + 0x3d0,unaff_x19 + 0x3d0);
  FUN_1073ddf7c(unaff_x20 + 0x408,unaff_x19 + 0x408);
  FUN_1073e90b8(unaff_x20 + 0x440,unaff_x19 + 0x440);
  FUN_1073ddf7c(unaff_x20 + 0x478,unaff_x19 + 0x478);
  FUN_1073ddf7c(unaff_x20 + 0x4b0,unaff_x19 + 0x4b0);
  FUN_1073ddf7c(unaff_x20 + 0x4e8,unaff_x19 + 0x4e8);
  FUN_1073de0e0(unaff_x20 + 0x528,unaff_x19 + 0x528);
  FUN_1073ddf7c(unaff_x20 + 0x598,unaff_x19 + 0x598);
  FUN_107433ce0(unaff_x20 + 0x5d0,unaff_x19 + 0x5d0);
  FUN_1073ddf7c(unaff_x20 + 0x618,unaff_x19 + 0x618);
  FUN_1073ddfa0(unaff_x20 + 0x650,unaff_x19 + 0x650);
  return unaff_x20 + 0x650;
}



/* Entry: 1074e7d68; end: 1074e7e7b;  */

void FUN_1074e7d68(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x0001074e96b4();
  if (*(int *)(unaff_x20 + 0x30) == 0) {
    *param_2 = *unaff_x19;
  }
  else {
    func_0x0001074e9768();
    *unaff_x20 = *unaff_x19;
    *(undefined4 *)(unaff_x20 + 0x30) = 0;
  }
  return;
}



/* Entry: 1074e7e7c; end: 1074e7eef;  */

long FUN_1074e7e7c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_28;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if (*(int *)(param_1 + 0x90) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      FUN_1073e7178(param_1);
    }
    else {
      lStack_28 = param_1;
      (*(code *)(&PTR_FUN_1109b5cd0)[uVar1])(&lStack_28,param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1074e7ef0; end: 1074e806b;  */

long FUN_1074e7ef0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e96b4();
  if (*(int *)(unaff_x20 + 0x90) != 0) {
    func_0x0001074e96c0();
    func_0x0001074e96c8();
    func_0x00010726ccd4();
    *(undefined4 *)(unaff_x20 + 0x90) = 0;
    return param_1;
  }
  func_0x0001074e970c();
  func_0x0001072747d8();
  func_0x000104c2f1f0();
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  func_0x0001002a8208(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return unaff_x20;
}



/* Entry: 1074e806c; end: 1074e808b;  */

long FUN_1074e806c(long param_1)

{
  undefined4 extraout_w8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1074e80bc();
  return unaff_x19;
}



/* Entry: 1074e808c; end: 1074e80bb;  */

void FUN_1074e808c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1074e80bc();
  return;
}



/* Entry: 1074e80bc; end: 1074e8103;  */

void FUN_1074e80bc(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9544();
  FUN_1074e729c();
  uVar1 = *(uint *)(unaff_x20 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5ce0)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1074e8104; end: 1074e8117;  */

void FUN_1074e8104(void)

{
  return;
}



/* Entry: 1074e8118; end: 1074e813b;  */

void FUN_1074e8118(long param_1,long param_2)

{
  func_0x00010727d6bc();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 1074e813c; end: 1074e816b;  */

void FUN_1074e813c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_1074e816c();
  return;
}



/* Entry: 1074e816c; end: 1074e81b3;  */

void FUN_1074e816c(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074e9544();
  FUN_1074e71ac();
  uVar1 = *(uint *)(unaff_x20 + 0x48);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5cf8)[uVar1]);
    *(uint *)(unaff_x19 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 1074e81b4; end: 1074e81c7;  */

void FUN_1074e81b4(void)

{
  return;
}



/* Entry: 1074e81c8; end: 1074e81e7;  */

void FUN_1074e81c8(void)

{
  func_0x00010727d6bc();
  func_0x0001074e9884();
  return;
}



/* Entry: 1074e81e8; end: 1074e83cb;  */

long FUN_1074e81e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1074e7560();
  FUN_1074e78d4(lVar1 + 0x58,param_3);
  func_0x000107432c64(param_1 + 200,param_4);
  func_0x000107432f04(param_1 + 0x130,param_5);
  func_0x000107432f04(param_1 + 0x188,param_6);
  func_0x000107432f04(param_1 + 0x1e0,param_7);
  func_0x000107432f04(param_1 + 0x238,param_8);
  func_0x000107432f04(param_1 + 0x290,param_9);
  func_0x000107432f04(param_1 + 0x2e8,param_10);
  func_0x000107432f04(param_1 + 0x340,param_11);
  func_0x00010748303c(param_1 + 0x398,param_12);
  func_0x000107432f04(param_1 + 0x458,param_13);
  func_0x00010748303c(param_1 + 0x4b0,param_14);
  func_0x000107432f04(param_1 + 0x570,param_15);
  func_0x000107432f04(param_1 + 0x5c8,param_16);
  func_0x00010748ad58(param_1 + 0x620,param_17);
  func_0x000107432f04(param_1 + 0x678,param_18);
  func_0x000107432f04(param_1 + 0x6d0,param_19);
  func_0x000107432f04(param_1 + 0x728,param_20);
  func_0x000107432e2c(param_1 + 0x780,param_21);
  func_0x000107432f04(param_1 + 0x818,param_22);
  func_0x000107432c64(param_1 + 0x870,param_23);
  func_0x000107432f04(param_1 + 0x8d8,param_24);
  func_0x000107432f04(param_1 + 0x930,param_25);
  return param_1;
}



/* Entry: 1074e83cc; end: 1074e83f3;  */

void FUN_1074e83cc(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1073df1c8();
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 1074e83f4; end: 1074e8413;  */

undefined8 FUN_1074e83f4(undefined8 param_1)

{
  func_0x0001074e9784();
  return param_1;
}



/* Entry: 1074e8414; end: 1074e842b;  */

void FUN_1074e8414(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010724faa8(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1074e842c; end: 1074e8483;  */

void FUN_1074e842c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010724faa8(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074e8484; end: 1074e860f;  */

void FUN_1074e8484(undefined8 param_1,long param_2)

{
  long *plVar1;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined1 auStack_148 [48];
  undefined4 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [48];
  uint uStack_c8;
  long alStack_c0 [6];
  int iStack_90;
  
  if (*(int *)(param_2 + 0x50) == -1) {
    func_0x00010563ab98();
    func_0x0001074e9718();
    FUN_1074e7060();
    func_0x0001074e95dc();
    plVar1 = alStack_c0;
    FUN_1074e7060();
    func_0x0001074e960c();
    pcStack_108 = FUN_1074e8610;
    auStack_148[0] = *(undefined1 *)(*plVar1 + 8);
    uStack_118 = 0;
    puStack_110 = &stack0xfffffffffffffff0;
    FUN_1074e876c(extraout_x8_00,auStack_148);
    func_0x0001074e95dc();
    return;
  }
  func_0x0001074e950c();
  (*(code *)(&PTR_FUN_1109b5d10)[extraout_x8])(alStack_c0,&stack0xffffffffffffff78,param_2 + 0x20);
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    lVar2 = unaff_x20[3];
    if (unaff_x21 < lVar2) {
      if (((*(int *)(unaff_x20 + 10) == 0) || (*(int *)(unaff_x20 + 10) == 1)) ||
         ((*(byte *)(unaff_x20 + 6) >> 1 & 1) != 0)) {
        lVar3 = unaff_x20[2];
        if (unaff_x21 < lVar3) {
          func_0x0001074e9564();
          FUN_1074e8484();
        }
        else {
          func_0x0001074e9564(auStack_f8,*unaff_x20);
          FUN_1074e8484();
          func_0x0001074e97f0((float)(unaff_x21 - lVar3),0x4e6e6b28);
          func_0x0001074e95a4(lVar2 - lVar3);
          func_0x0001074e9824();
          FUN_1073b426c();
          if (uStack_c8 == 0 && iStack_90 == 0) {
            func_0x0001074e9628();
            FUN_1074e7060(&stack0xffffffffffffff78);
          }
          else {
            func_0x0001074e9810();
            FUN_1074e7060();
            if (uStack_c8 != 0xffffffff) {
              func_0x0001074e975c((&PTR_FUN_1109b5d38)[uStack_c8]);
              *(uint *)(unaff_x19 + 0x30) = uStack_c8;
            }
          }
          func_0x0001074e95dc();
        }
        goto LAB_1074e8514;
      }
    }
    func_0x0001074e9864();
    FUN_1074e74bc();
    FUN_1074e72ec(&stack0xffffffffffffff78);
  }
  func_0x0001074e9628();
LAB_1074e8514:
  FUN_1074e7060(alStack_c0);
  return;
}



/* Entry: 1074e8610; end: 1074e867b;  */

void FUN_1074e8610(undefined8 param_1,long *param_2)

{
  undefined1 auStack_48 [48];
  undefined4 uStack_18;
  
  auStack_48[0] = *(undefined1 *)(*param_2 + 8);
  uStack_18 = 0;
  FUN_1074e876c(param_1,auStack_48);
  func_0x0001074e95dc();
  return;
}



/* Entry: 1074e867c; end: 1074e876b;  */

undefined1 * FUN_1074e867c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 extraout_w8;
  long lVar4;
  long *plVar5;
  undefined1 auStack_248 [48];
  undefined4 uStack_218;
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [48];
  undefined4 uStack_198;
  undefined8 uStack_e0;
  undefined8 uStack_38;
  
  func_0x0001074e94a0();
  func_0x0001074e97a8();
  if ((bool)in_ZR) {
    plVar5 = (long *)*param_2;
    func_0x0001077512dc(*(undefined4 *)*plVar5,auStack_1c8);
    lVar4 = *plVar5;
    uStack_e0 = *(undefined8 *)(lVar4 + 8);
    auStack_210[0] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = *(undefined8 *)(lVar4 + 0x40);
    FUN_1074e87d0(param_3,auStack_1c8,auStack_210,0);
    auStack_248[0] = (undefined1)param_3;
    uStack_218 = 0;
    puVar3 = auStack_248;
    func_0x0001074e9628();
    func_0x0001074e95dc();
    func_0x00010724b3d8(auStack_210);
    puVar2 = auStack_1c8;
    func_0x000107267da8(puVar2);
  }
  else {
    FUN_1074e8118(auStack_1c8,param_3);
    uStack_198 = 1;
    puVar3 = auStack_1c8;
    func_0x0001074e9628();
    puVar2 = auStack_1c8;
    FUN_1074e7060(puVar2);
  }
  func_0x0001074e9460(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001074e9858();
  func_0x00010724b3d8();
  puVar2 = auStack_1c8;
  func_0x000107267da8();
  func_0x0001074e9528();
  func_0x0001074e94fc();
  *(undefined4 *)(puVar2 + 0x30) = extraout_w8;
  FUN_1074e7060();
  uVar1 = *(uint *)(puVar3 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5d28)[uVar1]);
    *(uint *)(param_1 + 0x30) = uVar1;
  }
  return param_1;
}



/* Entry: 1074e876c; end: 1074e87c3;  */

void FUN_1074e876c(long param_1,long param_2)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_1074e7060();
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5d28)[uVar1]);
    *(uint *)(unaff_x19 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 1074e87c4; end: 1074e87cf;  */

void FUN_1074e87c4(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1074e87d0; end: 1074e8893;  */

undefined8 * FUN_1074e87d0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 uStack_b9;
  undefined8 auStack_b8 [15];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x0001074e9474();
  param_1 = (undefined8 *)*param_1;
  uStack_38 = extraout_x8;
  func_0x000107753050(auStack_b8);
  uVar2 = iStack_40 == 1;
  if ((bool)uVar2) {
    param_1 = auStack_b8;
    func_0x00010727f7dc();
    param_2 = &uStack_b9;
    func_0x000107775b50();
    uVar2 = ((ulong)param_1 & 0x100) == 0;
    puVar4 = param_1;
    bVar1 = (bool)uVar2;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    bVar1 = true;
  }
  func_0x0001074e9688(auStack_b8);
  uVar3 = (uint)puVar4;
  if ((bVar1) && (uVar2 = *(char *)(unaff_x19 + 0x29) == '\x01', uVar3 = param_4, (bool)uVar2)) {
    uVar3 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  func_0x0001074e9460(uStack_38);
  if ((bool)uVar2) {
    return (undefined8 *)(ulong)(uVar3 & 1);
  }
  ___stack_chk_fail();
  func_0x0001074e9688(auStack_b8);
  func_0x0001074e9528();
  *(undefined1 *)*param_1 = *param_2;
  return param_1;
}



/* Entry: 1074e8894; end: 1074e889f;  */

void FUN_1074e8894(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1074e88a0; end: 1074e8abb;  */

void FUN_1074e88a0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [72];
  uint uStack_100;
  undefined1 auStack_f8 [12];
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  int iStack_b0;
  
  func_0x0001074e94a0();
  uVar1 = *(int *)(param_2 + 0x68) == -1;
  if ((bool)uVar1) {
    func_0x00010563ab98();
    goto LAB_1074e8a80;
  }
  func_0x0001074e950c();
  (*(code *)(&PTR_DAT_1109b5d48)[extraout_x8_00])
            (auStack_f8,&stack0xffffffffffffff58,param_2 + 0x20);
  if ((*(byte *)(unaff_x20 + 1) & 1) == 0) {
LAB_1074e893c:
    func_0x0001074e96e4();
  }
  else {
    lVar2 = unaff_x20[3];
    uVar1 = unaff_x21 == lVar2;
    if (lVar2 <= unaff_x21) {
LAB_1074e8920:
      FUN_1074e7830();
      FUN_1074e71fc(&stack0xffffffffffffff58);
      goto LAB_1074e893c;
    }
    if (((*(int *)(unaff_x20 + 0xd) != 0) && (uVar1 = *(int *)(unaff_x20 + 0xd) == 1, !(bool)uVar1))
       && ((*(byte *)(unaff_x20 + 6) >> 1 & 1) == 0)) goto LAB_1074e8920;
    lVar3 = unaff_x20[2];
    uVar1 = unaff_x21 - lVar3 == 0;
    if (unaff_x21 < lVar3) {
      func_0x0001074e9564();
      FUN_1074e88a0();
    }
    else {
      func_0x0001074e9564(auStack_148,*unaff_x20);
      FUN_1074e88a0();
      func_0x0001074e97f0((float)(unaff_x21 - lVar3),0x4e6e6b28);
      func_0x0001074e95a4(lVar2 - lVar3);
      func_0x0001074e9824();
      FUN_1073b426c();
      if (uStack_100 == 0 && iStack_b0 == 0) {
        uStack_158 = uStack_ec;
        uStack_150 = uStack_e4;
        FUN_10743955c(&stack0xffffffffffffff58,&uStack_158);
        func_0x0001074e96e4();
        FUN_1074e7014(&stack0xffffffffffffff58);
      }
      else {
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
        FUN_1074e7014();
        uVar1 = uStack_100 == 0xffffffff;
        if (!(bool)uVar1) {
          (*(code *)(&PTR_FUN_1109b5d70)[uStack_100])(&stack0xffffffffffffff58,auStack_148);
          *(uint *)(unaff_x19 + 0x48) = uStack_100;
        }
      }
      FUN_1074e7014(auStack_148);
    }
  }
  FUN_1074e7014(auStack_f8);
  func_0x0001074e9460(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
LAB_1074e8a80:
  ___stack_chk_fail();
  func_0x0001074e9718();
  FUN_1074e7014();
  FUN_1074e7014(auStack_148);
  FUN_1074e7014(auStack_f8);
  func_0x0001074e960c();
  pcStack_168 = FUN_1074e8abc;
  uStack_178 = 0x41f00000;
  uStack_180 = 0x435200003f933333;
  puStack_170 = &stack0xfffffffffffffff0;
  FUN_1074e8e04(extraout_x8_01,&uStack_180);
  return;
}



/* Entry: 1074e8abc; end: 1074e8ba7;  */

void FUN_1074e8abc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 0x41f00000;
  uStack_20 = 0x435200003f933333;
  FUN_1074e8e04(param_1,&uStack_20);
  return;
}



/* Entry: 1074e8ba8; end: 1074e8cb7;  */

undefined8 * FUN_1074e8ba8(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 extraout_w8;
  long lVar5;
  long *plVar6;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [56];
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 auStack_220 [9];
  undefined4 uStack_1d8;
  undefined8 uStack_138;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001074e94a0();
  func_0x0001074e97a8();
  if ((bool)in_ZR) {
    plVar6 = (long *)*param_1;
    func_0x0001077512dc(*(undefined4 *)*plVar6,auStack_220);
    lVar5 = *plVar6;
    uStack_138 = *(undefined8 *)(lVar5 + 8);
    auStack_268[0] = 0;
    uStack_230 = 0;
    uStack_228 = *(undefined8 *)(lVar5 + 0x40);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_1074e8d1c(&uStack_280,param_2,auStack_220,auStack_268,&uStack_90);
    uStack_88 = uStack_278;
    uStack_90 = uStack_280;
    uStack_80 = uStack_270;
    uStack_48 = 0;
    puVar4 = &uStack_90;
    func_0x0001074e96e4();
    FUN_1074e7014(&uStack_90);
    func_0x00010724b3d8(auStack_268);
    puVar2 = auStack_220;
    func_0x000107267da8();
  }
  else {
    FUN_1074e81c8(auStack_220,param_2);
    uStack_1d8 = 1;
    puVar4 = auStack_220;
    func_0x0001074e96e4();
    puVar2 = auStack_220;
    FUN_1074e7014();
  }
  func_0x0001074e9460(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_268);
  puVar3 = auStack_220;
  func_0x000107267da8();
  func_0x0001074e9528();
  func_0x0001074e94fc();
  *(undefined4 *)(puVar3 + 9) = extraout_w8;
  FUN_1074e7014();
  uVar1 = *(uint *)(puVar4 + 9);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5d60)[uVar1]);
    *(uint *)(puVar2 + 9) = uVar1;
  }
  return puVar2;
}



/* Entry: 1074e8cb8; end: 1074e8d0f;  */

void FUN_1074e8cb8(long param_1,long param_2)

{
  uint uVar1;
  undefined4 extraout_w8;
  long unaff_x19;
  
  func_0x0001074e94fc();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_1074e7014();
  uVar1 = *(uint *)(param_2 + 0x48);
  if (uVar1 != 0xffffffff) {
    func_0x0001074e94dc((&PTR_FUN_1109b5d60)[uVar1]);
    *(uint *)(unaff_x19 + 0x48) = uVar1;
  }
  return;
}



/* Entry: 1074e8d10; end: 1074e8d1b;  */

void FUN_1074e8d10(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  return;
}



/* Entry: 1074e8d1c; end: 1074e8df7;  */

void FUN_1074e8d1c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 *puVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [24];
  byte bStack_c0;
  undefined1 auStack_b9 [121];
  int iStack_40;
  undefined8 uStack_38;
  
  plVar4 = param_2;
  func_0x0001074e9474();
  plVar4 = (long *)*plVar4;
  uStack_38 = extraout_x8;
  func_0x000107753050(auStack_b9 + 1,plVar4,param_3,param_4);
  if (iStack_40 == 1) {
    plVar4 = (long *)(auStack_b9 + 1);
    func_0x00010727f7dc();
    param_3 = (undefined8 *)auStack_b9;
    func_0x0001077774f4(auStack_d8);
  }
  else {
    bStack_c0 = 0;
    auStack_d8[0] = 0;
  }
  func_0x0001074e9688(auStack_b9 + 1);
  plVar1 = param_2 + 5;
  if ((char)param_2[8] == '\0') {
    plVar1 = param_5;
  }
  bVar3 = (bStack_c0 & 1) == 0;
  plVar2 = (long *)auStack_d8;
  if (bVar3) {
    plVar2 = plVar1;
  }
  lVar6 = *plVar2;
  unaff_x19[1] = plVar2[1];
  *unaff_x19 = lVar6;
  unaff_x19[2] = plVar2[2];
  func_0x0001074e9460(uStack_38);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074e9688(auStack_b9 + 1);
  func_0x0001074e9528();
  puVar5 = (undefined8 *)*plVar4;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  puVar5[2] = param_3[2];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  return;
}



/* Entry: 1074e8df8; end: 1074e8e03;  */

void FUN_1074e8df8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  return;
}



/* Entry: 1074e8e04; end: 1074e8e3b;  */

undefined4 * FUN_1074e8e04(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_1074e8e3c();
  return param_1;
}



/* Entry: 1074e8e3c; end: 1074e8ecf;  */

void FUN_1074e8e3c(float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_1;
  fVar1 = (param_1[1] + 90.0) * 0.017453292;
  dVar3 = (double)param_1[2] * 0.017453292519943295;
  fVar6 = (float)dVar3;
  ___sincosf_stret();
  fVar2 = fVar5;
  ___sincosf_stret();
  fVar5 = SUB84(dVar3,0);
  *(ulong *)(param_1 + 3) = CONCAT44(fVar1 * fVar4 * fVar6,fVar5 * fVar4 * fVar6);
  param_1[5] = fVar4 * fVar2;
  return;
}



/* Entry: 1074e8ed0; end: 1074e90f7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001074e8fbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1074e8ed0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long unaff_x19;
  long lVar3;
  long lVar4;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [144];
  uint uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [144];
  int iStack_230;
  undefined1 auStack_228 [104];
  undefined1 auStack_1c0 [104];
  undefined1 auStack_158 [96];
  undefined1 *puStack_f8;
  undefined1 auStack_f0 [152];
  undefined8 uStack_58;
  
  puVar2 = param_3;
  func_0x0001074e9474();
  uStack_58 = extraout_x8;
  FUN_1073f6b50(auStack_2c8,param_4,puVar2 + 4);
  if ((*(byte *)(param_3 + 1) & 1) != 0) {
    in_ZR = param_5 == param_3[3];
    if (param_5 < (long)param_3[3]) {
      iVar1 = (int)param_3 + 0x20;
      FUN_107484080();
      if (iVar1 == 0) {
        lVar3 = param_3[2];
        in_ZR = param_5 == lVar3;
        if (param_5 < lVar3) {
          func_0x0001074e9564();
          FUN_1074e8ed0();
        }
        else {
          lVar4 = param_3[3];
          func_0x0001074e9564(auStack_368,*param_3);
          FUN_1074e8ed0();
          func_0x0001074e97f0(param_1,0x4e6e6b28);
          func_0x0001074e95a4(lVar4 - lVar3);
          func_0x0001074e9824();
          FUN_1073b426c(param_1,0x3f50624dd2f1a9fc);
          if (uStack_2d0 == 0 && iStack_230 == 0) {
            func_0x0001074e90fc(auStack_1c0,auStack_368);
            func_0x0001074e90fc(auStack_228,auStack_2c8);
            func_0x000107278acc(auStack_158,auStack_1c0);
            FUN_1073f6df4(&puStack_f8,auStack_158);
            FUN_1073f5cb4(unaff_x19 + 8,auStack_f0);
            FUN_1073e7178(auStack_f0);
            func_0x00010726b164(auStack_158);
            func_0x00010726b144(auStack_228);
            func_0x00010726b144(auStack_1c0);
          }
          else {
            *(undefined1 *)(unaff_x19 + 8) = 0;
            *(undefined4 *)(unaff_x19 + 0x98) = 0xffffffff;
            func_0x0001074e96c0();
            in_ZR = uStack_2d0 == 0xffffffff;
            if (!(bool)in_ZR) {
              puStack_f8 = (undefined1 *)(unaff_x19 + 8);
              (*(code *)(&PTR_DAT_1109b5d80)[uStack_2d0])(&puStack_f8,auStack_360);
              *(uint *)(unaff_x19 + 0x98) = uStack_2d0;
            }
          }
          func_0x0001074e959c(auStack_368);
        }
        goto LAB_1074e8f5c;
      }
    }
    puStack_f8 = (undefined1 *)((ulong)puStack_f8 & 0xffffffffffffff00);
    auStack_f0[0] = 0;
    FUN_107482f4c(param_3,&puStack_f8);
    FUN_107482a7c(&puStack_f8);
  }
  FUN_1073f5cb4(unaff_x19 + 8,auStack_2c0);
LAB_1074e8f5c:
  func_0x0001074e959c(auStack_2c8);
  func_0x0001074e9460(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074e96c0();
  func_0x0001074e959c(auStack_368);
  func_0x0001074e959c(auStack_2c8);
  func_0x0001074e9528();
  extraout_x8_00[9] = 0;
  extraout_x8_00[8] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[7] = 0;
  extraout_x8_00[6] = 0;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  puVar2 = extraout_x8_00;
  func_0x000104c2f64c();
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  return;
}



/* Entry: 1074e90f8; end: 1074e912b;  */

void FUN_1074e90f8(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1074e912c; end: 1074e929f;  */

void FUN_1074e912c(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  undefined1 auStack_f8 [48];
  uint uStack_c8;
  undefined1 auStack_c0 [48];
  int iStack_90;
  
  func_0x0001074e950c();
  FUN_1073e9538(auStack_c0,param_3,param_2 + 0x20);
  if ((*(byte *)(unaff_x20 + 1) & 1) != 0) {
    if (unaff_x21 < (long)unaff_x20[3]) {
      iVar1 = (int)unaff_x20 + 0x20;
      FUN_10748e31c();
      if (iVar1 == 0) {
        lVar2 = unaff_x20[2];
        if (unaff_x21 < lVar2) {
          func_0x0001074e9564();
          FUN_1074e912c();
        }
        else {
          lVar3 = unaff_x20[3];
          func_0x0001074e9564(auStack_f8,*unaff_x20);
          FUN_1074e912c();
          func_0x0001074e97f0((float)(unaff_x21 - lVar2),0x4e6e6b28);
          func_0x0001074e95a4(lVar3 - lVar2);
          func_0x0001074e9824();
          FUN_1073b426c();
          if (uStack_c8 == 0 && iStack_90 == 0) {
            FUN_1073e95fc();
            FUN_1073e71cc(&stack0xffffffffffffff78);
          }
          else {
            func_0x0001074e9810();
            FUN_1073e71cc();
            if (uStack_c8 != 0xffffffff) {
              func_0x0001074e975c((&PTR_FUN_1109b5d90)[uStack_c8]);
              *(uint *)(unaff_x19 + 0x30) = uStack_c8;
            }
          }
          FUN_1073e71cc(auStack_f8);
        }
        goto LAB_1074e9198;
      }
    }
    func_0x0001074e9864();
    FUN_10748ac74();
    FUN_10748aa08(&stack0xffffffffffffff78);
  }
  FUN_1073e95fc();
LAB_1074e9198:
  FUN_1073e71cc(auStack_c0);
  return;
}



/* Entry: 1074e92a0; end: 1074e92bb;  */

void FUN_1074e92a0(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1074e92bc; end: 1074e92fb;  */

ulong FUN_1074e92bc(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3[0x10] != 0) {
    uVar1 = *param_4;
    uVar2 = 0;
    FUN_1074388a0(uVar1,param_4[1],param_4[2],param_4[3],param_3,param_1,param_2);
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*param_3;
}



/* Entry: 1074e92fc; end: 1074e9323;  */

undefined4
FUN_1074e92fc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 1074e9324; end: 1074e93df;  */

/* WARNING: Possible PIC construction at 0x0001074e935c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074e9360) */
/* WARNING: Removing unreachable block (ram,0x0001074e9388) */

undefined8 * FUN_1074e9324(void)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long in_x3;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_a0 [8];
  undefined8 auStack_98 [13];
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = in_x3;
  func_0x0001074e9474();
  if (*(int *)(lVar3 + 0x98) == 0) {
    func_0x0001074e9460(extraout_x8);
    puVar2 = unaff_x19;
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar2 = auStack_98;
      func_0x00010726b164();
      func_0x0001074e9528();
      *puVar2 = &PTR_DAT_1109af438;
      FUN_10742dcd0(puVar2[1],puVar2);
      return puVar2;
    }
  }
  else {
    puVar2 = auStack_98;
    unaff_x30 = 0x1074e9360;
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x20 = in_x3;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a484();
  func_0x000104c2fe00();
  *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(unaff_x20 + 0x38);
  func_0x00010028af84(puVar2 + 8,unaff_x20 + 0x40);
  return unaff_x19;
}



/* Entry: 1074e93e0; end: 1074e93e3;  */

undefined8 * FUN_1074e93e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109af438;
  FUN_10742dcd0(param_1[1],param_1);
  return param_1;
}



/* Entry: 1074e93e4; end: 1074e944f;  */

void FUN_1074e93e4(void)

{
  FUN_1074321c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


