/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054473f4; end: 105447767;  */

void FUN_1054473f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  int iVar1;
  long lVar2;
  int iStack_74;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_3 + 0xa8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_3 + 8),&UNK_10ddaddea,599);
      iStack_74 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_74;
      func_0x0001005edcd4(lVar2,iStack_74,param_5);
      iStack_74 = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_6);
      func_0x0001005fcac0(lVar2,&iStack_74,param_7);
      func_0x0001005fcac0(lVar2,&iStack_74,param_8);
      iVar1 = iStack_74;
      iStack_74 = iStack_74 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_9);
      func_0x0001005fcac0(lVar2,&iStack_74,param_10);
      iVar1 = iStack_74;
      func_0x0001005edcd4(lVar2,iStack_74,param_11);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_12);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_13);
      iStack_74 = iVar1 + 4;
      func_0x00010bccb848(param_1,lVar2,iVar1 + 3);
      func_0x0001005fcac0(lVar2,&iStack_74,param_14);
      iVar1 = iStack_74;
      func_0x00010bccb848(param_2,lVar2,iStack_74);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_15);
      iStack_74 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_16);
      func_0x0001005fcac0(lVar2,&iStack_74,param_17);
      func_0x0001005fcac0(lVar2,&iStack_74,param_18);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105447768; end: 105447a83;  */

void FUN_105447768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xb0;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddae042,0x26e);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_3);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      iStack_64 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_6);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_7);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_8);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_9);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_10);
      iStack_64 = iVar1 + 5;
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_11);
      func_0x0001005fcac0(lVar2,&iStack_64,param_12);
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_13);
      func_0x0001005fcac0(lVar2,&iStack_64,param_15);
      func_0x00010b5eeb94(lVar2,&iStack_64,param_16);
      func_0x0001005fcac0(lVar2,&iStack_64,param_17);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105447a84; end: 105447c37;  */

void FUN_105447a84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xb8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddae2b1,0xd4);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      func_0x0001005edcd4(lVar2,iStack_54,param_3);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      iStack_54 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      func_0x0001005fcac0(lVar2,&iStack_54,param_6);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105447c38; end: 105447de3;  */

void FUN_105447c38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xc0;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddae386,0x9e);
      iStack_44 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_44,param_4);
      func_0x00010b5eeb94(lVar2,&iStack_44,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105447de4; end: 105447fef;  */

void FUN_105447de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_9);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 200;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddae425,0x1a4);
      iStack_64 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_3);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_6);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_7);
      iStack_64 = iVar1 + 6;
      func_0x0001005edcd4(lVar2,iVar1 + 5,param_8);
      func_0x0001005fcac0(lVar2,&iStack_64,param_9);
      func_0x0001005edcd4(lVar2,iStack_64,param_10);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105447ff0; end: 1054481b7;  */

void FUN_105447ff0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0xd0;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddae5ca,0xda);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_4);
      func_0x0001005fcac0(lVar2,&iStack_54,param_5);
      func_0x00010b5eeb94(lVar2,&iStack_54,param_6);
      func_0x00010bccb848(param_1,lVar2,iStack_54);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054481b8; end: 1054483ff;  */

void FUN_1054481b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  int iStack_74;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0xd8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddae6a5,0x183);
      iStack_74 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_74;
      func_0x00010bccb848(param_1,lVar2,iStack_74);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_4);
      iStack_74 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_5);
      func_0x00010b5eeb94(lVar2,&iStack_74,param_6);
      func_0x00010b5eeb94(lVar2,&iStack_74,param_7);
      func_0x00010b5eeb94(lVar2,&iStack_74,param_8);
      func_0x00010b5eeb94(lVar2,&iStack_74,param_9);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105448400; end: 105448563;  */

void FUN_105448400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0xe0;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddae829,0x71);
      uStack_44 = 1;
      func_0x0001005fcac0();
      func_0x00010b5eec6c(lVar1,&uStack_44,param_3);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105448564; end: 105448757;  */

void FUN_105448564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xe8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddae89b,0x101);
      iStack_54 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_54,param_4);
      func_0x0001005fcac0(lVar2,&iStack_54,param_5);
      func_0x0001005fcac0(lVar2,&iStack_54,param_6);
      func_0x0001005edcd4(lVar2,iStack_54,param_7);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105448758; end: 1054489fb;  */

void FUN_105448758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined4 uStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0xf0;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddae99d,0x177);
      uStack_64 = 1;
      func_0x0001005fcac0();
      func_0x00010b5eeb94(lVar1,&uStack_64,param_3);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_4);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_5);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_6);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_7);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_8);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_9);
      func_0x00010b5eeb94(lVar1,&uStack_64,param_10);
      func_0x00010b5ef0d0(lVar1);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054489fc; end: 105448ba7;  */

void FUN_1054489fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0xf8;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddaeb15,0xb4);
      iStack_44 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eec6c(lVar2,&iStack_44,param_4);
      func_0x00010b5eec6c(lVar2,&iStack_44,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105448ba8; end: 105448d53;  */

void FUN_105448ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x100;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddaebca,0xaa);
      iStack_44 = 1;
      func_0x0001005fcac0();
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_44,param_4);
      func_0x00010b5eeb94(lVar2,&iStack_44,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105448d54; end: 105448da7;  */

undefined8 * FUN_105448d54(undefined8 *param_1)

{
  _objc_release(param_1[0x11]);
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 105448da8; end: 105448eef; -[SCAdWebviewConfigRepositoryImpl initWithTransactorProvider:adCrashLogger:performer:] */

undefined8 *
FUN_105448da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e84f0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105448ef0; end: 105448f5b;  */

void FUN_105448ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9160;
  _objc_opt_class(PTR_PTR_1126b9160);
  uVar3 = uVar1;
  func_0x00010c279920(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dddfb8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105448f5c; end: 105449063; -[SCAdWebviewConfigRepositoryImpl beginObservationWithAdUnifiedEventStreams:] */

void FUN_105448f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef64a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105449064; end: 1054490ab;  */

void FUN_105449064(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054490ac; end: 1054491b3; -[SCAdWebviewConfigRepositoryImpl beginObservationWithAdWebviewEventStreams:] */

void FUN_1054490ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef64a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1054491b4; end: 1054491fb;  */

void FUN_1054491b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054491fc; end: 1054495df; -[SCAdWebviewConfigRepositoryImpl _onWebviewConfigEvent:] */

void FUN_1054491fc(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf9a440();
  puVar3 = param_3;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0) goto LAB_1054494d8;
  if (puVar3 == (undefined *)0x0) goto LAB_105449520;
  lVar14 = *(long *)(puVar3 + 0x10);
  lVar15 = param_1;
  while( true ) {
    _objc_retain(lVar14);
    lVar4 = lVar14;
    func_0x00010c08fa60();
    _objc_release(lVar14);
    param_1 = lVar15;
    if (lVar4 != 0) {
      if (puVar2 == (undefined *)0x2) {
        bVar1 = 1;
      }
      else if (puVar2 == (undefined *)0x1) {
        if (puVar3 == (undefined *)0x0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(puVar3 + 0x10);
        }
        _objc_retain(uVar13);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar15;
        func_0x00010bef64e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar14;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          bVar1 = 0;
        }
        else {
          bVar1 = *(byte *)(lVar4 + 8);
        }
        _objc_release();
        _objc_release(lVar14);
        _objc_release(puVar2);
        _objc_release(uVar13);
      }
      else {
        bVar1 = 0;
      }
      puVar2 = PTR_PTR_1126b9168;
      _objc_alloc();
      if (puVar3 == (undefined *)0x0) {
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        _objc_retain(0);
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uStack_d0 = 0;
        uVar5 = 0;
        uStack_b8 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_d8 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uVar16 = 0;
        uVar6 = 0;
        param_1 = 0;
        uVar9 = 0;
        uVar11 = 0;
        uVar13 = 0;
      }
      else {
        uStack_90 = *(undefined8 *)(puVar3 + 0x10);
        _objc_retain();
        uStack_98 = *(undefined8 *)(puVar3 + 0x18);
        _objc_retain();
        uStack_d8 = *(undefined8 *)(puVar3 + 0x20);
        _objc_retain();
        uStack_b8 = *(undefined8 *)(puVar3 + 0x28);
        uStack_c0 = *(undefined8 *)(puVar3 + 0x30);
        uVar5 = *(undefined8 *)(puVar3 + 0x38);
        _objc_retain();
        uStack_c8 = *(undefined8 *)(puVar3 + 0x40);
        uStack_d0 = *(undefined8 *)(puVar3 + 0x48);
        uVar16 = *(undefined8 *)(puVar3 + 0x50);
        uVar13 = *(undefined8 *)(puVar3 + 0x58);
        uVar6 = *(undefined8 *)(puVar3 + 0x60);
        _objc_retain();
        uVar7 = *(undefined8 *)(puVar3 + 0x68);
        _objc_retain();
        param_1 = *(long *)(puVar3 + 0x70);
        _objc_retain();
        uVar8 = *(undefined8 *)(puVar3 + 0x78);
        _objc_retain();
        uVar9 = *(undefined8 *)(puVar3 + 0x80);
        _objc_retain();
        uVar10 = *(undefined8 *)(puVar3 + 0x88);
        _objc_retain();
        uVar11 = *(undefined8 *)(puVar3 + 0x90);
        _objc_retain();
      }
      func_0x00010b88ed4c(uVar13,puVar2,uStack_90,uStack_98,uStack_d8,uStack_b8,uStack_c0,uVar5,
                          uStack_c8,uStack_d0,uVar16,uVar6,uVar7,param_1,uVar8,uVar9,uVar10,
                          bVar1 & 1);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(param_1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uStack_d8);
      _objc_release(uStack_98);
      _objc_release(uStack_90);
      func_0x00010c28f060(lVar15);
      _objc_release(puVar2);
    }
LAB_1054494d8:
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) break;
    ___stack_chk_fail();
LAB_105449520:
    lVar14 = 0;
    lVar15 = param_1;
  }
  return;
}



/* Entry: 1054495e0; end: 1054496bf; -[SCAdWebviewConfigRepositoryImpl adWebviewConfigsForIdentifiers:] */

void FUN_1054495e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054496c0;
  puStack_40 = &UNK_11088a0c0;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100589538(uVar1,0,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054496c0; end: 1054496cf;  */

void FUN_1054496c0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uStack_3c;
  long *plStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar3 = uVar4;
      func_0x00010bf529e0(uVar4);
      FUN_105440200(&plStack_38,uVar6,&UNK_10ddaec88,0x4e,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,uVar4);
      plVar5 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_10544b020);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_10544af40;
    }
  }
  plVar5 = (long *)0x0;
LAB_10544af40:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1054496d0; end: 105449753; -[SCAdWebviewConfigRepositoryImpl recentAdWebviewConfigs] */

void FUN_1054496d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2798c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100589538();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105449754; end: 10544975b;  */

void FUN_105449754(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      func_0x0001005fc990(param_2 + 0x10,*(undefined8 *)(param_2 + 8),&UNK_10ddaecd7,0x3f);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544975c; end: 1054498a7; -[SCAdWebviewConfigRepositoryImpl recentAndBookmarkedAdWebviewConfigs] */

void FUN_10544975c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c2798c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100589538();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be2f6e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054498a8; end: 1054499a7; -[SCAdWebviewConfigRepositoryImpl upsertAdWebviewConfig:completion:] */

void FUN_1054498a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054499a8; end: 1054499db;  */

void FUN_1054499a8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee60c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054499dc; end: 105449adb; -[SCAdWebviewConfigRepositoryImpl deleteAdWebviewConfigWithIdentifiers:completion:] */

void FUN_1054499dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105449adc; end: 105449b0f;  */

void FUN_105449adc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105449b10; end: 105449be7; -[SCAdWebviewConfigRepositoryImpl cleanExpiredAdWebviewConfigsWithCompletion:] */

void FUN_105449b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105449be8; end: 105449c1b;  */

void FUN_105449be8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddeee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105449c1c; end: 105449d97; -[SCAdWebviewConfigRepositoryImpl _upsertAdWebviewConfig:completion:] */

undefined * FUN_105449c1c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar15 = param_1;
  func_0x00010c2798c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105449d98;
  puStack_60 = &UNK_11088a0c0;
  _objc_retain(param_3);
  uVar12 = 0;
  uVar2 = uVar15;
  puStack_58 = param_3;
  func_0x00010b5edefc(uVar15,0,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  if (param_3 == (undefined *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar15);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30c00();
  _objc_release(puVar1);
  _objc_release(uVar15);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
    uVar12 = param_1;
  }
  _objc_release(uVar2);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)(param_3 + 0x20);
  _objc_retain(uVar12);
  if (lVar13 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar13 + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20);
  }
  _objc_retain();
  lVar13 = *(long *)(param_3 + 0x20);
  if (lVar13 == 0) {
    uStack_118 = 0;
    uStack_110 = 0;
    uVar4 = 0;
  }
  else {
    uStack_118 = *(undefined8 *)(lVar13 + 0x28);
    uStack_110 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x38);
  }
  _objc_retain();
  lVar13 = *(long *)(param_3 + 0x20);
  if (lVar13 == 0) {
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uVar5 = 0;
    uVar16 = 0;
  }
  else {
    uStack_120 = *(undefined8 *)(lVar13 + 0x40);
    uStack_128 = *(undefined8 *)(lVar13 + 0x48);
    uStack_130 = *(undefined8 *)(lVar13 + 0x50);
    uVar16 = *(undefined8 *)(lVar13 + 0x58);
    uVar5 = *(undefined8 *)(lVar13 + 0x60);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x68);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x70);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x78);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x80);
  }
  _objc_retain();
  if (*(long *)(param_3 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x88);
  }
  _objc_retain();
  lVar13 = *(long *)(param_3 + 0x20);
  if (lVar13 == 0) {
    bVar14 = 0;
    uVar11 = 0;
  }
  else {
    bVar14 = *(byte *)(lVar13 + 8);
    uVar11 = *(undefined8 *)(lVar13 + 0x90);
  }
  _objc_retain();
  FUN_10544b618(uVar16,uVar12,uVar15,uVar2,uVar3,uStack_118,uStack_110,uVar4,uStack_120,uStack_128,
                uStack_130,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,bVar14 & 1);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar15);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105449d98; end: 10544a05f;  */

undefined * FUN_105449d98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  if (lVar12 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar12 + 0x10);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  }
  _objc_retain();
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uVar4 = 0;
  }
  else {
    uStack_98 = *(undefined8 *)(lVar12 + 0x28);
    uStack_90 = *(undefined8 *)(lVar12 + 0x30);
    uVar4 = *(undefined8 *)(lVar12 + 0x38);
  }
  _objc_retain();
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uVar5 = 0;
    uVar14 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(lVar12 + 0x40);
    uStack_a8 = *(undefined8 *)(lVar12 + 0x48);
    uStack_b0 = *(undefined8 *)(lVar12 + 0x50);
    uVar14 = *(undefined8 *)(lVar12 + 0x58);
    uVar5 = *(undefined8 *)(lVar12 + 0x60);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  }
  _objc_retain();
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  }
  _objc_retain();
  lVar12 = *(long *)(param_1 + 0x20);
  if (lVar12 == 0) {
    bVar13 = 0;
    uVar11 = 0;
  }
  else {
    bVar13 = *(byte *)(lVar12 + 8);
    uVar11 = *(undefined8 *)(lVar12 + 0x90);
  }
  _objc_retain();
  FUN_10544b618(uVar14,param_2,uVar1,uVar2,uVar3,uStack_98,uStack_90,uVar4,uStack_a0,uStack_a8,
                uStack_b0,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,bVar13 & 1);
  _objc_release(param_2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10544a060; end: 10544a15b; -[SCAdWebviewConfigRepositoryImpl _deleteAdWebviewConfigWithIdentifiers:completion:] */

void FUN_10544a060(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c2798c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10544a15c;
  puStack_50 = &UNK_11088a0c0;
  _objc_retain(param_3);
  uVar2 = uVar1;
  uStack_48 = param_3;
  func_0x00010b5edefc(uVar1,0,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be30c00(param_1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_1);
  }
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10544a15c; end: 10544a183;  */

undefined * FUN_10544a15c(long param_1,undefined8 param_2)

{
  FUN_10544ba94(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10544a184; end: 10544a2af; -[SCAdWebviewConfigRepositoryImpl _cleanExpiredAdWebviewConfigsWithCompletion:] */

void FUN_10544a184(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c1223c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (100 < uVar2) {
    uVar2 = uVar1;
    func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_11088a170);
    uVar3 = param_1;
    func_0x00010c2798c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10544a2c4;
    puStack_50 = &UNK_11088a0c0;
    _objc_retain(uVar2);
    uVar4 = uVar3;
    uStack_48 = uVar2;
    func_0x00010b5edefc(uVar3,0,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010be30c00(param_1);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,param_1);
    }
    _objc_release(uVar4);
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10544a2b0; end: 10544a2c3;  */

undefined8 FUN_10544a2b0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x10);
  }
  return 0;
}



/* Entry: 10544a2c4; end: 10544a2eb;  */

undefined * FUN_10544a2c4(long param_1,undefined8 param_2)

{
  FUN_10544bc14(param_2,*(undefined8 *)(param_1 + 0x20));
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 10544a2ec; end: 10544a323; -[SCAdWebviewConfigRepositoryImpl initDatabase] */

void FUN_10544a2ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10544a324; end: 10544a35b; -[SCAdWebviewConfigRepositoryImpl transactor] */

void FUN_10544a324(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x00010bfee6e0();
    lVar1 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10544a35c; end: 10544a543; -[SCAdWebviewConfigRepositoryImpl _handleSQLFetchedResult:adIdentifiers:] */

void FUN_10544a35c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10544a544;
  uStack_60 = 0x10544a554;
  uStack_58 = 0;
  puStack_e0 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_10544a544;
  uStack_90 = 0x10544a554;
  uStack_88 = 0;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10544a55c;
  puStack_c0 = &UNK_110850558;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10544a594;
  puStack_e8 = &UNK_11084d888;
  puStack_a8 = puStack_e0;
  puStack_78 = puStack_b8;
  func_0x00010c0c0800(param_3);
  _objc_initWeak(auStack_108,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_110,auStack_108);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10544a544; end: 10544a55b;  */

void FUN_10544a544(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10544a55c; end: 10544a5cb;  */

void FUN_10544a55c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10544a5cc; end: 10544a6d3;  */

void FUN_10544a5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dddfd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2,param_2,uVar3,puVar4,puVar5,
                        &PTR____CFConstantStringClassReference_110ddd698,in_x6,in_x7,uVar7,uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10544a6d4; end: 10544a86f; -[SCAdWebviewConfigRepositoryImpl _handleSqlMutationResult:adIdentifiers:] */

bool FUN_10544a6d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10544a544;
  uStack_60 = 0x10544a554;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10544a874;
  puStack_90 = &UNK_11084d888;
  puStack_78 = puStack_88;
  func_0x00010c0c0800(param_3);
  _objc_initWeak(auStack_b0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar2);
  lVar1 = puStack_78[5];
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1 == 0;
}



/* Entry: 10544a870; end: 10544a873;  */

void FUN_10544a870(void)

{
  return;
}



/* Entry: 10544a874; end: 10544a8ab;  */

void FUN_10544a874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10544a8ac; end: 10544a9b3;  */

void FUN_10544a8ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,0xe);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dddff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar2,param_2,uVar3,puVar4,puVar5,
                        &PTR____CFConstantStringClassReference_110dde018,in_x6,in_x7,uVar7,uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10544a9b4; end: 10544a9e3; -[SCAdWebviewConfigRepositoryImpl setTransactor:] */

void FUN_10544a9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10544a9e4; end: 10544a9eb; -[SCAdWebviewConfigRepositoryImpl adCrashLogger] */

undefined8 FUN_10544a9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10544a9ec; end: 10544a9f3; -[SCAdWebviewConfigRepositoryImpl performer] */

undefined8 FUN_10544a9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10544a9f4; end: 10544aa47; -[SCAdWebviewConfigRepositoryImpl .cxx_destruct] */

void FUN_10544a9f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10544aa48; end: 10544ad2f; +[SCAdWebviewConfigDatabase schema] */

void FUN_10544aa48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c0000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c07f9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR_PTR_1126b8500;
  puStack_88 = puVar2;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c08c1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar4,param_2,1,2,puVar5);
  puVar6 = PTR_PTR_1126b8500;
  puStack_80 = puVar4;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c0912);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar6,param_2,2,3,puVar7);
  puVar8 = PTR_PTR_1126b8500;
  puStack_78 = puVar6;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2c096b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar8,param_2,3,4,puVar9);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar12,param_2,4,puVar1,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar11 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar12 = *(undefined **)(puVar11 + 8);
    _objc_retain(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10544ad30; end: 10544ad57; -[SCAdWebviewConfigDatabase getConn] */

void FUN_10544ad30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10544ad58; end: 10544addf; -[SCAdWebviewConfigDatabase initWithSqliteConnection:] */

undefined1 * FUN_10544ad58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e84f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10544ade0; end: 10544ae63; -[SCAdWebviewConfigDatabase .cxx_destruct] */

void FUN_10544ade0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10544ae64; end: 10544ae6f; -[SCAdWebviewConfigDatabase .cxx_construct] */

void FUN_10544ae64(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10544ae70; end: 10544b01f;  */

void FUN_10544ae70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar5,&UNK_10ddaec88,0x4e,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      plVar4 = plStack_38;
      func_0x0001005fcb64(plStack_38,FUN_10544b020);
      _objc_retainAutoreleasedReturnValue();
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      goto LAB_10544af40;
    }
  }
  plVar4 = (long *)0x0;
LAB_10544af40:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10544b020; end: 10544b3e3;  */

void FUN_10544b020(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126b9168;
  _objc_alloc(PTR_PTR_1126b9168);
  lVar2 = param_2;
  func_0x0001005fdab8(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x0001005fdab8(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x0001005fdab8(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010b5ef268(param_2,3);
  lVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  lVar7 = param_2;
  func_0x0001005ff748(param_2,5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010b5ef268(param_2,6);
  lVar9 = param_2;
  func_0x00010b5ef268(param_2,7);
  lVar10 = param_2;
  func_0x00010b5ef268(param_2,8);
  func_0x00010b5ef2a0(param_2,9);
  lVar11 = param_2;
  func_0x0001005fdab8(param_2,10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x0001005fdab8(param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x0001005fdab8(param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  func_0x0001005fdab8(param_2,0xd);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  func_0x0001005ff748(param_2,0xe);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x0001005ff748(param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010b5ef268(param_2,0x10);
  lVar18 = param_2;
  func_0x0001005fdab8(param_2,0x11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_2,0x12);
  func_0x00010b5ef268(param_2,0x13);
  func_0x00010b5ef268(param_2,0x14);
  func_0x00010b5ef268(param_2,0x15);
  func_0x00010b5ef268(param_2,0x16);
  func_0x00010b88ed4c(param_1,puVar1,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,lVar17 != 0);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10544b3e4; end: 10544b4ef;  */

void FUN_10544b3e4(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_10ddaecd7,0x3f);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544b4f0; end: 10544b617;  */

void FUN_10544b4f0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddaed17,0x58);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_10544b020);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544b618; end: 10544ba93;  */

void FUN_10544b618(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined4 param_24)

{
  int iVar1;
  long lVar2;
  int aiStack_7c [3];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x28;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddaed70,0x32d);
      aiStack_7c[0] = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,aiStack_7c,param_4);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_5);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_6);
      aiStack_7c[0] = iVar1 + 2;
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_7);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_8);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],param_9);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_10);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_11);
      aiStack_7c[0] = iVar1 + 4;
      func_0x00010bccb848(param_1,lVar2,iVar1 + 3);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_12);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_13);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_14);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_15);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_16);
      func_0x00010b5eeb94(lVar2,aiStack_7c,param_17);
      iVar1 = aiStack_7c[0];
      aiStack_7c[0] = aiStack_7c[0] + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_18);
      func_0x0001005fcac0(lVar2,aiStack_7c,param_20);
      iVar1 = aiStack_7c[0];
      func_0x0001005edcd4(lVar2,aiStack_7c[0],(undefined1)param_21);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_21._1_1_);
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_23);
      func_0x0001005edcd4(lVar2,iVar1 + 3,(undefined1)param_24);
      func_0x0001005edcd4(lVar2,iVar1 + 4,param_24._1_1_);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10544ba94; end: 10544bc13;  */

void FUN_10544ba94(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar4,&UNK_10ddaf09e,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      func_0x00010b5ef0d0(plStack_38);
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10544bc14; end: 10544bd93;  */

void FUN_10544bc14(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_2;
      func_0x00010bf529e0(param_2);
      FUN_105440200(&plStack_38,uVar4,&UNK_10ddaf0d3,0x34,uVar3);
      uStack_3c = 1;
      FUN_10544033c(plStack_38,&uStack_3c,param_2);
      func_0x00010b5ef0d0(plStack_38);
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10544bd94; end: 10544bdaf;  */

void FUN_10544bd94(void)

{
  _objc_opt_new(PTR_PTR_1126b9178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544bdb0; end: 10544be8f;  */

void FUN_10544bdb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bed1780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10544be90; end: 10544c267; -[SCAdUnlockableTrackingServiceProvider _unlockableGeoFilterTrackerWithSnapAdsUnlockableTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10544be90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar25 = (long)_DAT_112723890;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c291140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b9188;
  _objc_alloc();
  lVar23 = (long)_DAT_112723894;
  lVar1 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3c40(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b9170;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112723888;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar5,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b9198;
  _objc_alloc();
  uVar7 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126b7d78;
  _objc_alloc();
  lVar24 = (long)_DAT_1127238a0;
  lVar1 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_1127238a4;
  lVar4 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1280(puVar8,param_2,lVar9,lVar10,0);
  lVar11 = param_1 + _DAT_1127238a8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c281640();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar14 = lVar24;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127238ac;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010befe1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar19 = lVar23;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_1127238b0;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c249b40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar22 = lVar25;
  func_0x00010befe120();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010c0d7980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045240(puVar6,param_2,0,uVar7,puVar8,lVar13,lVar2,puVar3,lVar14,lVar16,lVar18,lVar19,
                      puVar5,lVar21,lVar22,lVar26);
  _objc_release(lVar26);
  _objc_release(param_1);
  _objc_release(lVar22);
  _objc_release(lVar25);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar23);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar8);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10544c268; end: 10544c463;  */

void FUN_10544c268(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x000100b8f89c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar10);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x000100b8f89c();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010bfb2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    lVar11 = 0;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x000100b8f8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1f480();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  ppuVar1 = &PTR_PTR_1126b8d40;
  if ((int)lVar9 == 0) {
    ppuVar1 = &PTR_PTR_1126b8d48;
  }
  puVar10 = *ppuVar1;
  _objc_alloc(puVar10);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x000100b8f8e4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x000100b8f908();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0271c0(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10544c464; end: 10544c517;  */

void FUN_10544c464(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x000100b8f8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f480();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  ppuVar1 = &PTR_PTR_1126b8d30;
  if ((int)lVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126b8d38;
  }
  _objc_opt_new(*ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544c518; end: 10544c61f; -[SCAdUnlockableTrackingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10544c518(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127238a4);
  _objc_destroyWeak(param_1 + _DAT_1127238d0);
  _objc_destroyWeak(param_1 + _DAT_1127238cc);
  _objc_destroyWeak(param_1 + _DAT_1127238c8);
  _objc_destroyWeak(param_1 + _DAT_1127238bc);
  _objc_destroyWeak(param_1 + _DAT_1127238b0);
  _objc_destroyWeak(param_1 + _DAT_1127238b4);
  _objc_destroyWeak(param_1 + _DAT_11272389c);
  _objc_destroyWeak(param_1 + _DAT_112723898);
  _objc_destroyWeak(param_1 + _DAT_112723888);
  _objc_destroyWeak(param_1 + _DAT_1127238b8);
  _objc_destroyWeak(param_1 + _DAT_1127238a8);
  _objc_destroyWeak(param_1 + _DAT_112723890);
  _objc_destroyWeak(param_1 + _DAT_1127238ac);
  _objc_destroyWeak(param_1 + _DAT_1127238c4);
  _objc_destroyWeak(param_1 + _DAT_1127238a0);
  _objc_destroyWeak(param_1 + _DAT_112723894);
  _objc_destroyWeak(param_1 + _DAT_1127238c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272388c,0);
  return;
}



/* Entry: 10544c620; end: 10544c6eb; -[SCAdNetworkResponseLoggerImpl init] */

undefined1 * FUN_10544c620(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e8500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10544c6ec; end: 10544c82f; -[SCAdNetworkResponseLoggerImpl logNetworkRequestInfo:adIdentifiers:logContextType:] */

void FUN_10544c6ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10544c830; end: 10544c86b;  */

void FUN_10544c830(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be564e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10544c86c; end: 10544c94b; -[SCAdNetworkResponseLoggerImpl loadRequestData:completion:] */

void FUN_10544c86c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10544c94c; end: 10544c983;  */

void FUN_10544c94c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10544c984; end: 10544cbb3; -[SCAdNetworkResponseLoggerImpl _logNetworkRequestInfo:adIdentifiers:logContextType:timestamp:] */

void FUN_10544c984(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126b91d8;
    _objc_alloc(PTR_PTR_1126b91d8);
    func_0x00010c0529a0();
    lVar4 = *(long *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6,param_2,puVar2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(puVar2);
    if (lVar4 == 0x28) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(uVar6,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0();
      _objc_release(uVar6);
      _objc_release(puVar2);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10544cbb4; end: 10544ceef; -[SCAdNetworkResponseLoggerImpl _loadRequestData:completion:] */

void FUN_10544cbb4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar11 = *(long *)(param_1 + 0x10);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010bf529e0();
    _objc_release(lVar11);
    _objc_release(puVar10);
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
      _objc_alloc_init();
      func_0x00010c189b60();
      lVar12 = *(long *)(param_1 + 0x10);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar11 = lVar12;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar11 == 0) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110dde078;
      }
      else {
        ppuVar7 = &PTR____CFConstantStringClassReference_110dde078;
        do {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar12);
            }
            uVar13 = *(undefined8 *)(lVar9 * 8);
            uVar3 = uVar13;
            func_0x00010bfe5fa0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            func_0x00010be189e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            lVar5 = lVar4;
            func_0x00010c08fa60();
            ppuVar6 = ppuVar7;
            if (lVar5 != 0) {
              ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar7);
            }
            uVar3 = uVar13;
            func_0x00010c2709c0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar10;
            func_0x00010c25d400();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0a00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            _objc_release(uVar13);
            _objc_release(puVar2);
            _objc_release(lVar4);
            lVar9 = lVar9 + 1;
          } while (lVar11 != lVar9);
          lVar11 = lVar12;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar12);
      param_3 = (undefined *)0x4;
      ppuVar6 = ppuVar7;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,ppuVar6);
      _objc_release(ppuVar6);
      _objc_release(ppuVar7);
      _objc_release(puVar10);
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    puVar10 = param_3;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 10544cef0; end: 10544cf93; -[SCAdNetworkResponseLoggerImpl _formatAdIdentifiers:] */

void FUN_10544cef0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf446e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dde0f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dde118);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10544cf94; end: 10544cf9b; -[SCAdNetworkResponseLoggerImpl logTypeToLogInfoMapping] */

undefined8 FUN_10544cf94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10544cf9c; end: 10544cfcb; -[SCAdNetworkResponseLoggerImpl .cxx_destruct] */

void FUN_10544cf9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10544cfcc; end: 10544d0b3; -[SCAdNetworkLog initWithTimestamp:log:identifiers:logContextType:] */

undefined1 *
FUN_10544cfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e8508;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10544d0b4; end: 10544d0d7; -[SCAdNetworkLog copyWithZone:] */

undefined8 FUN_10544d0b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10544d0d8; end: 10544d0df; -[SCAdNetworkLog timestamp] */

undefined8 FUN_10544d0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10544d0e0; end: 10544d0e7; -[SCAdNetworkLog log] */

undefined8 FUN_10544d0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10544d0e8; end: 10544d0ef; -[SCAdNetworkLog identifiers] */

undefined8 FUN_10544d0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10544d0f0; end: 10544d0f7; -[SCAdNetworkLog logContextType] */

undefined8 FUN_10544d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10544d0f8; end: 10544d133; -[SCAdNetworkLog .cxx_destruct] */

void FUN_10544d0f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10544d134; end: 10544d15b; -[SCAdOperationMetricsManagerImpl initWithGrapheneRegistry:debugNetworkResponseLogger:lifecycleWatermarkMetricsManager:userTrackedLogger:adConfigProvider:contextExperimentService:flipper:] */

void FUN_10544d134(void)

{
  func_0x00010c018560();
  return;
}



/* Entry: 10544d15c; end: 10544d19f; -[SCAdOperationMetricsManagerImpl _stringFromRequestType:] */

void FUN_10544d15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c25d580(PTR_PTR_1126b91e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10576c65c(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544d1a0; end: 10544d1e3; -[SCAdOperationMetricsManagerImpl _stringFromRequestFailedReason:] */

void FUN_10544d1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c25d560(PTR_PTR_1126b91e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010576c680(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544d1e4; end: 10544d227; -[SCAdOperationMetricsManagerImpl _stringFromInternalError:] */

void FUN_10544d1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c25d460(PTR_PTR_1126b91e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010576c6a8(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544d228; end: 10544d26b; -[SCAdOperationMetricsManagerImpl _stringFromInternalErrorSource:] */

void FUN_10544d228(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c25d480(PTR_PTR_1126b91e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010576c6d0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10544d26c; end: 10544d4d7; -[SCAdOperationMetricsManagerImpl serveRequestSubmitted:requestURL:requestType:debugViewContext:isPrimary:] */

void FUN_10544d26c(undefined8 param_1,undefined **param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar26 = param_3;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar26;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar26);
  lVar5 = param_3;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar5;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar26 != 0) {
    lVar28 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar5);
      }
      lVar6 = *(long *)(lVar28 * 8);
      func_0x00010bef2c80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar27 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00010befa120(puVar2);
          lVar27 = lVar27 + 1;
        } while (lVar7 != lVar27);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      lVar28 = lVar28 + 1;
    } while (lVar28 != lVar26);
    lVar26 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar19 = puVar2;
  uVar12 = param_4;
  puVar13 = param_6;
  func_0x00010be91980(param_1);
  iVar24 = (int)uVar12;
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar19);
  puVar2 = PTR_PTR_1126b91e8;
  if (iVar24 != 0) {
    _objc_retain(puVar13);
    _objc_retain(param_5);
    _objc_opt_new();
    func_0x00010c116320(puVar19);
    func_0x0001084b952c();
    func_0x00010c163f80(puVar2);
    func_0x00010c1ec240(puVar2);
    _objc_release(param_5);
    puVar8 = puVar19;
    func_0x00010c0b39c0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25b040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d9e0(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c164360(puVar2);
    puVar8 = puVar19;
    func_0x00010c0b39c0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    func_0x00010c222c00(puVar2);
    _objc_release(puVar8);
    puVar8 = puVar19;
    func_0x00010c06a360(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164260(puVar2);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar13;
    func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_11088a2a0);
    func_0x00010c163a80(puVar2);
    func_0x00010c20a3c0(puVar2);
    puVar9 = puVar19;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = puVar11;
    func_0x00010c11af80(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(puVar2);
    _objc_release(puVar9);
    puVar9 = puVar11;
    func_0x00010bf8c980(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193c40(puVar2);
    _objc_release(puVar9);
    func_0x00010c0821a0(puVar11);
    func_0x00010c1b16c0(puVar2);
    puVar9 = puVar19;
    func_0x00010c0b39c0(puVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107cc0();
    func_0x00010c1b14e0(puVar2);
    _objc_release(puVar9);
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar12);
    param_2 = &PTR___NSConcreteGlobalBlock_11088a2e0;
    puVar9 = puVar13;
    func_0x000100504554();
    _objc_release(puVar13);
    puVar13 = puVar19;
    func_0x00010c116320();
    func_0x0001084b952c();
    func_0x00010bae7a70();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar13;
    if (puVar13 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar14 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      _objc_release(puVar14);
    }
    if (puVar13 == (undefined *)0x0) {
      _objc_release(puVar10);
    }
    _objc_release(puVar13);
    uVar12 = *(undefined8 *)(param_3 + 0x38);
    puVar13 = puVar2;
    func_0x00010bfc52e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar19;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeb40(uVar12);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
    _objc_release(puVar10);
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  _objc_release(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  puVar19 = PTR_PTR_1126b91f0;
  _objc_retain(param_2);
  _objc_opt_new(puVar19);
  ppuVar20 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar19);
  _objc_release(ppuVar20);
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010bef60a0(param_2);
  func_0x00010c25d240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar19);
  _objc_release(puVar2);
  func_0x00010c0ec0e0(param_2);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar19);
  ppuVar20 = param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar21;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar22;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  func_0x00010c19d760(puVar19);
  ppuVar20 = param_2;
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar20;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6f7c(param_2,ppuVar21);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar19);
  _objc_release(ppuVar21);
  _objc_release(ppuVar20);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar19);
  ppuVar20 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c163720(puVar19);
  _objc_release(ppuVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10544d4d8; end: 10544d9b7; -[SCAdOperationMetricsManagerImpl logAdServeRequestInfoBlizzardEvent:requestURL:isPrimary:statusCode:adResponseList:] */

void FUN_10544d4d8(long param_1,undefined **param_2,undefined *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b91e8;
  if (param_5 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_opt_new();
    func_0x00010c116320(param_3);
    func_0x0001084b952c();
    func_0x00010c163f80(puVar1);
    func_0x00010c1ec240(puVar1);
    _objc_release(param_4);
    puVar2 = param_3;
    func_0x00010c0b39c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25b040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d9e0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c164360(puVar1);
    puVar2 = param_3;
    func_0x00010c0b39c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e220();
    func_0x00010c222c00(puVar1);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c06a360(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164260(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x000100504554(param_7,&PTR___NSConcreteGlobalBlock_11088a2a0);
    func_0x00010c163a80(puVar1);
    func_0x00010c20a3c0(puVar1);
    puVar3 = param_3;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010c11af80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(puVar1);
    _objc_release(puVar3);
    puVar3 = puVar5;
    func_0x00010bf8c980(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193c40(puVar1);
    _objc_release(puVar3);
    func_0x00010c0821a0(puVar5);
    func_0x00010c1b16c0(puVar1);
    puVar3 = param_3;
    func_0x00010c0b39c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107cc0();
    func_0x00010c1b14e0(puVar1);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    param_2 = &PTR___NSConcreteGlobalBlock_11088a2e0;
    puVar3 = param_7;
    func_0x000100504554();
    _objc_release(param_7);
    puVar4 = param_3;
    func_0x00010c116320();
    func_0x0001084b952c();
    func_0x00010bae7a70();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    puVar4 = puVar1;
    func_0x00010bfc52e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeb40(uVar6);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b91f0;
  _objc_retain(param_2);
  _objc_opt_new(puVar2);
  ppuVar13 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar2);
  _objc_release(ppuVar13);
  puVar1 = PTR_PTR_1126b8ca0;
  func_0x00010bef60a0(param_2);
  func_0x00010c25d240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar2);
  _objc_release(puVar1);
  func_0x00010c0ec0e0(param_2);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar2);
  ppuVar13 = param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar14;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  func_0x00010c19d760(puVar2);
  ppuVar13 = param_2;
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6f7c(param_2,ppuVar14);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar2);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar2);
  ppuVar13 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c163720(puVar2);
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10544d9b8; end: 10544dbb7;  */

void FUN_10544d9b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b91f0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c15ed20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8ca0;
  func_0x00010bef60a0(param_2);
  func_0x00010c25d240(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar1);
  _objc_release(puVar3);
  func_0x00010c0ec0e0(param_2);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar1);
  uVar2 = param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c19d760(puVar1);
  uVar2 = param_2;
  func_0x00010bef52c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c6f7c(param_2,uVar4);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar1);
  uVar2 = param_2;
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c163720(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10544dbb8; end: 10544dbbf;  */

void FUN_10544dbb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serveItemId_112635568);
  return;
}



/* Entry: 10544dbc0; end: 10544dd83; -[SCAdOperationMetricsManagerImpl serveRequestFailed:errorResponseType:requestType:failedReason:isPrimary:] */

void FUN_10544dbc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar16;
  undefined8 *unaff_x28;
  double dVar17;
  undefined8 *puStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [128];
  undefined1 auStack_2f0 [128];
  long lStack_270;
  undefined8 *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = 0.0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar12 = param_6;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &uStack_1b0;
  puVar9 = auStack_f0;
  lVar10 = 0x10;
  puStack_200 = param_3;
  func_0x00010bf52a60();
  if (param_3 != (undefined8 *)0x0) {
    lStack_1f8 = *plStack_1a0;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lStack_1f8) {
          _objc_enumerationMutation(puStack_200);
        }
        unaff_x25 = *(long *)(lStack_1a8 + (long)unaff_x28 * 8);
        dVar17 = 0.0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bef2c80();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = unaff_x25;
        func_0x00010bf52a60();
        if (lVar10 != 0) {
          unaff_x23 = *plStack_1e0;
          unaff_x26 = lVar10;
          do {
            unaff_x27 = 0;
            do {
              if (*plStack_1e0 != unaff_x23) {
                _objc_enumerationMutation(unaff_x25);
              }
              if (param_6 != 6) {
                lVar12 = param_7;
                func_0x00010c0ae200(param_1,param_2,param_6,
                                    *(undefined8 *)(lStack_1e8 + unaff_x27 * 8),param_5);
              }
              unaff_x27 = unaff_x27 + 1;
            } while (unaff_x26 != unaff_x27);
            unaff_x26 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_1f0,auStack_170,0x10);
          } while (unaff_x26 != 0);
        }
        _objc_release(unaff_x25);
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (unaff_x28 != param_3);
      puVar2 = &uStack_1b0;
      puVar9 = auStack_f0;
      lVar10 = 0x10;
      param_3 = puStack_200;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (param_3 != (undefined8 *)0x0);
  }
  puVar1 = puStack_200;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  iVar11 = (int)lVar12;
  pcStack_208 = FUN_10544dd84;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar2;
  puStack_260 = unaff_x28;
  lStack_258 = unaff_x27;
  lStack_250 = unaff_x26;
  lStack_248 = unaff_x25;
  uStack_240 = unaff_x24;
  lStack_238 = unaff_x23;
  uStack_230 = param_1;
  uStack_228 = param_5;
  lStack_220 = param_6;
  lStack_218 = param_7;
  puStack_210 = &stack0xfffffffffffffff0;
  if ((int)puVar9 != 0) {
    dVar17 = 0.0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    lStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = &uStack_3b0;
    puVar9 = auStack_2f0;
    lVar10 = 0x10;
    puStack_400 = puVar2;
    func_0x00010bf52a60();
    iVar11 = (int)lVar12;
    if (puStack_400 != (undefined8 *)0x0) {
      lVar13 = *plStack_3a0;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_3a0 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          lVar3 = *(long *)(lStack_3a8 + (long)puVar14 * 8);
          dVar17 = 0.0;
          uStack_3e8 = 0;
          uStack_3f0 = 0;
          uStack_3d8 = 0;
          plStack_3e0 = (long *)0x0;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          func_0x00010bef2c80();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar3;
          func_0x00010bf52a60();
          if (lVar10 != 0) {
            lVar15 = *plStack_3e0;
            do {
              lVar16 = 0;
              do {
                if (*plStack_3e0 != lVar15) {
                  _objc_enumerationMutation(lVar3);
                }
                if ((*(byte *)(puVar1 + 8) & 1) == 0) {
                  puVar4 = (undefined *)0x2;
                  func_0x000106458ea4();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar4 = PTR_PTR_1126b91f8;
                  func_0x00010bef4c00();
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar5 = puVar4;
                func_0x00010c2a7860();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf604c0(PTR_PTR_1126afec0);
                puVar6 = puVar5;
                func_0x00010c2a7c80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                uVar7 = puVar1[1];
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e2380();
                _objc_release(uVar7);
                _objc_release(puVar6);
                _objc_release(puVar4);
                lVar16 = lVar16 + 1;
              } while (lVar10 != lVar16);
              lVar10 = lVar3;
              func_0x00010bf52a60(lVar3,param_2,&uStack_3f0,auStack_370,0x10);
            } while (lVar10 != 0);
          }
          _objc_release(lVar3);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar14 != puStack_400);
        puVar14 = &uStack_3b0;
        puVar9 = auStack_2f0;
        lVar10 = 0x10;
        puStack_400 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,puVar14,puVar9);
        iVar11 = (int)lVar12;
      } while (puStack_400 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
    puVar1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    puVar4 = PTR_PTR_1126b8d98;
    func_0x00010c13bb00(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x0001054575b4(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db95f8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = puVar5;
    if (lVar10 != -1) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24998,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    puVar2 = puVar1;
    func_0x00010be245c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155420(dVar17,PTR_PTR_1126afec0);
    func_0x00010befbfe0(puVar2,param_2,puVar4,(long)dVar17);
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126b8d98;
    func_0x00010c13bc20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001054575b4(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110db95f8,puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar14);
    func_0x00010be245c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000((double)(long)puVar9);
    _objc_release(puVar1);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10544dd84; end: 10544dfcf; -[SCAdOperationMetricsManagerImpl serveResponseStartsDeserializing:isPrimary:] */

void FUN_10544dd84(double param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 *param_5,long param_6,int param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_4;
  if ((int)param_5 != 0) {
    param_1 = 0.0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x00010c06a360();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = &uStack_1b0;
    param_5 = auStack_f0;
    param_6 = 0x10;
    puStack_200 = param_4;
    func_0x00010bf52a60();
    if (puStack_200 != (undefined8 *)0x0) {
      lVar9 = *plStack_1a0;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          lVar1 = *(long *)(lStack_1a8 + (long)puVar10 * 8);
          param_1 = 0.0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010bef2c80();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar11 = *plStack_1e0;
            do {
              lVar12 = 0;
              do {
                if (*plStack_1e0 != lVar11) {
                  _objc_enumerationMutation(lVar1);
                }
                if ((*(byte *)(param_2 + 8) & 1) == 0) {
                  puVar3 = (undefined *)0x2;
                  func_0x000106458ea4();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  puVar3 = PTR_PTR_1126b91f8;
                  func_0x00010bef4c00();
                  _objc_retainAutoreleasedReturnValue();
                }
                puVar4 = puVar3;
                func_0x00010c2a7860();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf604c0(PTR_PTR_1126afec0);
                puVar5 = puVar4;
                func_0x00010c2a7c80();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                uVar6 = param_2[1];
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e2380();
                _objc_release(uVar6);
                _objc_release(puVar5);
                _objc_release(puVar3);
                lVar12 = lVar12 + 1;
              } while (lVar2 != lVar12);
              lVar2 = lVar1;
              func_0x00010bf52a60(lVar1,param_3,&uStack_1f0,auStack_170,0x10);
            } while (lVar2 != 0);
          }
          _objc_release(lVar1);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar10 != puStack_200);
        puVar10 = &uStack_1b0;
        param_5 = auStack_f0;
        param_6 = 0x10;
        puStack_200 = param_4;
        func_0x00010bf52a60(param_4,param_3,puVar10,param_5);
      } while (puStack_200 != (undefined8 *)0x0);
    }
    _objc_release(param_4);
    param_2 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (param_7 != 0) {
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c13bb00(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x0001054575b4(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110db95f8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar7);
    puVar3 = puVar4;
    if (param_6 != -1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110f24998,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar5);
    }
    puVar7 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010befbfe0(puVar7,param_3,puVar3,(long)param_1);
    _objc_release(puVar7);
    puVar4 = PTR_PTR_1126b8d98;
    func_0x00010c13bc20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001054575b4(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110db95f8,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar10);
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000((double)(long)param_5);
    _objc_release(param_2);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10544dfd0; end: 10544e1cb; -[SCAdOperationMetricsManagerImpl serveResponseFinishesDeserializing:responseSize:deserializationLatency:serveItemsCount:isPrimary:] */

void FUN_10544dfd0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,int param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_7 != 0) {
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010c13bb00(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x0001054575b4(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110db95f8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = puVar3;
    if (param_6 != -1) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24998,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    uVar2 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010befbfe0(uVar2,param_3,puVar1,(long)param_1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c13bc20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001054575b4(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110db95f8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_4);
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000((double)param_5);
    _objc_release(param_2);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10544e1cc; end: 10544e1cf; -[SCAdOperationMetricsManagerImpl serveResponseReceived:adIdentifier:adInsertionConfigDescription:adRequestDescription:isPrimary:] */

void FUN_10544e1cc(void)

{
  return;
}


